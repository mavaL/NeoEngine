/********************************************************************
created:	2016/08/26 14:00
author:		maval

purpose:	Fur rendering

references:	1. http://developer.download.nvidia.com/SDK/10/direct3d/Source/Fur/doc/FurShellsAndFins.pdf
			2. http://blog.csdn.net/noahzuo/article/details/51162472
*********************************************************************/

#include "../Common.h"


Texture2D		texDiffuse		: register(t0);
Texture2D		texNormal		: register(t1);
Texture2D		texSpec			: register(t2);
Texture2DArray	furTextureArray	: register(t3);
Texture2DArray	furOffsetArray	: register(t4);
SamplerState	samLinear		: register(s0);

static const int numShells = 15;

cbuffer cbFur	:	register(b10)
{
	float4	vCombParams;	// xyz = combine direction, w = combine strength
	float4	vModelCamPos;	// camera pos in object space
	float4	vModelLightDir;	// light in object space
	float	shellIncrement;
	int		iShell;
};

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
    float4 Pos : POSITION;
	float4 tangent : TANGENT;
	float3 binormal : BINORMAL;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
};

struct VS_OUTPUT
{
    float4 Pos			: SV_POSITION;
	float2 uv			: TEXCOORD0;
	float3 normal		: TEXCOORD1;
	float3 LightVector  : TEXCOORD2;
	float3 ViewVector   : TEXCOORD3;
	float3 CombVector   : TEXCOORD4;
	int shellNumber		: SHELLNUM;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS_Fur(VS_INPUT IN)
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

	float4 color = texDiffuse.SampleLevel(samLinear, IN.uv, 0);
	// the alpha channel specifies the length of hair 
	float lengthFraction = color.a;
	if (lengthFraction < 0.2) lengthFraction = 0.2;
	float3 CombVector = vCombParams.w * vCombParams.xyz;

	float3 vModelPos = IN.Pos.xyz + (IN.normal + CombVector)*shellIncrement*iShell*lengthFraction;
	float4 vWorldPos = mul(float4(vModelPos, 1), World);

	OUT.Pos = mul(vWorldPos, ViewProj);
	OUT.normal.xyz = mul(IN.normal, (float3x3)WorldIT);
	OUT.uv = IN.uv;

	//transform the light and eye vectors to tangent space for per pixel lighting 
	float3 eyeVector = vModelCamPos.xyz - vModelPos;
	OUT.ViewVector.x = dot(IN.tangent, eyeVector);
	OUT.ViewVector.y = dot(IN.binormal, eyeVector);
	OUT.ViewVector.z = dot(IN.normal, eyeVector);

	float3 lightVector = vModelLightDir.xyz - vModelPos;
	OUT.LightVector.x = dot(IN.tangent, lightVector);
	OUT.LightVector.y = dot(IN.binormal, lightVector);
	OUT.LightVector.z = dot(IN.normal, lightVector);
	//transform the comb vector aswell, since this is going to be needed for 
	//transforming the fur tangent in the lighting calculations
	OUT.CombVector.x = dot(IN.tangent, CombVector);
	OUT.CombVector.y = dot(IN.binormal, CombVector);
	OUT.CombVector.z = dot(IN.normal, CombVector);

	OUT.shellNumber = iShell - 1;

	return OUT;
}

struct VS_OUTPUT_ShadowMapGen
{
	float4 Pos			: SV_POSITION;
	float4 vDepth		: TEXCOORD0;
};

VS_OUTPUT_ShadowMapGen VS_ShadowMapGen(VS_INPUT IN)
{
	VS_OUTPUT_ShadowMapGen OUT = (VS_OUTPUT_ShadowMapGen)0;

	float4 vWorldPos = mul(IN.Pos, World);
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;
	OUT.vDepth = posH.z;

	return OUT;
}


//--------------------------------------------------------------------------------------
// PS for forward rendering
//--------------------------------------------------------------------------------------
float4 PS(VS_OUTPUT IN) : SV_Target
{
	float ka = 0.3;
    float kd = 0.7;
    float ks = 0.2;
    float specPower = 20.0;
	float textureTilingFactor = 10;

    float4 outputColor;
    
    float2 Texture  = IN.uv * textureTilingFactor;
    float4 tangentAndAlpha  = furTextureArray.SampleLevel( samLinear, float3(Texture, IN.shellNumber),0 );
	float4 offset = furOffsetArray.SampleLevel(samLinear, float3(Texture, IN.shellNumber), 0);

    //get the fur color and local fur density
    Texture -= ( offset.xy - 0.5f )*2.0f;
    Texture /= textureTilingFactor;
	outputColor = texDiffuse.Sample(samLinear, Texture);
    
    //discard the parts of the mesh marked as no fur, like the eyes and the feet
    if(outputColor.a < 0.01)
        discard;

    //calculate the opacity for alpha blending
    outputColor.a = tangentAndAlpha.a * offset.a; 
   
    //kajiya and kay lighting
    float3 lightVector  = normalize(IN.LightVector);
    float3 viewVector   = normalize(IN.ViewVector);
    float3 tangentVector= normalize((tangentAndAlpha.rgb - 0.5f) * 2.0f); //this is the tangent to the strand of fur
	tangentVector = normalize(tangentVector + IN.CombVector);
    float TdotL = dot( tangentVector , lightVector);
    float TdotE = dot( tangentVector , viewVector);
    float sinTL = sqrt( 1 - TdotL*TdotL );
    float sinTE = sqrt( 1 - TdotE*TdotE );

	outputColor.xyz = ka*outputColor.xyz + kd*sinTL*outputColor.xyz + 
        ks*pow( abs((TdotL*TdotE + sinTL*sinTE)),specPower).xxx;
      
    //banks selfshadowing:
    float minShadow = 0.8;
	float shadow = (float(IN.shellNumber) / float(numShells))*(1 - minShadow) + minShadow;
    outputColor.xyz *= shadow;
      
    return outputColor;
}


//--------------------------------------------------------------------------------------
// PS for shadow map generation
//--------------------------------------------------------------------------------------
float4 PS_ShadowMapGen(VS_OUTPUT_ShadowMapGen IN) : SV_Target
{
#ifdef USE_ESM
	float fDepthExponential = exp(fESMExponentialMultiplier * IN.vDepth.x);
	return fDepthExponential;
#else
	return IN.vDepth.x;
#endif
}

//--------------------------------------------------------------------------------------
// g-buffer generation
//--------------------------------------------------------------------------------------

VS_OUTPUT VS(VS_INPUT IN)
{
	VS_OUTPUT OUT = (VS_OUTPUT)0;

	float4 vWorldPos = mul(IN.Pos, World);
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;
	OUT.uv = IN.uv;
	OUT.normal = mul(IN.normal, (float3x3)WorldIT);

	return OUT;
}

gbuffer_output PS_GBuffer(VS_OUTPUT IN)
{
	gbuffer_output output = (gbuffer_output)0;

	output.oNormal.xyz = normalize(IN.normal) * 0.5f + 0.5f;
	output.oNormal.w = 1.0f;

#ifdef SPEC_MAP
	output.oSpec.xyz = texSpec.Sample(samLinear, IN.uv).xyz;
	output.oSpec.w = specularGloss.w;
#else
	output.oSpec = specularGloss;
#endif

	// Avoid precision problem, decode in ComposePass.
	float4 albedo = texDiffuse.Sample(samLinear, IN.uv);
	albedo.xyz = sqrt(albedo.xyz);
	output.oAlbedo = albedo;

	return output;
}