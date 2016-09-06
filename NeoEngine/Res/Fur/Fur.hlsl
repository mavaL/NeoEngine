/********************************************************************
created:	2016/08/26 14:00
author:		maval

purpose:	Fur rendering

references:	1. http://developer.download.nvidia.com/SDK/10/direct3d/Source/Fur/doc/FurShellsAndFins.pdf
			2. http://amd-dev.wpengine.netdna-cdn.com/wordpress/media/2012/10/Scheuermann_HairRendering.pdf
			3. http://www.froyok.fr/documents/fur_sheppard.pdf
*********************************************************************/

#include "../Common.h"


Texture2D		texDiffuse		: register(t0);
Texture2D		texNormal		: register(t1);
Texture2D		texSpec			: register(t2);
Texture2DArray	furTextureArray	: register(t3);
Texture2DArray	furOffsetArray	: register(t4);
Texture2D		texFinOpacity	: register(t5);
Texture2D		texFinOffset	: register(t6);

SamplerState	samLinear		: register(s0);

static const int numShells = 15;

cbuffer cbFur	:	register(b10)
{
	float4	vCombParams;	// xyz = combine direction, w = combine strength
	float4	vModelCamPos;	// camera pos in object space
	float4	vModelLightDir;	// light in object space
	float	fFinMaxOpacity;
	float	shellIncrement;
	float	shellTexTiling;
	int		iShell;
};

struct VS_INPUT
{
	float4 Pos : POSITION;
	float4 tangent : TANGENT;
	float3 binormal : BINORMAL;
	float3 normal : NORMAL;
	float2 uv  : TEXCOORD0;
};

//--------------------------------------------------------------------------------------
// Shadow map generation
//--------------------------------------------------------------------------------------

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
// Fins rendering
//--------------------------------------------------------------------------------------

struct VS_OUTPUT_FINS
{
	float4 Position          : SV_POSITION;
	float3 Normal            : TEXCOORD0;
	float2 Texture           : TEXCOORD1;
};

VS_OUTPUT_FINS VS_Fins(VS_INPUT IN)
{
	VS_OUTPUT_FINS OUT = (VS_OUTPUT_FINS)0;

	OUT.Position = IN.Pos;
	OUT.Normal = IN.normal;
	OUT.Texture = IN.uv;

	return OUT;
}

struct GS_OUTPUT_FINS
{
	float4 Position    : SV_POSITION;
	float2 TextureMesh : TEXCOORD0;
	float2 TextureFin  : TEXCOORD1;
	float  Opacity : OPACITY;
};

static float finThreshold = 0.25;

//extrude an edge into two triangles if we determine that its a silhouette edge or almost a silhouette edge
void makeFin( 
                                 VS_OUTPUT_FINS v1,    // Shared vertex
                                 VS_OUTPUT_FINS v2,    // Shared vertex
                                 float eyeDotN1,
                                 float eyeDotN2,
                                 inout TriangleStream<GS_OUTPUT_FINS> TriStream 
                                 )
{    
       
	float opacity = fFinMaxOpacity;
    bool makeFin = false;
    
    //if its a silhouette edge
    if( eyeDotN1 * eyeDotN2 < 0 )
    {   makeFin = true;
        opacity = fFinMaxOpacity;
    }    
    else if( abs(eyeDotN1)<finThreshold )
    {   
        //if its almost a silhouette edge (render these to avoid popping during animation)
        makeFin = true;
		opacity = (finThreshold - abs(eyeDotN1))*(fFinMaxOpacity / finThreshold);
    }
    else if( abs(eyeDotN2)<finThreshold )
    {   
        //if its almost a silhouette edge (render these to avoid popping during animation)
        makeFin = true;
		opacity = (finThreshold - abs(eyeDotN2))*(fFinMaxOpacity / finThreshold);
    }
    
    
    //if this edge has to be expanded to a fin create the four vertices
    //for the two triangles in the triangle strip and append them to the
    //triangle stream
    if( makeFin )
    {
      
        float texcoord[2] = {1,0.1};
        float furLengths[2];
		float4 color = texDiffuse.SampleLevel(samLinear, v1.Texture, 0);
        furLengths[0] = color.a;
		color = texDiffuse.SampleLevel(samLinear, v2.Texture, 0);
        furLengths[1] = color.a;
 
        // Extrude silhouette to create two new triangles for the fin
        GS_OUTPUT_FINS Out = (GS_OUTPUT_FINS)0;
        
        Out.TextureMesh = v1.Texture;
        Out.Opacity = opacity;
        for(int v=0; v<2; v++)
        {
            Out.Position = mul(v1.Position + v*float4(normalize(v1.Normal) +
				vCombParams.w*vCombParams.xyz, 0)*numShells*shellIncrement*furLengths[0], World);
			Out.Position = mul(Out.Position, ViewProj);
            Out.TextureFin = float2(0,texcoord[v]);
            TriStream.Append(Out);
        }

        Out.TextureMesh = v2.Texture;
        Out.Opacity = opacity;
        for(int w=0; w<2; w++)
        {
            Out.Position = mul(v2.Position + w*float4(normalize(v2.Normal) +
				vCombParams.w*vCombParams.xyz, 0)*numShells*shellIncrement*furLengths[1], World);
			Out.Position = mul(Out.Position, ViewProj);
            Out.TextureFin = float2(1,texcoord[w]);
            TriStream.Append(Out);
        }
        
        TriStream.RestartStrip();
              
    }
}

[maxvertexcount(4)]
void GS( lineadj VS_OUTPUT_FINS input[4], inout TriangleStream<GS_OUTPUT_FINS> TriStream )
{     

     //output some fins if necessary
 
	float3 eyeVec = normalize(vModelCamPos - input[0].Position);

     //compute the triangles' normals, all of these calculations are in object space 
     float3 triNormal1 = normalize( cross( input[0].Position - input[1].Position,
                                           input[3].Position - input[1].Position ));
     float eyeDotN1 = dot(triNormal1, eyeVec);
     float3 triNormal2 = normalize(cross( input[1].Position - input[0].Position, 
                                          input[2].Position - input[0].Position ));
     float eyeDotN2 = dot( triNormal2, eyeVec);

     makeFin(input[1],input[0],eyeDotN1,eyeDotN2,TriStream);
}

float4 PS_Fins(GS_OUTPUT_FINS IN) : SV_Target
{
	float4 finOpacity = texFinOpacity.Sample(samLinear, IN.TextureFin);
	float4 offset = texFinOffset.Sample(samLinear, IN.TextureFin);

    //using color from color map
	float2 Texture = IN.TextureMesh;
    Texture -= ( offset.xy - 0.5f )*2.0f;
	float4 outputColor = texDiffuse.Sample(samLinear, Texture);
    
    //calculate the opacity
	outputColor.a = finOpacity.a * IN.Opacity;

    return outputColor;
}

//--------------------------------------------------------------------------------------
// Shells rendering
//--------------------------------------------------------------------------------------

struct VS_OUTPUT
{
	float4 Pos			: SV_POSITION;
	float2 uv			: TEXCOORD0;
	float3 normal		: TEXCOORD1;
	float3 LightVector  : TEXCOORD2;
	float3 ViewVector   : TEXCOORD3;
	float3 CombVector   : TEXCOORD4;
};

VS_OUTPUT VS_Shells(VS_INPUT IN)
{
    VS_OUTPUT OUT = (VS_OUTPUT)0;

	float4 color = texDiffuse.SampleLevel(samLinear, IN.uv, 0);
	// the alpha channel specifies the length of hair 
	float lengthFraction = color.a;
	if (lengthFraction < 0.2) lengthFraction = 0.2;
	float3 CombVector = vCombParams.w * vCombParams.xyz;

	float3 vShellOffset = normalize(IN.normal + CombVector);
	float3 vModelPos = IN.Pos.xyz + vShellOffset*shellIncrement*iShell*lengthFraction;
	float4 vWorldPos = mul(float4(vModelPos, 1), World);

	OUT.Pos = mul(vWorldPos, ViewProj);
	OUT.normal = mul(IN.normal, (float3x3)WorldIT);
	OUT.uv = IN.uv;

	//float3x3 matTSToObj = float3x3(IN.tangent.xyz, IN.binormal, cross(IN.tangent.xyz, IN.binormal) * IN.tangent.w);
	float3x3 matTSToObj = float3x3(IN.tangent.xyz, cross(IN.normal, IN.tangent.xyz), IN.normal);

	//transform the light and eye vectors to tangent space for per pixel lighting 
	float3 eyeVector = vModelCamPos.xyz - vModelPos;
	OUT.ViewVector = mul(matTSToObj, eyeVector);

	float3 lightVector = vModelLightDir.xyz;
	OUT.LightVector = mul(matTSToObj, lightVector);
	//transform the comb vector aswell, since this is going to be needed for 
	//transforming the fur tangent in the lighting calculations
	OUT.CombVector = mul(matTSToObj, CombVector);

	return OUT;
}

float4 PS_Shells(VS_OUTPUT IN) : SV_Target
{
	float ka = 0.3;
    float kd = 0.7;
    float ks = 0.2;
    float specPower = 20.0;
	int shellNum = iShell - 1;

    float4 outputColor;
    
	float2 Texture = IN.uv * shellTexTiling;
    float4 tangentAndAlpha  = furTextureArray.SampleLevel( samLinear, float3(Texture, shellNum),0 );
	float4 offset = furOffsetArray.SampleLevel(samLinear, float3(Texture, shellNum), 0);

    //get the fur color and local fur density
    Texture -= ( offset.xy - 0.5f )*2.0f;
	Texture /= shellTexTiling;
	outputColor = texDiffuse.Sample(samLinear, Texture);
    
    //discard the parts of the mesh marked as no fur, like the eyes and the feet
    if(outputColor.a < 0.01)
        discard;

    //calculate the opacity for alpha blending
    outputColor.a = tangentAndAlpha.a * offset.a; 
   
    //kajiya and kay lighting
    float3 lightVector  = normalize(IN.LightVector);
    float3 viewVector   = normalize(IN.ViewVector);
	float3 tangentVector = Expand(tangentAndAlpha.xyz); //this is the tangent to the strand of fur
	tangentVector = normalize(tangentVector + IN.CombVector);
	float TdotL = dot(tangentVector, lightVector);
	float TdotE = dot(tangentVector, viewVector);
    float sinTL = sqrt( 1 - TdotL*TdotL );
    float sinTE = sqrt( 1 - TdotE*TdotE );

	outputColor.xyz = kd*sinTL*outputColor.xyz*lightColor.xyz +
		ks*pow(abs((TdotL*TdotE + sinTL*sinTE)), specPower)*lightColor.xyz;
      
    //banks selfshadowing:
    float minShadow = 0.8f;
	float shadow = (float(shellNum) / float(numShells))*(1 - minShadow) + minShadow;
    outputColor.xyz *= shadow;
      
    return outputColor;
}

//--------------------------------------------------------------------------------------
// g-buffer generation
//--------------------------------------------------------------------------------------

struct VS_OUTPUT_GBuffer
{
	float4 Pos			: SV_POSITION;
	float2 uv			: TEXCOORD0;
	float3 normal		: TEXCOORD1;
};

VS_OUTPUT_GBuffer VS(VS_INPUT IN)
{
	VS_OUTPUT_GBuffer OUT = (VS_OUTPUT_GBuffer)0;

	float4 vWorldPos = mul(IN.Pos, World);
	float4 posH = mul(vWorldPos, ViewProj);

	OUT.Pos = posH;
	OUT.uv = IN.uv;
	OUT.normal = mul(IN.normal, (float3x3)WorldIT);

	return OUT;
}

gbuffer_output PS_GBuffer(VS_OUTPUT_GBuffer IN)
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