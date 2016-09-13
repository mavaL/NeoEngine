/*
// glloader
// Copyright (C) 2004-2009 Minmin Gong
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published
// by the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
*/

#include <glloader/glloader.h>
#include "utils.h"

#ifdef GLLOADER_WGL

#ifdef __cplusplus
extern "C"
{
#endif

char _WGL_3DFX_multisample = 0;
char _WGL_3DL_stereo_control = 0;
char _WGL_AMD_gpu_association = 0;
char _WGL_ARB_buffer_region = 0;
char _WGL_ARB_create_context = 0;
char _WGL_ARB_create_context_profile = 0;
char _WGL_ARB_create_context_robustness = 0;
char _WGL_ARB_extensions_string = 0;
char _WGL_ARB_framebuffer_sRGB = 0;
char _WGL_ARB_make_current_read = 0;
char _WGL_ARB_multisample = 0;
char _WGL_ARB_pbuffer = 0;
char _WGL_ARB_pixel_format = 0;
char _WGL_ARB_pixel_format_float = 0;
char _WGL_ARB_render_texture = 0;
char _WGL_ARB_robustness_isolation = 0;
char _WGL_ATI_pixel_format_float = 0;
char _WGL_EXT_create_context_es2_profile = 0;
char _WGL_EXT_depth_float = 0;
char _WGL_EXT_display_color_table = 0;
char _WGL_EXT_extensions_string = 0;
char _WGL_EXT_framebuffer_sRGB = 0;
char _WGL_EXT_make_current_read = 0;
char _WGL_EXT_multisample = 0;
char _WGL_EXT_pbuffer = 0;
char _WGL_EXT_pixel_format = 0;
char _WGL_EXT_pixel_format_packed_float = 0;
char _WGL_EXT_swap_control = 0;
char _WGL_EXT_swap_control_tear = 0;
char _WGL_I3D_digital_video_control = 0;
char _WGL_I3D_gamma = 0;
char _WGL_I3D_genlock = 0;
char _WGL_I3D_image_buffer = 0;
char _WGL_I3D_swap_frame_lock = 0;
char _WGL_I3D_swap_frame_usage = 0;
char _WGL_NV_copy_image = 0;
char _WGL_NV_delay_before_swap = 0;
char _WGL_NV_DX_interop = 0;
char _WGL_NV_float_buffer = 0;
char _WGL_NV_gpu_affinity = 0;
char _WGL_NV_multisample_coverage = 0;
char _WGL_NV_present_video = 0;
char _WGL_NV_render_depth_texture = 0;
char _WGL_NV_render_texture_rectangle = 0;
char _WGL_NV_swap_group = 0;
char _WGL_NV_vertex_array_range = 0;
char _WGL_NV_video_capture = 0;
char _WGL_NV_video_output = 0;
char _WGL_OML_sync_control = 0;

static char GLLOADER_APIENTRY _glloader_WGL_3DFX_multisample()
{
	return _WGL_3DFX_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_3DFX_multisample()
{
	glloader_init();
	return glloader_WGL_3DFX_multisample();
}
glloader_WGL_3DFX_multisampleFUNC glloader_WGL_3DFX_multisample = self_init_glloader_WGL_3DFX_multisample;

static char GLLOADER_APIENTRY _glloader_WGL_3DL_stereo_control()
{
	return _WGL_3DL_stereo_control;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_3DL_stereo_control()
{
	glloader_init();
	return glloader_WGL_3DL_stereo_control();
}
glloader_WGL_3DL_stereo_controlFUNC glloader_WGL_3DL_stereo_control = self_init_glloader_WGL_3DL_stereo_control;

#ifdef WGL_3DL_stereo_control

static BOOL GLLOADER_APIENTRY self_init_wglSetStereoEmitterState3DL(HDC hDC, UINT uState)
{
	glloader_init();
	return wglSetStereoEmitterState3DL(hDC, uState);
}

wglSetStereoEmitterState3DLFUNC wglSetStereoEmitterState3DL = self_init_wglSetStereoEmitterState3DL;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_AMD_gpu_association()
{
	return _WGL_AMD_gpu_association;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_AMD_gpu_association()
{
	glloader_init();
	return glloader_WGL_AMD_gpu_association();
}
glloader_WGL_AMD_gpu_associationFUNC glloader_WGL_AMD_gpu_association = self_init_glloader_WGL_AMD_gpu_association;

#ifdef WGL_AMD_gpu_association

static UINT GLLOADER_APIENTRY self_init_wglGetGPUIDsAMD(UINT maxCount, UINT* ids)
{
	glloader_init();
	return wglGetGPUIDsAMD(maxCount, ids);
}
static INT GLLOADER_APIENTRY self_init_wglGetGPUInfoAMD(UINT id, int property, GLenum dataType, UINT size, void* data)
{
	glloader_init();
	return wglGetGPUInfoAMD(id, property, dataType, size, data);
}
static UINT GLLOADER_APIENTRY self_init_wglGetContextGPUIDAMD(HGLRC hglrc)
{
	glloader_init();
	return wglGetContextGPUIDAMD(hglrc);
}
static HGLRC GLLOADER_APIENTRY self_init_wglCreateAssociatedContextAMD(UINT id)
{
	glloader_init();
	return wglCreateAssociatedContextAMD(id);
}
static HGLRC GLLOADER_APIENTRY self_init_wglCreateAssociatedContextAttribsAMD(UINT id, HGLRC hShareContext, const int* attribList)
{
	glloader_init();
	return wglCreateAssociatedContextAttribsAMD(id, hShareContext, attribList);
}
static BOOL GLLOADER_APIENTRY self_init_wglDeleteAssociatedContextAMD(HGLRC hglrc)
{
	glloader_init();
	return wglDeleteAssociatedContextAMD(hglrc);
}
static BOOL GLLOADER_APIENTRY self_init_wglMakeAssociatedContextCurrentAMD(HGLRC hglrc)
{
	glloader_init();
	return wglMakeAssociatedContextCurrentAMD(hglrc);
}
static HGLRC GLLOADER_APIENTRY self_init_wglGetCurrentAssociatedContextAMD()
{
	glloader_init();
	return wglGetCurrentAssociatedContextAMD();
}
static VOID GLLOADER_APIENTRY self_init_wglBlitContextFramebufferAMD(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	glloader_init();
	wglBlitContextFramebufferAMD(dstCtx, srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

wglGetGPUIDsAMDFUNC wglGetGPUIDsAMD = self_init_wglGetGPUIDsAMD;
wglGetGPUInfoAMDFUNC wglGetGPUInfoAMD = self_init_wglGetGPUInfoAMD;
wglGetContextGPUIDAMDFUNC wglGetContextGPUIDAMD = self_init_wglGetContextGPUIDAMD;
wglCreateAssociatedContextAMDFUNC wglCreateAssociatedContextAMD = self_init_wglCreateAssociatedContextAMD;
wglCreateAssociatedContextAttribsAMDFUNC wglCreateAssociatedContextAttribsAMD = self_init_wglCreateAssociatedContextAttribsAMD;
wglDeleteAssociatedContextAMDFUNC wglDeleteAssociatedContextAMD = self_init_wglDeleteAssociatedContextAMD;
wglMakeAssociatedContextCurrentAMDFUNC wglMakeAssociatedContextCurrentAMD = self_init_wglMakeAssociatedContextCurrentAMD;
wglGetCurrentAssociatedContextAMDFUNC wglGetCurrentAssociatedContextAMD = self_init_wglGetCurrentAssociatedContextAMD;
wglBlitContextFramebufferAMDFUNC wglBlitContextFramebufferAMD = self_init_wglBlitContextFramebufferAMD;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_buffer_region()
{
	return _WGL_ARB_buffer_region;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_buffer_region()
{
	glloader_init();
	return glloader_WGL_ARB_buffer_region();
}
glloader_WGL_ARB_buffer_regionFUNC glloader_WGL_ARB_buffer_region = self_init_glloader_WGL_ARB_buffer_region;

#ifdef WGL_ARB_buffer_region

static HANDLE GLLOADER_APIENTRY self_init_wglCreateBufferRegionARB(HDC hDC, int iLayerPlane, UINT uType)
{
	glloader_init();
	return wglCreateBufferRegionARB(hDC, iLayerPlane, uType);
}
static VOID GLLOADER_APIENTRY self_init_wglDeleteBufferRegionARB(HANDLE hRegion)
{
	glloader_init();
	wglDeleteBufferRegionARB(hRegion);
}
static BOOL GLLOADER_APIENTRY self_init_wglSaveBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height)
{
	glloader_init();
	return wglSaveBufferRegionARB(hRegion, x, y, width, height);
}
static BOOL GLLOADER_APIENTRY self_init_wglRestoreBufferRegionARB(HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc)
{
	glloader_init();
	return wglRestoreBufferRegionARB(hRegion, x, y, width, height, xSrc, ySrc);
}

wglCreateBufferRegionARBFUNC wglCreateBufferRegionARB = self_init_wglCreateBufferRegionARB;
wglDeleteBufferRegionARBFUNC wglDeleteBufferRegionARB = self_init_wglDeleteBufferRegionARB;
wglSaveBufferRegionARBFUNC wglSaveBufferRegionARB = self_init_wglSaveBufferRegionARB;
wglRestoreBufferRegionARBFUNC wglRestoreBufferRegionARB = self_init_wglRestoreBufferRegionARB;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_create_context()
{
	return _WGL_ARB_create_context;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_create_context()
{
	glloader_init();
	return glloader_WGL_ARB_create_context();
}
glloader_WGL_ARB_create_contextFUNC glloader_WGL_ARB_create_context = self_init_glloader_WGL_ARB_create_context;

#ifdef WGL_ARB_create_context

static HGLRC GLLOADER_APIENTRY self_init_wglCreateContextAttribsARB(HDC hDC, HGLRC hShareContext, const int* attribList)
{
	glloader_init();
	return wglCreateContextAttribsARB(hDC, hShareContext, attribList);
}

wglCreateContextAttribsARBFUNC wglCreateContextAttribsARB = self_init_wglCreateContextAttribsARB;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_create_context_profile()
{
	return _WGL_ARB_create_context_profile;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_create_context_profile()
{
	glloader_init();
	return glloader_WGL_ARB_create_context_profile();
}
glloader_WGL_ARB_create_context_profileFUNC glloader_WGL_ARB_create_context_profile = self_init_glloader_WGL_ARB_create_context_profile;

static char GLLOADER_APIENTRY _glloader_WGL_ARB_create_context_robustness()
{
	return _WGL_ARB_create_context_robustness;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_create_context_robustness()
{
	glloader_init();
	return glloader_WGL_ARB_create_context_robustness();
}
glloader_WGL_ARB_create_context_robustnessFUNC glloader_WGL_ARB_create_context_robustness = self_init_glloader_WGL_ARB_create_context_robustness;

static char GLLOADER_APIENTRY _glloader_WGL_ARB_extensions_string()
{
	return _WGL_ARB_extensions_string;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_extensions_string()
{
	glloader_init();
	return glloader_WGL_ARB_extensions_string();
}
glloader_WGL_ARB_extensions_stringFUNC glloader_WGL_ARB_extensions_string = self_init_glloader_WGL_ARB_extensions_string;

#ifdef WGL_ARB_extensions_string

static const char* GLLOADER_APIENTRY self_init_wglGetExtensionsStringARB(HDC hdc)
{
	glloader_init();
	return wglGetExtensionsStringARB(hdc);
}

wglGetExtensionsStringARBFUNC wglGetExtensionsStringARB = self_init_wglGetExtensionsStringARB;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_framebuffer_sRGB()
{
	return _WGL_ARB_framebuffer_sRGB;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_framebuffer_sRGB()
{
	glloader_init();
	return glloader_WGL_ARB_framebuffer_sRGB();
}
glloader_WGL_ARB_framebuffer_sRGBFUNC glloader_WGL_ARB_framebuffer_sRGB = self_init_glloader_WGL_ARB_framebuffer_sRGB;

static char GLLOADER_APIENTRY _glloader_WGL_ARB_make_current_read()
{
	return _WGL_ARB_make_current_read;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_make_current_read()
{
	glloader_init();
	return glloader_WGL_ARB_make_current_read();
}
glloader_WGL_ARB_make_current_readFUNC glloader_WGL_ARB_make_current_read = self_init_glloader_WGL_ARB_make_current_read;

#ifdef WGL_ARB_make_current_read

static BOOL GLLOADER_APIENTRY self_init_wglMakeContextCurrentARB(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
	glloader_init();
	return wglMakeContextCurrentARB(hDrawDC, hReadDC, hglrc);
}
static HDC GLLOADER_APIENTRY self_init_wglGetCurrentReadDCARB()
{
	glloader_init();
	return wglGetCurrentReadDCARB();
}

wglMakeContextCurrentARBFUNC wglMakeContextCurrentARB = self_init_wglMakeContextCurrentARB;
wglGetCurrentReadDCARBFUNC wglGetCurrentReadDCARB = self_init_wglGetCurrentReadDCARB;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_multisample()
{
	return _WGL_ARB_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_multisample()
{
	glloader_init();
	return glloader_WGL_ARB_multisample();
}
glloader_WGL_ARB_multisampleFUNC glloader_WGL_ARB_multisample = self_init_glloader_WGL_ARB_multisample;

static char GLLOADER_APIENTRY _glloader_WGL_ARB_pbuffer()
{
	return _WGL_ARB_pbuffer;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_pbuffer()
{
	glloader_init();
	return glloader_WGL_ARB_pbuffer();
}
glloader_WGL_ARB_pbufferFUNC glloader_WGL_ARB_pbuffer = self_init_glloader_WGL_ARB_pbuffer;

#ifdef WGL_ARB_pbuffer

static HPBUFFERARB GLLOADER_APIENTRY self_init_wglCreatePbufferARB(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList)
{
	glloader_init();
	return wglCreatePbufferARB(hDC, iPixelFormat, iWidth, iHeight, piAttribList);
}
static HDC GLLOADER_APIENTRY self_init_wglGetPbufferDCARB(HPBUFFERARB hPbuffer)
{
	glloader_init();
	return wglGetPbufferDCARB(hPbuffer);
}
static int GLLOADER_APIENTRY self_init_wglReleasePbufferDCARB(HPBUFFERARB hPbuffer, HDC hDC)
{
	glloader_init();
	return wglReleasePbufferDCARB(hPbuffer, hDC);
}
static BOOL GLLOADER_APIENTRY self_init_wglDestroyPbufferARB(HPBUFFERARB hPbuffer)
{
	glloader_init();
	return wglDestroyPbufferARB(hPbuffer);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryPbufferARB(HPBUFFERARB hPbuffer, int iAttribute, int* piValue)
{
	glloader_init();
	return wglQueryPbufferARB(hPbuffer, iAttribute, piValue);
}

wglCreatePbufferARBFUNC wglCreatePbufferARB = self_init_wglCreatePbufferARB;
wglGetPbufferDCARBFUNC wglGetPbufferDCARB = self_init_wglGetPbufferDCARB;
wglReleasePbufferDCARBFUNC wglReleasePbufferDCARB = self_init_wglReleasePbufferDCARB;
wglDestroyPbufferARBFUNC wglDestroyPbufferARB = self_init_wglDestroyPbufferARB;
wglQueryPbufferARBFUNC wglQueryPbufferARB = self_init_wglQueryPbufferARB;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_pixel_format()
{
	return _WGL_ARB_pixel_format;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_pixel_format()
{
	glloader_init();
	return glloader_WGL_ARB_pixel_format();
}
glloader_WGL_ARB_pixel_formatFUNC glloader_WGL_ARB_pixel_format = self_init_glloader_WGL_ARB_pixel_format;

#ifdef WGL_ARB_pixel_format

static BOOL GLLOADER_APIENTRY self_init_wglGetPixelFormatAttribivARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int* piAttributes, int* piValues)
{
	glloader_init();
	return wglGetPixelFormatAttribivARB(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetPixelFormatAttribfvARB(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int* piAttributes, FLOAT* pfValues)
{
	glloader_init();
	return wglGetPixelFormatAttribfvARB(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
}
static BOOL GLLOADER_APIENTRY self_init_wglChoosePixelFormatARB(HDC hdc, const int* piAttribIList, const FLOAT* pfAttribFList, UINT nMaxFormats, int* piFormats, UINT* nNumFormats)
{
	glloader_init();
	return wglChoosePixelFormatARB(hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
}

wglGetPixelFormatAttribivARBFUNC wglGetPixelFormatAttribivARB = self_init_wglGetPixelFormatAttribivARB;
wglGetPixelFormatAttribfvARBFUNC wglGetPixelFormatAttribfvARB = self_init_wglGetPixelFormatAttribfvARB;
wglChoosePixelFormatARBFUNC wglChoosePixelFormatARB = self_init_wglChoosePixelFormatARB;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_pixel_format_float()
{
	return _WGL_ARB_pixel_format_float;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_pixel_format_float()
{
	glloader_init();
	return glloader_WGL_ARB_pixel_format_float();
}
glloader_WGL_ARB_pixel_format_floatFUNC glloader_WGL_ARB_pixel_format_float = self_init_glloader_WGL_ARB_pixel_format_float;

static char GLLOADER_APIENTRY _glloader_WGL_ARB_render_texture()
{
	return _WGL_ARB_render_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_render_texture()
{
	glloader_init();
	return glloader_WGL_ARB_render_texture();
}
glloader_WGL_ARB_render_textureFUNC glloader_WGL_ARB_render_texture = self_init_glloader_WGL_ARB_render_texture;

#ifdef WGL_ARB_render_texture

static BOOL GLLOADER_APIENTRY self_init_wglBindTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
{
	glloader_init();
	return wglBindTexImageARB(hPbuffer, iBuffer);
}
static BOOL GLLOADER_APIENTRY self_init_wglReleaseTexImageARB(HPBUFFERARB hPbuffer, int iBuffer)
{
	glloader_init();
	return wglReleaseTexImageARB(hPbuffer, iBuffer);
}
static BOOL GLLOADER_APIENTRY self_init_wglSetPbufferAttribARB(HPBUFFERARB hPbuffer, const int* piAttribList)
{
	glloader_init();
	return wglSetPbufferAttribARB(hPbuffer, piAttribList);
}

wglBindTexImageARBFUNC wglBindTexImageARB = self_init_wglBindTexImageARB;
wglReleaseTexImageARBFUNC wglReleaseTexImageARB = self_init_wglReleaseTexImageARB;
wglSetPbufferAttribARBFUNC wglSetPbufferAttribARB = self_init_wglSetPbufferAttribARB;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_ARB_robustness_isolation()
{
	return _WGL_ARB_robustness_isolation;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ARB_robustness_isolation()
{
	glloader_init();
	return glloader_WGL_ARB_robustness_isolation();
}
glloader_WGL_ARB_robustness_isolationFUNC glloader_WGL_ARB_robustness_isolation = self_init_glloader_WGL_ARB_robustness_isolation;

static char GLLOADER_APIENTRY _glloader_WGL_ATI_pixel_format_float()
{
	return _WGL_ATI_pixel_format_float;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_ATI_pixel_format_float()
{
	glloader_init();
	return glloader_WGL_ATI_pixel_format_float();
}
glloader_WGL_ATI_pixel_format_floatFUNC glloader_WGL_ATI_pixel_format_float = self_init_glloader_WGL_ATI_pixel_format_float;

static char GLLOADER_APIENTRY _glloader_WGL_EXT_create_context_es2_profile()
{
	return _WGL_EXT_create_context_es2_profile;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_create_context_es2_profile()
{
	glloader_init();
	return glloader_WGL_EXT_create_context_es2_profile();
}
glloader_WGL_EXT_create_context_es2_profileFUNC glloader_WGL_EXT_create_context_es2_profile = self_init_glloader_WGL_EXT_create_context_es2_profile;

static char GLLOADER_APIENTRY _glloader_WGL_EXT_depth_float()
{
	return _WGL_EXT_depth_float;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_depth_float()
{
	glloader_init();
	return glloader_WGL_EXT_depth_float();
}
glloader_WGL_EXT_depth_floatFUNC glloader_WGL_EXT_depth_float = self_init_glloader_WGL_EXT_depth_float;

static char GLLOADER_APIENTRY _glloader_WGL_EXT_display_color_table()
{
	return _WGL_EXT_display_color_table;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_display_color_table()
{
	glloader_init();
	return glloader_WGL_EXT_display_color_table();
}
glloader_WGL_EXT_display_color_tableFUNC glloader_WGL_EXT_display_color_table = self_init_glloader_WGL_EXT_display_color_table;

#ifdef WGL_EXT_display_color_table

static GLboolean GLLOADER_APIENTRY self_init_wglCreateDisplayColorTableEXT(GLushort id)
{
	glloader_init();
	return wglCreateDisplayColorTableEXT(id);
}
static GLboolean GLLOADER_APIENTRY self_init_wglLoadDisplayColorTableEXT(const GLushort* table, GLuint length)
{
	glloader_init();
	return wglLoadDisplayColorTableEXT(table, length);
}
static GLboolean GLLOADER_APIENTRY self_init_wglBindDisplayColorTableEXT(GLushort id)
{
	glloader_init();
	return wglBindDisplayColorTableEXT(id);
}
static VOID GLLOADER_APIENTRY self_init_wglDestroyDisplayColorTableEXT(GLushort id)
{
	glloader_init();
	wglDestroyDisplayColorTableEXT(id);
}

wglCreateDisplayColorTableEXTFUNC wglCreateDisplayColorTableEXT = self_init_wglCreateDisplayColorTableEXT;
wglLoadDisplayColorTableEXTFUNC wglLoadDisplayColorTableEXT = self_init_wglLoadDisplayColorTableEXT;
wglBindDisplayColorTableEXTFUNC wglBindDisplayColorTableEXT = self_init_wglBindDisplayColorTableEXT;
wglDestroyDisplayColorTableEXTFUNC wglDestroyDisplayColorTableEXT = self_init_wglDestroyDisplayColorTableEXT;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_EXT_extensions_string()
{
	return _WGL_EXT_extensions_string;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_extensions_string()
{
	glloader_init();
	return glloader_WGL_EXT_extensions_string();
}
glloader_WGL_EXT_extensions_stringFUNC glloader_WGL_EXT_extensions_string = self_init_glloader_WGL_EXT_extensions_string;

#ifdef WGL_EXT_extensions_string

static const char* GLLOADER_APIENTRY self_init_wglGetExtensionsStringEXT()
{
	glloader_init();
	return wglGetExtensionsStringEXT();
}

wglGetExtensionsStringEXTFUNC wglGetExtensionsStringEXT = self_init_wglGetExtensionsStringEXT;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_EXT_framebuffer_sRGB()
{
	return _WGL_EXT_framebuffer_sRGB;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_framebuffer_sRGB()
{
	glloader_init();
	return glloader_WGL_EXT_framebuffer_sRGB();
}
glloader_WGL_EXT_framebuffer_sRGBFUNC glloader_WGL_EXT_framebuffer_sRGB = self_init_glloader_WGL_EXT_framebuffer_sRGB;

static char GLLOADER_APIENTRY _glloader_WGL_EXT_make_current_read()
{
	return _WGL_EXT_make_current_read;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_make_current_read()
{
	glloader_init();
	return glloader_WGL_EXT_make_current_read();
}
glloader_WGL_EXT_make_current_readFUNC glloader_WGL_EXT_make_current_read = self_init_glloader_WGL_EXT_make_current_read;

#ifdef WGL_EXT_make_current_read

static BOOL GLLOADER_APIENTRY self_init_wglMakeContextCurrentEXT(HDC hDrawDC, HDC hReadDC, HGLRC hglrc)
{
	glloader_init();
	return wglMakeContextCurrentEXT(hDrawDC, hReadDC, hglrc);
}
static HDC GLLOADER_APIENTRY self_init_wglGetCurrentReadDCEXT()
{
	glloader_init();
	return wglGetCurrentReadDCEXT();
}

wglMakeContextCurrentEXTFUNC wglMakeContextCurrentEXT = self_init_wglMakeContextCurrentEXT;
wglGetCurrentReadDCEXTFUNC wglGetCurrentReadDCEXT = self_init_wglGetCurrentReadDCEXT;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_EXT_multisample()
{
	return _WGL_EXT_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_multisample()
{
	glloader_init();
	return glloader_WGL_EXT_multisample();
}
glloader_WGL_EXT_multisampleFUNC glloader_WGL_EXT_multisample = self_init_glloader_WGL_EXT_multisample;

static char GLLOADER_APIENTRY _glloader_WGL_EXT_pbuffer()
{
	return _WGL_EXT_pbuffer;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_pbuffer()
{
	glloader_init();
	return glloader_WGL_EXT_pbuffer();
}
glloader_WGL_EXT_pbufferFUNC glloader_WGL_EXT_pbuffer = self_init_glloader_WGL_EXT_pbuffer;

#ifdef WGL_EXT_pbuffer

static HPBUFFEREXT GLLOADER_APIENTRY self_init_wglCreatePbufferEXT(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList)
{
	glloader_init();
	return wglCreatePbufferEXT(hDC, iPixelFormat, iWidth, iHeight, piAttribList);
}
static HDC GLLOADER_APIENTRY self_init_wglGetPbufferDCEXT(HPBUFFEREXT hPbuffer)
{
	glloader_init();
	return wglGetPbufferDCEXT(hPbuffer);
}
static int GLLOADER_APIENTRY self_init_wglReleasePbufferDCEXT(HPBUFFEREXT hPbuffer, HDC hDC)
{
	glloader_init();
	return wglReleasePbufferDCEXT(hPbuffer, hDC);
}
static BOOL GLLOADER_APIENTRY self_init_wglDestroyPbufferEXT(HPBUFFEREXT hPbuffer)
{
	glloader_init();
	return wglDestroyPbufferEXT(hPbuffer);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryPbufferEXT(HPBUFFEREXT hPbuffer, int iAttribute, int* piValue)
{
	glloader_init();
	return wglQueryPbufferEXT(hPbuffer, iAttribute, piValue);
}

wglCreatePbufferEXTFUNC wglCreatePbufferEXT = self_init_wglCreatePbufferEXT;
wglGetPbufferDCEXTFUNC wglGetPbufferDCEXT = self_init_wglGetPbufferDCEXT;
wglReleasePbufferDCEXTFUNC wglReleasePbufferDCEXT = self_init_wglReleasePbufferDCEXT;
wglDestroyPbufferEXTFUNC wglDestroyPbufferEXT = self_init_wglDestroyPbufferEXT;
wglQueryPbufferEXTFUNC wglQueryPbufferEXT = self_init_wglQueryPbufferEXT;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_EXT_pixel_format()
{
	return _WGL_EXT_pixel_format;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_pixel_format()
{
	glloader_init();
	return glloader_WGL_EXT_pixel_format();
}
glloader_WGL_EXT_pixel_formatFUNC glloader_WGL_EXT_pixel_format = self_init_glloader_WGL_EXT_pixel_format;

#ifdef WGL_EXT_pixel_format

static BOOL GLLOADER_APIENTRY self_init_wglGetPixelFormatAttribivEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int* piAttributes, int* piValues)
{
	glloader_init();
	return wglGetPixelFormatAttribivEXT(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, piValues);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetPixelFormatAttribfvEXT(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int* piAttributes, FLOAT* pfValues)
{
	glloader_init();
	return wglGetPixelFormatAttribfvEXT(hdc, iPixelFormat, iLayerPlane, nAttributes, piAttributes, pfValues);
}
static BOOL GLLOADER_APIENTRY self_init_wglChoosePixelFormatEXT(HDC hdc, const int* piAttribIList, const FLOAT* pfAttribFList, UINT nMaxFormats, int* piFormats, UINT* nNumFormats)
{
	glloader_init();
	return wglChoosePixelFormatEXT(hdc, piAttribIList, pfAttribFList, nMaxFormats, piFormats, nNumFormats);
}

wglGetPixelFormatAttribivEXTFUNC wglGetPixelFormatAttribivEXT = self_init_wglGetPixelFormatAttribivEXT;
wglGetPixelFormatAttribfvEXTFUNC wglGetPixelFormatAttribfvEXT = self_init_wglGetPixelFormatAttribfvEXT;
wglChoosePixelFormatEXTFUNC wglChoosePixelFormatEXT = self_init_wglChoosePixelFormatEXT;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_EXT_pixel_format_packed_float()
{
	return _WGL_EXT_pixel_format_packed_float;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_pixel_format_packed_float()
{
	glloader_init();
	return glloader_WGL_EXT_pixel_format_packed_float();
}
glloader_WGL_EXT_pixel_format_packed_floatFUNC glloader_WGL_EXT_pixel_format_packed_float = self_init_glloader_WGL_EXT_pixel_format_packed_float;

static char GLLOADER_APIENTRY _glloader_WGL_EXT_swap_control()
{
	return _WGL_EXT_swap_control;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_swap_control()
{
	glloader_init();
	return glloader_WGL_EXT_swap_control();
}
glloader_WGL_EXT_swap_controlFUNC glloader_WGL_EXT_swap_control = self_init_glloader_WGL_EXT_swap_control;

#ifdef WGL_EXT_swap_control

static BOOL GLLOADER_APIENTRY self_init_wglSwapIntervalEXT(int interval)
{
	glloader_init();
	return wglSwapIntervalEXT(interval);
}
static int GLLOADER_APIENTRY self_init_wglGetSwapIntervalEXT()
{
	glloader_init();
	return wglGetSwapIntervalEXT();
}

wglSwapIntervalEXTFUNC wglSwapIntervalEXT = self_init_wglSwapIntervalEXT;
wglGetSwapIntervalEXTFUNC wglGetSwapIntervalEXT = self_init_wglGetSwapIntervalEXT;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_EXT_swap_control_tear()
{
	return _WGL_EXT_swap_control_tear;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_EXT_swap_control_tear()
{
	glloader_init();
	return glloader_WGL_EXT_swap_control_tear();
}
glloader_WGL_EXT_swap_control_tearFUNC glloader_WGL_EXT_swap_control_tear = self_init_glloader_WGL_EXT_swap_control_tear;

static char GLLOADER_APIENTRY _glloader_WGL_I3D_digital_video_control()
{
	return _WGL_I3D_digital_video_control;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_I3D_digital_video_control()
{
	glloader_init();
	return glloader_WGL_I3D_digital_video_control();
}
glloader_WGL_I3D_digital_video_controlFUNC glloader_WGL_I3D_digital_video_control = self_init_glloader_WGL_I3D_digital_video_control;

#ifdef WGL_I3D_digital_video_control

static BOOL GLLOADER_APIENTRY self_init_wglGetDigitalVideoParametersI3D(HDC hDC, int iAttribute, int* piValue)
{
	glloader_init();
	return wglGetDigitalVideoParametersI3D(hDC, iAttribute, piValue);
}
static BOOL GLLOADER_APIENTRY self_init_wglSetDigitalVideoParametersI3D(HDC hDC, int iAttribute, const int* piValue)
{
	glloader_init();
	return wglSetDigitalVideoParametersI3D(hDC, iAttribute, piValue);
}

wglGetDigitalVideoParametersI3DFUNC wglGetDigitalVideoParametersI3D = self_init_wglGetDigitalVideoParametersI3D;
wglSetDigitalVideoParametersI3DFUNC wglSetDigitalVideoParametersI3D = self_init_wglSetDigitalVideoParametersI3D;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_I3D_gamma()
{
	return _WGL_I3D_gamma;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_I3D_gamma()
{
	glloader_init();
	return glloader_WGL_I3D_gamma();
}
glloader_WGL_I3D_gammaFUNC glloader_WGL_I3D_gamma = self_init_glloader_WGL_I3D_gamma;

#ifdef WGL_I3D_gamma

static BOOL GLLOADER_APIENTRY self_init_wglGetGammaTableParametersI3D(HDC hDC, int iAttribute, int* piValue)
{
	glloader_init();
	return wglGetGammaTableParametersI3D(hDC, iAttribute, piValue);
}
static BOOL GLLOADER_APIENTRY self_init_wglSetGammaTableParametersI3D(HDC hDC, int iAttribute, const int* piValue)
{
	glloader_init();
	return wglSetGammaTableParametersI3D(hDC, iAttribute, piValue);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetGammaTableI3D(HDC hDC, int iEntries, USHORT* puRed, USHORT* puGreen, USHORT* puBlue)
{
	glloader_init();
	return wglGetGammaTableI3D(hDC, iEntries, puRed, puGreen, puBlue);
}
static BOOL GLLOADER_APIENTRY self_init_wglSetGammaTableI3D(HDC hDC, int iEntries, const USHORT* puRed, const USHORT* puGreen, const USHORT* puBlue)
{
	glloader_init();
	return wglSetGammaTableI3D(hDC, iEntries, puRed, puGreen, puBlue);
}

wglGetGammaTableParametersI3DFUNC wglGetGammaTableParametersI3D = self_init_wglGetGammaTableParametersI3D;
wglSetGammaTableParametersI3DFUNC wglSetGammaTableParametersI3D = self_init_wglSetGammaTableParametersI3D;
wglGetGammaTableI3DFUNC wglGetGammaTableI3D = self_init_wglGetGammaTableI3D;
wglSetGammaTableI3DFUNC wglSetGammaTableI3D = self_init_wglSetGammaTableI3D;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_I3D_genlock()
{
	return _WGL_I3D_genlock;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_I3D_genlock()
{
	glloader_init();
	return glloader_WGL_I3D_genlock();
}
glloader_WGL_I3D_genlockFUNC glloader_WGL_I3D_genlock = self_init_glloader_WGL_I3D_genlock;

#ifdef WGL_I3D_genlock

static BOOL GLLOADER_APIENTRY self_init_wglEnableGenlockI3D(HDC hDC)
{
	glloader_init();
	return wglEnableGenlockI3D(hDC);
}
static BOOL GLLOADER_APIENTRY self_init_wglDisableGenlockI3D(HDC hDC)
{
	glloader_init();
	return wglDisableGenlockI3D(hDC);
}
static BOOL GLLOADER_APIENTRY self_init_wglIsEnabledGenlockI3D(HDC hDC, BOOL* pFlag)
{
	glloader_init();
	return wglIsEnabledGenlockI3D(hDC, pFlag);
}
static BOOL GLLOADER_APIENTRY self_init_wglGenlockSourceI3D(HDC hDC, UINT uSource)
{
	glloader_init();
	return wglGenlockSourceI3D(hDC, uSource);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetGenlockSourceI3D(HDC hDC, UINT* uSource)
{
	glloader_init();
	return wglGetGenlockSourceI3D(hDC, uSource);
}
static BOOL GLLOADER_APIENTRY self_init_wglGenlockSourceEdgeI3D(HDC hDC, UINT uEdge)
{
	glloader_init();
	return wglGenlockSourceEdgeI3D(hDC, uEdge);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetGenlockSourceEdgeI3D(HDC hDC, UINT* uEdge)
{
	glloader_init();
	return wglGetGenlockSourceEdgeI3D(hDC, uEdge);
}
static BOOL GLLOADER_APIENTRY self_init_wglGenlockSampleRateI3D(HDC hDC, UINT uRate)
{
	glloader_init();
	return wglGenlockSampleRateI3D(hDC, uRate);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetGenlockSampleRateI3D(HDC hDC, UINT* uRate)
{
	glloader_init();
	return wglGetGenlockSampleRateI3D(hDC, uRate);
}
static BOOL GLLOADER_APIENTRY self_init_wglGenlockSourceDelayI3D(HDC hDC, UINT uDelay)
{
	glloader_init();
	return wglGenlockSourceDelayI3D(hDC, uDelay);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetGenlockSourceDelayI3D(HDC hDC, UINT* uDelay)
{
	glloader_init();
	return wglGetGenlockSourceDelayI3D(hDC, uDelay);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryGenlockMaxSourceDelayI3D(HDC hDC, UINT* uMaxLineDelay, UINT* uMaxPixelDelay)
{
	glloader_init();
	return wglQueryGenlockMaxSourceDelayI3D(hDC, uMaxLineDelay, uMaxPixelDelay);
}

wglEnableGenlockI3DFUNC wglEnableGenlockI3D = self_init_wglEnableGenlockI3D;
wglDisableGenlockI3DFUNC wglDisableGenlockI3D = self_init_wglDisableGenlockI3D;
wglIsEnabledGenlockI3DFUNC wglIsEnabledGenlockI3D = self_init_wglIsEnabledGenlockI3D;
wglGenlockSourceI3DFUNC wglGenlockSourceI3D = self_init_wglGenlockSourceI3D;
wglGetGenlockSourceI3DFUNC wglGetGenlockSourceI3D = self_init_wglGetGenlockSourceI3D;
wglGenlockSourceEdgeI3DFUNC wglGenlockSourceEdgeI3D = self_init_wglGenlockSourceEdgeI3D;
wglGetGenlockSourceEdgeI3DFUNC wglGetGenlockSourceEdgeI3D = self_init_wglGetGenlockSourceEdgeI3D;
wglGenlockSampleRateI3DFUNC wglGenlockSampleRateI3D = self_init_wglGenlockSampleRateI3D;
wglGetGenlockSampleRateI3DFUNC wglGetGenlockSampleRateI3D = self_init_wglGetGenlockSampleRateI3D;
wglGenlockSourceDelayI3DFUNC wglGenlockSourceDelayI3D = self_init_wglGenlockSourceDelayI3D;
wglGetGenlockSourceDelayI3DFUNC wglGetGenlockSourceDelayI3D = self_init_wglGetGenlockSourceDelayI3D;
wglQueryGenlockMaxSourceDelayI3DFUNC wglQueryGenlockMaxSourceDelayI3D = self_init_wglQueryGenlockMaxSourceDelayI3D;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_I3D_image_buffer()
{
	return _WGL_I3D_image_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_I3D_image_buffer()
{
	glloader_init();
	return glloader_WGL_I3D_image_buffer();
}
glloader_WGL_I3D_image_bufferFUNC glloader_WGL_I3D_image_buffer = self_init_glloader_WGL_I3D_image_buffer;

#ifdef WGL_I3D_image_buffer

static LPVOID GLLOADER_APIENTRY self_init_wglCreateImageBufferI3D(HDC hDC, DWORD dwSize, UINT uFlags)
{
	glloader_init();
	return wglCreateImageBufferI3D(hDC, dwSize, uFlags);
}
static BOOL GLLOADER_APIENTRY self_init_wglDestroyImageBufferI3D(HDC hDC, LPVOID pAddress)
{
	glloader_init();
	return wglDestroyImageBufferI3D(hDC, pAddress);
}
static BOOL GLLOADER_APIENTRY self_init_wglAssociateImageBufferEventsI3D(HDC hDC, const HANDLE* pEvent, const LPVOID* pAddress, const DWORD* pSize, UINT count)
{
	glloader_init();
	return wglAssociateImageBufferEventsI3D(hDC, pEvent, pAddress, pSize, count);
}
static BOOL GLLOADER_APIENTRY self_init_wglReleaseImageBufferEventsI3D(HDC hDC, const LPVOID* pAddress, UINT count)
{
	glloader_init();
	return wglReleaseImageBufferEventsI3D(hDC, pAddress, count);
}

wglCreateImageBufferI3DFUNC wglCreateImageBufferI3D = self_init_wglCreateImageBufferI3D;
wglDestroyImageBufferI3DFUNC wglDestroyImageBufferI3D = self_init_wglDestroyImageBufferI3D;
wglAssociateImageBufferEventsI3DFUNC wglAssociateImageBufferEventsI3D = self_init_wglAssociateImageBufferEventsI3D;
wglReleaseImageBufferEventsI3DFUNC wglReleaseImageBufferEventsI3D = self_init_wglReleaseImageBufferEventsI3D;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_I3D_swap_frame_lock()
{
	return _WGL_I3D_swap_frame_lock;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_I3D_swap_frame_lock()
{
	glloader_init();
	return glloader_WGL_I3D_swap_frame_lock();
}
glloader_WGL_I3D_swap_frame_lockFUNC glloader_WGL_I3D_swap_frame_lock = self_init_glloader_WGL_I3D_swap_frame_lock;

#ifdef WGL_I3D_swap_frame_lock

static BOOL GLLOADER_APIENTRY self_init_wglEnableFrameLockI3D()
{
	glloader_init();
	return wglEnableFrameLockI3D();
}
static BOOL GLLOADER_APIENTRY self_init_wglDisableFrameLockI3D()
{
	glloader_init();
	return wglDisableFrameLockI3D();
}
static BOOL GLLOADER_APIENTRY self_init_wglIsEnabledFrameLockI3D(BOOL* pFlag)
{
	glloader_init();
	return wglIsEnabledFrameLockI3D(pFlag);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryFrameLockMasterI3D(BOOL* pFlag)
{
	glloader_init();
	return wglQueryFrameLockMasterI3D(pFlag);
}

wglEnableFrameLockI3DFUNC wglEnableFrameLockI3D = self_init_wglEnableFrameLockI3D;
wglDisableFrameLockI3DFUNC wglDisableFrameLockI3D = self_init_wglDisableFrameLockI3D;
wglIsEnabledFrameLockI3DFUNC wglIsEnabledFrameLockI3D = self_init_wglIsEnabledFrameLockI3D;
wglQueryFrameLockMasterI3DFUNC wglQueryFrameLockMasterI3D = self_init_wglQueryFrameLockMasterI3D;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_I3D_swap_frame_usage()
{
	return _WGL_I3D_swap_frame_usage;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_I3D_swap_frame_usage()
{
	glloader_init();
	return glloader_WGL_I3D_swap_frame_usage();
}
glloader_WGL_I3D_swap_frame_usageFUNC glloader_WGL_I3D_swap_frame_usage = self_init_glloader_WGL_I3D_swap_frame_usage;

#ifdef WGL_I3D_swap_frame_usage

static BOOL GLLOADER_APIENTRY self_init_wglGetFrameUsageI3D(float* pUsage)
{
	glloader_init();
	return wglGetFrameUsageI3D(pUsage);
}
static BOOL GLLOADER_APIENTRY self_init_wglBeginFrameTrackingI3D()
{
	glloader_init();
	return wglBeginFrameTrackingI3D();
}
static BOOL GLLOADER_APIENTRY self_init_wglEndFrameTrackingI3D()
{
	glloader_init();
	return wglEndFrameTrackingI3D();
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryFrameTrackingI3D(DWORD* pFrameCount, DWORD* pMissedFrames, float* pLastMissedUsage)
{
	glloader_init();
	return wglQueryFrameTrackingI3D(pFrameCount, pMissedFrames, pLastMissedUsage);
}

wglGetFrameUsageI3DFUNC wglGetFrameUsageI3D = self_init_wglGetFrameUsageI3D;
wglBeginFrameTrackingI3DFUNC wglBeginFrameTrackingI3D = self_init_wglBeginFrameTrackingI3D;
wglEndFrameTrackingI3DFUNC wglEndFrameTrackingI3D = self_init_wglEndFrameTrackingI3D;
wglQueryFrameTrackingI3DFUNC wglQueryFrameTrackingI3D = self_init_wglQueryFrameTrackingI3D;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_copy_image()
{
	return _WGL_NV_copy_image;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_copy_image()
{
	glloader_init();
	return glloader_WGL_NV_copy_image();
}
glloader_WGL_NV_copy_imageFUNC glloader_WGL_NV_copy_image = self_init_glloader_WGL_NV_copy_image;

#ifdef WGL_NV_copy_image

static BOOL GLLOADER_APIENTRY self_init_wglCopyImageSubDataNV(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
	glloader_init();
	return wglCopyImageSubDataNV(hSrcRC, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, hDstRC, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

wglCopyImageSubDataNVFUNC wglCopyImageSubDataNV = self_init_wglCopyImageSubDataNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_delay_before_swap()
{
	return _WGL_NV_delay_before_swap;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_delay_before_swap()
{
	glloader_init();
	return glloader_WGL_NV_delay_before_swap();
}
glloader_WGL_NV_delay_before_swapFUNC glloader_WGL_NV_delay_before_swap = self_init_glloader_WGL_NV_delay_before_swap;

#ifdef WGL_NV_delay_before_swap

static BOOL GLLOADER_APIENTRY self_init_wglDelayBeforeSwapNV(HDC hDC, GLfloat seconds)
{
	glloader_init();
	return wglDelayBeforeSwapNV(hDC, seconds);
}

wglDelayBeforeSwapNVFUNC wglDelayBeforeSwapNV = self_init_wglDelayBeforeSwapNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_DX_interop()
{
	return _WGL_NV_DX_interop;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_DX_interop()
{
	glloader_init();
	return glloader_WGL_NV_DX_interop();
}
glloader_WGL_NV_DX_interopFUNC glloader_WGL_NV_DX_interop = self_init_glloader_WGL_NV_DX_interop;

#ifdef WGL_NV_DX_interop

static BOOL GLLOADER_APIENTRY self_init_wglDXSetResourceShareHandleNV(void* dxObject, HANDLE shareHandle)
{
	glloader_init();
	return wglDXSetResourceShareHandleNV(dxObject, shareHandle);
}
static HANDLE GLLOADER_APIENTRY self_init_wglDXOpenDeviceNV(void* dxDevice)
{
	glloader_init();
	return wglDXOpenDeviceNV(dxDevice);
}
static BOOL GLLOADER_APIENTRY self_init_wglDXCloseDeviceNV(HANDLE hDevice)
{
	glloader_init();
	return wglDXCloseDeviceNV(hDevice);
}
static HANDLE GLLOADER_APIENTRY self_init_wglDXRegisterObjectNV(HANDLE hDevice, void* dxObject, GLuint name, GLenum type, GLenum access)
{
	glloader_init();
	return wglDXRegisterObjectNV(hDevice, dxObject, name, type, access);
}
static BOOL GLLOADER_APIENTRY self_init_wglDXUnregisterObjectNV(HANDLE hDevice, HANDLE hObject)
{
	glloader_init();
	return wglDXUnregisterObjectNV(hDevice, hObject);
}
static BOOL GLLOADER_APIENTRY self_init_wglDXObjectAccessNV(HANDLE hObject, GLenum access)
{
	glloader_init();
	return wglDXObjectAccessNV(hObject, access);
}
static BOOL GLLOADER_APIENTRY self_init_wglDXLockObjectsNV(HANDLE hDevice, GLint count, HANDLE* hObjects)
{
	glloader_init();
	return wglDXLockObjectsNV(hDevice, count, hObjects);
}
static BOOL GLLOADER_APIENTRY self_init_wglDXUnlockObjectsNV(HANDLE hDevice, GLint count, HANDLE* hObjects)
{
	glloader_init();
	return wglDXUnlockObjectsNV(hDevice, count, hObjects);
}

wglDXSetResourceShareHandleNVFUNC wglDXSetResourceShareHandleNV = self_init_wglDXSetResourceShareHandleNV;
wglDXOpenDeviceNVFUNC wglDXOpenDeviceNV = self_init_wglDXOpenDeviceNV;
wglDXCloseDeviceNVFUNC wglDXCloseDeviceNV = self_init_wglDXCloseDeviceNV;
wglDXRegisterObjectNVFUNC wglDXRegisterObjectNV = self_init_wglDXRegisterObjectNV;
wglDXUnregisterObjectNVFUNC wglDXUnregisterObjectNV = self_init_wglDXUnregisterObjectNV;
wglDXObjectAccessNVFUNC wglDXObjectAccessNV = self_init_wglDXObjectAccessNV;
wglDXLockObjectsNVFUNC wglDXLockObjectsNV = self_init_wglDXLockObjectsNV;
wglDXUnlockObjectsNVFUNC wglDXUnlockObjectsNV = self_init_wglDXUnlockObjectsNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_float_buffer()
{
	return _WGL_NV_float_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_float_buffer()
{
	glloader_init();
	return glloader_WGL_NV_float_buffer();
}
glloader_WGL_NV_float_bufferFUNC glloader_WGL_NV_float_buffer = self_init_glloader_WGL_NV_float_buffer;

static char GLLOADER_APIENTRY _glloader_WGL_NV_gpu_affinity()
{
	return _WGL_NV_gpu_affinity;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_gpu_affinity()
{
	glloader_init();
	return glloader_WGL_NV_gpu_affinity();
}
glloader_WGL_NV_gpu_affinityFUNC glloader_WGL_NV_gpu_affinity = self_init_glloader_WGL_NV_gpu_affinity;

#ifdef WGL_NV_gpu_affinity

static BOOL GLLOADER_APIENTRY self_init_wglEnumGpusNV(UINT iGpuIndex, HGPUNV* phGpu)
{
	glloader_init();
	return wglEnumGpusNV(iGpuIndex, phGpu);
}
static BOOL GLLOADER_APIENTRY self_init_wglEnumGpuDevicesNV(HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice)
{
	glloader_init();
	return wglEnumGpuDevicesNV(hGpu, iDeviceIndex, lpGpuDevice);
}
static HDC GLLOADER_APIENTRY self_init_wglCreateAffinityDCNV(const HGPUNV* phGpuList)
{
	glloader_init();
	return wglCreateAffinityDCNV(phGpuList);
}
static BOOL GLLOADER_APIENTRY self_init_wglEnumGpusFromAffinityDCNV(HDC hAffinityDC, UINT iGpuIndex, HGPUNV* hGpu)
{
	glloader_init();
	return wglEnumGpusFromAffinityDCNV(hAffinityDC, iGpuIndex, hGpu);
}
static BOOL GLLOADER_APIENTRY self_init_wglDeleteDCNV(HDC hdc)
{
	glloader_init();
	return wglDeleteDCNV(hdc);
}

wglEnumGpusNVFUNC wglEnumGpusNV = self_init_wglEnumGpusNV;
wglEnumGpuDevicesNVFUNC wglEnumGpuDevicesNV = self_init_wglEnumGpuDevicesNV;
wglCreateAffinityDCNVFUNC wglCreateAffinityDCNV = self_init_wglCreateAffinityDCNV;
wglEnumGpusFromAffinityDCNVFUNC wglEnumGpusFromAffinityDCNV = self_init_wglEnumGpusFromAffinityDCNV;
wglDeleteDCNVFUNC wglDeleteDCNV = self_init_wglDeleteDCNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_multisample_coverage()
{
	return _WGL_NV_multisample_coverage;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_multisample_coverage()
{
	glloader_init();
	return glloader_WGL_NV_multisample_coverage();
}
glloader_WGL_NV_multisample_coverageFUNC glloader_WGL_NV_multisample_coverage = self_init_glloader_WGL_NV_multisample_coverage;

static char GLLOADER_APIENTRY _glloader_WGL_NV_present_video()
{
	return _WGL_NV_present_video;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_present_video()
{
	glloader_init();
	return glloader_WGL_NV_present_video();
}
glloader_WGL_NV_present_videoFUNC glloader_WGL_NV_present_video = self_init_glloader_WGL_NV_present_video;

#ifdef WGL_NV_present_video

static int GLLOADER_APIENTRY self_init_wglEnumerateVideoDevicesNV(HDC hDC, HVIDEOOUTPUTDEVICENV* phDeviceList)
{
	glloader_init();
	return wglEnumerateVideoDevicesNV(hDC, phDeviceList);
}
static BOOL GLLOADER_APIENTRY self_init_wglBindVideoDeviceNV(HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int* piAttribList)
{
	glloader_init();
	return wglBindVideoDeviceNV(hDC, uVideoSlot, hVideoDevice, piAttribList);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryCurrentContextNV(int iAttribute, int* piValue)
{
	glloader_init();
	return wglQueryCurrentContextNV(iAttribute, piValue);
}

wglEnumerateVideoDevicesNVFUNC wglEnumerateVideoDevicesNV = self_init_wglEnumerateVideoDevicesNV;
wglBindVideoDeviceNVFUNC wglBindVideoDeviceNV = self_init_wglBindVideoDeviceNV;
wglQueryCurrentContextNVFUNC wglQueryCurrentContextNV = self_init_wglQueryCurrentContextNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_render_depth_texture()
{
	return _WGL_NV_render_depth_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_render_depth_texture()
{
	glloader_init();
	return glloader_WGL_NV_render_depth_texture();
}
glloader_WGL_NV_render_depth_textureFUNC glloader_WGL_NV_render_depth_texture = self_init_glloader_WGL_NV_render_depth_texture;

static char GLLOADER_APIENTRY _glloader_WGL_NV_render_texture_rectangle()
{
	return _WGL_NV_render_texture_rectangle;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_render_texture_rectangle()
{
	glloader_init();
	return glloader_WGL_NV_render_texture_rectangle();
}
glloader_WGL_NV_render_texture_rectangleFUNC glloader_WGL_NV_render_texture_rectangle = self_init_glloader_WGL_NV_render_texture_rectangle;

static char GLLOADER_APIENTRY _glloader_WGL_NV_swap_group()
{
	return _WGL_NV_swap_group;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_swap_group()
{
	glloader_init();
	return glloader_WGL_NV_swap_group();
}
glloader_WGL_NV_swap_groupFUNC glloader_WGL_NV_swap_group = self_init_glloader_WGL_NV_swap_group;

#ifdef WGL_NV_swap_group

static BOOL GLLOADER_APIENTRY self_init_wglJoinSwapGroupNV(HDC hDC, GLuint group)
{
	glloader_init();
	return wglJoinSwapGroupNV(hDC, group);
}
static BOOL GLLOADER_APIENTRY self_init_wglBindSwapBarrierNV(GLuint group, GLuint barrier)
{
	glloader_init();
	return wglBindSwapBarrierNV(group, barrier);
}
static BOOL GLLOADER_APIENTRY self_init_wglQuerySwapGroupNV(HDC hDC, GLuint* group, GLuint* barrier)
{
	glloader_init();
	return wglQuerySwapGroupNV(hDC, group, barrier);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryMaxSwapGroupsNV(HDC hDC, GLuint* maxGroups, GLuint* maxBarriers)
{
	glloader_init();
	return wglQueryMaxSwapGroupsNV(hDC, maxGroups, maxBarriers);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryFrameCountNV(HDC hDC, GLuint* count)
{
	glloader_init();
	return wglQueryFrameCountNV(hDC, count);
}
static BOOL GLLOADER_APIENTRY self_init_wglResetFrameCountNV(HDC hDC)
{
	glloader_init();
	return wglResetFrameCountNV(hDC);
}

wglJoinSwapGroupNVFUNC wglJoinSwapGroupNV = self_init_wglJoinSwapGroupNV;
wglBindSwapBarrierNVFUNC wglBindSwapBarrierNV = self_init_wglBindSwapBarrierNV;
wglQuerySwapGroupNVFUNC wglQuerySwapGroupNV = self_init_wglQuerySwapGroupNV;
wglQueryMaxSwapGroupsNVFUNC wglQueryMaxSwapGroupsNV = self_init_wglQueryMaxSwapGroupsNV;
wglQueryFrameCountNVFUNC wglQueryFrameCountNV = self_init_wglQueryFrameCountNV;
wglResetFrameCountNVFUNC wglResetFrameCountNV = self_init_wglResetFrameCountNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_vertex_array_range()
{
	return _WGL_NV_vertex_array_range;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_vertex_array_range()
{
	glloader_init();
	return glloader_WGL_NV_vertex_array_range();
}
glloader_WGL_NV_vertex_array_rangeFUNC glloader_WGL_NV_vertex_array_range = self_init_glloader_WGL_NV_vertex_array_range;

#ifdef WGL_NV_vertex_array_range

static void* GLLOADER_APIENTRY self_init_wglAllocateMemoryNV(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority)
{
	glloader_init();
	return wglAllocateMemoryNV(size, readfreq, writefreq, priority);
}
static void GLLOADER_APIENTRY self_init_wglFreeMemoryNV(void* pointer)
{
	glloader_init();
	wglFreeMemoryNV(pointer);
}

wglAllocateMemoryNVFUNC wglAllocateMemoryNV = self_init_wglAllocateMemoryNV;
wglFreeMemoryNVFUNC wglFreeMemoryNV = self_init_wglFreeMemoryNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_video_capture()
{
	return _WGL_NV_video_capture;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_video_capture()
{
	glloader_init();
	return glloader_WGL_NV_video_capture();
}
glloader_WGL_NV_video_captureFUNC glloader_WGL_NV_video_capture = self_init_glloader_WGL_NV_video_capture;

#ifdef WGL_NV_video_capture

static BOOL GLLOADER_APIENTRY self_init_wglBindVideoCaptureDeviceNV(UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice)
{
	glloader_init();
	return wglBindVideoCaptureDeviceNV(uVideoSlot, hDevice);
}
static UINT GLLOADER_APIENTRY self_init_wglEnumerateVideoCaptureDevicesNV(HDC hDc, HVIDEOINPUTDEVICENV* phDeviceList)
{
	glloader_init();
	return wglEnumerateVideoCaptureDevicesNV(hDc, phDeviceList);
}
static BOOL GLLOADER_APIENTRY self_init_wglLockVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
	glloader_init();
	return wglLockVideoCaptureDeviceNV(hDc, hDevice);
}
static BOOL GLLOADER_APIENTRY self_init_wglQueryVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int* piValue)
{
	glloader_init();
	return wglQueryVideoCaptureDeviceNV(hDc, hDevice, iAttribute, piValue);
}
static BOOL GLLOADER_APIENTRY self_init_wglReleaseVideoCaptureDeviceNV(HDC hDc, HVIDEOINPUTDEVICENV hDevice)
{
	glloader_init();
	return wglReleaseVideoCaptureDeviceNV(hDc, hDevice);
}

wglBindVideoCaptureDeviceNVFUNC wglBindVideoCaptureDeviceNV = self_init_wglBindVideoCaptureDeviceNV;
wglEnumerateVideoCaptureDevicesNVFUNC wglEnumerateVideoCaptureDevicesNV = self_init_wglEnumerateVideoCaptureDevicesNV;
wglLockVideoCaptureDeviceNVFUNC wglLockVideoCaptureDeviceNV = self_init_wglLockVideoCaptureDeviceNV;
wglQueryVideoCaptureDeviceNVFUNC wglQueryVideoCaptureDeviceNV = self_init_wglQueryVideoCaptureDeviceNV;
wglReleaseVideoCaptureDeviceNVFUNC wglReleaseVideoCaptureDeviceNV = self_init_wglReleaseVideoCaptureDeviceNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_NV_video_output()
{
	return _WGL_NV_video_output;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_NV_video_output()
{
	glloader_init();
	return glloader_WGL_NV_video_output();
}
glloader_WGL_NV_video_outputFUNC glloader_WGL_NV_video_output = self_init_glloader_WGL_NV_video_output;

#ifdef WGL_NV_video_output

static BOOL GLLOADER_APIENTRY self_init_wglGetVideoDeviceNV(HDC hDC, int numDevices, HPVIDEODEV* hVideoDevice)
{
	glloader_init();
	return wglGetVideoDeviceNV(hDC, numDevices, hVideoDevice);
}
static BOOL GLLOADER_APIENTRY self_init_wglReleaseVideoDeviceNV(HPVIDEODEV hVideoDevice)
{
	glloader_init();
	return wglReleaseVideoDeviceNV(hVideoDevice);
}
static BOOL GLLOADER_APIENTRY self_init_wglBindVideoImageNV(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer)
{
	glloader_init();
	return wglBindVideoImageNV(hVideoDevice, hPbuffer, iVideoBuffer);
}
static BOOL GLLOADER_APIENTRY self_init_wglReleaseVideoImageNV(HPBUFFERARB hPbuffer, int iVideoBuffer)
{
	glloader_init();
	return wglReleaseVideoImageNV(hPbuffer, iVideoBuffer);
}
static BOOL GLLOADER_APIENTRY self_init_wglSendPbufferToVideoNV(HPBUFFERARB hPbuffer, int iBufferType, unsigned long* pulCounterPbuffer, BOOL bBlock)
{
	glloader_init();
	return wglSendPbufferToVideoNV(hPbuffer, iBufferType, pulCounterPbuffer, bBlock);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetVideoInfoNV(HPVIDEODEV hpVideoDevice, unsigned long* pulCounterOutputPbuffer, unsigned long* pulCounterOutputVideo)
{
	glloader_init();
	return wglGetVideoInfoNV(hpVideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo);
}

wglGetVideoDeviceNVFUNC wglGetVideoDeviceNV = self_init_wglGetVideoDeviceNV;
wglReleaseVideoDeviceNVFUNC wglReleaseVideoDeviceNV = self_init_wglReleaseVideoDeviceNV;
wglBindVideoImageNVFUNC wglBindVideoImageNV = self_init_wglBindVideoImageNV;
wglReleaseVideoImageNVFUNC wglReleaseVideoImageNV = self_init_wglReleaseVideoImageNV;
wglSendPbufferToVideoNVFUNC wglSendPbufferToVideoNV = self_init_wglSendPbufferToVideoNV;
wglGetVideoInfoNVFUNC wglGetVideoInfoNV = self_init_wglGetVideoInfoNV;

#endif

static char GLLOADER_APIENTRY _glloader_WGL_OML_sync_control()
{
	return _WGL_OML_sync_control;
}

static char GLLOADER_APIENTRY self_init_glloader_WGL_OML_sync_control()
{
	glloader_init();
	return glloader_WGL_OML_sync_control();
}
glloader_WGL_OML_sync_controlFUNC glloader_WGL_OML_sync_control = self_init_glloader_WGL_OML_sync_control;

#ifdef WGL_OML_sync_control

static BOOL GLLOADER_APIENTRY self_init_wglGetSyncValuesOML(HDC hdc, INT64* ust, INT64* msc, INT64* sbc)
{
	glloader_init();
	return wglGetSyncValuesOML(hdc, ust, msc, sbc);
}
static BOOL GLLOADER_APIENTRY self_init_wglGetMscRateOML(HDC hdc, INT32* numerator, INT32* denominator)
{
	glloader_init();
	return wglGetMscRateOML(hdc, numerator, denominator);
}
static INT64 GLLOADER_APIENTRY self_init_wglSwapBuffersMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder)
{
	glloader_init();
	return wglSwapBuffersMscOML(hdc, target_msc, divisor, remainder);
}
static INT64 GLLOADER_APIENTRY self_init_wglSwapLayerBuffersMscOML(HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder)
{
	glloader_init();
	return wglSwapLayerBuffersMscOML(hdc, fuPlanes, target_msc, divisor, remainder);
}
static BOOL GLLOADER_APIENTRY self_init_wglWaitForMscOML(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64* ust, INT64* msc, INT64* sbc)
{
	glloader_init();
	return wglWaitForMscOML(hdc, target_msc, divisor, remainder, ust, msc, sbc);
}
static BOOL GLLOADER_APIENTRY self_init_wglWaitForSbcOML(HDC hdc, INT64 target_sbc, INT64* ust, INT64* msc, INT64* sbc)
{
	glloader_init();
	return wglWaitForSbcOML(hdc, target_sbc, ust, msc, sbc);
}

wglGetSyncValuesOMLFUNC wglGetSyncValuesOML = self_init_wglGetSyncValuesOML;
wglGetMscRateOMLFUNC wglGetMscRateOML = self_init_wglGetMscRateOML;
wglSwapBuffersMscOMLFUNC wglSwapBuffersMscOML = self_init_wglSwapBuffersMscOML;
wglSwapLayerBuffersMscOMLFUNC wglSwapLayerBuffersMscOML = self_init_wglSwapLayerBuffersMscOML;
wglWaitForMscOMLFUNC wglWaitForMscOML = self_init_wglWaitForMscOML;
wglWaitForSbcOMLFUNC wglWaitForSbcOML = self_init_wglWaitForSbcOML;

#endif

void init_WGL_3DFX_multisample()
{
	glloader_WGL_3DFX_multisample = _glloader_WGL_3DFX_multisample;

	_WGL_3DFX_multisample = 0;
	if (glloader_is_supported("WGL_3DFX_multisample"))
	{
		_WGL_3DFX_multisample = 1;
	}
}

void init_WGL_3DL_stereo_control()
{
	glloader_WGL_3DL_stereo_control = _glloader_WGL_3DL_stereo_control;

	{
		wglSetStereoEmitterState3DL = NULL;
	}

	_WGL_3DL_stereo_control = 0;
	if (glloader_is_supported("WGL_3DL_stereo_control"))
	{
		_WGL_3DL_stereo_control = 1;

		LOAD_FUNC1(wglSetStereoEmitterState3DL);
	}
}

void init_WGL_AMD_gpu_association()
{
	glloader_WGL_AMD_gpu_association = _glloader_WGL_AMD_gpu_association;

	{
		wglGetGPUIDsAMD = NULL;
		wglGetGPUInfoAMD = NULL;
		wglGetContextGPUIDAMD = NULL;
		wglCreateAssociatedContextAMD = NULL;
		wglCreateAssociatedContextAttribsAMD = NULL;
		wglDeleteAssociatedContextAMD = NULL;
		wglMakeAssociatedContextCurrentAMD = NULL;
		wglGetCurrentAssociatedContextAMD = NULL;
		wglBlitContextFramebufferAMD = NULL;
	}

	_WGL_AMD_gpu_association = 0;
	if (glloader_is_supported("WGL_AMD_gpu_association"))
	{
		_WGL_AMD_gpu_association = 1;

		LOAD_FUNC1(wglGetGPUIDsAMD);
		LOAD_FUNC1(wglGetGPUInfoAMD);
		LOAD_FUNC1(wglGetContextGPUIDAMD);
		LOAD_FUNC1(wglCreateAssociatedContextAMD);
		LOAD_FUNC1(wglCreateAssociatedContextAttribsAMD);
		LOAD_FUNC1(wglDeleteAssociatedContextAMD);
		LOAD_FUNC1(wglMakeAssociatedContextCurrentAMD);
		LOAD_FUNC1(wglGetCurrentAssociatedContextAMD);
		LOAD_FUNC1(wglBlitContextFramebufferAMD);
	}
}

void init_WGL_ARB_buffer_region()
{
	glloader_WGL_ARB_buffer_region = _glloader_WGL_ARB_buffer_region;

	{
		wglCreateBufferRegionARB = NULL;
		wglDeleteBufferRegionARB = NULL;
		wglSaveBufferRegionARB = NULL;
		wglRestoreBufferRegionARB = NULL;
	}

	_WGL_ARB_buffer_region = 0;
	if (glloader_is_supported("WGL_ARB_buffer_region"))
	{
		_WGL_ARB_buffer_region = 1;

		LOAD_FUNC1(wglCreateBufferRegionARB);
		LOAD_FUNC1(wglDeleteBufferRegionARB);
		LOAD_FUNC1(wglSaveBufferRegionARB);
		LOAD_FUNC1(wglRestoreBufferRegionARB);
	}
}

void init_WGL_ARB_create_context()
{
	glloader_WGL_ARB_create_context = _glloader_WGL_ARB_create_context;

	{
		wglCreateContextAttribsARB = NULL;
	}

	_WGL_ARB_create_context = 0;
	if (glloader_is_supported("WGL_ARB_create_context"))
	{
		_WGL_ARB_create_context = 1;

		LOAD_FUNC1(wglCreateContextAttribsARB);
	}
}

void init_WGL_ARB_create_context_profile()
{
	glloader_WGL_ARB_create_context_profile = _glloader_WGL_ARB_create_context_profile;

	_WGL_ARB_create_context_profile = 0;
	if (glloader_is_supported("WGL_ARB_create_context_profile"))
	{
		_WGL_ARB_create_context_profile = 1;
	}
}

void init_WGL_ARB_create_context_robustness()
{
	glloader_WGL_ARB_create_context_robustness = _glloader_WGL_ARB_create_context_robustness;

	_WGL_ARB_create_context_robustness = 0;
	if (glloader_is_supported("WGL_ARB_create_context_robustness"))
	{
		_WGL_ARB_create_context_robustness = 1;
	}
}

void init_WGL_ARB_extensions_string()
{
	glloader_WGL_ARB_extensions_string = _glloader_WGL_ARB_extensions_string;

	{
		wglGetExtensionsStringARB = NULL;
	}

	_WGL_ARB_extensions_string = 0;
	if (glloader_is_supported("WGL_ARB_extensions_string"))
	{
		_WGL_ARB_extensions_string = 1;

		LOAD_FUNC1(wglGetExtensionsStringARB);
	}
}

void init_WGL_ARB_framebuffer_sRGB()
{
	glloader_WGL_ARB_framebuffer_sRGB = _glloader_WGL_ARB_framebuffer_sRGB;

	_WGL_ARB_framebuffer_sRGB = 0;
	if (glloader_is_supported("WGL_ARB_framebuffer_sRGB"))
	{
		_WGL_ARB_framebuffer_sRGB = 1;
	}
	else
	{
		if (glloader_is_supported("WGL_EXT_framebuffer_sRGB"))
		{
			_WGL_ARB_framebuffer_sRGB = 1;
			promote_high("WGL_ARB_framebuffer_sRGB");
		}
	}
}

void init_WGL_ARB_make_current_read()
{
	glloader_WGL_ARB_make_current_read = _glloader_WGL_ARB_make_current_read;

	{
		wglMakeContextCurrentARB = NULL;
		wglGetCurrentReadDCARB = NULL;
	}

	_WGL_ARB_make_current_read = 0;
	if (glloader_is_supported("WGL_ARB_make_current_read"))
	{
		_WGL_ARB_make_current_read = 1;

		LOAD_FUNC1(wglMakeContextCurrentARB);
		LOAD_FUNC1(wglGetCurrentReadDCARB);
	}
	else
	{
		if (glloader_is_supported("WGL_EXT_make_current_read"))
		{
			LOAD_FUNC2(wglMakeContextCurrentARB, wglMakeContextCurrentEXT);
			LOAD_FUNC2(wglGetCurrentReadDCARB, wglGetCurrentReadDCEXT);

			_WGL_ARB_make_current_read = 1;
			promote_high("WGL_ARB_make_current_read");
		}
	}
}

void init_WGL_ARB_multisample()
{
	glloader_WGL_ARB_multisample = _glloader_WGL_ARB_multisample;

	_WGL_ARB_multisample = 0;
	if (glloader_is_supported("WGL_ARB_multisample"))
	{
		_WGL_ARB_multisample = 1;
	}
}

void init_WGL_ARB_pbuffer()
{
	glloader_WGL_ARB_pbuffer = _glloader_WGL_ARB_pbuffer;

	{
		wglCreatePbufferARB = NULL;
		wglGetPbufferDCARB = NULL;
		wglReleasePbufferDCARB = NULL;
		wglDestroyPbufferARB = NULL;
		wglQueryPbufferARB = NULL;
	}

	_WGL_ARB_pbuffer = 0;
	if (glloader_is_supported("WGL_ARB_pbuffer"))
	{
		_WGL_ARB_pbuffer = 1;

		LOAD_FUNC1(wglCreatePbufferARB);
		LOAD_FUNC1(wglGetPbufferDCARB);
		LOAD_FUNC1(wglReleasePbufferDCARB);
		LOAD_FUNC1(wglDestroyPbufferARB);
		LOAD_FUNC1(wglQueryPbufferARB);
	}
	else
	{
		if (glloader_is_supported("WGL_EXT_pbuffer"))
		{
			LOAD_FUNC2(wglCreatePbufferARB, wglCreatePbufferEXT);
			LOAD_FUNC2(wglGetPbufferDCARB, wglGetPbufferDCEXT);
			LOAD_FUNC2(wglReleasePbufferDCARB, wglReleasePbufferDCEXT);
			LOAD_FUNC2(wglDestroyPbufferARB, wglDestroyPbufferEXT);
			LOAD_FUNC2(wglQueryPbufferARB, wglQueryPbufferEXT);

			_WGL_ARB_pbuffer = 1;
			promote_high("WGL_ARB_pbuffer");
		}
	}
}

void init_WGL_ARB_pixel_format()
{
	glloader_WGL_ARB_pixel_format = _glloader_WGL_ARB_pixel_format;

	{
		wglGetPixelFormatAttribivARB = NULL;
		wglGetPixelFormatAttribfvARB = NULL;
		wglChoosePixelFormatARB = NULL;
	}

	_WGL_ARB_pixel_format = 0;
	if (glloader_is_supported("WGL_ARB_pixel_format"))
	{
		_WGL_ARB_pixel_format = 1;

		LOAD_FUNC1(wglGetPixelFormatAttribivARB);
		LOAD_FUNC1(wglGetPixelFormatAttribfvARB);
		LOAD_FUNC1(wglChoosePixelFormatARB);
	}
	else
	{
		if (glloader_is_supported("WGL_EXT_pixel_format"))
		{
			LOAD_FUNC2(wglGetPixelFormatAttribivARB, wglGetPixelFormatAttribivEXT);
			LOAD_FUNC2(wglGetPixelFormatAttribfvARB, wglGetPixelFormatAttribfvEXT);
			LOAD_FUNC2(wglChoosePixelFormatARB, wglChoosePixelFormatEXT);

			_WGL_ARB_pixel_format = 1;
			promote_high("WGL_ARB_pixel_format");
		}
	}
}

void init_WGL_ARB_pixel_format_float()
{
	glloader_WGL_ARB_pixel_format_float = _glloader_WGL_ARB_pixel_format_float;

	_WGL_ARB_pixel_format_float = 0;
	if (glloader_is_supported("WGL_ARB_pixel_format_float"))
	{
		_WGL_ARB_pixel_format_float = 1;
	}
	else
	{
		if (glloader_is_supported("WGL_ATI_pixel_format_float"))
		{
			_WGL_ARB_pixel_format_float = 1;
			promote_high("WGL_ARB_pixel_format_float");
		}
	}
}

void init_WGL_ARB_render_texture()
{
	glloader_WGL_ARB_render_texture = _glloader_WGL_ARB_render_texture;

	{
		wglBindTexImageARB = NULL;
		wglReleaseTexImageARB = NULL;
		wglSetPbufferAttribARB = NULL;
	}

	_WGL_ARB_render_texture = 0;
	if (glloader_is_supported("WGL_ARB_render_texture"))
	{
		_WGL_ARB_render_texture = 1;

		LOAD_FUNC1(wglBindTexImageARB);
		LOAD_FUNC1(wglReleaseTexImageARB);
		LOAD_FUNC1(wglSetPbufferAttribARB);
	}
}

void init_WGL_ARB_robustness_isolation()
{
	glloader_WGL_ARB_robustness_isolation = _glloader_WGL_ARB_robustness_isolation;

	_WGL_ARB_robustness_isolation = 0;
	if (glloader_is_supported("WGL_ARB_robustness_isolation"))
	{
		_WGL_ARB_robustness_isolation = 1;
	}
}

void init_WGL_ATI_pixel_format_float()
{
	glloader_WGL_ATI_pixel_format_float = _glloader_WGL_ATI_pixel_format_float;

	_WGL_ATI_pixel_format_float = 0;
	if (glloader_is_supported("WGL_ATI_pixel_format_float"))
	{
		_WGL_ATI_pixel_format_float = 1;
	}
}

void init_WGL_EXT_create_context_es2_profile()
{
	glloader_WGL_EXT_create_context_es2_profile = _glloader_WGL_EXT_create_context_es2_profile;

	_WGL_EXT_create_context_es2_profile = 0;
	if (glloader_is_supported("WGL_EXT_create_context_es2_profile"))
	{
		_WGL_EXT_create_context_es2_profile = 1;
	}
}

void init_WGL_EXT_depth_float()
{
	glloader_WGL_EXT_depth_float = _glloader_WGL_EXT_depth_float;

	_WGL_EXT_depth_float = 0;
	if (glloader_is_supported("WGL_EXT_depth_float"))
	{
		_WGL_EXT_depth_float = 1;
	}
}

void init_WGL_EXT_display_color_table()
{
	glloader_WGL_EXT_display_color_table = _glloader_WGL_EXT_display_color_table;

	{
		wglCreateDisplayColorTableEXT = NULL;
		wglLoadDisplayColorTableEXT = NULL;
		wglBindDisplayColorTableEXT = NULL;
		wglDestroyDisplayColorTableEXT = NULL;
	}

	_WGL_EXT_display_color_table = 0;
	if (glloader_is_supported("WGL_EXT_display_color_table"))
	{
		_WGL_EXT_display_color_table = 1;

		LOAD_FUNC1(wglCreateDisplayColorTableEXT);
		LOAD_FUNC1(wglLoadDisplayColorTableEXT);
		LOAD_FUNC1(wglBindDisplayColorTableEXT);
		LOAD_FUNC1(wglDestroyDisplayColorTableEXT);
	}
}

void init_WGL_EXT_extensions_string()
{
	glloader_WGL_EXT_extensions_string = _glloader_WGL_EXT_extensions_string;

	{
		wglGetExtensionsStringEXT = NULL;
	}

	_WGL_EXT_extensions_string = 0;
	if (glloader_is_supported("WGL_EXT_extensions_string"))
	{
		_WGL_EXT_extensions_string = 1;

		LOAD_FUNC1(wglGetExtensionsStringEXT);
	}
}

void init_WGL_EXT_framebuffer_sRGB()
{
	glloader_WGL_EXT_framebuffer_sRGB = _glloader_WGL_EXT_framebuffer_sRGB;

	_WGL_EXT_framebuffer_sRGB = 0;
	if (glloader_is_supported("WGL_EXT_framebuffer_sRGB"))
	{
		_WGL_EXT_framebuffer_sRGB = 1;
	}
}

void init_WGL_EXT_make_current_read()
{
	glloader_WGL_EXT_make_current_read = _glloader_WGL_EXT_make_current_read;

	{
		wglMakeContextCurrentEXT = NULL;
		wglGetCurrentReadDCEXT = NULL;
	}

	_WGL_EXT_make_current_read = 0;
	if (glloader_is_supported("WGL_EXT_make_current_read"))
	{
		_WGL_EXT_make_current_read = 1;

		LOAD_FUNC1(wglMakeContextCurrentEXT);
		LOAD_FUNC1(wglGetCurrentReadDCEXT);
	}
}

void init_WGL_EXT_multisample()
{
	glloader_WGL_EXT_multisample = _glloader_WGL_EXT_multisample;

	_WGL_EXT_multisample = 0;
	if (glloader_is_supported("WGL_EXT_multisample"))
	{
		_WGL_EXT_multisample = 1;
	}
}

void init_WGL_EXT_pbuffer()
{
	glloader_WGL_EXT_pbuffer = _glloader_WGL_EXT_pbuffer;

	{
		wglCreatePbufferEXT = NULL;
		wglGetPbufferDCEXT = NULL;
		wglReleasePbufferDCEXT = NULL;
		wglDestroyPbufferEXT = NULL;
		wglQueryPbufferEXT = NULL;
	}

	_WGL_EXT_pbuffer = 0;
	if (glloader_is_supported("WGL_EXT_pbuffer"))
	{
		_WGL_EXT_pbuffer = 1;

		LOAD_FUNC1(wglCreatePbufferEXT);
		LOAD_FUNC1(wglGetPbufferDCEXT);
		LOAD_FUNC1(wglReleasePbufferDCEXT);
		LOAD_FUNC1(wglDestroyPbufferEXT);
		LOAD_FUNC1(wglQueryPbufferEXT);
	}
}

void init_WGL_EXT_pixel_format()
{
	glloader_WGL_EXT_pixel_format = _glloader_WGL_EXT_pixel_format;

	{
		wglGetPixelFormatAttribivEXT = NULL;
		wglGetPixelFormatAttribfvEXT = NULL;
		wglChoosePixelFormatEXT = NULL;
	}

	_WGL_EXT_pixel_format = 0;
	if (glloader_is_supported("WGL_EXT_pixel_format"))
	{
		_WGL_EXT_pixel_format = 1;

		LOAD_FUNC1(wglGetPixelFormatAttribivEXT);
		LOAD_FUNC1(wglGetPixelFormatAttribfvEXT);
		LOAD_FUNC1(wglChoosePixelFormatEXT);
	}
}

void init_WGL_EXT_pixel_format_packed_float()
{
	glloader_WGL_EXT_pixel_format_packed_float = _glloader_WGL_EXT_pixel_format_packed_float;

	_WGL_EXT_pixel_format_packed_float = 0;
	if (glloader_is_supported("WGL_EXT_pixel_format_packed_float"))
	{
		_WGL_EXT_pixel_format_packed_float = 1;
	}
}

void init_WGL_EXT_swap_control()
{
	glloader_WGL_EXT_swap_control = _glloader_WGL_EXT_swap_control;

	{
		wglSwapIntervalEXT = NULL;
		wglGetSwapIntervalEXT = NULL;
	}

	_WGL_EXT_swap_control = 0;
	if (glloader_is_supported("WGL_EXT_swap_control"))
	{
		_WGL_EXT_swap_control = 1;

		LOAD_FUNC1(wglSwapIntervalEXT);
		LOAD_FUNC1(wglGetSwapIntervalEXT);
	}
}

void init_WGL_EXT_swap_control_tear()
{
	glloader_WGL_EXT_swap_control_tear = _glloader_WGL_EXT_swap_control_tear;

	_WGL_EXT_swap_control_tear = 0;
	if (glloader_is_supported("WGL_EXT_swap_control_tear"))
	{
		_WGL_EXT_swap_control_tear = 1;
	}
}

void init_WGL_I3D_digital_video_control()
{
	glloader_WGL_I3D_digital_video_control = _glloader_WGL_I3D_digital_video_control;

	{
		wglGetDigitalVideoParametersI3D = NULL;
		wglSetDigitalVideoParametersI3D = NULL;
	}

	_WGL_I3D_digital_video_control = 0;
	if (glloader_is_supported("WGL_I3D_digital_video_control"))
	{
		_WGL_I3D_digital_video_control = 1;

		LOAD_FUNC1(wglGetDigitalVideoParametersI3D);
		LOAD_FUNC1(wglSetDigitalVideoParametersI3D);
	}
}

void init_WGL_I3D_gamma()
{
	glloader_WGL_I3D_gamma = _glloader_WGL_I3D_gamma;

	{
		wglGetGammaTableParametersI3D = NULL;
		wglSetGammaTableParametersI3D = NULL;
		wglGetGammaTableI3D = NULL;
		wglSetGammaTableI3D = NULL;
	}

	_WGL_I3D_gamma = 0;
	if (glloader_is_supported("WGL_I3D_gamma"))
	{
		_WGL_I3D_gamma = 1;

		LOAD_FUNC1(wglGetGammaTableParametersI3D);
		LOAD_FUNC1(wglSetGammaTableParametersI3D);
		LOAD_FUNC1(wglGetGammaTableI3D);
		LOAD_FUNC1(wglSetGammaTableI3D);
	}
}

void init_WGL_I3D_genlock()
{
	glloader_WGL_I3D_genlock = _glloader_WGL_I3D_genlock;

	{
		wglEnableGenlockI3D = NULL;
		wglDisableGenlockI3D = NULL;
		wglIsEnabledGenlockI3D = NULL;
		wglGenlockSourceI3D = NULL;
		wglGetGenlockSourceI3D = NULL;
		wglGenlockSourceEdgeI3D = NULL;
		wglGetGenlockSourceEdgeI3D = NULL;
		wglGenlockSampleRateI3D = NULL;
		wglGetGenlockSampleRateI3D = NULL;
		wglGenlockSourceDelayI3D = NULL;
		wglGetGenlockSourceDelayI3D = NULL;
		wglQueryGenlockMaxSourceDelayI3D = NULL;
	}

	_WGL_I3D_genlock = 0;
	if (glloader_is_supported("WGL_I3D_genlock"))
	{
		_WGL_I3D_genlock = 1;

		LOAD_FUNC1(wglEnableGenlockI3D);
		LOAD_FUNC1(wglDisableGenlockI3D);
		LOAD_FUNC1(wglIsEnabledGenlockI3D);
		LOAD_FUNC1(wglGenlockSourceI3D);
		LOAD_FUNC1(wglGetGenlockSourceI3D);
		LOAD_FUNC1(wglGenlockSourceEdgeI3D);
		LOAD_FUNC1(wglGetGenlockSourceEdgeI3D);
		LOAD_FUNC1(wglGenlockSampleRateI3D);
		LOAD_FUNC1(wglGetGenlockSampleRateI3D);
		LOAD_FUNC1(wglGenlockSourceDelayI3D);
		LOAD_FUNC1(wglGetGenlockSourceDelayI3D);
		LOAD_FUNC1(wglQueryGenlockMaxSourceDelayI3D);
	}
}

void init_WGL_I3D_image_buffer()
{
	glloader_WGL_I3D_image_buffer = _glloader_WGL_I3D_image_buffer;

	{
		wglCreateImageBufferI3D = NULL;
		wglDestroyImageBufferI3D = NULL;
		wglAssociateImageBufferEventsI3D = NULL;
		wglReleaseImageBufferEventsI3D = NULL;
	}

	_WGL_I3D_image_buffer = 0;
	if (glloader_is_supported("WGL_I3D_image_buffer"))
	{
		_WGL_I3D_image_buffer = 1;

		LOAD_FUNC1(wglCreateImageBufferI3D);
		LOAD_FUNC1(wglDestroyImageBufferI3D);
		LOAD_FUNC1(wglAssociateImageBufferEventsI3D);
		LOAD_FUNC1(wglReleaseImageBufferEventsI3D);
	}
}

void init_WGL_I3D_swap_frame_lock()
{
	glloader_WGL_I3D_swap_frame_lock = _glloader_WGL_I3D_swap_frame_lock;

	{
		wglEnableFrameLockI3D = NULL;
		wglDisableFrameLockI3D = NULL;
		wglIsEnabledFrameLockI3D = NULL;
		wglQueryFrameLockMasterI3D = NULL;
	}

	_WGL_I3D_swap_frame_lock = 0;
	if (glloader_is_supported("WGL_I3D_swap_frame_lock"))
	{
		_WGL_I3D_swap_frame_lock = 1;

		LOAD_FUNC1(wglEnableFrameLockI3D);
		LOAD_FUNC1(wglDisableFrameLockI3D);
		LOAD_FUNC1(wglIsEnabledFrameLockI3D);
		LOAD_FUNC1(wglQueryFrameLockMasterI3D);
	}
}

void init_WGL_I3D_swap_frame_usage()
{
	glloader_WGL_I3D_swap_frame_usage = _glloader_WGL_I3D_swap_frame_usage;

	{
		wglGetFrameUsageI3D = NULL;
		wglBeginFrameTrackingI3D = NULL;
		wglEndFrameTrackingI3D = NULL;
		wglQueryFrameTrackingI3D = NULL;
	}

	_WGL_I3D_swap_frame_usage = 0;
	if (glloader_is_supported("WGL_I3D_swap_frame_usage"))
	{
		_WGL_I3D_swap_frame_usage = 1;

		LOAD_FUNC1(wglGetFrameUsageI3D);
		LOAD_FUNC1(wglBeginFrameTrackingI3D);
		LOAD_FUNC1(wglEndFrameTrackingI3D);
		LOAD_FUNC1(wglQueryFrameTrackingI3D);
	}
}

void init_WGL_NV_copy_image()
{
	glloader_WGL_NV_copy_image = _glloader_WGL_NV_copy_image;

	{
		wglCopyImageSubDataNV = NULL;
	}

	_WGL_NV_copy_image = 0;
	if (glloader_is_supported("WGL_NV_copy_image"))
	{
		_WGL_NV_copy_image = 1;

		LOAD_FUNC1(wglCopyImageSubDataNV);
	}
}

void init_WGL_NV_delay_before_swap()
{
	glloader_WGL_NV_delay_before_swap = _glloader_WGL_NV_delay_before_swap;

	{
		wglDelayBeforeSwapNV = NULL;
	}

	_WGL_NV_delay_before_swap = 0;
	if (glloader_is_supported("WGL_NV_delay_before_swap"))
	{
		_WGL_NV_delay_before_swap = 1;

		LOAD_FUNC1(wglDelayBeforeSwapNV);
	}
}

void init_WGL_NV_DX_interop()
{
	glloader_WGL_NV_DX_interop = _glloader_WGL_NV_DX_interop;

	{
		wglDXSetResourceShareHandleNV = NULL;
		wglDXOpenDeviceNV = NULL;
		wglDXCloseDeviceNV = NULL;
		wglDXRegisterObjectNV = NULL;
		wglDXUnregisterObjectNV = NULL;
		wglDXObjectAccessNV = NULL;
		wglDXLockObjectsNV = NULL;
		wglDXUnlockObjectsNV = NULL;
	}

	_WGL_NV_DX_interop = 0;
	if (glloader_is_supported("WGL_NV_DX_interop"))
	{
		_WGL_NV_DX_interop = 1;

		LOAD_FUNC1(wglDXSetResourceShareHandleNV);
		LOAD_FUNC1(wglDXOpenDeviceNV);
		LOAD_FUNC1(wglDXCloseDeviceNV);
		LOAD_FUNC1(wglDXRegisterObjectNV);
		LOAD_FUNC1(wglDXUnregisterObjectNV);
		LOAD_FUNC1(wglDXObjectAccessNV);
		LOAD_FUNC1(wglDXLockObjectsNV);
		LOAD_FUNC1(wglDXUnlockObjectsNV);
	}
}

void init_WGL_NV_float_buffer()
{
	glloader_WGL_NV_float_buffer = _glloader_WGL_NV_float_buffer;

	_WGL_NV_float_buffer = 0;
	if (glloader_is_supported("WGL_NV_float_buffer"))
	{
		_WGL_NV_float_buffer = 1;
	}
}

void init_WGL_NV_gpu_affinity()
{
	glloader_WGL_NV_gpu_affinity = _glloader_WGL_NV_gpu_affinity;

	{
		wglEnumGpusNV = NULL;
		wglEnumGpuDevicesNV = NULL;
		wglCreateAffinityDCNV = NULL;
		wglEnumGpusFromAffinityDCNV = NULL;
		wglDeleteDCNV = NULL;
	}

	_WGL_NV_gpu_affinity = 0;
	if (glloader_is_supported("WGL_NV_gpu_affinity"))
	{
		_WGL_NV_gpu_affinity = 1;

		LOAD_FUNC1(wglEnumGpusNV);
		LOAD_FUNC1(wglEnumGpuDevicesNV);
		LOAD_FUNC1(wglCreateAffinityDCNV);
		LOAD_FUNC1(wglEnumGpusFromAffinityDCNV);
		LOAD_FUNC1(wglDeleteDCNV);
	}
}

void init_WGL_NV_multisample_coverage()
{
	glloader_WGL_NV_multisample_coverage = _glloader_WGL_NV_multisample_coverage;

	_WGL_NV_multisample_coverage = 0;
	if (glloader_is_supported("WGL_NV_multisample_coverage"))
	{
		_WGL_NV_multisample_coverage = 1;
	}
}

void init_WGL_NV_present_video()
{
	glloader_WGL_NV_present_video = _glloader_WGL_NV_present_video;

	{
		wglEnumerateVideoDevicesNV = NULL;
		wglBindVideoDeviceNV = NULL;
		wglQueryCurrentContextNV = NULL;
	}

	_WGL_NV_present_video = 0;
	if (glloader_is_supported("WGL_NV_present_video"))
	{
		_WGL_NV_present_video = 1;

		LOAD_FUNC1(wglEnumerateVideoDevicesNV);
		LOAD_FUNC1(wglBindVideoDeviceNV);
		LOAD_FUNC1(wglQueryCurrentContextNV);
	}
}

void init_WGL_NV_render_depth_texture()
{
	glloader_WGL_NV_render_depth_texture = _glloader_WGL_NV_render_depth_texture;

	_WGL_NV_render_depth_texture = 0;
	if (glloader_is_supported("WGL_NV_render_depth_texture"))
	{
		_WGL_NV_render_depth_texture = 1;
	}
}

void init_WGL_NV_render_texture_rectangle()
{
	glloader_WGL_NV_render_texture_rectangle = _glloader_WGL_NV_render_texture_rectangle;

	_WGL_NV_render_texture_rectangle = 0;
	if (glloader_is_supported("WGL_NV_render_texture_rectangle"))
	{
		_WGL_NV_render_texture_rectangle = 1;
	}
}

void init_WGL_NV_swap_group()
{
	glloader_WGL_NV_swap_group = _glloader_WGL_NV_swap_group;

	{
		wglJoinSwapGroupNV = NULL;
		wglBindSwapBarrierNV = NULL;
		wglQuerySwapGroupNV = NULL;
		wglQueryMaxSwapGroupsNV = NULL;
		wglQueryFrameCountNV = NULL;
		wglResetFrameCountNV = NULL;
	}

	_WGL_NV_swap_group = 0;
	if (glloader_is_supported("WGL_NV_swap_group"))
	{
		_WGL_NV_swap_group = 1;

		LOAD_FUNC1(wglJoinSwapGroupNV);
		LOAD_FUNC1(wglBindSwapBarrierNV);
		LOAD_FUNC1(wglQuerySwapGroupNV);
		LOAD_FUNC1(wglQueryMaxSwapGroupsNV);
		LOAD_FUNC1(wglQueryFrameCountNV);
		LOAD_FUNC1(wglResetFrameCountNV);
	}
}

void init_WGL_NV_vertex_array_range()
{
	glloader_WGL_NV_vertex_array_range = _glloader_WGL_NV_vertex_array_range;

	{
		wglAllocateMemoryNV = NULL;
		wglFreeMemoryNV = NULL;
	}

	_WGL_NV_vertex_array_range = 0;
	if (glloader_is_supported("WGL_NV_vertex_array_range"))
	{
		_WGL_NV_vertex_array_range = 1;

		LOAD_FUNC1(wglAllocateMemoryNV);
		LOAD_FUNC1(wglFreeMemoryNV);
	}
}

void init_WGL_NV_video_capture()
{
	glloader_WGL_NV_video_capture = _glloader_WGL_NV_video_capture;

	{
		wglBindVideoCaptureDeviceNV = NULL;
		wglEnumerateVideoCaptureDevicesNV = NULL;
		wglLockVideoCaptureDeviceNV = NULL;
		wglQueryVideoCaptureDeviceNV = NULL;
		wglReleaseVideoCaptureDeviceNV = NULL;
	}

	_WGL_NV_video_capture = 0;
	if (glloader_is_supported("WGL_NV_video_capture"))
	{
		_WGL_NV_video_capture = 1;

		LOAD_FUNC1(wglBindVideoCaptureDeviceNV);
		LOAD_FUNC1(wglEnumerateVideoCaptureDevicesNV);
		LOAD_FUNC1(wglLockVideoCaptureDeviceNV);
		LOAD_FUNC1(wglQueryVideoCaptureDeviceNV);
		LOAD_FUNC1(wglReleaseVideoCaptureDeviceNV);
	}
}

void init_WGL_NV_video_output()
{
	glloader_WGL_NV_video_output = _glloader_WGL_NV_video_output;

	{
		wglGetVideoDeviceNV = NULL;
		wglReleaseVideoDeviceNV = NULL;
		wglBindVideoImageNV = NULL;
		wglReleaseVideoImageNV = NULL;
		wglSendPbufferToVideoNV = NULL;
		wglGetVideoInfoNV = NULL;
	}

	_WGL_NV_video_output = 0;
	if (glloader_is_supported("WGL_NV_video_output"))
	{
		_WGL_NV_video_output = 1;

		LOAD_FUNC1(wglGetVideoDeviceNV);
		LOAD_FUNC1(wglReleaseVideoDeviceNV);
		LOAD_FUNC1(wglBindVideoImageNV);
		LOAD_FUNC1(wglReleaseVideoImageNV);
		LOAD_FUNC1(wglSendPbufferToVideoNV);
		LOAD_FUNC1(wglGetVideoInfoNV);
	}
}

void init_WGL_OML_sync_control()
{
	glloader_WGL_OML_sync_control = _glloader_WGL_OML_sync_control;

	{
		wglGetSyncValuesOML = NULL;
		wglGetMscRateOML = NULL;
		wglSwapBuffersMscOML = NULL;
		wglSwapLayerBuffersMscOML = NULL;
		wglWaitForMscOML = NULL;
		wglWaitForSbcOML = NULL;
	}

	_WGL_OML_sync_control = 0;
	if (glloader_is_supported("WGL_OML_sync_control"))
	{
		_WGL_OML_sync_control = 1;

		LOAD_FUNC1(wglGetSyncValuesOML);
		LOAD_FUNC1(wglGetMscRateOML);
		LOAD_FUNC1(wglSwapBuffersMscOML);
		LOAD_FUNC1(wglSwapLayerBuffersMscOML);
		LOAD_FUNC1(wglWaitForMscOML);
		LOAD_FUNC1(wglWaitForSbcOML);
	}
}


void wgl_init()
{
	init_WGL_3DFX_multisample();
	init_WGL_3DL_stereo_control();
	init_WGL_AMD_gpu_association();
	init_WGL_ARB_buffer_region();
	init_WGL_ARB_create_context();
	init_WGL_ARB_create_context_profile();
	init_WGL_ARB_create_context_robustness();
	init_WGL_ARB_extensions_string();
	init_WGL_ARB_framebuffer_sRGB();
	init_WGL_ARB_make_current_read();
	init_WGL_ARB_multisample();
	init_WGL_ARB_pbuffer();
	init_WGL_ARB_pixel_format();
	init_WGL_ARB_pixel_format_float();
	init_WGL_ARB_render_texture();
	init_WGL_ARB_robustness_isolation();
	init_WGL_ATI_pixel_format_float();
	init_WGL_EXT_create_context_es2_profile();
	init_WGL_EXT_depth_float();
	init_WGL_EXT_display_color_table();
	init_WGL_EXT_extensions_string();
	init_WGL_EXT_framebuffer_sRGB();
	init_WGL_EXT_make_current_read();
	init_WGL_EXT_multisample();
	init_WGL_EXT_pbuffer();
	init_WGL_EXT_pixel_format();
	init_WGL_EXT_pixel_format_packed_float();
	init_WGL_EXT_swap_control();
	init_WGL_EXT_swap_control_tear();
	init_WGL_I3D_digital_video_control();
	init_WGL_I3D_gamma();
	init_WGL_I3D_genlock();
	init_WGL_I3D_image_buffer();
	init_WGL_I3D_swap_frame_lock();
	init_WGL_I3D_swap_frame_usage();
	init_WGL_NV_copy_image();
	init_WGL_NV_delay_before_swap();
	init_WGL_NV_DX_interop();
	init_WGL_NV_float_buffer();
	init_WGL_NV_gpu_affinity();
	init_WGL_NV_multisample_coverage();
	init_WGL_NV_present_video();
	init_WGL_NV_render_depth_texture();
	init_WGL_NV_render_texture_rectangle();
	init_WGL_NV_swap_group();
	init_WGL_NV_vertex_array_range();
	init_WGL_NV_video_capture();
	init_WGL_NV_video_output();
	init_WGL_OML_sync_control();
}

#ifdef __cplusplus
}
#endif

#endif		/* GLLOADER_WGL */
