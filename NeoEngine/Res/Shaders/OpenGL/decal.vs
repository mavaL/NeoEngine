

//--------------------------------------------------------------------------------------
layout(location = 0) in vec4 iPos;
layout(location = 1) in vec2 iUv;
layout(location = 2) in vec3 iNormal;

out vec2 oUv;
out vec3 oWPos;
out vec3 oNormal;


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
void main()
{
	vec4 vWorldPos = iPos * World;
	vec4 posH = vWorldPos * ViewProj;

	gl_Position = posH;
	oWPos = vWorldPos.xyz;
	oUv = iUv;
	oNormal = (vec4(iNormal, 0) * WorldIT).xyz;
}