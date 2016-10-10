
uniform cbufferCustom0
{
	vec4	vCombParams;	// xyz = combine direction, w = combine strength
	vec4	vModelCamPos;	// camera pos in object space
	vec4	vModelLightDir;	// light in object space
	float	fFinMaxOpacity;
	float	shellIncrement;
	float	shellTexTiling;
	int		iShell;
};

//--------------------------------------------------------------------------------------
layout(location = 0) in vec4 iPos;
layout(location = 1) in vec2 iUv;
layout(location = 2) in vec3 iNormal;
layout(location = 3) in vec4 iTangent;
layout(location = 4) in vec3 iBinormal;

out vec2 oUv;
out vec3 oNormal;
out vec3 oLightVector;
out vec3 oViewVector;
out vec3 oCombVector;


void main()
{
	vec3 CombVector = vCombParams.w * vCombParams.xyz;

	vec3 vShellOffset = normalize(iNormal + CombVector);
	vec3 vModelPos = iPos.xyz + vShellOffset*shellIncrement*iShell;
	vec4 vWorldPos = float4(vModelPos, 1) * World;

	gl_Position = vWorldPos * ViewProj;
	oNormal = iNormal * WorldIT;
	oUv = iUv;

	mat3 matTSToObj = mat3(iTangent.xyz, iBinormal, cross(iTangent.xyz, iBinormal) * iTangent.w);

	//transform the light and eye vectors to tangent space for per pixel lighting 
	vec3 eyeVector = vModelCamPos.xyz - vModelPos;
	oViewVector = matTSToObj * eyeVector;

	vec3 lightVector = vModelLightDir.xyz;
	oLightVector = matTSToObj * lightVector;
	//transform the comb vector aswell, since this is going to be needed for 
	//transforming the fur tangent in the lighting calculations
	oCombVector = matTSToObj * CombVector;
}
