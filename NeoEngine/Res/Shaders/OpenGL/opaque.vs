

//--------------------------------------------------------------------------------------
layout(location = 0) in vec4 iPos;
layout(location = 1) in vec2 iUv;
layout(location = 2) in vec3 iNormal;

#ifdef NORMAL_MAP
layout(location = 3) in vec4 iTangent;
layout(location = 4) in vec3 iBinormal;
#endif

out vec2 oUv;
out vec3 oWPos;

#ifdef NORMAL_MAP
	out vec4 oTangent;
	out vec3 oBinormal;
#else
	out vec3 oNormal;
#endif


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

#ifdef NORMAL_MAP
	oTangent.xyz = normalize(vec4(iTangent.xyz, 0) * WorldIT).xyz;
	oTangent.w = IN.iTangent.w;
	oBinormal = normalize(vec4(iBinormal, 0) * WorldIT).xyz;
#else
	oNormal = (vec4(iNormal, 0) * WorldIT).xyz;
#endif
}