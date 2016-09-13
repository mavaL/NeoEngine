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

#ifdef GLLOADER_EGL

#ifdef __cplusplus
extern "C"
{
#endif

char _EGL_ANDROID_blob_cache = 0;
char _EGL_ANDROID_framebuffer_target = 0;
char _EGL_ANDROID_image_native_buffer = 0;
char _EGL_ANDROID_native_fence_sync = 0;
char _EGL_ANDROID_recordable = 0;
char _EGL_ANGLE_d3d_share_handle_client_buffer = 0;
char _EGL_ANGLE_device_d3d = 0;
char _EGL_ANGLE_direct3d_display = 0;
char _EGL_ANGLE_platform_angle = 0;
char _EGL_ANGLE_platform_angle_d3d = 0;
char _EGL_ANGLE_platform_angle_opengl = 0;
char _EGL_ANGLE_query_surface_pointer = 0;
char _EGL_ANGLE_robust_resource_initialization = 0;
char _EGL_ANGLE_software_display = 0;
char _EGL_ANGLE_surface_d3d_texture_2d_share_handle = 0;
char _EGL_ANGLE_window_fixed_size = 0;
char _EGL_ARM_pixmap_multisample_discard = 0;
char _EGL_EXT_buffer_age = 0;
char _EGL_EXT_client_extensions = 0;
char _EGL_EXT_create_context_robustness = 0;
char _EGL_EXT_device_base = 0;
char _EGL_EXT_device_drm = 0;
char _EGL_EXT_device_enumeration = 0;
char _EGL_EXT_device_openwf = 0;
char _EGL_EXT_device_query = 0;
char _EGL_EXT_image_dma_buf_import = 0;
char _EGL_EXT_multiview_window = 0;
char _EGL_EXT_output_base = 0;
char _EGL_EXT_platform_base = 0;
char _EGL_EXT_platform_device = 0;
char _EGL_EXT_platform_wayland = 0;
char _EGL_EXT_platform_x11 = 0;
char _EGL_EXT_protected_surface = 0;
char _EGL_EXT_stream_consumer_egloutput = 0;
char _EGL_EXT_swap_buffers_with_damage = 0;
char _EGL_EXT_yuv_surface = 0;
char _EGL_HI_clientpixmap = 0;
char _EGL_HI_colorformats = 0;
char _EGL_IMG_context_priority = 0;
char _EGL_KHR_cl_event = 0;
char _EGL_KHR_cl_event2 = 0;
char _EGL_KHR_config_attribs = 0;
char _EGL_KHR_create_context = 0;
char _EGL_KHR_create_context_no_error = 0;
char _EGL_KHR_fence_sync = 0;
char _EGL_KHR_get_all_proc_addresses = 0;
char _EGL_KHR_gl_colorspace = 0;
char _EGL_KHR_gl_texture_2D_image = 0;
char _EGL_KHR_image = 0;
char _EGL_KHR_image_base = 0;
char _EGL_KHR_image_pixmap = 0;
char _EGL_KHR_lock_surface = 0;
char _EGL_KHR_lock_surface2 = 0;
char _EGL_KHR_lock_surface3 = 0;
char _EGL_KHR_partial_update = 0;
char _EGL_KHR_platform_android = 0;
char _EGL_KHR_platform_gbm = 0;
char _EGL_KHR_platform_wayland = 0;
char _EGL_KHR_platform_x11 = 0;
char _EGL_KHR_reusable_sync = 0;
char _EGL_KHR_stream = 0;
char _EGL_KHR_stream_consumer_gltexture = 0;
char _EGL_KHR_stream_cross_process_fd = 0;
char _EGL_KHR_stream_fifo = 0;
char _EGL_KHR_stream_producer_aldatalocator = 0;
char _EGL_KHR_stream_producer_eglsurface = 0;
char _EGL_KHR_surfaceless_context = 0;
char _EGL_KHR_swap_buffers_with_damage = 0;
char _EGL_KHR_vg_parent_image = 0;
char _EGL_KHR_wait_sync = 0;
char _EGL_MESA_drm_image = 0;
char _EGL_MESA_image_dma_buf_export = 0;
char _EGL_MESA_platform_gbm = 0;
char _EGL_NOK_swap_region2 = 0;
char _EGL_NOK_texture_from_pixmap = 0;
char _EGL_NV_3dvision_surface = 0;
char _EGL_NV_coverage_sample = 0;
char _EGL_NV_coverage_sample_resolve = 0;
char _EGL_NV_cuda_event = 0;
char _EGL_NV_depth_nonlinear = 0;
char _EGL_NV_device_cuda = 0;
char _EGL_NV_native_query = 0;
char _EGL_NV_post_convert_rounding = 0;
char _EGL_NV_post_sub_buffer = 0;
char _EGL_NV_stream_sync = 0;
char _EGL_NV_sync = 0;
char _EGL_NV_system_time = 0;
char _EGL_TIZEN_image_native_buffer = 0;
char _EGL_TIZEN_image_native_surface = 0;
char _EGL_VERSION_1_1 = 0;
char _EGL_VERSION_1_2 = 0;
char _EGL_VERSION_1_3 = 0;
char _EGL_VERSION_1_4 = 0;
char _EGL_VERSION_1_5 = 0;

static char GLLOADER_APIENTRY _glloader_EGL_ANDROID_blob_cache()
{
	return _EGL_ANDROID_blob_cache;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANDROID_blob_cache()
{
	glloader_init();
	return glloader_EGL_ANDROID_blob_cache();
}
glloader_EGL_ANDROID_blob_cacheFUNC glloader_EGL_ANDROID_blob_cache = self_init_glloader_EGL_ANDROID_blob_cache;

#ifdef EGL_ANDROID_blob_cache

static void GLLOADER_APIENTRY self_init_eglSetBlobCacheFuncsANDROID(EGLDisplay dpy, EGLSetBlobFuncANDROID set, EGLGetBlobFuncANDROID get)
{
	glloader_init();
	eglSetBlobCacheFuncsANDROID(dpy, set, get);
}

eglSetBlobCacheFuncsANDROIDFUNC eglSetBlobCacheFuncsANDROID = self_init_eglSetBlobCacheFuncsANDROID;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_ANDROID_framebuffer_target()
{
	return _EGL_ANDROID_framebuffer_target;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANDROID_framebuffer_target()
{
	glloader_init();
	return glloader_EGL_ANDROID_framebuffer_target();
}
glloader_EGL_ANDROID_framebuffer_targetFUNC glloader_EGL_ANDROID_framebuffer_target = self_init_glloader_EGL_ANDROID_framebuffer_target;

static char GLLOADER_APIENTRY _glloader_EGL_ANDROID_image_native_buffer()
{
	return _EGL_ANDROID_image_native_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANDROID_image_native_buffer()
{
	glloader_init();
	return glloader_EGL_ANDROID_image_native_buffer();
}
glloader_EGL_ANDROID_image_native_bufferFUNC glloader_EGL_ANDROID_image_native_buffer = self_init_glloader_EGL_ANDROID_image_native_buffer;

static char GLLOADER_APIENTRY _glloader_EGL_ANDROID_native_fence_sync()
{
	return _EGL_ANDROID_native_fence_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANDROID_native_fence_sync()
{
	glloader_init();
	return glloader_EGL_ANDROID_native_fence_sync();
}
glloader_EGL_ANDROID_native_fence_syncFUNC glloader_EGL_ANDROID_native_fence_sync = self_init_glloader_EGL_ANDROID_native_fence_sync;

#ifdef EGL_ANDROID_native_fence_sync

static EGLint GLLOADER_APIENTRY self_init_eglDupNativeFenceFDANDROID(EGLDisplay dpy, EGLSyncKHR sync)
{
	glloader_init();
	return eglDupNativeFenceFDANDROID(dpy, sync);
}

eglDupNativeFenceFDANDROIDFUNC eglDupNativeFenceFDANDROID = self_init_eglDupNativeFenceFDANDROID;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_ANDROID_recordable()
{
	return _EGL_ANDROID_recordable;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANDROID_recordable()
{
	glloader_init();
	return glloader_EGL_ANDROID_recordable();
}
glloader_EGL_ANDROID_recordableFUNC glloader_EGL_ANDROID_recordable = self_init_glloader_EGL_ANDROID_recordable;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_d3d_share_handle_client_buffer()
{
	return _EGL_ANGLE_d3d_share_handle_client_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_d3d_share_handle_client_buffer()
{
	glloader_init();
	return glloader_EGL_ANGLE_d3d_share_handle_client_buffer();
}
glloader_EGL_ANGLE_d3d_share_handle_client_bufferFUNC glloader_EGL_ANGLE_d3d_share_handle_client_buffer = self_init_glloader_EGL_ANGLE_d3d_share_handle_client_buffer;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_device_d3d()
{
	return _EGL_ANGLE_device_d3d;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_device_d3d()
{
	glloader_init();
	return glloader_EGL_ANGLE_device_d3d();
}
glloader_EGL_ANGLE_device_d3dFUNC glloader_EGL_ANGLE_device_d3d = self_init_glloader_EGL_ANGLE_device_d3d;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_direct3d_display()
{
	return _EGL_ANGLE_direct3d_display;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_direct3d_display()
{
	glloader_init();
	return glloader_EGL_ANGLE_direct3d_display();
}
glloader_EGL_ANGLE_direct3d_displayFUNC glloader_EGL_ANGLE_direct3d_display = self_init_glloader_EGL_ANGLE_direct3d_display;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_platform_angle()
{
	return _EGL_ANGLE_platform_angle;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_platform_angle()
{
	glloader_init();
	return glloader_EGL_ANGLE_platform_angle();
}
glloader_EGL_ANGLE_platform_angleFUNC glloader_EGL_ANGLE_platform_angle = self_init_glloader_EGL_ANGLE_platform_angle;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_platform_angle_d3d()
{
	return _EGL_ANGLE_platform_angle_d3d;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_platform_angle_d3d()
{
	glloader_init();
	return glloader_EGL_ANGLE_platform_angle_d3d();
}
glloader_EGL_ANGLE_platform_angle_d3dFUNC glloader_EGL_ANGLE_platform_angle_d3d = self_init_glloader_EGL_ANGLE_platform_angle_d3d;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_platform_angle_opengl()
{
	return _EGL_ANGLE_platform_angle_opengl;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_platform_angle_opengl()
{
	glloader_init();
	return glloader_EGL_ANGLE_platform_angle_opengl();
}
glloader_EGL_ANGLE_platform_angle_openglFUNC glloader_EGL_ANGLE_platform_angle_opengl = self_init_glloader_EGL_ANGLE_platform_angle_opengl;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_query_surface_pointer()
{
	return _EGL_ANGLE_query_surface_pointer;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_query_surface_pointer()
{
	glloader_init();
	return glloader_EGL_ANGLE_query_surface_pointer();
}
glloader_EGL_ANGLE_query_surface_pointerFUNC glloader_EGL_ANGLE_query_surface_pointer = self_init_glloader_EGL_ANGLE_query_surface_pointer;

#ifdef EGL_ANGLE_query_surface_pointer

static EGLBoolean GLLOADER_APIENTRY self_init_eglQuerySurfacePointerANGLE(EGLDisplay dpy, EGLSurface surface, EGLint attribute, void** value)
{
	glloader_init();
	return eglQuerySurfacePointerANGLE(dpy, surface, attribute, value);
}

eglQuerySurfacePointerANGLEFUNC eglQuerySurfacePointerANGLE = self_init_eglQuerySurfacePointerANGLE;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_robust_resource_initialization()
{
	return _EGL_ANGLE_robust_resource_initialization;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_robust_resource_initialization()
{
	glloader_init();
	return glloader_EGL_ANGLE_robust_resource_initialization();
}
glloader_EGL_ANGLE_robust_resource_initializationFUNC glloader_EGL_ANGLE_robust_resource_initialization = self_init_glloader_EGL_ANGLE_robust_resource_initialization;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_software_display()
{
	return _EGL_ANGLE_software_display;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_software_display()
{
	glloader_init();
	return glloader_EGL_ANGLE_software_display();
}
glloader_EGL_ANGLE_software_displayFUNC glloader_EGL_ANGLE_software_display = self_init_glloader_EGL_ANGLE_software_display;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handle()
{
	return _EGL_ANGLE_surface_d3d_texture_2d_share_handle;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handle()
{
	glloader_init();
	return glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handle();
}
glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handleFUNC glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handle = self_init_glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handle;

static char GLLOADER_APIENTRY _glloader_EGL_ANGLE_window_fixed_size()
{
	return _EGL_ANGLE_window_fixed_size;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ANGLE_window_fixed_size()
{
	glloader_init();
	return glloader_EGL_ANGLE_window_fixed_size();
}
glloader_EGL_ANGLE_window_fixed_sizeFUNC glloader_EGL_ANGLE_window_fixed_size = self_init_glloader_EGL_ANGLE_window_fixed_size;

static char GLLOADER_APIENTRY _glloader_EGL_ARM_pixmap_multisample_discard()
{
	return _EGL_ARM_pixmap_multisample_discard;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_ARM_pixmap_multisample_discard()
{
	glloader_init();
	return glloader_EGL_ARM_pixmap_multisample_discard();
}
glloader_EGL_ARM_pixmap_multisample_discardFUNC glloader_EGL_ARM_pixmap_multisample_discard = self_init_glloader_EGL_ARM_pixmap_multisample_discard;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_buffer_age()
{
	return _EGL_EXT_buffer_age;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_buffer_age()
{
	glloader_init();
	return glloader_EGL_EXT_buffer_age();
}
glloader_EGL_EXT_buffer_ageFUNC glloader_EGL_EXT_buffer_age = self_init_glloader_EGL_EXT_buffer_age;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_client_extensions()
{
	return _EGL_EXT_client_extensions;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_client_extensions()
{
	glloader_init();
	return glloader_EGL_EXT_client_extensions();
}
glloader_EGL_EXT_client_extensionsFUNC glloader_EGL_EXT_client_extensions = self_init_glloader_EGL_EXT_client_extensions;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_create_context_robustness()
{
	return _EGL_EXT_create_context_robustness;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_create_context_robustness()
{
	glloader_init();
	return glloader_EGL_EXT_create_context_robustness();
}
glloader_EGL_EXT_create_context_robustnessFUNC glloader_EGL_EXT_create_context_robustness = self_init_glloader_EGL_EXT_create_context_robustness;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_device_base()
{
	return _EGL_EXT_device_base;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_device_base()
{
	glloader_init();
	return glloader_EGL_EXT_device_base();
}
glloader_EGL_EXT_device_baseFUNC glloader_EGL_EXT_device_base = self_init_glloader_EGL_EXT_device_base;

#ifdef EGL_EXT_device_base

static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryDeviceAttribEXT(EGLDeviceEXT device, EGLint attribute, EGLAttrib* value)
{
	glloader_init();
	return eglQueryDeviceAttribEXT(device, attribute, value);
}
static const char* GLLOADER_APIENTRY self_init_eglQueryDeviceStringEXT(EGLDeviceEXT device, EGLint name)
{
	glloader_init();
	return eglQueryDeviceStringEXT(device, name);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryDevicesEXT(EGLint max_devices, EGLDeviceEXT* devices, EGLint* num_devices)
{
	glloader_init();
	return eglQueryDevicesEXT(max_devices, devices, num_devices);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryDisplayAttribEXT(EGLDisplay dpy, EGLint attribute, EGLAttrib* value)
{
	glloader_init();
	return eglQueryDisplayAttribEXT(dpy, attribute, value);
}

eglQueryDeviceAttribEXTFUNC eglQueryDeviceAttribEXT = self_init_eglQueryDeviceAttribEXT;
eglQueryDeviceStringEXTFUNC eglQueryDeviceStringEXT = self_init_eglQueryDeviceStringEXT;
eglQueryDevicesEXTFUNC eglQueryDevicesEXT = self_init_eglQueryDevicesEXT;
eglQueryDisplayAttribEXTFUNC eglQueryDisplayAttribEXT = self_init_eglQueryDisplayAttribEXT;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_EXT_device_drm()
{
	return _EGL_EXT_device_drm;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_device_drm()
{
	glloader_init();
	return glloader_EGL_EXT_device_drm();
}
glloader_EGL_EXT_device_drmFUNC glloader_EGL_EXT_device_drm = self_init_glloader_EGL_EXT_device_drm;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_device_enumeration()
{
	return _EGL_EXT_device_enumeration;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_device_enumeration()
{
	glloader_init();
	return glloader_EGL_EXT_device_enumeration();
}
glloader_EGL_EXT_device_enumerationFUNC glloader_EGL_EXT_device_enumeration = self_init_glloader_EGL_EXT_device_enumeration;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_device_openwf()
{
	return _EGL_EXT_device_openwf;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_device_openwf()
{
	glloader_init();
	return glloader_EGL_EXT_device_openwf();
}
glloader_EGL_EXT_device_openwfFUNC glloader_EGL_EXT_device_openwf = self_init_glloader_EGL_EXT_device_openwf;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_device_query()
{
	return _EGL_EXT_device_query;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_device_query()
{
	glloader_init();
	return glloader_EGL_EXT_device_query();
}
glloader_EGL_EXT_device_queryFUNC glloader_EGL_EXT_device_query = self_init_glloader_EGL_EXT_device_query;

#ifdef EGL_EXT_device_query



#endif

static char GLLOADER_APIENTRY _glloader_EGL_EXT_image_dma_buf_import()
{
	return _EGL_EXT_image_dma_buf_import;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_image_dma_buf_import()
{
	glloader_init();
	return glloader_EGL_EXT_image_dma_buf_import();
}
glloader_EGL_EXT_image_dma_buf_importFUNC glloader_EGL_EXT_image_dma_buf_import = self_init_glloader_EGL_EXT_image_dma_buf_import;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_multiview_window()
{
	return _EGL_EXT_multiview_window;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_multiview_window()
{
	glloader_init();
	return glloader_EGL_EXT_multiview_window();
}
glloader_EGL_EXT_multiview_windowFUNC glloader_EGL_EXT_multiview_window = self_init_glloader_EGL_EXT_multiview_window;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_output_base()
{
	return _EGL_EXT_output_base;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_output_base()
{
	glloader_init();
	return glloader_EGL_EXT_output_base();
}
glloader_EGL_EXT_output_baseFUNC glloader_EGL_EXT_output_base = self_init_glloader_EGL_EXT_output_base;

#ifdef EGL_EXT_output_base

static EGLBoolean GLLOADER_APIENTRY self_init_eglGetOutputLayersEXT(EGLDisplay dpy, EGLAttrib const * attrib_list, EGLOutputLayerEXT* layers, EGLint max_layers, EGLint* num_layers)
{
	glloader_init();
	return eglGetOutputLayersEXT(dpy, attrib_list, layers, max_layers, num_layers);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglGetOutputPortsEXT(EGLDisplay dpy, EGLAttrib const * attrib_list, EGLOutputPortEXT* ports, EGLint max_ports, EGLint* num_ports)
{
	glloader_init();
	return eglGetOutputPortsEXT(dpy, attrib_list, ports, max_ports, num_ports);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib value)
{
	glloader_init();
	return eglOutputLayerAttribEXT(dpy, layer, attribute, value);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryOutputLayerAttribEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint attribute, EGLAttrib* value)
{
	glloader_init();
	return eglQueryOutputLayerAttribEXT(dpy, layer, attribute, value);
}
static char const * GLLOADER_APIENTRY self_init_eglQueryOutputLayerStringEXT(EGLDisplay dpy, EGLOutputLayerEXT layer, EGLint name)
{
	glloader_init();
	return eglQueryOutputLayerStringEXT(dpy, layer, name);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib value)
{
	glloader_init();
	return eglOutputPortAttribEXT(dpy, port, attribute, value);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryOutputPortAttribEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint attribute, EGLAttrib* value)
{
	glloader_init();
	return eglQueryOutputPortAttribEXT(dpy, port, attribute, value);
}
static char const * GLLOADER_APIENTRY self_init_eglQueryOutputPortStringEXT(EGLDisplay dpy, EGLOutputPortEXT port, EGLint name)
{
	glloader_init();
	return eglQueryOutputPortStringEXT(dpy, port, name);
}

eglGetOutputLayersEXTFUNC eglGetOutputLayersEXT = self_init_eglGetOutputLayersEXT;
eglGetOutputPortsEXTFUNC eglGetOutputPortsEXT = self_init_eglGetOutputPortsEXT;
eglOutputLayerAttribEXTFUNC eglOutputLayerAttribEXT = self_init_eglOutputLayerAttribEXT;
eglQueryOutputLayerAttribEXTFUNC eglQueryOutputLayerAttribEXT = self_init_eglQueryOutputLayerAttribEXT;
eglQueryOutputLayerStringEXTFUNC eglQueryOutputLayerStringEXT = self_init_eglQueryOutputLayerStringEXT;
eglOutputPortAttribEXTFUNC eglOutputPortAttribEXT = self_init_eglOutputPortAttribEXT;
eglQueryOutputPortAttribEXTFUNC eglQueryOutputPortAttribEXT = self_init_eglQueryOutputPortAttribEXT;
eglQueryOutputPortStringEXTFUNC eglQueryOutputPortStringEXT = self_init_eglQueryOutputPortStringEXT;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_EXT_platform_base()
{
	return _EGL_EXT_platform_base;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_platform_base()
{
	glloader_init();
	return glloader_EGL_EXT_platform_base();
}
glloader_EGL_EXT_platform_baseFUNC glloader_EGL_EXT_platform_base = self_init_glloader_EGL_EXT_platform_base;

#ifdef EGL_EXT_platform_base

static EGLDisplay GLLOADER_APIENTRY self_init_eglGetPlatformDisplayEXT(EGLenum platform, void* native_display, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglGetPlatformDisplayEXT);
	return eglGetPlatformDisplayEXT(platform, native_display, attrib_list);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreatePlatformWindowSurfaceEXT(EGLDisplay dpy, EGLConfig config, void* native_window, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreatePlatformWindowSurfaceEXT(dpy, config, native_window, attrib_list);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreatePlatformPixmapSurfaceEXT(EGLDisplay dpy, EGLConfig config, void* native_pixmap, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreatePlatformPixmapSurfaceEXT(dpy, config, native_pixmap, attrib_list);
}

eglGetPlatformDisplayEXTFUNC eglGetPlatformDisplayEXT = self_init_eglGetPlatformDisplayEXT;
eglCreatePlatformWindowSurfaceEXTFUNC eglCreatePlatformWindowSurfaceEXT = self_init_eglCreatePlatformWindowSurfaceEXT;
eglCreatePlatformPixmapSurfaceEXTFUNC eglCreatePlatformPixmapSurfaceEXT = self_init_eglCreatePlatformPixmapSurfaceEXT;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_EXT_platform_device()
{
	return _EGL_EXT_platform_device;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_platform_device()
{
	glloader_init();
	return glloader_EGL_EXT_platform_device();
}
glloader_EGL_EXT_platform_deviceFUNC glloader_EGL_EXT_platform_device = self_init_glloader_EGL_EXT_platform_device;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_platform_wayland()
{
	return _EGL_EXT_platform_wayland;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_platform_wayland()
{
	glloader_init();
	return glloader_EGL_EXT_platform_wayland();
}
glloader_EGL_EXT_platform_waylandFUNC glloader_EGL_EXT_platform_wayland = self_init_glloader_EGL_EXT_platform_wayland;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_platform_x11()
{
	return _EGL_EXT_platform_x11;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_platform_x11()
{
	glloader_init();
	return glloader_EGL_EXT_platform_x11();
}
glloader_EGL_EXT_platform_x11FUNC glloader_EGL_EXT_platform_x11 = self_init_glloader_EGL_EXT_platform_x11;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_protected_surface()
{
	return _EGL_EXT_protected_surface;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_protected_surface()
{
	glloader_init();
	return glloader_EGL_EXT_protected_surface();
}
glloader_EGL_EXT_protected_surfaceFUNC glloader_EGL_EXT_protected_surface = self_init_glloader_EGL_EXT_protected_surface;

static char GLLOADER_APIENTRY _glloader_EGL_EXT_stream_consumer_egloutput()
{
	return _EGL_EXT_stream_consumer_egloutput;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_stream_consumer_egloutput()
{
	glloader_init();
	return glloader_EGL_EXT_stream_consumer_egloutput();
}
glloader_EGL_EXT_stream_consumer_egloutputFUNC glloader_EGL_EXT_stream_consumer_egloutput = self_init_glloader_EGL_EXT_stream_consumer_egloutput;

#ifdef EGL_EXT_stream_consumer_egloutput

static EGLBoolean GLLOADER_APIENTRY self_init_eglStreamConsumerOutputEXT(EGLDisplay dpy, EGLStreamKHR stream, EGLOutputLayerEXT layer)
{
	glloader_init();
	return eglStreamConsumerOutputEXT(dpy, stream, layer);
}

eglStreamConsumerOutputEXTFUNC eglStreamConsumerOutputEXT = self_init_eglStreamConsumerOutputEXT;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_EXT_swap_buffers_with_damage()
{
	return _EGL_EXT_swap_buffers_with_damage;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_swap_buffers_with_damage()
{
	glloader_init();
	return glloader_EGL_EXT_swap_buffers_with_damage();
}
glloader_EGL_EXT_swap_buffers_with_damageFUNC glloader_EGL_EXT_swap_buffers_with_damage = self_init_glloader_EGL_EXT_swap_buffers_with_damage;

#ifdef EGL_EXT_swap_buffers_with_damage

static EGLBoolean GLLOADER_APIENTRY self_init_eglSwapBuffersWithDamageEXT(EGLDisplay dpy, EGLSurface surface, EGLint* rects, EGLint n_rects)
{
	glloader_init();
	return eglSwapBuffersWithDamageEXT(dpy, surface, rects, n_rects);
}

eglSwapBuffersWithDamageEXTFUNC eglSwapBuffersWithDamageEXT = self_init_eglSwapBuffersWithDamageEXT;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_EXT_yuv_surface()
{
	return _EGL_EXT_yuv_surface;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_EXT_yuv_surface()
{
	glloader_init();
	return glloader_EGL_EXT_yuv_surface();
}
glloader_EGL_EXT_yuv_surfaceFUNC glloader_EGL_EXT_yuv_surface = self_init_glloader_EGL_EXT_yuv_surface;

static char GLLOADER_APIENTRY _glloader_EGL_HI_clientpixmap()
{
	return _EGL_HI_clientpixmap;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_HI_clientpixmap()
{
	glloader_init();
	return glloader_EGL_HI_clientpixmap();
}
glloader_EGL_HI_clientpixmapFUNC glloader_EGL_HI_clientpixmap = self_init_glloader_EGL_HI_clientpixmap;

#ifdef EGL_HI_clientpixmap

static void GLLOADER_APIENTRY self_init_eglCreatePixmapSurfaceHI(EGLDisplay dpy, EGLConfig config, EGLClientPixmapHI* pixmap)
{
	glloader_init();
	eglCreatePixmapSurfaceHI(dpy, config, pixmap);
}

eglCreatePixmapSurfaceHIFUNC eglCreatePixmapSurfaceHI = self_init_eglCreatePixmapSurfaceHI;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_HI_colorformats()
{
	return _EGL_HI_colorformats;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_HI_colorformats()
{
	glloader_init();
	return glloader_EGL_HI_colorformats();
}
glloader_EGL_HI_colorformatsFUNC glloader_EGL_HI_colorformats = self_init_glloader_EGL_HI_colorformats;

static char GLLOADER_APIENTRY _glloader_EGL_IMG_context_priority()
{
	return _EGL_IMG_context_priority;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_IMG_context_priority()
{
	glloader_init();
	return glloader_EGL_IMG_context_priority();
}
glloader_EGL_IMG_context_priorityFUNC glloader_EGL_IMG_context_priority = self_init_glloader_EGL_IMG_context_priority;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_cl_event()
{
	return _EGL_KHR_cl_event;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_cl_event()
{
	glloader_init();
	return glloader_EGL_KHR_cl_event();
}
glloader_EGL_KHR_cl_eventFUNC glloader_EGL_KHR_cl_event = self_init_glloader_EGL_KHR_cl_event;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_cl_event2()
{
	return _EGL_KHR_cl_event2;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_cl_event2()
{
	glloader_init();
	return glloader_EGL_KHR_cl_event2();
}
glloader_EGL_KHR_cl_event2FUNC glloader_EGL_KHR_cl_event2 = self_init_glloader_EGL_KHR_cl_event2;

#ifdef EGL_KHR_cl_event2

static EGLSyncKHR GLLOADER_APIENTRY self_init_eglCreateSync64KHR(EGLDisplay dpy, EGLenum type, const EGLAttribKHR* attrib_list)
{
	glloader_init();
	return eglCreateSync64KHR(dpy, type, attrib_list);
}

eglCreateSync64KHRFUNC eglCreateSync64KHR = self_init_eglCreateSync64KHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_config_attribs()
{
	return _EGL_KHR_config_attribs;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_config_attribs()
{
	glloader_init();
	return glloader_EGL_KHR_config_attribs();
}
glloader_EGL_KHR_config_attribsFUNC glloader_EGL_KHR_config_attribs = self_init_glloader_EGL_KHR_config_attribs;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_create_context()
{
	return _EGL_KHR_create_context;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_create_context()
{
	glloader_init();
	return glloader_EGL_KHR_create_context();
}
glloader_EGL_KHR_create_contextFUNC glloader_EGL_KHR_create_context = self_init_glloader_EGL_KHR_create_context;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_create_context_no_error()
{
	return _EGL_KHR_create_context_no_error;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_create_context_no_error()
{
	glloader_init();
	return glloader_EGL_KHR_create_context_no_error();
}
glloader_EGL_KHR_create_context_no_errorFUNC glloader_EGL_KHR_create_context_no_error = self_init_glloader_EGL_KHR_create_context_no_error;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_fence_sync()
{
	return _EGL_KHR_fence_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_fence_sync()
{
	glloader_init();
	return glloader_EGL_KHR_fence_sync();
}
glloader_EGL_KHR_fence_syncFUNC glloader_EGL_KHR_fence_sync = self_init_glloader_EGL_KHR_fence_sync;

#ifdef EGL_KHR_fence_sync

static EGLSyncKHR GLLOADER_APIENTRY self_init_eglCreateSyncKHR(EGLDisplay dpy, EGLenum type, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreateSyncKHR(dpy, type, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglDestroySyncKHR(EGLDisplay dpy, EGLSyncKHR sync)
{
	glloader_init();
	return eglDestroySyncKHR(dpy, sync);
}
static EGLint GLLOADER_APIENTRY self_init_eglClientWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags, EGLTimeKHR timeout)
{
	glloader_init();
	return eglClientWaitSyncKHR(dpy, sync, flags, timeout);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglGetSyncAttribKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint attribute, EGLint* value)
{
	glloader_init();
	return eglGetSyncAttribKHR(dpy, sync, attribute, value);
}

eglCreateSyncKHRFUNC eglCreateSyncKHR = self_init_eglCreateSyncKHR;
eglDestroySyncKHRFUNC eglDestroySyncKHR = self_init_eglDestroySyncKHR;
eglClientWaitSyncKHRFUNC eglClientWaitSyncKHR = self_init_eglClientWaitSyncKHR;
eglGetSyncAttribKHRFUNC eglGetSyncAttribKHR = self_init_eglGetSyncAttribKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_get_all_proc_addresses()
{
	return _EGL_KHR_get_all_proc_addresses;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_get_all_proc_addresses()
{
	glloader_init();
	return glloader_EGL_KHR_get_all_proc_addresses();
}
glloader_EGL_KHR_get_all_proc_addressesFUNC glloader_EGL_KHR_get_all_proc_addresses = self_init_glloader_EGL_KHR_get_all_proc_addresses;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_gl_colorspace()
{
	return _EGL_KHR_gl_colorspace;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_gl_colorspace()
{
	glloader_init();
	return glloader_EGL_KHR_gl_colorspace();
}
glloader_EGL_KHR_gl_colorspaceFUNC glloader_EGL_KHR_gl_colorspace = self_init_glloader_EGL_KHR_gl_colorspace;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_gl_texture_2D_image()
{
	return _EGL_KHR_gl_texture_2D_image;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_gl_texture_2D_image()
{
	glloader_init();
	return glloader_EGL_KHR_gl_texture_2D_image();
}
glloader_EGL_KHR_gl_texture_2D_imageFUNC glloader_EGL_KHR_gl_texture_2D_image = self_init_glloader_EGL_KHR_gl_texture_2D_image;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_image()
{
	return _EGL_KHR_image;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_image()
{
	glloader_init();
	return glloader_EGL_KHR_image();
}
glloader_EGL_KHR_imageFUNC glloader_EGL_KHR_image = self_init_glloader_EGL_KHR_image;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_image_base()
{
	return _EGL_KHR_image_base;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_image_base()
{
	glloader_init();
	return glloader_EGL_KHR_image_base();
}
glloader_EGL_KHR_image_baseFUNC glloader_EGL_KHR_image_base = self_init_glloader_EGL_KHR_image_base;

#ifdef EGL_KHR_image_base

static EGLImageKHR GLLOADER_APIENTRY self_init_eglCreateImageKHR(EGLDisplay dpy, EGLContext ctx, EGLenum target, EGLClientBuffer buffer, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreateImageKHR(dpy, ctx, target, buffer, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglDestroyImageKHR(EGLDisplay dpy, EGLImageKHR image)
{
	glloader_init();
	return eglDestroyImageKHR(dpy, image);
}

eglCreateImageKHRFUNC eglCreateImageKHR = self_init_eglCreateImageKHR;
eglDestroyImageKHRFUNC eglDestroyImageKHR = self_init_eglDestroyImageKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_image_pixmap()
{
	return _EGL_KHR_image_pixmap;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_image_pixmap()
{
	glloader_init();
	return glloader_EGL_KHR_image_pixmap();
}
glloader_EGL_KHR_image_pixmapFUNC glloader_EGL_KHR_image_pixmap = self_init_glloader_EGL_KHR_image_pixmap;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_lock_surface()
{
	return _EGL_KHR_lock_surface;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_lock_surface()
{
	glloader_init();
	return glloader_EGL_KHR_lock_surface();
}
glloader_EGL_KHR_lock_surfaceFUNC glloader_EGL_KHR_lock_surface = self_init_glloader_EGL_KHR_lock_surface;

#ifdef EGL_KHR_lock_surface

static EGLBoolean GLLOADER_APIENTRY self_init_eglLockSurfaceKHR(EGLDisplay display, EGLSurface surface, const EGLint* attrib_list)
{
	glloader_init();
	return eglLockSurfaceKHR(display, surface, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglUnlockSurfaceKHR(EGLDisplay display, EGLSurface surface)
{
	glloader_init();
	return eglUnlockSurfaceKHR(display, surface);
}

eglLockSurfaceKHRFUNC eglLockSurfaceKHR = self_init_eglLockSurfaceKHR;
eglUnlockSurfaceKHRFUNC eglUnlockSurfaceKHR = self_init_eglUnlockSurfaceKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_lock_surface2()
{
	return _EGL_KHR_lock_surface2;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_lock_surface2()
{
	glloader_init();
	return glloader_EGL_KHR_lock_surface2();
}
glloader_EGL_KHR_lock_surface2FUNC glloader_EGL_KHR_lock_surface2 = self_init_glloader_EGL_KHR_lock_surface2;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_lock_surface3()
{
	return _EGL_KHR_lock_surface3;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_lock_surface3()
{
	glloader_init();
	return glloader_EGL_KHR_lock_surface3();
}
glloader_EGL_KHR_lock_surface3FUNC glloader_EGL_KHR_lock_surface3 = self_init_glloader_EGL_KHR_lock_surface3;

#ifdef EGL_KHR_lock_surface3

static EGLSyncKHR GLLOADER_APIENTRY self_init_eglQuerySurface64KHR(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLAttribKHR* value)
{
	glloader_init();
	return eglQuerySurface64KHR(dpy, surface, attribute, value);
}

eglQuerySurface64KHRFUNC eglQuerySurface64KHR = self_init_eglQuerySurface64KHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_partial_update()
{
	return _EGL_KHR_partial_update;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_partial_update()
{
	glloader_init();
	return glloader_EGL_KHR_partial_update();
}
glloader_EGL_KHR_partial_updateFUNC glloader_EGL_KHR_partial_update = self_init_glloader_EGL_KHR_partial_update;

#ifdef EGL_KHR_partial_update

static EGLBoolean GLLOADER_APIENTRY self_init_eglSetDamageRegionKHR(EGLDisplay dpy, EGLSurface surface, EGLint* rects, EGLint n_rects)
{
	glloader_init();
	return eglSetDamageRegionKHR(dpy, surface, rects, n_rects);
}

eglSetDamageRegionKHRFUNC eglSetDamageRegionKHR = self_init_eglSetDamageRegionKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_platform_android()
{
	return _EGL_KHR_platform_android;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_platform_android()
{
	glloader_init();
	return glloader_EGL_KHR_platform_android();
}
glloader_EGL_KHR_platform_androidFUNC glloader_EGL_KHR_platform_android = self_init_glloader_EGL_KHR_platform_android;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_platform_gbm()
{
	return _EGL_KHR_platform_gbm;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_platform_gbm()
{
	glloader_init();
	return glloader_EGL_KHR_platform_gbm();
}
glloader_EGL_KHR_platform_gbmFUNC glloader_EGL_KHR_platform_gbm = self_init_glloader_EGL_KHR_platform_gbm;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_platform_wayland()
{
	return _EGL_KHR_platform_wayland;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_platform_wayland()
{
	glloader_init();
	return glloader_EGL_KHR_platform_wayland();
}
glloader_EGL_KHR_platform_waylandFUNC glloader_EGL_KHR_platform_wayland = self_init_glloader_EGL_KHR_platform_wayland;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_platform_x11()
{
	return _EGL_KHR_platform_x11;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_platform_x11()
{
	glloader_init();
	return glloader_EGL_KHR_platform_x11();
}
glloader_EGL_KHR_platform_x11FUNC glloader_EGL_KHR_platform_x11 = self_init_glloader_EGL_KHR_platform_x11;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_reusable_sync()
{
	return _EGL_KHR_reusable_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_reusable_sync()
{
	glloader_init();
	return glloader_EGL_KHR_reusable_sync();
}
glloader_EGL_KHR_reusable_syncFUNC glloader_EGL_KHR_reusable_sync = self_init_glloader_EGL_KHR_reusable_sync;

#ifdef EGL_KHR_reusable_sync

static EGLBoolean GLLOADER_APIENTRY self_init_eglSignalSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLenum mode)
{
	glloader_init();
	return eglSignalSyncKHR(dpy, sync, mode);
}

eglSignalSyncKHRFUNC eglSignalSyncKHR = self_init_eglSignalSyncKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_stream()
{
	return _EGL_KHR_stream;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_stream()
{
	glloader_init();
	return glloader_EGL_KHR_stream();
}
glloader_EGL_KHR_streamFUNC glloader_EGL_KHR_stream = self_init_glloader_EGL_KHR_stream;

#ifdef EGL_KHR_stream

static EGLStreamKHR GLLOADER_APIENTRY self_init_eglCreateStreamKHR(EGLDisplay dpy, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreateStreamKHR(dpy, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglDestroyStreamKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
	glloader_init();
	return eglDestroyStreamKHR(dpy, stream);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglStreamAttribKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint value)
{
	glloader_init();
	return eglStreamAttribKHR(dpy, stream, attribute, value);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryStreamKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLint* value)
{
	glloader_init();
	return eglQueryStreamKHR(dpy, stream, attribute, value);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryStreamu64KHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLuint64KHR* value)
{
	glloader_init();
	return eglQueryStreamu64KHR(dpy, stream, attribute, value);
}

eglCreateStreamKHRFUNC eglCreateStreamKHR = self_init_eglCreateStreamKHR;
eglDestroyStreamKHRFUNC eglDestroyStreamKHR = self_init_eglDestroyStreamKHR;
eglStreamAttribKHRFUNC eglStreamAttribKHR = self_init_eglStreamAttribKHR;
eglQueryStreamKHRFUNC eglQueryStreamKHR = self_init_eglQueryStreamKHR;
eglQueryStreamu64KHRFUNC eglQueryStreamu64KHR = self_init_eglQueryStreamu64KHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_stream_consumer_gltexture()
{
	return _EGL_KHR_stream_consumer_gltexture;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_stream_consumer_gltexture()
{
	glloader_init();
	return glloader_EGL_KHR_stream_consumer_gltexture();
}
glloader_EGL_KHR_stream_consumer_gltextureFUNC glloader_EGL_KHR_stream_consumer_gltexture = self_init_glloader_EGL_KHR_stream_consumer_gltexture;

#ifdef EGL_KHR_stream_consumer_gltexture

static EGLBoolean GLLOADER_APIENTRY self_init_eglStreamConsumerGLTextureExternalKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
	glloader_init();
	return eglStreamConsumerGLTextureExternalKHR(dpy, stream);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglStreamConsumerAcquireKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
	glloader_init();
	return eglStreamConsumerAcquireKHR(dpy, stream);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglStreamConsumerReleaseKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
	glloader_init();
	return eglStreamConsumerReleaseKHR(dpy, stream);
}

eglStreamConsumerGLTextureExternalKHRFUNC eglStreamConsumerGLTextureExternalKHR = self_init_eglStreamConsumerGLTextureExternalKHR;
eglStreamConsumerAcquireKHRFUNC eglStreamConsumerAcquireKHR = self_init_eglStreamConsumerAcquireKHR;
eglStreamConsumerReleaseKHRFUNC eglStreamConsumerReleaseKHR = self_init_eglStreamConsumerReleaseKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_stream_cross_process_fd()
{
	return _EGL_KHR_stream_cross_process_fd;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_stream_cross_process_fd()
{
	glloader_init();
	return glloader_EGL_KHR_stream_cross_process_fd();
}
glloader_EGL_KHR_stream_cross_process_fdFUNC glloader_EGL_KHR_stream_cross_process_fd = self_init_glloader_EGL_KHR_stream_cross_process_fd;

#ifdef EGL_KHR_stream_cross_process_fd

static EGLNativeFileDescriptorKHR GLLOADER_APIENTRY self_init_eglGetStreamFileDescriptorKHR(EGLDisplay dpy, EGLStreamKHR stream)
{
	glloader_init();
	return eglGetStreamFileDescriptorKHR(dpy, stream);
}
static EGLStreamKHR GLLOADER_APIENTRY self_init_eglCreateStreamFromFileDescriptorKHR(EGLDisplay dpy, EGLNativeFileDescriptorKHR file_descriptor)
{
	glloader_init();
	return eglCreateStreamFromFileDescriptorKHR(dpy, file_descriptor);
}

eglGetStreamFileDescriptorKHRFUNC eglGetStreamFileDescriptorKHR = self_init_eglGetStreamFileDescriptorKHR;
eglCreateStreamFromFileDescriptorKHRFUNC eglCreateStreamFromFileDescriptorKHR = self_init_eglCreateStreamFromFileDescriptorKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_stream_fifo()
{
	return _EGL_KHR_stream_fifo;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_stream_fifo()
{
	glloader_init();
	return glloader_EGL_KHR_stream_fifo();
}
glloader_EGL_KHR_stream_fifoFUNC glloader_EGL_KHR_stream_fifo = self_init_glloader_EGL_KHR_stream_fifo;

#ifdef EGL_KHR_stream_fifo

static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryStreamTimeKHR(EGLDisplay dpy, EGLStreamKHR stream, EGLenum attribute, EGLTimeKHR* value)
{
	glloader_init();
	return eglQueryStreamTimeKHR(dpy, stream, attribute, value);
}

eglQueryStreamTimeKHRFUNC eglQueryStreamTimeKHR = self_init_eglQueryStreamTimeKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_stream_producer_aldatalocator()
{
	return _EGL_KHR_stream_producer_aldatalocator;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_stream_producer_aldatalocator()
{
	glloader_init();
	return glloader_EGL_KHR_stream_producer_aldatalocator();
}
glloader_EGL_KHR_stream_producer_aldatalocatorFUNC glloader_EGL_KHR_stream_producer_aldatalocator = self_init_glloader_EGL_KHR_stream_producer_aldatalocator;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_stream_producer_eglsurface()
{
	return _EGL_KHR_stream_producer_eglsurface;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_stream_producer_eglsurface()
{
	glloader_init();
	return glloader_EGL_KHR_stream_producer_eglsurface();
}
glloader_EGL_KHR_stream_producer_eglsurfaceFUNC glloader_EGL_KHR_stream_producer_eglsurface = self_init_glloader_EGL_KHR_stream_producer_eglsurface;

#ifdef EGL_KHR_stream_producer_eglsurface

static EGLSurface GLLOADER_APIENTRY self_init_eglCreateStreamProducerSurface(EGLDisplay dpy, EGLConfig config, EGLStreamKHR stream, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreateStreamProducerSurface(dpy, config, stream, attrib_list);
}

eglCreateStreamProducerSurfaceFUNC eglCreateStreamProducerSurface = self_init_eglCreateStreamProducerSurface;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_surfaceless_context()
{
	return _EGL_KHR_surfaceless_context;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_surfaceless_context()
{
	glloader_init();
	return glloader_EGL_KHR_surfaceless_context();
}
glloader_EGL_KHR_surfaceless_contextFUNC glloader_EGL_KHR_surfaceless_context = self_init_glloader_EGL_KHR_surfaceless_context;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_swap_buffers_with_damage()
{
	return _EGL_KHR_swap_buffers_with_damage;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_swap_buffers_with_damage()
{
	glloader_init();
	return glloader_EGL_KHR_swap_buffers_with_damage();
}
glloader_EGL_KHR_swap_buffers_with_damageFUNC glloader_EGL_KHR_swap_buffers_with_damage = self_init_glloader_EGL_KHR_swap_buffers_with_damage;

#ifdef EGL_KHR_swap_buffers_with_damage

static EGLBoolean GLLOADER_APIENTRY self_init_eglSwapBuffersWithDamageKHR(EGLDisplay dpy, EGLSurface surface, EGLint* rects, EGLint n_rects)
{
	glloader_init();
	return eglSwapBuffersWithDamageKHR(dpy, surface, rects, n_rects);
}

eglSwapBuffersWithDamageKHRFUNC eglSwapBuffersWithDamageKHR = self_init_eglSwapBuffersWithDamageKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_KHR_vg_parent_image()
{
	return _EGL_KHR_vg_parent_image;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_vg_parent_image()
{
	glloader_init();
	return glloader_EGL_KHR_vg_parent_image();
}
glloader_EGL_KHR_vg_parent_imageFUNC glloader_EGL_KHR_vg_parent_image = self_init_glloader_EGL_KHR_vg_parent_image;

static char GLLOADER_APIENTRY _glloader_EGL_KHR_wait_sync()
{
	return _EGL_KHR_wait_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_KHR_wait_sync()
{
	glloader_init();
	return glloader_EGL_KHR_wait_sync();
}
glloader_EGL_KHR_wait_syncFUNC glloader_EGL_KHR_wait_sync = self_init_glloader_EGL_KHR_wait_sync;

#ifdef EGL_KHR_wait_sync

static EGLint GLLOADER_APIENTRY self_init_eglWaitSyncKHR(EGLDisplay dpy, EGLSyncKHR sync, EGLint flags)
{
	glloader_init();
	return eglWaitSyncKHR(dpy, sync, flags);
}

eglWaitSyncKHRFUNC eglWaitSyncKHR = self_init_eglWaitSyncKHR;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_MESA_drm_image()
{
	return _EGL_MESA_drm_image;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_MESA_drm_image()
{
	glloader_init();
	return glloader_EGL_MESA_drm_image();
}
glloader_EGL_MESA_drm_imageFUNC glloader_EGL_MESA_drm_image = self_init_glloader_EGL_MESA_drm_image;

#ifdef EGL_MESA_drm_image

static EGLImageKHR GLLOADER_APIENTRY self_init_eglCreateDRMImageMESA(EGLDisplay dpy, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreateDRMImageMESA(dpy, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglExportDRMImageMESA(EGLDisplay dpy, EGLImageKHR image, EGLint* name, EGLint* handle, EGLint* stride)
{
	glloader_init();
	return eglExportDRMImageMESA(dpy, image, name, handle, stride);
}

eglCreateDRMImageMESAFUNC eglCreateDRMImageMESA = self_init_eglCreateDRMImageMESA;
eglExportDRMImageMESAFUNC eglExportDRMImageMESA = self_init_eglExportDRMImageMESA;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_MESA_image_dma_buf_export()
{
	return _EGL_MESA_image_dma_buf_export;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_MESA_image_dma_buf_export()
{
	glloader_init();
	return glloader_EGL_MESA_image_dma_buf_export();
}
glloader_EGL_MESA_image_dma_buf_exportFUNC glloader_EGL_MESA_image_dma_buf_export = self_init_glloader_EGL_MESA_image_dma_buf_export;

#ifdef EGL_MESA_image_dma_buf_export

static EGLBoolean GLLOADER_APIENTRY self_init_eglExportDMABUFImageQueryMESA(EGLDisplay dpy, EGLImageKHR image, EGLint* fourcc, EGLint* num_planes, EGLuint64KHR* modifiers)
{
	glloader_init();
	return eglExportDMABUFImageQueryMESA(dpy, image, fourcc, num_planes, modifiers);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglExportDMABUFImageMESA(EGLDisplay dpy, EGLImageKHR image, EGLint* fds, EGLint* strides, EGLint* offsets)
{
	glloader_init();
	return eglExportDMABUFImageMESA(dpy, image, fds, strides, offsets);
}

eglExportDMABUFImageQueryMESAFUNC eglExportDMABUFImageQueryMESA = self_init_eglExportDMABUFImageQueryMESA;
eglExportDMABUFImageMESAFUNC eglExportDMABUFImageMESA = self_init_eglExportDMABUFImageMESA;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_MESA_platform_gbm()
{
	return _EGL_MESA_platform_gbm;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_MESA_platform_gbm()
{
	glloader_init();
	return glloader_EGL_MESA_platform_gbm();
}
glloader_EGL_MESA_platform_gbmFUNC glloader_EGL_MESA_platform_gbm = self_init_glloader_EGL_MESA_platform_gbm;

static char GLLOADER_APIENTRY _glloader_EGL_NOK_swap_region2()
{
	return _EGL_NOK_swap_region2;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NOK_swap_region2()
{
	glloader_init();
	return glloader_EGL_NOK_swap_region2();
}
glloader_EGL_NOK_swap_region2FUNC glloader_EGL_NOK_swap_region2 = self_init_glloader_EGL_NOK_swap_region2;

#ifdef EGL_NOK_swap_region2

static EGLBoolean GLLOADER_APIENTRY self_init_eglSwapBuffersRegion2NOK(EGLDisplay dpy, EGLSurface surface, EGLint numRects, const EGLint* rects)
{
	glloader_init();
	return eglSwapBuffersRegion2NOK(dpy, surface, numRects, rects);
}

eglSwapBuffersRegion2NOKFUNC eglSwapBuffersRegion2NOK = self_init_eglSwapBuffersRegion2NOK;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_NOK_texture_from_pixmap()
{
	return _EGL_NOK_texture_from_pixmap;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NOK_texture_from_pixmap()
{
	glloader_init();
	return glloader_EGL_NOK_texture_from_pixmap();
}
glloader_EGL_NOK_texture_from_pixmapFUNC glloader_EGL_NOK_texture_from_pixmap = self_init_glloader_EGL_NOK_texture_from_pixmap;

static char GLLOADER_APIENTRY _glloader_EGL_NV_3dvision_surface()
{
	return _EGL_NV_3dvision_surface;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_3dvision_surface()
{
	glloader_init();
	return glloader_EGL_NV_3dvision_surface();
}
glloader_EGL_NV_3dvision_surfaceFUNC glloader_EGL_NV_3dvision_surface = self_init_glloader_EGL_NV_3dvision_surface;

static char GLLOADER_APIENTRY _glloader_EGL_NV_coverage_sample()
{
	return _EGL_NV_coverage_sample;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_coverage_sample()
{
	glloader_init();
	return glloader_EGL_NV_coverage_sample();
}
glloader_EGL_NV_coverage_sampleFUNC glloader_EGL_NV_coverage_sample = self_init_glloader_EGL_NV_coverage_sample;

static char GLLOADER_APIENTRY _glloader_EGL_NV_coverage_sample_resolve()
{
	return _EGL_NV_coverage_sample_resolve;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_coverage_sample_resolve()
{
	glloader_init();
	return glloader_EGL_NV_coverage_sample_resolve();
}
glloader_EGL_NV_coverage_sample_resolveFUNC glloader_EGL_NV_coverage_sample_resolve = self_init_glloader_EGL_NV_coverage_sample_resolve;

static char GLLOADER_APIENTRY _glloader_EGL_NV_cuda_event()
{
	return _EGL_NV_cuda_event;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_cuda_event()
{
	glloader_init();
	return glloader_EGL_NV_cuda_event();
}
glloader_EGL_NV_cuda_eventFUNC glloader_EGL_NV_cuda_event = self_init_glloader_EGL_NV_cuda_event;

static char GLLOADER_APIENTRY _glloader_EGL_NV_depth_nonlinear()
{
	return _EGL_NV_depth_nonlinear;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_depth_nonlinear()
{
	glloader_init();
	return glloader_EGL_NV_depth_nonlinear();
}
glloader_EGL_NV_depth_nonlinearFUNC glloader_EGL_NV_depth_nonlinear = self_init_glloader_EGL_NV_depth_nonlinear;

static char GLLOADER_APIENTRY _glloader_EGL_NV_device_cuda()
{
	return _EGL_NV_device_cuda;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_device_cuda()
{
	glloader_init();
	return glloader_EGL_NV_device_cuda();
}
glloader_EGL_NV_device_cudaFUNC glloader_EGL_NV_device_cuda = self_init_glloader_EGL_NV_device_cuda;

static char GLLOADER_APIENTRY _glloader_EGL_NV_native_query()
{
	return _EGL_NV_native_query;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_native_query()
{
	glloader_init();
	return glloader_EGL_NV_native_query();
}
glloader_EGL_NV_native_queryFUNC glloader_EGL_NV_native_query = self_init_glloader_EGL_NV_native_query;

#ifdef EGL_NV_native_query

static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryNativeDisplayNV(EGLDisplay dpy, EGLNativeDisplayType* display_id)
{
	glloader_init();
	return eglQueryNativeDisplayNV(dpy, display_id);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryNativeWindowNV(EGLDisplay dpy, EGLSurface surf, EGLNativeWindowType* window)
{
	glloader_init();
	return eglQueryNativeWindowNV(dpy, surf, window);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryNativePixmapNV(EGLDisplay dpy, EGLSurface surf, EGLNativePixmapType* pixmap)
{
	glloader_init();
	return eglQueryNativePixmapNV(dpy, surf, pixmap);
}

eglQueryNativeDisplayNVFUNC eglQueryNativeDisplayNV = self_init_eglQueryNativeDisplayNV;
eglQueryNativeWindowNVFUNC eglQueryNativeWindowNV = self_init_eglQueryNativeWindowNV;
eglQueryNativePixmapNVFUNC eglQueryNativePixmapNV = self_init_eglQueryNativePixmapNV;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_NV_post_convert_rounding()
{
	return _EGL_NV_post_convert_rounding;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_post_convert_rounding()
{
	glloader_init();
	return glloader_EGL_NV_post_convert_rounding();
}
glloader_EGL_NV_post_convert_roundingFUNC glloader_EGL_NV_post_convert_rounding = self_init_glloader_EGL_NV_post_convert_rounding;

static char GLLOADER_APIENTRY _glloader_EGL_NV_post_sub_buffer()
{
	return _EGL_NV_post_sub_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_post_sub_buffer()
{
	glloader_init();
	return glloader_EGL_NV_post_sub_buffer();
}
glloader_EGL_NV_post_sub_bufferFUNC glloader_EGL_NV_post_sub_buffer = self_init_glloader_EGL_NV_post_sub_buffer;

#ifdef EGL_NV_post_sub_buffer

static EGLBoolean GLLOADER_APIENTRY self_init_eglPostSubBufferNV(EGLDisplay dpy, EGLSurface surface, EGLint x, EGLint y, EGLint width, EGLint height)
{
	glloader_init();
	return eglPostSubBufferNV(dpy, surface, x, y, width, height);
}

eglPostSubBufferNVFUNC eglPostSubBufferNV = self_init_eglPostSubBufferNV;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_NV_stream_sync()
{
	return _EGL_NV_stream_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_stream_sync()
{
	glloader_init();
	return glloader_EGL_NV_stream_sync();
}
glloader_EGL_NV_stream_syncFUNC glloader_EGL_NV_stream_sync = self_init_glloader_EGL_NV_stream_sync;

#ifdef EGL_NV_stream_sync

static EGLSyncKHR GLLOADER_APIENTRY self_init_eglCreateStreamSyncNV(EGLDisplay dpy, EGLStreamKHR stream, EGLenum type, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreateStreamSyncNV(dpy, stream, type, attrib_list);
}

eglCreateStreamSyncNVFUNC eglCreateStreamSyncNV = self_init_eglCreateStreamSyncNV;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_NV_sync()
{
	return _EGL_NV_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_sync()
{
	glloader_init();
	return glloader_EGL_NV_sync();
}
glloader_EGL_NV_syncFUNC glloader_EGL_NV_sync = self_init_glloader_EGL_NV_sync;

#ifdef EGL_NV_sync

static EGLSyncNV GLLOADER_APIENTRY self_init_eglCreateFenceSyncNV(EGLDisplay dpy, EGLenum condition, const EGLint* attrib_list)
{
	glloader_init();
	return eglCreateFenceSyncNV(dpy, condition, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglDestroySyncNV(EGLSyncNV sync)
{
	glloader_init();
	return eglDestroySyncNV(sync);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglFenceNV(EGLSyncNV sync)
{
	glloader_init();
	return eglFenceNV(sync);
}
static EGLint GLLOADER_APIENTRY self_init_eglClientWaitSyncNV(EGLSyncNV sync, EGLint flags, EGLTimeNV timeout)
{
	glloader_init();
	return eglClientWaitSyncNV(sync, flags, timeout);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglSignalSyncNV(EGLSyncNV sync, EGLenum mode)
{
	glloader_init();
	return eglSignalSyncNV(sync, mode);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglGetSyncAttribNV(EGLSyncNV sync, EGLint attribute, EGLint* value)
{
	glloader_init();
	return eglGetSyncAttribNV(sync, attribute, value);
}

eglCreateFenceSyncNVFUNC eglCreateFenceSyncNV = self_init_eglCreateFenceSyncNV;
eglDestroySyncNVFUNC eglDestroySyncNV = self_init_eglDestroySyncNV;
eglFenceNVFUNC eglFenceNV = self_init_eglFenceNV;
eglClientWaitSyncNVFUNC eglClientWaitSyncNV = self_init_eglClientWaitSyncNV;
eglSignalSyncNVFUNC eglSignalSyncNV = self_init_eglSignalSyncNV;
eglGetSyncAttribNVFUNC eglGetSyncAttribNV = self_init_eglGetSyncAttribNV;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_NV_system_time()
{
	return _EGL_NV_system_time;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_NV_system_time()
{
	glloader_init();
	return glloader_EGL_NV_system_time();
}
glloader_EGL_NV_system_timeFUNC glloader_EGL_NV_system_time = self_init_glloader_EGL_NV_system_time;

#ifdef EGL_NV_system_time

static EGLuint64NV GLLOADER_APIENTRY self_init_eglGetSystemTimeFrequencyNV()
{
	glloader_init();
	return eglGetSystemTimeFrequencyNV();
}
static EGLuint64NV GLLOADER_APIENTRY self_init_eglGetSystemTimeNV()
{
	glloader_init();
	return eglGetSystemTimeNV();
}

eglGetSystemTimeFrequencyNVFUNC eglGetSystemTimeFrequencyNV = self_init_eglGetSystemTimeFrequencyNV;
eglGetSystemTimeNVFUNC eglGetSystemTimeNV = self_init_eglGetSystemTimeNV;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_TIZEN_image_native_buffer()
{
	return _EGL_TIZEN_image_native_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_TIZEN_image_native_buffer()
{
	glloader_init();
	return glloader_EGL_TIZEN_image_native_buffer();
}
glloader_EGL_TIZEN_image_native_bufferFUNC glloader_EGL_TIZEN_image_native_buffer = self_init_glloader_EGL_TIZEN_image_native_buffer;

static char GLLOADER_APIENTRY _glloader_EGL_TIZEN_image_native_surface()
{
	return _EGL_TIZEN_image_native_surface;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_TIZEN_image_native_surface()
{
	glloader_init();
	return glloader_EGL_TIZEN_image_native_surface();
}
glloader_EGL_TIZEN_image_native_surfaceFUNC glloader_EGL_TIZEN_image_native_surface = self_init_glloader_EGL_TIZEN_image_native_surface;

static char GLLOADER_APIENTRY _glloader_EGL_VERSION_1_1()
{
	return _EGL_VERSION_1_1;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_VERSION_1_1()
{
	glloader_init();
	return glloader_EGL_VERSION_1_1();
}
glloader_EGL_VERSION_1_1FUNC glloader_EGL_VERSION_1_1 = self_init_glloader_EGL_VERSION_1_1;

#ifdef EGL_VERSION_1_1

static EGLint GLLOADER_APIENTRY self_init_eglGetError()
{
	LOAD_FUNC1(eglGetError);
	return eglGetError();
}
static EGLDisplay GLLOADER_APIENTRY self_init_eglGetDisplay(EGLNativeDisplayType display_id)
{
	LOAD_FUNC1(eglGetDisplay);
	return eglGetDisplay(display_id);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglInitialize(EGLDisplay dpy, EGLint* major, EGLint* minor)
{
	LOAD_FUNC1(eglInitialize);
	return eglInitialize(dpy, major, minor);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglTerminate(EGLDisplay dpy)
{
	LOAD_FUNC1(eglTerminate);
	return eglTerminate(dpy);
}
static const char* GLLOADER_APIENTRY self_init_eglQueryString(EGLDisplay dpy, EGLint name)
{
	LOAD_FUNC1(eglQueryString);
	return eglQueryString(dpy, name);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglGetConfigs(EGLDisplay dpy, EGLConfig* configs, EGLint config_size, EGLint* num_config)
{
	LOAD_FUNC1(eglGetConfigs);
	return eglGetConfigs(dpy, configs, config_size, num_config);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglChooseConfig(EGLDisplay dpy, const EGLint* attrib_list, EGLConfig* configs, EGLint config_size, EGLint* num_config)
{
	LOAD_FUNC1(eglChooseConfig);
	return eglChooseConfig(dpy, attrib_list, configs, config_size, num_config);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglGetConfigAttrib(EGLDisplay dpy, EGLConfig configs, EGLint attribute, EGLint* value)
{
	LOAD_FUNC1(eglGetConfigAttrib);
	return eglGetConfigAttrib(dpy, configs, attribute, value);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreateWindowSurface(EGLDisplay dpy, EGLConfig configs, EGLNativeWindowType win, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglCreateWindowSurface);
	return eglCreateWindowSurface(dpy, configs, win, attrib_list);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreatePbufferSurface(EGLDisplay dpy, EGLConfig configs, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglCreatePbufferSurface);
	return eglCreatePbufferSurface(dpy, configs, attrib_list);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreatePixmapSurface(EGLDisplay dpy, EGLConfig configs, EGLNativePixmapType pixmap, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglCreatePixmapSurface);
	return eglCreatePixmapSurface(dpy, configs, pixmap, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglDestroySurface(EGLDisplay dpy, EGLSurface surface)
{
	LOAD_FUNC1(eglDestroySurface);
	return eglDestroySurface(dpy, surface);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQuerySurface(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint* value)
{
	LOAD_FUNC1(eglQuerySurface);
	return eglQuerySurface(dpy, surface, attribute, value);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglSurfaceAttrib(EGLDisplay dpy, EGLSurface surface, EGLint attribute, EGLint value)
{
	LOAD_FUNC1(eglSurfaceAttrib);
	return eglSurfaceAttrib(dpy, surface, attribute, value);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglBindTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
	LOAD_FUNC1(eglBindTexImage);
	return eglBindTexImage(dpy, surface, buffer);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglReleaseTexImage(EGLDisplay dpy, EGLSurface surface, EGLint buffer)
{
	LOAD_FUNC1(eglReleaseTexImage);
	return eglReleaseTexImage(dpy, surface, buffer);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglSwapInterval(EGLDisplay dpy, EGLint interval)
{
	LOAD_FUNC1(eglSwapInterval);
	return eglSwapInterval(dpy, interval);
}
static EGLContext GLLOADER_APIENTRY self_init_eglCreateContext(EGLDisplay dpy, EGLConfig config, EGLContext share_context, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglCreateContext);
	return eglCreateContext(dpy, config, share_context, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglDestroyContext(EGLDisplay dpy, EGLContext ctx)
{
	LOAD_FUNC1(eglDestroyContext);
	return eglDestroyContext(dpy, ctx);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglMakeCurrent(EGLDisplay dpy, EGLSurface draw, EGLSurface read, EGLContext ctx)
{
	LOAD_FUNC1(eglMakeCurrent);
	return eglMakeCurrent(dpy, draw, read, ctx);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglGetCurrentSurface(EGLint readdraw)
{
	LOAD_FUNC1(eglGetCurrentSurface);
	return eglGetCurrentSurface(readdraw);
}
static EGLDisplay GLLOADER_APIENTRY self_init_eglGetCurrentDisplay()
{
	LOAD_FUNC1(eglGetCurrentDisplay);
	return eglGetCurrentDisplay();
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglQueryContext(EGLDisplay dpy, EGLContext ctx, EGLint attribute, EGLint* value)
{
	LOAD_FUNC1(eglQueryContext);
	return eglQueryContext(dpy, ctx, attribute, value);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglWaitGL()
{
	LOAD_FUNC1(eglWaitGL);
	return eglWaitGL();
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglWaitNative(EGLint engine)
{
	LOAD_FUNC1(eglWaitNative);
	return eglWaitNative(engine);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglSwapBuffers(EGLDisplay dpy, EGLSurface surface)
{
	LOAD_FUNC1(eglSwapBuffers);
	return eglSwapBuffers(dpy, surface);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglCopyBuffers(EGLDisplay dpy, EGLSurface surface, EGLNativePixmapType target)
{
	LOAD_FUNC1(eglCopyBuffers);
	return eglCopyBuffers(dpy, surface, target);
}
static __eglMustCastToProperFunctionPointerType GLLOADER_APIENTRY self_init_eglGetProcAddress(const char* procname)
{
	LOAD_FUNC1(eglGetProcAddress);
	return eglGetProcAddress(procname);
}

eglGetErrorFUNC eglGetError = self_init_eglGetError;
eglGetDisplayFUNC eglGetDisplay = self_init_eglGetDisplay;
eglInitializeFUNC eglInitialize = self_init_eglInitialize;
eglTerminateFUNC eglTerminate = self_init_eglTerminate;
eglQueryStringFUNC eglQueryString = self_init_eglQueryString;
eglGetConfigsFUNC eglGetConfigs = self_init_eglGetConfigs;
eglChooseConfigFUNC eglChooseConfig = self_init_eglChooseConfig;
eglGetConfigAttribFUNC eglGetConfigAttrib = self_init_eglGetConfigAttrib;
eglCreateWindowSurfaceFUNC eglCreateWindowSurface = self_init_eglCreateWindowSurface;
eglCreatePbufferSurfaceFUNC eglCreatePbufferSurface = self_init_eglCreatePbufferSurface;
eglCreatePixmapSurfaceFUNC eglCreatePixmapSurface = self_init_eglCreatePixmapSurface;
eglDestroySurfaceFUNC eglDestroySurface = self_init_eglDestroySurface;
eglQuerySurfaceFUNC eglQuerySurface = self_init_eglQuerySurface;
eglSurfaceAttribFUNC eglSurfaceAttrib = self_init_eglSurfaceAttrib;
eglBindTexImageFUNC eglBindTexImage = self_init_eglBindTexImage;
eglReleaseTexImageFUNC eglReleaseTexImage = self_init_eglReleaseTexImage;
eglSwapIntervalFUNC eglSwapInterval = self_init_eglSwapInterval;
eglCreateContextFUNC eglCreateContext = self_init_eglCreateContext;
eglDestroyContextFUNC eglDestroyContext = self_init_eglDestroyContext;
eglMakeCurrentFUNC eglMakeCurrent = self_init_eglMakeCurrent;
eglGetCurrentSurfaceFUNC eglGetCurrentSurface = self_init_eglGetCurrentSurface;
eglGetCurrentDisplayFUNC eglGetCurrentDisplay = self_init_eglGetCurrentDisplay;
eglQueryContextFUNC eglQueryContext = self_init_eglQueryContext;
eglWaitGLFUNC eglWaitGL = self_init_eglWaitGL;
eglWaitNativeFUNC eglWaitNative = self_init_eglWaitNative;
eglSwapBuffersFUNC eglSwapBuffers = self_init_eglSwapBuffers;
eglCopyBuffersFUNC eglCopyBuffers = self_init_eglCopyBuffers;
eglGetProcAddressFUNC eglGetProcAddress = self_init_eglGetProcAddress;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_VERSION_1_2()
{
	return _EGL_VERSION_1_2;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_VERSION_1_2()
{
	glloader_init();
	return glloader_EGL_VERSION_1_2();
}
glloader_EGL_VERSION_1_2FUNC glloader_EGL_VERSION_1_2 = self_init_glloader_EGL_VERSION_1_2;

#ifdef EGL_VERSION_1_2

static EGLBoolean GLLOADER_APIENTRY self_init_eglBindAPI(EGLenum api)
{
	LOAD_FUNC1(eglBindAPI);
	return eglBindAPI(api);
}
static EGLenum GLLOADER_APIENTRY self_init_eglQueryAPI()
{
	LOAD_FUNC1(eglQueryAPI);
	return eglQueryAPI();
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglWaitClient()
{
	LOAD_FUNC1(eglWaitClient);
	return eglWaitClient();
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglReleaseThread()
{
	LOAD_FUNC1(eglReleaseThread);
	return eglReleaseThread();
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreatePbufferFromClientBuffer(EGLDisplay dpy, EGLenum buftype, EGLClientBuffer buffer, EGLConfig config, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglCreatePbufferFromClientBuffer);
	return eglCreatePbufferFromClientBuffer(dpy, buftype, buffer, config, attrib_list);
}

eglBindAPIFUNC eglBindAPI = self_init_eglBindAPI;
eglQueryAPIFUNC eglQueryAPI = self_init_eglQueryAPI;
eglWaitClientFUNC eglWaitClient = self_init_eglWaitClient;
eglReleaseThreadFUNC eglReleaseThread = self_init_eglReleaseThread;
eglCreatePbufferFromClientBufferFUNC eglCreatePbufferFromClientBuffer = self_init_eglCreatePbufferFromClientBuffer;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_VERSION_1_3()
{
	return _EGL_VERSION_1_3;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_VERSION_1_3()
{
	glloader_init();
	return glloader_EGL_VERSION_1_3();
}
glloader_EGL_VERSION_1_3FUNC glloader_EGL_VERSION_1_3 = self_init_glloader_EGL_VERSION_1_3;

static char GLLOADER_APIENTRY _glloader_EGL_VERSION_1_4()
{
	return _EGL_VERSION_1_4;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_VERSION_1_4()
{
	glloader_init();
	return glloader_EGL_VERSION_1_4();
}
glloader_EGL_VERSION_1_4FUNC glloader_EGL_VERSION_1_4 = self_init_glloader_EGL_VERSION_1_4;

#ifdef EGL_VERSION_1_4

static EGLContext GLLOADER_APIENTRY self_init_eglGetCurrentContext()
{
	LOAD_FUNC1(eglGetCurrentContext);
	return eglGetCurrentContext();
}

eglGetCurrentContextFUNC eglGetCurrentContext = self_init_eglGetCurrentContext;

#endif

static char GLLOADER_APIENTRY _glloader_EGL_VERSION_1_5()
{
	return _EGL_VERSION_1_5;
}

static char GLLOADER_APIENTRY self_init_glloader_EGL_VERSION_1_5()
{
	glloader_init();
	return glloader_EGL_VERSION_1_5();
}
glloader_EGL_VERSION_1_5FUNC glloader_EGL_VERSION_1_5 = self_init_glloader_EGL_VERSION_1_5;

#ifdef EGL_VERSION_1_5

static EGLSync GLLOADER_APIENTRY self_init_eglCreateSync(EGLDisplay dpy, EGLenum type, const EGLAttrib* attrib_list)
{
	LOAD_FUNC1(eglCreateSync);
	return eglCreateSync(dpy, type, attrib_list);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglDestroySync(EGLDisplay dpy, EGLSync sync)
{
	LOAD_FUNC1(eglDestroySync);
	return eglDestroySync(dpy, sync);
}
static EGLint GLLOADER_APIENTRY self_init_eglClientWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags, EGLTime timeout)
{
	LOAD_FUNC1(eglClientWaitSync);
	return eglClientWaitSync(dpy, sync, flags, timeout);
}
static EGLBoolean GLLOADER_APIENTRY self_init_eglGetSyncAttrib(EGLDisplay dpy, EGLSync sync, EGLint attribute, EGLint* value)
{
	LOAD_FUNC1(eglGetSyncAttrib);
	return eglGetSyncAttrib(dpy, sync, attribute, value);
}
static EGLDisplay GLLOADER_APIENTRY self_init_eglGetPlatformDisplay(EGLenum platform, void* native_display, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglGetPlatformDisplay);
	return eglGetPlatformDisplay(platform, native_display, attrib_list);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreatePlatformWindowSurface(EGLDisplay dpy, EGLConfig config, void* native_window, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglCreatePlatformWindowSurface);
	return eglCreatePlatformWindowSurface(dpy, config, native_window, attrib_list);
}
static EGLSurface GLLOADER_APIENTRY self_init_eglCreatePlatformPixmapSurface(EGLDisplay dpy, EGLConfig config, void* native_pixmap, const EGLint* attrib_list)
{
	LOAD_FUNC1(eglCreatePlatformPixmapSurface);
	return eglCreatePlatformPixmapSurface(dpy, config, native_pixmap, attrib_list);
}
static EGLint GLLOADER_APIENTRY self_init_eglWaitSync(EGLDisplay dpy, EGLSync sync, EGLint flags)
{
	LOAD_FUNC1(eglWaitSync);
	return eglWaitSync(dpy, sync, flags);
}

eglCreateSyncFUNC eglCreateSync = self_init_eglCreateSync;
eglDestroySyncFUNC eglDestroySync = self_init_eglDestroySync;
eglClientWaitSyncFUNC eglClientWaitSync = self_init_eglClientWaitSync;
eglGetSyncAttribFUNC eglGetSyncAttrib = self_init_eglGetSyncAttrib;
eglGetPlatformDisplayFUNC eglGetPlatformDisplay = self_init_eglGetPlatformDisplay;
eglCreatePlatformWindowSurfaceFUNC eglCreatePlatformWindowSurface = self_init_eglCreatePlatformWindowSurface;
eglCreatePlatformPixmapSurfaceFUNC eglCreatePlatformPixmapSurface = self_init_eglCreatePlatformPixmapSurface;
eglWaitSyncFUNC eglWaitSync = self_init_eglWaitSync;

#endif

void init_EGL_ANDROID_blob_cache()
{
	glloader_EGL_ANDROID_blob_cache = _glloader_EGL_ANDROID_blob_cache;

	{
		eglSetBlobCacheFuncsANDROID = NULL;
	}

	_EGL_ANDROID_blob_cache = 0;
	if (glloader_is_supported("EGL_ANDROID_blob_cache"))
	{
		_EGL_ANDROID_blob_cache = 1;

		LOAD_FUNC1(eglSetBlobCacheFuncsANDROID);
	}
}

void init_EGL_ANDROID_framebuffer_target()
{
	glloader_EGL_ANDROID_framebuffer_target = _glloader_EGL_ANDROID_framebuffer_target;

	_EGL_ANDROID_framebuffer_target = 0;
	if (glloader_is_supported("EGL_ANDROID_framebuffer_target"))
	{
		_EGL_ANDROID_framebuffer_target = 1;
	}
}

void init_EGL_ANDROID_image_native_buffer()
{
	glloader_EGL_ANDROID_image_native_buffer = _glloader_EGL_ANDROID_image_native_buffer;

	_EGL_ANDROID_image_native_buffer = 0;
	if (glloader_is_supported("EGL_ANDROID_image_native_buffer"))
	{
		_EGL_ANDROID_image_native_buffer = 1;
	}
}

void init_EGL_ANDROID_native_fence_sync()
{
	glloader_EGL_ANDROID_native_fence_sync = _glloader_EGL_ANDROID_native_fence_sync;

	{
		eglDupNativeFenceFDANDROID = NULL;
	}

	_EGL_ANDROID_native_fence_sync = 0;
	if (glloader_is_supported("EGL_ANDROID_native_fence_sync"))
	{
		_EGL_ANDROID_native_fence_sync = 1;

		LOAD_FUNC1(eglDupNativeFenceFDANDROID);
	}
}

void init_EGL_ANDROID_recordable()
{
	glloader_EGL_ANDROID_recordable = _glloader_EGL_ANDROID_recordable;

	_EGL_ANDROID_recordable = 0;
	if (glloader_is_supported("EGL_ANDROID_recordable"))
	{
		_EGL_ANDROID_recordable = 1;
	}
}

void init_EGL_ANGLE_d3d_share_handle_client_buffer()
{
	glloader_EGL_ANGLE_d3d_share_handle_client_buffer = _glloader_EGL_ANGLE_d3d_share_handle_client_buffer;

	_EGL_ANGLE_d3d_share_handle_client_buffer = 0;
	if (glloader_is_supported("EGL_ANGLE_d3d_share_handle_client_buffer"))
	{
		_EGL_ANGLE_d3d_share_handle_client_buffer = 1;
	}
}

void init_EGL_ANGLE_device_d3d()
{
	glloader_EGL_ANGLE_device_d3d = _glloader_EGL_ANGLE_device_d3d;

	_EGL_ANGLE_device_d3d = 0;
	if (glloader_is_supported("EGL_ANGLE_device_d3d"))
	{
		_EGL_ANGLE_device_d3d = 1;
	}
}

void init_EGL_ANGLE_direct3d_display()
{
	glloader_EGL_ANGLE_direct3d_display = _glloader_EGL_ANGLE_direct3d_display;

	_EGL_ANGLE_direct3d_display = 0;
	if (glloader_is_supported("EGL_ANGLE_direct3d_display"))
	{
		_EGL_ANGLE_direct3d_display = 1;
	}
}

void init_EGL_ANGLE_platform_angle()
{
	glloader_EGL_ANGLE_platform_angle = _glloader_EGL_ANGLE_platform_angle;

	_EGL_ANGLE_platform_angle = 0;
	if (glloader_is_supported("EGL_ANGLE_platform_angle"))
	{
		_EGL_ANGLE_platform_angle = 1;
	}
}

void init_EGL_ANGLE_platform_angle_d3d()
{
	glloader_EGL_ANGLE_platform_angle_d3d = _glloader_EGL_ANGLE_platform_angle_d3d;

	_EGL_ANGLE_platform_angle_d3d = 0;
	if (glloader_is_supported("EGL_ANGLE_platform_angle_d3d"))
	{
		_EGL_ANGLE_platform_angle_d3d = 1;
	}
}

void init_EGL_ANGLE_platform_angle_opengl()
{
	glloader_EGL_ANGLE_platform_angle_opengl = _glloader_EGL_ANGLE_platform_angle_opengl;

	_EGL_ANGLE_platform_angle_opengl = 0;
	if (glloader_is_supported("EGL_ANGLE_platform_angle_opengl"))
	{
		_EGL_ANGLE_platform_angle_opengl = 1;
	}
}

void init_EGL_ANGLE_query_surface_pointer()
{
	glloader_EGL_ANGLE_query_surface_pointer = _glloader_EGL_ANGLE_query_surface_pointer;

	{
		eglQuerySurfacePointerANGLE = NULL;
	}

	_EGL_ANGLE_query_surface_pointer = 0;
	if (glloader_is_supported("EGL_ANGLE_query_surface_pointer"))
	{
		_EGL_ANGLE_query_surface_pointer = 1;

		LOAD_FUNC1(eglQuerySurfacePointerANGLE);
	}
}

void init_EGL_ANGLE_robust_resource_initialization()
{
	glloader_EGL_ANGLE_robust_resource_initialization = _glloader_EGL_ANGLE_robust_resource_initialization;

	_EGL_ANGLE_robust_resource_initialization = 0;
	if (glloader_is_supported("EGL_ANGLE_robust_resource_initialization"))
	{
		_EGL_ANGLE_robust_resource_initialization = 1;
	}
}

void init_EGL_ANGLE_software_display()
{
	glloader_EGL_ANGLE_software_display = _glloader_EGL_ANGLE_software_display;

	_EGL_ANGLE_software_display = 0;
	if (glloader_is_supported("EGL_ANGLE_software_display"))
	{
		_EGL_ANGLE_software_display = 1;
	}
}

void init_EGL_ANGLE_surface_d3d_texture_2d_share_handle()
{
	glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handle = _glloader_EGL_ANGLE_surface_d3d_texture_2d_share_handle;

	_EGL_ANGLE_surface_d3d_texture_2d_share_handle = 0;
	if (glloader_is_supported("EGL_ANGLE_surface_d3d_texture_2d_share_handle"))
	{
		_EGL_ANGLE_surface_d3d_texture_2d_share_handle = 1;
	}
}

void init_EGL_ANGLE_window_fixed_size()
{
	glloader_EGL_ANGLE_window_fixed_size = _glloader_EGL_ANGLE_window_fixed_size;

	_EGL_ANGLE_window_fixed_size = 0;
	if (glloader_is_supported("EGL_ANGLE_window_fixed_size"))
	{
		_EGL_ANGLE_window_fixed_size = 1;
	}
}

void init_EGL_ARM_pixmap_multisample_discard()
{
	glloader_EGL_ARM_pixmap_multisample_discard = _glloader_EGL_ARM_pixmap_multisample_discard;

	_EGL_ARM_pixmap_multisample_discard = 0;
	if (glloader_is_supported("EGL_ARM_pixmap_multisample_discard"))
	{
		_EGL_ARM_pixmap_multisample_discard = 1;
	}
}

void init_EGL_EXT_buffer_age()
{
	glloader_EGL_EXT_buffer_age = _glloader_EGL_EXT_buffer_age;

	_EGL_EXT_buffer_age = 0;
	if (glloader_is_supported("EGL_EXT_buffer_age"))
	{
		_EGL_EXT_buffer_age = 1;
	}
}

void init_EGL_EXT_client_extensions()
{
	glloader_EGL_EXT_client_extensions = _glloader_EGL_EXT_client_extensions;

	_EGL_EXT_client_extensions = 0;
	if (glloader_is_supported("EGL_EXT_client_extensions"))
	{
		_EGL_EXT_client_extensions = 1;
	}
}

void init_EGL_EXT_create_context_robustness()
{
	glloader_EGL_EXT_create_context_robustness = _glloader_EGL_EXT_create_context_robustness;

	_EGL_EXT_create_context_robustness = 0;
	if (glloader_is_supported("EGL_EXT_create_context_robustness"))
	{
		_EGL_EXT_create_context_robustness = 1;
	}
}

void init_EGL_EXT_device_base()
{
	glloader_EGL_EXT_device_base = _glloader_EGL_EXT_device_base;

	{
		eglQueryDeviceAttribEXT = NULL;
		eglQueryDeviceStringEXT = NULL;
		eglQueryDevicesEXT = NULL;
		eglQueryDisplayAttribEXT = NULL;
	}

	_EGL_EXT_device_base = 0;
	if (glloader_is_supported("EGL_EXT_device_base"))
	{
		_EGL_EXT_device_base = 1;

		LOAD_FUNC1(eglQueryDeviceAttribEXT);
		LOAD_FUNC1(eglQueryDeviceStringEXT);
		LOAD_FUNC1(eglQueryDevicesEXT);
		LOAD_FUNC1(eglQueryDisplayAttribEXT);
	}
}

void init_EGL_EXT_device_drm()
{
	glloader_EGL_EXT_device_drm = _glloader_EGL_EXT_device_drm;

	_EGL_EXT_device_drm = 0;
	if (glloader_is_supported("EGL_EXT_device_drm"))
	{
		_EGL_EXT_device_drm = 1;
	}
}

void init_EGL_EXT_device_enumeration()
{
	glloader_EGL_EXT_device_enumeration = _glloader_EGL_EXT_device_enumeration;

	_EGL_EXT_device_enumeration = 0;
	if (glloader_is_supported("EGL_EXT_device_enumeration"))
	{
		_EGL_EXT_device_enumeration = 1;
	}
}

void init_EGL_EXT_device_openwf()
{
	glloader_EGL_EXT_device_openwf = _glloader_EGL_EXT_device_openwf;

	_EGL_EXT_device_openwf = 0;
	if (glloader_is_supported("EGL_EXT_device_openwf"))
	{
		_EGL_EXT_device_openwf = 1;
	}
}

void init_EGL_EXT_device_query()
{
	glloader_EGL_EXT_device_query = _glloader_EGL_EXT_device_query;

	{
		eglQueryDeviceAttribEXT = NULL;
		eglQueryDeviceStringEXT = NULL;
		eglQueryDisplayAttribEXT = NULL;
	}

	_EGL_EXT_device_query = 0;
	if (glloader_is_supported("EGL_EXT_device_query"))
	{
		_EGL_EXT_device_query = 1;

		LOAD_FUNC1(eglQueryDeviceAttribEXT);
		LOAD_FUNC1(eglQueryDeviceStringEXT);
		LOAD_FUNC1(eglQueryDisplayAttribEXT);
	}
}

void init_EGL_EXT_image_dma_buf_import()
{
	glloader_EGL_EXT_image_dma_buf_import = _glloader_EGL_EXT_image_dma_buf_import;

	_EGL_EXT_image_dma_buf_import = 0;
	if (glloader_is_supported("EGL_EXT_image_dma_buf_import"))
	{
		_EGL_EXT_image_dma_buf_import = 1;
	}
}

void init_EGL_EXT_multiview_window()
{
	glloader_EGL_EXT_multiview_window = _glloader_EGL_EXT_multiview_window;

	_EGL_EXT_multiview_window = 0;
	if (glloader_is_supported("EGL_EXT_multiview_window"))
	{
		_EGL_EXT_multiview_window = 1;
	}
}

void init_EGL_EXT_output_base()
{
	glloader_EGL_EXT_output_base = _glloader_EGL_EXT_output_base;

	{
		eglGetOutputLayersEXT = NULL;
		eglGetOutputPortsEXT = NULL;
		eglOutputLayerAttribEXT = NULL;
		eglQueryOutputLayerAttribEXT = NULL;
		eglQueryOutputLayerStringEXT = NULL;
		eglOutputPortAttribEXT = NULL;
		eglQueryOutputPortAttribEXT = NULL;
		eglQueryOutputPortStringEXT = NULL;
	}

	_EGL_EXT_output_base = 0;
	if (glloader_is_supported("EGL_EXT_output_base"))
	{
		_EGL_EXT_output_base = 1;

		LOAD_FUNC1(eglGetOutputLayersEXT);
		LOAD_FUNC1(eglGetOutputPortsEXT);
		LOAD_FUNC1(eglOutputLayerAttribEXT);
		LOAD_FUNC1(eglQueryOutputLayerAttribEXT);
		LOAD_FUNC1(eglQueryOutputLayerStringEXT);
		LOAD_FUNC1(eglOutputPortAttribEXT);
		LOAD_FUNC1(eglQueryOutputPortAttribEXT);
		LOAD_FUNC1(eglQueryOutputPortStringEXT);
	}
}

void init_EGL_EXT_platform_base()
{
	glloader_EGL_EXT_platform_base = _glloader_EGL_EXT_platform_base;

	{
		eglCreatePlatformWindowSurfaceEXT = NULL;
		eglCreatePlatformPixmapSurfaceEXT = NULL;
	}

	_EGL_EXT_platform_base = 0;
	if (glloader_is_supported("EGL_EXT_platform_base"))
	{
		_EGL_EXT_platform_base = 1;

		LOAD_FUNC1(eglGetPlatformDisplayEXT);
		LOAD_FUNC1(eglCreatePlatformWindowSurfaceEXT);
		LOAD_FUNC1(eglCreatePlatformPixmapSurfaceEXT);
	}
}

void init_EGL_EXT_platform_device()
{
	glloader_EGL_EXT_platform_device = _glloader_EGL_EXT_platform_device;

	_EGL_EXT_platform_device = 0;
	if (glloader_is_supported("EGL_EXT_platform_device"))
	{
		_EGL_EXT_platform_device = 1;
	}
}

void init_EGL_EXT_platform_wayland()
{
	glloader_EGL_EXT_platform_wayland = _glloader_EGL_EXT_platform_wayland;

	_EGL_EXT_platform_wayland = 0;
	if (glloader_is_supported("EGL_EXT_platform_wayland"))
	{
		_EGL_EXT_platform_wayland = 1;
	}
}

void init_EGL_EXT_platform_x11()
{
	glloader_EGL_EXT_platform_x11 = _glloader_EGL_EXT_platform_x11;

	_EGL_EXT_platform_x11 = 0;
	if (glloader_is_supported("EGL_EXT_platform_x11"))
	{
		_EGL_EXT_platform_x11 = 1;
	}
}

void init_EGL_EXT_protected_surface()
{
	glloader_EGL_EXT_protected_surface = _glloader_EGL_EXT_protected_surface;

	_EGL_EXT_protected_surface = 0;
	if (glloader_is_supported("EGL_EXT_protected_surface"))
	{
		_EGL_EXT_protected_surface = 1;
	}
}

void init_EGL_EXT_stream_consumer_egloutput()
{
	glloader_EGL_EXT_stream_consumer_egloutput = _glloader_EGL_EXT_stream_consumer_egloutput;

	{
		eglStreamConsumerOutputEXT = NULL;
	}

	_EGL_EXT_stream_consumer_egloutput = 0;
	if (glloader_is_supported("EGL_EXT_stream_consumer_egloutput"))
	{
		_EGL_EXT_stream_consumer_egloutput = 1;

		LOAD_FUNC1(eglStreamConsumerOutputEXT);
	}
}

void init_EGL_EXT_swap_buffers_with_damage()
{
	glloader_EGL_EXT_swap_buffers_with_damage = _glloader_EGL_EXT_swap_buffers_with_damage;

	{
		eglSwapBuffersWithDamageEXT = NULL;
	}

	_EGL_EXT_swap_buffers_with_damage = 0;
	if (glloader_is_supported("EGL_EXT_swap_buffers_with_damage"))
	{
		_EGL_EXT_swap_buffers_with_damage = 1;

		LOAD_FUNC1(eglSwapBuffersWithDamageEXT);
	}
}

void init_EGL_EXT_yuv_surface()
{
	glloader_EGL_EXT_yuv_surface = _glloader_EGL_EXT_yuv_surface;

	_EGL_EXT_yuv_surface = 0;
	if (glloader_is_supported("EGL_EXT_yuv_surface"))
	{
		_EGL_EXT_yuv_surface = 1;
	}
}

void init_EGL_HI_clientpixmap()
{
	glloader_EGL_HI_clientpixmap = _glloader_EGL_HI_clientpixmap;

	{
		eglCreatePixmapSurfaceHI = NULL;
	}

	_EGL_HI_clientpixmap = 0;
	if (glloader_is_supported("EGL_HI_clientpixmap"))
	{
		_EGL_HI_clientpixmap = 1;

		LOAD_FUNC1(eglCreatePixmapSurfaceHI);
	}
}

void init_EGL_HI_colorformats()
{
	glloader_EGL_HI_colorformats = _glloader_EGL_HI_colorformats;

	_EGL_HI_colorformats = 0;
	if (glloader_is_supported("EGL_HI_colorformats"))
	{
		_EGL_HI_colorformats = 1;
	}
}

void init_EGL_IMG_context_priority()
{
	glloader_EGL_IMG_context_priority = _glloader_EGL_IMG_context_priority;

	_EGL_IMG_context_priority = 0;
	if (glloader_is_supported("EGL_IMG_context_priority"))
	{
		_EGL_IMG_context_priority = 1;
	}
}

void init_EGL_KHR_cl_event()
{
	glloader_EGL_KHR_cl_event = _glloader_EGL_KHR_cl_event;

	_EGL_KHR_cl_event = 0;
	if (glloader_is_supported("EGL_KHR_cl_event"))
	{
		_EGL_KHR_cl_event = 1;
	}
}

void init_EGL_KHR_cl_event2()
{
	glloader_EGL_KHR_cl_event2 = _glloader_EGL_KHR_cl_event2;

	{
		eglCreateSync64KHR = NULL;
	}

	_EGL_KHR_cl_event2 = 0;
	if (glloader_is_supported("EGL_KHR_cl_event2"))
	{
		_EGL_KHR_cl_event2 = 1;

		LOAD_FUNC1(eglCreateSync64KHR);
	}
}

void init_EGL_KHR_config_attribs()
{
	glloader_EGL_KHR_config_attribs = _glloader_EGL_KHR_config_attribs;

	_EGL_KHR_config_attribs = 0;
	if (glloader_is_supported("EGL_KHR_config_attribs"))
	{
		_EGL_KHR_config_attribs = 1;
	}
}

void init_EGL_KHR_create_context()
{
	glloader_EGL_KHR_create_context = _glloader_EGL_KHR_create_context;

	_EGL_KHR_create_context = 0;
	if (glloader_is_supported("EGL_KHR_create_context"))
	{
		_EGL_KHR_create_context = 1;
	}
}

void init_EGL_KHR_create_context_no_error()
{
	glloader_EGL_KHR_create_context_no_error = _glloader_EGL_KHR_create_context_no_error;

	_EGL_KHR_create_context_no_error = 0;
	if (glloader_is_supported("EGL_KHR_create_context_no_error"))
	{
		_EGL_KHR_create_context_no_error = 1;
	}
}

void init_EGL_KHR_fence_sync()
{
	glloader_EGL_KHR_fence_sync = _glloader_EGL_KHR_fence_sync;

	{
		eglCreateSyncKHR = NULL;
		eglDestroySyncKHR = NULL;
		eglClientWaitSyncKHR = NULL;
		eglGetSyncAttribKHR = NULL;
	}

	_EGL_KHR_fence_sync = 0;
	if (glloader_is_supported("EGL_KHR_fence_sync"))
	{
		_EGL_KHR_fence_sync = 1;

		LOAD_FUNC1(eglCreateSyncKHR);
		LOAD_FUNC1(eglDestroySyncKHR);
		LOAD_FUNC1(eglClientWaitSyncKHR);
		LOAD_FUNC1(eglGetSyncAttribKHR);
	}
}

void init_EGL_KHR_get_all_proc_addresses()
{
	glloader_EGL_KHR_get_all_proc_addresses = _glloader_EGL_KHR_get_all_proc_addresses;

	_EGL_KHR_get_all_proc_addresses = 0;
	if (glloader_is_supported("EGL_KHR_get_all_proc_addresses"))
	{
		_EGL_KHR_get_all_proc_addresses = 1;
	}
}

void init_EGL_KHR_gl_colorspace()
{
	glloader_EGL_KHR_gl_colorspace = _glloader_EGL_KHR_gl_colorspace;

	_EGL_KHR_gl_colorspace = 0;
	if (glloader_is_supported("EGL_KHR_gl_colorspace"))
	{
		_EGL_KHR_gl_colorspace = 1;
	}
}

void init_EGL_KHR_gl_texture_2D_image()
{
	glloader_EGL_KHR_gl_texture_2D_image = _glloader_EGL_KHR_gl_texture_2D_image;

	_EGL_KHR_gl_texture_2D_image = 0;
	if (glloader_is_supported("EGL_KHR_gl_texture_2D_image"))
	{
		_EGL_KHR_gl_texture_2D_image = 1;
	}
}

void init_EGL_KHR_image()
{
	glloader_EGL_KHR_image = _glloader_EGL_KHR_image;

	_EGL_KHR_image = 0;
	if (glloader_is_supported("EGL_KHR_image"))
	{
		_EGL_KHR_image = 1;
	}
}

void init_EGL_KHR_image_base()
{
	glloader_EGL_KHR_image_base = _glloader_EGL_KHR_image_base;

	{
		eglCreateImageKHR = NULL;
		eglDestroyImageKHR = NULL;
	}

	_EGL_KHR_image_base = 0;
	if (glloader_is_supported("EGL_KHR_image_base"))
	{
		_EGL_KHR_image_base = 1;

		LOAD_FUNC1(eglCreateImageKHR);
		LOAD_FUNC1(eglDestroyImageKHR);
	}
}

void init_EGL_KHR_image_pixmap()
{
	glloader_EGL_KHR_image_pixmap = _glloader_EGL_KHR_image_pixmap;

	_EGL_KHR_image_pixmap = 0;
	if (glloader_is_supported("EGL_KHR_image_pixmap"))
	{
		_EGL_KHR_image_pixmap = 1;
	}
}

void init_EGL_KHR_lock_surface()
{
	glloader_EGL_KHR_lock_surface = _glloader_EGL_KHR_lock_surface;

	{
		eglLockSurfaceKHR = NULL;
		eglUnlockSurfaceKHR = NULL;
	}

	_EGL_KHR_lock_surface = 0;
	if (glloader_is_supported("EGL_KHR_lock_surface"))
	{
		_EGL_KHR_lock_surface = 1;

		LOAD_FUNC1(eglLockSurfaceKHR);
		LOAD_FUNC1(eglUnlockSurfaceKHR);
	}
}

void init_EGL_KHR_lock_surface2()
{
	glloader_EGL_KHR_lock_surface2 = _glloader_EGL_KHR_lock_surface2;

	_EGL_KHR_lock_surface2 = 0;
	if (glloader_is_supported("EGL_KHR_lock_surface2"))
	{
		_EGL_KHR_lock_surface2 = 1;
	}
}

void init_EGL_KHR_lock_surface3()
{
	glloader_EGL_KHR_lock_surface3 = _glloader_EGL_KHR_lock_surface3;

	{
		eglLockSurfaceKHR = NULL;
		eglUnlockSurfaceKHR = NULL;
		eglQuerySurface64KHR = NULL;
	}

	_EGL_KHR_lock_surface3 = 0;
	if (glloader_is_supported("EGL_KHR_lock_surface3"))
	{
		_EGL_KHR_lock_surface3 = 1;

		LOAD_FUNC1(eglLockSurfaceKHR);
		LOAD_FUNC1(eglUnlockSurfaceKHR);
		LOAD_FUNC1(eglQuerySurface64KHR);
	}
}

void init_EGL_KHR_partial_update()
{
	glloader_EGL_KHR_partial_update = _glloader_EGL_KHR_partial_update;

	{
		eglSetDamageRegionKHR = NULL;
	}

	_EGL_KHR_partial_update = 0;
	if (glloader_is_supported("EGL_KHR_partial_update"))
	{
		_EGL_KHR_partial_update = 1;

		LOAD_FUNC1(eglSetDamageRegionKHR);
	}
}

void init_EGL_KHR_platform_android()
{
	glloader_EGL_KHR_platform_android = _glloader_EGL_KHR_platform_android;

	_EGL_KHR_platform_android = 0;
	if (glloader_is_supported("EGL_KHR_platform_android"))
	{
		_EGL_KHR_platform_android = 1;
	}
}

void init_EGL_KHR_platform_gbm()
{
	glloader_EGL_KHR_platform_gbm = _glloader_EGL_KHR_platform_gbm;

	_EGL_KHR_platform_gbm = 0;
	if (glloader_is_supported("EGL_KHR_platform_gbm"))
	{
		_EGL_KHR_platform_gbm = 1;
	}
}

void init_EGL_KHR_platform_wayland()
{
	glloader_EGL_KHR_platform_wayland = _glloader_EGL_KHR_platform_wayland;

	_EGL_KHR_platform_wayland = 0;
	if (glloader_is_supported("EGL_KHR_platform_wayland"))
	{
		_EGL_KHR_platform_wayland = 1;
	}
}

void init_EGL_KHR_platform_x11()
{
	glloader_EGL_KHR_platform_x11 = _glloader_EGL_KHR_platform_x11;

	_EGL_KHR_platform_x11 = 0;
	if (glloader_is_supported("EGL_KHR_platform_x11"))
	{
		_EGL_KHR_platform_x11 = 1;
	}
}

void init_EGL_KHR_reusable_sync()
{
	glloader_EGL_KHR_reusable_sync = _glloader_EGL_KHR_reusable_sync;

	{
		eglCreateSyncKHR = NULL;
		eglDestroySyncKHR = NULL;
		eglClientWaitSyncKHR = NULL;
		eglSignalSyncKHR = NULL;
		eglGetSyncAttribKHR = NULL;
	}

	_EGL_KHR_reusable_sync = 0;
	if (glloader_is_supported("EGL_KHR_reusable_sync"))
	{
		_EGL_KHR_reusable_sync = 1;

		LOAD_FUNC1(eglCreateSyncKHR);
		LOAD_FUNC1(eglDestroySyncKHR);
		LOAD_FUNC1(eglClientWaitSyncKHR);
		LOAD_FUNC1(eglSignalSyncKHR);
		LOAD_FUNC1(eglGetSyncAttribKHR);
	}
}

void init_EGL_KHR_stream()
{
	glloader_EGL_KHR_stream = _glloader_EGL_KHR_stream;

	{
		eglCreateStreamKHR = NULL;
		eglDestroyStreamKHR = NULL;
		eglStreamAttribKHR = NULL;
		eglQueryStreamKHR = NULL;
		eglQueryStreamu64KHR = NULL;
	}

	_EGL_KHR_stream = 0;
	if (glloader_is_supported("EGL_KHR_stream"))
	{
		_EGL_KHR_stream = 1;

		LOAD_FUNC1(eglCreateStreamKHR);
		LOAD_FUNC1(eglDestroyStreamKHR);
		LOAD_FUNC1(eglStreamAttribKHR);
		LOAD_FUNC1(eglQueryStreamKHR);
		LOAD_FUNC1(eglQueryStreamu64KHR);
	}
}

void init_EGL_KHR_stream_consumer_gltexture()
{
	glloader_EGL_KHR_stream_consumer_gltexture = _glloader_EGL_KHR_stream_consumer_gltexture;

	{
		eglStreamConsumerGLTextureExternalKHR = NULL;
		eglStreamConsumerAcquireKHR = NULL;
		eglStreamConsumerReleaseKHR = NULL;
	}

	_EGL_KHR_stream_consumer_gltexture = 0;
	if (glloader_is_supported("EGL_KHR_stream_consumer_gltexture"))
	{
		_EGL_KHR_stream_consumer_gltexture = 1;

		LOAD_FUNC1(eglStreamConsumerGLTextureExternalKHR);
		LOAD_FUNC1(eglStreamConsumerAcquireKHR);
		LOAD_FUNC1(eglStreamConsumerReleaseKHR);
	}
}

void init_EGL_KHR_stream_cross_process_fd()
{
	glloader_EGL_KHR_stream_cross_process_fd = _glloader_EGL_KHR_stream_cross_process_fd;

	{
		eglGetStreamFileDescriptorKHR = NULL;
		eglCreateStreamFromFileDescriptorKHR = NULL;
	}

	_EGL_KHR_stream_cross_process_fd = 0;
	if (glloader_is_supported("EGL_KHR_stream_cross_process_fd"))
	{
		_EGL_KHR_stream_cross_process_fd = 1;

		LOAD_FUNC1(eglGetStreamFileDescriptorKHR);
		LOAD_FUNC1(eglCreateStreamFromFileDescriptorKHR);
	}
}

void init_EGL_KHR_stream_fifo()
{
	glloader_EGL_KHR_stream_fifo = _glloader_EGL_KHR_stream_fifo;

	{
		eglQueryStreamTimeKHR = NULL;
	}

	_EGL_KHR_stream_fifo = 0;
	if (glloader_is_supported("EGL_KHR_stream_fifo"))
	{
		_EGL_KHR_stream_fifo = 1;

		LOAD_FUNC1(eglQueryStreamTimeKHR);
	}
}

void init_EGL_KHR_stream_producer_aldatalocator()
{
	glloader_EGL_KHR_stream_producer_aldatalocator = _glloader_EGL_KHR_stream_producer_aldatalocator;

	_EGL_KHR_stream_producer_aldatalocator = 0;
	if (glloader_is_supported("EGL_KHR_stream_producer_aldatalocator"))
	{
		_EGL_KHR_stream_producer_aldatalocator = 1;
	}
}

void init_EGL_KHR_stream_producer_eglsurface()
{
	glloader_EGL_KHR_stream_producer_eglsurface = _glloader_EGL_KHR_stream_producer_eglsurface;

	{
		eglCreateStreamProducerSurface = NULL;
	}

	_EGL_KHR_stream_producer_eglsurface = 0;
	if (glloader_is_supported("EGL_KHR_stream_producer_eglsurface"))
	{
		_EGL_KHR_stream_producer_eglsurface = 1;

		LOAD_FUNC1(eglCreateStreamProducerSurface);
	}
}

void init_EGL_KHR_surfaceless_context()
{
	glloader_EGL_KHR_surfaceless_context = _glloader_EGL_KHR_surfaceless_context;

	_EGL_KHR_surfaceless_context = 0;
	if (glloader_is_supported("EGL_KHR_surfaceless_context"))
	{
		_EGL_KHR_surfaceless_context = 1;
	}
}

void init_EGL_KHR_swap_buffers_with_damage()
{
	glloader_EGL_KHR_swap_buffers_with_damage = _glloader_EGL_KHR_swap_buffers_with_damage;

	{
		eglSwapBuffersWithDamageKHR = NULL;
	}

	_EGL_KHR_swap_buffers_with_damage = 0;
	if (glloader_is_supported("EGL_KHR_swap_buffers_with_damage"))
	{
		_EGL_KHR_swap_buffers_with_damage = 1;

		LOAD_FUNC1(eglSwapBuffersWithDamageKHR);
	}
}

void init_EGL_KHR_vg_parent_image()
{
	glloader_EGL_KHR_vg_parent_image = _glloader_EGL_KHR_vg_parent_image;

	_EGL_KHR_vg_parent_image = 0;
	if (glloader_is_supported("EGL_KHR_vg_parent_image"))
	{
		_EGL_KHR_vg_parent_image = 1;
	}
}

void init_EGL_KHR_wait_sync()
{
	glloader_EGL_KHR_wait_sync = _glloader_EGL_KHR_wait_sync;

	{
		eglWaitSyncKHR = NULL;
	}

	_EGL_KHR_wait_sync = 0;
	if (glloader_is_supported("EGL_KHR_wait_sync"))
	{
		_EGL_KHR_wait_sync = 1;

		LOAD_FUNC1(eglWaitSyncKHR);
	}
}

void init_EGL_MESA_drm_image()
{
	glloader_EGL_MESA_drm_image = _glloader_EGL_MESA_drm_image;

	{
		eglCreateDRMImageMESA = NULL;
		eglExportDRMImageMESA = NULL;
	}

	_EGL_MESA_drm_image = 0;
	if (glloader_is_supported("EGL_MESA_drm_image"))
	{
		_EGL_MESA_drm_image = 1;

		LOAD_FUNC1(eglCreateDRMImageMESA);
		LOAD_FUNC1(eglExportDRMImageMESA);
	}
}

void init_EGL_MESA_image_dma_buf_export()
{
	glloader_EGL_MESA_image_dma_buf_export = _glloader_EGL_MESA_image_dma_buf_export;

	{
		eglExportDMABUFImageQueryMESA = NULL;
		eglExportDMABUFImageMESA = NULL;
	}

	_EGL_MESA_image_dma_buf_export = 0;
	if (glloader_is_supported("EGL_MESA_image_dma_buf_export"))
	{
		_EGL_MESA_image_dma_buf_export = 1;

		LOAD_FUNC1(eglExportDMABUFImageQueryMESA);
		LOAD_FUNC1(eglExportDMABUFImageMESA);
	}
}

void init_EGL_MESA_platform_gbm()
{
	glloader_EGL_MESA_platform_gbm = _glloader_EGL_MESA_platform_gbm;

	_EGL_MESA_platform_gbm = 0;
	if (glloader_is_supported("EGL_MESA_platform_gbm"))
	{
		_EGL_MESA_platform_gbm = 1;
	}
}

void init_EGL_NOK_swap_region2()
{
	glloader_EGL_NOK_swap_region2 = _glloader_EGL_NOK_swap_region2;

	{
		eglSwapBuffersRegion2NOK = NULL;
	}

	_EGL_NOK_swap_region2 = 0;
	if (glloader_is_supported("EGL_NOK_swap_region2"))
	{
		_EGL_NOK_swap_region2 = 1;

		LOAD_FUNC1(eglSwapBuffersRegion2NOK);
	}
}

void init_EGL_NOK_texture_from_pixmap()
{
	glloader_EGL_NOK_texture_from_pixmap = _glloader_EGL_NOK_texture_from_pixmap;

	_EGL_NOK_texture_from_pixmap = 0;
	if (glloader_is_supported("EGL_NOK_texture_from_pixmap"))
	{
		_EGL_NOK_texture_from_pixmap = 1;
	}
}

void init_EGL_NV_3dvision_surface()
{
	glloader_EGL_NV_3dvision_surface = _glloader_EGL_NV_3dvision_surface;

	_EGL_NV_3dvision_surface = 0;
	if (glloader_is_supported("EGL_NV_3dvision_surface"))
	{
		_EGL_NV_3dvision_surface = 1;
	}
}

void init_EGL_NV_coverage_sample()
{
	glloader_EGL_NV_coverage_sample = _glloader_EGL_NV_coverage_sample;

	_EGL_NV_coverage_sample = 0;
	if (glloader_is_supported("EGL_NV_coverage_sample"))
	{
		_EGL_NV_coverage_sample = 1;
	}
}

void init_EGL_NV_coverage_sample_resolve()
{
	glloader_EGL_NV_coverage_sample_resolve = _glloader_EGL_NV_coverage_sample_resolve;

	_EGL_NV_coverage_sample_resolve = 0;
	if (glloader_is_supported("EGL_NV_coverage_sample_resolve"))
	{
		_EGL_NV_coverage_sample_resolve = 1;
	}
}

void init_EGL_NV_cuda_event()
{
	glloader_EGL_NV_cuda_event = _glloader_EGL_NV_cuda_event;

	_EGL_NV_cuda_event = 0;
	if (glloader_is_supported("EGL_NV_cuda_event"))
	{
		_EGL_NV_cuda_event = 1;
	}
}

void init_EGL_NV_depth_nonlinear()
{
	glloader_EGL_NV_depth_nonlinear = _glloader_EGL_NV_depth_nonlinear;

	_EGL_NV_depth_nonlinear = 0;
	if (glloader_is_supported("EGL_NV_depth_nonlinear"))
	{
		_EGL_NV_depth_nonlinear = 1;
	}
}

void init_EGL_NV_device_cuda()
{
	glloader_EGL_NV_device_cuda = _glloader_EGL_NV_device_cuda;

	_EGL_NV_device_cuda = 0;
	if (glloader_is_supported("EGL_NV_device_cuda"))
	{
		_EGL_NV_device_cuda = 1;
	}
}

void init_EGL_NV_native_query()
{
	glloader_EGL_NV_native_query = _glloader_EGL_NV_native_query;

	{
		eglQueryNativeDisplayNV = NULL;
		eglQueryNativeWindowNV = NULL;
		eglQueryNativePixmapNV = NULL;
	}

	_EGL_NV_native_query = 0;
	if (glloader_is_supported("EGL_NV_native_query"))
	{
		_EGL_NV_native_query = 1;

		LOAD_FUNC1(eglQueryNativeDisplayNV);
		LOAD_FUNC1(eglQueryNativeWindowNV);
		LOAD_FUNC1(eglQueryNativePixmapNV);
	}
}

void init_EGL_NV_post_convert_rounding()
{
	glloader_EGL_NV_post_convert_rounding = _glloader_EGL_NV_post_convert_rounding;

	_EGL_NV_post_convert_rounding = 0;
	if (glloader_is_supported("EGL_NV_post_convert_rounding"))
	{
		_EGL_NV_post_convert_rounding = 1;
	}
}

void init_EGL_NV_post_sub_buffer()
{
	glloader_EGL_NV_post_sub_buffer = _glloader_EGL_NV_post_sub_buffer;

	{
		eglPostSubBufferNV = NULL;
	}

	_EGL_NV_post_sub_buffer = 0;
	if (glloader_is_supported("EGL_NV_post_sub_buffer"))
	{
		_EGL_NV_post_sub_buffer = 1;

		LOAD_FUNC1(eglPostSubBufferNV);
	}
}

void init_EGL_NV_stream_sync()
{
	glloader_EGL_NV_stream_sync = _glloader_EGL_NV_stream_sync;

	{
		eglCreateStreamSyncNV = NULL;
	}

	_EGL_NV_stream_sync = 0;
	if (glloader_is_supported("EGL_NV_stream_sync"))
	{
		_EGL_NV_stream_sync = 1;

		LOAD_FUNC1(eglCreateStreamSyncNV);
	}
}

void init_EGL_NV_sync()
{
	glloader_EGL_NV_sync = _glloader_EGL_NV_sync;

	{
		eglCreateFenceSyncNV = NULL;
		eglDestroySyncNV = NULL;
		eglFenceNV = NULL;
		eglClientWaitSyncNV = NULL;
		eglSignalSyncNV = NULL;
		eglGetSyncAttribNV = NULL;
	}

	_EGL_NV_sync = 0;
	if (glloader_is_supported("EGL_NV_sync"))
	{
		_EGL_NV_sync = 1;

		LOAD_FUNC1(eglCreateFenceSyncNV);
		LOAD_FUNC1(eglDestroySyncNV);
		LOAD_FUNC1(eglFenceNV);
		LOAD_FUNC1(eglClientWaitSyncNV);
		LOAD_FUNC1(eglSignalSyncNV);
		LOAD_FUNC1(eglGetSyncAttribNV);
	}
}

void init_EGL_NV_system_time()
{
	glloader_EGL_NV_system_time = _glloader_EGL_NV_system_time;

	{
		eglGetSystemTimeFrequencyNV = NULL;
		eglGetSystemTimeNV = NULL;
	}

	_EGL_NV_system_time = 0;
	if (glloader_is_supported("EGL_NV_system_time"))
	{
		_EGL_NV_system_time = 1;

		LOAD_FUNC1(eglGetSystemTimeFrequencyNV);
		LOAD_FUNC1(eglGetSystemTimeNV);
	}
}

void init_EGL_TIZEN_image_native_buffer()
{
	glloader_EGL_TIZEN_image_native_buffer = _glloader_EGL_TIZEN_image_native_buffer;

	_EGL_TIZEN_image_native_buffer = 0;
	if (glloader_is_supported("EGL_TIZEN_image_native_buffer"))
	{
		_EGL_TIZEN_image_native_buffer = 1;
	}
}

void init_EGL_TIZEN_image_native_surface()
{
	glloader_EGL_TIZEN_image_native_surface = _glloader_EGL_TIZEN_image_native_surface;

	_EGL_TIZEN_image_native_surface = 0;
	if (glloader_is_supported("EGL_TIZEN_image_native_surface"))
	{
		_EGL_TIZEN_image_native_surface = 1;
	}
}

void init_EGL_VERSION_1_1()
{
	glloader_EGL_VERSION_1_1 = _glloader_EGL_VERSION_1_1;

	_EGL_VERSION_1_1 = 0;
	if (glloader_is_supported("EGL_VERSION_1_1"))
	{
		_EGL_VERSION_1_1 = 1;

		LOAD_FUNC1(eglGetError);
		LOAD_FUNC1(eglGetDisplay);
		LOAD_FUNC1(eglInitialize);
		LOAD_FUNC1(eglTerminate);
		LOAD_FUNC1(eglQueryString);
		LOAD_FUNC1(eglGetConfigs);
		LOAD_FUNC1(eglChooseConfig);
		LOAD_FUNC1(eglGetConfigAttrib);
		LOAD_FUNC1(eglCreateWindowSurface);
		LOAD_FUNC1(eglCreatePbufferSurface);
		LOAD_FUNC1(eglCreatePixmapSurface);
		LOAD_FUNC1(eglDestroySurface);
		LOAD_FUNC1(eglQuerySurface);
		LOAD_FUNC1(eglSurfaceAttrib);
		LOAD_FUNC1(eglBindTexImage);
		LOAD_FUNC1(eglReleaseTexImage);
		LOAD_FUNC1(eglSwapInterval);
		LOAD_FUNC1(eglCreateContext);
		LOAD_FUNC1(eglDestroyContext);
		LOAD_FUNC1(eglMakeCurrent);
		LOAD_FUNC1(eglGetCurrentSurface);
		LOAD_FUNC1(eglGetCurrentDisplay);
		LOAD_FUNC1(eglQueryContext);
		LOAD_FUNC1(eglWaitGL);
		LOAD_FUNC1(eglWaitNative);
		LOAD_FUNC1(eglSwapBuffers);
		LOAD_FUNC1(eglCopyBuffers);
		LOAD_FUNC1(eglGetProcAddress);
	}
}

void init_EGL_VERSION_1_2()
{
	glloader_EGL_VERSION_1_2 = _glloader_EGL_VERSION_1_2;

	_EGL_VERSION_1_2 = 0;
	if (glloader_is_supported("EGL_VERSION_1_2"))
	{
		_EGL_VERSION_1_2 = 1;

		LOAD_FUNC1(eglBindAPI);
		LOAD_FUNC1(eglQueryAPI);
		LOAD_FUNC1(eglWaitClient);
		LOAD_FUNC1(eglReleaseThread);
		LOAD_FUNC1(eglCreatePbufferFromClientBuffer);
	}
}

void init_EGL_VERSION_1_3()
{
	glloader_EGL_VERSION_1_3 = _glloader_EGL_VERSION_1_3;

	_EGL_VERSION_1_3 = 0;
	if (glloader_is_supported("EGL_VERSION_1_3"))
	{
		_EGL_VERSION_1_3 = 1;
	}
}

void init_EGL_VERSION_1_4()
{
	glloader_EGL_VERSION_1_4 = _glloader_EGL_VERSION_1_4;

	_EGL_VERSION_1_4 = 0;
	if (glloader_is_supported("EGL_VERSION_1_4"))
	{
		_EGL_VERSION_1_4 = 1;

		LOAD_FUNC1(eglGetCurrentContext);
	}
}

void init_EGL_VERSION_1_5()
{
	glloader_EGL_VERSION_1_5 = _glloader_EGL_VERSION_1_5;

	_EGL_VERSION_1_5 = 0;
	if (glloader_is_supported("EGL_VERSION_1_5"))
	{
		_EGL_VERSION_1_5 = 1;

		LOAD_FUNC1(eglCreateSync);
		LOAD_FUNC1(eglDestroySync);
		LOAD_FUNC1(eglClientWaitSync);
		LOAD_FUNC1(eglGetSyncAttrib);
		LOAD_FUNC1(eglGetPlatformDisplay);
		LOAD_FUNC1(eglCreatePlatformWindowSurface);
		LOAD_FUNC1(eglCreatePlatformPixmapSurface);
		LOAD_FUNC1(eglWaitSync);
	}
	else
	{
		if (glloader_is_supported("EGL_KHR_fence_sync"))
		{
			LOAD_FUNC2(eglCreateSync, eglCreateSyncKHR);
			LOAD_FUNC2(eglDestroySync, eglDestroySyncKHR);
			LOAD_FUNC2(eglClientWaitSync, eglClientWaitSyncKHR);
			LOAD_FUNC2(eglGetSyncAttrib, eglGetSyncAttribKHR);
		}
		if (glloader_is_supported("EGL_EXT_platform_base"))
		{
			LOAD_FUNC2(eglGetPlatformDisplay, eglGetPlatformDisplayEXT);
			LOAD_FUNC2(eglCreatePlatformWindowSurface, eglCreatePlatformWindowSurfaceEXT);
			LOAD_FUNC2(eglCreatePlatformPixmapSurface, eglCreatePlatformPixmapSurfaceEXT);
		}
		if (glloader_is_supported("EGL_KHR_wait_sync"))
		{
			LOAD_FUNC2(eglWaitSync, eglWaitSyncKHR);
		}

		if (glloader_is_supported("EGL_KHR_fence_sync")
			&& glloader_is_supported("EGL_EXT_platform_base")
			&& glloader_is_supported("EGL_KHR_wait_sync"))
		{
			_EGL_VERSION_1_5 = 1;
			promote_high("EGL_VERSION_1_5");
		}
	}
}


void egl_init()
{
	init_EGL_ANDROID_blob_cache();
	init_EGL_ANDROID_framebuffer_target();
	init_EGL_ANDROID_image_native_buffer();
	init_EGL_ANDROID_native_fence_sync();
	init_EGL_ANDROID_recordable();
	init_EGL_ANGLE_d3d_share_handle_client_buffer();
	init_EGL_ANGLE_device_d3d();
	init_EGL_ANGLE_direct3d_display();
	init_EGL_ANGLE_platform_angle();
	init_EGL_ANGLE_platform_angle_d3d();
	init_EGL_ANGLE_platform_angle_opengl();
	init_EGL_ANGLE_query_surface_pointer();
	init_EGL_ANGLE_robust_resource_initialization();
	init_EGL_ANGLE_software_display();
	init_EGL_ANGLE_surface_d3d_texture_2d_share_handle();
	init_EGL_ANGLE_window_fixed_size();
	init_EGL_ARM_pixmap_multisample_discard();
	init_EGL_EXT_buffer_age();
	init_EGL_EXT_client_extensions();
	init_EGL_EXT_create_context_robustness();
	init_EGL_EXT_device_base();
	init_EGL_EXT_device_drm();
	init_EGL_EXT_device_enumeration();
	init_EGL_EXT_device_openwf();
	init_EGL_EXT_device_query();
	init_EGL_EXT_image_dma_buf_import();
	init_EGL_EXT_multiview_window();
	init_EGL_EXT_output_base();
	init_EGL_EXT_platform_base();
	init_EGL_EXT_platform_device();
	init_EGL_EXT_platform_wayland();
	init_EGL_EXT_platform_x11();
	init_EGL_EXT_protected_surface();
	init_EGL_EXT_stream_consumer_egloutput();
	init_EGL_EXT_swap_buffers_with_damage();
	init_EGL_EXT_yuv_surface();
	init_EGL_HI_clientpixmap();
	init_EGL_HI_colorformats();
	init_EGL_IMG_context_priority();
	init_EGL_KHR_cl_event();
	init_EGL_KHR_cl_event2();
	init_EGL_KHR_config_attribs();
	init_EGL_KHR_create_context();
	init_EGL_KHR_create_context_no_error();
	init_EGL_KHR_fence_sync();
	init_EGL_KHR_get_all_proc_addresses();
	init_EGL_KHR_gl_colorspace();
	init_EGL_KHR_gl_texture_2D_image();
	init_EGL_KHR_image();
	init_EGL_KHR_image_base();
	init_EGL_KHR_image_pixmap();
	init_EGL_KHR_lock_surface();
	init_EGL_KHR_lock_surface2();
	init_EGL_KHR_lock_surface3();
	init_EGL_KHR_partial_update();
	init_EGL_KHR_platform_android();
	init_EGL_KHR_platform_gbm();
	init_EGL_KHR_platform_wayland();
	init_EGL_KHR_platform_x11();
	init_EGL_KHR_reusable_sync();
	init_EGL_KHR_stream();
	init_EGL_KHR_stream_consumer_gltexture();
	init_EGL_KHR_stream_cross_process_fd();
	init_EGL_KHR_stream_fifo();
	init_EGL_KHR_stream_producer_aldatalocator();
	init_EGL_KHR_stream_producer_eglsurface();
	init_EGL_KHR_surfaceless_context();
	init_EGL_KHR_swap_buffers_with_damage();
	init_EGL_KHR_vg_parent_image();
	init_EGL_KHR_wait_sync();
	init_EGL_MESA_drm_image();
	init_EGL_MESA_image_dma_buf_export();
	init_EGL_MESA_platform_gbm();
	init_EGL_NOK_swap_region2();
	init_EGL_NOK_texture_from_pixmap();
	init_EGL_NV_3dvision_surface();
	init_EGL_NV_coverage_sample();
	init_EGL_NV_coverage_sample_resolve();
	init_EGL_NV_cuda_event();
	init_EGL_NV_depth_nonlinear();
	init_EGL_NV_device_cuda();
	init_EGL_NV_native_query();
	init_EGL_NV_post_convert_rounding();
	init_EGL_NV_post_sub_buffer();
	init_EGL_NV_stream_sync();
	init_EGL_NV_sync();
	init_EGL_NV_system_time();
	init_EGL_TIZEN_image_native_buffer();
	init_EGL_TIZEN_image_native_surface();
	init_EGL_VERSION_1_1();
	init_EGL_VERSION_1_2();
	init_EGL_VERSION_1_3();
	init_EGL_VERSION_1_4();
	init_EGL_VERSION_1_5();
}

#ifdef __cplusplus
}
#endif

#endif		/* GLLOADER_EGL */
