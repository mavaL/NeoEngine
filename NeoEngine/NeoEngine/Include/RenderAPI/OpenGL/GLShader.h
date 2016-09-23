/********************************************************************
	created:	2016/09/19 15:47
	filename	GLShader.h
	author:		maval

	purpose:	GL shader related.
*********************************************************************/
#ifndef GLShader_h__
#define GLShader_h__


#include "Prerequiestity.h"
#include "Shader.h"
#include "RenderDefine.h"

namespace Neo
{
	enum eGLUniformBufferBinding
	{
		cbBindingGlobal		= 1,
		cbBindingMaterial	= 2,
		cbBindingSkin		= 3,
		cbBindingTerrain	= 4,
		cbBindingCustom0	= 10,
	};

	//------------------------------------------------------------------------------------
	struct GLShaderItem 
	{
		STRING vs, ps;
	};
	struct GLShaderXml
	{
		std::unordered_map<eRenderPhase, GLShaderItem>	m_mapItems;
		STRING cs, gs, ds, hs;
	};
	//--------------------------------------------------------------------------
	class GLShader : public Shader
	{
	public:
		GLShader(GLenum type, const char* filename, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		~GLShader();

		GLuint			m_id;
	};
	//------------------------------------------------------------------------------------
	class GLVertexShader : public GLShader
	{
	public:
		GLVertexShader(const char* filename, uint32 flags, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		~GLVertexShader() {}

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();
	};
	//------------------------------------------------------------------------------------
	class GLPixelShader : public GLShader
	{
	public:
		GLPixelShader(const char* filename, uint32 flags, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		~GLPixelShader() {}

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();
	};
	//------------------------------------------------------------------------------------
	class GLBoundShaderState
	{
	public:
		GLBoundShaderState();
		~GLBoundShaderState();

		void		Reset();

		GLShader*	vs;
		GLShader*	ps;
		GLShader*	gs;
		GLShader*	cs;
		GLShader*	hs;
		GLShader*	ds;
		GLuint		m_programid;
	};
}

#endif // GLShader_h__



