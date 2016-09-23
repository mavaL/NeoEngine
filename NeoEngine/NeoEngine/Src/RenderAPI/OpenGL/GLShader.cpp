#include "stdafx.h"
#include "opengl/GLShader.h"
#include "opengl/GLRenderSystem.h"
#include "opengl/GLAPI.h"
#include <sstream>

namespace Neo
{
	//------------------------------------------------------------------------------------
	GLVertexShader::GLVertexShader(const char* filename, uint32 flags, const std::vector<D3D_SHADER_MACRO>& vecMacros)
		: GLShader(GL_VERTEX_SHADER, filename, vecMacros)
	{
		
	}
	//------------------------------------------------------------------------------------
	void GLVertexShader::Activate()
	{
		g_RenderSys->GetCurBoundShaderState().vs = this;
	}
	//------------------------------------------------------------------------------------
	void GLVertexShader::DeActivate()
	{
		_AST(0);
	}

	//------------------------------------------------------------------------------------
	GLPixelShader::GLPixelShader(const char* filename, uint32 flags, const std::vector<D3D_SHADER_MACRO>& vecMacros)
		: GLShader(GL_FRAGMENT_SHADER, filename, vecMacros)
	{

	}
	//------------------------------------------------------------------------------------
	void GLPixelShader::Activate()
	{
		g_RenderSys->GetCurBoundShaderState().ps = this;
	}
	//------------------------------------------------------------------------------------
	void GLPixelShader::DeActivate()
	{
		_AST(0);
	}

	//------------------------------------------------------------------------------------
	GLShader::GLShader(GLenum type, const char* filename, const std::vector<D3D_SHADER_MACRO>& vecMacros)
	{
		std::vector<STRING> vecShaderStrings;

		vecShaderStrings.push_back(
			"#version 430 \n"
			"#pragma STDGL invariant(all) \n");
		
		// Insert macros after #version
		std::vector<const GLchar*> vecCharStrings;

		for (uint32 i = 0; i < vecMacros.size()-1; ++i)
		{
			STRING str = "#define ";
			str += vecMacros[i].Name;
			str += "\n";

			vecShaderStrings.push_back(str);
		}

		// #include "Common.h"
		{
			std::ifstream file(GetShaderPath("Common.h"));
			std::stringstream stream;
			stream << file.rdbuf();

			vecShaderStrings.push_back(stream.str());
		}

		// Main shader
		{
			std::ifstream file(GetShaderPath(filename));
			std::stringstream stream;
			stream << file.rdbuf();

			vecShaderStrings.push_back(stream.str());
		}

		for (uint32 i = 0; i < vecShaderStrings.size(); ++i)
		{
			vecCharStrings.push_back(vecShaderStrings[i].c_str());
		}

		// Create and compile shader
		m_id = OpenGLAPI::CreateShader(type);

		OpenGLAPI::ShaderSource(m_id, vecCharStrings.size(), (const GLchar**)&vecCharStrings[0], nullptr);

		OpenGLAPI::CompileShader(m_id);

		GLint result;
		OpenGLAPI::GetShaderIv(m_id, GL_COMPILE_STATUS, &result);

		if (result != GL_TRUE)
		{
			GLint nErrLen;
			OpenGLAPI::GetShaderIv(m_id, GL_INFO_LOG_LENGTH, &nErrLen);

			std::unique_ptr<GLchar[]> pErrBuf(new GLchar[nErrLen]);

			OpenGLAPI::GetShaderInfo(m_id, nErrLen, nullptr, pErrBuf.get());

			OutputDebugStringA(pErrBuf.get());

			_AST(0);
		}
	}
	//------------------------------------------------------------------------------------
	GLShader::~GLShader()
	{
		OpenGLAPI::DeleteShader(m_id);
	}
	//------------------------------------------------------------------------------------
	GLBoundShaderState::GLBoundShaderState()
		: vs(nullptr)
		, ps(nullptr)
		, cs(nullptr)
		, gs(nullptr)
		, hs(nullptr)
		, ds(nullptr)
		, m_programid(0)
	{

	}
	//------------------------------------------------------------------------------------
	GLBoundShaderState::~GLBoundShaderState()
	{
		OpenGLAPI::DeleteProgram(m_programid);
	}
	//------------------------------------------------------------------------------------
	void GLBoundShaderState::Reset()
	{
		vs = nullptr;
		ps = nullptr;
		cs = nullptr;
		gs = nullptr;
		hs = nullptr;
		ds = nullptr;
	}

}