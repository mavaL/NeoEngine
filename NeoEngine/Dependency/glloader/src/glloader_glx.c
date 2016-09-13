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

#ifdef GLLOADER_GLX

#ifdef __cplusplus
extern "C"
{
#endif

char _GLX_3DFX_multisample = 0;
char _GLX_AMD_gpu_association = 0;
char _GLX_ARB_create_context = 0;
char _GLX_ARB_create_context_profile = 0;
char _GLX_ARB_create_context_robustness = 0;
char _GLX_ARB_fbconfig_float = 0;
char _GLX_ARB_framebuffer_sRGB = 0;
char _GLX_ARB_get_proc_address = 0;
char _GLX_ARB_multisample = 0;
char _GLX_ARB_robustness_isolation = 0;
char _GLX_EXT_buffer_age = 0;
char _GLX_EXT_create_context_es2_profile = 0;
char _GLX_EXT_fbconfig_packed_float = 0;
char _GLX_EXT_framebuffer_sRGB = 0;
char _GLX_EXT_import_context = 0;
char _GLX_EXT_stereo_tree = 0;
char _GLX_EXT_swap_control = 0;
char _GLX_EXT_swap_control_tear = 0;
char _GLX_EXT_texture_from_pixmap = 0;
char _GLX_EXT_visual_info = 0;
char _GLX_EXT_visual_rating = 0;
char _GLX_INTEL_swap_event = 0;
char _GLX_MESA_agp_offset = 0;
char _GLX_MESA_copy_sub_buffer = 0;
char _GLX_MESA_pixmap_colormap = 0;
char _GLX_MESA_query_renderer = 0;
char _GLX_MESA_release_buffers = 0;
char _GLX_MESA_set_3dfx_mode = 0;
char _GLX_NV_copy_buffer = 0;
char _GLX_NV_copy_image = 0;
char _GLX_NV_delay_before_swap = 0;
char _GLX_NV_float_buffer = 0;
char _GLX_NV_multisample_coverage = 0;
char _GLX_NV_present_video = 0;
char _GLX_NV_swap_group = 0;
char _GLX_NV_video_capture = 0;
char _GLX_NV_video_output = 0;
char _GLX_OML_swap_method = 0;
char _GLX_OML_sync_control = 0;
char _GLX_SGIS_blended_overlay = 0;
char _GLX_SGIS_multisample = 0;
char _GLX_SGIS_shared_multisample = 0;
#ifdef _DM_BUFFER_H_
char _GLX_SGIX_dmbuffer = 0;
#endif
char _GLX_SGIX_fbconfig = 0;
char _GLX_SGIX_hyperpipe = 0;
char _GLX_SGIX_pbuffer = 0;
char _GLX_SGIX_swap_barrier = 0;
char _GLX_SGIX_swap_group = 0;
char _GLX_SGIX_video_resize = 0;
#ifdef _VL_H
char _GLX_SGIX_video_source = 0;
#endif
char _GLX_SGIX_visual_select_group = 0;
char _GLX_SGI_cushion = 0;
char _GLX_SGI_make_current_read = 0;
char _GLX_SGI_swap_control = 0;
char _GLX_SGI_video_sync = 0;
char _GLX_SUN_get_transparent_index = 0;
char _GLX_VERSION_1_0 = 0;
char _GLX_VERSION_1_1 = 0;
char _GLX_VERSION_1_2 = 0;
char _GLX_VERSION_1_3 = 0;
char _GLX_VERSION_1_4 = 0;

static char GLLOADER_APIENTRY _glloader_GLX_3DFX_multisample()
{
	return _GLX_3DFX_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_3DFX_multisample()
{
	glloader_init();
	return glloader_GLX_3DFX_multisample();
}
glloader_GLX_3DFX_multisampleFUNC glloader_GLX_3DFX_multisample = self_init_glloader_GLX_3DFX_multisample;

static char GLLOADER_APIENTRY _glloader_GLX_AMD_gpu_association()
{
	return _GLX_AMD_gpu_association;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_AMD_gpu_association()
{
	glloader_init();
	return glloader_GLX_AMD_gpu_association();
}
glloader_GLX_AMD_gpu_associationFUNC glloader_GLX_AMD_gpu_association = self_init_glloader_GLX_AMD_gpu_association;

static char GLLOADER_APIENTRY _glloader_GLX_ARB_create_context()
{
	return _GLX_ARB_create_context;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_create_context()
{
	glloader_init();
	return glloader_GLX_ARB_create_context();
}
glloader_GLX_ARB_create_contextFUNC glloader_GLX_ARB_create_context = self_init_glloader_GLX_ARB_create_context;

#ifdef GLX_ARB_create_context

static GLXContext GLLOADER_APIENTRY self_init_glXCreateContextAttribsARB(Display* dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int* attrib_list)
{
	glloader_init();
	return glXCreateContextAttribsARB(dpy, config, share_context, direct, attrib_list);
}

glXCreateContextAttribsARBFUNC glXCreateContextAttribsARB = self_init_glXCreateContextAttribsARB;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_ARB_create_context_profile()
{
	return _GLX_ARB_create_context_profile;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_create_context_profile()
{
	glloader_init();
	return glloader_GLX_ARB_create_context_profile();
}
glloader_GLX_ARB_create_context_profileFUNC glloader_GLX_ARB_create_context_profile = self_init_glloader_GLX_ARB_create_context_profile;

static char GLLOADER_APIENTRY _glloader_GLX_ARB_create_context_robustness()
{
	return _GLX_ARB_create_context_robustness;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_create_context_robustness()
{
	glloader_init();
	return glloader_GLX_ARB_create_context_robustness();
}
glloader_GLX_ARB_create_context_robustnessFUNC glloader_GLX_ARB_create_context_robustness = self_init_glloader_GLX_ARB_create_context_robustness;

static char GLLOADER_APIENTRY _glloader_GLX_ARB_fbconfig_float()
{
	return _GLX_ARB_fbconfig_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_fbconfig_float()
{
	glloader_init();
	return glloader_GLX_ARB_fbconfig_float();
}
glloader_GLX_ARB_fbconfig_floatFUNC glloader_GLX_ARB_fbconfig_float = self_init_glloader_GLX_ARB_fbconfig_float;

static char GLLOADER_APIENTRY _glloader_GLX_ARB_framebuffer_sRGB()
{
	return _GLX_ARB_framebuffer_sRGB;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_framebuffer_sRGB()
{
	glloader_init();
	return glloader_GLX_ARB_framebuffer_sRGB();
}
glloader_GLX_ARB_framebuffer_sRGBFUNC glloader_GLX_ARB_framebuffer_sRGB = self_init_glloader_GLX_ARB_framebuffer_sRGB;

static char GLLOADER_APIENTRY _glloader_GLX_ARB_get_proc_address()
{
	return _GLX_ARB_get_proc_address;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_get_proc_address()
{
	glloader_init();
	return glloader_GLX_ARB_get_proc_address();
}
glloader_GLX_ARB_get_proc_addressFUNC glloader_GLX_ARB_get_proc_address = self_init_glloader_GLX_ARB_get_proc_address;

#ifdef GLX_ARB_get_proc_address

static __GLXextFuncPtr GLLOADER_APIENTRY self_init_glXGetProcAddressARB(const GLubyte* procName)
{
	LOAD_FUNC1(glXGetProcAddressARB);
	return glXGetProcAddressARB(procName);
}

glXGetProcAddressARBFUNC glXGetProcAddressARB = self_init_glXGetProcAddressARB;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_ARB_multisample()
{
	return _GLX_ARB_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_multisample()
{
	glloader_init();
	return glloader_GLX_ARB_multisample();
}
glloader_GLX_ARB_multisampleFUNC glloader_GLX_ARB_multisample = self_init_glloader_GLX_ARB_multisample;

static char GLLOADER_APIENTRY _glloader_GLX_ARB_robustness_isolation()
{
	return _GLX_ARB_robustness_isolation;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_ARB_robustness_isolation()
{
	glloader_init();
	return glloader_GLX_ARB_robustness_isolation();
}
glloader_GLX_ARB_robustness_isolationFUNC glloader_GLX_ARB_robustness_isolation = self_init_glloader_GLX_ARB_robustness_isolation;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_buffer_age()
{
	return _GLX_EXT_buffer_age;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_buffer_age()
{
	glloader_init();
	return glloader_GLX_EXT_buffer_age();
}
glloader_GLX_EXT_buffer_ageFUNC glloader_GLX_EXT_buffer_age = self_init_glloader_GLX_EXT_buffer_age;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_create_context_es2_profile()
{
	return _GLX_EXT_create_context_es2_profile;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_create_context_es2_profile()
{
	glloader_init();
	return glloader_GLX_EXT_create_context_es2_profile();
}
glloader_GLX_EXT_create_context_es2_profileFUNC glloader_GLX_EXT_create_context_es2_profile = self_init_glloader_GLX_EXT_create_context_es2_profile;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_fbconfig_packed_float()
{
	return _GLX_EXT_fbconfig_packed_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_fbconfig_packed_float()
{
	glloader_init();
	return glloader_GLX_EXT_fbconfig_packed_float();
}
glloader_GLX_EXT_fbconfig_packed_floatFUNC glloader_GLX_EXT_fbconfig_packed_float = self_init_glloader_GLX_EXT_fbconfig_packed_float;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_framebuffer_sRGB()
{
	return _GLX_EXT_framebuffer_sRGB;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_framebuffer_sRGB()
{
	glloader_init();
	return glloader_GLX_EXT_framebuffer_sRGB();
}
glloader_GLX_EXT_framebuffer_sRGBFUNC glloader_GLX_EXT_framebuffer_sRGB = self_init_glloader_GLX_EXT_framebuffer_sRGB;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_import_context()
{
	return _GLX_EXT_import_context;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_import_context()
{
	glloader_init();
	return glloader_GLX_EXT_import_context();
}
glloader_GLX_EXT_import_contextFUNC glloader_GLX_EXT_import_context = self_init_glloader_GLX_EXT_import_context;

#ifdef GLX_EXT_import_context

static Display* GLLOADER_APIENTRY self_init_glXGetCurrentDisplayEXT()
{
	glloader_init();
	return glXGetCurrentDisplayEXT();
}
static int GLLOADER_APIENTRY self_init_glXQueryContextInfoEXT(Display* dpy, GLXContext context, int attribute, int* value)
{
	glloader_init();
	return glXQueryContextInfoEXT(dpy, context, attribute, value);
}
static GLXContextID GLLOADER_APIENTRY self_init_glXGetContextIDEXT(const GLXContext context)
{
	glloader_init();
	return glXGetContextIDEXT(context);
}
static GLXContext GLLOADER_APIENTRY self_init_glXImportContextEXT(Display* dpy, GLXContextID contextID)
{
	glloader_init();
	return glXImportContextEXT(dpy, contextID);
}
static void GLLOADER_APIENTRY self_init_glXFreeContextEXT(Display* dpy, GLXContext context)
{
	glloader_init();
	glXFreeContextEXT(dpy, context);
}

glXGetCurrentDisplayEXTFUNC glXGetCurrentDisplayEXT = self_init_glXGetCurrentDisplayEXT;
glXQueryContextInfoEXTFUNC glXQueryContextInfoEXT = self_init_glXQueryContextInfoEXT;
glXGetContextIDEXTFUNC glXGetContextIDEXT = self_init_glXGetContextIDEXT;
glXImportContextEXTFUNC glXImportContextEXT = self_init_glXImportContextEXT;
glXFreeContextEXTFUNC glXFreeContextEXT = self_init_glXFreeContextEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_EXT_stereo_tree()
{
	return _GLX_EXT_stereo_tree;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_stereo_tree()
{
	glloader_init();
	return glloader_GLX_EXT_stereo_tree();
}
glloader_GLX_EXT_stereo_treeFUNC glloader_GLX_EXT_stereo_tree = self_init_glloader_GLX_EXT_stereo_tree;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_swap_control()
{
	return _GLX_EXT_swap_control;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_swap_control()
{
	glloader_init();
	return glloader_GLX_EXT_swap_control();
}
glloader_GLX_EXT_swap_controlFUNC glloader_GLX_EXT_swap_control = self_init_glloader_GLX_EXT_swap_control;

#ifdef GLX_EXT_swap_control

static void GLLOADER_APIENTRY self_init_glXSwapIntervalEXT(Display* dpy, GLXDrawable drawable, int interval)
{
	glloader_init();
	glXSwapIntervalEXT(dpy, drawable, interval);
}

glXSwapIntervalEXTFUNC glXSwapIntervalEXT = self_init_glXSwapIntervalEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_EXT_swap_control_tear()
{
	return _GLX_EXT_swap_control_tear;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_swap_control_tear()
{
	glloader_init();
	return glloader_GLX_EXT_swap_control_tear();
}
glloader_GLX_EXT_swap_control_tearFUNC glloader_GLX_EXT_swap_control_tear = self_init_glloader_GLX_EXT_swap_control_tear;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_texture_from_pixmap()
{
	return _GLX_EXT_texture_from_pixmap;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_texture_from_pixmap()
{
	glloader_init();
	return glloader_GLX_EXT_texture_from_pixmap();
}
glloader_GLX_EXT_texture_from_pixmapFUNC glloader_GLX_EXT_texture_from_pixmap = self_init_glloader_GLX_EXT_texture_from_pixmap;

#ifdef GLX_EXT_texture_from_pixmap

static void GLLOADER_APIENTRY self_init_glXBindTexImageEXT(Display* dpy, GLXDrawable drawable, int buffer, const int* attrib_list)
{
	glloader_init();
	glXBindTexImageEXT(dpy, drawable, buffer, attrib_list);
}
static void GLLOADER_APIENTRY self_init_glXReleaseTexImageEXT(Display* dpy, GLXDrawable drawable, int buffer)
{
	glloader_init();
	glXReleaseTexImageEXT(dpy, drawable, buffer);
}

glXBindTexImageEXTFUNC glXBindTexImageEXT = self_init_glXBindTexImageEXT;
glXReleaseTexImageEXTFUNC glXReleaseTexImageEXT = self_init_glXReleaseTexImageEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_EXT_visual_info()
{
	return _GLX_EXT_visual_info;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_visual_info()
{
	glloader_init();
	return glloader_GLX_EXT_visual_info();
}
glloader_GLX_EXT_visual_infoFUNC glloader_GLX_EXT_visual_info = self_init_glloader_GLX_EXT_visual_info;

static char GLLOADER_APIENTRY _glloader_GLX_EXT_visual_rating()
{
	return _GLX_EXT_visual_rating;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_EXT_visual_rating()
{
	glloader_init();
	return glloader_GLX_EXT_visual_rating();
}
glloader_GLX_EXT_visual_ratingFUNC glloader_GLX_EXT_visual_rating = self_init_glloader_GLX_EXT_visual_rating;

static char GLLOADER_APIENTRY _glloader_GLX_INTEL_swap_event()
{
	return _GLX_INTEL_swap_event;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_INTEL_swap_event()
{
	glloader_init();
	return glloader_GLX_INTEL_swap_event();
}
glloader_GLX_INTEL_swap_eventFUNC glloader_GLX_INTEL_swap_event = self_init_glloader_GLX_INTEL_swap_event;

static char GLLOADER_APIENTRY _glloader_GLX_MESA_agp_offset()
{
	return _GLX_MESA_agp_offset;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_MESA_agp_offset()
{
	glloader_init();
	return glloader_GLX_MESA_agp_offset();
}
glloader_GLX_MESA_agp_offsetFUNC glloader_GLX_MESA_agp_offset = self_init_glloader_GLX_MESA_agp_offset;

#ifdef GLX_MESA_agp_offset

static unsigned int GLLOADER_APIENTRY self_init_glXGetAGPOffsetMESA(const void* pointer)
{
	glloader_init();
	return glXGetAGPOffsetMESA(pointer);
}

glXGetAGPOffsetMESAFUNC glXGetAGPOffsetMESA = self_init_glXGetAGPOffsetMESA;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_MESA_copy_sub_buffer()
{
	return _GLX_MESA_copy_sub_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_MESA_copy_sub_buffer()
{
	glloader_init();
	return glloader_GLX_MESA_copy_sub_buffer();
}
glloader_GLX_MESA_copy_sub_bufferFUNC glloader_GLX_MESA_copy_sub_buffer = self_init_glloader_GLX_MESA_copy_sub_buffer;

#ifdef GLX_MESA_copy_sub_buffer

static void GLLOADER_APIENTRY self_init_glXCopySubBufferMESA(Display* dpy, GLXDrawable drawable, int x, int y, int width, int height)
{
	glloader_init();
	glXCopySubBufferMESA(dpy, drawable, x, y, width, height);
}

glXCopySubBufferMESAFUNC glXCopySubBufferMESA = self_init_glXCopySubBufferMESA;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_MESA_pixmap_colormap()
{
	return _GLX_MESA_pixmap_colormap;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_MESA_pixmap_colormap()
{
	glloader_init();
	return glloader_GLX_MESA_pixmap_colormap();
}
glloader_GLX_MESA_pixmap_colormapFUNC glloader_GLX_MESA_pixmap_colormap = self_init_glloader_GLX_MESA_pixmap_colormap;

#ifdef GLX_MESA_pixmap_colormap

static GLXPixmap GLLOADER_APIENTRY self_init_glXCreateGLXPixmapMESA(Display* dpy, XVisualInfo* visual, Pixmap pixmap, Colormap cmap)
{
	glloader_init();
	return glXCreateGLXPixmapMESA(dpy, visual, pixmap, cmap);
}

glXCreateGLXPixmapMESAFUNC glXCreateGLXPixmapMESA = self_init_glXCreateGLXPixmapMESA;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_MESA_query_renderer()
{
	return _GLX_MESA_query_renderer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_MESA_query_renderer()
{
	glloader_init();
	return glloader_GLX_MESA_query_renderer();
}
glloader_GLX_MESA_query_rendererFUNC glloader_GLX_MESA_query_renderer = self_init_glloader_GLX_MESA_query_renderer;

#ifdef GLX_MESA_query_renderer

static Bool GLLOADER_APIENTRY self_init_glXQueryRendererIntegerMESA(Display* dpy, int screen, int renderer, int attribute, unsigned int* value)
{
	glloader_init();
	return glXQueryRendererIntegerMESA(dpy, screen, renderer, attribute, value);
}
static Bool GLLOADER_APIENTRY self_init_glXQueryCurrentRendererIntegerMESA(int attribute, unsigned int* value)
{
	glloader_init();
	return glXQueryCurrentRendererIntegerMESA(attribute, value);
}
static const char* GLLOADER_APIENTRY self_init_glXQueryRendererStringMESA(Display* dpy, int screen, int renderer, int attribute)
{
	glloader_init();
	return glXQueryRendererStringMESA(dpy, screen, renderer, attribute);
}
static const char* GLLOADER_APIENTRY self_init_glXQueryCurrentRendererStringMESA(int attribute)
{
	glloader_init();
	return glXQueryCurrentRendererStringMESA(attribute);
}

glXQueryRendererIntegerMESAFUNC glXQueryRendererIntegerMESA = self_init_glXQueryRendererIntegerMESA;
glXQueryCurrentRendererIntegerMESAFUNC glXQueryCurrentRendererIntegerMESA = self_init_glXQueryCurrentRendererIntegerMESA;
glXQueryRendererStringMESAFUNC glXQueryRendererStringMESA = self_init_glXQueryRendererStringMESA;
glXQueryCurrentRendererStringMESAFUNC glXQueryCurrentRendererStringMESA = self_init_glXQueryCurrentRendererStringMESA;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_MESA_release_buffers()
{
	return _GLX_MESA_release_buffers;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_MESA_release_buffers()
{
	glloader_init();
	return glloader_GLX_MESA_release_buffers();
}
glloader_GLX_MESA_release_buffersFUNC glloader_GLX_MESA_release_buffers = self_init_glloader_GLX_MESA_release_buffers;

#ifdef GLX_MESA_release_buffers

static Bool GLLOADER_APIENTRY self_init_glXReleaseBuffersMESA(Display* dpy, GLXDrawable drawable)
{
	glloader_init();
	return glXReleaseBuffersMESA(dpy, drawable);
}

glXReleaseBuffersMESAFUNC glXReleaseBuffersMESA = self_init_glXReleaseBuffersMESA;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_MESA_set_3dfx_mode()
{
	return _GLX_MESA_set_3dfx_mode;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_MESA_set_3dfx_mode()
{
	glloader_init();
	return glloader_GLX_MESA_set_3dfx_mode();
}
glloader_GLX_MESA_set_3dfx_modeFUNC glloader_GLX_MESA_set_3dfx_mode = self_init_glloader_GLX_MESA_set_3dfx_mode;

#ifdef GLX_MESA_set_3dfx_mode

static Bool GLLOADER_APIENTRY self_init_glXSet3DfxModeMESA(int mode)
{
	glloader_init();
	return glXSet3DfxModeMESA(mode);
}

glXSet3DfxModeMESAFUNC glXSet3DfxModeMESA = self_init_glXSet3DfxModeMESA;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_NV_copy_buffer()
{
	return _GLX_NV_copy_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_copy_buffer()
{
	glloader_init();
	return glloader_GLX_NV_copy_buffer();
}
glloader_GLX_NV_copy_bufferFUNC glloader_GLX_NV_copy_buffer = self_init_glloader_GLX_NV_copy_buffer;

#ifdef GLX_NV_copy_buffer

static void GLLOADER_APIENTRY self_init_glXCopyBufferSubDataNV(Display* dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	glloader_init();
	glXCopyBufferSubDataNV(dpy, readCtx, writeCtx, readTarget, writeTarget, readOffset, writeOffset, size);
}
static void GLLOADER_APIENTRY self_init_glXNamedCopyBufferSubDataNV(Display* dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	glloader_init();
	glXNamedCopyBufferSubDataNV(dpy, readCtx, writeCtx, readBuffer, writeBuffer, readOffset, writeOffset, size);
}

glXCopyBufferSubDataNVFUNC glXCopyBufferSubDataNV = self_init_glXCopyBufferSubDataNV;
glXNamedCopyBufferSubDataNVFUNC glXNamedCopyBufferSubDataNV = self_init_glXNamedCopyBufferSubDataNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_NV_copy_image()
{
	return _GLX_NV_copy_image;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_copy_image()
{
	glloader_init();
	return glloader_GLX_NV_copy_image();
}
glloader_GLX_NV_copy_imageFUNC glloader_GLX_NV_copy_image = self_init_glloader_GLX_NV_copy_image;

#ifdef GLX_NV_copy_image

static void GLLOADER_APIENTRY self_init_glXCopyImageSubDataNV(Display* dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth)
{
	glloader_init();
	glXCopyImageSubDataNV(dpy, srcCtx, srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstCtx, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, width, height, depth);
}

glXCopyImageSubDataNVFUNC glXCopyImageSubDataNV = self_init_glXCopyImageSubDataNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_NV_delay_before_swap()
{
	return _GLX_NV_delay_before_swap;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_delay_before_swap()
{
	glloader_init();
	return glloader_GLX_NV_delay_before_swap();
}
glloader_GLX_NV_delay_before_swapFUNC glloader_GLX_NV_delay_before_swap = self_init_glloader_GLX_NV_delay_before_swap;

#ifdef GLX_NV_delay_before_swap

static Bool GLLOADER_APIENTRY self_init_glXDelayBeforeSwapNV(Display* dpy, GLXDrawable drawable, GLfloat seconds)
{
	glloader_init();
	return glXDelayBeforeSwapNV(dpy, drawable, seconds);
}

glXDelayBeforeSwapNVFUNC glXDelayBeforeSwapNV = self_init_glXDelayBeforeSwapNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_NV_float_buffer()
{
	return _GLX_NV_float_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_float_buffer()
{
	glloader_init();
	return glloader_GLX_NV_float_buffer();
}
glloader_GLX_NV_float_bufferFUNC glloader_GLX_NV_float_buffer = self_init_glloader_GLX_NV_float_buffer;

static char GLLOADER_APIENTRY _glloader_GLX_NV_multisample_coverage()
{
	return _GLX_NV_multisample_coverage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_multisample_coverage()
{
	glloader_init();
	return glloader_GLX_NV_multisample_coverage();
}
glloader_GLX_NV_multisample_coverageFUNC glloader_GLX_NV_multisample_coverage = self_init_glloader_GLX_NV_multisample_coverage;

static char GLLOADER_APIENTRY _glloader_GLX_NV_present_video()
{
	return _GLX_NV_present_video;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_present_video()
{
	glloader_init();
	return glloader_GLX_NV_present_video();
}
glloader_GLX_NV_present_videoFUNC glloader_GLX_NV_present_video = self_init_glloader_GLX_NV_present_video;

#ifdef GLX_NV_present_video

static unsigned int* GLLOADER_APIENTRY self_init_glXEnumerateVideoDevicesNV(Display* dpy, int screen, int* nelements)
{
	glloader_init();
	return glXEnumerateVideoDevicesNV(dpy, screen, nelements);
}
static int GLLOADER_APIENTRY self_init_glXBindVideoDeviceNV(Display* dpy, unsigned int video_slot, unsigned int video_device, const int* attrib_list)
{
	glloader_init();
	return glXBindVideoDeviceNV(dpy, video_slot, video_device, attrib_list);
}

glXEnumerateVideoDevicesNVFUNC glXEnumerateVideoDevicesNV = self_init_glXEnumerateVideoDevicesNV;
glXBindVideoDeviceNVFUNC glXBindVideoDeviceNV = self_init_glXBindVideoDeviceNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_NV_swap_group()
{
	return _GLX_NV_swap_group;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_swap_group()
{
	glloader_init();
	return glloader_GLX_NV_swap_group();
}
glloader_GLX_NV_swap_groupFUNC glloader_GLX_NV_swap_group = self_init_glloader_GLX_NV_swap_group;

#ifdef GLX_NV_swap_group

static Bool GLLOADER_APIENTRY self_init_glXJoinSwapGroupNV(Display* dpy, GLXDrawable drawable, GLuint group)
{
	glloader_init();
	return glXJoinSwapGroupNV(dpy, drawable, group);
}
static Bool GLLOADER_APIENTRY self_init_glXBindSwapBarrierNV(Display* dpy, GLuint group, GLuint barrier)
{
	glloader_init();
	return glXBindSwapBarrierNV(dpy, group, barrier);
}
static Bool GLLOADER_APIENTRY self_init_glXQuerySwapGroupNV(Display* dpy, GLXDrawable drawable, GLuint* group, GLuint* barrier)
{
	glloader_init();
	return glXQuerySwapGroupNV(dpy, drawable, group, barrier);
}
static Bool GLLOADER_APIENTRY self_init_glXQueryMaxSwapGroupsNV(Display* dpy, int screen, GLuint* maxGroups, GLuint* maxBarriers)
{
	glloader_init();
	return glXQueryMaxSwapGroupsNV(dpy, screen, maxGroups, maxBarriers);
}
static Bool GLLOADER_APIENTRY self_init_glXQueryFrameCountNV(Display* dpy, int screen, GLuint* count)
{
	glloader_init();
	return glXQueryFrameCountNV(dpy, screen, count);
}
static Bool GLLOADER_APIENTRY self_init_glXResetFrameCountNV(Display* dpy, int screen)
{
	glloader_init();
	return glXResetFrameCountNV(dpy, screen);
}

glXJoinSwapGroupNVFUNC glXJoinSwapGroupNV = self_init_glXJoinSwapGroupNV;
glXBindSwapBarrierNVFUNC glXBindSwapBarrierNV = self_init_glXBindSwapBarrierNV;
glXQuerySwapGroupNVFUNC glXQuerySwapGroupNV = self_init_glXQuerySwapGroupNV;
glXQueryMaxSwapGroupsNVFUNC glXQueryMaxSwapGroupsNV = self_init_glXQueryMaxSwapGroupsNV;
glXQueryFrameCountNVFUNC glXQueryFrameCountNV = self_init_glXQueryFrameCountNV;
glXResetFrameCountNVFUNC glXResetFrameCountNV = self_init_glXResetFrameCountNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_NV_video_capture()
{
	return _GLX_NV_video_capture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_video_capture()
{
	glloader_init();
	return glloader_GLX_NV_video_capture();
}
glloader_GLX_NV_video_captureFUNC glloader_GLX_NV_video_capture = self_init_glloader_GLX_NV_video_capture;

#ifdef GLX_NV_video_capture

static int GLLOADER_APIENTRY self_init_glXBindVideoCaptureDeviceNV(Display* dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device)
{
	glloader_init();
	return glXBindVideoCaptureDeviceNV(dpy, video_capture_slot, device);
}
static GLXVideoCaptureDeviceNV* GLLOADER_APIENTRY self_init_glXEnumerateVideoCaptureDevicesNV(Display* dpy, int screen, int* nelements)
{
	glloader_init();
	return glXEnumerateVideoCaptureDevicesNV(dpy, screen, nelements);
}
static void GLLOADER_APIENTRY self_init_glXLockVideoCaptureDeviceNV(Display* dpy, GLXVideoCaptureDeviceNV device)
{
	glloader_init();
	glXLockVideoCaptureDeviceNV(dpy, device);
}
static int GLLOADER_APIENTRY self_init_glXQueryVideoCaptureDeviceNV(Display* dpy, GLXVideoCaptureDeviceNV device, int attribute, int* value)
{
	glloader_init();
	return glXQueryVideoCaptureDeviceNV(dpy, device, attribute, value);
}
static void GLLOADER_APIENTRY self_init_glXReleaseVideoCaptureDeviceNV(Display* dpy, GLXVideoCaptureDeviceNV device)
{
	glloader_init();
	glXReleaseVideoCaptureDeviceNV(dpy, device);
}

glXBindVideoCaptureDeviceNVFUNC glXBindVideoCaptureDeviceNV = self_init_glXBindVideoCaptureDeviceNV;
glXEnumerateVideoCaptureDevicesNVFUNC glXEnumerateVideoCaptureDevicesNV = self_init_glXEnumerateVideoCaptureDevicesNV;
glXLockVideoCaptureDeviceNVFUNC glXLockVideoCaptureDeviceNV = self_init_glXLockVideoCaptureDeviceNV;
glXQueryVideoCaptureDeviceNVFUNC glXQueryVideoCaptureDeviceNV = self_init_glXQueryVideoCaptureDeviceNV;
glXReleaseVideoCaptureDeviceNVFUNC glXReleaseVideoCaptureDeviceNV = self_init_glXReleaseVideoCaptureDeviceNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_NV_video_output()
{
	return _GLX_NV_video_output;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_NV_video_output()
{
	glloader_init();
	return glloader_GLX_NV_video_output();
}
glloader_GLX_NV_video_outputFUNC glloader_GLX_NV_video_output = self_init_glloader_GLX_NV_video_output;

#ifdef GLX_NV_video_output

static int GLLOADER_APIENTRY self_init_glXGetVideoDeviceNV(Display* dpy, int screen, int numVideoDevices, GLXVideoDeviceNV* pVideoDevice)
{
	glloader_init();
	return glXGetVideoDeviceNV(dpy, screen, numVideoDevices, pVideoDevice);
}
static int GLLOADER_APIENTRY self_init_glXReleaseVideoDeviceNV(Display* dpy, int screen, GLXVideoDeviceNV VideoDevice)
{
	glloader_init();
	return glXReleaseVideoDeviceNV(dpy, screen, VideoDevice);
}
static int GLLOADER_APIENTRY self_init_glXBindVideoImageNV(Display* dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer)
{
	glloader_init();
	return glXBindVideoImageNV(dpy, VideoDevice, pbuf, iVideoBuffer);
}
static int GLLOADER_APIENTRY self_init_glXReleaseVideoImageNV(Display* dpy, GLXPbuffer pbuf)
{
	glloader_init();
	return glXReleaseVideoImageNV(dpy, pbuf);
}
static int GLLOADER_APIENTRY self_init_glXSendPbufferToVideoNV(Display* dpy, GLXPbuffer pbuf, int iBufferType, unsigned long* pulCounterPbuffer, GLboolean bBlock)
{
	glloader_init();
	return glXSendPbufferToVideoNV(dpy, pbuf, iBufferType, pulCounterPbuffer, bBlock);
}
static int GLLOADER_APIENTRY self_init_glXGetVideoInfoNV(Display* dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long* pulCounterOutputPbuffer, unsigned long* pulCounterOutputVideo)
{
	glloader_init();
	return glXGetVideoInfoNV(dpy, screen, VideoDevice, pulCounterOutputPbuffer, pulCounterOutputVideo);
}

glXGetVideoDeviceNVFUNC glXGetVideoDeviceNV = self_init_glXGetVideoDeviceNV;
glXReleaseVideoDeviceNVFUNC glXReleaseVideoDeviceNV = self_init_glXReleaseVideoDeviceNV;
glXBindVideoImageNVFUNC glXBindVideoImageNV = self_init_glXBindVideoImageNV;
glXReleaseVideoImageNVFUNC glXReleaseVideoImageNV = self_init_glXReleaseVideoImageNV;
glXSendPbufferToVideoNVFUNC glXSendPbufferToVideoNV = self_init_glXSendPbufferToVideoNV;
glXGetVideoInfoNVFUNC glXGetVideoInfoNV = self_init_glXGetVideoInfoNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_OML_swap_method()
{
	return _GLX_OML_swap_method;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_OML_swap_method()
{
	glloader_init();
	return glloader_GLX_OML_swap_method();
}
glloader_GLX_OML_swap_methodFUNC glloader_GLX_OML_swap_method = self_init_glloader_GLX_OML_swap_method;

static char GLLOADER_APIENTRY _glloader_GLX_OML_sync_control()
{
	return _GLX_OML_sync_control;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_OML_sync_control()
{
	glloader_init();
	return glloader_GLX_OML_sync_control();
}
glloader_GLX_OML_sync_controlFUNC glloader_GLX_OML_sync_control = self_init_glloader_GLX_OML_sync_control;

#ifdef GLX_OML_sync_control

static Bool GLLOADER_APIENTRY self_init_glXGetSyncValuesOML(Display* dpy, GLXDrawable drawable, int64_t* ust, int64_t* msc, int64_t* sbc)
{
	glloader_init();
	return glXGetSyncValuesOML(dpy, drawable, ust, msc, sbc);
}
static Bool GLLOADER_APIENTRY self_init_glXGetMscRateOML(Display* dpy, GLXDrawable drawable, int32_t* numerator, int32_t* denominator)
{
	glloader_init();
	return glXGetMscRateOML(dpy, drawable, numerator, denominator);
}
static int64_t GLLOADER_APIENTRY self_init_glXSwapBuffersMscOML(Display* dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder)
{
	glloader_init();
	return glXSwapBuffersMscOML(dpy, drawable, target_msc, divisor, remainder);
}
static Bool GLLOADER_APIENTRY self_init_glXWaitForMscOML(Display* dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t* ust, int64_t* msc, int64_t* sbc)
{
	glloader_init();
	return glXWaitForMscOML(dpy, drawable, target_msc, divisor, remainder, ust, msc, sbc);
}
static Bool GLLOADER_APIENTRY self_init_glXWaitForSbcOML(Display* dpy, GLXDrawable drawable, int64_t target_sbc, int64_t* ust, int64_t* msc, int64_t* sbc)
{
	glloader_init();
	return glXWaitForSbcOML(dpy, drawable, target_sbc, ust, msc, sbc);
}

glXGetSyncValuesOMLFUNC glXGetSyncValuesOML = self_init_glXGetSyncValuesOML;
glXGetMscRateOMLFUNC glXGetMscRateOML = self_init_glXGetMscRateOML;
glXSwapBuffersMscOMLFUNC glXSwapBuffersMscOML = self_init_glXSwapBuffersMscOML;
glXWaitForMscOMLFUNC glXWaitForMscOML = self_init_glXWaitForMscOML;
glXWaitForSbcOMLFUNC glXWaitForSbcOML = self_init_glXWaitForSbcOML;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIS_blended_overlay()
{
	return _GLX_SGIS_blended_overlay;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIS_blended_overlay()
{
	glloader_init();
	return glloader_GLX_SGIS_blended_overlay();
}
glloader_GLX_SGIS_blended_overlayFUNC glloader_GLX_SGIS_blended_overlay = self_init_glloader_GLX_SGIS_blended_overlay;

static char GLLOADER_APIENTRY _glloader_GLX_SGIS_multisample()
{
	return _GLX_SGIS_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIS_multisample()
{
	glloader_init();
	return glloader_GLX_SGIS_multisample();
}
glloader_GLX_SGIS_multisampleFUNC glloader_GLX_SGIS_multisample = self_init_glloader_GLX_SGIS_multisample;

static char GLLOADER_APIENTRY _glloader_GLX_SGIS_shared_multisample()
{
	return _GLX_SGIS_shared_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIS_shared_multisample()
{
	glloader_init();
	return glloader_GLX_SGIS_shared_multisample();
}
glloader_GLX_SGIS_shared_multisampleFUNC glloader_GLX_SGIS_shared_multisample = self_init_glloader_GLX_SGIS_shared_multisample;

#ifdef _DM_BUFFER_H_

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_dmbuffer()
{
	return _GLX_SGIX_dmbuffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_dmbuffer()
{
	glloader_init();
	return glloader_GLX_SGIX_dmbuffer();
}
glloader_GLX_SGIX_dmbufferFUNC glloader_GLX_SGIX_dmbuffer = self_init_glloader_GLX_SGIX_dmbuffer;

#ifdef GLX_SGIX_dmbuffer

static Bool GLLOADER_APIENTRY self_init_glXAssociateDMPbufferSGIX(Display* dpy, GLXPbufferSGIX pbuffer, DMparams* params, DMbuffer dmbuffer)
{
	glloader_init();
	return glXAssociateDMPbufferSGIX(dpy, pbuffer, params, dmbuffer);
}

glXAssociateDMPbufferSGIXFUNC glXAssociateDMPbufferSGIX = self_init_glXAssociateDMPbufferSGIX;

#endif

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_fbconfig()
{
	return _GLX_SGIX_fbconfig;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_fbconfig()
{
	glloader_init();
	return glloader_GLX_SGIX_fbconfig();
}
glloader_GLX_SGIX_fbconfigFUNC glloader_GLX_SGIX_fbconfig = self_init_glloader_GLX_SGIX_fbconfig;

#ifdef GLX_SGIX_fbconfig

static int GLLOADER_APIENTRY self_init_glXGetFBConfigAttribSGIX(Display* dpy, GLXFBConfigSGIX config, int attribute, int* value)
{
	glloader_init();
	return glXGetFBConfigAttribSGIX(dpy, config, attribute, value);
}
static GLXFBConfigSGIX* GLLOADER_APIENTRY self_init_glXChooseFBConfigSGIX(Display* dpy, int screen, int* attrib_list, int* nelements)
{
	glloader_init();
	return glXChooseFBConfigSGIX(dpy, screen, attrib_list, nelements);
}
static GLXPixmap GLLOADER_APIENTRY self_init_glXCreateGLXPixmapWithConfigSGIX(Display* dpy, GLXFBConfigSGIX config, Pixmap pixmap)
{
	glloader_init();
	return glXCreateGLXPixmapWithConfigSGIX(dpy, config, pixmap);
}
static GLXContext GLLOADER_APIENTRY self_init_glXCreateContextWithConfigSGIX(Display* dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct)
{
	glloader_init();
	return glXCreateContextWithConfigSGIX(dpy, config, render_type, share_list, direct);
}
static XVisualInfo* GLLOADER_APIENTRY self_init_glXGetVisualFromFBConfigSGIX(Display* dpy, GLXFBConfigSGIX config)
{
	glloader_init();
	return glXGetVisualFromFBConfigSGIX(dpy, config);
}
static GLXFBConfigSGIX GLLOADER_APIENTRY self_init_glXGetFBConfigFromVisualSGIX(Display* dpy, XVisualInfo* vis)
{
	glloader_init();
	return glXGetFBConfigFromVisualSGIX(dpy, vis);
}

glXGetFBConfigAttribSGIXFUNC glXGetFBConfigAttribSGIX = self_init_glXGetFBConfigAttribSGIX;
glXChooseFBConfigSGIXFUNC glXChooseFBConfigSGIX = self_init_glXChooseFBConfigSGIX;
glXCreateGLXPixmapWithConfigSGIXFUNC glXCreateGLXPixmapWithConfigSGIX = self_init_glXCreateGLXPixmapWithConfigSGIX;
glXCreateContextWithConfigSGIXFUNC glXCreateContextWithConfigSGIX = self_init_glXCreateContextWithConfigSGIX;
glXGetVisualFromFBConfigSGIXFUNC glXGetVisualFromFBConfigSGIX = self_init_glXGetVisualFromFBConfigSGIX;
glXGetFBConfigFromVisualSGIXFUNC glXGetFBConfigFromVisualSGIX = self_init_glXGetFBConfigFromVisualSGIX;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_hyperpipe()
{
	return _GLX_SGIX_hyperpipe;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_hyperpipe()
{
	glloader_init();
	return glloader_GLX_SGIX_hyperpipe();
}
glloader_GLX_SGIX_hyperpipeFUNC glloader_GLX_SGIX_hyperpipe = self_init_glloader_GLX_SGIX_hyperpipe;

#ifdef GLX_SGIX_hyperpipe

static GLXHyperpipeNetworkSGIX* GLLOADER_APIENTRY self_init_glXQueryHyperpipeNetworkSGIX(Display* dpy, int* npipes)
{
	glloader_init();
	return glXQueryHyperpipeNetworkSGIX(dpy, npipes);
}
static int GLLOADER_APIENTRY self_init_glXHyperpipeConfigSGIX(Display* dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX* cfg, int* hpId)
{
	glloader_init();
	return glXHyperpipeConfigSGIX(dpy, networkId, npipes, cfg, hpId);
}
static GLXHyperpipeConfigSGIX* GLLOADER_APIENTRY self_init_glXQueryHyperpipeConfigSGIX(Display* dpy, int hpId, int* npipes)
{
	glloader_init();
	return glXQueryHyperpipeConfigSGIX(dpy, hpId, npipes);
}
static int GLLOADER_APIENTRY self_init_glXDestroyHyperpipeConfigSGIX(Display* dpy, int hpId)
{
	glloader_init();
	return glXDestroyHyperpipeConfigSGIX(dpy, hpId);
}
static int GLLOADER_APIENTRY self_init_glXBindHyperpipeSGIX(Display* dpy, int hpId)
{
	glloader_init();
	return glXBindHyperpipeSGIX(dpy, hpId);
}
static int GLLOADER_APIENTRY self_init_glXQueryHyperpipeBestAttribSGIX(Display* dpy, int timeSlice, int attrib, int size, void* attribList, void* returnAttribList)
{
	glloader_init();
	return glXQueryHyperpipeBestAttribSGIX(dpy, timeSlice, attrib, size, attribList, returnAttribList);
}
static int GLLOADER_APIENTRY self_init_glXHyperpipeAttribSGIX(Display* dpy, int timeSlice, int attrib, int size, void* attribList)
{
	glloader_init();
	return glXHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, attribList);
}
static int GLLOADER_APIENTRY self_init_glXQueryHyperpipeAttribSGIX(Display* dpy, int timeSlice, int attrib, int size, void* returnAttribList)
{
	glloader_init();
	return glXQueryHyperpipeAttribSGIX(dpy, timeSlice, attrib, size, returnAttribList);
}

glXQueryHyperpipeNetworkSGIXFUNC glXQueryHyperpipeNetworkSGIX = self_init_glXQueryHyperpipeNetworkSGIX;
glXHyperpipeConfigSGIXFUNC glXHyperpipeConfigSGIX = self_init_glXHyperpipeConfigSGIX;
glXQueryHyperpipeConfigSGIXFUNC glXQueryHyperpipeConfigSGIX = self_init_glXQueryHyperpipeConfigSGIX;
glXDestroyHyperpipeConfigSGIXFUNC glXDestroyHyperpipeConfigSGIX = self_init_glXDestroyHyperpipeConfigSGIX;
glXBindHyperpipeSGIXFUNC glXBindHyperpipeSGIX = self_init_glXBindHyperpipeSGIX;
glXQueryHyperpipeBestAttribSGIXFUNC glXQueryHyperpipeBestAttribSGIX = self_init_glXQueryHyperpipeBestAttribSGIX;
glXHyperpipeAttribSGIXFUNC glXHyperpipeAttribSGIX = self_init_glXHyperpipeAttribSGIX;
glXQueryHyperpipeAttribSGIXFUNC glXQueryHyperpipeAttribSGIX = self_init_glXQueryHyperpipeAttribSGIX;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_pbuffer()
{
	return _GLX_SGIX_pbuffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_pbuffer()
{
	glloader_init();
	return glloader_GLX_SGIX_pbuffer();
}
glloader_GLX_SGIX_pbufferFUNC glloader_GLX_SGIX_pbuffer = self_init_glloader_GLX_SGIX_pbuffer;

#ifdef GLX_SGIX_pbuffer

static GLXPbufferSGIX GLLOADER_APIENTRY self_init_glXCreateGLXPbufferSGIX(Display* dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int* attrib_list)
{
	glloader_init();
	return glXCreateGLXPbufferSGIX(dpy, config, width, height, attrib_list);
}
static void GLLOADER_APIENTRY self_init_glXDestroyGLXPbufferSGIX(Display* dpy, GLXPbufferSGIX pbuf)
{
	glloader_init();
	glXDestroyGLXPbufferSGIX(dpy, pbuf);
}
static int GLLOADER_APIENTRY self_init_glXQueryGLXPbufferSGIX(Display* dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int* value)
{
	glloader_init();
	return glXQueryGLXPbufferSGIX(dpy, pbuf, attribute, value);
}
static void GLLOADER_APIENTRY self_init_glXSelectEventSGIX(Display* dpy, GLXDrawable drawable, unsigned long mask)
{
	glloader_init();
	glXSelectEventSGIX(dpy, drawable, mask);
}
static void GLLOADER_APIENTRY self_init_glXGetSelectedEventSGIX(Display* dpy, GLXDrawable drawable, unsigned long* mask)
{
	glloader_init();
	glXGetSelectedEventSGIX(dpy, drawable, mask);
}

glXCreateGLXPbufferSGIXFUNC glXCreateGLXPbufferSGIX = self_init_glXCreateGLXPbufferSGIX;
glXDestroyGLXPbufferSGIXFUNC glXDestroyGLXPbufferSGIX = self_init_glXDestroyGLXPbufferSGIX;
glXQueryGLXPbufferSGIXFUNC glXQueryGLXPbufferSGIX = self_init_glXQueryGLXPbufferSGIX;
glXSelectEventSGIXFUNC glXSelectEventSGIX = self_init_glXSelectEventSGIX;
glXGetSelectedEventSGIXFUNC glXGetSelectedEventSGIX = self_init_glXGetSelectedEventSGIX;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_swap_barrier()
{
	return _GLX_SGIX_swap_barrier;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_swap_barrier()
{
	glloader_init();
	return glloader_GLX_SGIX_swap_barrier();
}
glloader_GLX_SGIX_swap_barrierFUNC glloader_GLX_SGIX_swap_barrier = self_init_glloader_GLX_SGIX_swap_barrier;

#ifdef GLX_SGIX_swap_barrier

static void GLLOADER_APIENTRY self_init_glXBindSwapBarrierSGIX(Display* dpy, GLXDrawable drawable, int barrier)
{
	glloader_init();
	glXBindSwapBarrierSGIX(dpy, drawable, barrier);
}
static Bool GLLOADER_APIENTRY self_init_glXQueryMaxSwapBarriersSGIX(Display* dpy, int screen, int* max)
{
	glloader_init();
	return glXQueryMaxSwapBarriersSGIX(dpy, screen, max);
}

glXBindSwapBarrierSGIXFUNC glXBindSwapBarrierSGIX = self_init_glXBindSwapBarrierSGIX;
glXQueryMaxSwapBarriersSGIXFUNC glXQueryMaxSwapBarriersSGIX = self_init_glXQueryMaxSwapBarriersSGIX;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_swap_group()
{
	return _GLX_SGIX_swap_group;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_swap_group()
{
	glloader_init();
	return glloader_GLX_SGIX_swap_group();
}
glloader_GLX_SGIX_swap_groupFUNC glloader_GLX_SGIX_swap_group = self_init_glloader_GLX_SGIX_swap_group;

#ifdef GLX_SGIX_swap_group

static void GLLOADER_APIENTRY self_init_glXJoinSwapGroupSGIX(Display* dpy, GLXDrawable drawable, GLXDrawable member)
{
	glloader_init();
	glXJoinSwapGroupSGIX(dpy, drawable, member);
}

glXJoinSwapGroupSGIXFUNC glXJoinSwapGroupSGIX = self_init_glXJoinSwapGroupSGIX;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_video_resize()
{
	return _GLX_SGIX_video_resize;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_video_resize()
{
	glloader_init();
	return glloader_GLX_SGIX_video_resize();
}
glloader_GLX_SGIX_video_resizeFUNC glloader_GLX_SGIX_video_resize = self_init_glloader_GLX_SGIX_video_resize;

#ifdef GLX_SGIX_video_resize

static int GLLOADER_APIENTRY self_init_glXBindChannelToWindowSGIX(Display* display, int screen, int channel, Window window)
{
	glloader_init();
	return glXBindChannelToWindowSGIX(display, screen, channel, window);
}
static int GLLOADER_APIENTRY self_init_glXChannelRectSGIX(Display* display, int screen, int channel, int x, int y, int w, int h)
{
	glloader_init();
	return glXChannelRectSGIX(display, screen, channel, x, y, w, h);
}
static int GLLOADER_APIENTRY self_init_glXQueryChannelRectSGIX(Display* display, int screen, int channel, int* dx, int* dy, int* dw, int* dh)
{
	glloader_init();
	return glXQueryChannelRectSGIX(display, screen, channel, dx, dy, dw, dh);
}
static int GLLOADER_APIENTRY self_init_glXQueryChannelDeltasSGIX(Display* display, int screen, int channel, int* x, int* y, int* w, int* h)
{
	glloader_init();
	return glXQueryChannelDeltasSGIX(display, screen, channel, x, y, w, h);
}
static int GLLOADER_APIENTRY self_init_glXChannelRectSyncSGIX(Display* display, int screen, int channel, GLenum synctype)
{
	glloader_init();
	return glXChannelRectSyncSGIX(display, screen, channel, synctype);
}

glXBindChannelToWindowSGIXFUNC glXBindChannelToWindowSGIX = self_init_glXBindChannelToWindowSGIX;
glXChannelRectSGIXFUNC glXChannelRectSGIX = self_init_glXChannelRectSGIX;
glXQueryChannelRectSGIXFUNC glXQueryChannelRectSGIX = self_init_glXQueryChannelRectSGIX;
glXQueryChannelDeltasSGIXFUNC glXQueryChannelDeltasSGIX = self_init_glXQueryChannelDeltasSGIX;
glXChannelRectSyncSGIXFUNC glXChannelRectSyncSGIX = self_init_glXChannelRectSyncSGIX;

#endif

#ifdef _VL_H

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_video_source()
{
	return _GLX_SGIX_video_source;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_video_source()
{
	glloader_init();
	return glloader_GLX_SGIX_video_source();
}
glloader_GLX_SGIX_video_sourceFUNC glloader_GLX_SGIX_video_source = self_init_glloader_GLX_SGIX_video_source;

#ifdef GLX_SGIX_video_source

static GLXVideoSourceSGIX GLLOADER_APIENTRY self_init_glXCreateGLXVideoSourceSGIX(Display* display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode)
{
	glloader_init();
	return glXCreateGLXVideoSourceSGIX(display, screen, server, path, nodeClass, drainNode);
}
static void GLLOADER_APIENTRY self_init_glXDestroyGLXVideoSourceSGIX(Display* dpy, GLXVideoSourceSGIX glxvideosource)
{
	glloader_init();
	glXDestroyGLXVideoSourceSGIX(dpy, glxvideosource);
}

glXCreateGLXVideoSourceSGIXFUNC glXCreateGLXVideoSourceSGIX = self_init_glXCreateGLXVideoSourceSGIX;
glXDestroyGLXVideoSourceSGIXFUNC glXDestroyGLXVideoSourceSGIX = self_init_glXDestroyGLXVideoSourceSGIX;

#endif

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGIX_visual_select_group()
{
	return _GLX_SGIX_visual_select_group;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGIX_visual_select_group()
{
	glloader_init();
	return glloader_GLX_SGIX_visual_select_group();
}
glloader_GLX_SGIX_visual_select_groupFUNC glloader_GLX_SGIX_visual_select_group = self_init_glloader_GLX_SGIX_visual_select_group;

static char GLLOADER_APIENTRY _glloader_GLX_SGI_cushion()
{
	return _GLX_SGI_cushion;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGI_cushion()
{
	glloader_init();
	return glloader_GLX_SGI_cushion();
}
glloader_GLX_SGI_cushionFUNC glloader_GLX_SGI_cushion = self_init_glloader_GLX_SGI_cushion;

#ifdef GLX_SGI_cushion

static void GLLOADER_APIENTRY self_init_glXCushionSGI(Display* dpy, Window window, float cushion)
{
	glloader_init();
	glXCushionSGI(dpy, window, cushion);
}

glXCushionSGIFUNC glXCushionSGI = self_init_glXCushionSGI;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGI_make_current_read()
{
	return _GLX_SGI_make_current_read;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGI_make_current_read()
{
	glloader_init();
	return glloader_GLX_SGI_make_current_read();
}
glloader_GLX_SGI_make_current_readFUNC glloader_GLX_SGI_make_current_read = self_init_glloader_GLX_SGI_make_current_read;

#ifdef GLX_SGI_make_current_read

static Bool GLLOADER_APIENTRY self_init_glXMakeCurrentReadSGI(Display* dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
{
	glloader_init();
	return glXMakeCurrentReadSGI(dpy, draw, read, ctx);
}
static GLXDrawable GLLOADER_APIENTRY self_init_glXGetCurrentReadDrawableSGI()
{
	glloader_init();
	return glXGetCurrentReadDrawableSGI();
}

glXMakeCurrentReadSGIFUNC glXMakeCurrentReadSGI = self_init_glXMakeCurrentReadSGI;
glXGetCurrentReadDrawableSGIFUNC glXGetCurrentReadDrawableSGI = self_init_glXGetCurrentReadDrawableSGI;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGI_swap_control()
{
	return _GLX_SGI_swap_control;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGI_swap_control()
{
	glloader_init();
	return glloader_GLX_SGI_swap_control();
}
glloader_GLX_SGI_swap_controlFUNC glloader_GLX_SGI_swap_control = self_init_glloader_GLX_SGI_swap_control;

#ifdef GLX_SGI_swap_control

static int GLLOADER_APIENTRY self_init_glXSwapIntervalSGI(int interval)
{
	glloader_init();
	return glXSwapIntervalSGI(interval);
}

glXSwapIntervalSGIFUNC glXSwapIntervalSGI = self_init_glXSwapIntervalSGI;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SGI_video_sync()
{
	return _GLX_SGI_video_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SGI_video_sync()
{
	glloader_init();
	return glloader_GLX_SGI_video_sync();
}
glloader_GLX_SGI_video_syncFUNC glloader_GLX_SGI_video_sync = self_init_glloader_GLX_SGI_video_sync;

#ifdef GLX_SGI_video_sync

static int GLLOADER_APIENTRY self_init_glXGetVideoSyncSGI(unsigned int* count)
{
	glloader_init();
	return glXGetVideoSyncSGI(count);
}
static int GLLOADER_APIENTRY self_init_glXWaitVideoSyncSGI(int divisor, int remainder, unsigned int* count)
{
	glloader_init();
	return glXWaitVideoSyncSGI(divisor, remainder, count);
}

glXGetVideoSyncSGIFUNC glXGetVideoSyncSGI = self_init_glXGetVideoSyncSGI;
glXWaitVideoSyncSGIFUNC glXWaitVideoSyncSGI = self_init_glXWaitVideoSyncSGI;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_SUN_get_transparent_index()
{
	return _GLX_SUN_get_transparent_index;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_SUN_get_transparent_index()
{
	glloader_init();
	return glloader_GLX_SUN_get_transparent_index();
}
glloader_GLX_SUN_get_transparent_indexFUNC glloader_GLX_SUN_get_transparent_index = self_init_glloader_GLX_SUN_get_transparent_index;

#ifdef GLX_SUN_get_transparent_index

static Status GLLOADER_APIENTRY self_init_glXGetTransparentIndexSUN(Display* dpy, Window overlay, Window underlay, long* pTransparentIndex)
{
	glloader_init();
	return glXGetTransparentIndexSUN(dpy, overlay, underlay, pTransparentIndex);
}

glXGetTransparentIndexSUNFUNC glXGetTransparentIndexSUN = self_init_glXGetTransparentIndexSUN;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_VERSION_1_0()
{
	return _GLX_VERSION_1_0;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_VERSION_1_0()
{
	glloader_init();
	return glloader_GLX_VERSION_1_0();
}
glloader_GLX_VERSION_1_0FUNC glloader_GLX_VERSION_1_0 = self_init_glloader_GLX_VERSION_1_0;

#ifdef GLX_VERSION_1_0

static Bool GLLOADER_APIENTRY self_init_glXQueryExtension(Display* dpy, int* errorBase, int* eventBase)
{
	LOAD_FUNC1(glXQueryExtension);
	return glXQueryExtension(dpy, errorBase, eventBase);
}
static Bool GLLOADER_APIENTRY self_init_glXQueryVersion(Display* dpy, int* major, int* minor)
{
	LOAD_FUNC1(glXQueryVersion);
	return glXQueryVersion(dpy, major, minor);
}
static int GLLOADER_APIENTRY self_init_glXGetConfig(Display* dpy, XVisualInfo* vis, int attrib, int* value)
{
	LOAD_FUNC1(glXGetConfig);
	return glXGetConfig(dpy, vis, attrib, value);
}
static XVisualInfo* GLLOADER_APIENTRY self_init_glXChooseVisual(Display* dpy, int screen, int* attribList)
{
	LOAD_FUNC1(glXChooseVisual);
	return glXChooseVisual(dpy, screen, attribList);
}
static GLXPixmap GLLOADER_APIENTRY self_init_glXCreateGLXPixmap(Display* dpy, XVisualInfo* vis, Pixmap pixmap)
{
	LOAD_FUNC1(glXCreateGLXPixmap);
	return glXCreateGLXPixmap(dpy, vis, pixmap);
}
static void GLLOADER_APIENTRY self_init_glXDestroyGLXPixmap(Display* dpy, GLXPixmap pix)
{
	LOAD_FUNC1(glXDestroyGLXPixmap);
	glXDestroyGLXPixmap(dpy, pix);
}
static GLXContext GLLOADER_APIENTRY self_init_glXCreateContext(Display* dpy, XVisualInfo* vis, GLXContext shareList, Bool direct)
{
	LOAD_FUNC1(glXCreateContext);
	return glXCreateContext(dpy, vis, shareList, direct);
}
static void GLLOADER_APIENTRY self_init_glXDestroyContext(Display* dpy, GLXContext ctx)
{
	LOAD_FUNC1(glXDestroyContext);
	glXDestroyContext(dpy, ctx);
}
static Bool GLLOADER_APIENTRY self_init_glXIsDirect(Display* dpy, GLXContext ctx)
{
	LOAD_FUNC1(glXIsDirect);
	return glXIsDirect(dpy, ctx);
}
static void GLLOADER_APIENTRY self_init_glXCopyContext(Display* dpy, GLXContext src, GLXContext dst, GLuint mask)
{
	LOAD_FUNC1(glXCopyContext);
	glXCopyContext(dpy, src, dst, mask);
}
static Bool GLLOADER_APIENTRY self_init_glXMakeCurrent(Display* dpy, GLXDrawable drawable, GLXContext ctx)
{
	LOAD_FUNC1(glXMakeCurrent);
	return glXMakeCurrent(dpy, drawable, ctx);
}
static GLXContext GLLOADER_APIENTRY self_init_glXGetCurrentContext()
{
	LOAD_FUNC1(glXGetCurrentContext);
	return glXGetCurrentContext();
}
static GLXDrawable GLLOADER_APIENTRY self_init_glXGetCurrentDrawable()
{
	LOAD_FUNC1(glXGetCurrentDrawable);
	return glXGetCurrentDrawable();
}
static void GLLOADER_APIENTRY self_init_glXWaitGL()
{
	LOAD_FUNC1(glXWaitGL);
	glXWaitGL();
}
static void GLLOADER_APIENTRY self_init_glXWaitX()
{
	LOAD_FUNC1(glXWaitX);
	glXWaitX();
}
static void GLLOADER_APIENTRY self_init_glXSwapBuffers(Display* dpy, GLXDrawable drawable)
{
	LOAD_FUNC1(glXSwapBuffers);
	glXSwapBuffers(dpy, drawable);
}
static void GLLOADER_APIENTRY self_init_glXUseXFont(Font font, int first, int count, int listBase)
{
	LOAD_FUNC1(glXUseXFont);
	glXUseXFont(font, first, count, listBase);
}

glXQueryExtensionFUNC glXQueryExtension = self_init_glXQueryExtension;
glXQueryVersionFUNC glXQueryVersion = self_init_glXQueryVersion;
glXGetConfigFUNC glXGetConfig = self_init_glXGetConfig;
glXChooseVisualFUNC glXChooseVisual = self_init_glXChooseVisual;
glXCreateGLXPixmapFUNC glXCreateGLXPixmap = self_init_glXCreateGLXPixmap;
glXDestroyGLXPixmapFUNC glXDestroyGLXPixmap = self_init_glXDestroyGLXPixmap;
glXCreateContextFUNC glXCreateContext = self_init_glXCreateContext;
glXDestroyContextFUNC glXDestroyContext = self_init_glXDestroyContext;
glXIsDirectFUNC glXIsDirect = self_init_glXIsDirect;
glXCopyContextFUNC glXCopyContext = self_init_glXCopyContext;
glXMakeCurrentFUNC glXMakeCurrent = self_init_glXMakeCurrent;
glXGetCurrentContextFUNC glXGetCurrentContext = self_init_glXGetCurrentContext;
glXGetCurrentDrawableFUNC glXGetCurrentDrawable = self_init_glXGetCurrentDrawable;
glXWaitGLFUNC glXWaitGL = self_init_glXWaitGL;
glXWaitXFUNC glXWaitX = self_init_glXWaitX;
glXSwapBuffersFUNC glXSwapBuffers = self_init_glXSwapBuffers;
glXUseXFontFUNC glXUseXFont = self_init_glXUseXFont;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_VERSION_1_1()
{
	return _GLX_VERSION_1_1;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_VERSION_1_1()
{
	glloader_init();
	return glloader_GLX_VERSION_1_1();
}
glloader_GLX_VERSION_1_1FUNC glloader_GLX_VERSION_1_1 = self_init_glloader_GLX_VERSION_1_1;

#ifdef GLX_VERSION_1_1

static const char* GLLOADER_APIENTRY self_init_glXQueryExtensionsString(Display* dpy, int screen)
{
	LOAD_FUNC1(glXQueryExtensionsString);
	return glXQueryExtensionsString(dpy, screen);
}
static const char* GLLOADER_APIENTRY self_init_glXGetClientString(Display* dpy, int name)
{
	LOAD_FUNC1(glXGetClientString);
	return glXGetClientString(dpy, name);
}
static const char* GLLOADER_APIENTRY self_init_glXQueryServerString(Display* dpy, int screen, int name)
{
	LOAD_FUNC1(glXQueryServerString);
	return glXQueryServerString(dpy, screen, name);
}

glXQueryExtensionsStringFUNC glXQueryExtensionsString = self_init_glXQueryExtensionsString;
glXGetClientStringFUNC glXGetClientString = self_init_glXGetClientString;
glXQueryServerStringFUNC glXQueryServerString = self_init_glXQueryServerString;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_VERSION_1_2()
{
	return _GLX_VERSION_1_2;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_VERSION_1_2()
{
	glloader_init();
	return glloader_GLX_VERSION_1_2();
}
glloader_GLX_VERSION_1_2FUNC glloader_GLX_VERSION_1_2 = self_init_glloader_GLX_VERSION_1_2;

#ifdef GLX_VERSION_1_2

static Display* GLLOADER_APIENTRY self_init_glXGetCurrentDisplay()
{
	glloader_init();
	return glXGetCurrentDisplay();
}

glXGetCurrentDisplayFUNC glXGetCurrentDisplay = self_init_glXGetCurrentDisplay;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_VERSION_1_3()
{
	return _GLX_VERSION_1_3;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_VERSION_1_3()
{
	glloader_init();
	return glloader_GLX_VERSION_1_3();
}
glloader_GLX_VERSION_1_3FUNC glloader_GLX_VERSION_1_3 = self_init_glloader_GLX_VERSION_1_3;

#ifdef GLX_VERSION_1_3

static GLXFBConfig* GLLOADER_APIENTRY self_init_glXGetFBConfigs(Display* dpy, int screen, int* nelements)
{
	glloader_init();
	return glXGetFBConfigs(dpy, screen, nelements);
}
static GLXFBConfig* GLLOADER_APIENTRY self_init_glXChooseFBConfig(Display* dpy, int screen, const int* attrib_list, int* nelements)
{
	glloader_init();
	return glXChooseFBConfig(dpy, screen, attrib_list, nelements);
}
static int GLLOADER_APIENTRY self_init_glXGetFBConfigAttrib(Display* dpy, GLXFBConfig config, int attribute, int* value)
{
	glloader_init();
	return glXGetFBConfigAttrib(dpy, config, attribute, value);
}
static XVisualInfo* GLLOADER_APIENTRY self_init_glXGetVisualFromFBConfig(Display* dpy, GLXFBConfig config)
{
	glloader_init();
	return glXGetVisualFromFBConfig(dpy, config);
}
static GLXWindow GLLOADER_APIENTRY self_init_glXCreateWindow(Display* dpy, GLXFBConfig config, Window win, const int* attrib_list)
{
	glloader_init();
	return glXCreateWindow(dpy, config, win, attrib_list);
}
static void GLLOADER_APIENTRY self_init_glXDestroyWindow(Display* dpy, GLXWindow win)
{
	glloader_init();
	glXDestroyWindow(dpy, win);
}
static GLXPixmap GLLOADER_APIENTRY self_init_glXCreatePixmap(Display* dpy, GLXFBConfig config, Pixmap pixmap, const int* attrib_list)
{
	glloader_init();
	return glXCreatePixmap(dpy, config, pixmap, attrib_list);
}
static void GLLOADER_APIENTRY self_init_glXDestroyPixmap(Display* dpy, GLXPixmap pixmap)
{
	glloader_init();
	glXDestroyPixmap(dpy, pixmap);
}
static GLXPbuffer GLLOADER_APIENTRY self_init_glXCreatePbuffer(Display* dpy, GLXFBConfig config, const int* attrib_list)
{
	glloader_init();
	return glXCreatePbuffer(dpy, config, attrib_list);
}
static void GLLOADER_APIENTRY self_init_glXDestroyPbuffer(Display* dpy, GLXPbuffer pbuf)
{
	glloader_init();
	glXDestroyPbuffer(dpy, pbuf);
}
static void GLLOADER_APIENTRY self_init_glXQueryDrawable(Display* dpy, GLXDrawable draw, int attribute, unsigned int* value)
{
	glloader_init();
	glXQueryDrawable(dpy, draw, attribute, value);
}
static GLXContext GLLOADER_APIENTRY self_init_glXCreateNewContext(Display* dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct)
{
	glloader_init();
	return glXCreateNewContext(dpy, config, render_type, share_list, direct);
}
static Bool GLLOADER_APIENTRY self_init_glXMakeContextCurrent(Display* dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx)
{
	glloader_init();
	return glXMakeContextCurrent(dpy, draw, read, ctx);
}
static GLXDrawable GLLOADER_APIENTRY self_init_glXGetCurrentReadDrawable()
{
	glloader_init();
	return glXGetCurrentReadDrawable();
}
static int GLLOADER_APIENTRY self_init_glXQueryContext(Display* dpy, GLXContext ctx, int attribute, int* value)
{
	glloader_init();
	return glXQueryContext(dpy, ctx, attribute, value);
}
static void GLLOADER_APIENTRY self_init_glXSelectEvent(Display* dpy, GLXDrawable draw, unsigned long event_mask)
{
	glloader_init();
	glXSelectEvent(dpy, draw, event_mask);
}
static void GLLOADER_APIENTRY self_init_glXGetSelectedEvent(Display* dpy, GLXDrawable draw, unsigned long* event_mask)
{
	glloader_init();
	glXGetSelectedEvent(dpy, draw, event_mask);
}

glXGetFBConfigsFUNC glXGetFBConfigs = self_init_glXGetFBConfigs;
glXChooseFBConfigFUNC glXChooseFBConfig = self_init_glXChooseFBConfig;
glXGetFBConfigAttribFUNC glXGetFBConfigAttrib = self_init_glXGetFBConfigAttrib;
glXGetVisualFromFBConfigFUNC glXGetVisualFromFBConfig = self_init_glXGetVisualFromFBConfig;
glXCreateWindowFUNC glXCreateWindow = self_init_glXCreateWindow;
glXDestroyWindowFUNC glXDestroyWindow = self_init_glXDestroyWindow;
glXCreatePixmapFUNC glXCreatePixmap = self_init_glXCreatePixmap;
glXDestroyPixmapFUNC glXDestroyPixmap = self_init_glXDestroyPixmap;
glXCreatePbufferFUNC glXCreatePbuffer = self_init_glXCreatePbuffer;
glXDestroyPbufferFUNC glXDestroyPbuffer = self_init_glXDestroyPbuffer;
glXQueryDrawableFUNC glXQueryDrawable = self_init_glXQueryDrawable;
glXCreateNewContextFUNC glXCreateNewContext = self_init_glXCreateNewContext;
glXMakeContextCurrentFUNC glXMakeContextCurrent = self_init_glXMakeContextCurrent;
glXGetCurrentReadDrawableFUNC glXGetCurrentReadDrawable = self_init_glXGetCurrentReadDrawable;
glXQueryContextFUNC glXQueryContext = self_init_glXQueryContext;
glXSelectEventFUNC glXSelectEvent = self_init_glXSelectEvent;
glXGetSelectedEventFUNC glXGetSelectedEvent = self_init_glXGetSelectedEvent;

#endif

static char GLLOADER_APIENTRY _glloader_GLX_VERSION_1_4()
{
	return _GLX_VERSION_1_4;
}

static char GLLOADER_APIENTRY self_init_glloader_GLX_VERSION_1_4()
{
	glloader_init();
	return glloader_GLX_VERSION_1_4();
}
glloader_GLX_VERSION_1_4FUNC glloader_GLX_VERSION_1_4 = self_init_glloader_GLX_VERSION_1_4;

#ifdef GLX_VERSION_1_4

static __GLXextFuncPtr GLLOADER_APIENTRY self_init_glXGetProcAddress(const GLubyte* procName)
{
	LOAD_FUNC1(glXGetProcAddress);
	return glXGetProcAddress(procName);
}

glXGetProcAddressFUNC glXGetProcAddress = self_init_glXGetProcAddress;

#endif

void init_GLX_3DFX_multisample()
{
	glloader_GLX_3DFX_multisample = _glloader_GLX_3DFX_multisample;

	_GLX_3DFX_multisample = 0;
	if (glloader_is_supported("GLX_3DFX_multisample"))
	{
		_GLX_3DFX_multisample = 1;
	}
}

void init_GLX_AMD_gpu_association()
{
	glloader_GLX_AMD_gpu_association = _glloader_GLX_AMD_gpu_association;

	_GLX_AMD_gpu_association = 0;
	if (glloader_is_supported("GLX_AMD_gpu_association"))
	{
		_GLX_AMD_gpu_association = 1;
	}
}

void init_GLX_ARB_create_context()
{
	glloader_GLX_ARB_create_context = _glloader_GLX_ARB_create_context;

	{
		glXCreateContextAttribsARB = NULL;
	}

	_GLX_ARB_create_context = 0;
	if (glloader_is_supported("GLX_ARB_create_context"))
	{
		_GLX_ARB_create_context = 1;

		LOAD_FUNC1(glXCreateContextAttribsARB);
	}
}

void init_GLX_ARB_create_context_profile()
{
	glloader_GLX_ARB_create_context_profile = _glloader_GLX_ARB_create_context_profile;

	_GLX_ARB_create_context_profile = 0;
	if (glloader_is_supported("GLX_ARB_create_context_profile"))
	{
		_GLX_ARB_create_context_profile = 1;
	}
}

void init_GLX_ARB_create_context_robustness()
{
	glloader_GLX_ARB_create_context_robustness = _glloader_GLX_ARB_create_context_robustness;

	_GLX_ARB_create_context_robustness = 0;
	if (glloader_is_supported("GLX_ARB_create_context_robustness"))
	{
		_GLX_ARB_create_context_robustness = 1;
	}
}

void init_GLX_ARB_fbconfig_float()
{
	glloader_GLX_ARB_fbconfig_float = _glloader_GLX_ARB_fbconfig_float;

	_GLX_ARB_fbconfig_float = 0;
	if (glloader_is_supported("GLX_ARB_fbconfig_float"))
	{
		_GLX_ARB_fbconfig_float = 1;
	}
}

void init_GLX_ARB_framebuffer_sRGB()
{
	glloader_GLX_ARB_framebuffer_sRGB = _glloader_GLX_ARB_framebuffer_sRGB;

	_GLX_ARB_framebuffer_sRGB = 0;
	if (glloader_is_supported("GLX_ARB_framebuffer_sRGB"))
	{
		_GLX_ARB_framebuffer_sRGB = 1;
	}
	else
	{
		if (glloader_is_supported("GLX_EXT_framebuffer_sRGB"))
		{
			_GLX_ARB_framebuffer_sRGB = 1;
			promote_high("GLX_ARB_framebuffer_sRGB");
		}
	}
}

void init_GLX_ARB_get_proc_address()
{
	glloader_GLX_ARB_get_proc_address = _glloader_GLX_ARB_get_proc_address;

	_GLX_ARB_get_proc_address = 0;
	if (glloader_is_supported("GLX_ARB_get_proc_address"))
	{
		_GLX_ARB_get_proc_address = 1;

		LOAD_FUNC1(glXGetProcAddressARB);
	}
}

void init_GLX_ARB_multisample()
{
	glloader_GLX_ARB_multisample = _glloader_GLX_ARB_multisample;

	_GLX_ARB_multisample = 0;
	if (glloader_is_supported("GLX_ARB_multisample"))
	{
		_GLX_ARB_multisample = 1;
	}
	else
	{
		if (glloader_is_supported("GLX_SGIS_multisample"))
		{
			_GLX_ARB_multisample = 1;
			promote_high("GLX_ARB_multisample");
		}
	}
}

void init_GLX_ARB_robustness_isolation()
{
	glloader_GLX_ARB_robustness_isolation = _glloader_GLX_ARB_robustness_isolation;

	_GLX_ARB_robustness_isolation = 0;
	if (glloader_is_supported("GLX_ARB_robustness_isolation"))
	{
		_GLX_ARB_robustness_isolation = 1;
	}
}

void init_GLX_EXT_buffer_age()
{
	glloader_GLX_EXT_buffer_age = _glloader_GLX_EXT_buffer_age;

	_GLX_EXT_buffer_age = 0;
	if (glloader_is_supported("GLX_EXT_buffer_age"))
	{
		_GLX_EXT_buffer_age = 1;
	}
}

void init_GLX_EXT_create_context_es2_profile()
{
	glloader_GLX_EXT_create_context_es2_profile = _glloader_GLX_EXT_create_context_es2_profile;

	_GLX_EXT_create_context_es2_profile = 0;
	if (glloader_is_supported("GLX_EXT_create_context_es2_profile"))
	{
		_GLX_EXT_create_context_es2_profile = 1;
	}
}

void init_GLX_EXT_fbconfig_packed_float()
{
	glloader_GLX_EXT_fbconfig_packed_float = _glloader_GLX_EXT_fbconfig_packed_float;

	_GLX_EXT_fbconfig_packed_float = 0;
	if (glloader_is_supported("GLX_EXT_fbconfig_packed_float"))
	{
		_GLX_EXT_fbconfig_packed_float = 1;
	}
}

void init_GLX_EXT_framebuffer_sRGB()
{
	glloader_GLX_EXT_framebuffer_sRGB = _glloader_GLX_EXT_framebuffer_sRGB;

	_GLX_EXT_framebuffer_sRGB = 0;
	if (glloader_is_supported("GLX_EXT_framebuffer_sRGB"))
	{
		_GLX_EXT_framebuffer_sRGB = 1;
	}
}

void init_GLX_EXT_import_context()
{
	glloader_GLX_EXT_import_context = _glloader_GLX_EXT_import_context;

	{
		glXGetCurrentDisplayEXT = NULL;
		glXQueryContextInfoEXT = NULL;
		glXGetContextIDEXT = NULL;
		glXImportContextEXT = NULL;
		glXFreeContextEXT = NULL;
	}

	_GLX_EXT_import_context = 0;
	if (glloader_is_supported("GLX_EXT_import_context"))
	{
		_GLX_EXT_import_context = 1;

		LOAD_FUNC1(glXGetCurrentDisplayEXT);
		LOAD_FUNC1(glXQueryContextInfoEXT);
		LOAD_FUNC1(glXGetContextIDEXT);
		LOAD_FUNC1(glXImportContextEXT);
		LOAD_FUNC1(glXFreeContextEXT);
	}
}

void init_GLX_EXT_stereo_tree()
{
	glloader_GLX_EXT_stereo_tree = _glloader_GLX_EXT_stereo_tree;

	_GLX_EXT_stereo_tree = 0;
	if (glloader_is_supported("GLX_EXT_stereo_tree"))
	{
		_GLX_EXT_stereo_tree = 1;
	}
}

void init_GLX_EXT_swap_control()
{
	glloader_GLX_EXT_swap_control = _glloader_GLX_EXT_swap_control;

	{
		glXSwapIntervalEXT = NULL;
	}

	_GLX_EXT_swap_control = 0;
	if (glloader_is_supported("GLX_EXT_swap_control"))
	{
		_GLX_EXT_swap_control = 1;

		LOAD_FUNC1(glXSwapIntervalEXT);
	}
}

void init_GLX_EXT_swap_control_tear()
{
	glloader_GLX_EXT_swap_control_tear = _glloader_GLX_EXT_swap_control_tear;

	_GLX_EXT_swap_control_tear = 0;
	if (glloader_is_supported("GLX_EXT_swap_control_tear"))
	{
		_GLX_EXT_swap_control_tear = 1;
	}
}

void init_GLX_EXT_texture_from_pixmap()
{
	glloader_GLX_EXT_texture_from_pixmap = _glloader_GLX_EXT_texture_from_pixmap;

	{
		glXBindTexImageEXT = NULL;
		glXReleaseTexImageEXT = NULL;
	}

	_GLX_EXT_texture_from_pixmap = 0;
	if (glloader_is_supported("GLX_EXT_texture_from_pixmap"))
	{
		_GLX_EXT_texture_from_pixmap = 1;

		LOAD_FUNC1(glXBindTexImageEXT);
		LOAD_FUNC1(glXReleaseTexImageEXT);
	}
}

void init_GLX_EXT_visual_info()
{
	glloader_GLX_EXT_visual_info = _glloader_GLX_EXT_visual_info;

	_GLX_EXT_visual_info = 0;
	if (glloader_is_supported("GLX_EXT_visual_info"))
	{
		_GLX_EXT_visual_info = 1;
	}
}

void init_GLX_EXT_visual_rating()
{
	glloader_GLX_EXT_visual_rating = _glloader_GLX_EXT_visual_rating;

	_GLX_EXT_visual_rating = 0;
	if (glloader_is_supported("GLX_EXT_visual_rating"))
	{
		_GLX_EXT_visual_rating = 1;
	}
}

void init_GLX_INTEL_swap_event()
{
	glloader_GLX_INTEL_swap_event = _glloader_GLX_INTEL_swap_event;

	_GLX_INTEL_swap_event = 0;
	if (glloader_is_supported("GLX_INTEL_swap_event"))
	{
		_GLX_INTEL_swap_event = 1;
	}
}

void init_GLX_MESA_agp_offset()
{
	glloader_GLX_MESA_agp_offset = _glloader_GLX_MESA_agp_offset;

	{
		glXGetAGPOffsetMESA = NULL;
	}

	_GLX_MESA_agp_offset = 0;
	if (glloader_is_supported("GLX_MESA_agp_offset"))
	{
		_GLX_MESA_agp_offset = 1;

		LOAD_FUNC1(glXGetAGPOffsetMESA);
	}
}

void init_GLX_MESA_copy_sub_buffer()
{
	glloader_GLX_MESA_copy_sub_buffer = _glloader_GLX_MESA_copy_sub_buffer;

	{
		glXCopySubBufferMESA = NULL;
	}

	_GLX_MESA_copy_sub_buffer = 0;
	if (glloader_is_supported("GLX_MESA_copy_sub_buffer"))
	{
		_GLX_MESA_copy_sub_buffer = 1;

		LOAD_FUNC1(glXCopySubBufferMESA);
	}
}

void init_GLX_MESA_pixmap_colormap()
{
	glloader_GLX_MESA_pixmap_colormap = _glloader_GLX_MESA_pixmap_colormap;

	{
		glXCreateGLXPixmapMESA = NULL;
	}

	_GLX_MESA_pixmap_colormap = 0;
	if (glloader_is_supported("GLX_MESA_pixmap_colormap"))
	{
		_GLX_MESA_pixmap_colormap = 1;

		LOAD_FUNC1(glXCreateGLXPixmapMESA);
	}
}

void init_GLX_MESA_query_renderer()
{
	glloader_GLX_MESA_query_renderer = _glloader_GLX_MESA_query_renderer;

	{
		glXQueryRendererIntegerMESA = NULL;
		glXQueryCurrentRendererIntegerMESA = NULL;
		glXQueryRendererStringMESA = NULL;
		glXQueryCurrentRendererStringMESA = NULL;
	}

	_GLX_MESA_query_renderer = 0;
	if (glloader_is_supported("GLX_MESA_query_renderer"))
	{
		_GLX_MESA_query_renderer = 1;

		LOAD_FUNC1(glXQueryRendererIntegerMESA);
		LOAD_FUNC1(glXQueryCurrentRendererIntegerMESA);
		LOAD_FUNC1(glXQueryRendererStringMESA);
		LOAD_FUNC1(glXQueryCurrentRendererStringMESA);
	}
}

void init_GLX_MESA_release_buffers()
{
	glloader_GLX_MESA_release_buffers = _glloader_GLX_MESA_release_buffers;

	{
		glXReleaseBuffersMESA = NULL;
	}

	_GLX_MESA_release_buffers = 0;
	if (glloader_is_supported("GLX_MESA_release_buffers"))
	{
		_GLX_MESA_release_buffers = 1;

		LOAD_FUNC1(glXReleaseBuffersMESA);
	}
}

void init_GLX_MESA_set_3dfx_mode()
{
	glloader_GLX_MESA_set_3dfx_mode = _glloader_GLX_MESA_set_3dfx_mode;

	{
		glXSet3DfxModeMESA = NULL;
	}

	_GLX_MESA_set_3dfx_mode = 0;
	if (glloader_is_supported("GLX_MESA_set_3dfx_mode"))
	{
		_GLX_MESA_set_3dfx_mode = 1;

		LOAD_FUNC1(glXSet3DfxModeMESA);
	}
}

void init_GLX_NV_copy_buffer()
{
	glloader_GLX_NV_copy_buffer = _glloader_GLX_NV_copy_buffer;

	{
		glXCopyBufferSubDataNV = NULL;
		glXNamedCopyBufferSubDataNV = NULL;
	}

	_GLX_NV_copy_buffer = 0;
	if (glloader_is_supported("GLX_NV_copy_buffer"))
	{
		_GLX_NV_copy_buffer = 1;

		LOAD_FUNC1(glXCopyBufferSubDataNV);
		LOAD_FUNC1(glXNamedCopyBufferSubDataNV);
	}
}

void init_GLX_NV_copy_image()
{
	glloader_GLX_NV_copy_image = _glloader_GLX_NV_copy_image;

	{
		glXCopyImageSubDataNV = NULL;
	}

	_GLX_NV_copy_image = 0;
	if (glloader_is_supported("GLX_NV_copy_image"))
	{
		_GLX_NV_copy_image = 1;

		LOAD_FUNC1(glXCopyImageSubDataNV);
	}
}

void init_GLX_NV_delay_before_swap()
{
	glloader_GLX_NV_delay_before_swap = _glloader_GLX_NV_delay_before_swap;

	{
		glXDelayBeforeSwapNV = NULL;
	}

	_GLX_NV_delay_before_swap = 0;
	if (glloader_is_supported("GLX_NV_delay_before_swap"))
	{
		_GLX_NV_delay_before_swap = 1;

		LOAD_FUNC1(glXDelayBeforeSwapNV);
	}
}

void init_GLX_NV_float_buffer()
{
	glloader_GLX_NV_float_buffer = _glloader_GLX_NV_float_buffer;

	_GLX_NV_float_buffer = 0;
	if (glloader_is_supported("GLX_NV_float_buffer"))
	{
		_GLX_NV_float_buffer = 1;
	}
}

void init_GLX_NV_multisample_coverage()
{
	glloader_GLX_NV_multisample_coverage = _glloader_GLX_NV_multisample_coverage;

	_GLX_NV_multisample_coverage = 0;
	if (glloader_is_supported("GLX_NV_multisample_coverage"))
	{
		_GLX_NV_multisample_coverage = 1;
	}
}

void init_GLX_NV_present_video()
{
	glloader_GLX_NV_present_video = _glloader_GLX_NV_present_video;

	{
		glXEnumerateVideoDevicesNV = NULL;
		glXBindVideoDeviceNV = NULL;
	}

	_GLX_NV_present_video = 0;
	if (glloader_is_supported("GLX_NV_present_video"))
	{
		_GLX_NV_present_video = 1;

		LOAD_FUNC1(glXEnumerateVideoDevicesNV);
		LOAD_FUNC1(glXBindVideoDeviceNV);
	}
}

void init_GLX_NV_swap_group()
{
	glloader_GLX_NV_swap_group = _glloader_GLX_NV_swap_group;

	{
		glXJoinSwapGroupNV = NULL;
		glXBindSwapBarrierNV = NULL;
		glXQuerySwapGroupNV = NULL;
		glXQueryMaxSwapGroupsNV = NULL;
		glXQueryFrameCountNV = NULL;
		glXResetFrameCountNV = NULL;
	}

	_GLX_NV_swap_group = 0;
	if (glloader_is_supported("GLX_NV_swap_group"))
	{
		_GLX_NV_swap_group = 1;

		LOAD_FUNC1(glXJoinSwapGroupNV);
		LOAD_FUNC1(glXBindSwapBarrierNV);
		LOAD_FUNC1(glXQuerySwapGroupNV);
		LOAD_FUNC1(glXQueryMaxSwapGroupsNV);
		LOAD_FUNC1(glXQueryFrameCountNV);
		LOAD_FUNC1(glXResetFrameCountNV);
	}
}

void init_GLX_NV_video_capture()
{
	glloader_GLX_NV_video_capture = _glloader_GLX_NV_video_capture;

	{
		glXBindVideoCaptureDeviceNV = NULL;
		glXEnumerateVideoCaptureDevicesNV = NULL;
		glXLockVideoCaptureDeviceNV = NULL;
		glXQueryVideoCaptureDeviceNV = NULL;
		glXReleaseVideoCaptureDeviceNV = NULL;
	}

	_GLX_NV_video_capture = 0;
	if (glloader_is_supported("GLX_NV_video_capture"))
	{
		_GLX_NV_video_capture = 1;

		LOAD_FUNC1(glXBindVideoCaptureDeviceNV);
		LOAD_FUNC1(glXEnumerateVideoCaptureDevicesNV);
		LOAD_FUNC1(glXLockVideoCaptureDeviceNV);
		LOAD_FUNC1(glXQueryVideoCaptureDeviceNV);
		LOAD_FUNC1(glXReleaseVideoCaptureDeviceNV);
	}
}

void init_GLX_NV_video_output()
{
	glloader_GLX_NV_video_output = _glloader_GLX_NV_video_output;

	{
		glXGetVideoDeviceNV = NULL;
		glXReleaseVideoDeviceNV = NULL;
		glXBindVideoImageNV = NULL;
		glXReleaseVideoImageNV = NULL;
		glXSendPbufferToVideoNV = NULL;
		glXGetVideoInfoNV = NULL;
	}

	_GLX_NV_video_output = 0;
	if (glloader_is_supported("GLX_NV_video_output"))
	{
		_GLX_NV_video_output = 1;

		LOAD_FUNC1(glXGetVideoDeviceNV);
		LOAD_FUNC1(glXReleaseVideoDeviceNV);
		LOAD_FUNC1(glXBindVideoImageNV);
		LOAD_FUNC1(glXReleaseVideoImageNV);
		LOAD_FUNC1(glXSendPbufferToVideoNV);
		LOAD_FUNC1(glXGetVideoInfoNV);
	}
}

void init_GLX_OML_swap_method()
{
	glloader_GLX_OML_swap_method = _glloader_GLX_OML_swap_method;

	_GLX_OML_swap_method = 0;
	if (glloader_is_supported("GLX_OML_swap_method"))
	{
		_GLX_OML_swap_method = 1;
	}
}

void init_GLX_OML_sync_control()
{
	glloader_GLX_OML_sync_control = _glloader_GLX_OML_sync_control;

	{
		glXGetSyncValuesOML = NULL;
		glXGetMscRateOML = NULL;
		glXSwapBuffersMscOML = NULL;
		glXWaitForMscOML = NULL;
		glXWaitForSbcOML = NULL;
	}

	_GLX_OML_sync_control = 0;
	if (glloader_is_supported("GLX_OML_sync_control"))
	{
		_GLX_OML_sync_control = 1;

		LOAD_FUNC1(glXGetSyncValuesOML);
		LOAD_FUNC1(glXGetMscRateOML);
		LOAD_FUNC1(glXSwapBuffersMscOML);
		LOAD_FUNC1(glXWaitForMscOML);
		LOAD_FUNC1(glXWaitForSbcOML);
	}
}

void init_GLX_SGIS_blended_overlay()
{
	glloader_GLX_SGIS_blended_overlay = _glloader_GLX_SGIS_blended_overlay;

	_GLX_SGIS_blended_overlay = 0;
	if (glloader_is_supported("GLX_SGIS_blended_overlay"))
	{
		_GLX_SGIS_blended_overlay = 1;
	}
}

void init_GLX_SGIS_multisample()
{
	glloader_GLX_SGIS_multisample = _glloader_GLX_SGIS_multisample;

	_GLX_SGIS_multisample = 0;
	if (glloader_is_supported("GLX_SGIS_multisample"))
	{
		_GLX_SGIS_multisample = 1;
	}
}

void init_GLX_SGIS_shared_multisample()
{
	glloader_GLX_SGIS_shared_multisample = _glloader_GLX_SGIS_shared_multisample;

	_GLX_SGIS_shared_multisample = 0;
	if (glloader_is_supported("GLX_SGIS_shared_multisample"))
	{
		_GLX_SGIS_shared_multisample = 1;
	}
}

#ifdef _DM_BUFFER_H_
void init_GLX_SGIX_dmbuffer()
{
	glloader_GLX_SGIX_dmbuffer = _glloader_GLX_SGIX_dmbuffer;

	{
		glXAssociateDMPbufferSGIX = NULL;
	}

	_GLX_SGIX_dmbuffer = 0;
	if (glloader_is_supported("GLX_SGIX_dmbuffer"))
	{
		_GLX_SGIX_dmbuffer = 1;

		LOAD_FUNC1(glXAssociateDMPbufferSGIX);
	}
}
#endif

void init_GLX_SGIX_fbconfig()
{
	glloader_GLX_SGIX_fbconfig = _glloader_GLX_SGIX_fbconfig;

	{
		glXGetFBConfigAttribSGIX = NULL;
		glXChooseFBConfigSGIX = NULL;
		glXCreateGLXPixmapWithConfigSGIX = NULL;
		glXCreateContextWithConfigSGIX = NULL;
		glXGetVisualFromFBConfigSGIX = NULL;
		glXGetFBConfigFromVisualSGIX = NULL;
	}

	_GLX_SGIX_fbconfig = 0;
	if (glloader_is_supported("GLX_SGIX_fbconfig"))
	{
		_GLX_SGIX_fbconfig = 1;

		LOAD_FUNC1(glXGetFBConfigAttribSGIX);
		LOAD_FUNC1(glXChooseFBConfigSGIX);
		LOAD_FUNC1(glXCreateGLXPixmapWithConfigSGIX);
		LOAD_FUNC1(glXCreateContextWithConfigSGIX);
		LOAD_FUNC1(glXGetVisualFromFBConfigSGIX);
		LOAD_FUNC1(glXGetFBConfigFromVisualSGIX);
	}
}

void init_GLX_SGIX_hyperpipe()
{
	glloader_GLX_SGIX_hyperpipe = _glloader_GLX_SGIX_hyperpipe;

	{
		glXQueryHyperpipeNetworkSGIX = NULL;
		glXHyperpipeConfigSGIX = NULL;
		glXQueryHyperpipeConfigSGIX = NULL;
		glXDestroyHyperpipeConfigSGIX = NULL;
		glXBindHyperpipeSGIX = NULL;
		glXQueryHyperpipeBestAttribSGIX = NULL;
		glXHyperpipeAttribSGIX = NULL;
		glXQueryHyperpipeAttribSGIX = NULL;
	}

	_GLX_SGIX_hyperpipe = 0;
	if (glloader_is_supported("GLX_SGIX_hyperpipe"))
	{
		_GLX_SGIX_hyperpipe = 1;

		LOAD_FUNC1(glXQueryHyperpipeNetworkSGIX);
		LOAD_FUNC1(glXHyperpipeConfigSGIX);
		LOAD_FUNC1(glXQueryHyperpipeConfigSGIX);
		LOAD_FUNC1(glXDestroyHyperpipeConfigSGIX);
		LOAD_FUNC1(glXBindHyperpipeSGIX);
		LOAD_FUNC1(glXQueryHyperpipeBestAttribSGIX);
		LOAD_FUNC1(glXHyperpipeAttribSGIX);
		LOAD_FUNC1(glXQueryHyperpipeAttribSGIX);
	}
}

void init_GLX_SGIX_pbuffer()
{
	glloader_GLX_SGIX_pbuffer = _glloader_GLX_SGIX_pbuffer;

	{
		glXCreateGLXPbufferSGIX = NULL;
		glXDestroyGLXPbufferSGIX = NULL;
		glXQueryGLXPbufferSGIX = NULL;
		glXSelectEventSGIX = NULL;
		glXGetSelectedEventSGIX = NULL;
	}

	_GLX_SGIX_pbuffer = 0;
	if (glloader_is_supported("GLX_SGIX_pbuffer"))
	{
		_GLX_SGIX_pbuffer = 1;

		LOAD_FUNC1(glXCreateGLXPbufferSGIX);
		LOAD_FUNC1(glXDestroyGLXPbufferSGIX);
		LOAD_FUNC1(glXQueryGLXPbufferSGIX);
		LOAD_FUNC1(glXSelectEventSGIX);
		LOAD_FUNC1(glXGetSelectedEventSGIX);
	}
}

void init_GLX_SGIX_swap_barrier()
{
	glloader_GLX_SGIX_swap_barrier = _glloader_GLX_SGIX_swap_barrier;

	{
		glXBindSwapBarrierSGIX = NULL;
		glXQueryMaxSwapBarriersSGIX = NULL;
	}

	_GLX_SGIX_swap_barrier = 0;
	if (glloader_is_supported("GLX_SGIX_swap_barrier"))
	{
		_GLX_SGIX_swap_barrier = 1;

		LOAD_FUNC1(glXBindSwapBarrierSGIX);
		LOAD_FUNC1(glXQueryMaxSwapBarriersSGIX);
	}
}

void init_GLX_SGIX_swap_group()
{
	glloader_GLX_SGIX_swap_group = _glloader_GLX_SGIX_swap_group;

	{
		glXJoinSwapGroupSGIX = NULL;
	}

	_GLX_SGIX_swap_group = 0;
	if (glloader_is_supported("GLX_SGIX_swap_group"))
	{
		_GLX_SGIX_swap_group = 1;

		LOAD_FUNC1(glXJoinSwapGroupSGIX);
	}
}

void init_GLX_SGIX_video_resize()
{
	glloader_GLX_SGIX_video_resize = _glloader_GLX_SGIX_video_resize;

	{
		glXBindChannelToWindowSGIX = NULL;
		glXChannelRectSGIX = NULL;
		glXQueryChannelRectSGIX = NULL;
		glXQueryChannelDeltasSGIX = NULL;
		glXChannelRectSyncSGIX = NULL;
	}

	_GLX_SGIX_video_resize = 0;
	if (glloader_is_supported("GLX_SGIX_video_resize"))
	{
		_GLX_SGIX_video_resize = 1;

		LOAD_FUNC1(glXBindChannelToWindowSGIX);
		LOAD_FUNC1(glXChannelRectSGIX);
		LOAD_FUNC1(glXQueryChannelRectSGIX);
		LOAD_FUNC1(glXQueryChannelDeltasSGIX);
		LOAD_FUNC1(glXChannelRectSyncSGIX);
	}
}

#ifdef _VL_H
void init_GLX_SGIX_video_source()
{
	glloader_GLX_SGIX_video_source = _glloader_GLX_SGIX_video_source;

	{
		glXCreateGLXVideoSourceSGIX = NULL;
		glXDestroyGLXVideoSourceSGIX = NULL;
	}

	_GLX_SGIX_video_source = 0;
	if (glloader_is_supported("GLX_SGIX_video_source"))
	{
		_GLX_SGIX_video_source = 1;

		LOAD_FUNC1(glXCreateGLXVideoSourceSGIX);
		LOAD_FUNC1(glXDestroyGLXVideoSourceSGIX);
	}
}
#endif

void init_GLX_SGIX_visual_select_group()
{
	glloader_GLX_SGIX_visual_select_group = _glloader_GLX_SGIX_visual_select_group;

	_GLX_SGIX_visual_select_group = 0;
	if (glloader_is_supported("GLX_SGIX_visual_select_group"))
	{
		_GLX_SGIX_visual_select_group = 1;
	}
}

void init_GLX_SGI_cushion()
{
	glloader_GLX_SGI_cushion = _glloader_GLX_SGI_cushion;

	{
		glXCushionSGI = NULL;
	}

	_GLX_SGI_cushion = 0;
	if (glloader_is_supported("GLX_SGI_cushion"))
	{
		_GLX_SGI_cushion = 1;

		LOAD_FUNC1(glXCushionSGI);
	}
}

void init_GLX_SGI_make_current_read()
{
	glloader_GLX_SGI_make_current_read = _glloader_GLX_SGI_make_current_read;

	{
		glXMakeCurrentReadSGI = NULL;
		glXGetCurrentReadDrawableSGI = NULL;
	}

	_GLX_SGI_make_current_read = 0;
	if (glloader_is_supported("GLX_SGI_make_current_read"))
	{
		_GLX_SGI_make_current_read = 1;

		LOAD_FUNC1(glXMakeCurrentReadSGI);
		LOAD_FUNC1(glXGetCurrentReadDrawableSGI);
	}
}

void init_GLX_SGI_swap_control()
{
	glloader_GLX_SGI_swap_control = _glloader_GLX_SGI_swap_control;

	{
		glXSwapIntervalSGI = NULL;
	}

	_GLX_SGI_swap_control = 0;
	if (glloader_is_supported("GLX_SGI_swap_control"))
	{
		_GLX_SGI_swap_control = 1;

		LOAD_FUNC1(glXSwapIntervalSGI);
	}
}

void init_GLX_SGI_video_sync()
{
	glloader_GLX_SGI_video_sync = _glloader_GLX_SGI_video_sync;

	{
		glXGetVideoSyncSGI = NULL;
		glXWaitVideoSyncSGI = NULL;
	}

	_GLX_SGI_video_sync = 0;
	if (glloader_is_supported("GLX_SGI_video_sync"))
	{
		_GLX_SGI_video_sync = 1;

		LOAD_FUNC1(glXGetVideoSyncSGI);
		LOAD_FUNC1(glXWaitVideoSyncSGI);
	}
}

void init_GLX_SUN_get_transparent_index()
{
	glloader_GLX_SUN_get_transparent_index = _glloader_GLX_SUN_get_transparent_index;

	{
		glXGetTransparentIndexSUN = NULL;
	}

	_GLX_SUN_get_transparent_index = 0;
	if (glloader_is_supported("GLX_SUN_get_transparent_index"))
	{
		_GLX_SUN_get_transparent_index = 1;

		LOAD_FUNC1(glXGetTransparentIndexSUN);
	}
}

void init_GLX_VERSION_1_0()
{
	glloader_GLX_VERSION_1_0 = _glloader_GLX_VERSION_1_0;

	_GLX_VERSION_1_0 = 0;
	if (glloader_is_supported("GLX_VERSION_1_0"))
	{
		_GLX_VERSION_1_0 = 1;

		LOAD_FUNC1(glXQueryExtension);
		LOAD_FUNC1(glXQueryVersion);
		LOAD_FUNC1(glXGetConfig);
		LOAD_FUNC1(glXChooseVisual);
		LOAD_FUNC1(glXCreateGLXPixmap);
		LOAD_FUNC1(glXDestroyGLXPixmap);
		LOAD_FUNC1(glXCreateContext);
		LOAD_FUNC1(glXDestroyContext);
		LOAD_FUNC1(glXIsDirect);
		LOAD_FUNC1(glXCopyContext);
		LOAD_FUNC1(glXMakeCurrent);
		LOAD_FUNC1(glXGetCurrentContext);
		LOAD_FUNC1(glXGetCurrentDrawable);
		LOAD_FUNC1(glXWaitGL);
		LOAD_FUNC1(glXWaitX);
		LOAD_FUNC1(glXSwapBuffers);
		LOAD_FUNC1(glXUseXFont);
	}
}

void init_GLX_VERSION_1_1()
{
	glloader_GLX_VERSION_1_1 = _glloader_GLX_VERSION_1_1;

	_GLX_VERSION_1_1 = 0;
	if (glloader_is_supported("GLX_VERSION_1_1"))
	{
		_GLX_VERSION_1_1 = 1;

		LOAD_FUNC1(glXQueryExtensionsString);
		LOAD_FUNC1(glXGetClientString);
		LOAD_FUNC1(glXQueryServerString);
	}
}

void init_GLX_VERSION_1_2()
{
	glloader_GLX_VERSION_1_2 = _glloader_GLX_VERSION_1_2;

	{
		glXGetCurrentDisplay = NULL;
	}

	_GLX_VERSION_1_2 = 0;
	if (glloader_is_supported("GLX_VERSION_1_2"))
	{
		_GLX_VERSION_1_2 = 1;

		LOAD_FUNC1(glXGetCurrentDisplay);
	}
}

void init_GLX_VERSION_1_3()
{
	glloader_GLX_VERSION_1_3 = _glloader_GLX_VERSION_1_3;

	{
		glXGetFBConfigs = NULL;
		glXChooseFBConfig = NULL;
		glXGetFBConfigAttrib = NULL;
		glXGetVisualFromFBConfig = NULL;
		glXCreateWindow = NULL;
		glXDestroyWindow = NULL;
		glXCreatePixmap = NULL;
		glXDestroyPixmap = NULL;
		glXCreatePbuffer = NULL;
		glXDestroyPbuffer = NULL;
		glXQueryDrawable = NULL;
		glXCreateNewContext = NULL;
		glXMakeContextCurrent = NULL;
		glXGetCurrentReadDrawable = NULL;
		glXGetCurrentDisplay = NULL;
		glXQueryContext = NULL;
		glXSelectEvent = NULL;
		glXGetSelectedEvent = NULL;
	}

	_GLX_VERSION_1_3 = 0;
	if (glloader_is_supported("GLX_VERSION_1_3"))
	{
		_GLX_VERSION_1_3 = 1;

		LOAD_FUNC1(glXGetFBConfigs);
		LOAD_FUNC1(glXChooseFBConfig);
		LOAD_FUNC1(glXGetFBConfigAttrib);
		LOAD_FUNC1(glXGetVisualFromFBConfig);
		LOAD_FUNC1(glXCreateWindow);
		LOAD_FUNC1(glXDestroyWindow);
		LOAD_FUNC1(glXCreatePixmap);
		LOAD_FUNC1(glXDestroyPixmap);
		LOAD_FUNC1(glXCreatePbuffer);
		LOAD_FUNC1(glXDestroyPbuffer);
		LOAD_FUNC1(glXQueryDrawable);
		LOAD_FUNC1(glXCreateNewContext);
		LOAD_FUNC1(glXMakeContextCurrent);
		LOAD_FUNC1(glXGetCurrentReadDrawable);
		LOAD_FUNC1(glXGetCurrentDisplay);
		LOAD_FUNC1(glXQueryContext);
		LOAD_FUNC1(glXSelectEvent);
		LOAD_FUNC1(glXGetSelectedEvent);
	}
	else
	{
		if (glloader_is_supported("GLX_SGIX_fbconfig"))
		{
			LOAD_FUNC2(glXChooseFBConfig, glXChooseFBConfigSGIX);
			LOAD_FUNC2(glXGetFBConfigAttrib, glXGetFBConfigAttribSGIX);
			LOAD_FUNC2(glXGetVisualFromFBConfig, glXGetVisualFromFBConfigSGIX);
		}
		if (glloader_is_supported("GLX_SGIX_pbuffer"))
		{
			LOAD_FUNC2(glXSelectEvent, glXSelectEventSGIX);
			LOAD_FUNC2(glXGetSelectedEvent, glXGetSelectedEventSGIX);
		}
	}
}

void init_GLX_VERSION_1_4()
{
	glloader_GLX_VERSION_1_4 = _glloader_GLX_VERSION_1_4;

	_GLX_VERSION_1_4 = 0;
	if (glloader_is_supported("GLX_VERSION_1_4"))
	{
		_GLX_VERSION_1_4 = 1;

		LOAD_FUNC1(glXGetProcAddress);
	}
	else
	{
		if (glloader_is_supported("GLX_ARB_get_proc_address"))
		{
			LOAD_FUNC2(glXGetProcAddress, glXGetProcAddressARB);

			_GLX_VERSION_1_4 = 1;
			promote_high("GLX_VERSION_1_4");
		}
	}
}


void glx_init()
{
	init_GLX_3DFX_multisample();
	init_GLX_AMD_gpu_association();
	init_GLX_ARB_create_context();
	init_GLX_ARB_create_context_profile();
	init_GLX_ARB_create_context_robustness();
	init_GLX_ARB_fbconfig_float();
	init_GLX_ARB_framebuffer_sRGB();
	init_GLX_ARB_get_proc_address();
	init_GLX_ARB_multisample();
	init_GLX_ARB_robustness_isolation();
	init_GLX_EXT_buffer_age();
	init_GLX_EXT_create_context_es2_profile();
	init_GLX_EXT_fbconfig_packed_float();
	init_GLX_EXT_framebuffer_sRGB();
	init_GLX_EXT_import_context();
	init_GLX_EXT_stereo_tree();
	init_GLX_EXT_swap_control();
	init_GLX_EXT_swap_control_tear();
	init_GLX_EXT_texture_from_pixmap();
	init_GLX_EXT_visual_info();
	init_GLX_EXT_visual_rating();
	init_GLX_INTEL_swap_event();
	init_GLX_MESA_agp_offset();
	init_GLX_MESA_copy_sub_buffer();
	init_GLX_MESA_pixmap_colormap();
	init_GLX_MESA_query_renderer();
	init_GLX_MESA_release_buffers();
	init_GLX_MESA_set_3dfx_mode();
	init_GLX_NV_copy_buffer();
	init_GLX_NV_copy_image();
	init_GLX_NV_delay_before_swap();
	init_GLX_NV_float_buffer();
	init_GLX_NV_multisample_coverage();
	init_GLX_NV_present_video();
	init_GLX_NV_swap_group();
	init_GLX_NV_video_capture();
	init_GLX_NV_video_output();
	init_GLX_OML_swap_method();
	init_GLX_OML_sync_control();
	init_GLX_SGIS_blended_overlay();
	init_GLX_SGIS_multisample();
	init_GLX_SGIS_shared_multisample();
#ifdef _DM_BUFFER_H_
	init_GLX_SGIX_dmbuffer();
#endif
	init_GLX_SGIX_fbconfig();
	init_GLX_SGIX_hyperpipe();
	init_GLX_SGIX_pbuffer();
	init_GLX_SGIX_swap_barrier();
	init_GLX_SGIX_swap_group();
	init_GLX_SGIX_video_resize();
#ifdef _VL_H
	init_GLX_SGIX_video_source();
#endif
	init_GLX_SGIX_visual_select_group();
	init_GLX_SGI_cushion();
	init_GLX_SGI_make_current_read();
	init_GLX_SGI_swap_control();
	init_GLX_SGI_video_sync();
	init_GLX_SUN_get_transparent_index();
	init_GLX_VERSION_1_0();
	init_GLX_VERSION_1_1();
	init_GLX_VERSION_1_2();
	init_GLX_VERSION_1_3();
	init_GLX_VERSION_1_4();
}

#ifdef __cplusplus
}
#endif

#endif		/* GLLOADER_GLX */
