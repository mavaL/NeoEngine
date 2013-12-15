//------------------------------------------------------------------------------------
// Global Variables
//------------------------------------------------------------------------------------
static float3 offY = float3(0.31, 0.24, 0.43);
static float3 offZ = float3(0.47, 0.19, 0.78);

//--------------------------------------------------------------------------------------
// Constant Buffer Variables
//--------------------------------------------------------------------------------------
cbuffer cbufferGlobal : register( b0 )
{
	matrix	World;
	matrix	View;
	matrix	Projection;
	matrix	WVP;
	matrix	WorldIT;
	float4	clipPlane;
	float4	ambientColor;
	float4	lightColor;
	float3	lightDirection;
	float3	camPos;
	float	time;
};

cbuffer cbVS : register( b1 )
{
	float3	viewPt;			// Camera pos in object space
	float2	texScale;
	float2	bumpSpeed;
	float	BumpScale;
	float	waveFreq;
	float	waveAmp;
};

cbuffer cbPS : register( b2 )
{
	float4	deepColor;
	float4	shallowColor;
	float4	reflectionColor;
	float	reflectionAmount;
	float	reflectionBlur;
	float	waterAmount;  
	float	fresnelPower; 
	float	fresnelBias;
	float	refractionAmount;
};
//--------------------------------------------------------------------------------------
struct Wave {
	float freq;  // 2*PI / wavelength
	float amp;   // amplitude
	float phase; // speed * 2*PI / wavelength
	float2 dir;
};
//--------------------------------------------------------------------------------------
struct VS_INPUT
{
	float4 Pos : POSITION;
	float3 normal: NORMAL;
	float2 uv  : TEXCOORD0;
};

struct VS_OUTPUT
{
	float4 Position  : SV_POSITION;  // in clip space
	float3 rotMatrix1 : TEXCOORD0; // first row of the 3x3 transform from tangent to obj space
	float3 rotMatrix2 : TEXCOORD1; // second row of the 3x3 transform from tangent to obj space
	float3 rotMatrix3 : TEXCOORD2; // third row of the 3x3 transform from tangent to obj space

	float2 bumpCoord0 : TEXCOORD3;
	float2 bumpCoord1 : TEXCOORD4;
	float2 bumpCoord2 : TEXCOORD5;

	float3 eyeVector  : TEXCOORD6;
	float4 projPos	  : TEXCOORD7;

	float3 eyeLinear  : TEXCOORD8;
	float3 noisyUV    : TEXCOORD9;
};


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS( VS_INPUT IN )
{
	VS_OUTPUT OUT = (VS_OUTPUT)0;

#define NWAVES 2
	Wave wave[NWAVES] = {
		{ 1.0, 1.0, 0.5, float2(-1, 0) },
		{ 2.0, 0.5, 1.7, float2(-0.7, 0.7) }
	};

	wave[0].freq = waveFreq;
	wave[0].amp = waveAmp;

	wave[1].freq = waveFreq * 3.0;
	wave[1].amp = waveAmp * 0.33;

	float4 P = IN.Pos;

	// sum waves
	float ddx = 0.0, ddy = 0.0;
	float deriv;
	float angle;

	// wave synthesis using two sine waves at different frequencies and phase shift
	for(int i = 0; i<NWAVES; ++i)
	{
		angle = dot(wave[i].dir, P.xz) * wave[i].freq + time * wave[i].phase;
		P.y += wave[i].amp * sin( angle );
		// calculate derivate of wave function
		deriv = wave[i].freq * wave[i].amp * cos(angle);
		ddx -= deriv * wave[i].dir.x;
		ddy -= deriv * wave[i].dir.y;
	}

	// compute the 3x3 transform from tangent space to object space
	// first rows are the tangent and binormal scaled by the bump scale

	OUT.rotMatrix1.xyz = BumpScale * normalize(float3(1, ddy, 0)); // Binormal
	OUT.rotMatrix2.xyz = BumpScale * normalize(float3(0, ddx, 1)); // Tangent
	OUT.rotMatrix3.xyz = normalize(float3(ddx, 1, ddy)); // Normal

	OUT.Position = mul(P, WVP);
	OUT.projPos = OUT.Position;

	// calculate texture coordinates for normal map lookup
	OUT.bumpCoord0.xy = IN.uv*texScale + time * bumpSpeed;
	OUT.bumpCoord1.xy = IN.uv*texScale * 2.0 + time * bumpSpeed * 4.0;
	OUT.bumpCoord2.xy = IN.uv*texScale * 4.0 + time * bumpSpeed * 8.0;

	OUT.eyeVector = P.xyz - viewPt;

	return OUT;
}


//--------------------------------------------------------------------------------------
// Pixel Shader
//--------------------------------------------------------------------------------------
Texture2D		NormalMap	: register(t0);
Texture2D		ReflecMap	: register(t1);
Texture2D		SceneMap	: register(t2);
Texture2D		DepthMap	: register(t3);

SamplerState	samNormal	: register( s0 );
SamplerState	samReflec	: register( s1 );
SamplerState	samScene	: register( s2 );
SamplerState	samDepth	: register( s3 );

float4 PS( VS_OUTPUT IN ) : SV_Target
{
	// sum normal maps
	// sample from 3 different points so no texture repetition is noticeable
	float4 t0 = NormalMap.Sample(samNormal, IN.bumpCoord0) * 2.0 - 1.0;
	float4 t1 = NormalMap.Sample(samNormal, IN.bumpCoord1) * 2.0 - 1.0;
	float4 t2 = NormalMap.Sample(samNormal, IN.bumpCoord2) * 2.0 - 1.0;
	float3 N = t0.xyz + t1.xyz + t2.xyz;

	float3x3 m; // tangent to object space matrix
	m[0] = IN.rotMatrix1;
	m[1] = IN.rotMatrix2;
	m[2] = IN.rotMatrix3;

	N = normalize( mul( N, m ) );

	// Get projected uv
	float2 projUV = IN.projPos.xy / IN.projPos.w;
	projUV = projUV * float2(0.5, -0.5) + 0.5;

	//=====================================================================
	// Reflection
	//=====================================================================
	float2 reflecUV = projUV + N.xz * reflectionAmount;
	float4 reflection = ReflecMap.Sample(samReflec, reflecUV);

	// fresnel
	float3 E = normalize(IN.eyeVector);
	float facing = 1.0 - max(dot(-E, N), 0);
	float fresnel = saturate(fresnelBias + pow(facing, fresnelPower));

	float4 waterColor = lerp(shallowColor, deepColor, facing) * waterAmount;

	reflection = lerp(waterColor,  reflection * reflectionColor, fresnel);
	waterColor += reflection;

	//=====================================================================
	// Refraction
	//=====================================================================
	float2 refracUV = projUV + N.xz * refractionAmount;
	float4 refraction = SceneMap.Sample(samScene, refracUV);
	float4 noRefraction = SceneMap.Sample(samScene, projUV);

	// whether refract or not according to refraction mask.
	refraction = noRefraction * refraction.a + refraction * (1 - refraction.a);

	//========================================================================
	// Water-shore transition
	//========================================================================
	float depth = DepthMap.Sample(samDepth, projUV).r;

	waterColor = lerp(waterColor, refraction, depth);

	return waterColor;
}
