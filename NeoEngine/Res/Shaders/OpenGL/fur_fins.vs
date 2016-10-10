

//--------------------------------------------------------------------------------------
layout(location = 0) in vec4 iPos;
layout(location = 1) in vec2 iUv;
layout(location = 2) in vec3 iNormal;

out vec2 oUv;
out vec3 oNormal;

void main()
{
	gl_Position = iPos;
	oNormal = iNormal;
	oUv = iUv;
}

