
//--------------------------------------------------------------------------------------
layout(location = 0) in vec4 iPos;
layout(location = 1) in vec2 iUv;
layout(location = 2) in vec3 oNormal;

#ifdef NORMAL_MAP
layout(location = 3) in vec4 iTangent;
layout(location = 4) in vec3 iBinormal;
#endif

out vec4 vDepth;


void main()
{
	vec4 vWorldPos = iPos * World;
	vec4 posH = vWorldPos * ViewProj;

	gl_Position = posH;
	vDepth = posH.zzzz;
}