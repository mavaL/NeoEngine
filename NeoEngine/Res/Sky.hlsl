#include "Common.h"

static const float Rg = 6360.0;
static const float Rt = 6420.0;
static const float RL = 6421.0;

static const int TRANSMITTANCE_W = 256;
static const int TRANSMITTANCE_H = 64;

static const int SKY_W = 64;
static const int SKY_H = 16;

static const int RES_R = 32;
static const int RES_MU = 128;
static const int RES_MU_S = 32;
static const int RES_NU = 8;

static const int TRANSMITTANCE_INTEGRAL_SAMPLES = 500;
static const int INSCATTER_INTEGRAL_SAMPLES = 50;
static const int IRRADIANCE_INTEGRAL_SAMPLES = 32;
static const int INSCATTER_SPHERICAL_INTEGRAL_SAMPLES = 16;
static const float ISun = 100.0;

// Rayleigh
static const float HR = 8.0;
static const float3 betaR = float3(0.0058, 0.0135, 0.0331);	// For lambdas (680,550,440) nm

// Mie
// DEFAULT
static const float HM = 1.2;
static const float3 betaMSca = float3(4e-3, 4e-3, 4e-3);
static const float3 betaMEx = betaMSca / 0.9;
static const float mieG = 0.76;

#define TRANSMITTANCE_NON_LINEAR
#define INSCATTER_NON_LINEAR

Texture2D texTransmittance : register(t0);
Texture3D texInscatter : register(t1);
SamplerState samLinear : register(s0);

// nearest intersection of ray r,mu with ground or top atmosphere boundary
// mu=cos(ray zenith angle at ray origin)
float limit(float r, float mu) {
	float dout = -r * mu + sqrt(r * r * (mu * mu - 1.0) + RL * RL);
	float delta2 = r * r * (mu * mu - 1.0) + Rg * Rg;
	if (delta2 >= 0.0) {
		float din = -r * mu - sqrt(delta2);
		if (din >= 0.0) {
			dout = min(dout, din);
		}
	}
	return dout;
}

void getTransmittanceRMu(out float r, out float muS, float4 vScreenPos) 
{
	r = vScreenPos.y / float(TRANSMITTANCE_H);
	muS = vScreenPos.x / float(TRANSMITTANCE_W);
#ifdef TRANSMITTANCE_NON_LINEAR
	r = Rg + (r * r) * (Rt - Rg);
	muS = -0.15 + tan(1.5 * muS) / tan(1.5) * (1.0 + 0.15);
#else
	r = Rg + r * (Rt - Rg);
	muS = -0.15 + muS * (1.0 + 0.15);
#endif
}

float opticalDepth(float H, float r, float mu) 
{
	float result = 0.0;
	float dx = limit(r, mu) / float(TRANSMITTANCE_INTEGRAL_SAMPLES);
	float xi = 0.0;
	float yi = exp(-(r - Rg) / H);
	for (int i = 1; i <= TRANSMITTANCE_INTEGRAL_SAMPLES; ++i) 
	{
		float xj = float(i) * dx;
		float yj = exp(-(sqrt(r * r + xj * xj + 2.0 * xj * r * mu) - Rg) / H);
		result += (yi + yj) / 2.0 * dx;
		xi = xj;
		yi = yj;
	}
	return mu < -sqrt(1.0 - (Rg / r) * (Rg / r)) ? 1e9 : result;
}

float2 getTransmittanceUV(float r, float mu) 
{
	float uR, uMu;
#ifdef TRANSMITTANCE_NON_LINEAR
	uR = sqrt((r - Rg) / (Rt - Rg));
	uMu = atan((mu + 0.15) / (1.0 + 0.15) * tan(1.5)) / 1.5;
#else
	uR = (r - Rg) / (Rt - Rg);
	uMu = (mu + 0.15) / (1.0 + 0.15);
#endif
	return float2(uMu, uR);
}

// transmittance(=transparency) of atmosphere for infinite ray (r,mu)
// (mu=cos(view zenith angle)), intersections with ground ignored
float3 transmittance(float r, float mu)
{
	float2 uv = getTransmittanceUV(r, mu);
	return texTransmittance.Sample(samLinear, uv).rgb;
}

// transmittance(=transparency) of atmosphere between x and x0
// assume segment x,x0 not intersecting ground
// r=||x||, mu=cos(zenith angle of [x,x0) ray at x), v=unit direction vector of [x,x0) ray
float3 transmittance(float r, float mu, float3 v, float3 x0)
{
	float3 result;
	float r1 = length(x0);
	float mu1 = dot(x0, v) / r;
	if (mu > 0.0) {
		result = min(transmittance(r, mu) / transmittance(r1, mu1), 1.0);
	}
	else {
		result = min(transmittance(r1, -mu1) / transmittance(r, -mu), 1.0);
	}
	return result;
}

// transmittance(=transparency) of atmosphere between x and x0
// assume segment x,x0 not intersecting ground
// d = distance between x and x0, mu=cos(zenith angle of [x,x0) ray at x)
float3 transmittance(float r, float mu, float d)
{
	float3 result;
	float r1 = sqrt(r * r + d * d + 2.0 * r * mu * d);
	float mu1 = (r * mu + d) / r1;
	if (mu > 0.0) {
		result = min(transmittance(r, mu) / transmittance(r1, mu1), 1.0);
	}
	else {
		result = min(transmittance(r1, -mu1) / transmittance(r, -mu), 1.0);
	}
	return result;
}

float4 texture4D(Texture3D table, float r, float mu, float muS, float nu)
{
	float H = sqrt(Rt * Rt - Rg * Rg);
	float rho = sqrt(r * r - Rg * Rg);
#ifdef INSCATTER_NON_LINEAR
	float rmu = r * mu;
	float delta = rmu * rmu - r * r + Rg * Rg;
	float4 cst = rmu < 0.0 && delta > 0.0 ? float4(1.0, 0.0, 0.0, 0.5 - 0.5 / float(RES_MU)) : float4(-1.0, H * H, H, 0.5 + 0.5 / float(RES_MU));
	float uR = 0.5 / float(RES_R) + rho / H * (1.0 - 1.0 / float(RES_R));
	float uMu = cst.w + (rmu * cst.x + sqrt(delta + cst.y)) / (rho + cst.z) * (0.5 - 1.0 / float(RES_MU));
	// paper formula
	//float uMuS = 0.5 / float(RES_MU_S) + max((1.0 - exp(-3.0 * muS - 0.6)) / (1.0 - exp(-3.6)), 0.0) * (1.0 - 1.0 / float(RES_MU_S));
	// better formula
	float uMuS = 0.5 / float(RES_MU_S) + (atan(max(muS, -0.1975) * tan(1.26 * 1.1)) / 1.1 + (1.0 - 0.26)) * 0.5 * (1.0 - 1.0 / float(RES_MU_S));
#else
	float uR = 0.5 / float(RES_R) + rho / H * (1.0 - 1.0 / float(RES_R));
	float uMu = 0.5 / float(RES_MU) + (mu + 1.0) / 2.0 * (1.0 - 1.0 / float(RES_MU));
	float uMuS = 0.5 / float(RES_MU_S) + max(muS + 0.2, 0.0) / 1.2 * (1.0 - 1.0 / float(RES_MU_S));
#endif
	float lerp = (nu + 1.0) / 2.0 * (float(RES_NU) - 1.0);
	float uNu = floor(lerp);
	lerp = lerp - uNu;
	return table.Sample(samLinear, float3((uNu + uMuS) / float(RES_NU), uMu, uR)) * (1.0 - lerp) +
		table.Sample(samLinear, float3((uNu + uMuS + 1.0) / float(RES_NU), uMu, uR)) * lerp;
}

void getMuMuSNu(float4 vScreenCoord, float r, float4 dhdH, out float mu, out float muS, out float nu) 
{
	float x = vScreenCoord.x;
	float y = vScreenCoord.y;
#ifdef INSCATTER_NON_LINEAR
	if (y < float(RES_MU) / 2.0) {
		float d = 1.0 - y / (float(RES_MU) / 2.0 - 1.0);
		d = min(max(dhdH.z, d * dhdH.w), dhdH.w * 0.999);
		mu = (Rg * Rg - r * r - d * d) / (2.0 * r * d);
		mu = min(mu, -sqrt(1.0 - (Rg / r) * (Rg / r)) - 0.001);
	}
	else {
		float d = (y - float(RES_MU) / 2.0) / (float(RES_MU) / 2.0 - 1.0);
		d = min(max(dhdH.x, d * dhdH.y), dhdH.y * 0.999);
		mu = (Rt * Rt - r * r - d * d) / (2.0 * r * d);
	}
	muS = fmod(x, float(RES_MU_S)) / (float(RES_MU_S) - 1.0);
	// paper formula
	//muS = -(0.6 + log(1.0 - muS * (1.0 -  exp(-3.6)))) / 3.0;
	// better formula
	muS = tan((2.0 * muS - 1.0 + 0.26) * 1.1) / tan(1.26 * 1.1);
	nu = -1.0 + floor(x / float(RES_MU_S)) / (float(RES_NU) - 1.0) * 2.0;
#else
	mu = -1.0 + 2.0 * y / (float(RES_MU) - 1.0);
	muS = fmod(x, float(RES_MU_S)) / (float(RES_MU_S) - 1.0);
	muS = -0.2 + muS * 1.2;
	nu = -1.0 + floor(x / float(RES_MU_S)) / (float(RES_NU) - 1.0) * 2.0;
#endif
}

void integrand(float r, float mu, float muS, float nu, float t, out float3 ray, out float3 mie)
{
	ray = float3(0, 0, 0);
	mie = float3(0, 0, 0);
	float ri = sqrt(r * r + t * t + 2.0 * r * mu * t);
	float muSi = (nu * t + muS * r) / ri;
	ri = max(Rg, ri);
	if (muSi >= -sqrt(1.0 - Rg * Rg / (ri * ri))) {
		float3 ti = transmittance(r, mu, t) * transmittance(ri, muSi);
		ray = exp(-(ri - Rg) / HR) * ti;
		mie = exp(-(ri - Rg) / HM) * ti;
	}
}

void inscatter(float r, float mu, float muS, float nu, out float3 ray, out float3 mie)
{
	ray = float3(0,0,0);
	mie = float3(0,0,0);
	float dx = limit(r, mu) / float(INSCATTER_INTEGRAL_SAMPLES);
	float xi = 0.0;
	float3 rayi;
	float3 miei;
	integrand(r, mu, muS, nu, 0.0, rayi, miei);
	for (int i = 1; i <= INSCATTER_INTEGRAL_SAMPLES; ++i) {
		float xj = float(i) * dx;
		float3 rayj;
		float3 miej;
		integrand(r, mu, muS, nu, xj, rayj, miej);
		ray += (rayi + rayj) / 2.0 * dx;
		mie += (miei + miej) / 2.0 * dx;
		xi = xj;
		rayi = rayj;
		miei = miej;
	}
	ray *= betaR;
	mie *= betaMSca;
}

//--------------------------------------------------------------------------------------
struct VS_INPUT
{
	float4 Pos : POSITION;
	float2 uv  : TEXCOORD0;
	float3 toFarCornerIndex : NORMAL;
};

struct VS_OUTPUT
{
	float4	Pos		: SV_POSITION;
	float2	uv		: TEXCOORD0;
	float3	rayV	: TEXCOORD1;
};

//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
VS_OUTPUT VS(VS_INPUT IN)
{
	VS_OUTPUT OUT = (VS_OUTPUT)0;

	OUT.Pos = sign(IN.Pos);
	OUT.uv = IN.uv;
	OUT.rayV = frustumFarCorner[IN.toFarCornerIndex.x].xyz;

	return OUT;
}


//--------------------------------------------------------------------------------------
// TransmittancePS
//--------------------------------------------------------------------------------------
float4 TransmittancePS(VS_OUTPUT IN) : SV_Target
{
	float r, muS;
	getTransmittanceRMu(r, muS, IN.Pos);

	float3 depth = betaR * opticalDepth(HR, r, muS) + betaMEx * opticalDepth(HM, r, muS);

	return float4(exp(-depth), 0.0); // Eq (5)
}

//--------------------------------------------------------------------------------------
// Inscatter1PS
//--------------------------------------------------------------------------------------
cbuffer cbufferInscatter1 : register(b10)
{
	float4 dhdH;
	float r;
	int layer;
};

struct inscatter1_output
{
	float4	oDeltaSR : SV_Target0;
	float4	oDeltaSM : SV_Target1;
};

inscatter1_output Inscatter1PS(VS_OUTPUT IN) : SV_Target
{
	inscatter1_output OUT = (inscatter1_output)0;

	float3 ray;
	float3 mie;
	float mu, muS, nu;
	getMuMuSNu(IN.Pos, r, dhdH, mu, muS, nu);
	inscatter(r, mu, muS, nu, ray, mie);
	// store separately Rayleigh and Mie contributions, WITHOUT the phase function factor
	// (cf "Angular precision")
	OUT.oDeltaSR.xyz = ray;
	OUT.oDeltaSM.xyz = mie;

	return OUT;
}

//--------------------------------------------------------------------------------------
// Inscatter1PS
//--------------------------------------------------------------------------------------

Texture3D texDeltaSR : register(t0);
Texture3D texDeltaSM : register(t1);

float4 CopyInscatter1PS(VS_OUTPUT IN) : SV_Target
{
	float3 uvw = float3(IN.Pos.xy, float(layer) + 0.5) / float3(RES_MU_S * RES_NU, RES_MU, RES_R);
	float4 ray = texDeltaSR.Sample(samLinear, uvw);
	float4 mie = texDeltaSM.Sample(samLinear, uvw);

	return float4(ray.rgb, mie.r); // store only red component of single Mie scattering (cf. "Angular precision")
}

//--------------------------------------------------------------------------------------
// SkyPS
//--------------------------------------------------------------------------------------

// Rayleigh phase function
float phaseFunctionR(float mu) 
{
	return (3.0 / (16.0 * PI)) * (1.0 + mu * mu);
}

// Mie phase function
float phaseFunctionM(float mu) 
{
	return 1.5 * 1.0 / (4.0 * PI) * (1.0 - mieG*mieG) * pow(1.0 + (mieG*mieG) - 2.0*mieG*mu, -3.0 / 2.0) * (1.0 + mu * mu) / (2.0 + mieG*mieG);
}

// approximated single Mie scattering (cf. approximate Cm in paragraph "Angular precision")
float3 getMie(float4 rayMie) 
{ // rayMie.rgb=C*, rayMie.w=Cm,r
	return rayMie.rgb * rayMie.w / max(rayMie.r, 1e-4) * (betaR.r / betaR);
}

//inscattered light along ray x+tv, when sun in direction s (=S[L]-T(x,x0)S[L]|x0)
float3 inscatter(inout float3 x, float3 v, float3 s)
{
	float r = length(x);
	float mu = dot(x, v) / r;

	float nu = dot(v, s);
	float muS = dot(x, s) / r;
	float phaseR = phaseFunctionR(nu);
	float phaseM = phaseFunctionM(nu);
	float4 inscatter = max(texture4D(texInscatter, r - Rg, mu, muS, nu), 0.0);

	// avoids imprecision problems in Mie scattering when sun is below horizon
	inscatter.w *= smoothstep(0.00, 0.02, muS);

	// sun
	float3 L0 = smoothstep(0.9997, 0.9999, nu);
	L0 *= transmittance(r - Rg, mu);

	float3 result = max(inscatter.rgb * phaseR + getMie(inscatter) * phaseM + L0, 0.0);

	return result;
}

float4 SkyPS(VS_OUTPUT IN) : SV_Target
{
	float3 x = camPos + float3(0, Rg, 0);	// Start position from origin (i.e. center of the Earth)

	float3 v = mul(float4(IN.rayV, 0), InvView).xyz;
	v = normalize(v);

	float3 s = lightDirection;

	float CameraAltitudeKm = camPos.y;
	float CosThetaView = v.y;

	float3 FinalColor = inscatter(x, v, s) * transmittance(CameraAltitudeKm, CosThetaView) * ISun;

	return float4(FinalColor, 1);
}