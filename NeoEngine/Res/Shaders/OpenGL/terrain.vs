
uniform cbufferCustom0
{
	mat4		posIndexToObjectSpace;
	vec4		uvMul_0;
	vec2		lodMorph;
	float		baseUVScale;
};

//--------------------------------------------------------------------------------------
layout(location = 0) in vec2 posIndex;
layout(location = 1) in float height;
layout(location = 2) in vec2 delta;


out vec4 oWPos;
out vec4 oUVMisc;
out vec4 oUV0;
out vec4 oUV1;


//--------------------------------------------------------------------------------------
// Vertex Shader
//--------------------------------------------------------------------------------------
void main()
{
	vec4 pos = vec4(posIndex.x, posIndex.y, height, 1) * posIndexToObjectSpace;
	pos = pos * World;
	oWPos = pos;

	float toMorph = -min(0, sign(delta.y - lodMorph.y));
	pos.y += delta.x * toMorph * lodMorph.x;
	gl_Position = pos * ViewProj;

	vec2 uv = vec2(posIndex.x * baseUVScale, 1.0 - (posIndex.y * baseUVScale));
	oUV0.xy = uv.xy * uvMul_0.r;
	oUV0.zw = uv.xy * uvMul_0.g;
	oUV1.xy = uv.xy * uvMul_0.b;
	oUV1.zw = uv.xy * uvMul_0.a;
	oUVMisc.xy = uv.xy;
}