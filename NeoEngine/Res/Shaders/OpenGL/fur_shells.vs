
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

out vec2 oUv;
out vec3 oNormal;
out vec3 oLightVector;
out vec3 oViewVector;
out vec3 oCombVector;
out vec3 oWPos;


void main()
{
	vec3 CombVector = vCombParams.w * vCombParams.xyz;

	vec3 vShellOffset = normalize(iNormal + CombVector);
	vec3 vModelPos = iPos.xyz + vShellOffset*shellIncrement*iShell;
	vec4 vWorldPos = float4(vModelPos, 1) * World;

	gl_Position = vWorldPos * ViewProj;
	oNormal = iNormal * WorldIT;
	oUv = iUv;
	oWPos = vWorldPos.xyz;

	oViewVector = vModelCamPos.xyz - vModelPos;
	oLightVector = vModelLightDir.xyz;
	oCombVector = CombVector;
}
