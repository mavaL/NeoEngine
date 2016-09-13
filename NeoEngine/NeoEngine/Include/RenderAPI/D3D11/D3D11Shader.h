/********************************************************************
	created:	2016/09/09 18:25
	filename	Shader.h
	author:		maval

	purpose:	D3D11 shader related.
*********************************************************************/
#ifndef D3D11Shader_h__
#define D3D11Shader_h__


#include "Prerequiestity.h"
#include "Shader.h"
#include "RenderDefine.h"

namespace Neo
{
	//------------------------------------------------------------------------------------
	class D3D11Shader : public Shader
	{
	public:
		virtual ~D3D11Shader() {}

	protected:
		bool	Init(const char* filename, uint32 flags, const char* strEntryFunc, const char* strShaderProfile, const std::vector<D3D_SHADER_MACRO>& vecMacros, ID3DBlob** pBlob);
	};
	//------------------------------------------------------------------------------------
	class D3D11VertexShader : public D3D11Shader
	{
	public:
		D3D11VertexShader(const char* filename, uint32 flags, const char* strEntryFunc, eVertexType vertType, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual ~D3D11VertexShader();

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();

	private:
		void			_CreateVertexLayout(eVertexType vertType);

		ID3D11InputLayout*			m_pInputLayout;
		ID3D11VertexShader*			m_pShader;
		std::vector<char>			m_vsCode;				// Cached for creating vertex layout
	};
	//------------------------------------------------------------------------------------
	class D3D11PixelShader : public D3D11Shader
	{
	public:
		D3D11PixelShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual ~D3D11PixelShader();

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();

	private:
		ID3D11PixelShader*			m_pShader;
	};
	//------------------------------------------------------------------------------------
	class D3D11GeometryShader : public D3D11Shader
	{
	public:
		D3D11GeometryShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual ~D3D11GeometryShader();

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();

	private:
		ID3D11GeometryShader*		m_pShader;
	};
	//------------------------------------------------------------------------------------
	class D3D11ComputeShader : public D3D11Shader
	{
	public:
		D3D11ComputeShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual ~D3D11ComputeShader();

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();

	private:
		ID3D11ComputeShader*		m_pShader;
	};
	//------------------------------------------------------------------------------------
	class D3D11HullShader : public D3D11Shader
	{
	public:
		D3D11HullShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual ~D3D11HullShader();

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();

	private:
		ID3D11HullShader*			m_pShader;
	};
	//------------------------------------------------------------------------------------
	class D3D11DomainShader : public D3D11Shader
	{
	public:
		D3D11DomainShader(const char* filename, uint32 flags, const char* strEntryFunc, const std::vector<D3D_SHADER_MACRO>& vecMacros);
		virtual ~D3D11DomainShader();

	public:
		virtual	void	Activate();
		virtual	void	DeActivate();

	private:
		ID3D11DomainShader*			m_pShader;
	};
}

#endif // D3D11Shader_h__

