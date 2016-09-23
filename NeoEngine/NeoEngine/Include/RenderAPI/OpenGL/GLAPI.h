/********************************************************************
	created:	2016/09/14 10:08
	filename	GLAPI.h
	author:		maval

	purpose:	OpenGL API wrapper
*********************************************************************/
#ifndef GLAPI_h__
#define GLAPI_h__


#if defined(RELEASE) || defined(_RELEASE)
#define GLCHECK(x) x;
#else
#define GLCHECK(x) x; { GLint Err = glGetError(); if (Err != 0) { static char buf[1024] = {0}; sprintf_s(buf,1024,"GlErr:(%d)\n",Err); OutputDebugStringA( buf ); __debugbreak(); } }
#endif

class OpenGLAPI
{
public:
	static __forceinline void ReadBuffer(GLenum Mode)
	{
		GLCHECK(glReadBuffer(Mode));
	}

	static __forceinline void DrawBuffer(GLenum Mode)
	{
		GLCHECK(glDrawBuffers(1, &Mode));
	}

	static FORCEINLINE void GenSamplers(GLsizei Count, GLuint* Samplers)
	{
		GLCHECK(glGenSamplers(Count, Samplers));
	}

	static FORCEINLINE void DeleteSamplers(GLsizei Count, GLuint* Samplers)
	{
		GLCHECK(glDeleteSamplers(Count, Samplers));
	}

	static FORCEINLINE void SetSamplerParameter(GLuint Sampler, GLenum Parameter, GLint Value)
	{
		GLCHECK(glSamplerParameteri(Sampler, Parameter, Value));
	}

	static FORCEINLINE void BindSampler(GLuint Unit, GLuint Sampler)
	{
		GLCHECK(glBindSampler(Unit, Sampler));
	}

	static FORCEINLINE void PolygonMode(GLenum Face, GLenum Mode)
	{
		glPolygonMode(Face, Mode);
	}

	static FORCEINLINE void VertexAttribDivisor(GLuint Index, GLuint Divisor)
	{
		GLCHECK(glVertexAttribDivisor(Index, Divisor));
	}

	static FORCEINLINE void* MapBufferRange(GLenum Type, uint32 InOffset, uint32 InSize, GLbitfield Access)
	{
		return GLCHECK(glMapBufferRange(Type, InOffset, InSize, Access));
	}

	static FORCEINLINE void UnmapBuffer(GLenum Type)
	{
		GLCHECK(glUnmapBuffer(Type));
	}

	static  void BindBufferBase(GLenum Target, GLuint Index, GLuint Buffer)
	{
		GLCHECK(glBindBufferBase(Target, Index, Buffer));
	}

	static FORCEINLINE void BindBufferRange(GLenum Target, GLuint Index, GLuint Buffer, GLintptr Offset, GLsizeiptr Size)
	{
		GLCHECK(glBindBufferRange(Target, Index, Buffer, Offset, Size));
	}

	static FORCEINLINE GLuint GetUniformBlockIndex(GLuint Program, const GLchar* UniformBlockName)
	{
		return GLCHECK(glGetUniformBlockIndex(Program, UniformBlockName));
	}

	static FORCEINLINE void UniformBlockBinding(GLuint Program, GLuint UniformBlockIndex, GLuint UniformBlockBinding)
	{
		GLCHECK(glUniformBlockBinding(Program, UniformBlockIndex, UniformBlockBinding));
	}

	static FORCEINLINE void TexParameter(GLenum Target, GLenum Parameter, GLint Value)
	{
		GLCHECK(glTexParameteri(Target, Parameter, Value));
	}

	static FORCEINLINE void FramebufferTexture(GLenum Target, GLenum Attachment, GLuint Texture, GLint Level)
	{
		GLCHECK(glFramebufferTexture2D(Target, Attachment, GL_TEXTURE_2D, Texture, Level));
	}

	static FORCEINLINE void FramebufferTexture3D(GLenum Target, GLenum Attachment, GLenum TexTarget, GLuint Texture, GLint Level, GLint ZOffset)
	{
		GLCHECK(glFramebufferTexture3D(Target, Attachment, TexTarget, Texture, Level, ZOffset));
	}

	static FORCEINLINE void Uniform4uiv(GLint Location, GLsizei Count, const GLuint* Value)
	{
		GLCHECK(glUniform4uiv(Location, Count, Value));
	}

	static FORCEINLINE void Uniform1i(GLint Location, GLuint Value)
	{
		GLCHECK(glUniform1i(Location, Value));
	}

	static FORCEINLINE void BlitFramebuffer(GLint SrcX0, GLint SrcY0, GLint SrcX1, GLint SrcY1, GLint DstX0, GLint DstY0, GLint DstX1, GLint DstY1, GLbitfield Mask, GLenum Filter)
	{
		GLCHECK(glBlitFramebuffer(SrcX0, SrcY0, SrcX1, SrcY1, DstX0, DstY0, DstX1, DstY1, Mask, Filter));
	}

	static FORCEINLINE void DrawBuffers(GLsizei NumBuffers, const GLenum* Buffers)
	{
		GLCHECK(glDrawBuffers(NumBuffers, Buffers));
	}

	static FORCEINLINE void DepthRange(GLdouble Near, GLdouble Far)
	{
		GLCHECK(glDepthRangef((GLfloat)Near, (GLfloat)Far));
	}

	static FORCEINLINE void Enable(GLenum Parameter)
	{
		GLCHECK(glEnable(Parameter));
	}

	static FORCEINLINE void Disable(GLenum Parameter)
	{
		GLCHECK(glDisable(Parameter));
	}

	static FORCEINLINE void EnableIf(GLenum Parameter, GLboolean bEnable)
	{
		if (bEnable)
		{
			Enable(Parameter);
		}
		else
		{
			Disable(Parameter);
		}
	}

	static FORCEINLINE void ColorMask(GLboolean Red, GLboolean Green, GLboolean Blue, GLboolean Alpha)
	{
		GLCHECK(glColorMask(Red, Green, Blue, Alpha));
	}

	static FORCEINLINE void VertexAttribPointer(GLuint Index, GLint Size, GLenum Type, GLboolean Normalized, GLsizei Stride, const GLvoid* Pointer)
	{
		GLCHECK(glVertexAttribPointer(Index, Size, Type, Normalized, Stride, Pointer));
	}

	static FORCEINLINE void VertexAttribIPointer(GLuint Index, GLint Size, GLenum Type, GLsizei Stride, const GLvoid* Pointer)
	{
		GLCHECK(glVertexAttribIPointer(Index, Size, Type, Stride, Pointer));
	}

	static FORCEINLINE void DrawArraysInstanced(GLenum Mode, GLint First, GLsizei Count, GLsizei InstanceCount)
	{
		GLCHECK(glDrawArraysInstanced(Mode, First, Count, InstanceCount));
	}

	static FORCEINLINE void DrawElementsInstanced(GLenum Mode, GLsizei Count, GLenum Type, const GLvoid* Indices, GLsizei InstanceCount)
	{
		GLCHECK(glDrawElementsInstanced(Mode, Count, Type, Indices, InstanceCount));
	}

	static FORCEINLINE void DrawRangeElements(GLenum Mode, GLuint Start, GLuint End, GLsizei Count, GLenum Type, const GLvoid* Indices)
	{
		GLCHECK(glDrawRangeElements(Mode, Start, End, Count, Type, Indices));
	}

	static FORCEINLINE void ClearBufferfv(GLenum Buffer, GLint DrawBufferIndex, const GLfloat* Value)
	{
		GLCHECK(glClearBufferfv(Buffer, DrawBufferIndex, Value));
	}

	static FORCEINLINE void ClearBufferfi(GLenum Buffer, GLint DrawBufferIndex, GLfloat Depth, GLint Stencil)
	{
		GLCHECK(glClearBufferfi(Buffer, DrawBufferIndex, Depth, Stencil));
	}

	static FORCEINLINE void ClearBufferiv(GLenum Buffer, GLint DrawBufferIndex, const GLint* Value)
	{
		GLCHECK(glClearBufferiv(Buffer, DrawBufferIndex, Value));
	}

	static FORCEINLINE void ClearDepth(GLdouble Depth)
	{
		GLCHECK(glClearDepthf((GLfloat)Depth));
	}

	static FORCEINLINE void TexImage3D(GLenum Target, GLint Level, GLint InternalFormat, GLsizei Width, GLsizei Height, GLsizei Depth, GLint Border, GLenum Format, GLenum Type, const GLvoid* PixelData)
	{
		GLCHECK(glTexImage3D(Target, Level, InternalFormat, Width, Height, Depth, Border, Format, Type, PixelData));
	}

	static FORCEINLINE void CompressedTexImage3D(GLenum Target, GLint Level, GLenum InternalFormat, GLsizei Width, GLsizei Height, GLsizei Depth, GLint Border, GLsizei ImageSize, const GLvoid* PixelData)
	{
		GLCHECK(glCompressedTexImage3D(Target, Level, InternalFormat, Width, Height, Depth, Border, ImageSize, PixelData));
	}

	static FORCEINLINE void CompressedTexSubImage2D(GLenum Target, GLint Level, GLsizei Width, GLsizei Height, GLenum Format, GLsizei ImageSize, const GLvoid* PixelData)
	{
		GLCHECK(glCompressedTexSubImage2D(Target, Level, 0, 0, Width, Height, Format, ImageSize, PixelData));
	}

	static FORCEINLINE void TexBuffer(GLenum Target, GLenum InternalFormat, GLuint Buffer)
	{
		GLCHECK(glTexBufferEXT(Target, InternalFormat, Buffer));
	}

	static FORCEINLINE void TexSubImage3D(GLenum Target, GLint Level, GLint XOffset, GLint YOffset, GLint ZOffset, GLsizei Width, GLsizei Height, GLsizei Depth, GLenum Format, GLenum Type, const GLvoid* PixelData)
	{
		GLCHECK(glTexSubImage3D(Target, Level, XOffset, YOffset, ZOffset, Width, Height, Depth, Format, Type, PixelData));
	}

	static FORCEINLINE void	CopyTexSubImage3D(GLenum Target, GLint Level, GLint XOffset, GLint YOffset, GLint ZOffset, GLint X, GLint Y, GLsizei Width, GLsizei Height)
	{
		GLCHECK(glCopyTexSubImage3D(Target, Level, XOffset, YOffset, ZOffset, X, Y, Width, Height));
	}

	static FORCEINLINE void CopyBufferSubData(GLenum ReadTarget, GLenum WriteTarget, GLintptr ReadOffset, GLintptr WriteOffset, GLsizeiptr Size)
	{
		GLCHECK(glCopyBufferSubData(ReadTarget, WriteTarget, ReadOffset, WriteOffset, Size));
	}

	static FORCEINLINE void GenBuffers(GLsizei n, GLuint *buffers)
	{
		GLCHECK(glGenBuffers(n, buffers));
	}

	static FORCEINLINE void GenTextures(GLsizei n, GLuint *textures)
	{
		GLCHECK(glGenTextures(n, textures));
	}

	static FORCEINLINE void CompressedTexSubImage3D(GLenum Target, GLint Level, GLint XOffset, GLint YOffset, GLint ZOffset, GLsizei Width, GLsizei Height, GLsizei Depth, GLenum Format, GLsizei ImageSize, const GLvoid* PixelData)
	{
		GLCHECK(glCompressedTexSubImage3D(Target, Level, XOffset, YOffset, ZOffset, Width, Height, Depth, Format, ImageSize, PixelData));
	}

	static FORCEINLINE void GenerateMipmap(GLenum Target)
	{
		GLCHECK(glGenerateMipmap(Target));
	}

	static FORCEINLINE void BindVertexBuffer(GLuint BindingIndex, GLuint Buffer, GLintptr Offset, GLsizei Stride)
	{
		GLCHECK(glBindVertexBuffer(BindingIndex, Buffer, Offset, Stride));
	}

	static FORCEINLINE void VertexBindingDivisor(GLuint BindingIndex, GLuint Divisor)
	{
		GLCHECK(glVertexBindingDivisor(BindingIndex, Divisor));
	}

	static FORCEINLINE void DepthMask(GLboolean Enable)
	{
		GLCHECK(glDepthMask(Enable));
	}

	static FORCEINLINE void DepthFunction(GLenum Function)
	{
		GLCHECK(glDepthFunc(Function));
	}

	static FORCEINLINE void StencilFunction(GLenum Function, GLint Ref, GLuint Mask)
	{
		GLCHECK(glStencilFunc(Function, Ref, Mask));
	}

	static FORCEINLINE void StencilOp(GLenum StencilFailOp, GLenum DepthFailOp, GLenum PassStencilOp)
	{
		GLCHECK(glStencilOp(StencilFailOp, DepthFailOp, PassStencilOp));
	}

	static FORCEINLINE void StencilMask(GLuint Mask)
	{
		GLCHECK(glStencilMask(Mask));
	}

	static FORCEINLINE void CullMode(GLenum Cull)
	{
		GLCHECK(glCullFace(Cull));
	}

	static FORCEINLINE void FrontFace(GLenum f)
	{
		GLCHECK(glFrontFace(f));
	}

	static FORCEINLINE void DrawArrays(GLenum Type, GLuint StartVertex, GLuint PrimitiveNumber)
	{
		GLCHECK(glDrawArrays(Type, StartVertex, PrimitiveNumber));
	}

	static FORCEINLINE void DrawElements(GLenum Mode, GLsizei Count, GLenum Type, const void *Indices)
	{
		GLCHECK(glDrawElements(Mode, Count, Type, Indices));
	}

	static FORCEINLINE void ClearColor(GLfloat R, GLfloat G, GLfloat B, GLfloat A)
	{
		GLCHECK(glClearColor(R, G, B, A));
	}

	static FORCEINLINE void ClearStencil(GLint Stencil)
	{
		GLCHECK(glClearStencil(Stencil));
	}

	static FORCEINLINE void Clear(GLbitfield Mask)
	{
		GLCHECK(glClear(Mask));
	}

	static FORCEINLINE void BindBuffer(GLenum Target, GLuint Buffer)
	{
		GLCHECK(glBindBuffer(Target, Buffer));
	}

	static FORCEINLINE void BufferData(GLenum Targert, GLsizeiptr Size, const void* Data, GLenum Usage)
	{
		GLCHECK(glBufferData(Targert, Size, Data, Usage));
	}

	static FORCEINLINE void BufferSubData(GLenum Targert, GLintptr Offset, GLsizeiptr Size, const void* Data)
	{
		GLCHECK(glBufferSubData(Targert, Offset, Size, Data));
	}

	static FORCEINLINE void GenVertexArrays(GLsizei Size, GLuint* Arr)
	{
		GLCHECK(glGenVertexArrays(Size, Arr));
	}

	static FORCEINLINE void DeleteVertexArrays(GLsizei Size, GLuint* Arr)
	{
		GLCHECK(glDeleteVertexArrays(Size, Arr));
	}

	static FORCEINLINE void BindVertexArray(GLuint Array)
	{
		GLCHECK(glBindVertexArray(Array));
	}

	static FORCEINLINE void EnableVertexAttribArray(GLuint Index)
	{
		GLCHECK(glEnableVertexAttribArray(Index));
	}

	static FORCEINLINE void DisableVertexAttribArray(GLuint Index)
	{
		GLCHECK(glDisableVertexAttribArray(Index));
	}

	static FORCEINLINE void BindTexture(GLenum Target, GLuint Texture)
	{
		GLCHECK(glBindTexture(Target, Texture));
	}

	static FORCEINLINE void CompressedImage2D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const void *data)
	{
		GLCHECK(glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, data));
	}

	static FORCEINLINE void CompressedImage3D(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data)
	{
		GLCHECK(glCompressedTexImage3D(target, level, internalformat, width, height, depth, border, imageSize, data));
	}

	static FORCEINLINE void PixelStorage(GLenum Name, GLint Param)
	{
		GLCHECK(glPixelStorei(Name, Param));
	}

	static FORCEINLINE void TexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid *pixels)
	{
		GLCHECK(glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels));
	}

	static FORCEINLINE void TexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid *pixels)
	{
		GLCHECK(glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels));
	}

	static FORCEINLINE GLuint CreateShader(GLenum Type)
	{
		return GLCHECK(glCreateShader(Type));
	}

	static FORCEINLINE void ShaderSource(GLuint Shader, GLsizei Count, const GLchar**String, const GLint *Length)
	{
		GLCHECK(glShaderSource(Shader, Count, String, Length));
	}

	static FORCEINLINE void CompileShader(GLuint Shader)
	{
		GLCHECK(glCompileShader(Shader));
	}

	static FORCEINLINE void GetShaderIv(GLuint Shader, GLenum Name, GLint* Params)
	{
		GLCHECK(glGetShaderiv(Shader, Name, Params));
	}

	static FORCEINLINE void GetShaderInfo(GLuint Shader, GLsizei BufSize, GLsizei *Length, GLchar *InfoLog)
	{
		GLCHECK(glGetShaderInfoLog(Shader, BufSize, Length, InfoLog));
	}

	static FORCEINLINE void DeleteShader(GLuint Shader)
	{
		GLCHECK(glDeleteShader(Shader));
	}

	static FORCEINLINE void DeleteProgram(GLuint Shader)
	{
		GLCHECK(glDeleteProgram(Shader));
	}

	static FORCEINLINE GLuint CreateProgram()
	{
		return GLCHECK(glCreateProgram());
	}

	static FORCEINLINE void AttachShader(GLuint Program, GLuint Shader)
	{
		GLCHECK(glAttachShader(Program, Shader));
	}

	static FORCEINLINE void LinkProgram(GLuint Program)
	{
		GLCHECK(glLinkProgram(Program));
	}

	static FORCEINLINE void GetProgramIv(GLuint Program, GLenum Name, GLint* Params)
	{
		GLCHECK(glGetProgramiv(Program, Name, Params));
	}

	static FORCEINLINE void GetProgramInfo(GLuint Program, GLsizei BufSize, GLsizei *Length, GLchar *InfoLog)
	{
		GLCHECK(glGetProgramInfoLog(Program, BufSize, Length, InfoLog));
	}

	static FORCEINLINE void GetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei *length, GLint *size, GLenum *type, GLchar *name)
	{
		GLCHECK(glGetActiveUniform(program, index, bufSize, length, size, type, name));
	}

	static FORCEINLINE GLint GetUniformLocation(GLuint Program, const GLchar* Name)
	{
		return GLCHECK(glGetUniformLocation(Program, Name));
	}

	static FORCEINLINE void SetViewport(GLint x, GLint y, GLsizei width, GLsizei height)
	{
		GLCHECK(glViewport(x, y, width, height));
	}

	static FORCEINLINE void SetScissor(GLint x, GLint y, GLsizei width, GLsizei height)
	{
		GLCHECK(glScissor(x, y, width, height));
	}

	static FORCEINLINE void UseProgram(GLuint Program)
	{
		GLCHECK(glUseProgram(Program));
	}

	static FORCEINLINE void ActiveTexture(GLenum Texture)
	{
		GLCHECK(glActiveTexture(Texture));
	}

	static FORCEINLINE void GenFramebuffer(GLsizei size, GLuint* Buffers)
	{
		GLCHECK(glGenFramebuffers(size, Buffers));
	}

	static FORCEINLINE void DeleteFramebuffer(GLsizei size, GLuint* Buffers)
	{
		GLCHECK(glDeleteFramebuffers(size, Buffers));
	}

	static FORCEINLINE void BindFramebuffer(GLenum Target, GLuint Buffer)
	{
		GLCHECK(glBindFramebuffer(Target, Buffer));
	}

	static FORCEINLINE GLenum CheckFrameBuffer(GLenum Target)
	{
		return GLCHECK(glCheckFramebufferStatus(Target));
	}

	static FORCEINLINE void Flush()
	{
		GLCHECK(glFlush());
	}

	static FORCEINLINE void DeleteBuffers(GLsizei Number, const GLuint* Buffers)
	{
		GLCHECK(glDeleteBuffers(Number, Buffers));
	}


	static FORCEINLINE void DeleteTextures(GLsizei Number, const GLuint* Textures)
	{
		GLCHECK(glDeleteTextures(Number, Textures));
	}

	static FORCEINLINE void BlendFunc(GLenum Src, GLenum Dst)
	{
		GLCHECK(glBlendFunc(Src, Dst));
	}
};

#endif // GLAPI_h__


