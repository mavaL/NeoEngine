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

#ifdef GLLOADER_GLES

#ifdef __cplusplus
extern "C"
{
#endif

char _GLES_NV_pack_subimage = 0;
char _GLES_NV_platform_binary = 0;
char _GLES_AMD_compressed_3DC_texture = 0;
char _GLES_AMD_compressed_ATC_texture = 0;
char _GLES_AMD_performance_monitor = 0;
char _GLES_AMD_program_binary_Z400 = 0;
char _GLES_ANDROID_extension_pack_es31a = 0;
char _GLES_ANGLE_depth_texture = 0;
char _GLES_ANGLE_framebuffer_blit = 0;
char _GLES_ANGLE_framebuffer_multisample = 0;
char _GLES_ANGLE_instanced_arrays = 0;
char _GLES_ANGLE_pack_reverse_row_order = 0;
char _GLES_ANGLE_program_binary = 0;
char _GLES_ANGLE_robust_resource_initialization = 0;
char _GLES_ANGLE_texture_compression_dxt1 = 0;
char _GLES_ANGLE_texture_compression_dxt3 = 0;
char _GLES_ANGLE_texture_compression_dxt5 = 0;
char _GLES_ANGLE_texture_usage = 0;
char _GL_EXT_timer_query = 0;
char _GLES_ANGLE_translated_shader_source = 0;
char _GLES_APPLE_clip_distance = 0;
char _GLES_APPLE_color_buffer_packed_float = 0;
char _GLES_APPLE_copy_texture_levels = 0;
char _GLES_APPLE_framebuffer_multisample = 0;
char _GLES_APPLE_rgb_422 = 0;
char _GLES_APPLE_sync = 0;
char _GLES_APPLE_texture_2D_limited_npot = 0;
char _GLES_APPLE_texture_format_BGRA8888 = 0;
char _GLES_APPLE_texture_max_level = 0;
char _GLES_APPLE_texture_packed_float = 0;
char _GLES_ARM_mali_program_binary = 0;
char _GLES_ARM_mali_shader_binary = 0;
char _GLES_ARM_rgba8 = 0;
char _GLES_ARM_shader_framebuffer_fetch = 0;
char _GLES_ARM_shader_framebuffer_fetch_depth_stencil = 0;
char _GLES_DMP_program_binary = 0;
char _GLES_EXT_base_instance = 0;
char _GLES_EXT_blend_minmax = 0;
char _GLES_EXT_buffer_storage = 0;
char _GLES_EXT_color_buffer_float = 0;
char _GLES_EXT_color_buffer_half_float = 0;
char _GLES_EXT_compressed_ETC1_RGB8_sub_texture = 0;
char _GLES_EXT_copy_image = 0;
char _GLES_EXT_debug_label = 0;
char _GLES_EXT_debug_marker = 0;
char _GLES_EXT_discard_framebuffer = 0;
char _GLES_EXT_disjoint_timer_query = 0;
char _GLES_EXT_draw_buffers = 0;
char _GLES_EXT_draw_buffers_indexed = 0;
char _GLES_EXT_draw_elements_base_vertex = 0;
char _GLES_EXT_draw_instanced = 0;
char _GLES_EXT_float_blend = 0;
char _GLES_EXT_frag_depth = 0;
char _GLES_EXT_geometry_shader = 0;
char _GLES_EXT_gpu_shader5 = 0;
char _GLES_EXT_instanced_arrays = 0;
char _GLES_EXT_map_buffer_range = 0;
char _GLES_EXT_multisampled_render_to_texture = 0;
char _GLES_EXT_multiview_draw_buffers = 0;
char _GLES_EXT_multi_draw_arrays = 0;
char _GLES_EXT_multi_draw_indirect = 0;
char _GLES_EXT_occlusion_query_boolean = 0;
char _GLES_EXT_post_depth_coverage = 0;
char _GLES_EXT_primitive_bounding_box = 0;
char _GLES_EXT_pvrtc_sRGB = 0;
char _GLES_EXT_raster_multisample = 0;
char _GLES_EXT_read_format_bgra = 0;
char _GLES_EXT_render_snorm = 0;
char _GLES_EXT_robustness = 0;
char _GLES_EXT_separate_shader_objects = 0;
char _GLES_EXT_shader_framebuffer_fetch = 0;
char _GLES_EXT_shader_implicit_conversions = 0;
char _GLES_EXT_shader_integer_mix = 0;
char _GLES_EXT_shader_io_blocks = 0;
char _GLES_EXT_shader_pixel_local_storage = 0;
char _GLES_EXT_shader_texture_lod = 0;
char _GLES_EXT_shadow_samplers = 0;
char _GLES_EXT_sparse_texture = 0;
char _GLES_EXT_sRGB = 0;
char _GLES_EXT_sRGB_write_control = 0;
char _GLES_EXT_tessellation_shader = 0;
char _GLES_EXT_texture_border_clamp = 0;
char _GLES_EXT_texture_buffer = 0;
char _GLES_EXT_texture_compression_dxt1 = 0;
char _GLES_EXT_texture_compression_latc = 0;
char _GLES_EXT_texture_compression_s3tc = 0;
char _GLES_EXT_texture_cube_map_array = 0;
char _GLES_EXT_texture_filter_anisotropic = 0;
char _GLES_EXT_texture_filter_minmax = 0;
char _GLES_EXT_texture_format_BGRA8888 = 0;
char _GLES_EXT_texture_lod_bias = 0;
char _GLES_EXT_texture_norm16 = 0;
char _GLES_EXT_texture_rg = 0;
char _GLES_EXT_texture_sRGB_decode = 0;
char _GLES_EXT_texture_sRGB_R8 = 0;
char _GLES_EXT_texture_sRGB_RG8 = 0;
char _GLES_EXT_texture_storage = 0;
char _GLES_EXT_texture_type_2_10_10_10_REV = 0;
char _GLES_EXT_texture_view = 0;
char _GLES_EXT_unpack_subimage = 0;
char _GLES_EXT_YUV_target = 0;
char _GLES_FJ_shader_binary_GCCSO = 0;
char _GLES_IMG_multisampled_render_to_texture = 0;
char _GLES_IMG_program_binary = 0;
char _GLES_IMG_read_format = 0;
char _GLES_shader_binary = 0;
char _GLES_IMG_texture_compression_pvrtc = 0;
char _GLES_IMG_texture_compression_pvrtc2 = 0;
char _GLES_IMG_texture_env_enhanced_fixed_function = 0;
char _GLES_IMG_user_clip_plane = 0;
char _GLES_INTEL_performance_query = 0;
char _GLES_KHR_blend_equation_advanced = 0;
char _GLES_KHR_context_flush_control = 0;
char _GLES_KHR_debug = 0;
char _GLES_KHR_no_error = 0;
char _GLES_KHR_robustness = 0;
char _GLES_KHR_robust_buffer_access_behavior = 0;
char _GLES_KHR_texture_compression_astc_ldr = 0;
char _GLES_NV_3dvision_settings = 0;
char _GLES_NV_bgr = 0;
char _GLES_NV_bindless_texture = 0;
char _GLES_NV_blend_equation_advanced = 0;
char _GLES_NV_conditional_render = 0;
char _GLES_NV_conservative_raster = 0;
char _GLES_NV_copy_buffer = 0;
char _GLES_NV_coverage_sample = 0;
char _GLES_NV_depth_nonlinear = 0;
char _GLES_NV_draw_buffers = 0;
char _GLES_NV_draw_instanced = 0;
char _GLES_NV_draw_texture = 0;
char _GLES_NV_EGL_stream_consumer_external = 0;
char _GLES_NV_explicit_attrib_location = 0;
char _GLES_NV_fbo_color_attachments = 0;
char _GLES_NV_fence = 0;
char _GLES_NV_fill_rectangle = 0;
char _GLES_NV_fragment_coverage_to_color = 0;
char _GLES_NV_fragment_shader_interlock = 0;
char _GLES_NV_framebuffer_blit = 0;
char _GLES_NV_framebuffer_mixed_samples = 0;
char _GLES_NV_framebuffer_multisample = 0;
char _GLES_NV_generate_mipmap_sRGB = 0;
char _GLES_NV_geometry_shader_passthrough = 0;
char _GLES_NV_image_formats = 0;
char _GLES_NV_instanced_arrays = 0;
char _GLES_NV_internalformat_sample_query = 0;
char _GLES_NV_non_square_matrices = 0;
char _GLES_NV_packed_float = 0;
char _GLES_NV_path_rendering = 0;
char _GLES_NV_path_rendering_shared_edge = 0;
char _GLES_NV_pixel_buffer_object = 0;
char _GLES_NV_polygon_mode = 0;
char _GLES_NV_read_buffer = 0;
char _GLES_NV_read_depth = 0;
char _GLES_NV_read_depth_stencil = 0;
char _GLES_NV_read_stencil = 0;
char _GLES_NV_sample_locations = 0;
char _GLES_NV_sample_mask_override_coverage = 0;
char _GLES_NV_shader_noperspective_interpolation = 0;
char _GLES_NV_shadow_samplers_array = 0;
char _GLES_NV_shadow_samplers_cube = 0;
char _GLES_NV_sRGB_formats = 0;
char _GLES_NV_texture_array = 0;
char _GLES_NV_texture_border_clamp = 0;
char _GLES_NV_texture_compression_latc = 0;
char _GLES_NV_texture_compression_s3tc = 0;
char _GLES_NV_texture_compression_s3tc_update = 0;
char _GLES_NV_texture_npot_2D_mipmap = 0;
char _GLES_NV_viewport_array = 0;
char _GLES_NV_viewport_array2 = 0;
char _GLES_OES_blend_equation_separate = 0;
char _GLES_OES_blend_func_separate = 0;
char _GLES_OES_blend_subtract = 0;
char _GLES_OES_byte_coordinates = 0;
char _GLES_OES_compressed_ETC1_RGB8_texture = 0;
char _GLES_OES_compressed_paletted_texture = 0;
char _GLES_OES_copy_image = 0;
char _GLES_OES_depth24 = 0;
char _GLES_OES_depth32 = 0;
char _GLES_OES_depth_texture = 0;
char _GLES_OES_depth_texture_cube_map = 0;
char _GLES_OES_draw_buffers_indexed = 0;
char _GLES_OES_draw_elements_base_vertex = 0;
char _GLES_OES_draw_texture = 0;
char _GLES_OES_EGL_image = 0;
char _GLES_OES_EGL_image_external = 0;
char _GLES_OES_EGL_image_external_essl3 = 0;
char _GLES_OES_element_index_uint = 0;
char _GLES_OES_extended_matrix_palette = 0;
char _GLES_OES_fbo_render_mipmap = 0;
char _GLES_OES_fixed_point = 0;
char _GLES_OES_fragment_precision_high = 0;
char _GLES_OES_framebuffer_object = 0;
char _GLES_OES_geometry_shader = 0;
char _GLES_OES_get_program_binary = 0;
char _GLES_OES_gpu_shader5 = 0;
char _GLES_OES_mapbuffer = 0;
char _GLES_OES_matrix_get = 0;
char _GLES_OES_matrix_palette = 0;
char _GLES_OES_packed_depth_stencil = 0;
char _GLES_OES_point_size_array = 0;
char _GLES_OES_point_sprite = 0;
char _GLES_OES_primitive_bounding_box = 0;
char _GLES_OES_query_matrix = 0;
char _GLES_OES_read_format = 0;
char _GLES_OES_required_internalformat = 0;
char _GLES_OES_rgb8_rgba8 = 0;
char _GL_OES_sample_shading = 0;
char _GL_OES_sample_variables = 0;
char _GLES_OES_shader_binary = 0;
char _GL_OES_shader_image_atomic = 0;
char _GLES_OES_shader_io_blocks = 0;
char _GL_OES_shader_multisample_interpolation = 0;
char _GLES_OES_shader_source = 0;
char _GLES_OES_single_precision = 0;
char _GLES_OES_standard_derivatives = 0;
char _GLES_OES_stencil1 = 0;
char _GLES_OES_stencil4 = 0;
char _GLES_OES_stencil8 = 0;
char _GLES_OES_stencil_wrap = 0;
char _GLES_OES_surfaceless_context = 0;
char _GLES_OES_tessellation_shader = 0;
char _GLES_OES_texture_3D = 0;
char _GLES_OES_texture_border_clamp = 0;
char _GLES_OES_texture_buffer = 0;
char _GLES_OES_texture_compression_astc = 0;
char _GLES_OES_texture_cube_map = 0;
char _GLES_OES_texture_cube_map_array = 0;
char _GLES_OES_texture_env_crossbar = 0;
char _GLES_OES_texture_float = 0;
char _GLES_OES_texture_float_linear = 0;
char _GLES_OES_texture_half_float = 0;
char _GLES_OES_texture_half_float_linear = 0;
char _GLES_OES_texture_mirrored_repeat = 0;
char _GLES_OES_texture_npot = 0;
char _GL_OES_texture_stencil8 = 0;
char _GL_OES_texture_storage_multisample_2d_array = 0;
char _GLES_OES_texture_view = 0;
char _GLES_OES_vertex_array_object = 0;
char _GLES_OES_vertex_half_float = 0;
char _GLES_OES_vertex_type_10_10_10_2 = 0;
char _GLES_OVR_multiview = 0;
char _GLES_OVR_multiview2 = 0;
char _GLES_QCOM_binning_control = 0;
char _GLES_QCOM_driver_control = 0;
char _GLES_QCOM_extended_get = 0;
char _GLES_QCOM_extended_get2 = 0;
char _GLES_QCOM_performance_monitor_global_mode = 0;
char _GLES_QCOM_tiled_rendering = 0;
char _GLES_QCOM_writeonly_rendering = 0;
char _GLES_VERSION_1_0 = 0;
char _GLES_VERSION_1_1 = 0;
char _GLES_VERSION_2_0 = 0;
char _GLES_VERSION_3_0 = 0;
char _GLES_VERSION_3_1 = 0;
char _GLES_VIV_shader_binary = 0;

static char GLLOADER_APIENTRY _glloader_GLES_NV_pack_subimage()
{
	return _GLES_NV_pack_subimage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_pack_subimage()
{
	glloader_init();
	return glloader_GLES_NV_pack_subimage();
}
glloader_GLES_NV_pack_subimageFUNC glloader_GLES_NV_pack_subimage = self_init_glloader_GLES_NV_pack_subimage;

static char GLLOADER_APIENTRY _glloader_GLES_NV_platform_binary()
{
	return _GLES_NV_platform_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_platform_binary()
{
	glloader_init();
	return glloader_GLES_NV_platform_binary();
}
glloader_GLES_NV_platform_binaryFUNC glloader_GLES_NV_platform_binary = self_init_glloader_GLES_NV_platform_binary;

static char GLLOADER_APIENTRY _glloader_GLES_AMD_compressed_3DC_texture()
{
	return _GLES_AMD_compressed_3DC_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_AMD_compressed_3DC_texture()
{
	glloader_init();
	return glloader_GLES_AMD_compressed_3DC_texture();
}
glloader_GLES_AMD_compressed_3DC_textureFUNC glloader_GLES_AMD_compressed_3DC_texture = self_init_glloader_GLES_AMD_compressed_3DC_texture;

static char GLLOADER_APIENTRY _glloader_GLES_AMD_compressed_ATC_texture()
{
	return _GLES_AMD_compressed_ATC_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_AMD_compressed_ATC_texture()
{
	glloader_init();
	return glloader_GLES_AMD_compressed_ATC_texture();
}
glloader_GLES_AMD_compressed_ATC_textureFUNC glloader_GLES_AMD_compressed_ATC_texture = self_init_glloader_GLES_AMD_compressed_ATC_texture;

static char GLLOADER_APIENTRY _glloader_GLES_AMD_performance_monitor()
{
	return _GLES_AMD_performance_monitor;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_AMD_performance_monitor()
{
	glloader_init();
	return glloader_GLES_AMD_performance_monitor();
}
glloader_GLES_AMD_performance_monitorFUNC glloader_GLES_AMD_performance_monitor = self_init_glloader_GLES_AMD_performance_monitor;

#ifdef GLES_AMD_performance_monitor

static void GLLOADER_APIENTRY self_init_glGetPerfMonitorGroupsAMD(GLint* numGroups, GLsizei groupsSize, GLuint* groups)
{
	glloader_init();
	glGetPerfMonitorGroupsAMD(numGroups, groupsSize, groups);
}
static void GLLOADER_APIENTRY self_init_glGetPerfMonitorCountersAMD(GLuint group, GLint* numCounters, GLint* maxActiveCounters, GLsizei countersSize, GLuint* counters)
{
	glloader_init();
	glGetPerfMonitorCountersAMD(group, numCounters, maxActiveCounters, countersSize, counters);
}
static void GLLOADER_APIENTRY self_init_glGetPerfMonitorGroupStringAMD(GLuint group, GLsizei bufSize, GLsizei* length, GLchar* groupString)
{
	glloader_init();
	glGetPerfMonitorGroupStringAMD(group, bufSize, length, groupString);
}
static void GLLOADER_APIENTRY self_init_glGetPerfMonitorCounterStringAMD(GLuint group, GLuint count, GLsizei bufSize, GLsizei* length, GLchar* counterString)
{
	glloader_init();
	glGetPerfMonitorCounterStringAMD(group, count, bufSize, length, counterString);
}
static void GLLOADER_APIENTRY self_init_glGetPerfMonitorCounterInfoAMD(GLuint group, GLuint counter, GLenum pname, GLvoid* data)
{
	glloader_init();
	glGetPerfMonitorCounterInfoAMD(group, counter, pname, data);
}
static void GLLOADER_APIENTRY self_init_glGenPerfMonitorsAMD(GLsizei n, GLuint* monitors)
{
	glloader_init();
	glGenPerfMonitorsAMD(n, monitors);
}
static void GLLOADER_APIENTRY self_init_glDeletePerfMonitorsAMD(GLsizei n, GLuint* monitors)
{
	glloader_init();
	glDeletePerfMonitorsAMD(n, monitors);
}
static void GLLOADER_APIENTRY self_init_glSelectPerfMonitorCountersAMD(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint* counterList)
{
	glloader_init();
	glSelectPerfMonitorCountersAMD(monitor, enable, group, numCounters, counterList);
}
static void GLLOADER_APIENTRY self_init_glBeginPerfMonitorAMD(GLuint monitor)
{
	glloader_init();
	glBeginPerfMonitorAMD(monitor);
}
static void GLLOADER_APIENTRY self_init_glEndPerfMonitorAMD(GLuint monitor)
{
	glloader_init();
	glEndPerfMonitorAMD(monitor);
}
static void GLLOADER_APIENTRY self_init_glGetPerfMonitorCounterDataAMD(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint* data, GLint* bytesWritten)
{
	glloader_init();
	glGetPerfMonitorCounterDataAMD(monitor, pname, dataSize, data, bytesWritten);
}

glGetPerfMonitorGroupsAMDFUNC glGetPerfMonitorGroupsAMD = self_init_glGetPerfMonitorGroupsAMD;
glGetPerfMonitorCountersAMDFUNC glGetPerfMonitorCountersAMD = self_init_glGetPerfMonitorCountersAMD;
glGetPerfMonitorGroupStringAMDFUNC glGetPerfMonitorGroupStringAMD = self_init_glGetPerfMonitorGroupStringAMD;
glGetPerfMonitorCounterStringAMDFUNC glGetPerfMonitorCounterStringAMD = self_init_glGetPerfMonitorCounterStringAMD;
glGetPerfMonitorCounterInfoAMDFUNC glGetPerfMonitorCounterInfoAMD = self_init_glGetPerfMonitorCounterInfoAMD;
glGenPerfMonitorsAMDFUNC glGenPerfMonitorsAMD = self_init_glGenPerfMonitorsAMD;
glDeletePerfMonitorsAMDFUNC glDeletePerfMonitorsAMD = self_init_glDeletePerfMonitorsAMD;
glSelectPerfMonitorCountersAMDFUNC glSelectPerfMonitorCountersAMD = self_init_glSelectPerfMonitorCountersAMD;
glBeginPerfMonitorAMDFUNC glBeginPerfMonitorAMD = self_init_glBeginPerfMonitorAMD;
glEndPerfMonitorAMDFUNC glEndPerfMonitorAMD = self_init_glEndPerfMonitorAMD;
glGetPerfMonitorCounterDataAMDFUNC glGetPerfMonitorCounterDataAMD = self_init_glGetPerfMonitorCounterDataAMD;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_AMD_program_binary_Z400()
{
	return _GLES_AMD_program_binary_Z400;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_AMD_program_binary_Z400()
{
	glloader_init();
	return glloader_GLES_AMD_program_binary_Z400();
}
glloader_GLES_AMD_program_binary_Z400FUNC glloader_GLES_AMD_program_binary_Z400 = self_init_glloader_GLES_AMD_program_binary_Z400;

static char GLLOADER_APIENTRY _glloader_GLES_ANDROID_extension_pack_es31a()
{
	return _GLES_ANDROID_extension_pack_es31a;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANDROID_extension_pack_es31a()
{
	glloader_init();
	return glloader_GLES_ANDROID_extension_pack_es31a();
}
glloader_GLES_ANDROID_extension_pack_es31aFUNC glloader_GLES_ANDROID_extension_pack_es31a = self_init_glloader_GLES_ANDROID_extension_pack_es31a;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_depth_texture()
{
	return _GLES_ANGLE_depth_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_depth_texture()
{
	glloader_init();
	return glloader_GLES_ANGLE_depth_texture();
}
glloader_GLES_ANGLE_depth_textureFUNC glloader_GLES_ANGLE_depth_texture = self_init_glloader_GLES_ANGLE_depth_texture;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_framebuffer_blit()
{
	return _GLES_ANGLE_framebuffer_blit;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_framebuffer_blit()
{
	glloader_init();
	return glloader_GLES_ANGLE_framebuffer_blit();
}
glloader_GLES_ANGLE_framebuffer_blitFUNC glloader_GLES_ANGLE_framebuffer_blit = self_init_glloader_GLES_ANGLE_framebuffer_blit;

#ifdef GLES_ANGLE_framebuffer_blit

static void GLLOADER_APIENTRY self_init_glBlitFramebufferANGLE(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	glloader_init();
	glBlitFramebufferANGLE(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

glBlitFramebufferANGLEFUNC glBlitFramebufferANGLE = self_init_glBlitFramebufferANGLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_framebuffer_multisample()
{
	return _GLES_ANGLE_framebuffer_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_framebuffer_multisample()
{
	glloader_init();
	return glloader_GLES_ANGLE_framebuffer_multisample();
}
glloader_GLES_ANGLE_framebuffer_multisampleFUNC glloader_GLES_ANGLE_framebuffer_multisample = self_init_glloader_GLES_ANGLE_framebuffer_multisample;

#ifdef GLES_ANGLE_framebuffer_multisample

static void GLLOADER_APIENTRY self_init_glRenderbufferStorageMultisampleANGLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glRenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}

glRenderbufferStorageMultisampleANGLEFUNC glRenderbufferStorageMultisampleANGLE = self_init_glRenderbufferStorageMultisampleANGLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_instanced_arrays()
{
	return _GLES_ANGLE_instanced_arrays;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_instanced_arrays()
{
	glloader_init();
	return glloader_GLES_ANGLE_instanced_arrays();
}
glloader_GLES_ANGLE_instanced_arraysFUNC glloader_GLES_ANGLE_instanced_arrays = self_init_glloader_GLES_ANGLE_instanced_arrays;

#ifdef GLES_ANGLE_instanced_arrays

static void GLLOADER_APIENTRY self_init_glVertexAttribDivisorANGLE(GLuint index, GLuint divisor)
{
	glloader_init();
	glVertexAttribDivisorANGLE(index, divisor);
}
static void GLLOADER_APIENTRY self_init_glDrawArraysInstancedANGLE(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	glloader_init();
	glDrawArraysInstancedANGLE(mode, first, count, primcount);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstancedANGLE(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount)
{
	glloader_init();
	glDrawElementsInstancedANGLE(mode, count, type, indices, primcount);
}

glVertexAttribDivisorANGLEFUNC glVertexAttribDivisorANGLE = self_init_glVertexAttribDivisorANGLE;
glDrawArraysInstancedANGLEFUNC glDrawArraysInstancedANGLE = self_init_glDrawArraysInstancedANGLE;
glDrawElementsInstancedANGLEFUNC glDrawElementsInstancedANGLE = self_init_glDrawElementsInstancedANGLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_pack_reverse_row_order()
{
	return _GLES_ANGLE_pack_reverse_row_order;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_pack_reverse_row_order()
{
	glloader_init();
	return glloader_GLES_ANGLE_pack_reverse_row_order();
}
glloader_GLES_ANGLE_pack_reverse_row_orderFUNC glloader_GLES_ANGLE_pack_reverse_row_order = self_init_glloader_GLES_ANGLE_pack_reverse_row_order;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_program_binary()
{
	return _GLES_ANGLE_program_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_program_binary()
{
	glloader_init();
	return glloader_GLES_ANGLE_program_binary();
}
glloader_GLES_ANGLE_program_binaryFUNC glloader_GLES_ANGLE_program_binary = self_init_glloader_GLES_ANGLE_program_binary;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_robust_resource_initialization()
{
	return _GLES_ANGLE_robust_resource_initialization;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_robust_resource_initialization()
{
	glloader_init();
	return glloader_GLES_ANGLE_robust_resource_initialization();
}
glloader_GLES_ANGLE_robust_resource_initializationFUNC glloader_GLES_ANGLE_robust_resource_initialization = self_init_glloader_GLES_ANGLE_robust_resource_initialization;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_texture_compression_dxt1()
{
	return _GLES_ANGLE_texture_compression_dxt1;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_texture_compression_dxt1()
{
	glloader_init();
	return glloader_GLES_ANGLE_texture_compression_dxt1();
}
glloader_GLES_ANGLE_texture_compression_dxt1FUNC glloader_GLES_ANGLE_texture_compression_dxt1 = self_init_glloader_GLES_ANGLE_texture_compression_dxt1;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_texture_compression_dxt3()
{
	return _GLES_ANGLE_texture_compression_dxt3;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_texture_compression_dxt3()
{
	glloader_init();
	return glloader_GLES_ANGLE_texture_compression_dxt3();
}
glloader_GLES_ANGLE_texture_compression_dxt3FUNC glloader_GLES_ANGLE_texture_compression_dxt3 = self_init_glloader_GLES_ANGLE_texture_compression_dxt3;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_texture_compression_dxt5()
{
	return _GLES_ANGLE_texture_compression_dxt5;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_texture_compression_dxt5()
{
	glloader_init();
	return glloader_GLES_ANGLE_texture_compression_dxt5();
}
glloader_GLES_ANGLE_texture_compression_dxt5FUNC glloader_GLES_ANGLE_texture_compression_dxt5 = self_init_glloader_GLES_ANGLE_texture_compression_dxt5;

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_texture_usage()
{
	return _GLES_ANGLE_texture_usage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_texture_usage()
{
	glloader_init();
	return glloader_GLES_ANGLE_texture_usage();
}
glloader_GLES_ANGLE_texture_usageFUNC glloader_GLES_ANGLE_texture_usage = self_init_glloader_GLES_ANGLE_texture_usage;

static char GLLOADER_APIENTRY _glloader_GL_EXT_timer_query()
{
	return _GL_EXT_timer_query;
}

static char GLLOADER_APIENTRY self_init_glloader_GL_EXT_timer_query()
{
	glloader_init();
	return glloader_GL_EXT_timer_query();
}
glloader_GL_EXT_timer_queryFUNC glloader_GL_EXT_timer_query = self_init_glloader_GL_EXT_timer_query;

#ifdef GL_EXT_timer_query

static void GLLOADER_APIENTRY self_init_glGenQueriesANGLE(GLsizei n, GLuint* ids)
{
	glloader_init();
	glGenQueriesANGLE(n, ids);
}
static void GLLOADER_APIENTRY self_init_glDeleteQueriesANGLE(GLsizei n, const GLuint* ids)
{
	glloader_init();
	glDeleteQueriesANGLE(n, ids);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsQueryANGLE(GLuint id)
{
	glloader_init();
	return glIsQueryANGLE(id);
}
static void GLLOADER_APIENTRY self_init_glBeginQueryANGLE(GLenum target, GLuint id)
{
	glloader_init();
	glBeginQueryANGLE(target, id);
}
static void GLLOADER_APIENTRY self_init_glEndQueryANGLE(GLenum target)
{
	glloader_init();
	glEndQueryANGLE(target);
}
static void GLLOADER_APIENTRY self_init_glQueryCounterANGLE(GLuint id, GLenum target)
{
	glloader_init();
	glQueryCounterANGLE(id, target);
}
static void GLLOADER_APIENTRY self_init_glGetQueryivANGLE(GLenum target, GLenum pname, GLint* params)
{
	glloader_init();
	glGetQueryivANGLE(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjectivANGLE(GLuint id, GLenum pname, GLint* params)
{
	glloader_init();
	glGetQueryObjectivANGLE(id, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjectuivANGLE(GLuint id, GLenum pname, GLuint* params)
{
	glloader_init();
	glGetQueryObjectuivANGLE(id, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjecti64vANGLE(GLuint id, GLenum pname, GLint64* params)
{
	glloader_init();
	glGetQueryObjecti64vANGLE(id, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjectui64vANGLE(GLuint id, GLenum pname, GLuint64* params)
{
	glloader_init();
	glGetQueryObjectui64vANGLE(id, pname, params);
}

glGenQueriesANGLEFUNC glGenQueriesANGLE = self_init_glGenQueriesANGLE;
glDeleteQueriesANGLEFUNC glDeleteQueriesANGLE = self_init_glDeleteQueriesANGLE;
glIsQueryANGLEFUNC glIsQueryANGLE = self_init_glIsQueryANGLE;
glBeginQueryANGLEFUNC glBeginQueryANGLE = self_init_glBeginQueryANGLE;
glEndQueryANGLEFUNC glEndQueryANGLE = self_init_glEndQueryANGLE;
glQueryCounterANGLEFUNC glQueryCounterANGLE = self_init_glQueryCounterANGLE;
glGetQueryivANGLEFUNC glGetQueryivANGLE = self_init_glGetQueryivANGLE;
glGetQueryObjectivANGLEFUNC glGetQueryObjectivANGLE = self_init_glGetQueryObjectivANGLE;
glGetQueryObjectuivANGLEFUNC glGetQueryObjectuivANGLE = self_init_glGetQueryObjectuivANGLE;
glGetQueryObjecti64vANGLEFUNC glGetQueryObjecti64vANGLE = self_init_glGetQueryObjecti64vANGLE;
glGetQueryObjectui64vANGLEFUNC glGetQueryObjectui64vANGLE = self_init_glGetQueryObjectui64vANGLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_ANGLE_translated_shader_source()
{
	return _GLES_ANGLE_translated_shader_source;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ANGLE_translated_shader_source()
{
	glloader_init();
	return glloader_GLES_ANGLE_translated_shader_source();
}
glloader_GLES_ANGLE_translated_shader_sourceFUNC glloader_GLES_ANGLE_translated_shader_source = self_init_glloader_GLES_ANGLE_translated_shader_source;

#ifdef GLES_ANGLE_translated_shader_source

static void GLLOADER_APIENTRY self_init_glGetTranslatedShaderSourceANGLE(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source)
{
	glloader_init();
	glGetTranslatedShaderSourceANGLE(shader, bufsize, length, source);
}

glGetTranslatedShaderSourceANGLEFUNC glGetTranslatedShaderSourceANGLE = self_init_glGetTranslatedShaderSourceANGLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_clip_distance()
{
	return _GLES_APPLE_clip_distance;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_clip_distance()
{
	glloader_init();
	return glloader_GLES_APPLE_clip_distance();
}
glloader_GLES_APPLE_clip_distanceFUNC glloader_GLES_APPLE_clip_distance = self_init_glloader_GLES_APPLE_clip_distance;

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_color_buffer_packed_float()
{
	return _GLES_APPLE_color_buffer_packed_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_color_buffer_packed_float()
{
	glloader_init();
	return glloader_GLES_APPLE_color_buffer_packed_float();
}
glloader_GLES_APPLE_color_buffer_packed_floatFUNC glloader_GLES_APPLE_color_buffer_packed_float = self_init_glloader_GLES_APPLE_color_buffer_packed_float;

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_copy_texture_levels()
{
	return _GLES_APPLE_copy_texture_levels;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_copy_texture_levels()
{
	glloader_init();
	return glloader_GLES_APPLE_copy_texture_levels();
}
glloader_GLES_APPLE_copy_texture_levelsFUNC glloader_GLES_APPLE_copy_texture_levels = self_init_glloader_GLES_APPLE_copy_texture_levels;

#ifdef GLES_APPLE_copy_texture_levels

static void GLLOADER_APIENTRY self_init_glCopyTextureLevelsAPPLE(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount)
{
	glloader_init();
	glCopyTextureLevelsAPPLE(destinationTexture, sourceTexture, sourceBaseLevel, sourceLevelCount);
}

glCopyTextureLevelsAPPLEFUNC glCopyTextureLevelsAPPLE = self_init_glCopyTextureLevelsAPPLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_framebuffer_multisample()
{
	return _GLES_APPLE_framebuffer_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_framebuffer_multisample()
{
	glloader_init();
	return glloader_GLES_APPLE_framebuffer_multisample();
}
glloader_GLES_APPLE_framebuffer_multisampleFUNC glloader_GLES_APPLE_framebuffer_multisample = self_init_glloader_GLES_APPLE_framebuffer_multisample;

#ifdef GLES_APPLE_framebuffer_multisample

static void GLLOADER_APIENTRY self_init_glRenderbufferStorageMultisampleAPPLE(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glRenderbufferStorageMultisampleAPPLE(target, samples, internalformat, width, height);
}

glRenderbufferStorageMultisampleAPPLEFUNC glRenderbufferStorageMultisampleAPPLE = self_init_glRenderbufferStorageMultisampleAPPLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_rgb_422()
{
	return _GLES_APPLE_rgb_422;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_rgb_422()
{
	glloader_init();
	return glloader_GLES_APPLE_rgb_422();
}
glloader_GLES_APPLE_rgb_422FUNC glloader_GLES_APPLE_rgb_422 = self_init_glloader_GLES_APPLE_rgb_422;

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_sync()
{
	return _GLES_APPLE_sync;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_sync()
{
	glloader_init();
	return glloader_GLES_APPLE_sync();
}
glloader_GLES_APPLE_syncFUNC glloader_GLES_APPLE_sync = self_init_glloader_GLES_APPLE_sync;

#ifdef GLES_APPLE_sync

static GLsync GLLOADER_APIENTRY self_init_glFenceSyncAPPLE(GLenum condition, GLbitfield flags)
{
	glloader_init();
	return glFenceSyncAPPLE(condition, flags);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsSyncAPPLE(GLsync sync)
{
	glloader_init();
	return glIsSyncAPPLE(sync);
}
static void GLLOADER_APIENTRY self_init_glDeleteSyncAPPLE(GLsync sync)
{
	glloader_init();
	glDeleteSyncAPPLE(sync);
}
static GLenum GLLOADER_APIENTRY self_init_glClientWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	glloader_init();
	return glClientWaitSyncAPPLE(sync, flags, timeout);
}
static void GLLOADER_APIENTRY self_init_glWaitSyncAPPLE(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	glloader_init();
	glWaitSyncAPPLE(sync, flags, timeout);
}
static void GLLOADER_APIENTRY self_init_glGetInteger64vAPPLE(GLenum pname, GLint64* params)
{
	glloader_init();
	glGetInteger64vAPPLE(pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetSyncivAPPLE(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values)
{
	glloader_init();
	glGetSyncivAPPLE(sync, pname, bufSize, length, values);
}

glFenceSyncAPPLEFUNC glFenceSyncAPPLE = self_init_glFenceSyncAPPLE;
glIsSyncAPPLEFUNC glIsSyncAPPLE = self_init_glIsSyncAPPLE;
glDeleteSyncAPPLEFUNC glDeleteSyncAPPLE = self_init_glDeleteSyncAPPLE;
glClientWaitSyncAPPLEFUNC glClientWaitSyncAPPLE = self_init_glClientWaitSyncAPPLE;
glWaitSyncAPPLEFUNC glWaitSyncAPPLE = self_init_glWaitSyncAPPLE;
glGetInteger64vAPPLEFUNC glGetInteger64vAPPLE = self_init_glGetInteger64vAPPLE;
glGetSyncivAPPLEFUNC glGetSyncivAPPLE = self_init_glGetSyncivAPPLE;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_texture_2D_limited_npot()
{
	return _GLES_APPLE_texture_2D_limited_npot;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_texture_2D_limited_npot()
{
	glloader_init();
	return glloader_GLES_APPLE_texture_2D_limited_npot();
}
glloader_GLES_APPLE_texture_2D_limited_npotFUNC glloader_GLES_APPLE_texture_2D_limited_npot = self_init_glloader_GLES_APPLE_texture_2D_limited_npot;

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_texture_format_BGRA8888()
{
	return _GLES_APPLE_texture_format_BGRA8888;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_texture_format_BGRA8888()
{
	glloader_init();
	return glloader_GLES_APPLE_texture_format_BGRA8888();
}
glloader_GLES_APPLE_texture_format_BGRA8888FUNC glloader_GLES_APPLE_texture_format_BGRA8888 = self_init_glloader_GLES_APPLE_texture_format_BGRA8888;

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_texture_max_level()
{
	return _GLES_APPLE_texture_max_level;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_texture_max_level()
{
	glloader_init();
	return glloader_GLES_APPLE_texture_max_level();
}
glloader_GLES_APPLE_texture_max_levelFUNC glloader_GLES_APPLE_texture_max_level = self_init_glloader_GLES_APPLE_texture_max_level;

static char GLLOADER_APIENTRY _glloader_GLES_APPLE_texture_packed_float()
{
	return _GLES_APPLE_texture_packed_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_APPLE_texture_packed_float()
{
	glloader_init();
	return glloader_GLES_APPLE_texture_packed_float();
}
glloader_GLES_APPLE_texture_packed_floatFUNC glloader_GLES_APPLE_texture_packed_float = self_init_glloader_GLES_APPLE_texture_packed_float;

static char GLLOADER_APIENTRY _glloader_GLES_ARM_mali_program_binary()
{
	return _GLES_ARM_mali_program_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ARM_mali_program_binary()
{
	glloader_init();
	return glloader_GLES_ARM_mali_program_binary();
}
glloader_GLES_ARM_mali_program_binaryFUNC glloader_GLES_ARM_mali_program_binary = self_init_glloader_GLES_ARM_mali_program_binary;

static char GLLOADER_APIENTRY _glloader_GLES_ARM_mali_shader_binary()
{
	return _GLES_ARM_mali_shader_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ARM_mali_shader_binary()
{
	glloader_init();
	return glloader_GLES_ARM_mali_shader_binary();
}
glloader_GLES_ARM_mali_shader_binaryFUNC glloader_GLES_ARM_mali_shader_binary = self_init_glloader_GLES_ARM_mali_shader_binary;

static char GLLOADER_APIENTRY _glloader_GLES_ARM_rgba8()
{
	return _GLES_ARM_rgba8;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ARM_rgba8()
{
	glloader_init();
	return glloader_GLES_ARM_rgba8();
}
glloader_GLES_ARM_rgba8FUNC glloader_GLES_ARM_rgba8 = self_init_glloader_GLES_ARM_rgba8;

static char GLLOADER_APIENTRY _glloader_GLES_ARM_shader_framebuffer_fetch()
{
	return _GLES_ARM_shader_framebuffer_fetch;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ARM_shader_framebuffer_fetch()
{
	glloader_init();
	return glloader_GLES_ARM_shader_framebuffer_fetch();
}
glloader_GLES_ARM_shader_framebuffer_fetchFUNC glloader_GLES_ARM_shader_framebuffer_fetch = self_init_glloader_GLES_ARM_shader_framebuffer_fetch;

static char GLLOADER_APIENTRY _glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil()
{
	return _GLES_ARM_shader_framebuffer_fetch_depth_stencil;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil()
{
	glloader_init();
	return glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil();
}
glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencilFUNC glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil = self_init_glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil;

static char GLLOADER_APIENTRY _glloader_GLES_DMP_program_binary()
{
	return _GLES_DMP_program_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_DMP_program_binary()
{
	glloader_init();
	return glloader_GLES_DMP_program_binary();
}
glloader_GLES_DMP_program_binaryFUNC glloader_GLES_DMP_program_binary = self_init_glloader_GLES_DMP_program_binary;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_base_instance()
{
	return _GLES_EXT_base_instance;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_base_instance()
{
	glloader_init();
	return glloader_GLES_EXT_base_instance();
}
glloader_GLES_EXT_base_instanceFUNC glloader_GLES_EXT_base_instance = self_init_glloader_GLES_EXT_base_instance;

#ifdef GLES_EXT_base_instance

static void GLLOADER_APIENTRY self_init_glDrawArraysInstancedBaseInstanceEXT(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance)
{
	glloader_init();
	glDrawArraysInstancedBaseInstanceEXT(mode, first, count, instancecount, baseinstance);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstancedBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLuint baseinstance)
{
	glloader_init();
	glDrawElementsInstancedBaseInstanceEXT(mode, count, type, indices, instancecount, baseinstance);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstancedBaseVertexBaseInstanceEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance)
{
	glloader_init();
	glDrawElementsInstancedBaseVertexBaseInstanceEXT(mode, count, type, indices, instancecount, basevertex, baseinstance);
}

glDrawArraysInstancedBaseInstanceEXTFUNC glDrawArraysInstancedBaseInstanceEXT = self_init_glDrawArraysInstancedBaseInstanceEXT;
glDrawElementsInstancedBaseInstanceEXTFUNC glDrawElementsInstancedBaseInstanceEXT = self_init_glDrawElementsInstancedBaseInstanceEXT;
glDrawElementsInstancedBaseVertexBaseInstanceEXTFUNC glDrawElementsInstancedBaseVertexBaseInstanceEXT = self_init_glDrawElementsInstancedBaseVertexBaseInstanceEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_blend_minmax()
{
	return _GLES_EXT_blend_minmax;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_blend_minmax()
{
	glloader_init();
	return glloader_GLES_EXT_blend_minmax();
}
glloader_GLES_EXT_blend_minmaxFUNC glloader_GLES_EXT_blend_minmax = self_init_glloader_GLES_EXT_blend_minmax;

#ifdef GLES_EXT_blend_minmax

static void GLLOADER_APIENTRY self_init_glBlendEquationEXT(GLenum mode)
{
	glloader_init();
	glBlendEquationEXT(mode);
}

glBlendEquationEXTFUNC glBlendEquationEXT = self_init_glBlendEquationEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_buffer_storage()
{
	return _GLES_EXT_buffer_storage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_buffer_storage()
{
	glloader_init();
	return glloader_GLES_EXT_buffer_storage();
}
glloader_GLES_EXT_buffer_storageFUNC glloader_GLES_EXT_buffer_storage = self_init_glloader_GLES_EXT_buffer_storage;

#ifdef GLES_EXT_buffer_storage

static void GLLOADER_APIENTRY self_init_glBufferStorageEXT(GLenum target, GLsizeiptr size, void const * data, GLbitfield flags)
{
	glloader_init();
	glBufferStorageEXT(target, size, data, flags);
}
static void GLLOADER_APIENTRY self_init_glNamedBufferStorageEXT(GLuint buffer, GLsizeiptr size, void const * data, GLbitfield flags)
{
	glloader_init();
	glNamedBufferStorageEXT(buffer, size, data, flags);
}

glBufferStorageEXTFUNC glBufferStorageEXT = self_init_glBufferStorageEXT;
glNamedBufferStorageEXTFUNC glNamedBufferStorageEXT = self_init_glNamedBufferStorageEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_color_buffer_float()
{
	return _GLES_EXT_color_buffer_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_color_buffer_float()
{
	glloader_init();
	return glloader_GLES_EXT_color_buffer_float();
}
glloader_GLES_EXT_color_buffer_floatFUNC glloader_GLES_EXT_color_buffer_float = self_init_glloader_GLES_EXT_color_buffer_float;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_color_buffer_half_float()
{
	return _GLES_EXT_color_buffer_half_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_color_buffer_half_float()
{
	glloader_init();
	return glloader_GLES_EXT_color_buffer_half_float();
}
glloader_GLES_EXT_color_buffer_half_floatFUNC glloader_GLES_EXT_color_buffer_half_float = self_init_glloader_GLES_EXT_color_buffer_half_float;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture()
{
	return _GLES_EXT_compressed_ETC1_RGB8_sub_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture()
{
	glloader_init();
	return glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture();
}
glloader_GLES_EXT_compressed_ETC1_RGB8_sub_textureFUNC glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture = self_init_glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_copy_image()
{
	return _GLES_EXT_copy_image;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_copy_image()
{
	glloader_init();
	return glloader_GLES_EXT_copy_image();
}
glloader_GLES_EXT_copy_imageFUNC glloader_GLES_EXT_copy_image = self_init_glloader_GLES_EXT_copy_image;

#ifdef GLES_EXT_copy_image

static void GLLOADER_APIENTRY self_init_glCopyImageSubDataEXT(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
	glloader_init();
	glCopyImageSubDataEXT(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

glCopyImageSubDataEXTFUNC glCopyImageSubDataEXT = self_init_glCopyImageSubDataEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_debug_label()
{
	return _GLES_EXT_debug_label;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_debug_label()
{
	glloader_init();
	return glloader_GLES_EXT_debug_label();
}
glloader_GLES_EXT_debug_labelFUNC glloader_GLES_EXT_debug_label = self_init_glloader_GLES_EXT_debug_label;

#ifdef GLES_EXT_debug_label

static void GLLOADER_APIENTRY self_init_glLabelObjectEXT(GLenum type, GLuint object, GLsizei length, const GLchar* label)
{
	glloader_init();
	glLabelObjectEXT(type, object, length, label);
}
static void GLLOADER_APIENTRY self_init_glGetObjectLabelEXT(GLenum type, GLuint object, GLsizei bufSize, GLsizei* length, GLchar* label)
{
	glloader_init();
	glGetObjectLabelEXT(type, object, bufSize, length, label);
}

glLabelObjectEXTFUNC glLabelObjectEXT = self_init_glLabelObjectEXT;
glGetObjectLabelEXTFUNC glGetObjectLabelEXT = self_init_glGetObjectLabelEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_debug_marker()
{
	return _GLES_EXT_debug_marker;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_debug_marker()
{
	glloader_init();
	return glloader_GLES_EXT_debug_marker();
}
glloader_GLES_EXT_debug_markerFUNC glloader_GLES_EXT_debug_marker = self_init_glloader_GLES_EXT_debug_marker;

#ifdef GLES_EXT_debug_marker

static void GLLOADER_APIENTRY self_init_glInsertEventMarkerEXT(GLsizei length, const GLchar* marker)
{
	glloader_init();
	glInsertEventMarkerEXT(length, marker);
}
static void GLLOADER_APIENTRY self_init_glPushGroupMarkerEXT(GLsizei length, const GLchar* marker)
{
	glloader_init();
	glPushGroupMarkerEXT(length, marker);
}
static void GLLOADER_APIENTRY self_init_glPopGroupMarkerEXT()
{
	glloader_init();
	glPopGroupMarkerEXT();
}

glInsertEventMarkerEXTFUNC glInsertEventMarkerEXT = self_init_glInsertEventMarkerEXT;
glPushGroupMarkerEXTFUNC glPushGroupMarkerEXT = self_init_glPushGroupMarkerEXT;
glPopGroupMarkerEXTFUNC glPopGroupMarkerEXT = self_init_glPopGroupMarkerEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_discard_framebuffer()
{
	return _GLES_EXT_discard_framebuffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_discard_framebuffer()
{
	glloader_init();
	return glloader_GLES_EXT_discard_framebuffer();
}
glloader_GLES_EXT_discard_framebufferFUNC glloader_GLES_EXT_discard_framebuffer = self_init_glloader_GLES_EXT_discard_framebuffer;

#ifdef GLES_EXT_discard_framebuffer

static void GLLOADER_APIENTRY self_init_glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum* attachments)
{
	glloader_init();
	glDiscardFramebufferEXT(target, numAttachments, attachments);
}

glDiscardFramebufferEXTFUNC glDiscardFramebufferEXT = self_init_glDiscardFramebufferEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_disjoint_timer_query()
{
	return _GLES_EXT_disjoint_timer_query;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_disjoint_timer_query()
{
	glloader_init();
	return glloader_GLES_EXT_disjoint_timer_query();
}
glloader_GLES_EXT_disjoint_timer_queryFUNC glloader_GLES_EXT_disjoint_timer_query = self_init_glloader_GLES_EXT_disjoint_timer_query;

#ifdef GLES_EXT_disjoint_timer_query

static void GLLOADER_APIENTRY self_init_glGenQueriesEXT(GLsizei n, GLuint* ids)
{
	glloader_init();
	glGenQueriesEXT(n, ids);
}
static void GLLOADER_APIENTRY self_init_glDeleteQueriesEXT(GLsizei n, const GLuint* ids)
{
	glloader_init();
	glDeleteQueriesEXT(n, ids);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsQueryEXT(GLuint id)
{
	glloader_init();
	return glIsQueryEXT(id);
}
static void GLLOADER_APIENTRY self_init_glBeginQueryEXT(GLenum target, GLuint id)
{
	glloader_init();
	glBeginQueryEXT(target, id);
}
static void GLLOADER_APIENTRY self_init_glEndQueryEXT(GLenum target)
{
	glloader_init();
	glEndQueryEXT(target);
}
static void GLLOADER_APIENTRY self_init_glQueryCounterEXT(GLuint id, GLenum target)
{
	glloader_init();
	glQueryCounterEXT(id, target);
}
static void GLLOADER_APIENTRY self_init_glGetQueryivEXT(GLenum target, GLenum pname, GLint* params)
{
	glloader_init();
	glGetQueryivEXT(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjectivEXT(GLuint id, GLenum pname, GLint* params)
{
	glloader_init();
	glGetQueryObjectivEXT(id, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjectuivEXT(GLuint id, GLenum pname, GLuint* params)
{
	glloader_init();
	glGetQueryObjectuivEXT(id, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjecti64vEXT(GLuint id, GLenum pname, GLint64* params)
{
	glloader_init();
	glGetQueryObjecti64vEXT(id, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjectui64vEXT(GLuint id, GLenum pname, GLuint64* params)
{
	glloader_init();
	glGetQueryObjectui64vEXT(id, pname, params);
}

glGenQueriesEXTFUNC glGenQueriesEXT = self_init_glGenQueriesEXT;
glDeleteQueriesEXTFUNC glDeleteQueriesEXT = self_init_glDeleteQueriesEXT;
glIsQueryEXTFUNC glIsQueryEXT = self_init_glIsQueryEXT;
glBeginQueryEXTFUNC glBeginQueryEXT = self_init_glBeginQueryEXT;
glEndQueryEXTFUNC glEndQueryEXT = self_init_glEndQueryEXT;
glQueryCounterEXTFUNC glQueryCounterEXT = self_init_glQueryCounterEXT;
glGetQueryivEXTFUNC glGetQueryivEXT = self_init_glGetQueryivEXT;
glGetQueryObjectivEXTFUNC glGetQueryObjectivEXT = self_init_glGetQueryObjectivEXT;
glGetQueryObjectuivEXTFUNC glGetQueryObjectuivEXT = self_init_glGetQueryObjectuivEXT;
glGetQueryObjecti64vEXTFUNC glGetQueryObjecti64vEXT = self_init_glGetQueryObjecti64vEXT;
glGetQueryObjectui64vEXTFUNC glGetQueryObjectui64vEXT = self_init_glGetQueryObjectui64vEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_draw_buffers()
{
	return _GLES_EXT_draw_buffers;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_draw_buffers()
{
	glloader_init();
	return glloader_GLES_EXT_draw_buffers();
}
glloader_GLES_EXT_draw_buffersFUNC glloader_GLES_EXT_draw_buffers = self_init_glloader_GLES_EXT_draw_buffers;

#ifdef GLES_EXT_draw_buffers

static void GLLOADER_APIENTRY self_init_glDrawBuffersEXT(GLsizei n, const GLenum* bufs)
{
	glloader_init();
	glDrawBuffersEXT(n, bufs);
}

glDrawBuffersEXTFUNC glDrawBuffersEXT = self_init_glDrawBuffersEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_draw_buffers_indexed()
{
	return _GLES_EXT_draw_buffers_indexed;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_draw_buffers_indexed()
{
	glloader_init();
	return glloader_GLES_EXT_draw_buffers_indexed();
}
glloader_GLES_EXT_draw_buffers_indexedFUNC glloader_GLES_EXT_draw_buffers_indexed = self_init_glloader_GLES_EXT_draw_buffers_indexed;

#ifdef GLES_EXT_draw_buffers_indexed

static void GLLOADER_APIENTRY self_init_glEnableiEXT(GLenum target, GLuint index)
{
	glloader_init();
	glEnableiEXT(target, index);
}
static void GLLOADER_APIENTRY self_init_glDisableiEXT(GLenum target, GLuint index)
{
	glloader_init();
	glDisableiEXT(target, index);
}
static void GLLOADER_APIENTRY self_init_glBlendEquationiEXT(GLuint buf, GLenum mode)
{
	glloader_init();
	glBlendEquationiEXT(buf, mode);
}
static void GLLOADER_APIENTRY self_init_glBlendEquationSeparateiEXT(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	glloader_init();
	glBlendEquationSeparateiEXT(buf, modeRGB, modeAlpha);
}
static void GLLOADER_APIENTRY self_init_glBlendFunciEXT(GLuint buf, GLenum src, GLenum dst)
{
	glloader_init();
	glBlendFunciEXT(buf, src, dst);
}
static void GLLOADER_APIENTRY self_init_glBlendFuncSeparateiEXT(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	glloader_init();
	glBlendFuncSeparateiEXT(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}
static void GLLOADER_APIENTRY self_init_glColorMaskiEXT(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	glloader_init();
	glColorMaskiEXT(index, r, g, b, a);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsEnablediEXT(GLenum target, GLuint index)
{
	glloader_init();
	return glIsEnablediEXT(target, index);
}

glEnableiEXTFUNC glEnableiEXT = self_init_glEnableiEXT;
glDisableiEXTFUNC glDisableiEXT = self_init_glDisableiEXT;
glBlendEquationiEXTFUNC glBlendEquationiEXT = self_init_glBlendEquationiEXT;
glBlendEquationSeparateiEXTFUNC glBlendEquationSeparateiEXT = self_init_glBlendEquationSeparateiEXT;
glBlendFunciEXTFUNC glBlendFunciEXT = self_init_glBlendFunciEXT;
glBlendFuncSeparateiEXTFUNC glBlendFuncSeparateiEXT = self_init_glBlendFuncSeparateiEXT;
glColorMaskiEXTFUNC glColorMaskiEXT = self_init_glColorMaskiEXT;
glIsEnablediEXTFUNC glIsEnablediEXT = self_init_glIsEnablediEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_draw_elements_base_vertex()
{
	return _GLES_EXT_draw_elements_base_vertex;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_draw_elements_base_vertex()
{
	glloader_init();
	return glloader_GLES_EXT_draw_elements_base_vertex();
}
glloader_GLES_EXT_draw_elements_base_vertexFUNC glloader_GLES_EXT_draw_elements_base_vertex = self_init_glloader_GLES_EXT_draw_elements_base_vertex;

#ifdef GLES_EXT_draw_elements_base_vertex

static void GLLOADER_APIENTRY self_init_glDrawElementsBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex)
{
	glloader_init();
	glDrawElementsBaseVertexEXT(mode, count, type, indices, basevertex);
}
static void GLLOADER_APIENTRY self_init_glDrawRangeElementsBaseVertexEXT(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex)
{
	glloader_init();
	glDrawRangeElementsBaseVertexEXT(mode, start, end, count, type, indices, basevertex);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstancedBaseVertexEXT(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex)
{
	glloader_init();
	glDrawElementsInstancedBaseVertexEXT(mode, count, type, indices, instancecount, basevertex);
}
static void GLLOADER_APIENTRY self_init_glMultiDrawElementsBaseVertexEXT(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei drawcount, const GLint* basevertex)
{
	glloader_init();
	glMultiDrawElementsBaseVertexEXT(mode, count, type, indices, drawcount, basevertex);
}

glDrawElementsBaseVertexEXTFUNC glDrawElementsBaseVertexEXT = self_init_glDrawElementsBaseVertexEXT;
glDrawRangeElementsBaseVertexEXTFUNC glDrawRangeElementsBaseVertexEXT = self_init_glDrawRangeElementsBaseVertexEXT;
glDrawElementsInstancedBaseVertexEXTFUNC glDrawElementsInstancedBaseVertexEXT = self_init_glDrawElementsInstancedBaseVertexEXT;
glMultiDrawElementsBaseVertexEXTFUNC glMultiDrawElementsBaseVertexEXT = self_init_glMultiDrawElementsBaseVertexEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_draw_instanced()
{
	return _GLES_EXT_draw_instanced;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_draw_instanced()
{
	glloader_init();
	return glloader_GLES_EXT_draw_instanced();
}
glloader_GLES_EXT_draw_instancedFUNC glloader_GLES_EXT_draw_instanced = self_init_glloader_GLES_EXT_draw_instanced;

#ifdef GLES_EXT_draw_instanced

static void GLLOADER_APIENTRY self_init_glDrawArraysInstancedEXT(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	glloader_init();
	glDrawArraysInstancedEXT(mode, first, count, primcount);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstancedEXT(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount)
{
	glloader_init();
	glDrawElementsInstancedEXT(mode, count, type, indices, primcount);
}

glDrawArraysInstancedEXTFUNC glDrawArraysInstancedEXT = self_init_glDrawArraysInstancedEXT;
glDrawElementsInstancedEXTFUNC glDrawElementsInstancedEXT = self_init_glDrawElementsInstancedEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_float_blend()
{
	return _GLES_EXT_float_blend;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_float_blend()
{
	glloader_init();
	return glloader_GLES_EXT_float_blend();
}
glloader_GLES_EXT_float_blendFUNC glloader_GLES_EXT_float_blend = self_init_glloader_GLES_EXT_float_blend;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_frag_depth()
{
	return _GLES_EXT_frag_depth;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_frag_depth()
{
	glloader_init();
	return glloader_GLES_EXT_frag_depth();
}
glloader_GLES_EXT_frag_depthFUNC glloader_GLES_EXT_frag_depth = self_init_glloader_GLES_EXT_frag_depth;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_geometry_shader()
{
	return _GLES_EXT_geometry_shader;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_geometry_shader()
{
	glloader_init();
	return glloader_GLES_EXT_geometry_shader();
}
glloader_GLES_EXT_geometry_shaderFUNC glloader_GLES_EXT_geometry_shader = self_init_glloader_GLES_EXT_geometry_shader;

#ifdef GLES_EXT_geometry_shader

static void GLLOADER_APIENTRY self_init_glFramebufferTextureEXT(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	glloader_init();
	glFramebufferTextureEXT(target, attachment, texture, level);
}

glFramebufferTextureEXTFUNC glFramebufferTextureEXT = self_init_glFramebufferTextureEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_gpu_shader5()
{
	return _GLES_EXT_gpu_shader5;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_gpu_shader5()
{
	glloader_init();
	return glloader_GLES_EXT_gpu_shader5();
}
glloader_GLES_EXT_gpu_shader5FUNC glloader_GLES_EXT_gpu_shader5 = self_init_glloader_GLES_EXT_gpu_shader5;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_instanced_arrays()
{
	return _GLES_EXT_instanced_arrays;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_instanced_arrays()
{
	glloader_init();
	return glloader_GLES_EXT_instanced_arrays();
}
glloader_GLES_EXT_instanced_arraysFUNC glloader_GLES_EXT_instanced_arrays = self_init_glloader_GLES_EXT_instanced_arrays;

#ifdef GLES_EXT_instanced_arrays

static void GLLOADER_APIENTRY self_init_glVertexAttribDivisorEXT(GLuint index, GLuint divisor)
{
	glloader_init();
	glVertexAttribDivisorEXT(index, divisor);
}

glVertexAttribDivisorEXTFUNC glVertexAttribDivisorEXT = self_init_glVertexAttribDivisorEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_map_buffer_range()
{
	return _GLES_EXT_map_buffer_range;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_map_buffer_range()
{
	glloader_init();
	return glloader_GLES_EXT_map_buffer_range();
}
glloader_GLES_EXT_map_buffer_rangeFUNC glloader_GLES_EXT_map_buffer_range = self_init_glloader_GLES_EXT_map_buffer_range;

#ifdef GLES_EXT_map_buffer_range

static void* GLLOADER_APIENTRY self_init_glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	glloader_init();
	return glMapBufferRangeEXT(target, offset, length, access);
}
static void GLLOADER_APIENTRY self_init_glFlushMappedBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length)
{
	glloader_init();
	glFlushMappedBufferRangeEXT(target, offset, length);
}

glMapBufferRangeEXTFUNC glMapBufferRangeEXT = self_init_glMapBufferRangeEXT;
glFlushMappedBufferRangeEXTFUNC glFlushMappedBufferRangeEXT = self_init_glFlushMappedBufferRangeEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_multisampled_render_to_texture()
{
	return _GLES_EXT_multisampled_render_to_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_multisampled_render_to_texture()
{
	glloader_init();
	return glloader_GLES_EXT_multisampled_render_to_texture();
}
glloader_GLES_EXT_multisampled_render_to_textureFUNC glloader_GLES_EXT_multisampled_render_to_texture = self_init_glloader_GLES_EXT_multisampled_render_to_texture;

#ifdef GLES_EXT_multisampled_render_to_texture

static void GLLOADER_APIENTRY self_init_glRenderbufferStorageMultisampleEXT(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glRenderbufferStorageMultisampleEXT(target, samples, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glFramebufferTexture2DMultisampleEXT(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
	glloader_init();
	glFramebufferTexture2DMultisampleEXT(target, attachment, textarget, texture, level, samples);
}

glRenderbufferStorageMultisampleEXTFUNC glRenderbufferStorageMultisampleEXT = self_init_glRenderbufferStorageMultisampleEXT;
glFramebufferTexture2DMultisampleEXTFUNC glFramebufferTexture2DMultisampleEXT = self_init_glFramebufferTexture2DMultisampleEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_multiview_draw_buffers()
{
	return _GLES_EXT_multiview_draw_buffers;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_multiview_draw_buffers()
{
	glloader_init();
	return glloader_GLES_EXT_multiview_draw_buffers();
}
glloader_GLES_EXT_multiview_draw_buffersFUNC glloader_GLES_EXT_multiview_draw_buffers = self_init_glloader_GLES_EXT_multiview_draw_buffers;

#ifdef GLES_EXT_multiview_draw_buffers

static void GLLOADER_APIENTRY self_init_glReadBufferIndexedEXT(GLenum src, GLint index)
{
	glloader_init();
	glReadBufferIndexedEXT(src, index);
}
static void GLLOADER_APIENTRY self_init_glDrawBuffersIndexedEXT(GLint n, const GLenum* location, const GLint* indices)
{
	glloader_init();
	glDrawBuffersIndexedEXT(n, location, indices);
}
static void GLLOADER_APIENTRY self_init_GetIntegeri_vEXT(GLenum target, GLuint index, GLint* data)
{
	glloader_init();
	GetIntegeri_vEXT(target, index, data);
}

glReadBufferIndexedEXTFUNC glReadBufferIndexedEXT = self_init_glReadBufferIndexedEXT;
glDrawBuffersIndexedEXTFUNC glDrawBuffersIndexedEXT = self_init_glDrawBuffersIndexedEXT;
GetIntegeri_vEXTFUNC GetIntegeri_vEXT = self_init_GetIntegeri_vEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_multi_draw_arrays()
{
	return _GLES_EXT_multi_draw_arrays;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_multi_draw_arrays()
{
	glloader_init();
	return glloader_GLES_EXT_multi_draw_arrays();
}
glloader_GLES_EXT_multi_draw_arraysFUNC glloader_GLES_EXT_multi_draw_arrays = self_init_glloader_GLES_EXT_multi_draw_arrays;

#ifdef GLES_EXT_multi_draw_arrays

static void GLLOADER_APIENTRY self_init_glMultiDrawArraysEXT(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount)
{
	glloader_init();
	glMultiDrawArraysEXT(mode, first, count, primcount);
}
static void GLLOADER_APIENTRY self_init_glMultiDrawElementsEXT(GLenum mode, GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount)
{
	glloader_init();
	glMultiDrawElementsEXT(mode, count, type, indices, primcount);
}

glMultiDrawArraysEXTFUNC glMultiDrawArraysEXT = self_init_glMultiDrawArraysEXT;
glMultiDrawElementsEXTFUNC glMultiDrawElementsEXT = self_init_glMultiDrawElementsEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_multi_draw_indirect()
{
	return _GLES_EXT_multi_draw_indirect;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_multi_draw_indirect()
{
	glloader_init();
	return glloader_GLES_EXT_multi_draw_indirect();
}
glloader_GLES_EXT_multi_draw_indirectFUNC glloader_GLES_EXT_multi_draw_indirect = self_init_glloader_GLES_EXT_multi_draw_indirect;

#ifdef GLES_EXT_multi_draw_indirect

static void GLLOADER_APIENTRY self_init_glMultiDrawArraysIndirectEXT(GLenum mode, const GLvoid* indirect, GLsizei drawcount, GLsizei stride)
{
	glloader_init();
	glMultiDrawArraysIndirectEXT(mode, indirect, drawcount, stride);
}
static void GLLOADER_APIENTRY self_init_glMultiDrawElementsIndirectEXT(GLenum mode, GLenum type, const GLvoid* indirect, GLsizei drawcount, GLsizei stride)
{
	glloader_init();
	glMultiDrawElementsIndirectEXT(mode, type, indirect, drawcount, stride);
}

glMultiDrawArraysIndirectEXTFUNC glMultiDrawArraysIndirectEXT = self_init_glMultiDrawArraysIndirectEXT;
glMultiDrawElementsIndirectEXTFUNC glMultiDrawElementsIndirectEXT = self_init_glMultiDrawElementsIndirectEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_occlusion_query_boolean()
{
	return _GLES_EXT_occlusion_query_boolean;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_occlusion_query_boolean()
{
	glloader_init();
	return glloader_GLES_EXT_occlusion_query_boolean();
}
glloader_GLES_EXT_occlusion_query_booleanFUNC glloader_GLES_EXT_occlusion_query_boolean = self_init_glloader_GLES_EXT_occlusion_query_boolean;

#ifdef GLES_EXT_occlusion_query_boolean



#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_post_depth_coverage()
{
	return _GLES_EXT_post_depth_coverage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_post_depth_coverage()
{
	glloader_init();
	return glloader_GLES_EXT_post_depth_coverage();
}
glloader_GLES_EXT_post_depth_coverageFUNC glloader_GLES_EXT_post_depth_coverage = self_init_glloader_GLES_EXT_post_depth_coverage;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_primitive_bounding_box()
{
	return _GLES_EXT_primitive_bounding_box;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_primitive_bounding_box()
{
	glloader_init();
	return glloader_GLES_EXT_primitive_bounding_box();
}
glloader_GLES_EXT_primitive_bounding_boxFUNC glloader_GLES_EXT_primitive_bounding_box = self_init_glloader_GLES_EXT_primitive_bounding_box;

#ifdef GLES_EXT_primitive_bounding_box

static void GLLOADER_APIENTRY self_init_glPrimitiveBoundingBoxEXT(float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW)
{
	glloader_init();
	glPrimitiveBoundingBoxEXT(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

glPrimitiveBoundingBoxEXTFUNC glPrimitiveBoundingBoxEXT = self_init_glPrimitiveBoundingBoxEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_pvrtc_sRGB()
{
	return _GLES_EXT_pvrtc_sRGB;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_pvrtc_sRGB()
{
	glloader_init();
	return glloader_GLES_EXT_pvrtc_sRGB();
}
glloader_GLES_EXT_pvrtc_sRGBFUNC glloader_GLES_EXT_pvrtc_sRGB = self_init_glloader_GLES_EXT_pvrtc_sRGB;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_raster_multisample()
{
	return _GLES_EXT_raster_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_raster_multisample()
{
	glloader_init();
	return glloader_GLES_EXT_raster_multisample();
}
glloader_GLES_EXT_raster_multisampleFUNC glloader_GLES_EXT_raster_multisample = self_init_glloader_GLES_EXT_raster_multisample;

#ifdef GLES_EXT_raster_multisample

static void GLLOADER_APIENTRY self_init_glRasterSamplesEXT(GLuint samples, GLboolean fixedsamplelocations)
{
	glloader_init();
	glRasterSamplesEXT(samples, fixedsamplelocations);
}

glRasterSamplesEXTFUNC glRasterSamplesEXT = self_init_glRasterSamplesEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_read_format_bgra()
{
	return _GLES_EXT_read_format_bgra;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_read_format_bgra()
{
	glloader_init();
	return glloader_GLES_EXT_read_format_bgra();
}
glloader_GLES_EXT_read_format_bgraFUNC glloader_GLES_EXT_read_format_bgra = self_init_glloader_GLES_EXT_read_format_bgra;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_render_snorm()
{
	return _GLES_EXT_render_snorm;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_render_snorm()
{
	glloader_init();
	return glloader_GLES_EXT_render_snorm();
}
glloader_GLES_EXT_render_snormFUNC glloader_GLES_EXT_render_snorm = self_init_glloader_GLES_EXT_render_snorm;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_robustness()
{
	return _GLES_EXT_robustness;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_robustness()
{
	glloader_init();
	return glloader_GLES_EXT_robustness();
}
glloader_GLES_EXT_robustnessFUNC glloader_GLES_EXT_robustness = self_init_glloader_GLES_EXT_robustness;

#ifdef GLES_EXT_robustness

static GLenum GLLOADER_APIENTRY self_init_glGetGraphicsResetStatusEXT()
{
	glloader_init();
	return glGetGraphicsResetStatusEXT();
}
static void GLLOADER_APIENTRY self_init_glReadnPixelsEXT(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data)
{
	glloader_init();
	glReadnPixelsEXT(x, y, width, height, format, type, bufSize, data);
}
static void GLLOADER_APIENTRY self_init_glGetnUniformfvEXT(GLuint program, GLint location, GLsizei bufSize, GLfloat* params)
{
	glloader_init();
	glGetnUniformfvEXT(program, location, bufSize, params);
}
static void GLLOADER_APIENTRY self_init_glGetnUniformivEXT(GLuint program, GLint location, GLsizei bufSize, GLint* params)
{
	glloader_init();
	glGetnUniformivEXT(program, location, bufSize, params);
}

glGetGraphicsResetStatusEXTFUNC glGetGraphicsResetStatusEXT = self_init_glGetGraphicsResetStatusEXT;
glReadnPixelsEXTFUNC glReadnPixelsEXT = self_init_glReadnPixelsEXT;
glGetnUniformfvEXTFUNC glGetnUniformfvEXT = self_init_glGetnUniformfvEXT;
glGetnUniformivEXTFUNC glGetnUniformivEXT = self_init_glGetnUniformivEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_separate_shader_objects()
{
	return _GLES_EXT_separate_shader_objects;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_separate_shader_objects()
{
	glloader_init();
	return glloader_GLES_EXT_separate_shader_objects();
}
glloader_GLES_EXT_separate_shader_objectsFUNC glloader_GLES_EXT_separate_shader_objects = self_init_glloader_GLES_EXT_separate_shader_objects;

#ifdef GLES_EXT_separate_shader_objects

static void GLLOADER_APIENTRY self_init_glUseShaderProgramEXT(GLenum type, GLuint program)
{
	glloader_init();
	glUseShaderProgramEXT(type, program);
}
static void GLLOADER_APIENTRY self_init_glActiveProgramEXT(GLuint program)
{
	glloader_init();
	glActiveProgramEXT(program);
}
static GLuint GLLOADER_APIENTRY self_init_glCreateShaderProgramEXT(GLenum type, const GLchar* string)
{
	glloader_init();
	return glCreateShaderProgramEXT(type, string);
}
static GLboolean GLLOADER_APIENTRY self_init_glBindProgramPipelineEXT(GLuint pipeline)
{
	glloader_init();
	return glBindProgramPipelineEXT(pipeline);
}
static GLboolean GLLOADER_APIENTRY self_init_glDeleteProgramPipelinesEXT(GLsizei n, const GLuint* pipelines)
{
	glloader_init();
	return glDeleteProgramPipelinesEXT(n, pipelines);
}
static GLboolean GLLOADER_APIENTRY self_init_glGenProgramPipelinesEXT(GLsizei n, GLuint* pipelines)
{
	glloader_init();
	return glGenProgramPipelinesEXT(n, pipelines);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsProgramPipelineEXT(GLuint pipeline)
{
	glloader_init();
	return glIsProgramPipelineEXT(pipeline);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramParameteriEXT(GLuint program, GLenum pname, GLint value)
{
	glloader_init();
	return glProgramParameteriEXT(program, pname, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glGetProgramPipelineivEXT(GLuint pipeline, GLenum pname, GLint* params)
{
	glloader_init();
	return glGetProgramPipelineivEXT(pipeline, pname, params);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform1iEXT(GLuint program, GLint location, GLint x)
{
	glloader_init();
	return glProgramUniform1iEXT(program, location, x);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform2iEXT(GLuint program, GLint location, GLint x, GLint y)
{
	glloader_init();
	return glProgramUniform2iEXT(program, location, x, y);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform3iEXT(GLuint program, GLint location, GLint x, GLint y, GLint z)
{
	glloader_init();
	return glProgramUniform3iEXT(program, location, x, y, z);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform4iEXT(GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w)
{
	glloader_init();
	return glProgramUniform4iEXT(program, location, x, y, z, w);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform1fEXT(GLuint program, GLint location, GLfloat x)
{
	glloader_init();
	return glProgramUniform1fEXT(program, location, x);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform2fEXT(GLuint program, GLint location, GLfloat x, GLfloat y)
{
	glloader_init();
	return glProgramUniform2fEXT(program, location, x, y);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform3fEXT(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z)
{
	glloader_init();
	return glProgramUniform3fEXT(program, location, x, y, z);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform4fEXT(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	glloader_init();
	return glProgramUniform4fEXT(program, location, x, y, z, w);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform1ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	glloader_init();
	return glProgramUniform1ivEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform2ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	glloader_init();
	return glProgramUniform2ivEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform3ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	glloader_init();
	return glProgramUniform3ivEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform4ivEXT(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	glloader_init();
	return glProgramUniform4ivEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform1fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	glloader_init();
	return glProgramUniform1fvEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform2fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	glloader_init();
	return glProgramUniform2fvEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform3fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	glloader_init();
	return glProgramUniform3fvEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniform4fvEXT(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	glloader_init();
	return glProgramUniform4fvEXT(program, location, count, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniformMatrix2fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	return glProgramUniformMatrix2fvEXT(program, location, count, transpose, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniformMatrix3fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	return glProgramUniformMatrix3fvEXT(program, location, count, transpose, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramUniformMatrix4fvEXT(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	return glProgramUniformMatrix4fvEXT(program, location, count, transpose, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glValidateProgramPipelineEXT(GLuint pipeline)
{
	glloader_init();
	return glValidateProgramPipelineEXT(pipeline);
}
static GLboolean GLLOADER_APIENTRY self_init_glGetProgramPipelineInfoLogEXT(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
{
	glloader_init();
	return glGetProgramPipelineInfoLogEXT(pipeline, bufSize, length, infoLog);
}

glUseShaderProgramEXTFUNC glUseShaderProgramEXT = self_init_glUseShaderProgramEXT;
glActiveProgramEXTFUNC glActiveProgramEXT = self_init_glActiveProgramEXT;
glCreateShaderProgramEXTFUNC glCreateShaderProgramEXT = self_init_glCreateShaderProgramEXT;
glBindProgramPipelineEXTFUNC glBindProgramPipelineEXT = self_init_glBindProgramPipelineEXT;
glDeleteProgramPipelinesEXTFUNC glDeleteProgramPipelinesEXT = self_init_glDeleteProgramPipelinesEXT;
glGenProgramPipelinesEXTFUNC glGenProgramPipelinesEXT = self_init_glGenProgramPipelinesEXT;
glIsProgramPipelineEXTFUNC glIsProgramPipelineEXT = self_init_glIsProgramPipelineEXT;
glProgramParameteriEXTFUNC glProgramParameteriEXT = self_init_glProgramParameteriEXT;
glGetProgramPipelineivEXTFUNC glGetProgramPipelineivEXT = self_init_glGetProgramPipelineivEXT;
glProgramUniform1iEXTFUNC glProgramUniform1iEXT = self_init_glProgramUniform1iEXT;
glProgramUniform2iEXTFUNC glProgramUniform2iEXT = self_init_glProgramUniform2iEXT;
glProgramUniform3iEXTFUNC glProgramUniform3iEXT = self_init_glProgramUniform3iEXT;
glProgramUniform4iEXTFUNC glProgramUniform4iEXT = self_init_glProgramUniform4iEXT;
glProgramUniform1fEXTFUNC glProgramUniform1fEXT = self_init_glProgramUniform1fEXT;
glProgramUniform2fEXTFUNC glProgramUniform2fEXT = self_init_glProgramUniform2fEXT;
glProgramUniform3fEXTFUNC glProgramUniform3fEXT = self_init_glProgramUniform3fEXT;
glProgramUniform4fEXTFUNC glProgramUniform4fEXT = self_init_glProgramUniform4fEXT;
glProgramUniform1ivEXTFUNC glProgramUniform1ivEXT = self_init_glProgramUniform1ivEXT;
glProgramUniform2ivEXTFUNC glProgramUniform2ivEXT = self_init_glProgramUniform2ivEXT;
glProgramUniform3ivEXTFUNC glProgramUniform3ivEXT = self_init_glProgramUniform3ivEXT;
glProgramUniform4ivEXTFUNC glProgramUniform4ivEXT = self_init_glProgramUniform4ivEXT;
glProgramUniform1fvEXTFUNC glProgramUniform1fvEXT = self_init_glProgramUniform1fvEXT;
glProgramUniform2fvEXTFUNC glProgramUniform2fvEXT = self_init_glProgramUniform2fvEXT;
glProgramUniform3fvEXTFUNC glProgramUniform3fvEXT = self_init_glProgramUniform3fvEXT;
glProgramUniform4fvEXTFUNC glProgramUniform4fvEXT = self_init_glProgramUniform4fvEXT;
glProgramUniformMatrix2fvEXTFUNC glProgramUniformMatrix2fvEXT = self_init_glProgramUniformMatrix2fvEXT;
glProgramUniformMatrix3fvEXTFUNC glProgramUniformMatrix3fvEXT = self_init_glProgramUniformMatrix3fvEXT;
glProgramUniformMatrix4fvEXTFUNC glProgramUniformMatrix4fvEXT = self_init_glProgramUniformMatrix4fvEXT;
glValidateProgramPipelineEXTFUNC glValidateProgramPipelineEXT = self_init_glValidateProgramPipelineEXT;
glGetProgramPipelineInfoLogEXTFUNC glGetProgramPipelineInfoLogEXT = self_init_glGetProgramPipelineInfoLogEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_shader_framebuffer_fetch()
{
	return _GLES_EXT_shader_framebuffer_fetch;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_shader_framebuffer_fetch()
{
	glloader_init();
	return glloader_GLES_EXT_shader_framebuffer_fetch();
}
glloader_GLES_EXT_shader_framebuffer_fetchFUNC glloader_GLES_EXT_shader_framebuffer_fetch = self_init_glloader_GLES_EXT_shader_framebuffer_fetch;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_shader_implicit_conversions()
{
	return _GLES_EXT_shader_implicit_conversions;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_shader_implicit_conversions()
{
	glloader_init();
	return glloader_GLES_EXT_shader_implicit_conversions();
}
glloader_GLES_EXT_shader_implicit_conversionsFUNC glloader_GLES_EXT_shader_implicit_conversions = self_init_glloader_GLES_EXT_shader_implicit_conversions;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_shader_integer_mix()
{
	return _GLES_EXT_shader_integer_mix;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_shader_integer_mix()
{
	glloader_init();
	return glloader_GLES_EXT_shader_integer_mix();
}
glloader_GLES_EXT_shader_integer_mixFUNC glloader_GLES_EXT_shader_integer_mix = self_init_glloader_GLES_EXT_shader_integer_mix;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_shader_io_blocks()
{
	return _GLES_EXT_shader_io_blocks;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_shader_io_blocks()
{
	glloader_init();
	return glloader_GLES_EXT_shader_io_blocks();
}
glloader_GLES_EXT_shader_io_blocksFUNC glloader_GLES_EXT_shader_io_blocks = self_init_glloader_GLES_EXT_shader_io_blocks;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_shader_pixel_local_storage()
{
	return _GLES_EXT_shader_pixel_local_storage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_shader_pixel_local_storage()
{
	glloader_init();
	return glloader_GLES_EXT_shader_pixel_local_storage();
}
glloader_GLES_EXT_shader_pixel_local_storageFUNC glloader_GLES_EXT_shader_pixel_local_storage = self_init_glloader_GLES_EXT_shader_pixel_local_storage;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_shader_texture_lod()
{
	return _GLES_EXT_shader_texture_lod;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_shader_texture_lod()
{
	glloader_init();
	return glloader_GLES_EXT_shader_texture_lod();
}
glloader_GLES_EXT_shader_texture_lodFUNC glloader_GLES_EXT_shader_texture_lod = self_init_glloader_GLES_EXT_shader_texture_lod;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_shadow_samplers()
{
	return _GLES_EXT_shadow_samplers;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_shadow_samplers()
{
	glloader_init();
	return glloader_GLES_EXT_shadow_samplers();
}
glloader_GLES_EXT_shadow_samplersFUNC glloader_GLES_EXT_shadow_samplers = self_init_glloader_GLES_EXT_shadow_samplers;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_sparse_texture()
{
	return _GLES_EXT_sparse_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_sparse_texture()
{
	glloader_init();
	return glloader_GLES_EXT_sparse_texture();
}
glloader_GLES_EXT_sparse_textureFUNC glloader_GLES_EXT_sparse_texture = self_init_glloader_GLES_EXT_sparse_texture;

#ifdef GLES_EXT_sparse_texture

static void GLLOADER_APIENTRY self_init_glTexPageCommitmentEXT(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
	glloader_init();
	glTexPageCommitmentEXT(target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}
static void GLLOADER_APIENTRY self_init_glTexturePageCommitmentEXT(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit)
{
	glloader_init();
	glTexturePageCommitmentEXT(texture, target, level, xoffset, yoffset, zoffset, width, height, depth, commit);
}

glTexPageCommitmentEXTFUNC glTexPageCommitmentEXT = self_init_glTexPageCommitmentEXT;
glTexturePageCommitmentEXTFUNC glTexturePageCommitmentEXT = self_init_glTexturePageCommitmentEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_sRGB()
{
	return _GLES_EXT_sRGB;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_sRGB()
{
	glloader_init();
	return glloader_GLES_EXT_sRGB();
}
glloader_GLES_EXT_sRGBFUNC glloader_GLES_EXT_sRGB = self_init_glloader_GLES_EXT_sRGB;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_sRGB_write_control()
{
	return _GLES_EXT_sRGB_write_control;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_sRGB_write_control()
{
	glloader_init();
	return glloader_GLES_EXT_sRGB_write_control();
}
glloader_GLES_EXT_sRGB_write_controlFUNC glloader_GLES_EXT_sRGB_write_control = self_init_glloader_GLES_EXT_sRGB_write_control;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_tessellation_shader()
{
	return _GLES_EXT_tessellation_shader;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_tessellation_shader()
{
	glloader_init();
	return glloader_GLES_EXT_tessellation_shader();
}
glloader_GLES_EXT_tessellation_shaderFUNC glloader_GLES_EXT_tessellation_shader = self_init_glloader_GLES_EXT_tessellation_shader;

#ifdef GLES_EXT_tessellation_shader

static void GLLOADER_APIENTRY self_init_glPatchParameteriEXT(GLenum pname, GLint value)
{
	glloader_init();
	glPatchParameteriEXT(pname, value);
}

glPatchParameteriEXTFUNC glPatchParameteriEXT = self_init_glPatchParameteriEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_border_clamp()
{
	return _GLES_EXT_texture_border_clamp;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_border_clamp()
{
	glloader_init();
	return glloader_GLES_EXT_texture_border_clamp();
}
glloader_GLES_EXT_texture_border_clampFUNC glloader_GLES_EXT_texture_border_clamp = self_init_glloader_GLES_EXT_texture_border_clamp;

#ifdef GLES_EXT_texture_border_clamp

static void GLLOADER_APIENTRY self_init_glTexParameterIivEXT(GLenum target, GLenum pname, GLint* params)
{
	glloader_init();
	glTexParameterIivEXT(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexParameterIuivEXT(GLenum target, GLenum pname, GLuint* params)
{
	glloader_init();
	glTexParameterIuivEXT(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameterIivEXT(GLenum target, GLenum pname, GLint* params)
{
	glloader_init();
	glGetTexParameterIivEXT(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameterIuivEXT(GLenum target, GLenum pname, GLuint* params)
{
	glloader_init();
	glGetTexParameterIuivEXT(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameterIivEXT(GLuint sampler, GLenum pname, const GLint* param)
{
	glloader_init();
	glSamplerParameterIivEXT(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameterIuivEXT(GLuint sampler, GLenum pname, const GLuint* param)
{
	glloader_init();
	glSamplerParameterIuivEXT(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glGetSamplerParameterIivEXT(GLuint sampler, GLenum pname, GLint* params)
{
	glloader_init();
	glGetSamplerParameterIivEXT(sampler, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetSamplerParameterIuivEXT(GLuint sampler, GLenum pname, GLuint* params)
{
	glloader_init();
	glGetSamplerParameterIuivEXT(sampler, pname, params);
}

glTexParameterIivEXTFUNC glTexParameterIivEXT = self_init_glTexParameterIivEXT;
glTexParameterIuivEXTFUNC glTexParameterIuivEXT = self_init_glTexParameterIuivEXT;
glGetTexParameterIivEXTFUNC glGetTexParameterIivEXT = self_init_glGetTexParameterIivEXT;
glGetTexParameterIuivEXTFUNC glGetTexParameterIuivEXT = self_init_glGetTexParameterIuivEXT;
glSamplerParameterIivEXTFUNC glSamplerParameterIivEXT = self_init_glSamplerParameterIivEXT;
glSamplerParameterIuivEXTFUNC glSamplerParameterIuivEXT = self_init_glSamplerParameterIuivEXT;
glGetSamplerParameterIivEXTFUNC glGetSamplerParameterIivEXT = self_init_glGetSamplerParameterIivEXT;
glGetSamplerParameterIuivEXTFUNC glGetSamplerParameterIuivEXT = self_init_glGetSamplerParameterIuivEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_buffer()
{
	return _GLES_EXT_texture_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_buffer()
{
	glloader_init();
	return glloader_GLES_EXT_texture_buffer();
}
glloader_GLES_EXT_texture_bufferFUNC glloader_GLES_EXT_texture_buffer = self_init_glloader_GLES_EXT_texture_buffer;

#ifdef GLES_EXT_texture_buffer

static void GLLOADER_APIENTRY self_init_glTexBufferEXT(GLenum target, GLenum internalformat, GLuint buffer)
{
	glloader_init();
	glTexBufferEXT(target, internalformat, buffer);
}
static void GLLOADER_APIENTRY self_init_glTexBufferRangeEXT(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	glloader_init();
	glTexBufferRangeEXT(target, internalformat, buffer, offset, size);
}

glTexBufferEXTFUNC glTexBufferEXT = self_init_glTexBufferEXT;
glTexBufferRangeEXTFUNC glTexBufferRangeEXT = self_init_glTexBufferRangeEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_compression_dxt1()
{
	return _GLES_EXT_texture_compression_dxt1;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_compression_dxt1()
{
	glloader_init();
	return glloader_GLES_EXT_texture_compression_dxt1();
}
glloader_GLES_EXT_texture_compression_dxt1FUNC glloader_GLES_EXT_texture_compression_dxt1 = self_init_glloader_GLES_EXT_texture_compression_dxt1;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_compression_latc()
{
	return _GLES_EXT_texture_compression_latc;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_compression_latc()
{
	glloader_init();
	return glloader_GLES_EXT_texture_compression_latc();
}
glloader_GLES_EXT_texture_compression_latcFUNC glloader_GLES_EXT_texture_compression_latc = self_init_glloader_GLES_EXT_texture_compression_latc;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_compression_s3tc()
{
	return _GLES_EXT_texture_compression_s3tc;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_compression_s3tc()
{
	glloader_init();
	return glloader_GLES_EXT_texture_compression_s3tc();
}
glloader_GLES_EXT_texture_compression_s3tcFUNC glloader_GLES_EXT_texture_compression_s3tc = self_init_glloader_GLES_EXT_texture_compression_s3tc;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_cube_map_array()
{
	return _GLES_EXT_texture_cube_map_array;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_cube_map_array()
{
	glloader_init();
	return glloader_GLES_EXT_texture_cube_map_array();
}
glloader_GLES_EXT_texture_cube_map_arrayFUNC glloader_GLES_EXT_texture_cube_map_array = self_init_glloader_GLES_EXT_texture_cube_map_array;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_filter_anisotropic()
{
	return _GLES_EXT_texture_filter_anisotropic;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_filter_anisotropic()
{
	glloader_init();
	return glloader_GLES_EXT_texture_filter_anisotropic();
}
glloader_GLES_EXT_texture_filter_anisotropicFUNC glloader_GLES_EXT_texture_filter_anisotropic = self_init_glloader_GLES_EXT_texture_filter_anisotropic;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_filter_minmax()
{
	return _GLES_EXT_texture_filter_minmax;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_filter_minmax()
{
	glloader_init();
	return glloader_GLES_EXT_texture_filter_minmax();
}
glloader_GLES_EXT_texture_filter_minmaxFUNC glloader_GLES_EXT_texture_filter_minmax = self_init_glloader_GLES_EXT_texture_filter_minmax;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_format_BGRA8888()
{
	return _GLES_EXT_texture_format_BGRA8888;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_format_BGRA8888()
{
	glloader_init();
	return glloader_GLES_EXT_texture_format_BGRA8888();
}
glloader_GLES_EXT_texture_format_BGRA8888FUNC glloader_GLES_EXT_texture_format_BGRA8888 = self_init_glloader_GLES_EXT_texture_format_BGRA8888;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_lod_bias()
{
	return _GLES_EXT_texture_lod_bias;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_lod_bias()
{
	glloader_init();
	return glloader_GLES_EXT_texture_lod_bias();
}
glloader_GLES_EXT_texture_lod_biasFUNC glloader_GLES_EXT_texture_lod_bias = self_init_glloader_GLES_EXT_texture_lod_bias;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_norm16()
{
	return _GLES_EXT_texture_norm16;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_norm16()
{
	glloader_init();
	return glloader_GLES_EXT_texture_norm16();
}
glloader_GLES_EXT_texture_norm16FUNC glloader_GLES_EXT_texture_norm16 = self_init_glloader_GLES_EXT_texture_norm16;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_rg()
{
	return _GLES_EXT_texture_rg;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_rg()
{
	glloader_init();
	return glloader_GLES_EXT_texture_rg();
}
glloader_GLES_EXT_texture_rgFUNC glloader_GLES_EXT_texture_rg = self_init_glloader_GLES_EXT_texture_rg;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_sRGB_decode()
{
	return _GLES_EXT_texture_sRGB_decode;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_sRGB_decode()
{
	glloader_init();
	return glloader_GLES_EXT_texture_sRGB_decode();
}
glloader_GLES_EXT_texture_sRGB_decodeFUNC glloader_GLES_EXT_texture_sRGB_decode = self_init_glloader_GLES_EXT_texture_sRGB_decode;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_sRGB_R8()
{
	return _GLES_EXT_texture_sRGB_R8;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_sRGB_R8()
{
	glloader_init();
	return glloader_GLES_EXT_texture_sRGB_R8();
}
glloader_GLES_EXT_texture_sRGB_R8FUNC glloader_GLES_EXT_texture_sRGB_R8 = self_init_glloader_GLES_EXT_texture_sRGB_R8;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_sRGB_RG8()
{
	return _GLES_EXT_texture_sRGB_RG8;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_sRGB_RG8()
{
	glloader_init();
	return glloader_GLES_EXT_texture_sRGB_RG8();
}
glloader_GLES_EXT_texture_sRGB_RG8FUNC glloader_GLES_EXT_texture_sRGB_RG8 = self_init_glloader_GLES_EXT_texture_sRGB_RG8;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_storage()
{
	return _GLES_EXT_texture_storage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_storage()
{
	glloader_init();
	return glloader_GLES_EXT_texture_storage();
}
glloader_GLES_EXT_texture_storageFUNC glloader_GLES_EXT_texture_storage = self_init_glloader_GLES_EXT_texture_storage;

#ifdef GLES_EXT_texture_storage

static void GLLOADER_APIENTRY self_init_glTexStorage1DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	glloader_init();
	glTexStorage1DEXT(target, levels, internalformat, width);
}
static void GLLOADER_APIENTRY self_init_glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glTexStorage2DEXT(target, levels, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glTexStorage3DEXT(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	glloader_init();
	glTexStorage3DEXT(target, levels, internalformat, width, height, depth);
}
static void GLLOADER_APIENTRY self_init_glTextureStorage1DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width)
{
	glloader_init();
	glTextureStorage1DEXT(texture, target, levels, internalformat, width);
}
static void GLLOADER_APIENTRY self_init_glTextureStorage2DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glTextureStorage2DEXT(texture, target, levels, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glTextureStorage3DEXT(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	glloader_init();
	glTextureStorage3DEXT(texture, target, levels, internalformat, width, height, depth);
}

glTexStorage1DEXTFUNC glTexStorage1DEXT = self_init_glTexStorage1DEXT;
glTexStorage2DEXTFUNC glTexStorage2DEXT = self_init_glTexStorage2DEXT;
glTexStorage3DEXTFUNC glTexStorage3DEXT = self_init_glTexStorage3DEXT;
glTextureStorage1DEXTFUNC glTextureStorage1DEXT = self_init_glTextureStorage1DEXT;
glTextureStorage2DEXTFUNC glTextureStorage2DEXT = self_init_glTextureStorage2DEXT;
glTextureStorage3DEXTFUNC glTextureStorage3DEXT = self_init_glTextureStorage3DEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_type_2_10_10_10_REV()
{
	return _GLES_EXT_texture_type_2_10_10_10_REV;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_type_2_10_10_10_REV()
{
	glloader_init();
	return glloader_GLES_EXT_texture_type_2_10_10_10_REV();
}
glloader_GLES_EXT_texture_type_2_10_10_10_REVFUNC glloader_GLES_EXT_texture_type_2_10_10_10_REV = self_init_glloader_GLES_EXT_texture_type_2_10_10_10_REV;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_texture_view()
{
	return _GLES_EXT_texture_view;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_texture_view()
{
	glloader_init();
	return glloader_GLES_EXT_texture_view();
}
glloader_GLES_EXT_texture_viewFUNC glloader_GLES_EXT_texture_view = self_init_glloader_GLES_EXT_texture_view;

#ifdef GLES_EXT_texture_view

static void GLLOADER_APIENTRY self_init_glTextureViewEXT(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
	glloader_init();
	glTextureViewEXT(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

glTextureViewEXTFUNC glTextureViewEXT = self_init_glTextureViewEXT;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_EXT_unpack_subimage()
{
	return _GLES_EXT_unpack_subimage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_unpack_subimage()
{
	glloader_init();
	return glloader_GLES_EXT_unpack_subimage();
}
glloader_GLES_EXT_unpack_subimageFUNC glloader_GLES_EXT_unpack_subimage = self_init_glloader_GLES_EXT_unpack_subimage;

static char GLLOADER_APIENTRY _glloader_GLES_EXT_YUV_target()
{
	return _GLES_EXT_YUV_target;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_EXT_YUV_target()
{
	glloader_init();
	return glloader_GLES_EXT_YUV_target();
}
glloader_GLES_EXT_YUV_targetFUNC glloader_GLES_EXT_YUV_target = self_init_glloader_GLES_EXT_YUV_target;

static char GLLOADER_APIENTRY _glloader_GLES_FJ_shader_binary_GCCSO()
{
	return _GLES_FJ_shader_binary_GCCSO;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_FJ_shader_binary_GCCSO()
{
	glloader_init();
	return glloader_GLES_FJ_shader_binary_GCCSO();
}
glloader_GLES_FJ_shader_binary_GCCSOFUNC glloader_GLES_FJ_shader_binary_GCCSO = self_init_glloader_GLES_FJ_shader_binary_GCCSO;

static char GLLOADER_APIENTRY _glloader_GLES_IMG_multisampled_render_to_texture()
{
	return _GLES_IMG_multisampled_render_to_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_IMG_multisampled_render_to_texture()
{
	glloader_init();
	return glloader_GLES_IMG_multisampled_render_to_texture();
}
glloader_GLES_IMG_multisampled_render_to_textureFUNC glloader_GLES_IMG_multisampled_render_to_texture = self_init_glloader_GLES_IMG_multisampled_render_to_texture;

#ifdef GLES_IMG_multisampled_render_to_texture

static void GLLOADER_APIENTRY self_init_glRenderbufferStorageMultisampleIMG(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glRenderbufferStorageMultisampleIMG(target, samples, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glFramebufferTexture2DMultisampleIMG(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples)
{
	glloader_init();
	glFramebufferTexture2DMultisampleIMG(target, attachment, textarget, texture, level, samples);
}

glRenderbufferStorageMultisampleIMGFUNC glRenderbufferStorageMultisampleIMG = self_init_glRenderbufferStorageMultisampleIMG;
glFramebufferTexture2DMultisampleIMGFUNC glFramebufferTexture2DMultisampleIMG = self_init_glFramebufferTexture2DMultisampleIMG;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_IMG_program_binary()
{
	return _GLES_IMG_program_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_IMG_program_binary()
{
	glloader_init();
	return glloader_GLES_IMG_program_binary();
}
glloader_GLES_IMG_program_binaryFUNC glloader_GLES_IMG_program_binary = self_init_glloader_GLES_IMG_program_binary;

static char GLLOADER_APIENTRY _glloader_GLES_IMG_read_format()
{
	return _GLES_IMG_read_format;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_IMG_read_format()
{
	glloader_init();
	return glloader_GLES_IMG_read_format();
}
glloader_GLES_IMG_read_formatFUNC glloader_GLES_IMG_read_format = self_init_glloader_GLES_IMG_read_format;

static char GLLOADER_APIENTRY _glloader_GLES_shader_binary()
{
	return _GLES_shader_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_shader_binary()
{
	glloader_init();
	return glloader_GLES_shader_binary();
}
glloader_GLES_shader_binaryFUNC glloader_GLES_shader_binary = self_init_glloader_GLES_shader_binary;

static char GLLOADER_APIENTRY _glloader_GLES_IMG_texture_compression_pvrtc()
{
	return _GLES_IMG_texture_compression_pvrtc;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_IMG_texture_compression_pvrtc()
{
	glloader_init();
	return glloader_GLES_IMG_texture_compression_pvrtc();
}
glloader_GLES_IMG_texture_compression_pvrtcFUNC glloader_GLES_IMG_texture_compression_pvrtc = self_init_glloader_GLES_IMG_texture_compression_pvrtc;

static char GLLOADER_APIENTRY _glloader_GLES_IMG_texture_compression_pvrtc2()
{
	return _GLES_IMG_texture_compression_pvrtc2;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_IMG_texture_compression_pvrtc2()
{
	glloader_init();
	return glloader_GLES_IMG_texture_compression_pvrtc2();
}
glloader_GLES_IMG_texture_compression_pvrtc2FUNC glloader_GLES_IMG_texture_compression_pvrtc2 = self_init_glloader_GLES_IMG_texture_compression_pvrtc2;

static char GLLOADER_APIENTRY _glloader_GLES_IMG_texture_env_enhanced_fixed_function()
{
	return _GLES_IMG_texture_env_enhanced_fixed_function;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_IMG_texture_env_enhanced_fixed_function()
{
	glloader_init();
	return glloader_GLES_IMG_texture_env_enhanced_fixed_function();
}
glloader_GLES_IMG_texture_env_enhanced_fixed_functionFUNC glloader_GLES_IMG_texture_env_enhanced_fixed_function = self_init_glloader_GLES_IMG_texture_env_enhanced_fixed_function;

static char GLLOADER_APIENTRY _glloader_GLES_IMG_user_clip_plane()
{
	return _GLES_IMG_user_clip_plane;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_IMG_user_clip_plane()
{
	glloader_init();
	return glloader_GLES_IMG_user_clip_plane();
}
glloader_GLES_IMG_user_clip_planeFUNC glloader_GLES_IMG_user_clip_plane = self_init_glloader_GLES_IMG_user_clip_plane;

#ifdef GLES_IMG_user_clip_plane

static void GLLOADER_APIENTRY self_init_glClipPlanefIMG(GLenum p, GLfloat* eqn)
{
	glloader_init();
	glClipPlanefIMG(p, eqn);
}
static void GLLOADER_APIENTRY self_init_glClipPlanexIMG(GLenum p, GLfixed* eqn)
{
	glloader_init();
	glClipPlanexIMG(p, eqn);
}

glClipPlanefIMGFUNC glClipPlanefIMG = self_init_glClipPlanefIMG;
glClipPlanexIMGFUNC glClipPlanexIMG = self_init_glClipPlanexIMG;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_INTEL_performance_query()
{
	return _GLES_INTEL_performance_query;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_INTEL_performance_query()
{
	glloader_init();
	return glloader_GLES_INTEL_performance_query();
}
glloader_GLES_INTEL_performance_queryFUNC glloader_GLES_INTEL_performance_query = self_init_glloader_GLES_INTEL_performance_query;

#ifdef GLES_INTEL_performance_query

static void GLLOADER_APIENTRY self_init_glGetFirstPerfQueryIdINTEL(GLuint* queryId)
{
	glloader_init();
	glGetFirstPerfQueryIdINTEL(queryId);
}
static void GLLOADER_APIENTRY self_init_glGetNextPerfQueryIdINTEL(GLuint queryId, GLuint* nextQueryId)
{
	glloader_init();
	glGetNextPerfQueryIdINTEL(queryId, nextQueryId);
}
static void GLLOADER_APIENTRY self_init_glGetPerfQueryIdByNameINTEL(GLchar* queryName, GLuint* queryId)
{
	glloader_init();
	glGetPerfQueryIdByNameINTEL(queryName, queryId);
}
static void GLLOADER_APIENTRY self_init_glGetPerfQueryInfoINTEL(GLuint queryId, GLuint queryNameLength, GLchar* queryName, GLuint* dataSize, GLuint* noCounters, GLuint* noInstances, GLuint* capsMask)
{
	glloader_init();
	glGetPerfQueryInfoINTEL(queryId, queryNameLength, queryName, dataSize, noCounters, noInstances, capsMask);
}
static void GLLOADER_APIENTRY self_init_glGetPerfCounterInfoINTEL(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar* counterName, GLuint counterDescLength, GLchar* counterDesc, GLuint* counterOffset, GLuint* counterDataSize, GLuint* counterTypeEnum, GLuint* counterDataTypeEnum, GLuint64* rawCounterMaxValue)
{
	glloader_init();
	glGetPerfCounterInfoINTEL(queryId, counterId, counterNameLength, counterName, counterDescLength, counterDesc, counterOffset, counterDataSize, counterTypeEnum, counterDataTypeEnum, rawCounterMaxValue);
}
static void GLLOADER_APIENTRY self_init_glCreatePerfQueryINTEL(GLuint queryId, GLuint* queryHandle)
{
	glloader_init();
	glCreatePerfQueryINTEL(queryId, queryHandle);
}
static void GLLOADER_APIENTRY self_init_glDeletePerfQueryINTEL(GLuint queryHandle)
{
	glloader_init();
	glDeletePerfQueryINTEL(queryHandle);
}
static void GLLOADER_APIENTRY self_init_glBeginPerfQueryINTEL(GLuint queryHandle)
{
	glloader_init();
	glBeginPerfQueryINTEL(queryHandle);
}
static void GLLOADER_APIENTRY self_init_glEndPerfQueryINTEL(GLuint queryHandle)
{
	glloader_init();
	glEndPerfQueryINTEL(queryHandle);
}
static void GLLOADER_APIENTRY self_init_glGetPerfQueryDataINTEL(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid* data, GLuint* bytesWritten)
{
	glloader_init();
	glGetPerfQueryDataINTEL(queryHandle, flags, dataSize, data, bytesWritten);
}

glGetFirstPerfQueryIdINTELFUNC glGetFirstPerfQueryIdINTEL = self_init_glGetFirstPerfQueryIdINTEL;
glGetNextPerfQueryIdINTELFUNC glGetNextPerfQueryIdINTEL = self_init_glGetNextPerfQueryIdINTEL;
glGetPerfQueryIdByNameINTELFUNC glGetPerfQueryIdByNameINTEL = self_init_glGetPerfQueryIdByNameINTEL;
glGetPerfQueryInfoINTELFUNC glGetPerfQueryInfoINTEL = self_init_glGetPerfQueryInfoINTEL;
glGetPerfCounterInfoINTELFUNC glGetPerfCounterInfoINTEL = self_init_glGetPerfCounterInfoINTEL;
glCreatePerfQueryINTELFUNC glCreatePerfQueryINTEL = self_init_glCreatePerfQueryINTEL;
glDeletePerfQueryINTELFUNC glDeletePerfQueryINTEL = self_init_glDeletePerfQueryINTEL;
glBeginPerfQueryINTELFUNC glBeginPerfQueryINTEL = self_init_glBeginPerfQueryINTEL;
glEndPerfQueryINTELFUNC glEndPerfQueryINTEL = self_init_glEndPerfQueryINTEL;
glGetPerfQueryDataINTELFUNC glGetPerfQueryDataINTEL = self_init_glGetPerfQueryDataINTEL;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_KHR_blend_equation_advanced()
{
	return _GLES_KHR_blend_equation_advanced;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_KHR_blend_equation_advanced()
{
	glloader_init();
	return glloader_GLES_KHR_blend_equation_advanced();
}
glloader_GLES_KHR_blend_equation_advancedFUNC glloader_GLES_KHR_blend_equation_advanced = self_init_glloader_GLES_KHR_blend_equation_advanced;

#ifdef GLES_KHR_blend_equation_advanced

static void GLLOADER_APIENTRY self_init_glBlendBarrierKHR()
{
	glloader_init();
	glBlendBarrierKHR();
}

glBlendBarrierKHRFUNC glBlendBarrierKHR = self_init_glBlendBarrierKHR;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_KHR_context_flush_control()
{
	return _GLES_KHR_context_flush_control;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_KHR_context_flush_control()
{
	glloader_init();
	return glloader_GLES_KHR_context_flush_control();
}
glloader_GLES_KHR_context_flush_controlFUNC glloader_GLES_KHR_context_flush_control = self_init_glloader_GLES_KHR_context_flush_control;

static char GLLOADER_APIENTRY _glloader_GLES_KHR_debug()
{
	return _GLES_KHR_debug;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_KHR_debug()
{
	glloader_init();
	return glloader_GLES_KHR_debug();
}
glloader_GLES_KHR_debugFUNC glloader_GLES_KHR_debug = self_init_glloader_GLES_KHR_debug;

#ifdef GLES_KHR_debug

static void GLLOADER_APIENTRY self_init_glDebugMessageControl(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled)
{
	glloader_init();
	glDebugMessageControl(source, type, severity, count, ids, enabled);
}
static void GLLOADER_APIENTRY self_init_glDebugMessageInsert(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf)
{
	glloader_init();
	glDebugMessageInsert(source, type, id, severity, length, buf);
}
static void GLLOADER_APIENTRY self_init_glDebugMessageCallback(GLDEBUGPROC callback, const GLvoid* userParam)
{
	glloader_init();
	glDebugMessageCallback(callback, userParam);
}
static GLuint GLLOADER_APIENTRY self_init_glGetDebugMessageLog(GLuint count, GLsizei bufsize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog)
{
	glloader_init();
	return glGetDebugMessageLog(count, bufsize, sources, types, ids, severities, lengths, messageLog);
}
static void GLLOADER_APIENTRY self_init_glGetPointerv(GLenum pname, void** params)
{
	glloader_init();
	glGetPointerv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glPushDebugGroup(GLenum source, GLuint id, GLsizei length, const GLchar* message)
{
	glloader_init();
	glPushDebugGroup(source, id, length, message);
}
static void GLLOADER_APIENTRY self_init_glPopDebugGroup()
{
	glloader_init();
	glPopDebugGroup();
}
static void GLLOADER_APIENTRY self_init_glObjectLabel(GLenum identifier, GLuint name, GLsizei length, const GLchar* label)
{
	glloader_init();
	glObjectLabel(identifier, name, length, label);
}
static void GLLOADER_APIENTRY self_init_glGetObjectLabel(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar* label)
{
	glloader_init();
	glGetObjectLabel(identifier, name, bufSize, length, label);
}
static void GLLOADER_APIENTRY self_init_glObjectPtrLabel(const GLvoid* ptr, GLsizei length, const GLchar* label)
{
	glloader_init();
	glObjectPtrLabel(ptr, length, label);
}
static void GLLOADER_APIENTRY self_init_glGetObjectPtrLabel(const GLvoid* ptr, GLsizei bufSize, GLsizei* length, GLchar* label)
{
	glloader_init();
	glGetObjectPtrLabel(ptr, bufSize, length, label);
}

glDebugMessageControlFUNC glDebugMessageControl = self_init_glDebugMessageControl;
glDebugMessageInsertFUNC glDebugMessageInsert = self_init_glDebugMessageInsert;
glDebugMessageCallbackFUNC glDebugMessageCallback = self_init_glDebugMessageCallback;
glGetDebugMessageLogFUNC glGetDebugMessageLog = self_init_glGetDebugMessageLog;
glGetPointervFUNC glGetPointerv = self_init_glGetPointerv;
glPushDebugGroupFUNC glPushDebugGroup = self_init_glPushDebugGroup;
glPopDebugGroupFUNC glPopDebugGroup = self_init_glPopDebugGroup;
glObjectLabelFUNC glObjectLabel = self_init_glObjectLabel;
glGetObjectLabelFUNC glGetObjectLabel = self_init_glGetObjectLabel;
glObjectPtrLabelFUNC glObjectPtrLabel = self_init_glObjectPtrLabel;
glGetObjectPtrLabelFUNC glGetObjectPtrLabel = self_init_glGetObjectPtrLabel;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_KHR_no_error()
{
	return _GLES_KHR_no_error;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_KHR_no_error()
{
	glloader_init();
	return glloader_GLES_KHR_no_error();
}
glloader_GLES_KHR_no_errorFUNC glloader_GLES_KHR_no_error = self_init_glloader_GLES_KHR_no_error;

static char GLLOADER_APIENTRY _glloader_GLES_KHR_robustness()
{
	return _GLES_KHR_robustness;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_KHR_robustness()
{
	glloader_init();
	return glloader_GLES_KHR_robustness();
}
glloader_GLES_KHR_robustnessFUNC glloader_GLES_KHR_robustness = self_init_glloader_GLES_KHR_robustness;

#ifdef GLES_KHR_robustness

static GLenum GLLOADER_APIENTRY self_init_glGetGraphicsResetStatus()
{
	glloader_init();
	return glGetGraphicsResetStatus();
}
static void GLLOADER_APIENTRY self_init_glReadnPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid* data)
{
	glloader_init();
	glReadnPixels(x, y, width, height, format, type, bufSize, data);
}
static void GLLOADER_APIENTRY self_init_glGetnUniformfv(GLuint program, GLint location, GLsizei bufSize, GLfloat* params)
{
	glloader_init();
	glGetnUniformfv(program, location, bufSize, params);
}
static void GLLOADER_APIENTRY self_init_glGetnUniformiv(GLuint program, GLint location, GLsizei bufSize, GLint* params)
{
	glloader_init();
	glGetnUniformiv(program, location, bufSize, params);
}
static void GLLOADER_APIENTRY self_init_glGetnUniformuiv(GLuint program, GLint location, GLsizei bufSize, GLuint* params)
{
	glloader_init();
	glGetnUniformuiv(program, location, bufSize, params);
}

glGetGraphicsResetStatusFUNC glGetGraphicsResetStatus = self_init_glGetGraphicsResetStatus;
glReadnPixelsFUNC glReadnPixels = self_init_glReadnPixels;
glGetnUniformfvFUNC glGetnUniformfv = self_init_glGetnUniformfv;
glGetnUniformivFUNC glGetnUniformiv = self_init_glGetnUniformiv;
glGetnUniformuivFUNC glGetnUniformuiv = self_init_glGetnUniformuiv;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_KHR_robust_buffer_access_behavior()
{
	return _GLES_KHR_robust_buffer_access_behavior;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_KHR_robust_buffer_access_behavior()
{
	glloader_init();
	return glloader_GLES_KHR_robust_buffer_access_behavior();
}
glloader_GLES_KHR_robust_buffer_access_behaviorFUNC glloader_GLES_KHR_robust_buffer_access_behavior = self_init_glloader_GLES_KHR_robust_buffer_access_behavior;

static char GLLOADER_APIENTRY _glloader_GLES_KHR_texture_compression_astc_ldr()
{
	return _GLES_KHR_texture_compression_astc_ldr;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_KHR_texture_compression_astc_ldr()
{
	glloader_init();
	return glloader_GLES_KHR_texture_compression_astc_ldr();
}
glloader_GLES_KHR_texture_compression_astc_ldrFUNC glloader_GLES_KHR_texture_compression_astc_ldr = self_init_glloader_GLES_KHR_texture_compression_astc_ldr;

static char GLLOADER_APIENTRY _glloader_GLES_NV_3dvision_settings()
{
	return _GLES_NV_3dvision_settings;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_3dvision_settings()
{
	glloader_init();
	return glloader_GLES_NV_3dvision_settings();
}
glloader_GLES_NV_3dvision_settingsFUNC glloader_GLES_NV_3dvision_settings = self_init_glloader_GLES_NV_3dvision_settings;

#ifdef GLES_NV_3dvision_settings

static void GLLOADER_APIENTRY self_init_glStereoParameterfNV(GLenum pname, GLfloat param)
{
	glloader_init();
	glStereoParameterfNV(pname, param);
}
static void GLLOADER_APIENTRY self_init_glStereoParameteriNV(GLenum pname, GLint param)
{
	glloader_init();
	glStereoParameteriNV(pname, param);
}

glStereoParameterfNVFUNC glStereoParameterfNV = self_init_glStereoParameterfNV;
glStereoParameteriNVFUNC glStereoParameteriNV = self_init_glStereoParameteriNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_bgr()
{
	return _GLES_NV_bgr;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_bgr()
{
	glloader_init();
	return glloader_GLES_NV_bgr();
}
glloader_GLES_NV_bgrFUNC glloader_GLES_NV_bgr = self_init_glloader_GLES_NV_bgr;

static char GLLOADER_APIENTRY _glloader_GLES_NV_bindless_texture()
{
	return _GLES_NV_bindless_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_bindless_texture()
{
	glloader_init();
	return glloader_GLES_NV_bindless_texture();
}
glloader_GLES_NV_bindless_textureFUNC glloader_GLES_NV_bindless_texture = self_init_glloader_GLES_NV_bindless_texture;

#ifdef GLES_NV_bindless_texture

static GLuint64 GLLOADER_APIENTRY self_init_glGetTextureHandleNV(GLuint texture)
{
	glloader_init();
	return glGetTextureHandleNV(texture);
}
static GLuint64 GLLOADER_APIENTRY self_init_glGetTextureSamplerHandleNV(GLuint texture, GLuint sampler)
{
	glloader_init();
	return glGetTextureSamplerHandleNV(texture, sampler);
}
static void GLLOADER_APIENTRY self_init_glMakeTextureHandleResidentNV(GLuint64 handle)
{
	glloader_init();
	glMakeTextureHandleResidentNV(handle);
}
static void GLLOADER_APIENTRY self_init_glMakeTextureHandleNonResidentNV(GLuint64 handle)
{
	glloader_init();
	glMakeTextureHandleNonResidentNV(handle);
}
static GLuint64 GLLOADER_APIENTRY self_init_glGetImageHandleNV(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format)
{
	glloader_init();
	return glGetImageHandleNV(texture, level, layered, layer, format);
}
static void GLLOADER_APIENTRY self_init_glMakeImageHandleResidentNV(GLuint64 handle, GLenum access)
{
	glloader_init();
	glMakeImageHandleResidentNV(handle, access);
}
static void GLLOADER_APIENTRY self_init_glMakeImageHandleNonResidentNV(GLuint64 handle)
{
	glloader_init();
	glMakeImageHandleNonResidentNV(handle);
}
static void GLLOADER_APIENTRY self_init_glUniformHandleui64NV(GLint location, GLuint64 value)
{
	glloader_init();
	glUniformHandleui64NV(location, value);
}
static void GLLOADER_APIENTRY self_init_glUniformHandleui64vNV(GLint location, GLsizei count, const GLuint64* value)
{
	glloader_init();
	glUniformHandleui64vNV(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformHandleui64NV(GLuint program, GLint location, GLuint64 value)
{
	glloader_init();
	glProgramUniformHandleui64NV(program, location, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformHandleui64vNV(GLuint program, GLint location, GLsizei count, const GLuint64* values)
{
	glloader_init();
	glProgramUniformHandleui64vNV(program, location, count, values);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsTextureHandleResidentNV(GLuint64 handle)
{
	glloader_init();
	return glIsTextureHandleResidentNV(handle);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsImageHandleResidentNV(GLuint64 handle)
{
	glloader_init();
	return glIsImageHandleResidentNV(handle);
}

glGetTextureHandleNVFUNC glGetTextureHandleNV = self_init_glGetTextureHandleNV;
glGetTextureSamplerHandleNVFUNC glGetTextureSamplerHandleNV = self_init_glGetTextureSamplerHandleNV;
glMakeTextureHandleResidentNVFUNC glMakeTextureHandleResidentNV = self_init_glMakeTextureHandleResidentNV;
glMakeTextureHandleNonResidentNVFUNC glMakeTextureHandleNonResidentNV = self_init_glMakeTextureHandleNonResidentNV;
glGetImageHandleNVFUNC glGetImageHandleNV = self_init_glGetImageHandleNV;
glMakeImageHandleResidentNVFUNC glMakeImageHandleResidentNV = self_init_glMakeImageHandleResidentNV;
glMakeImageHandleNonResidentNVFUNC glMakeImageHandleNonResidentNV = self_init_glMakeImageHandleNonResidentNV;
glUniformHandleui64NVFUNC glUniformHandleui64NV = self_init_glUniformHandleui64NV;
glUniformHandleui64vNVFUNC glUniformHandleui64vNV = self_init_glUniformHandleui64vNV;
glProgramUniformHandleui64NVFUNC glProgramUniformHandleui64NV = self_init_glProgramUniformHandleui64NV;
glProgramUniformHandleui64vNVFUNC glProgramUniformHandleui64vNV = self_init_glProgramUniformHandleui64vNV;
glIsTextureHandleResidentNVFUNC glIsTextureHandleResidentNV = self_init_glIsTextureHandleResidentNV;
glIsImageHandleResidentNVFUNC glIsImageHandleResidentNV = self_init_glIsImageHandleResidentNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_blend_equation_advanced()
{
	return _GLES_NV_blend_equation_advanced;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_blend_equation_advanced()
{
	glloader_init();
	return glloader_GLES_NV_blend_equation_advanced();
}
glloader_GLES_NV_blend_equation_advancedFUNC glloader_GLES_NV_blend_equation_advanced = self_init_glloader_GLES_NV_blend_equation_advanced;

#ifdef GLES_NV_blend_equation_advanced

static void GLLOADER_APIENTRY self_init_glBlendParameteriNV(GLenum pname, GLint value)
{
	glloader_init();
	glBlendParameteriNV(pname, value);
}
static void GLLOADER_APIENTRY self_init_glBlendBarrierNV()
{
	glloader_init();
	glBlendBarrierNV();
}

glBlendParameteriNVFUNC glBlendParameteriNV = self_init_glBlendParameteriNV;
glBlendBarrierNVFUNC glBlendBarrierNV = self_init_glBlendBarrierNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_conditional_render()
{
	return _GLES_NV_conditional_render;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_conditional_render()
{
	glloader_init();
	return glloader_GLES_NV_conditional_render();
}
glloader_GLES_NV_conditional_renderFUNC glloader_GLES_NV_conditional_render = self_init_glloader_GLES_NV_conditional_render;

#ifdef GLES_NV_conditional_render

static void GLLOADER_APIENTRY self_init_glBeginConditionalRenderNV(GLuint id, GLenum mode)
{
	glloader_init();
	glBeginConditionalRenderNV(id, mode);
}
static void GLLOADER_APIENTRY self_init_glEndConditionalRenderNV()
{
	glloader_init();
	glEndConditionalRenderNV();
}

glBeginConditionalRenderNVFUNC glBeginConditionalRenderNV = self_init_glBeginConditionalRenderNV;
glEndConditionalRenderNVFUNC glEndConditionalRenderNV = self_init_glEndConditionalRenderNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_conservative_raster()
{
	return _GLES_NV_conservative_raster;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_conservative_raster()
{
	glloader_init();
	return glloader_GLES_NV_conservative_raster();
}
glloader_GLES_NV_conservative_rasterFUNC glloader_GLES_NV_conservative_raster = self_init_glloader_GLES_NV_conservative_raster;

#ifdef GLES_NV_conservative_raster

static void GLLOADER_APIENTRY self_init_glSubpixelPrecisionBiasNV(GLuint xbits, GLuint ybits)
{
	glloader_init();
	glSubpixelPrecisionBiasNV(xbits, ybits);
}

glSubpixelPrecisionBiasNVFUNC glSubpixelPrecisionBiasNV = self_init_glSubpixelPrecisionBiasNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_copy_buffer()
{
	return _GLES_NV_copy_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_copy_buffer()
{
	glloader_init();
	return glloader_GLES_NV_copy_buffer();
}
glloader_GLES_NV_copy_bufferFUNC glloader_GLES_NV_copy_buffer = self_init_glloader_GLES_NV_copy_buffer;

#ifdef GLES_NV_copy_buffer

static void GLLOADER_APIENTRY self_init_glCopyBufferSubDataNV(GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size)
{
	glloader_init();
	glCopyBufferSubDataNV(readtarget, writetarget, readoffset, writeoffset, size);
}

glCopyBufferSubDataNVFUNC glCopyBufferSubDataNV = self_init_glCopyBufferSubDataNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_coverage_sample()
{
	return _GLES_NV_coverage_sample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_coverage_sample()
{
	glloader_init();
	return glloader_GLES_NV_coverage_sample();
}
glloader_GLES_NV_coverage_sampleFUNC glloader_GLES_NV_coverage_sample = self_init_glloader_GLES_NV_coverage_sample;

#ifdef GLES_NV_coverage_sample

static void GLLOADER_APIENTRY self_init_glCoverageMaskNV(GLboolean mask)
{
	glloader_init();
	glCoverageMaskNV(mask);
}
static void GLLOADER_APIENTRY self_init_glCoverageOperationNV(GLenum operation)
{
	glloader_init();
	glCoverageOperationNV(operation);
}

glCoverageMaskNVFUNC glCoverageMaskNV = self_init_glCoverageMaskNV;
glCoverageOperationNVFUNC glCoverageOperationNV = self_init_glCoverageOperationNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_depth_nonlinear()
{
	return _GLES_NV_depth_nonlinear;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_depth_nonlinear()
{
	glloader_init();
	return glloader_GLES_NV_depth_nonlinear();
}
glloader_GLES_NV_depth_nonlinearFUNC glloader_GLES_NV_depth_nonlinear = self_init_glloader_GLES_NV_depth_nonlinear;

static char GLLOADER_APIENTRY _glloader_GLES_NV_draw_buffers()
{
	return _GLES_NV_draw_buffers;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_draw_buffers()
{
	glloader_init();
	return glloader_GLES_NV_draw_buffers();
}
glloader_GLES_NV_draw_buffersFUNC glloader_GLES_NV_draw_buffers = self_init_glloader_GLES_NV_draw_buffers;

#ifdef GLES_NV_draw_buffers

static void GLLOADER_APIENTRY self_init_glDrawBuffersNV(GLsizei n, const GLenum* bufs)
{
	glloader_init();
	glDrawBuffersNV(n, bufs);
}

glDrawBuffersNVFUNC glDrawBuffersNV = self_init_glDrawBuffersNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_draw_instanced()
{
	return _GLES_NV_draw_instanced;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_draw_instanced()
{
	glloader_init();
	return glloader_GLES_NV_draw_instanced();
}
glloader_GLES_NV_draw_instancedFUNC glloader_GLES_NV_draw_instanced = self_init_glloader_GLES_NV_draw_instanced;

#ifdef GLES_NV_draw_instanced

static void GLLOADER_APIENTRY self_init_glDrawArraysInstancedNV(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	glloader_init();
	glDrawArraysInstancedNV(mode, first, count, primcount);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstancedNV(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount)
{
	glloader_init();
	glDrawElementsInstancedNV(mode, count, type, indices, primcount);
}

glDrawArraysInstancedNVFUNC glDrawArraysInstancedNV = self_init_glDrawArraysInstancedNV;
glDrawElementsInstancedNVFUNC glDrawElementsInstancedNV = self_init_glDrawElementsInstancedNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_draw_texture()
{
	return _GLES_NV_draw_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_draw_texture()
{
	glloader_init();
	return glloader_GLES_NV_draw_texture();
}
glloader_GLES_NV_draw_textureFUNC glloader_GLES_NV_draw_texture = self_init_glloader_GLES_NV_draw_texture;

#ifdef GLES_NV_draw_texture

static void GLLOADER_APIENTRY self_init_glDrawTextureNV(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1)
{
	glloader_init();
	glDrawTextureNV(texture, sampler, x0, y0, x1, y1, z, s0, t0, s1, t1);
}

glDrawTextureNVFUNC glDrawTextureNV = self_init_glDrawTextureNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_EGL_stream_consumer_external()
{
	return _GLES_NV_EGL_stream_consumer_external;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_EGL_stream_consumer_external()
{
	glloader_init();
	return glloader_GLES_NV_EGL_stream_consumer_external();
}
glloader_GLES_NV_EGL_stream_consumer_externalFUNC glloader_GLES_NV_EGL_stream_consumer_external = self_init_glloader_GLES_NV_EGL_stream_consumer_external;

static char GLLOADER_APIENTRY _glloader_GLES_NV_explicit_attrib_location()
{
	return _GLES_NV_explicit_attrib_location;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_explicit_attrib_location()
{
	glloader_init();
	return glloader_GLES_NV_explicit_attrib_location();
}
glloader_GLES_NV_explicit_attrib_locationFUNC glloader_GLES_NV_explicit_attrib_location = self_init_glloader_GLES_NV_explicit_attrib_location;

static char GLLOADER_APIENTRY _glloader_GLES_NV_fbo_color_attachments()
{
	return _GLES_NV_fbo_color_attachments;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_fbo_color_attachments()
{
	glloader_init();
	return glloader_GLES_NV_fbo_color_attachments();
}
glloader_GLES_NV_fbo_color_attachmentsFUNC glloader_GLES_NV_fbo_color_attachments = self_init_glloader_GLES_NV_fbo_color_attachments;

static char GLLOADER_APIENTRY _glloader_GLES_NV_fence()
{
	return _GLES_NV_fence;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_fence()
{
	glloader_init();
	return glloader_GLES_NV_fence();
}
glloader_GLES_NV_fenceFUNC glloader_GLES_NV_fence = self_init_glloader_GLES_NV_fence;

#ifdef GLES_NV_fence

static void GLLOADER_APIENTRY self_init_glDeleteFencesNV(GLsizei n, const GLuint* fences)
{
	glloader_init();
	glDeleteFencesNV(n, fences);
}
static void GLLOADER_APIENTRY self_init_glGenFencesNV(GLsizei n, GLuint* fences)
{
	glloader_init();
	glGenFencesNV(n, fences);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsFenceNV(GLuint fence)
{
	glloader_init();
	return glIsFenceNV(fence);
}
static GLboolean GLLOADER_APIENTRY self_init_glTestFenceNV(GLuint fence)
{
	glloader_init();
	return glTestFenceNV(fence);
}
static void GLLOADER_APIENTRY self_init_glGetFenceivNV(GLuint fence, GLenum pname, GLint* params)
{
	glloader_init();
	glGetFenceivNV(fence, pname, params);
}
static void GLLOADER_APIENTRY self_init_glFinishFenceNV(GLuint fence)
{
	glloader_init();
	glFinishFenceNV(fence);
}
static void GLLOADER_APIENTRY self_init_glSetFenceNV(GLuint fence, GLenum condition)
{
	glloader_init();
	glSetFenceNV(fence, condition);
}

glDeleteFencesNVFUNC glDeleteFencesNV = self_init_glDeleteFencesNV;
glGenFencesNVFUNC glGenFencesNV = self_init_glGenFencesNV;
glIsFenceNVFUNC glIsFenceNV = self_init_glIsFenceNV;
glTestFenceNVFUNC glTestFenceNV = self_init_glTestFenceNV;
glGetFenceivNVFUNC glGetFenceivNV = self_init_glGetFenceivNV;
glFinishFenceNVFUNC glFinishFenceNV = self_init_glFinishFenceNV;
glSetFenceNVFUNC glSetFenceNV = self_init_glSetFenceNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_fill_rectangle()
{
	return _GLES_NV_fill_rectangle;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_fill_rectangle()
{
	glloader_init();
	return glloader_GLES_NV_fill_rectangle();
}
glloader_GLES_NV_fill_rectangleFUNC glloader_GLES_NV_fill_rectangle = self_init_glloader_GLES_NV_fill_rectangle;

static char GLLOADER_APIENTRY _glloader_GLES_NV_fragment_coverage_to_color()
{
	return _GLES_NV_fragment_coverage_to_color;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_fragment_coverage_to_color()
{
	glloader_init();
	return glloader_GLES_NV_fragment_coverage_to_color();
}
glloader_GLES_NV_fragment_coverage_to_colorFUNC glloader_GLES_NV_fragment_coverage_to_color = self_init_glloader_GLES_NV_fragment_coverage_to_color;

#ifdef GLES_NV_fragment_coverage_to_color

static void GLLOADER_APIENTRY self_init_glFragmentCoverageColorNV(GLuint color)
{
	glloader_init();
	glFragmentCoverageColorNV(color);
}

glFragmentCoverageColorNVFUNC glFragmentCoverageColorNV = self_init_glFragmentCoverageColorNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_fragment_shader_interlock()
{
	return _GLES_NV_fragment_shader_interlock;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_fragment_shader_interlock()
{
	glloader_init();
	return glloader_GLES_NV_fragment_shader_interlock();
}
glloader_GLES_NV_fragment_shader_interlockFUNC glloader_GLES_NV_fragment_shader_interlock = self_init_glloader_GLES_NV_fragment_shader_interlock;

static char GLLOADER_APIENTRY _glloader_GLES_NV_framebuffer_blit()
{
	return _GLES_NV_framebuffer_blit;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_framebuffer_blit()
{
	glloader_init();
	return glloader_GLES_NV_framebuffer_blit();
}
glloader_GLES_NV_framebuffer_blitFUNC glloader_GLES_NV_framebuffer_blit = self_init_glloader_GLES_NV_framebuffer_blit;

#ifdef GLES_NV_framebuffer_blit

static void GLLOADER_APIENTRY self_init_glBlitFramebufferNV(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	glloader_init();
	glBlitFramebufferNV(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}

glBlitFramebufferNVFUNC glBlitFramebufferNV = self_init_glBlitFramebufferNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_framebuffer_mixed_samples()
{
	return _GLES_NV_framebuffer_mixed_samples;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_framebuffer_mixed_samples()
{
	glloader_init();
	return glloader_GLES_NV_framebuffer_mixed_samples();
}
glloader_GLES_NV_framebuffer_mixed_samplesFUNC glloader_GLES_NV_framebuffer_mixed_samples = self_init_glloader_GLES_NV_framebuffer_mixed_samples;

#ifdef GLES_NV_framebuffer_mixed_samples

static void GLLOADER_APIENTRY self_init_glCoverageModulationTableNV(GLsizei n, GLfloat const * v)
{
	glloader_init();
	glCoverageModulationTableNV(n, v);
}
static void GLLOADER_APIENTRY self_init_glGetCoverageModulationTableNV(GLsizei bufsize, GLfloat* v)
{
	glloader_init();
	glGetCoverageModulationTableNV(bufsize, v);
}
static void GLLOADER_APIENTRY self_init_glCoverageModulationNV(GLenum components)
{
	glloader_init();
	glCoverageModulationNV(components);
}

glCoverageModulationTableNVFUNC glCoverageModulationTableNV = self_init_glCoverageModulationTableNV;
glGetCoverageModulationTableNVFUNC glGetCoverageModulationTableNV = self_init_glGetCoverageModulationTableNV;
glCoverageModulationNVFUNC glCoverageModulationNV = self_init_glCoverageModulationNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_framebuffer_multisample()
{
	return _GLES_NV_framebuffer_multisample;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_framebuffer_multisample()
{
	glloader_init();
	return glloader_GLES_NV_framebuffer_multisample();
}
glloader_GLES_NV_framebuffer_multisampleFUNC glloader_GLES_NV_framebuffer_multisample = self_init_glloader_GLES_NV_framebuffer_multisample;

#ifdef GLES_NV_framebuffer_multisample

static void GLLOADER_APIENTRY self_init_glRenderbufferStorageMultisampleNV(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glRenderbufferStorageMultisampleNV(target, samples, internalformat, width, height);
}

glRenderbufferStorageMultisampleNVFUNC glRenderbufferStorageMultisampleNV = self_init_glRenderbufferStorageMultisampleNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_generate_mipmap_sRGB()
{
	return _GLES_NV_generate_mipmap_sRGB;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_generate_mipmap_sRGB()
{
	glloader_init();
	return glloader_GLES_NV_generate_mipmap_sRGB();
}
glloader_GLES_NV_generate_mipmap_sRGBFUNC glloader_GLES_NV_generate_mipmap_sRGB = self_init_glloader_GLES_NV_generate_mipmap_sRGB;

static char GLLOADER_APIENTRY _glloader_GLES_NV_geometry_shader_passthrough()
{
	return _GLES_NV_geometry_shader_passthrough;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_geometry_shader_passthrough()
{
	glloader_init();
	return glloader_GLES_NV_geometry_shader_passthrough();
}
glloader_GLES_NV_geometry_shader_passthroughFUNC glloader_GLES_NV_geometry_shader_passthrough = self_init_glloader_GLES_NV_geometry_shader_passthrough;

static char GLLOADER_APIENTRY _glloader_GLES_NV_image_formats()
{
	return _GLES_NV_image_formats;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_image_formats()
{
	glloader_init();
	return glloader_GLES_NV_image_formats();
}
glloader_GLES_NV_image_formatsFUNC glloader_GLES_NV_image_formats = self_init_glloader_GLES_NV_image_formats;

static char GLLOADER_APIENTRY _glloader_GLES_NV_instanced_arrays()
{
	return _GLES_NV_instanced_arrays;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_instanced_arrays()
{
	glloader_init();
	return glloader_GLES_NV_instanced_arrays();
}
glloader_GLES_NV_instanced_arraysFUNC glloader_GLES_NV_instanced_arrays = self_init_glloader_GLES_NV_instanced_arrays;

#ifdef GLES_NV_instanced_arrays

static void GLLOADER_APIENTRY self_init_glVertexAttribDivisorNV(GLuint index, GLuint divisor)
{
	glloader_init();
	glVertexAttribDivisorNV(index, divisor);
}

glVertexAttribDivisorNVFUNC glVertexAttribDivisorNV = self_init_glVertexAttribDivisorNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_internalformat_sample_query()
{
	return _GLES_NV_internalformat_sample_query;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_internalformat_sample_query()
{
	glloader_init();
	return glloader_GLES_NV_internalformat_sample_query();
}
glloader_GLES_NV_internalformat_sample_queryFUNC glloader_GLES_NV_internalformat_sample_query = self_init_glloader_GLES_NV_internalformat_sample_query;

#ifdef GLES_NV_internalformat_sample_query

static void GLLOADER_APIENTRY self_init_glGetInternalformatSampleivNV(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint* params)
{
	glloader_init();
	glGetInternalformatSampleivNV(target, internalformat, samples, pname, bufSize, params);
}

glGetInternalformatSampleivNVFUNC glGetInternalformatSampleivNV = self_init_glGetInternalformatSampleivNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_non_square_matrices()
{
	return _GLES_NV_non_square_matrices;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_non_square_matrices()
{
	glloader_init();
	return glloader_GLES_NV_non_square_matrices();
}
glloader_GLES_NV_non_square_matricesFUNC glloader_GLES_NV_non_square_matrices = self_init_glloader_GLES_NV_non_square_matrices;

#ifdef GLES_NV_non_square_matrices

static void GLLOADER_APIENTRY self_init_glUniformMatrix2x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	glUniformMatrix2x3fvNV(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix3x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	glUniformMatrix3x2fvNV(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix2x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	glUniformMatrix2x4fvNV(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix4x2fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	glUniformMatrix4x2fvNV(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix3x4fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	glUniformMatrix3x4fvNV(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix4x3fvNV(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	glloader_init();
	glUniformMatrix4x3fvNV(location, count, transpose, value);
}

glUniformMatrix2x3fvNVFUNC glUniformMatrix2x3fvNV = self_init_glUniformMatrix2x3fvNV;
glUniformMatrix3x2fvNVFUNC glUniformMatrix3x2fvNV = self_init_glUniformMatrix3x2fvNV;
glUniformMatrix2x4fvNVFUNC glUniformMatrix2x4fvNV = self_init_glUniformMatrix2x4fvNV;
glUniformMatrix4x2fvNVFUNC glUniformMatrix4x2fvNV = self_init_glUniformMatrix4x2fvNV;
glUniformMatrix3x4fvNVFUNC glUniformMatrix3x4fvNV = self_init_glUniformMatrix3x4fvNV;
glUniformMatrix4x3fvNVFUNC glUniformMatrix4x3fvNV = self_init_glUniformMatrix4x3fvNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_packed_float()
{
	return _GLES_NV_packed_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_packed_float()
{
	glloader_init();
	return glloader_GLES_NV_packed_float();
}
glloader_GLES_NV_packed_floatFUNC glloader_GLES_NV_packed_float = self_init_glloader_GLES_NV_packed_float;

static char GLLOADER_APIENTRY _glloader_GLES_NV_path_rendering()
{
	return _GLES_NV_path_rendering;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_path_rendering()
{
	glloader_init();
	return glloader_GLES_NV_path_rendering();
}
glloader_GLES_NV_path_renderingFUNC glloader_GLES_NV_path_rendering = self_init_glloader_GLES_NV_path_rendering;

#ifdef GLES_NV_path_rendering

static GLuint GLLOADER_APIENTRY self_init_glGenPathsNV(GLsizei range)
{
	glloader_init();
	return glGenPathsNV(range);
}
static void GLLOADER_APIENTRY self_init_glDeletePathsNV(GLuint path, GLsizei range)
{
	glloader_init();
	glDeletePathsNV(path, range);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsPathNV(GLuint path)
{
	glloader_init();
	return glIsPathNV(path);
}
static void GLLOADER_APIENTRY self_init_glPathCommandsNV(GLuint path, GLsizei numCommands, const GLubyte* commands, GLsizei numCoords, GLenum coordType, const GLvoid* coords)
{
	glloader_init();
	glPathCommandsNV(path, numCommands, commands, numCoords, coordType, coords);
}
static void GLLOADER_APIENTRY self_init_glPathCoordsNV(GLuint path, GLsizei numCoords, GLenum coordType, const GLvoid* coords)
{
	glloader_init();
	glPathCoordsNV(path, numCoords, coordType, coords);
}
static void GLLOADER_APIENTRY self_init_glPathSubCommandsNV(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte* commands, GLsizei numCoords, GLenum coordType, const GLvoid* coords)
{
	glloader_init();
	glPathSubCommandsNV(path, commandStart, commandsToDelete, numCommands, commands, numCoords, coordType, coords);
}
static void GLLOADER_APIENTRY self_init_glPathSubCoordsNV(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const GLvoid* coords)
{
	glloader_init();
	glPathSubCoordsNV(path, coordStart, numCoords, coordType, coords);
}
static void GLLOADER_APIENTRY self_init_glPathStringNV(GLuint path, GLenum format, GLsizei length, const GLvoid* pathString)
{
	glloader_init();
	glPathStringNV(path, format, length, pathString);
}
static void GLLOADER_APIENTRY self_init_glPathGlyphsNV(GLuint firstPathName, GLenum fontTarget, const GLvoid* fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const GLvoid* charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	glloader_init();
	glPathGlyphsNV(firstPathName, fontTarget, fontName, fontStyle, numGlyphs, type, charcodes, handleMissingGlyphs, pathParameterTemplate, emScale);
}
static void GLLOADER_APIENTRY self_init_glPathGlyphRangeNV(GLuint firstPathName, GLenum fontTarget, const GLvoid* fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale)
{
	glloader_init();
	glPathGlyphRangeNV(firstPathName, fontTarget, fontName, fontStyle, firstGlyph, numGlyphs, handleMissingGlyphs, pathParameterTemplate, emScale);
}
static void GLLOADER_APIENTRY self_init_glWeightPathsNV(GLuint resultPath, GLsizei numPaths, const GLuint* paths, const GLfloat* weights)
{
	glloader_init();
	glWeightPathsNV(resultPath, numPaths, paths, weights);
}
static void GLLOADER_APIENTRY self_init_glCopyPathNV(GLuint resultPath, GLuint srcPath)
{
	glloader_init();
	glCopyPathNV(resultPath, srcPath);
}
static void GLLOADER_APIENTRY self_init_glInterpolatePathsNV(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight)
{
	glloader_init();
	glInterpolatePathsNV(resultPath, pathA, pathB, weight);
}
static void GLLOADER_APIENTRY self_init_glTransformPathNV(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat* transformValues)
{
	glloader_init();
	glTransformPathNV(resultPath, srcPath, transformType, transformValues);
}
static void GLLOADER_APIENTRY self_init_glPathParameterivNV(GLuint path, GLenum pname, const GLint* value)
{
	glloader_init();
	glPathParameterivNV(path, pname, value);
}
static void GLLOADER_APIENTRY self_init_glPathParameteriNV(GLuint path, GLenum pname, GLint value)
{
	glloader_init();
	glPathParameteriNV(path, pname, value);
}
static void GLLOADER_APIENTRY self_init_glPathParameterfvNV(GLuint path, GLenum pname, const GLfloat* value)
{
	glloader_init();
	glPathParameterfvNV(path, pname, value);
}
static void GLLOADER_APIENTRY self_init_glPathParameterfNV(GLuint path, GLenum pname, GLfloat value)
{
	glloader_init();
	glPathParameterfNV(path, pname, value);
}
static void GLLOADER_APIENTRY self_init_glPathDashArrayNV(GLuint path, GLsizei dashCount, const GLfloat* dashArray)
{
	glloader_init();
	glPathDashArrayNV(path, dashCount, dashArray);
}
static void GLLOADER_APIENTRY self_init_glPathStencilFuncNV(GLenum func, GLint ref, GLuint mask)
{
	glloader_init();
	glPathStencilFuncNV(func, ref, mask);
}
static void GLLOADER_APIENTRY self_init_glPathStencilDepthOffsetNV(GLfloat factor, GLfloat units)
{
	glloader_init();
	glPathStencilDepthOffsetNV(factor, units);
}
static void GLLOADER_APIENTRY self_init_glStencilFillPathNV(GLuint path, GLenum fillMode, GLuint mask)
{
	glloader_init();
	glStencilFillPathNV(path, fillMode, mask);
}
static void GLLOADER_APIENTRY self_init_glStencilStrokePathNV(GLuint path, GLint reference, GLuint mask)
{
	glloader_init();
	glStencilStrokePathNV(path, reference, mask);
}
static void GLLOADER_APIENTRY self_init_glStencilFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat* transformValues)
{
	glloader_init();
	glStencilFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, fillMode, mask, transformType, transformValues);
}
static void GLLOADER_APIENTRY self_init_glStencilStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat* transformValues)
{
	glloader_init();
	glStencilStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, reference, mask, transformType, transformValues);
}
static void GLLOADER_APIENTRY self_init_glPathCoverDepthFuncNV(GLenum func)
{
	glloader_init();
	glPathCoverDepthFuncNV(func);
}
static void GLLOADER_APIENTRY self_init_glPathColorGenNV(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat* coeffs)
{
	glloader_init();
	glPathColorGenNV(color, genMode, colorFormat, coeffs);
}
static void GLLOADER_APIENTRY self_init_glPathTexGenNV(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat* coeffs)
{
	glloader_init();
	glPathTexGenNV(texCoordSet, genMode, components, coeffs);
}
static void GLLOADER_APIENTRY self_init_glPathFogGenNV(GLenum genMode)
{
	glloader_init();
	glPathFogGenNV(genMode);
}
static void GLLOADER_APIENTRY self_init_glCoverFillPathNV(GLuint path, GLenum coverMode)
{
	glloader_init();
	glCoverFillPathNV(path, coverMode);
}
static void GLLOADER_APIENTRY self_init_glCoverStrokePathNV(GLuint path, GLenum coverMode)
{
	glloader_init();
	glCoverStrokePathNV(path, coverMode);
}
static void GLLOADER_APIENTRY self_init_glCoverFillPathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat* transformValues)
{
	glloader_init();
	glCoverFillPathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}
static void GLLOADER_APIENTRY self_init_glCoverStrokePathInstancedNV(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat* transformValues)
{
	glloader_init();
	glCoverStrokePathInstancedNV(numPaths, pathNameType, paths, pathBase, coverMode, transformType, transformValues);
}
static void GLLOADER_APIENTRY self_init_glGetPathParameterivNV(GLuint path, GLenum pname, GLint* value)
{
	glloader_init();
	glGetPathParameterivNV(path, pname, value);
}
static void GLLOADER_APIENTRY self_init_glGetPathParameterfvNV(GLuint path, GLenum pname, GLfloat* value)
{
	glloader_init();
	glGetPathParameterfvNV(path, pname, value);
}
static void GLLOADER_APIENTRY self_init_glGetPathCommandsNV(GLuint path, GLubyte* commands)
{
	glloader_init();
	glGetPathCommandsNV(path, commands);
}
static void GLLOADER_APIENTRY self_init_glGetPathCoordsNV(GLuint path, GLfloat* coords)
{
	glloader_init();
	glGetPathCoordsNV(path, coords);
}
static void GLLOADER_APIENTRY self_init_glGetPathDashArrayNV(GLuint path, GLfloat* dashArray)
{
	glloader_init();
	glGetPathDashArrayNV(path, dashArray);
}
static void GLLOADER_APIENTRY self_init_glGetPathMetricsNV(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLsizei stride, GLfloat* metrics)
{
	glloader_init();
	glGetPathMetricsNV(metricQueryMask, numPaths, pathNameType, paths, pathBase, stride, metrics);
}
static void GLLOADER_APIENTRY self_init_glGetPathMetricRangeNV(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat* metrics)
{
	glloader_init();
	glGetPathMetricRangeNV(metricQueryMask, firstPathName, numPaths, stride, metrics);
}
static void GLLOADER_APIENTRY self_init_glGetPathSpacingNV(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat* returnedSpacing)
{
	glloader_init();
	glGetPathSpacingNV(pathListMode, numPaths, pathNameType, paths, pathBase, advanceScale, kerningScale, transformType, returnedSpacing);
}
static void GLLOADER_APIENTRY self_init_glGetPathColorGenivNV(GLenum color, GLenum pname, GLint* value)
{
	glloader_init();
	glGetPathColorGenivNV(color, pname, value);
}
static void GLLOADER_APIENTRY self_init_glGetPathColorGenfvNV(GLenum color, GLenum pname, GLfloat* value)
{
	glloader_init();
	glGetPathColorGenfvNV(color, pname, value);
}
static void GLLOADER_APIENTRY self_init_glGetPathTexGenivNV(GLenum texCoordSet, GLenum pname, GLint* value)
{
	glloader_init();
	glGetPathTexGenivNV(texCoordSet, pname, value);
}
static void GLLOADER_APIENTRY self_init_glGetPathTexGenfvNV(GLenum texCoordSet, GLenum pname, GLfloat* value)
{
	glloader_init();
	glGetPathTexGenfvNV(texCoordSet, pname, value);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsPointInFillPathNV(GLuint path, GLuint mask, GLfloat x, GLfloat y)
{
	glloader_init();
	return glIsPointInFillPathNV(path, mask, x, y);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsPointInStrokePathNV(GLuint path, GLfloat x, GLfloat y)
{
	glloader_init();
	return glIsPointInStrokePathNV(path, x, y);
}
static GLfloat GLLOADER_APIENTRY self_init_glGetPathLengthNV(GLuint path, GLsizei startSegment, GLsizei numSegments)
{
	glloader_init();
	return glGetPathLengthNV(path, startSegment, numSegments);
}
static GLboolean GLLOADER_APIENTRY self_init_glPointAlongPathNV(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat* x, GLfloat* y, GLfloat* tangentX, GLfloat* tangentY)
{
	glloader_init();
	return glPointAlongPathNV(path, startSegment, numSegments, distance, x, y, tangentX, tangentY);
}

glGenPathsNVFUNC glGenPathsNV = self_init_glGenPathsNV;
glDeletePathsNVFUNC glDeletePathsNV = self_init_glDeletePathsNV;
glIsPathNVFUNC glIsPathNV = self_init_glIsPathNV;
glPathCommandsNVFUNC glPathCommandsNV = self_init_glPathCommandsNV;
glPathCoordsNVFUNC glPathCoordsNV = self_init_glPathCoordsNV;
glPathSubCommandsNVFUNC glPathSubCommandsNV = self_init_glPathSubCommandsNV;
glPathSubCoordsNVFUNC glPathSubCoordsNV = self_init_glPathSubCoordsNV;
glPathStringNVFUNC glPathStringNV = self_init_glPathStringNV;
glPathGlyphsNVFUNC glPathGlyphsNV = self_init_glPathGlyphsNV;
glPathGlyphRangeNVFUNC glPathGlyphRangeNV = self_init_glPathGlyphRangeNV;
glWeightPathsNVFUNC glWeightPathsNV = self_init_glWeightPathsNV;
glCopyPathNVFUNC glCopyPathNV = self_init_glCopyPathNV;
glInterpolatePathsNVFUNC glInterpolatePathsNV = self_init_glInterpolatePathsNV;
glTransformPathNVFUNC glTransformPathNV = self_init_glTransformPathNV;
glPathParameterivNVFUNC glPathParameterivNV = self_init_glPathParameterivNV;
glPathParameteriNVFUNC glPathParameteriNV = self_init_glPathParameteriNV;
glPathParameterfvNVFUNC glPathParameterfvNV = self_init_glPathParameterfvNV;
glPathParameterfNVFUNC glPathParameterfNV = self_init_glPathParameterfNV;
glPathDashArrayNVFUNC glPathDashArrayNV = self_init_glPathDashArrayNV;
glPathStencilFuncNVFUNC glPathStencilFuncNV = self_init_glPathStencilFuncNV;
glPathStencilDepthOffsetNVFUNC glPathStencilDepthOffsetNV = self_init_glPathStencilDepthOffsetNV;
glStencilFillPathNVFUNC glStencilFillPathNV = self_init_glStencilFillPathNV;
glStencilStrokePathNVFUNC glStencilStrokePathNV = self_init_glStencilStrokePathNV;
glStencilFillPathInstancedNVFUNC glStencilFillPathInstancedNV = self_init_glStencilFillPathInstancedNV;
glStencilStrokePathInstancedNVFUNC glStencilStrokePathInstancedNV = self_init_glStencilStrokePathInstancedNV;
glPathCoverDepthFuncNVFUNC glPathCoverDepthFuncNV = self_init_glPathCoverDepthFuncNV;
glPathColorGenNVFUNC glPathColorGenNV = self_init_glPathColorGenNV;
glPathTexGenNVFUNC glPathTexGenNV = self_init_glPathTexGenNV;
glPathFogGenNVFUNC glPathFogGenNV = self_init_glPathFogGenNV;
glCoverFillPathNVFUNC glCoverFillPathNV = self_init_glCoverFillPathNV;
glCoverStrokePathNVFUNC glCoverStrokePathNV = self_init_glCoverStrokePathNV;
glCoverFillPathInstancedNVFUNC glCoverFillPathInstancedNV = self_init_glCoverFillPathInstancedNV;
glCoverStrokePathInstancedNVFUNC glCoverStrokePathInstancedNV = self_init_glCoverStrokePathInstancedNV;
glGetPathParameterivNVFUNC glGetPathParameterivNV = self_init_glGetPathParameterivNV;
glGetPathParameterfvNVFUNC glGetPathParameterfvNV = self_init_glGetPathParameterfvNV;
glGetPathCommandsNVFUNC glGetPathCommandsNV = self_init_glGetPathCommandsNV;
glGetPathCoordsNVFUNC glGetPathCoordsNV = self_init_glGetPathCoordsNV;
glGetPathDashArrayNVFUNC glGetPathDashArrayNV = self_init_glGetPathDashArrayNV;
glGetPathMetricsNVFUNC glGetPathMetricsNV = self_init_glGetPathMetricsNV;
glGetPathMetricRangeNVFUNC glGetPathMetricRangeNV = self_init_glGetPathMetricRangeNV;
glGetPathSpacingNVFUNC glGetPathSpacingNV = self_init_glGetPathSpacingNV;
glGetPathColorGenivNVFUNC glGetPathColorGenivNV = self_init_glGetPathColorGenivNV;
glGetPathColorGenfvNVFUNC glGetPathColorGenfvNV = self_init_glGetPathColorGenfvNV;
glGetPathTexGenivNVFUNC glGetPathTexGenivNV = self_init_glGetPathTexGenivNV;
glGetPathTexGenfvNVFUNC glGetPathTexGenfvNV = self_init_glGetPathTexGenfvNV;
glIsPointInFillPathNVFUNC glIsPointInFillPathNV = self_init_glIsPointInFillPathNV;
glIsPointInStrokePathNVFUNC glIsPointInStrokePathNV = self_init_glIsPointInStrokePathNV;
glGetPathLengthNVFUNC glGetPathLengthNV = self_init_glGetPathLengthNV;
glPointAlongPathNVFUNC glPointAlongPathNV = self_init_glPointAlongPathNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_path_rendering_shared_edge()
{
	return _GLES_NV_path_rendering_shared_edge;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_path_rendering_shared_edge()
{
	glloader_init();
	return glloader_GLES_NV_path_rendering_shared_edge();
}
glloader_GLES_NV_path_rendering_shared_edgeFUNC glloader_GLES_NV_path_rendering_shared_edge = self_init_glloader_GLES_NV_path_rendering_shared_edge;

static char GLLOADER_APIENTRY _glloader_GLES_NV_pixel_buffer_object()
{
	return _GLES_NV_pixel_buffer_object;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_pixel_buffer_object()
{
	glloader_init();
	return glloader_GLES_NV_pixel_buffer_object();
}
glloader_GLES_NV_pixel_buffer_objectFUNC glloader_GLES_NV_pixel_buffer_object = self_init_glloader_GLES_NV_pixel_buffer_object;

static char GLLOADER_APIENTRY _glloader_GLES_NV_polygon_mode()
{
	return _GLES_NV_polygon_mode;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_polygon_mode()
{
	glloader_init();
	return glloader_GLES_NV_polygon_mode();
}
glloader_GLES_NV_polygon_modeFUNC glloader_GLES_NV_polygon_mode = self_init_glloader_GLES_NV_polygon_mode;

#ifdef GLES_NV_polygon_mode

static void GLLOADER_APIENTRY self_init_glPolygonModeNV(GLenum face, GLenum mode)
{
	glloader_init();
	glPolygonModeNV(face, mode);
}

glPolygonModeNVFUNC glPolygonModeNV = self_init_glPolygonModeNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_read_buffer()
{
	return _GLES_NV_read_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_read_buffer()
{
	glloader_init();
	return glloader_GLES_NV_read_buffer();
}
glloader_GLES_NV_read_bufferFUNC glloader_GLES_NV_read_buffer = self_init_glloader_GLES_NV_read_buffer;

#ifdef GLES_NV_read_buffer

static void GLLOADER_APIENTRY self_init_glReadBufferNV(GLenum mode)
{
	glloader_init();
	glReadBufferNV(mode);
}

glReadBufferNVFUNC glReadBufferNV = self_init_glReadBufferNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_read_depth()
{
	return _GLES_NV_read_depth;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_read_depth()
{
	glloader_init();
	return glloader_GLES_NV_read_depth();
}
glloader_GLES_NV_read_depthFUNC glloader_GLES_NV_read_depth = self_init_glloader_GLES_NV_read_depth;

static char GLLOADER_APIENTRY _glloader_GLES_NV_read_depth_stencil()
{
	return _GLES_NV_read_depth_stencil;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_read_depth_stencil()
{
	glloader_init();
	return glloader_GLES_NV_read_depth_stencil();
}
glloader_GLES_NV_read_depth_stencilFUNC glloader_GLES_NV_read_depth_stencil = self_init_glloader_GLES_NV_read_depth_stencil;

static char GLLOADER_APIENTRY _glloader_GLES_NV_read_stencil()
{
	return _GLES_NV_read_stencil;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_read_stencil()
{
	glloader_init();
	return glloader_GLES_NV_read_stencil();
}
glloader_GLES_NV_read_stencilFUNC glloader_GLES_NV_read_stencil = self_init_glloader_GLES_NV_read_stencil;

static char GLLOADER_APIENTRY _glloader_GLES_NV_sample_locations()
{
	return _GLES_NV_sample_locations;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_sample_locations()
{
	glloader_init();
	return glloader_GLES_NV_sample_locations();
}
glloader_GLES_NV_sample_locationsFUNC glloader_GLES_NV_sample_locations = self_init_glloader_GLES_NV_sample_locations;

#ifdef GLES_NV_sample_locations

static void GLLOADER_APIENTRY self_init_glFramebufferSampleLocationsfvNV(GLenum target, GLuint start, GLsizei count, GLfloat const * v)
{
	glloader_init();
	glFramebufferSampleLocationsfvNV(target, start, count, v);
}
static void GLLOADER_APIENTRY self_init_glNamedFramebufferSampleLocationsfvNV(GLuint framebuffer, GLuint start, GLsizei count, GLfloat const * v)
{
	glloader_init();
	glNamedFramebufferSampleLocationsfvNV(framebuffer, start, count, v);
}
static void GLLOADER_APIENTRY self_init_glResolveDepthValuesNV()
{
	glloader_init();
	glResolveDepthValuesNV();
}

glFramebufferSampleLocationsfvNVFUNC glFramebufferSampleLocationsfvNV = self_init_glFramebufferSampleLocationsfvNV;
glNamedFramebufferSampleLocationsfvNVFUNC glNamedFramebufferSampleLocationsfvNV = self_init_glNamedFramebufferSampleLocationsfvNV;
glResolveDepthValuesNVFUNC glResolveDepthValuesNV = self_init_glResolveDepthValuesNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_sample_mask_override_coverage()
{
	return _GLES_NV_sample_mask_override_coverage;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_sample_mask_override_coverage()
{
	glloader_init();
	return glloader_GLES_NV_sample_mask_override_coverage();
}
glloader_GLES_NV_sample_mask_override_coverageFUNC glloader_GLES_NV_sample_mask_override_coverage = self_init_glloader_GLES_NV_sample_mask_override_coverage;

static char GLLOADER_APIENTRY _glloader_GLES_NV_shader_noperspective_interpolation()
{
	return _GLES_NV_shader_noperspective_interpolation;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_shader_noperspective_interpolation()
{
	glloader_init();
	return glloader_GLES_NV_shader_noperspective_interpolation();
}
glloader_GLES_NV_shader_noperspective_interpolationFUNC glloader_GLES_NV_shader_noperspective_interpolation = self_init_glloader_GLES_NV_shader_noperspective_interpolation;

static char GLLOADER_APIENTRY _glloader_GLES_NV_shadow_samplers_array()
{
	return _GLES_NV_shadow_samplers_array;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_shadow_samplers_array()
{
	glloader_init();
	return glloader_GLES_NV_shadow_samplers_array();
}
glloader_GLES_NV_shadow_samplers_arrayFUNC glloader_GLES_NV_shadow_samplers_array = self_init_glloader_GLES_NV_shadow_samplers_array;

static char GLLOADER_APIENTRY _glloader_GLES_NV_shadow_samplers_cube()
{
	return _GLES_NV_shadow_samplers_cube;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_shadow_samplers_cube()
{
	glloader_init();
	return glloader_GLES_NV_shadow_samplers_cube();
}
glloader_GLES_NV_shadow_samplers_cubeFUNC glloader_GLES_NV_shadow_samplers_cube = self_init_glloader_GLES_NV_shadow_samplers_cube;

static char GLLOADER_APIENTRY _glloader_GLES_NV_sRGB_formats()
{
	return _GLES_NV_sRGB_formats;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_sRGB_formats()
{
	glloader_init();
	return glloader_GLES_NV_sRGB_formats();
}
glloader_GLES_NV_sRGB_formatsFUNC glloader_GLES_NV_sRGB_formats = self_init_glloader_GLES_NV_sRGB_formats;

static char GLLOADER_APIENTRY _glloader_GLES_NV_texture_array()
{
	return _GLES_NV_texture_array;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_texture_array()
{
	glloader_init();
	return glloader_GLES_NV_texture_array();
}
glloader_GLES_NV_texture_arrayFUNC glloader_GLES_NV_texture_array = self_init_glloader_GLES_NV_texture_array;

#ifdef GLES_NV_texture_array

static void GLLOADER_APIENTRY self_init_glTexImage3DNV(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	glloader_init();
	glTexImage3DNV(target, level, internalformat, width, height, depth, border, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glTexSubImage3DNV(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels)
{
	glloader_init();
	glTexSubImage3DNV(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glCopyTexSubImage3DNV(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	glloader_init();
	glCopyTexSubImage3DNV(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexImage3DNV(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data)
{
	glloader_init();
	glCompressedTexImage3DNV(target, level, internalformat, width, height, depth, border, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexSubImage3DNV(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data)
{
	glloader_init();
	glCompressedTexSubImage3DNV(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glFramebufferTextureLayerNV(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	glloader_init();
	glFramebufferTextureLayerNV(target, attachment, texture, level, layer);
}

glTexImage3DNVFUNC glTexImage3DNV = self_init_glTexImage3DNV;
glTexSubImage3DNVFUNC glTexSubImage3DNV = self_init_glTexSubImage3DNV;
glCopyTexSubImage3DNVFUNC glCopyTexSubImage3DNV = self_init_glCopyTexSubImage3DNV;
glCompressedTexImage3DNVFUNC glCompressedTexImage3DNV = self_init_glCompressedTexImage3DNV;
glCompressedTexSubImage3DNVFUNC glCompressedTexSubImage3DNV = self_init_glCompressedTexSubImage3DNV;
glFramebufferTextureLayerNVFUNC glFramebufferTextureLayerNV = self_init_glFramebufferTextureLayerNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_texture_border_clamp()
{
	return _GLES_NV_texture_border_clamp;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_texture_border_clamp()
{
	glloader_init();
	return glloader_GLES_NV_texture_border_clamp();
}
glloader_GLES_NV_texture_border_clampFUNC glloader_GLES_NV_texture_border_clamp = self_init_glloader_GLES_NV_texture_border_clamp;

static char GLLOADER_APIENTRY _glloader_GLES_NV_texture_compression_latc()
{
	return _GLES_NV_texture_compression_latc;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_texture_compression_latc()
{
	glloader_init();
	return glloader_GLES_NV_texture_compression_latc();
}
glloader_GLES_NV_texture_compression_latcFUNC glloader_GLES_NV_texture_compression_latc = self_init_glloader_GLES_NV_texture_compression_latc;

static char GLLOADER_APIENTRY _glloader_GLES_NV_texture_compression_s3tc()
{
	return _GLES_NV_texture_compression_s3tc;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_texture_compression_s3tc()
{
	glloader_init();
	return glloader_GLES_NV_texture_compression_s3tc();
}
glloader_GLES_NV_texture_compression_s3tcFUNC glloader_GLES_NV_texture_compression_s3tc = self_init_glloader_GLES_NV_texture_compression_s3tc;

static char GLLOADER_APIENTRY _glloader_GLES_NV_texture_compression_s3tc_update()
{
	return _GLES_NV_texture_compression_s3tc_update;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_texture_compression_s3tc_update()
{
	glloader_init();
	return glloader_GLES_NV_texture_compression_s3tc_update();
}
glloader_GLES_NV_texture_compression_s3tc_updateFUNC glloader_GLES_NV_texture_compression_s3tc_update = self_init_glloader_GLES_NV_texture_compression_s3tc_update;

static char GLLOADER_APIENTRY _glloader_GLES_NV_texture_npot_2D_mipmap()
{
	return _GLES_NV_texture_npot_2D_mipmap;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_texture_npot_2D_mipmap()
{
	glloader_init();
	return glloader_GLES_NV_texture_npot_2D_mipmap();
}
glloader_GLES_NV_texture_npot_2D_mipmapFUNC glloader_GLES_NV_texture_npot_2D_mipmap = self_init_glloader_GLES_NV_texture_npot_2D_mipmap;

static char GLLOADER_APIENTRY _glloader_GLES_NV_viewport_array()
{
	return _GLES_NV_viewport_array;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_viewport_array()
{
	glloader_init();
	return glloader_GLES_NV_viewport_array();
}
glloader_GLES_NV_viewport_arrayFUNC glloader_GLES_NV_viewport_array = self_init_glloader_GLES_NV_viewport_array;

#ifdef GLES_NV_viewport_array

static void GLLOADER_APIENTRY self_init_glViewportArrayvNV(GLuint first, GLsizei count, GLfloat const * v)
{
	glloader_init();
	glViewportArrayvNV(first, count, v);
}
static void GLLOADER_APIENTRY self_init_glViewportIndexedfNV(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h)
{
	glloader_init();
	glViewportIndexedfNV(index, x, y, w, h);
}
static void GLLOADER_APIENTRY self_init_glViewportIndexedfvNV(GLuint index, GLfloat const * v)
{
	glloader_init();
	glViewportIndexedfvNV(index, v);
}
static void GLLOADER_APIENTRY self_init_glScissorArrayvNV(GLuint first, GLsizei count, GLint const * v)
{
	glloader_init();
	glScissorArrayvNV(first, count, v);
}
static void GLLOADER_APIENTRY self_init_glScissorIndexedNV(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height)
{
	glloader_init();
	glScissorIndexedNV(index, left, bottom, width, height);
}
static void GLLOADER_APIENTRY self_init_glScissorIndexedvNV(GLuint index, GLint const * v)
{
	glloader_init();
	glScissorIndexedvNV(index, v);
}
static void GLLOADER_APIENTRY self_init_glDepthRangeArrayfvNV(GLuint first, GLsizei count, GLfloat const * v)
{
	glloader_init();
	glDepthRangeArrayfvNV(first, count, v);
}
static void GLLOADER_APIENTRY self_init_glDepthRangeIndexedfNV(GLuint index, GLfloat n, GLfloat f)
{
	glloader_init();
	glDepthRangeIndexedfNV(index, n, f);
}
static void GLLOADER_APIENTRY self_init_glGetFloati_vNV(GLenum target, GLuint index, GLfloat* data)
{
	glloader_init();
	glGetFloati_vNV(target, index, data);
}
static void GLLOADER_APIENTRY self_init_glEnableiNV(GLenum target, GLuint index)
{
	glloader_init();
	glEnableiNV(target, index);
}
static void GLLOADER_APIENTRY self_init_glDisableiNV(GLenum target, GLuint index)
{
	glloader_init();
	glDisableiNV(target, index);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsEnablediNV(GLenum target, GLuint index)
{
	glloader_init();
	return glIsEnablediNV(target, index);
}

glViewportArrayvNVFUNC glViewportArrayvNV = self_init_glViewportArrayvNV;
glViewportIndexedfNVFUNC glViewportIndexedfNV = self_init_glViewportIndexedfNV;
glViewportIndexedfvNVFUNC glViewportIndexedfvNV = self_init_glViewportIndexedfvNV;
glScissorArrayvNVFUNC glScissorArrayvNV = self_init_glScissorArrayvNV;
glScissorIndexedNVFUNC glScissorIndexedNV = self_init_glScissorIndexedNV;
glScissorIndexedvNVFUNC glScissorIndexedvNV = self_init_glScissorIndexedvNV;
glDepthRangeArrayfvNVFUNC glDepthRangeArrayfvNV = self_init_glDepthRangeArrayfvNV;
glDepthRangeIndexedfNVFUNC glDepthRangeIndexedfNV = self_init_glDepthRangeIndexedfNV;
glGetFloati_vNVFUNC glGetFloati_vNV = self_init_glGetFloati_vNV;
glEnableiNVFUNC glEnableiNV = self_init_glEnableiNV;
glDisableiNVFUNC glDisableiNV = self_init_glDisableiNV;
glIsEnablediNVFUNC glIsEnablediNV = self_init_glIsEnablediNV;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_NV_viewport_array2()
{
	return _GLES_NV_viewport_array2;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_NV_viewport_array2()
{
	glloader_init();
	return glloader_GLES_NV_viewport_array2();
}
glloader_GLES_NV_viewport_array2FUNC glloader_GLES_NV_viewport_array2 = self_init_glloader_GLES_NV_viewport_array2;

static char GLLOADER_APIENTRY _glloader_GLES_OES_blend_equation_separate()
{
	return _GLES_OES_blend_equation_separate;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_blend_equation_separate()
{
	glloader_init();
	return glloader_GLES_OES_blend_equation_separate();
}
glloader_GLES_OES_blend_equation_separateFUNC glloader_GLES_OES_blend_equation_separate = self_init_glloader_GLES_OES_blend_equation_separate;

#ifdef GLES_OES_blend_equation_separate

static void GLLOADER_APIENTRY self_init_glBlendEquationSeparateOES(GLenum modeRGB, GLenum modeAlpha)
{
	glloader_init();
	glBlendEquationSeparateOES(modeRGB, modeAlpha);
}

glBlendEquationSeparateOESFUNC glBlendEquationSeparateOES = self_init_glBlendEquationSeparateOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_blend_func_separate()
{
	return _GLES_OES_blend_func_separate;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_blend_func_separate()
{
	glloader_init();
	return glloader_GLES_OES_blend_func_separate();
}
glloader_GLES_OES_blend_func_separateFUNC glloader_GLES_OES_blend_func_separate = self_init_glloader_GLES_OES_blend_func_separate;

#ifdef GLES_OES_blend_func_separate

static void GLLOADER_APIENTRY self_init_glBlendFuncSeparateOES(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	glloader_init();
	glBlendFuncSeparateOES(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}

glBlendFuncSeparateOESFUNC glBlendFuncSeparateOES = self_init_glBlendFuncSeparateOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_blend_subtract()
{
	return _GLES_OES_blend_subtract;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_blend_subtract()
{
	glloader_init();
	return glloader_GLES_OES_blend_subtract();
}
glloader_GLES_OES_blend_subtractFUNC glloader_GLES_OES_blend_subtract = self_init_glloader_GLES_OES_blend_subtract;

#ifdef GLES_OES_blend_subtract

static void GLLOADER_APIENTRY self_init_glBlendEquationOES(GLenum mode)
{
	glloader_init();
	glBlendEquationOES(mode);
}

glBlendEquationOESFUNC glBlendEquationOES = self_init_glBlendEquationOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_byte_coordinates()
{
	return _GLES_OES_byte_coordinates;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_byte_coordinates()
{
	glloader_init();
	return glloader_GLES_OES_byte_coordinates();
}
glloader_GLES_OES_byte_coordinatesFUNC glloader_GLES_OES_byte_coordinates = self_init_glloader_GLES_OES_byte_coordinates;

#ifdef GLES_OES_byte_coordinates

static void GLLOADER_APIENTRY self_init_glVertex2bOES(GLbyte x, GLbyte y)
{
	glloader_init();
	glVertex2bOES(x, y);
}
static void GLLOADER_APIENTRY self_init_glVertex3bOES(GLbyte x, GLbyte y, GLbyte z)
{
	glloader_init();
	glVertex3bOES(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glVertex4bOES(GLbyte x, GLbyte y, GLbyte z, GLbyte w)
{
	glloader_init();
	glVertex4bOES(x, y, z, w);
}
static void GLLOADER_APIENTRY self_init_glVertex2bvOES(GLbyte* v)
{
	glloader_init();
	glVertex2bvOES(v);
}
static void GLLOADER_APIENTRY self_init_glVertex3bvOES(GLbyte* v)
{
	glloader_init();
	glVertex3bvOES(v);
}
static void GLLOADER_APIENTRY self_init_glVertex4bvOES(GLbyte* v)
{
	glloader_init();
	glVertex4bvOES(v);
}
static void GLLOADER_APIENTRY self_init_glTexCoord1bOES(GLbyte s)
{
	glloader_init();
	glTexCoord1bOES(s);
}
static void GLLOADER_APIENTRY self_init_glTexCoord2bOES(GLbyte s, GLbyte t)
{
	glloader_init();
	glTexCoord2bOES(s, t);
}
static void GLLOADER_APIENTRY self_init_glTexCoord3bOES(GLbyte s, GLbyte t, GLbyte r)
{
	glloader_init();
	glTexCoord3bOES(s, t, r);
}
static void GLLOADER_APIENTRY self_init_glTexCoord4bOES(GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
	glloader_init();
	glTexCoord4bOES(s, t, r, q);
}
static void GLLOADER_APIENTRY self_init_glTexCoord1bvOES(GLbyte* v)
{
	glloader_init();
	glTexCoord1bvOES(v);
}
static void GLLOADER_APIENTRY self_init_glTexCoord2bvOES(GLbyte* v)
{
	glloader_init();
	glTexCoord2bvOES(v);
}
static void GLLOADER_APIENTRY self_init_glTexCoord3bvOES(GLbyte* v)
{
	glloader_init();
	glTexCoord3bvOES(v);
}
static void GLLOADER_APIENTRY self_init_glTexCoord4bvOES(GLbyte* v)
{
	glloader_init();
	glTexCoord4bvOES(v);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord1bOES(GLenum target, GLbyte s)
{
	glloader_init();
	glMultiTexCoord1bOES(target, s);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord2bOES(GLenum target, GLbyte s, GLbyte t)
{
	glloader_init();
	glMultiTexCoord2bOES(target, s, t);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord3bOES(GLenum target, GLbyte s, GLbyte t, GLbyte r)
{
	glloader_init();
	glMultiTexCoord3bOES(target, s, t, r);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord4bOES(GLenum target, GLbyte s, GLbyte t, GLbyte r, GLbyte q)
{
	glloader_init();
	glMultiTexCoord4bOES(target, s, t, r, q);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord1bvOES(GLenum target, GLbyte* v)
{
	glloader_init();
	glMultiTexCoord1bvOES(target, v);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord2bvOES(GLenum target, GLbyte* v)
{
	glloader_init();
	glMultiTexCoord2bvOES(target, v);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord3bvOES(GLenum target, GLbyte* v)
{
	glloader_init();
	glMultiTexCoord3bvOES(target, v);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord4bvOES(GLenum target, GLbyte* v)
{
	glloader_init();
	glMultiTexCoord4bvOES(target, v);
}

glVertex2bOESFUNC glVertex2bOES = self_init_glVertex2bOES;
glVertex3bOESFUNC glVertex3bOES = self_init_glVertex3bOES;
glVertex4bOESFUNC glVertex4bOES = self_init_glVertex4bOES;
glVertex2bvOESFUNC glVertex2bvOES = self_init_glVertex2bvOES;
glVertex3bvOESFUNC glVertex3bvOES = self_init_glVertex3bvOES;
glVertex4bvOESFUNC glVertex4bvOES = self_init_glVertex4bvOES;
glTexCoord1bOESFUNC glTexCoord1bOES = self_init_glTexCoord1bOES;
glTexCoord2bOESFUNC glTexCoord2bOES = self_init_glTexCoord2bOES;
glTexCoord3bOESFUNC glTexCoord3bOES = self_init_glTexCoord3bOES;
glTexCoord4bOESFUNC glTexCoord4bOES = self_init_glTexCoord4bOES;
glTexCoord1bvOESFUNC glTexCoord1bvOES = self_init_glTexCoord1bvOES;
glTexCoord2bvOESFUNC glTexCoord2bvOES = self_init_glTexCoord2bvOES;
glTexCoord3bvOESFUNC glTexCoord3bvOES = self_init_glTexCoord3bvOES;
glTexCoord4bvOESFUNC glTexCoord4bvOES = self_init_glTexCoord4bvOES;
glMultiTexCoord1bOESFUNC glMultiTexCoord1bOES = self_init_glMultiTexCoord1bOES;
glMultiTexCoord2bOESFUNC glMultiTexCoord2bOES = self_init_glMultiTexCoord2bOES;
glMultiTexCoord3bOESFUNC glMultiTexCoord3bOES = self_init_glMultiTexCoord3bOES;
glMultiTexCoord4bOESFUNC glMultiTexCoord4bOES = self_init_glMultiTexCoord4bOES;
glMultiTexCoord1bvOESFUNC glMultiTexCoord1bvOES = self_init_glMultiTexCoord1bvOES;
glMultiTexCoord2bvOESFUNC glMultiTexCoord2bvOES = self_init_glMultiTexCoord2bvOES;
glMultiTexCoord3bvOESFUNC glMultiTexCoord3bvOES = self_init_glMultiTexCoord3bvOES;
glMultiTexCoord4bvOESFUNC glMultiTexCoord4bvOES = self_init_glMultiTexCoord4bvOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_compressed_ETC1_RGB8_texture()
{
	return _GLES_OES_compressed_ETC1_RGB8_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_compressed_ETC1_RGB8_texture()
{
	glloader_init();
	return glloader_GLES_OES_compressed_ETC1_RGB8_texture();
}
glloader_GLES_OES_compressed_ETC1_RGB8_textureFUNC glloader_GLES_OES_compressed_ETC1_RGB8_texture = self_init_glloader_GLES_OES_compressed_ETC1_RGB8_texture;

static char GLLOADER_APIENTRY _glloader_GLES_OES_compressed_paletted_texture()
{
	return _GLES_OES_compressed_paletted_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_compressed_paletted_texture()
{
	glloader_init();
	return glloader_GLES_OES_compressed_paletted_texture();
}
glloader_GLES_OES_compressed_paletted_textureFUNC glloader_GLES_OES_compressed_paletted_texture = self_init_glloader_GLES_OES_compressed_paletted_texture;

static char GLLOADER_APIENTRY _glloader_GLES_OES_copy_image()
{
	return _GLES_OES_copy_image;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_copy_image()
{
	glloader_init();
	return glloader_GLES_OES_copy_image();
}
glloader_GLES_OES_copy_imageFUNC glloader_GLES_OES_copy_image = self_init_glloader_GLES_OES_copy_image;

#ifdef GLES_OES_copy_image

static void GLLOADER_APIENTRY self_init_glCopyImageSubDataOES(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth)
{
	glloader_init();
	glCopyImageSubDataOES(srcName, srcTarget, srcLevel, srcX, srcY, srcZ, dstName, dstTarget, dstLevel, dstX, dstY, dstZ, srcWidth, srcHeight, srcDepth);
}

glCopyImageSubDataOESFUNC glCopyImageSubDataOES = self_init_glCopyImageSubDataOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_depth24()
{
	return _GLES_OES_depth24;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_depth24()
{
	glloader_init();
	return glloader_GLES_OES_depth24();
}
glloader_GLES_OES_depth24FUNC glloader_GLES_OES_depth24 = self_init_glloader_GLES_OES_depth24;

static char GLLOADER_APIENTRY _glloader_GLES_OES_depth32()
{
	return _GLES_OES_depth32;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_depth32()
{
	glloader_init();
	return glloader_GLES_OES_depth32();
}
glloader_GLES_OES_depth32FUNC glloader_GLES_OES_depth32 = self_init_glloader_GLES_OES_depth32;

static char GLLOADER_APIENTRY _glloader_GLES_OES_depth_texture()
{
	return _GLES_OES_depth_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_depth_texture()
{
	glloader_init();
	return glloader_GLES_OES_depth_texture();
}
glloader_GLES_OES_depth_textureFUNC glloader_GLES_OES_depth_texture = self_init_glloader_GLES_OES_depth_texture;

static char GLLOADER_APIENTRY _glloader_GLES_OES_depth_texture_cube_map()
{
	return _GLES_OES_depth_texture_cube_map;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_depth_texture_cube_map()
{
	glloader_init();
	return glloader_GLES_OES_depth_texture_cube_map();
}
glloader_GLES_OES_depth_texture_cube_mapFUNC glloader_GLES_OES_depth_texture_cube_map = self_init_glloader_GLES_OES_depth_texture_cube_map;

static char GLLOADER_APIENTRY _glloader_GLES_OES_draw_buffers_indexed()
{
	return _GLES_OES_draw_buffers_indexed;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_draw_buffers_indexed()
{
	glloader_init();
	return glloader_GLES_OES_draw_buffers_indexed();
}
glloader_GLES_OES_draw_buffers_indexedFUNC glloader_GLES_OES_draw_buffers_indexed = self_init_glloader_GLES_OES_draw_buffers_indexed;

#ifdef GLES_OES_draw_buffers_indexed

static void GLLOADER_APIENTRY self_init_glEnableiOES(GLenum target, GLuint index)
{
	glloader_init();
	glEnableiOES(target, index);
}
static void GLLOADER_APIENTRY self_init_glDisableiOES(GLenum target, GLuint index)
{
	glloader_init();
	glDisableiOES(target, index);
}
static void GLLOADER_APIENTRY self_init_glBlendEquationiOES(GLuint buf, GLenum mode)
{
	glloader_init();
	glBlendEquationiOES(buf, mode);
}
static void GLLOADER_APIENTRY self_init_glBlendEquationSeparateiOES(GLuint buf, GLenum modeRGB, GLenum modeAlpha)
{
	glloader_init();
	glBlendEquationSeparateiOES(buf, modeRGB, modeAlpha);
}
static void GLLOADER_APIENTRY self_init_glBlendFunciOES(GLuint buf, GLenum src, GLenum dst)
{
	glloader_init();
	glBlendFunciOES(buf, src, dst);
}
static void GLLOADER_APIENTRY self_init_glBlendFuncSeparateiOES(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha)
{
	glloader_init();
	glBlendFuncSeparateiOES(buf, srcRGB, dstRGB, srcAlpha, dstAlpha);
}
static void GLLOADER_APIENTRY self_init_glColorMaskiOES(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a)
{
	glloader_init();
	glColorMaskiOES(index, r, g, b, a);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsEnablediOES(GLenum target, GLuint index)
{
	glloader_init();
	return glIsEnablediOES(target, index);
}

glEnableiOESFUNC glEnableiOES = self_init_glEnableiOES;
glDisableiOESFUNC glDisableiOES = self_init_glDisableiOES;
glBlendEquationiOESFUNC glBlendEquationiOES = self_init_glBlendEquationiOES;
glBlendEquationSeparateiOESFUNC glBlendEquationSeparateiOES = self_init_glBlendEquationSeparateiOES;
glBlendFunciOESFUNC glBlendFunciOES = self_init_glBlendFunciOES;
glBlendFuncSeparateiOESFUNC glBlendFuncSeparateiOES = self_init_glBlendFuncSeparateiOES;
glColorMaskiOESFUNC glColorMaskiOES = self_init_glColorMaskiOES;
glIsEnablediOESFUNC glIsEnablediOES = self_init_glIsEnablediOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_draw_elements_base_vertex()
{
	return _GLES_OES_draw_elements_base_vertex;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_draw_elements_base_vertex()
{
	glloader_init();
	return glloader_GLES_OES_draw_elements_base_vertex();
}
glloader_GLES_OES_draw_elements_base_vertexFUNC glloader_GLES_OES_draw_elements_base_vertex = self_init_glloader_GLES_OES_draw_elements_base_vertex;

#ifdef GLES_OES_draw_elements_base_vertex

static void GLLOADER_APIENTRY self_init_glDrawElementsBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex)
{
	glloader_init();
	glDrawElementsBaseVertexOES(mode, count, type, indices, basevertex);
}
static void GLLOADER_APIENTRY self_init_glDrawRangeElementsBaseVertexOES(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex)
{
	glloader_init();
	glDrawRangeElementsBaseVertexOES(mode, start, end, count, type, indices, basevertex);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstancedBaseVertexOES(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex)
{
	glloader_init();
	glDrawElementsInstancedBaseVertexOES(mode, count, type, indices, instancecount, basevertex);
}
static void GLLOADER_APIENTRY self_init_glMultiDrawElementsBaseVertexOES(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei drawcount, const GLint* basevertex)
{
	glloader_init();
	glMultiDrawElementsBaseVertexOES(mode, count, type, indices, drawcount, basevertex);
}

glDrawElementsBaseVertexOESFUNC glDrawElementsBaseVertexOES = self_init_glDrawElementsBaseVertexOES;
glDrawRangeElementsBaseVertexOESFUNC glDrawRangeElementsBaseVertexOES = self_init_glDrawRangeElementsBaseVertexOES;
glDrawElementsInstancedBaseVertexOESFUNC glDrawElementsInstancedBaseVertexOES = self_init_glDrawElementsInstancedBaseVertexOES;
glMultiDrawElementsBaseVertexOESFUNC glMultiDrawElementsBaseVertexOES = self_init_glMultiDrawElementsBaseVertexOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_draw_texture()
{
	return _GLES_OES_draw_texture;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_draw_texture()
{
	glloader_init();
	return glloader_GLES_OES_draw_texture();
}
glloader_GLES_OES_draw_textureFUNC glloader_GLES_OES_draw_texture = self_init_glloader_GLES_OES_draw_texture;

#ifdef GLES_OES_draw_texture

static void GLLOADER_APIENTRY self_init_glDrawTexsOES(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height)
{
	glloader_init();
	glDrawTexsOES(x, y, z, width, height);
}
static void GLLOADER_APIENTRY self_init_glDrawTexiOES(GLint x, GLint y, GLint z, GLint width, GLint height)
{
	glloader_init();
	glDrawTexiOES(x, y, z, width, height);
}
static void GLLOADER_APIENTRY self_init_glDrawTexxOES(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height)
{
	glloader_init();
	glDrawTexxOES(x, y, z, width, height);
}
static void GLLOADER_APIENTRY self_init_glDrawTexsvOES(const GLshort* coords)
{
	glloader_init();
	glDrawTexsvOES(coords);
}
static void GLLOADER_APIENTRY self_init_glDrawTexivOES(const GLint* coords)
{
	glloader_init();
	glDrawTexivOES(coords);
}
static void GLLOADER_APIENTRY self_init_glDrawTexxvOES(const GLfixed* coords)
{
	glloader_init();
	glDrawTexxvOES(coords);
}
static void GLLOADER_APIENTRY self_init_glDrawTexfOES(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height)
{
	glloader_init();
	glDrawTexfOES(x, y, z, width, height);
}
static void GLLOADER_APIENTRY self_init_glDrawTexfvOES(const GLfloat* coords)
{
	glloader_init();
	glDrawTexfvOES(coords);
}

glDrawTexsOESFUNC glDrawTexsOES = self_init_glDrawTexsOES;
glDrawTexiOESFUNC glDrawTexiOES = self_init_glDrawTexiOES;
glDrawTexxOESFUNC glDrawTexxOES = self_init_glDrawTexxOES;
glDrawTexsvOESFUNC glDrawTexsvOES = self_init_glDrawTexsvOES;
glDrawTexivOESFUNC glDrawTexivOES = self_init_glDrawTexivOES;
glDrawTexxvOESFUNC glDrawTexxvOES = self_init_glDrawTexxvOES;
glDrawTexfOESFUNC glDrawTexfOES = self_init_glDrawTexfOES;
glDrawTexfvOESFUNC glDrawTexfvOES = self_init_glDrawTexfvOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_EGL_image()
{
	return _GLES_OES_EGL_image;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_EGL_image()
{
	glloader_init();
	return glloader_GLES_OES_EGL_image();
}
glloader_GLES_OES_EGL_imageFUNC glloader_GLES_OES_EGL_image = self_init_glloader_GLES_OES_EGL_image;

#ifdef GLES_OES_EGL_image

static void GLLOADER_APIENTRY self_init_EGLImageTargetTexture2DOES(GLenum target, GLeglImageOES image)
{
	glloader_init();
	EGLImageTargetTexture2DOES(target, image);
}
static void GLLOADER_APIENTRY self_init_EGLImageTargetRenderbufferStorageOES(GLenum target, GLeglImageOES image)
{
	glloader_init();
	EGLImageTargetRenderbufferStorageOES(target, image);
}

EGLImageTargetTexture2DOESFUNC EGLImageTargetTexture2DOES = self_init_EGLImageTargetTexture2DOES;
EGLImageTargetRenderbufferStorageOESFUNC EGLImageTargetRenderbufferStorageOES = self_init_EGLImageTargetRenderbufferStorageOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_EGL_image_external()
{
	return _GLES_OES_EGL_image_external;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_EGL_image_external()
{
	glloader_init();
	return glloader_GLES_OES_EGL_image_external();
}
glloader_GLES_OES_EGL_image_externalFUNC glloader_GLES_OES_EGL_image_external = self_init_glloader_GLES_OES_EGL_image_external;

static char GLLOADER_APIENTRY _glloader_GLES_OES_EGL_image_external_essl3()
{
	return _GLES_OES_EGL_image_external_essl3;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_EGL_image_external_essl3()
{
	glloader_init();
	return glloader_GLES_OES_EGL_image_external_essl3();
}
glloader_GLES_OES_EGL_image_external_essl3FUNC glloader_GLES_OES_EGL_image_external_essl3 = self_init_glloader_GLES_OES_EGL_image_external_essl3;

static char GLLOADER_APIENTRY _glloader_GLES_OES_element_index_uint()
{
	return _GLES_OES_element_index_uint;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_element_index_uint()
{
	glloader_init();
	return glloader_GLES_OES_element_index_uint();
}
glloader_GLES_OES_element_index_uintFUNC glloader_GLES_OES_element_index_uint = self_init_glloader_GLES_OES_element_index_uint;

static char GLLOADER_APIENTRY _glloader_GLES_OES_extended_matrix_palette()
{
	return _GLES_OES_extended_matrix_palette;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_extended_matrix_palette()
{
	glloader_init();
	return glloader_GLES_OES_extended_matrix_palette();
}
glloader_GLES_OES_extended_matrix_paletteFUNC glloader_GLES_OES_extended_matrix_palette = self_init_glloader_GLES_OES_extended_matrix_palette;

static char GLLOADER_APIENTRY _glloader_GLES_OES_fbo_render_mipmap()
{
	return _GLES_OES_fbo_render_mipmap;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_fbo_render_mipmap()
{
	glloader_init();
	return glloader_GLES_OES_fbo_render_mipmap();
}
glloader_GLES_OES_fbo_render_mipmapFUNC glloader_GLES_OES_fbo_render_mipmap = self_init_glloader_GLES_OES_fbo_render_mipmap;

static char GLLOADER_APIENTRY _glloader_GLES_OES_fixed_point()
{
	return _GLES_OES_fixed_point;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_fixed_point()
{
	glloader_init();
	return glloader_GLES_OES_fixed_point();
}
glloader_GLES_OES_fixed_pointFUNC glloader_GLES_OES_fixed_point = self_init_glloader_GLES_OES_fixed_point;

#ifdef GLES_OES_fixed_point

static void GLLOADER_APIENTRY self_init_glVertex2xOES(GLfixed x, GLfixed y)
{
	glloader_init();
	glVertex2xOES(x, y);
}
static void GLLOADER_APIENTRY self_init_glVertex3xOES(GLfixed x, GLfixed y, GLfixed z)
{
	glloader_init();
	glVertex3xOES(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glVertex4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
	glloader_init();
	glVertex4xOES(x, y, z, w);
}
static void GLLOADER_APIENTRY self_init_glVertex2xvOES(const GLfixed* v)
{
	glloader_init();
	glVertex2xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glVertex3xvOES(const GLfixed* v)
{
	glloader_init();
	glVertex3xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glVertex4xvOES(const GLfixed* v)
{
	glloader_init();
	glVertex4xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glNormal3xOES(GLfixed nx, GLfixed ny, GLfixed nz)
{
	glloader_init();
	glNormal3xOES(nx, ny, nz);
}
static void GLLOADER_APIENTRY self_init_glNormal3xvOES(const GLfixed* v)
{
	glloader_init();
	glNormal3xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glTexCoord1xOES(GLfixed x)
{
	glloader_init();
	glTexCoord1xOES(x);
}
static void GLLOADER_APIENTRY self_init_glTexCoord2xOES(GLfixed x, GLfixed y)
{
	glloader_init();
	glTexCoord2xOES(x, y);
}
static void GLLOADER_APIENTRY self_init_glTexCoord3xOES(GLfixed x, GLfixed y, GLfixed z)
{
	glloader_init();
	glTexCoord3xOES(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glTexCoord4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
	glloader_init();
	glTexCoord4xOES(x, y, z, w);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord1xOES(GLenum target, GLfixed s)
{
	glloader_init();
	glMultiTexCoord1xOES(target, s);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord2xOES(GLenum target, GLfixed s, GLfixed t)
{
	glloader_init();
	glMultiTexCoord2xOES(target, s, t);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord3xOES(GLenum target, GLfixed s, GLfixed t, GLfixed r)
{
	glloader_init();
	glMultiTexCoord3xOES(target, s, t, r);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord4xOES(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	glloader_init();
	glMultiTexCoord4xOES(target, s, t, r, q);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord1xvOES(GLenum target, const GLfixed* v)
{
	glloader_init();
	glMultiTexCoord1xvOES(target, v);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord2xvOES(GLenum target, const GLfixed* v)
{
	glloader_init();
	glMultiTexCoord2xvOES(target, v);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord3xvOES(GLenum target, const GLfixed* v)
{
	glloader_init();
	glMultiTexCoord3xvOES(target, v);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord4xvOES(GLenum target, const GLfixed* v)
{
	glloader_init();
	glMultiTexCoord4xvOES(target, v);
}
static void GLLOADER_APIENTRY self_init_glColor3xOES(GLfixed red, GLfixed green, GLfixed blue)
{
	glloader_init();
	glColor3xOES(red, green, blue);
}
static void GLLOADER_APIENTRY self_init_glColor4xOES(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	glloader_init();
	glColor4xOES(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glColor3xvOES(const GLfixed* v)
{
	glloader_init();
	glColor3xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glColor4xvOES(const GLfixed* v)
{
	glloader_init();
	glColor4xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glIndexxOES(GLfixed c)
{
	glloader_init();
	glIndexxOES(c);
}
static void GLLOADER_APIENTRY self_init_glIndexxvOES(const GLfixed* c)
{
	glloader_init();
	glIndexxvOES(c);
}
static void GLLOADER_APIENTRY self_init_glRectxOES(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2)
{
	glloader_init();
	glRectxOES(x1, y1, x2, y2);
}
static void GLLOADER_APIENTRY self_init_glRectxvOES(const GLfixed* v1, const GLfixed* v2)
{
	glloader_init();
	glRectxvOES(v1, v2);
}
static void GLLOADER_APIENTRY self_init_glDepthRangexOES(GLclampx zNear, GLclampx zFar)
{
	glloader_init();
	glDepthRangexOES(zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glLoadMatrixxOES(const GLfixed* m)
{
	glloader_init();
	glLoadMatrixxOES(m);
}
static void GLLOADER_APIENTRY self_init_glMultMatrixxOES(const GLfixed* m)
{
	glloader_init();
	glMultMatrixxOES(m);
}
static void GLLOADER_APIENTRY self_init_glLoadTransposeMatrixxOES(const GLfixed* m)
{
	glloader_init();
	glLoadTransposeMatrixxOES(m);
}
static void GLLOADER_APIENTRY self_init_glMultTransposeMatrixxOES(const GLfixed* m)
{
	glloader_init();
	glMultTransposeMatrixxOES(m);
}
static void GLLOADER_APIENTRY self_init_glRotatexOES(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	glloader_init();
	glRotatexOES(angle, x, y, z);
}
static void GLLOADER_APIENTRY self_init_glScalexOES(GLfixed x, GLfixed y, GLfixed z)
{
	glloader_init();
	glScalexOES(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glTranslatexOES(GLfixed x, GLfixed y, GLfixed z)
{
	glloader_init();
	glTranslatexOES(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glFrustumxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	glloader_init();
	glFrustumxOES(left, right, bottom, top, zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glOrthoxOES(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	glloader_init();
	glOrthoxOES(left, right, bottom, top, zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glTexGenxOES(GLenum coord, GLenum pname, GLfixed param)
{
	glloader_init();
	glTexGenxOES(coord, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexGenxvOES(GLenum coord, GLenum pname, const GLfixed* params)
{
	glloader_init();
	glTexGenxvOES(coord, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexGenxvOES(GLenum coord, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetTexGenxvOES(coord, pname, params);
}
static void GLLOADER_APIENTRY self_init_glClipPlanexOES(GLenum plane, const GLfixed* equation)
{
	glloader_init();
	glClipPlanexOES(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glGetClipPlanexOES(GLenum plane, GLfixed* equation)
{
	glloader_init();
	glGetClipPlanexOES(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glRasterPos2xOES(GLfixed x, GLfixed y)
{
	glloader_init();
	glRasterPos2xOES(x, y);
}
static void GLLOADER_APIENTRY self_init_glRasterPos3xOES(GLfixed x, GLfixed y, GLfixed z)
{
	glloader_init();
	glRasterPos3xOES(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glRasterPos4xOES(GLfixed x, GLfixed y, GLfixed z, GLfixed w)
{
	glloader_init();
	glRasterPos4xOES(x, y, z, w);
}
static void GLLOADER_APIENTRY self_init_glRasterPos2xvOES(const GLfixed* v)
{
	glloader_init();
	glRasterPos2xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glRasterPos3xvOES(const GLfixed* v)
{
	glloader_init();
	glRasterPos3xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glRasterPos4xvOES(const GLfixed* v)
{
	glloader_init();
	glRasterPos4xvOES(v);
}
static void GLLOADER_APIENTRY self_init_glMaterialxOES(GLenum face, GLenum pname, GLfixed param)
{
	glloader_init();
	glMaterialxOES(face, pname, param);
}
static void GLLOADER_APIENTRY self_init_glMaterialxvOES(GLenum face, GLenum pname, const GLfixed* params)
{
	glloader_init();
	glMaterialxvOES(face, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetMaterialxOES(GLenum face, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetMaterialxOES(face, pname, params);
}
static void GLLOADER_APIENTRY self_init_glLightxOES(GLenum light, GLenum pname, GLfixed param)
{
	glloader_init();
	glLightxOES(light, pname, param);
}
static void GLLOADER_APIENTRY self_init_glLightxvOES(GLenum light, GLenum pname, const GLfixed* params)
{
	glloader_init();
	glLightxvOES(light, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetLightxvOES(GLenum light, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetLightxvOES(light, pname, params);
}
static void GLLOADER_APIENTRY self_init_glLightModelxOES(GLenum pname, GLfixed param)
{
	glloader_init();
	glLightModelxOES(pname, param);
}
static void GLLOADER_APIENTRY self_init_glLightModelxvOES(GLenum pname, const GLfixed* params)
{
	glloader_init();
	glLightModelxvOES(pname, params);
}
static void GLLOADER_APIENTRY self_init_glPointSizexOES(GLfixed size)
{
	glloader_init();
	glPointSizexOES(size);
}
static void GLLOADER_APIENTRY self_init_glPointParameterxvOES(GLenum pname, GLfixed* params)
{
	glloader_init();
	glPointParameterxvOES(pname, params);
}
static void GLLOADER_APIENTRY self_init_glLineWidthxOES(GLfixed width)
{
	glloader_init();
	glLineWidthxOES(width);
}
static void GLLOADER_APIENTRY self_init_glPolygonOffsetxOES(GLfixed factor, GLfixed units)
{
	glloader_init();
	glPolygonOffsetxOES(factor, units);
}
static void GLLOADER_APIENTRY self_init_glPixelStorexOES(GLenum pname, GLfixed param)
{
	glloader_init();
	glPixelStorexOES(pname, param);
}
static void GLLOADER_APIENTRY self_init_glPixelTransferxOES(GLenum pname, GLfixed param)
{
	glloader_init();
	glPixelTransferxOES(pname, param);
}
static void GLLOADER_APIENTRY self_init_glPixelMapxOES(GLenum map, GLsizei mapsize, const GLfixed* values)
{
	glloader_init();
	glPixelMapxOES(map, mapsize, values);
}
static void GLLOADER_APIENTRY self_init_glGetPixelMapxvOES(GLenum map, GLfixed* values)
{
	glloader_init();
	glGetPixelMapxvOES(map, values);
}
static void GLLOADER_APIENTRY self_init_glConvolutionParameterxOES(GLenum target, GLenum pname, GLfixed params)
{
	glloader_init();
	glConvolutionParameterxOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glConvolutionParameterxvOES(GLenum target, GLenum pname, const GLfixed* params)
{
	glloader_init();
	glConvolutionParameterxvOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetConvolutionParameterxvOES(GLenum target, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetConvolutionParameterxvOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetHistogramParameterxvOES(GLenum target, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetHistogramParameterxvOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glPixelZoomxOES(GLfixed xfactor, GLfixed yfactor)
{
	glloader_init();
	glPixelZoomxOES(xfactor, yfactor);
}
static void GLLOADER_APIENTRY self_init_glBitmapxOES(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte* bitmap)
{
	glloader_init();
	glBitmapxOES(width, height, xorig, yorig, xmove, ymove, bitmap);
}
static void GLLOADER_APIENTRY self_init_glTexParameterxOES(GLenum target, GLenum pname, GLfixed param)
{
	glloader_init();
	glTexParameterxOES(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameterxvOES(GLenum target, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetTexParameterxvOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexLevelParameterxvOES(GLenum target, GLint level, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetTexLevelParameterxvOES(target, level, pname, params);
}
static void GLLOADER_APIENTRY self_init_glPrioritizeTexturesxOES(GLsizei n, const GLuint* textures, const GLclampx* priorities)
{
	glloader_init();
	glPrioritizeTexturesxOES(n, textures, priorities);
}
static void GLLOADER_APIENTRY self_init_glTexEnvxOES(GLenum target, GLenum pname, GLfixed param)
{
	glloader_init();
	glTexEnvxOES(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glGetTexEnvxvOES(GLenum target, GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetTexEnvxvOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glFogxOES(GLenum pname, GLfixed param)
{
	glloader_init();
	glFogxOES(pname, param);
}
static void GLLOADER_APIENTRY self_init_glFogxvOES(GLenum pname, const GLfixed* params)
{
	glloader_init();
	glFogxvOES(pname, params);
}
static void GLLOADER_APIENTRY self_init_glSampleCoveragexOES(GLclampx value, GLboolean invert)
{
	glloader_init();
	glSampleCoveragexOES(value, invert);
}
static void GLLOADER_APIENTRY self_init_glAlphaFuncxOES(GLenum func, GLclampx ref)
{
	glloader_init();
	glAlphaFuncxOES(func, ref);
}
static void GLLOADER_APIENTRY self_init_glBlendColorxOES(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{
	glloader_init();
	glBlendColorxOES(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glClearColorxOES(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{
	glloader_init();
	glClearColorxOES(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glClearDepthxOES(GLclampx depth)
{
	glloader_init();
	glClearDepthxOES(depth);
}
static void GLLOADER_APIENTRY self_init_glClearAccumxOES(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{
	glloader_init();
	glClearAccumxOES(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glAccumxOES(GLenum op, GLfixed value)
{
	glloader_init();
	glAccumxOES(op, value);
}
static void GLLOADER_APIENTRY self_init_glMap1xOES(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, const GLfixed* points)
{
	glloader_init();
	glMap1xOES(target, u1, u2, stride, order, points);
}
static void GLLOADER_APIENTRY self_init_glMap2xOES(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, const GLfixed* points)
{
	glloader_init();
	glMap2xOES(target, u1, u2, ustride, uorder, v1, v2, vstride, vorder, points);
}
static void GLLOADER_APIENTRY self_init_glMapGrid1xOES(GLint un, GLfixed u1, GLfixed u2)
{
	glloader_init();
	glMapGrid1xOES(un, u1, u2);
}
static void GLLOADER_APIENTRY self_init_glMapGrid2xOES(GLint un, GLfixed u1, GLfixed u2, GLint vn, GLfixed v1, GLfixed v2)
{
	glloader_init();
	glMapGrid2xOES(un, u1, u2, vn, v1, v2);
}
static void GLLOADER_APIENTRY self_init_glGetMapxvOES(GLenum target, GLenum query, GLfixed* v)
{
	glloader_init();
	glGetMapxvOES(target, query, v);
}
static void GLLOADER_APIENTRY self_init_glEvalCoord1xOES(GLfixed u)
{
	glloader_init();
	glEvalCoord1xOES(u);
}
static void GLLOADER_APIENTRY self_init_glEvalCoord1xvOES(const GLfixed* u)
{
	glloader_init();
	glEvalCoord1xvOES(u);
}
static void GLLOADER_APIENTRY self_init_glEvalCoord2xOES(GLfixed u, GLfixed v)
{
	glloader_init();
	glEvalCoord2xOES(u, v);
}
static void GLLOADER_APIENTRY self_init_glEvalCoord2xvOES(const GLfixed* u)
{
	glloader_init();
	glEvalCoord2xvOES(u);
}
static void GLLOADER_APIENTRY self_init_glFeedbackBufferxOES(GLsizei size, GLenum type, GLfixed* buffer)
{
	glloader_init();
	glFeedbackBufferxOES(size, type, buffer);
}
static void GLLOADER_APIENTRY self_init_glPassThroughxOES(GLfixed token)
{
	glloader_init();
	glPassThroughxOES(token);
}
static void GLLOADER_APIENTRY self_init_glGetFixedvOES(GLenum pname, GLfixed* params)
{
	glloader_init();
	glGetFixedvOES(pname, params);
}

glVertex2xOESFUNC glVertex2xOES = self_init_glVertex2xOES;
glVertex3xOESFUNC glVertex3xOES = self_init_glVertex3xOES;
glVertex4xOESFUNC glVertex4xOES = self_init_glVertex4xOES;
glVertex2xvOESFUNC glVertex2xvOES = self_init_glVertex2xvOES;
glVertex3xvOESFUNC glVertex3xvOES = self_init_glVertex3xvOES;
glVertex4xvOESFUNC glVertex4xvOES = self_init_glVertex4xvOES;
glNormal3xOESFUNC glNormal3xOES = self_init_glNormal3xOES;
glNormal3xvOESFUNC glNormal3xvOES = self_init_glNormal3xvOES;
glTexCoord1xOESFUNC glTexCoord1xOES = self_init_glTexCoord1xOES;
glTexCoord2xOESFUNC glTexCoord2xOES = self_init_glTexCoord2xOES;
glTexCoord3xOESFUNC glTexCoord3xOES = self_init_glTexCoord3xOES;
glTexCoord4xOESFUNC glTexCoord4xOES = self_init_glTexCoord4xOES;
glMultiTexCoord1xOESFUNC glMultiTexCoord1xOES = self_init_glMultiTexCoord1xOES;
glMultiTexCoord2xOESFUNC glMultiTexCoord2xOES = self_init_glMultiTexCoord2xOES;
glMultiTexCoord3xOESFUNC glMultiTexCoord3xOES = self_init_glMultiTexCoord3xOES;
glMultiTexCoord4xOESFUNC glMultiTexCoord4xOES = self_init_glMultiTexCoord4xOES;
glMultiTexCoord1xvOESFUNC glMultiTexCoord1xvOES = self_init_glMultiTexCoord1xvOES;
glMultiTexCoord2xvOESFUNC glMultiTexCoord2xvOES = self_init_glMultiTexCoord2xvOES;
glMultiTexCoord3xvOESFUNC glMultiTexCoord3xvOES = self_init_glMultiTexCoord3xvOES;
glMultiTexCoord4xvOESFUNC glMultiTexCoord4xvOES = self_init_glMultiTexCoord4xvOES;
glColor3xOESFUNC glColor3xOES = self_init_glColor3xOES;
glColor4xOESFUNC glColor4xOES = self_init_glColor4xOES;
glColor3xvOESFUNC glColor3xvOES = self_init_glColor3xvOES;
glColor4xvOESFUNC glColor4xvOES = self_init_glColor4xvOES;
glIndexxOESFUNC glIndexxOES = self_init_glIndexxOES;
glIndexxvOESFUNC glIndexxvOES = self_init_glIndexxvOES;
glRectxOESFUNC glRectxOES = self_init_glRectxOES;
glRectxvOESFUNC glRectxvOES = self_init_glRectxvOES;
glDepthRangexOESFUNC glDepthRangexOES = self_init_glDepthRangexOES;
glLoadMatrixxOESFUNC glLoadMatrixxOES = self_init_glLoadMatrixxOES;
glMultMatrixxOESFUNC glMultMatrixxOES = self_init_glMultMatrixxOES;
glLoadTransposeMatrixxOESFUNC glLoadTransposeMatrixxOES = self_init_glLoadTransposeMatrixxOES;
glMultTransposeMatrixxOESFUNC glMultTransposeMatrixxOES = self_init_glMultTransposeMatrixxOES;
glRotatexOESFUNC glRotatexOES = self_init_glRotatexOES;
glScalexOESFUNC glScalexOES = self_init_glScalexOES;
glTranslatexOESFUNC glTranslatexOES = self_init_glTranslatexOES;
glFrustumxOESFUNC glFrustumxOES = self_init_glFrustumxOES;
glOrthoxOESFUNC glOrthoxOES = self_init_glOrthoxOES;
glTexGenxOESFUNC glTexGenxOES = self_init_glTexGenxOES;
glTexGenxvOESFUNC glTexGenxvOES = self_init_glTexGenxvOES;
glGetTexGenxvOESFUNC glGetTexGenxvOES = self_init_glGetTexGenxvOES;
glClipPlanexOESFUNC glClipPlanexOES = self_init_glClipPlanexOES;
glGetClipPlanexOESFUNC glGetClipPlanexOES = self_init_glGetClipPlanexOES;
glRasterPos2xOESFUNC glRasterPos2xOES = self_init_glRasterPos2xOES;
glRasterPos3xOESFUNC glRasterPos3xOES = self_init_glRasterPos3xOES;
glRasterPos4xOESFUNC glRasterPos4xOES = self_init_glRasterPos4xOES;
glRasterPos2xvOESFUNC glRasterPos2xvOES = self_init_glRasterPos2xvOES;
glRasterPos3xvOESFUNC glRasterPos3xvOES = self_init_glRasterPos3xvOES;
glRasterPos4xvOESFUNC glRasterPos4xvOES = self_init_glRasterPos4xvOES;
glMaterialxOESFUNC glMaterialxOES = self_init_glMaterialxOES;
glMaterialxvOESFUNC glMaterialxvOES = self_init_glMaterialxvOES;
glGetMaterialxOESFUNC glGetMaterialxOES = self_init_glGetMaterialxOES;
glLightxOESFUNC glLightxOES = self_init_glLightxOES;
glLightxvOESFUNC glLightxvOES = self_init_glLightxvOES;
glGetLightxvOESFUNC glGetLightxvOES = self_init_glGetLightxvOES;
glLightModelxOESFUNC glLightModelxOES = self_init_glLightModelxOES;
glLightModelxvOESFUNC glLightModelxvOES = self_init_glLightModelxvOES;
glPointSizexOESFUNC glPointSizexOES = self_init_glPointSizexOES;
glPointParameterxvOESFUNC glPointParameterxvOES = self_init_glPointParameterxvOES;
glLineWidthxOESFUNC glLineWidthxOES = self_init_glLineWidthxOES;
glPolygonOffsetxOESFUNC glPolygonOffsetxOES = self_init_glPolygonOffsetxOES;
glPixelStorexOESFUNC glPixelStorexOES = self_init_glPixelStorexOES;
glPixelTransferxOESFUNC glPixelTransferxOES = self_init_glPixelTransferxOES;
glPixelMapxOESFUNC glPixelMapxOES = self_init_glPixelMapxOES;
glGetPixelMapxvOESFUNC glGetPixelMapxvOES = self_init_glGetPixelMapxvOES;
glConvolutionParameterxOESFUNC glConvolutionParameterxOES = self_init_glConvolutionParameterxOES;
glConvolutionParameterxvOESFUNC glConvolutionParameterxvOES = self_init_glConvolutionParameterxvOES;
glGetConvolutionParameterxvOESFUNC glGetConvolutionParameterxvOES = self_init_glGetConvolutionParameterxvOES;
glGetHistogramParameterxvOESFUNC glGetHistogramParameterxvOES = self_init_glGetHistogramParameterxvOES;
glPixelZoomxOESFUNC glPixelZoomxOES = self_init_glPixelZoomxOES;
glBitmapxOESFUNC glBitmapxOES = self_init_glBitmapxOES;
glTexParameterxOESFUNC glTexParameterxOES = self_init_glTexParameterxOES;
glGetTexParameterxvOESFUNC glGetTexParameterxvOES = self_init_glGetTexParameterxvOES;
glGetTexLevelParameterxvOESFUNC glGetTexLevelParameterxvOES = self_init_glGetTexLevelParameterxvOES;
glPrioritizeTexturesxOESFUNC glPrioritizeTexturesxOES = self_init_glPrioritizeTexturesxOES;
glTexEnvxOESFUNC glTexEnvxOES = self_init_glTexEnvxOES;
glGetTexEnvxvOESFUNC glGetTexEnvxvOES = self_init_glGetTexEnvxvOES;
glFogxOESFUNC glFogxOES = self_init_glFogxOES;
glFogxvOESFUNC glFogxvOES = self_init_glFogxvOES;
glSampleCoveragexOESFUNC glSampleCoveragexOES = self_init_glSampleCoveragexOES;
glAlphaFuncxOESFUNC glAlphaFuncxOES = self_init_glAlphaFuncxOES;
glBlendColorxOESFUNC glBlendColorxOES = self_init_glBlendColorxOES;
glClearColorxOESFUNC glClearColorxOES = self_init_glClearColorxOES;
glClearDepthxOESFUNC glClearDepthxOES = self_init_glClearDepthxOES;
glClearAccumxOESFUNC glClearAccumxOES = self_init_glClearAccumxOES;
glAccumxOESFUNC glAccumxOES = self_init_glAccumxOES;
glMap1xOESFUNC glMap1xOES = self_init_glMap1xOES;
glMap2xOESFUNC glMap2xOES = self_init_glMap2xOES;
glMapGrid1xOESFUNC glMapGrid1xOES = self_init_glMapGrid1xOES;
glMapGrid2xOESFUNC glMapGrid2xOES = self_init_glMapGrid2xOES;
glGetMapxvOESFUNC glGetMapxvOES = self_init_glGetMapxvOES;
glEvalCoord1xOESFUNC glEvalCoord1xOES = self_init_glEvalCoord1xOES;
glEvalCoord1xvOESFUNC glEvalCoord1xvOES = self_init_glEvalCoord1xvOES;
glEvalCoord2xOESFUNC glEvalCoord2xOES = self_init_glEvalCoord2xOES;
glEvalCoord2xvOESFUNC glEvalCoord2xvOES = self_init_glEvalCoord2xvOES;
glFeedbackBufferxOESFUNC glFeedbackBufferxOES = self_init_glFeedbackBufferxOES;
glPassThroughxOESFUNC glPassThroughxOES = self_init_glPassThroughxOES;
glGetFixedvOESFUNC glGetFixedvOES = self_init_glGetFixedvOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_fragment_precision_high()
{
	return _GLES_OES_fragment_precision_high;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_fragment_precision_high()
{
	glloader_init();
	return glloader_GLES_OES_fragment_precision_high();
}
glloader_GLES_OES_fragment_precision_highFUNC glloader_GLES_OES_fragment_precision_high = self_init_glloader_GLES_OES_fragment_precision_high;

static char GLLOADER_APIENTRY _glloader_GLES_OES_framebuffer_object()
{
	return _GLES_OES_framebuffer_object;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_framebuffer_object()
{
	glloader_init();
	return glloader_GLES_OES_framebuffer_object();
}
glloader_GLES_OES_framebuffer_objectFUNC glloader_GLES_OES_framebuffer_object = self_init_glloader_GLES_OES_framebuffer_object;

#ifdef GLES_OES_framebuffer_object

static GLboolean GLLOADER_APIENTRY self_init_glIsRenderbufferOES(GLuint renderbuffer)
{
	glloader_init();
	return glIsRenderbufferOES(renderbuffer);
}
static void GLLOADER_APIENTRY self_init_glBindRenderbufferOES(GLenum target, GLuint renderbuffer)
{
	glloader_init();
	glBindRenderbufferOES(target, renderbuffer);
}
static void GLLOADER_APIENTRY self_init_glDeleteRenderbuffersOES(GLsizei n, const GLuint* renderbuffers)
{
	glloader_init();
	glDeleteRenderbuffersOES(n, renderbuffers);
}
static void GLLOADER_APIENTRY self_init_glGenRenderbuffersOES(GLsizei n, GLuint* renderbuffers)
{
	glloader_init();
	glGenRenderbuffersOES(n, renderbuffers);
}
static void GLLOADER_APIENTRY self_init_glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	glloader_init();
	glRenderbufferStorageOES(target, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint* params)
{
	glloader_init();
	glGetRenderbufferParameterivOES(target, pname, params);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsFramebufferOES(GLuint framebuffer)
{
	glloader_init();
	return glIsFramebufferOES(framebuffer);
}
static void GLLOADER_APIENTRY self_init_glBindFramebufferOES(GLenum target, GLuint framebuffer)
{
	glloader_init();
	glBindFramebufferOES(target, framebuffer);
}
static void GLLOADER_APIENTRY self_init_glDeleteFramebuffersOES(GLsizei n, const GLuint* framebuffers)
{
	glloader_init();
	glDeleteFramebuffersOES(n, framebuffers);
}
static void GLLOADER_APIENTRY self_init_glGenFramebuffersOES(GLsizei n, GLuint* framebuffers)
{
	glloader_init();
	glGenFramebuffersOES(n, framebuffers);
}
static GLenum GLLOADER_APIENTRY self_init_glCheckFramebufferStatusOES(GLenum target)
{
	glloader_init();
	return glCheckFramebufferStatusOES(target);
}
static void GLLOADER_APIENTRY self_init_glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	glloader_init();
	glFramebufferTexture2DOES(target, attachment, textarget, texture, level);
}
static void GLLOADER_APIENTRY self_init_glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	glloader_init();
	glFramebufferRenderbufferOES(target, attachment, renderbuffertarget, renderbuffer);
}
static void GLLOADER_APIENTRY self_init_glGetFramebufferAttachmentParameterivOES(GLenum target, GLenum attachment, GLenum pname, GLint* params)
{
	glloader_init();
	glGetFramebufferAttachmentParameterivOES(target, attachment, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGenerateMipmapOES(GLenum target)
{
	glloader_init();
	glGenerateMipmapOES(target);
}

glIsRenderbufferOESFUNC glIsRenderbufferOES = self_init_glIsRenderbufferOES;
glBindRenderbufferOESFUNC glBindRenderbufferOES = self_init_glBindRenderbufferOES;
glDeleteRenderbuffersOESFUNC glDeleteRenderbuffersOES = self_init_glDeleteRenderbuffersOES;
glGenRenderbuffersOESFUNC glGenRenderbuffersOES = self_init_glGenRenderbuffersOES;
glRenderbufferStorageOESFUNC glRenderbufferStorageOES = self_init_glRenderbufferStorageOES;
glGetRenderbufferParameterivOESFUNC glGetRenderbufferParameterivOES = self_init_glGetRenderbufferParameterivOES;
glIsFramebufferOESFUNC glIsFramebufferOES = self_init_glIsFramebufferOES;
glBindFramebufferOESFUNC glBindFramebufferOES = self_init_glBindFramebufferOES;
glDeleteFramebuffersOESFUNC glDeleteFramebuffersOES = self_init_glDeleteFramebuffersOES;
glGenFramebuffersOESFUNC glGenFramebuffersOES = self_init_glGenFramebuffersOES;
glCheckFramebufferStatusOESFUNC glCheckFramebufferStatusOES = self_init_glCheckFramebufferStatusOES;
glFramebufferTexture2DOESFUNC glFramebufferTexture2DOES = self_init_glFramebufferTexture2DOES;
glFramebufferRenderbufferOESFUNC glFramebufferRenderbufferOES = self_init_glFramebufferRenderbufferOES;
glGetFramebufferAttachmentParameterivOESFUNC glGetFramebufferAttachmentParameterivOES = self_init_glGetFramebufferAttachmentParameterivOES;
glGenerateMipmapOESFUNC glGenerateMipmapOES = self_init_glGenerateMipmapOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_geometry_shader()
{
	return _GLES_OES_geometry_shader;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_geometry_shader()
{
	glloader_init();
	return glloader_GLES_OES_geometry_shader();
}
glloader_GLES_OES_geometry_shaderFUNC glloader_GLES_OES_geometry_shader = self_init_glloader_GLES_OES_geometry_shader;

#ifdef GLES_OES_geometry_shader

static void GLLOADER_APIENTRY self_init_glFramebufferTextureOES(GLenum target, GLenum attachment, GLuint texture, GLint level)
{
	glloader_init();
	glFramebufferTextureOES(target, attachment, texture, level);
}

glFramebufferTextureOESFUNC glFramebufferTextureOES = self_init_glFramebufferTextureOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_get_program_binary()
{
	return _GLES_OES_get_program_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_get_program_binary()
{
	glloader_init();
	return glloader_GLES_OES_get_program_binary();
}
glloader_GLES_OES_get_program_binaryFUNC glloader_GLES_OES_get_program_binary = self_init_glloader_GLES_OES_get_program_binary;

#ifdef GLES_OES_get_program_binary

static void GLLOADER_APIENTRY self_init_glGetProgramBinaryOES(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary)
{
	glloader_init();
	glGetProgramBinaryOES(program, bufSize, length, binaryFormat, binary);
}
static void GLLOADER_APIENTRY self_init_glProgramBinaryOES(GLuint program, GLenum binaryFormat, const void* binary, GLint length)
{
	glloader_init();
	glProgramBinaryOES(program, binaryFormat, binary, length);
}

glGetProgramBinaryOESFUNC glGetProgramBinaryOES = self_init_glGetProgramBinaryOES;
glProgramBinaryOESFUNC glProgramBinaryOES = self_init_glProgramBinaryOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_gpu_shader5()
{
	return _GLES_OES_gpu_shader5;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_gpu_shader5()
{
	glloader_init();
	return glloader_GLES_OES_gpu_shader5();
}
glloader_GLES_OES_gpu_shader5FUNC glloader_GLES_OES_gpu_shader5 = self_init_glloader_GLES_OES_gpu_shader5;

static char GLLOADER_APIENTRY _glloader_GLES_OES_mapbuffer()
{
	return _GLES_OES_mapbuffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_mapbuffer()
{
	glloader_init();
	return glloader_GLES_OES_mapbuffer();
}
glloader_GLES_OES_mapbufferFUNC glloader_GLES_OES_mapbuffer = self_init_glloader_GLES_OES_mapbuffer;

#ifdef GLES_OES_mapbuffer

static void GLLOADER_APIENTRY self_init_glGetBufferPointervOES(GLenum target, GLenum pname, void** params)
{
	glloader_init();
	glGetBufferPointervOES(target, pname, params);
}
static void* GLLOADER_APIENTRY self_init_glMapBufferOES(GLenum target, GLenum access)
{
	glloader_init();
	return glMapBufferOES(target, access);
}
static GLboolean GLLOADER_APIENTRY self_init_glUnmapBufferOES(GLenum target)
{
	glloader_init();
	return glUnmapBufferOES(target);
}

glGetBufferPointervOESFUNC glGetBufferPointervOES = self_init_glGetBufferPointervOES;
glMapBufferOESFUNC glMapBufferOES = self_init_glMapBufferOES;
glUnmapBufferOESFUNC glUnmapBufferOES = self_init_glUnmapBufferOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_matrix_get()
{
	return _GLES_OES_matrix_get;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_matrix_get()
{
	glloader_init();
	return glloader_GLES_OES_matrix_get();
}
glloader_GLES_OES_matrix_getFUNC glloader_GLES_OES_matrix_get = self_init_glloader_GLES_OES_matrix_get;

static char GLLOADER_APIENTRY _glloader_GLES_OES_matrix_palette()
{
	return _GLES_OES_matrix_palette;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_matrix_palette()
{
	glloader_init();
	return glloader_GLES_OES_matrix_palette();
}
glloader_GLES_OES_matrix_paletteFUNC glloader_GLES_OES_matrix_palette = self_init_glloader_GLES_OES_matrix_palette;

#ifdef GLES_OES_matrix_palette

static void GLLOADER_APIENTRY self_init_glCurrentPaletteMatrixOES(GLuint matrixpaletteindex)
{
	glloader_init();
	glCurrentPaletteMatrixOES(matrixpaletteindex);
}
static void GLLOADER_APIENTRY self_init_glLoadPaletteFromModelViewMatrixOES()
{
	glloader_init();
	glLoadPaletteFromModelViewMatrixOES();
}
static void GLLOADER_APIENTRY self_init_glMatrixIndexPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	glloader_init();
	glMatrixIndexPointerOES(size, type, stride, pointer);
}
static void GLLOADER_APIENTRY self_init_glWeightPointerOES(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	glloader_init();
	glWeightPointerOES(size, type, stride, pointer);
}

glCurrentPaletteMatrixOESFUNC glCurrentPaletteMatrixOES = self_init_glCurrentPaletteMatrixOES;
glLoadPaletteFromModelViewMatrixOESFUNC glLoadPaletteFromModelViewMatrixOES = self_init_glLoadPaletteFromModelViewMatrixOES;
glMatrixIndexPointerOESFUNC glMatrixIndexPointerOES = self_init_glMatrixIndexPointerOES;
glWeightPointerOESFUNC glWeightPointerOES = self_init_glWeightPointerOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_packed_depth_stencil()
{
	return _GLES_OES_packed_depth_stencil;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_packed_depth_stencil()
{
	glloader_init();
	return glloader_GLES_OES_packed_depth_stencil();
}
glloader_GLES_OES_packed_depth_stencilFUNC glloader_GLES_OES_packed_depth_stencil = self_init_glloader_GLES_OES_packed_depth_stencil;

static char GLLOADER_APIENTRY _glloader_GLES_OES_point_size_array()
{
	return _GLES_OES_point_size_array;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_point_size_array()
{
	glloader_init();
	return glloader_GLES_OES_point_size_array();
}
glloader_GLES_OES_point_size_arrayFUNC glloader_GLES_OES_point_size_array = self_init_glloader_GLES_OES_point_size_array;

#ifdef GLES_OES_point_size_array

static void GLLOADER_APIENTRY self_init_glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	glloader_init();
	glPointSizePointerOES(type, stride, pointer);
}

glPointSizePointerOESFUNC glPointSizePointerOES = self_init_glPointSizePointerOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_point_sprite()
{
	return _GLES_OES_point_sprite;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_point_sprite()
{
	glloader_init();
	return glloader_GLES_OES_point_sprite();
}
glloader_GLES_OES_point_spriteFUNC glloader_GLES_OES_point_sprite = self_init_glloader_GLES_OES_point_sprite;

static char GLLOADER_APIENTRY _glloader_GLES_OES_primitive_bounding_box()
{
	return _GLES_OES_primitive_bounding_box;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_primitive_bounding_box()
{
	glloader_init();
	return glloader_GLES_OES_primitive_bounding_box();
}
glloader_GLES_OES_primitive_bounding_boxFUNC glloader_GLES_OES_primitive_bounding_box = self_init_glloader_GLES_OES_primitive_bounding_box;

#ifdef GLES_OES_primitive_bounding_box

static void GLLOADER_APIENTRY self_init_glPrimitiveBoundingBoxOES(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW)
{
	glloader_init();
	glPrimitiveBoundingBoxOES(minX, minY, minZ, minW, maxX, maxY, maxZ, maxW);
}

glPrimitiveBoundingBoxOESFUNC glPrimitiveBoundingBoxOES = self_init_glPrimitiveBoundingBoxOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_query_matrix()
{
	return _GLES_OES_query_matrix;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_query_matrix()
{
	glloader_init();
	return glloader_GLES_OES_query_matrix();
}
glloader_GLES_OES_query_matrixFUNC glloader_GLES_OES_query_matrix = self_init_glloader_GLES_OES_query_matrix;

#ifdef GLES_OES_query_matrix

static void GLLOADER_APIENTRY self_init_glQueryMatrixxOES(GLfixed* mantissa, GLint* exponent)
{
	glloader_init();
	glQueryMatrixxOES(mantissa, exponent);
}

glQueryMatrixxOESFUNC glQueryMatrixxOES = self_init_glQueryMatrixxOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_read_format()
{
	return _GLES_OES_read_format;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_read_format()
{
	glloader_init();
	return glloader_GLES_OES_read_format();
}
glloader_GLES_OES_read_formatFUNC glloader_GLES_OES_read_format = self_init_glloader_GLES_OES_read_format;

static char GLLOADER_APIENTRY _glloader_GLES_OES_required_internalformat()
{
	return _GLES_OES_required_internalformat;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_required_internalformat()
{
	glloader_init();
	return glloader_GLES_OES_required_internalformat();
}
glloader_GLES_OES_required_internalformatFUNC glloader_GLES_OES_required_internalformat = self_init_glloader_GLES_OES_required_internalformat;

static char GLLOADER_APIENTRY _glloader_GLES_OES_rgb8_rgba8()
{
	return _GLES_OES_rgb8_rgba8;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_rgb8_rgba8()
{
	glloader_init();
	return glloader_GLES_OES_rgb8_rgba8();
}
glloader_GLES_OES_rgb8_rgba8FUNC glloader_GLES_OES_rgb8_rgba8 = self_init_glloader_GLES_OES_rgb8_rgba8;

static char GLLOADER_APIENTRY _glloader_GL_OES_sample_shading()
{
	return _GL_OES_sample_shading;
}

static char GLLOADER_APIENTRY self_init_glloader_GL_OES_sample_shading()
{
	glloader_init();
	return glloader_GL_OES_sample_shading();
}
glloader_GL_OES_sample_shadingFUNC glloader_GL_OES_sample_shading = self_init_glloader_GL_OES_sample_shading;

#ifdef GL_OES_sample_shading

static void GLLOADER_APIENTRY self_init_glMinSampleShadingOES(GLfloat value)
{
	glloader_init();
	glMinSampleShadingOES(value);
}

glMinSampleShadingOESFUNC glMinSampleShadingOES = self_init_glMinSampleShadingOES;

#endif

static char GLLOADER_APIENTRY _glloader_GL_OES_sample_variables()
{
	return _GL_OES_sample_variables;
}

static char GLLOADER_APIENTRY self_init_glloader_GL_OES_sample_variables()
{
	glloader_init();
	return glloader_GL_OES_sample_variables();
}
glloader_GL_OES_sample_variablesFUNC glloader_GL_OES_sample_variables = self_init_glloader_GL_OES_sample_variables;

static char GLLOADER_APIENTRY _glloader_GLES_OES_shader_binary()
{
	return _GLES_OES_shader_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_shader_binary()
{
	glloader_init();
	return glloader_GLES_OES_shader_binary();
}
glloader_GLES_OES_shader_binaryFUNC glloader_GLES_OES_shader_binary = self_init_glloader_GLES_OES_shader_binary;

#ifdef GLES_OES_shader_binary

static void GLLOADER_APIENTRY self_init_glShaderBinaryOES(GLint n, GLuint* shaders, GLenum binaryformat, const void* binary, GLint length)
{
	glloader_init();
	glShaderBinaryOES(n, shaders, binaryformat, binary, length);
}

glShaderBinaryOESFUNC glShaderBinaryOES = self_init_glShaderBinaryOES;

#endif

static char GLLOADER_APIENTRY _glloader_GL_OES_shader_image_atomic()
{
	return _GL_OES_shader_image_atomic;
}

static char GLLOADER_APIENTRY self_init_glloader_GL_OES_shader_image_atomic()
{
	glloader_init();
	return glloader_GL_OES_shader_image_atomic();
}
glloader_GL_OES_shader_image_atomicFUNC glloader_GL_OES_shader_image_atomic = self_init_glloader_GL_OES_shader_image_atomic;

static char GLLOADER_APIENTRY _glloader_GLES_OES_shader_io_blocks()
{
	return _GLES_OES_shader_io_blocks;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_shader_io_blocks()
{
	glloader_init();
	return glloader_GLES_OES_shader_io_blocks();
}
glloader_GLES_OES_shader_io_blocksFUNC glloader_GLES_OES_shader_io_blocks = self_init_glloader_GLES_OES_shader_io_blocks;

static char GLLOADER_APIENTRY _glloader_GL_OES_shader_multisample_interpolation()
{
	return _GL_OES_shader_multisample_interpolation;
}

static char GLLOADER_APIENTRY self_init_glloader_GL_OES_shader_multisample_interpolation()
{
	glloader_init();
	return glloader_GL_OES_shader_multisample_interpolation();
}
glloader_GL_OES_shader_multisample_interpolationFUNC glloader_GL_OES_shader_multisample_interpolation = self_init_glloader_GL_OES_shader_multisample_interpolation;

static char GLLOADER_APIENTRY _glloader_GLES_OES_shader_source()
{
	return _GLES_OES_shader_source;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_shader_source()
{
	glloader_init();
	return glloader_GLES_OES_shader_source();
}
glloader_GLES_OES_shader_sourceFUNC glloader_GLES_OES_shader_source = self_init_glloader_GLES_OES_shader_source;

#ifdef GLES_OES_shader_source

static void GLLOADER_APIENTRY self_init_glReleaseShaderCompilerOES()
{
	glloader_init();
	glReleaseShaderCompilerOES();
}
static void GLLOADER_APIENTRY self_init_glGetShaderPrecisionFormatOES(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision)
{
	glloader_init();
	glGetShaderPrecisionFormatOES(shadertype, precisiontype, range, precision);
}

glReleaseShaderCompilerOESFUNC glReleaseShaderCompilerOES = self_init_glReleaseShaderCompilerOES;
glGetShaderPrecisionFormatOESFUNC glGetShaderPrecisionFormatOES = self_init_glGetShaderPrecisionFormatOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_single_precision()
{
	return _GLES_OES_single_precision;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_single_precision()
{
	glloader_init();
	return glloader_GLES_OES_single_precision();
}
glloader_GLES_OES_single_precisionFUNC glloader_GLES_OES_single_precision = self_init_glloader_GLES_OES_single_precision;

#ifdef GLES_OES_single_precision

static void GLLOADER_APIENTRY self_init_glDepthRangefOES(GLclampf n, GLclampf f)
{
	glloader_init();
	glDepthRangefOES(n, f);
}
static void GLLOADER_APIENTRY self_init_glFrustumfOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	glloader_init();
	glFrustumfOES(l, r, b, t, n, f);
}
static void GLLOADER_APIENTRY self_init_glOrthofOES(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f)
{
	glloader_init();
	glOrthofOES(l, r, b, t, n, f);
}
static void GLLOADER_APIENTRY self_init_glClipPlanefOES(GLenum plane, const GLfloat* equation)
{
	glloader_init();
	glClipPlanefOES(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glGetClipPlanefOES(GLenum plane, GLfloat* equation)
{
	glloader_init();
	glGetClipPlanefOES(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glClearDepthfOES(GLclampd depth)
{
	glloader_init();
	glClearDepthfOES(depth);
}

glDepthRangefOESFUNC glDepthRangefOES = self_init_glDepthRangefOES;
glFrustumfOESFUNC glFrustumfOES = self_init_glFrustumfOES;
glOrthofOESFUNC glOrthofOES = self_init_glOrthofOES;
glClipPlanefOESFUNC glClipPlanefOES = self_init_glClipPlanefOES;
glGetClipPlanefOESFUNC glGetClipPlanefOES = self_init_glGetClipPlanefOES;
glClearDepthfOESFUNC glClearDepthfOES = self_init_glClearDepthfOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_standard_derivatives()
{
	return _GLES_OES_standard_derivatives;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_standard_derivatives()
{
	glloader_init();
	return glloader_GLES_OES_standard_derivatives();
}
glloader_GLES_OES_standard_derivativesFUNC glloader_GLES_OES_standard_derivatives = self_init_glloader_GLES_OES_standard_derivatives;

static char GLLOADER_APIENTRY _glloader_GLES_OES_stencil1()
{
	return _GLES_OES_stencil1;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_stencil1()
{
	glloader_init();
	return glloader_GLES_OES_stencil1();
}
glloader_GLES_OES_stencil1FUNC glloader_GLES_OES_stencil1 = self_init_glloader_GLES_OES_stencil1;

static char GLLOADER_APIENTRY _glloader_GLES_OES_stencil4()
{
	return _GLES_OES_stencil4;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_stencil4()
{
	glloader_init();
	return glloader_GLES_OES_stencil4();
}
glloader_GLES_OES_stencil4FUNC glloader_GLES_OES_stencil4 = self_init_glloader_GLES_OES_stencil4;

static char GLLOADER_APIENTRY _glloader_GLES_OES_stencil8()
{
	return _GLES_OES_stencil8;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_stencil8()
{
	glloader_init();
	return glloader_GLES_OES_stencil8();
}
glloader_GLES_OES_stencil8FUNC glloader_GLES_OES_stencil8 = self_init_glloader_GLES_OES_stencil8;

static char GLLOADER_APIENTRY _glloader_GLES_OES_stencil_wrap()
{
	return _GLES_OES_stencil_wrap;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_stencil_wrap()
{
	glloader_init();
	return glloader_GLES_OES_stencil_wrap();
}
glloader_GLES_OES_stencil_wrapFUNC glloader_GLES_OES_stencil_wrap = self_init_glloader_GLES_OES_stencil_wrap;

static char GLLOADER_APIENTRY _glloader_GLES_OES_surfaceless_context()
{
	return _GLES_OES_surfaceless_context;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_surfaceless_context()
{
	glloader_init();
	return glloader_GLES_OES_surfaceless_context();
}
glloader_GLES_OES_surfaceless_contextFUNC glloader_GLES_OES_surfaceless_context = self_init_glloader_GLES_OES_surfaceless_context;

static char GLLOADER_APIENTRY _glloader_GLES_OES_tessellation_shader()
{
	return _GLES_OES_tessellation_shader;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_tessellation_shader()
{
	glloader_init();
	return glloader_GLES_OES_tessellation_shader();
}
glloader_GLES_OES_tessellation_shaderFUNC glloader_GLES_OES_tessellation_shader = self_init_glloader_GLES_OES_tessellation_shader;

#ifdef GLES_OES_tessellation_shader

static void GLLOADER_APIENTRY self_init_glPatchParameteriOES(GLenum pname, GLint value)
{
	glloader_init();
	glPatchParameteriOES(pname, value);
}

glPatchParameteriOESFUNC glPatchParameteriOES = self_init_glPatchParameteriOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_3D()
{
	return _GLES_OES_texture_3D;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_3D()
{
	glloader_init();
	return glloader_GLES_OES_texture_3D();
}
glloader_GLES_OES_texture_3DFUNC glloader_GLES_OES_texture_3D = self_init_glloader_GLES_OES_texture_3D;

#ifdef GLES_OES_texture_3D

static void GLLOADER_APIENTRY self_init_glTexImage3DOES(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	glloader_init();
	glTexImage3DOES(target, level, internalFormat, width, height, depth, border, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels)
{
	glloader_init();
	glTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glCopyTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	glloader_init();
	glCopyTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexImage3DOES(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data)
{
	glloader_init();
	glCompressedTexImage3DOES(target, level, internalFormat, width, height, depth, border, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexSubImage3DOES(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data)
{
	glloader_init();
	glCompressedTexSubImage3DOES(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glFramebufferTexture3DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset)
{
	glloader_init();
	glFramebufferTexture3DOES(target, attachment, textarget, texture, level, zoffset);
}

glTexImage3DOESFUNC glTexImage3DOES = self_init_glTexImage3DOES;
glTexSubImage3DOESFUNC glTexSubImage3DOES = self_init_glTexSubImage3DOES;
glCopyTexSubImage3DOESFUNC glCopyTexSubImage3DOES = self_init_glCopyTexSubImage3DOES;
glCompressedTexImage3DOESFUNC glCompressedTexImage3DOES = self_init_glCompressedTexImage3DOES;
glCompressedTexSubImage3DOESFUNC glCompressedTexSubImage3DOES = self_init_glCompressedTexSubImage3DOES;
glFramebufferTexture3DOESFUNC glFramebufferTexture3DOES = self_init_glFramebufferTexture3DOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_border_clamp()
{
	return _GLES_OES_texture_border_clamp;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_border_clamp()
{
	glloader_init();
	return glloader_GLES_OES_texture_border_clamp();
}
glloader_GLES_OES_texture_border_clampFUNC glloader_GLES_OES_texture_border_clamp = self_init_glloader_GLES_OES_texture_border_clamp;

#ifdef GLES_OES_texture_border_clamp

static void GLLOADER_APIENTRY self_init_glTexParameterIivOES(GLenum target, GLenum pname, GLint* params)
{
	glloader_init();
	glTexParameterIivOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexParameterIuivOES(GLenum target, GLenum pname, GLuint* params)
{
	glloader_init();
	glTexParameterIuivOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameterIivOES(GLenum target, GLenum pname, GLint* params)
{
	glloader_init();
	glGetTexParameterIivOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameterIuivOES(GLenum target, GLenum pname, GLuint* params)
{
	glloader_init();
	glGetTexParameterIuivOES(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameterIivOES(GLuint sampler, GLenum pname, const GLint* param)
{
	glloader_init();
	glSamplerParameterIivOES(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameterIuivOES(GLuint sampler, GLenum pname, const GLuint* param)
{
	glloader_init();
	glSamplerParameterIuivOES(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glGetSamplerParameterIivOES(GLuint sampler, GLenum pname, GLint* params)
{
	glloader_init();
	glGetSamplerParameterIivOES(sampler, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetSamplerParameterIuivOES(GLuint sampler, GLenum pname, GLuint* params)
{
	glloader_init();
	glGetSamplerParameterIuivOES(sampler, pname, params);
}

glTexParameterIivOESFUNC glTexParameterIivOES = self_init_glTexParameterIivOES;
glTexParameterIuivOESFUNC glTexParameterIuivOES = self_init_glTexParameterIuivOES;
glGetTexParameterIivOESFUNC glGetTexParameterIivOES = self_init_glGetTexParameterIivOES;
glGetTexParameterIuivOESFUNC glGetTexParameterIuivOES = self_init_glGetTexParameterIuivOES;
glSamplerParameterIivOESFUNC glSamplerParameterIivOES = self_init_glSamplerParameterIivOES;
glSamplerParameterIuivOESFUNC glSamplerParameterIuivOES = self_init_glSamplerParameterIuivOES;
glGetSamplerParameterIivOESFUNC glGetSamplerParameterIivOES = self_init_glGetSamplerParameterIivOES;
glGetSamplerParameterIuivOESFUNC glGetSamplerParameterIuivOES = self_init_glGetSamplerParameterIuivOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_buffer()
{
	return _GLES_OES_texture_buffer;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_buffer()
{
	glloader_init();
	return glloader_GLES_OES_texture_buffer();
}
glloader_GLES_OES_texture_bufferFUNC glloader_GLES_OES_texture_buffer = self_init_glloader_GLES_OES_texture_buffer;

#ifdef GLES_OES_texture_buffer

static void GLLOADER_APIENTRY self_init_glTexBufferOES(GLenum target, GLenum internalformat, GLuint buffer)
{
	glloader_init();
	glTexBufferOES(target, internalformat, buffer);
}
static void GLLOADER_APIENTRY self_init_glTexBufferRangeOES(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	glloader_init();
	glTexBufferRangeOES(target, internalformat, buffer, offset, size);
}

glTexBufferOESFUNC glTexBufferOES = self_init_glTexBufferOES;
glTexBufferRangeOESFUNC glTexBufferRangeOES = self_init_glTexBufferRangeOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_compression_astc()
{
	return _GLES_OES_texture_compression_astc;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_compression_astc()
{
	glloader_init();
	return glloader_GLES_OES_texture_compression_astc();
}
glloader_GLES_OES_texture_compression_astcFUNC glloader_GLES_OES_texture_compression_astc = self_init_glloader_GLES_OES_texture_compression_astc;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_cube_map()
{
	return _GLES_OES_texture_cube_map;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_cube_map()
{
	glloader_init();
	return glloader_GLES_OES_texture_cube_map();
}
glloader_GLES_OES_texture_cube_mapFUNC glloader_GLES_OES_texture_cube_map = self_init_glloader_GLES_OES_texture_cube_map;

#ifdef GLES_OES_texture_cube_map

static void GLLOADER_APIENTRY self_init_glTexGenfOES(GLenum coord, GLenum pname, GLfloat param)
{
	glloader_init();
	glTexGenfOES(coord, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexGenfvOES(GLenum coord, GLenum pname, const GLfloat* params)
{
	glloader_init();
	glTexGenfvOES(coord, pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexGeniOES(GLenum coord, GLenum pname, GLint param)
{
	glloader_init();
	glTexGeniOES(coord, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexGenivOES(GLenum coord, GLenum pname, const GLint* params)
{
	glloader_init();
	glTexGenivOES(coord, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexGenfvOES(GLenum coord, GLenum pname, GLfloat* params)
{
	glloader_init();
	glGetTexGenfvOES(coord, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexGenivOES(GLenum coord, GLenum pname, GLint* params)
{
	glloader_init();
	glGetTexGenivOES(coord, pname, params);
}

glTexGenfOESFUNC glTexGenfOES = self_init_glTexGenfOES;
glTexGenfvOESFUNC glTexGenfvOES = self_init_glTexGenfvOES;
glTexGeniOESFUNC glTexGeniOES = self_init_glTexGeniOES;
glTexGenivOESFUNC glTexGenivOES = self_init_glTexGenivOES;
glGetTexGenfvOESFUNC glGetTexGenfvOES = self_init_glGetTexGenfvOES;
glGetTexGenivOESFUNC glGetTexGenivOES = self_init_glGetTexGenivOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_cube_map_array()
{
	return _GLES_OES_texture_cube_map_array;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_cube_map_array()
{
	glloader_init();
	return glloader_GLES_OES_texture_cube_map_array();
}
glloader_GLES_OES_texture_cube_map_arrayFUNC glloader_GLES_OES_texture_cube_map_array = self_init_glloader_GLES_OES_texture_cube_map_array;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_env_crossbar()
{
	return _GLES_OES_texture_env_crossbar;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_env_crossbar()
{
	glloader_init();
	return glloader_GLES_OES_texture_env_crossbar();
}
glloader_GLES_OES_texture_env_crossbarFUNC glloader_GLES_OES_texture_env_crossbar = self_init_glloader_GLES_OES_texture_env_crossbar;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_float()
{
	return _GLES_OES_texture_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_float()
{
	glloader_init();
	return glloader_GLES_OES_texture_float();
}
glloader_GLES_OES_texture_floatFUNC glloader_GLES_OES_texture_float = self_init_glloader_GLES_OES_texture_float;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_float_linear()
{
	return _GLES_OES_texture_float_linear;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_float_linear()
{
	glloader_init();
	return glloader_GLES_OES_texture_float_linear();
}
glloader_GLES_OES_texture_float_linearFUNC glloader_GLES_OES_texture_float_linear = self_init_glloader_GLES_OES_texture_float_linear;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_half_float()
{
	return _GLES_OES_texture_half_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_half_float()
{
	glloader_init();
	return glloader_GLES_OES_texture_half_float();
}
glloader_GLES_OES_texture_half_floatFUNC glloader_GLES_OES_texture_half_float = self_init_glloader_GLES_OES_texture_half_float;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_half_float_linear()
{
	return _GLES_OES_texture_half_float_linear;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_half_float_linear()
{
	glloader_init();
	return glloader_GLES_OES_texture_half_float_linear();
}
glloader_GLES_OES_texture_half_float_linearFUNC glloader_GLES_OES_texture_half_float_linear = self_init_glloader_GLES_OES_texture_half_float_linear;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_mirrored_repeat()
{
	return _GLES_OES_texture_mirrored_repeat;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_mirrored_repeat()
{
	glloader_init();
	return glloader_GLES_OES_texture_mirrored_repeat();
}
glloader_GLES_OES_texture_mirrored_repeatFUNC glloader_GLES_OES_texture_mirrored_repeat = self_init_glloader_GLES_OES_texture_mirrored_repeat;

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_npot()
{
	return _GLES_OES_texture_npot;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_npot()
{
	glloader_init();
	return glloader_GLES_OES_texture_npot();
}
glloader_GLES_OES_texture_npotFUNC glloader_GLES_OES_texture_npot = self_init_glloader_GLES_OES_texture_npot;

static char GLLOADER_APIENTRY _glloader_GL_OES_texture_stencil8()
{
	return _GL_OES_texture_stencil8;
}

static char GLLOADER_APIENTRY self_init_glloader_GL_OES_texture_stencil8()
{
	glloader_init();
	return glloader_GL_OES_texture_stencil8();
}
glloader_GL_OES_texture_stencil8FUNC glloader_GL_OES_texture_stencil8 = self_init_glloader_GL_OES_texture_stencil8;

static char GLLOADER_APIENTRY _glloader_GL_OES_texture_storage_multisample_2d_array()
{
	return _GL_OES_texture_storage_multisample_2d_array;
}

static char GLLOADER_APIENTRY self_init_glloader_GL_OES_texture_storage_multisample_2d_array()
{
	glloader_init();
	return glloader_GL_OES_texture_storage_multisample_2d_array();
}
glloader_GL_OES_texture_storage_multisample_2d_arrayFUNC glloader_GL_OES_texture_storage_multisample_2d_array = self_init_glloader_GL_OES_texture_storage_multisample_2d_array;

#ifdef GL_OES_texture_storage_multisample_2d_array

static void GLLOADER_APIENTRY self_init_glTexImage3DMultisampleOES(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations)
{
	glloader_init();
	glTexImage3DMultisampleOES(target, samples, internalformat, width, height, depth, fixedsamplelocations);
}

glTexImage3DMultisampleOESFUNC glTexImage3DMultisampleOES = self_init_glTexImage3DMultisampleOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_texture_view()
{
	return _GLES_OES_texture_view;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_texture_view()
{
	glloader_init();
	return glloader_GLES_OES_texture_view();
}
glloader_GLES_OES_texture_viewFUNC glloader_GLES_OES_texture_view = self_init_glloader_GLES_OES_texture_view;

#ifdef GLES_OES_texture_view

static void GLLOADER_APIENTRY self_init_glTextureViewOES(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers)
{
	glloader_init();
	glTextureViewOES(texture, target, origtexture, internalformat, minlevel, numlevels, minlayer, numlayers);
}

glTextureViewOESFUNC glTextureViewOES = self_init_glTextureViewOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_vertex_array_object()
{
	return _GLES_OES_vertex_array_object;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_vertex_array_object()
{
	glloader_init();
	return glloader_GLES_OES_vertex_array_object();
}
glloader_GLES_OES_vertex_array_objectFUNC glloader_GLES_OES_vertex_array_object = self_init_glloader_GLES_OES_vertex_array_object;

#ifdef GLES_OES_vertex_array_object

static void GLLOADER_APIENTRY self_init_glBindVertexArrayOES(GLuint array)
{
	glloader_init();
	glBindVertexArrayOES(array);
}
static void GLLOADER_APIENTRY self_init_glDeleteVertexArraysOES(GLsizei n, const GLuint* arrays)
{
	glloader_init();
	glDeleteVertexArraysOES(n, arrays);
}
static void GLLOADER_APIENTRY self_init_glGenVertexArraysOES(GLsizei n, GLuint* arrays)
{
	glloader_init();
	glGenVertexArraysOES(n, arrays);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsVertexArrayOES(GLuint array)
{
	glloader_init();
	return glIsVertexArrayOES(array);
}

glBindVertexArrayOESFUNC glBindVertexArrayOES = self_init_glBindVertexArrayOES;
glDeleteVertexArraysOESFUNC glDeleteVertexArraysOES = self_init_glDeleteVertexArraysOES;
glGenVertexArraysOESFUNC glGenVertexArraysOES = self_init_glGenVertexArraysOES;
glIsVertexArrayOESFUNC glIsVertexArrayOES = self_init_glIsVertexArrayOES;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OES_vertex_half_float()
{
	return _GLES_OES_vertex_half_float;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_vertex_half_float()
{
	glloader_init();
	return glloader_GLES_OES_vertex_half_float();
}
glloader_GLES_OES_vertex_half_floatFUNC glloader_GLES_OES_vertex_half_float = self_init_glloader_GLES_OES_vertex_half_float;

static char GLLOADER_APIENTRY _glloader_GLES_OES_vertex_type_10_10_10_2()
{
	return _GLES_OES_vertex_type_10_10_10_2;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OES_vertex_type_10_10_10_2()
{
	glloader_init();
	return glloader_GLES_OES_vertex_type_10_10_10_2();
}
glloader_GLES_OES_vertex_type_10_10_10_2FUNC glloader_GLES_OES_vertex_type_10_10_10_2 = self_init_glloader_GLES_OES_vertex_type_10_10_10_2;

static char GLLOADER_APIENTRY _glloader_GLES_OVR_multiview()
{
	return _GLES_OVR_multiview;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OVR_multiview()
{
	glloader_init();
	return glloader_GLES_OVR_multiview();
}
glloader_GLES_OVR_multiviewFUNC glloader_GLES_OVR_multiview = self_init_glloader_GLES_OVR_multiview;

#ifdef GLES_OVR_multiview

static void GLLOADER_APIENTRY self_init_glFramebufferTextureMultiviewOVR(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews)
{
	glloader_init();
	glFramebufferTextureMultiviewOVR(target, attachment, texture, level, baseViewIndex, numViews);
}

glFramebufferTextureMultiviewOVRFUNC glFramebufferTextureMultiviewOVR = self_init_glFramebufferTextureMultiviewOVR;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_OVR_multiview2()
{
	return _GLES_OVR_multiview2;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_OVR_multiview2()
{
	glloader_init();
	return glloader_GLES_OVR_multiview2();
}
glloader_GLES_OVR_multiview2FUNC glloader_GLES_OVR_multiview2 = self_init_glloader_GLES_OVR_multiview2;

static char GLLOADER_APIENTRY _glloader_GLES_QCOM_binning_control()
{
	return _GLES_QCOM_binning_control;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_QCOM_binning_control()
{
	glloader_init();
	return glloader_GLES_QCOM_binning_control();
}
glloader_GLES_QCOM_binning_controlFUNC glloader_GLES_QCOM_binning_control = self_init_glloader_GLES_QCOM_binning_control;

static char GLLOADER_APIENTRY _glloader_GLES_QCOM_driver_control()
{
	return _GLES_QCOM_driver_control;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_QCOM_driver_control()
{
	glloader_init();
	return glloader_GLES_QCOM_driver_control();
}
glloader_GLES_QCOM_driver_controlFUNC glloader_GLES_QCOM_driver_control = self_init_glloader_GLES_QCOM_driver_control;

#ifdef GLES_QCOM_driver_control

static void GLLOADER_APIENTRY self_init_glGetDriverControlsQCOM(GLint* num, GLsizei size, GLuint* driverControls)
{
	glloader_init();
	glGetDriverControlsQCOM(num, size, driverControls);
}
static void GLLOADER_APIENTRY self_init_glGetDriverControlStringQCOM(GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString)
{
	glloader_init();
	glGetDriverControlStringQCOM(driverControl, bufSize, length, driverControlString);
}
static void GLLOADER_APIENTRY self_init_glEnableDriverControlQCOM(GLuint driverControl)
{
	glloader_init();
	glEnableDriverControlQCOM(driverControl);
}
static void GLLOADER_APIENTRY self_init_glDisableDriverControlQCOM(GLuint driverControl)
{
	glloader_init();
	glDisableDriverControlQCOM(driverControl);
}

glGetDriverControlsQCOMFUNC glGetDriverControlsQCOM = self_init_glGetDriverControlsQCOM;
glGetDriverControlStringQCOMFUNC glGetDriverControlStringQCOM = self_init_glGetDriverControlStringQCOM;
glEnableDriverControlQCOMFUNC glEnableDriverControlQCOM = self_init_glEnableDriverControlQCOM;
glDisableDriverControlQCOMFUNC glDisableDriverControlQCOM = self_init_glDisableDriverControlQCOM;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_QCOM_extended_get()
{
	return _GLES_QCOM_extended_get;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_QCOM_extended_get()
{
	glloader_init();
	return glloader_GLES_QCOM_extended_get();
}
glloader_GLES_QCOM_extended_getFUNC glloader_GLES_QCOM_extended_get = self_init_glloader_GLES_QCOM_extended_get;

#ifdef GLES_QCOM_extended_get

static void GLLOADER_APIENTRY self_init_glExtGetTexturesQCOM(GLuint* textures, GLint maxTextures, GLint* numTextures)
{
	glloader_init();
	glExtGetTexturesQCOM(textures, maxTextures, numTextures);
}
static void GLLOADER_APIENTRY self_init_glExtGetBuffersQCOM(GLuint* buffers, GLint maxBuffers, GLint* numBuffers)
{
	glloader_init();
	glExtGetBuffersQCOM(buffers, maxBuffers, numBuffers);
}
static void GLLOADER_APIENTRY self_init_glExtGetRenderbuffersQCOM(GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers)
{
	glloader_init();
	glExtGetRenderbuffersQCOM(renderbuffers, maxRenderbuffers, numRenderbuffers);
}
static void GLLOADER_APIENTRY self_init_glExtGetFramebuffersQCOM(GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers)
{
	glloader_init();
	glExtGetFramebuffersQCOM(framebuffers, maxFramebuffers, numFramebuffers);
}
static void GLLOADER_APIENTRY self_init_glExtGetTexLevelParameterivQCOM(GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params)
{
	glloader_init();
	glExtGetTexLevelParameterivQCOM(texture, face, level, pname, params);
}
static void GLLOADER_APIENTRY self_init_glExtTexObjectStateOverrideiQCOM(GLenum target, GLenum pname, GLint param)
{
	glloader_init();
	glExtTexObjectStateOverrideiQCOM(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glExtGetTexSubImageQCOM(GLenum targe, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void* texels)
{
	glloader_init();
	glExtGetTexSubImageQCOM(targe, level, xoffset, yoffset, zoffset, width, height, depth, format, type, texels);
}
static void GLLOADER_APIENTRY self_init_glExtGetBufferPointervQCOM(GLenum target, void** params)
{
	glloader_init();
	glExtGetBufferPointervQCOM(target, params);
}

glExtGetTexturesQCOMFUNC glExtGetTexturesQCOM = self_init_glExtGetTexturesQCOM;
glExtGetBuffersQCOMFUNC glExtGetBuffersQCOM = self_init_glExtGetBuffersQCOM;
glExtGetRenderbuffersQCOMFUNC glExtGetRenderbuffersQCOM = self_init_glExtGetRenderbuffersQCOM;
glExtGetFramebuffersQCOMFUNC glExtGetFramebuffersQCOM = self_init_glExtGetFramebuffersQCOM;
glExtGetTexLevelParameterivQCOMFUNC glExtGetTexLevelParameterivQCOM = self_init_glExtGetTexLevelParameterivQCOM;
glExtTexObjectStateOverrideiQCOMFUNC glExtTexObjectStateOverrideiQCOM = self_init_glExtTexObjectStateOverrideiQCOM;
glExtGetTexSubImageQCOMFUNC glExtGetTexSubImageQCOM = self_init_glExtGetTexSubImageQCOM;
glExtGetBufferPointervQCOMFUNC glExtGetBufferPointervQCOM = self_init_glExtGetBufferPointervQCOM;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_QCOM_extended_get2()
{
	return _GLES_QCOM_extended_get2;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_QCOM_extended_get2()
{
	glloader_init();
	return glloader_GLES_QCOM_extended_get2();
}
glloader_GLES_QCOM_extended_get2FUNC glloader_GLES_QCOM_extended_get2 = self_init_glloader_GLES_QCOM_extended_get2;

#ifdef GLES_QCOM_extended_get2

static void GLLOADER_APIENTRY self_init_glExtGetShadersQCOM(GLuint* shaders, GLint maxShaders, GLint* numShaders)
{
	glloader_init();
	glExtGetShadersQCOM(shaders, maxShaders, numShaders);
}
static void GLLOADER_APIENTRY self_init_glExtGetProgramsQCOM(GLuint* programs, GLint maxPrograms, GLint* numPrograms)
{
	glloader_init();
	glExtGetProgramsQCOM(programs, maxPrograms, numPrograms);
}
static GLboolean GLLOADER_APIENTRY self_init_glExtIsProgramBinaryQCOM(GLuint program)
{
	glloader_init();
	return glExtIsProgramBinaryQCOM(program);
}
static void GLLOADER_APIENTRY self_init_glExtGetProgramBinarySourceQCOM(GLuint program, GLenum shadertype, GLchar* source, GLint* length)
{
	glloader_init();
	glExtGetProgramBinarySourceQCOM(program, shadertype, source, length);
}

glExtGetShadersQCOMFUNC glExtGetShadersQCOM = self_init_glExtGetShadersQCOM;
glExtGetProgramsQCOMFUNC glExtGetProgramsQCOM = self_init_glExtGetProgramsQCOM;
glExtIsProgramBinaryQCOMFUNC glExtIsProgramBinaryQCOM = self_init_glExtIsProgramBinaryQCOM;
glExtGetProgramBinarySourceQCOMFUNC glExtGetProgramBinarySourceQCOM = self_init_glExtGetProgramBinarySourceQCOM;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_QCOM_performance_monitor_global_mode()
{
	return _GLES_QCOM_performance_monitor_global_mode;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_QCOM_performance_monitor_global_mode()
{
	glloader_init();
	return glloader_GLES_QCOM_performance_monitor_global_mode();
}
glloader_GLES_QCOM_performance_monitor_global_modeFUNC glloader_GLES_QCOM_performance_monitor_global_mode = self_init_glloader_GLES_QCOM_performance_monitor_global_mode;

static char GLLOADER_APIENTRY _glloader_GLES_QCOM_tiled_rendering()
{
	return _GLES_QCOM_tiled_rendering;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_QCOM_tiled_rendering()
{
	glloader_init();
	return glloader_GLES_QCOM_tiled_rendering();
}
glloader_GLES_QCOM_tiled_renderingFUNC glloader_GLES_QCOM_tiled_rendering = self_init_glloader_GLES_QCOM_tiled_rendering;

#ifdef GLES_QCOM_tiled_rendering

static void GLLOADER_APIENTRY self_init_glStartTilingQCOM(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask)
{
	glloader_init();
	glStartTilingQCOM(x, y, width, height, preserveMask);
}
static void GLLOADER_APIENTRY self_init_glEndTilingQCOM(GLbitfield preserveMask)
{
	glloader_init();
	glEndTilingQCOM(preserveMask);
}

glStartTilingQCOMFUNC glStartTilingQCOM = self_init_glStartTilingQCOM;
glEndTilingQCOMFUNC glEndTilingQCOM = self_init_glEndTilingQCOM;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_QCOM_writeonly_rendering()
{
	return _GLES_QCOM_writeonly_rendering;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_QCOM_writeonly_rendering()
{
	glloader_init();
	return glloader_GLES_QCOM_writeonly_rendering();
}
glloader_GLES_QCOM_writeonly_renderingFUNC glloader_GLES_QCOM_writeonly_rendering = self_init_glloader_GLES_QCOM_writeonly_rendering;

static char GLLOADER_APIENTRY _glloader_GLES_VERSION_1_0()
{
	return _GLES_VERSION_1_0;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_VERSION_1_0()
{
	glloader_init();
	return glloader_GLES_VERSION_1_0();
}
glloader_GLES_VERSION_1_0FUNC glloader_GLES_VERSION_1_0 = self_init_glloader_GLES_VERSION_1_0;

#ifdef GLES_VERSION_1_0

static void GLLOADER_APIENTRY self_init_glActiveTexture(GLenum texture)
{
	LOAD_FUNC1(glActiveTexture);
	glActiveTexture(texture);
}
static void GLLOADER_APIENTRY self_init_glAlphaFunc(GLenum func, GLclampf ref)
{
	LOAD_FUNC1(glAlphaFunc);
	glAlphaFunc(func, ref);
}
static void GLLOADER_APIENTRY self_init_glAlphaFuncx(GLenum func, GLclampx ref)
{
	LOAD_FUNC1(glAlphaFuncx);
	glAlphaFuncx(func, ref);
}
static void GLLOADER_APIENTRY self_init_glBindTexture(GLenum target, GLuint texture)
{
	LOAD_FUNC1(glBindTexture);
	glBindTexture(target, texture);
}
static void GLLOADER_APIENTRY self_init_glBlendFunc(GLenum sfactor, GLenum dfactor)
{
	LOAD_FUNC1(glBlendFunc);
	glBlendFunc(sfactor, dfactor);
}
static void GLLOADER_APIENTRY self_init_glClear(GLbitfield mask)
{
	LOAD_FUNC1(glClear);
	glClear(mask);
}
static void GLLOADER_APIENTRY self_init_glClearColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	LOAD_FUNC1(glClearColor);
	glClearColor(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glClearColorx(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha)
{
	LOAD_FUNC1(glClearColorx);
	glClearColorx(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glClearDepthf(GLclampf depth)
{
	LOAD_FUNC1(glClearDepthf);
	glClearDepthf(depth);
}
static void GLLOADER_APIENTRY self_init_glClearDepthx(GLclampx depth)
{
	LOAD_FUNC1(glClearDepthx);
	glClearDepthx(depth);
}
static void GLLOADER_APIENTRY self_init_glClearStencil(GLint s)
{
	LOAD_FUNC1(glClearStencil);
	glClearStencil(s);
}
static void GLLOADER_APIENTRY self_init_glClientActiveTexture(GLenum texture)
{
	LOAD_FUNC1(glClientActiveTexture);
	glClientActiveTexture(texture);
}
static void GLLOADER_APIENTRY self_init_glColor4f(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
	LOAD_FUNC1(glColor4f);
	glColor4f(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glColor4x(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha)
{
	LOAD_FUNC1(glColor4x);
	glColor4x(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
{
	LOAD_FUNC1(glColorMask);
	glColorMask(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	LOAD_FUNC1(glColorPointer);
	glColorPointer(size, type, stride, pointer);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data)
{
	LOAD_FUNC1(glCompressedTexImage2D);
	glCompressedTexImage2D(target, level, internalFormat, width, height, border, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data)
{
	LOAD_FUNC1(glCompressedTexSubImage2D);
	glCompressedTexSubImage2D(target, level, xoffset, yoffset, width, height, format, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glCopyTexImage2D(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
{
	LOAD_FUNC1(glCopyTexImage2D);
	glCopyTexImage2D(target, level, internalFormat, x, y, width, height, border);
}
static void GLLOADER_APIENTRY self_init_glCopyTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glCopyTexSubImage2D);
	glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}
static void GLLOADER_APIENTRY self_init_glCullFace(GLenum mode)
{
	LOAD_FUNC1(glCullFace);
	glCullFace(mode);
}
static void GLLOADER_APIENTRY self_init_glDeleteTextures(GLsizei n, const GLuint* textures)
{
	LOAD_FUNC1(glDeleteTextures);
	glDeleteTextures(n, textures);
}
static void GLLOADER_APIENTRY self_init_glDepthFunc(GLenum func)
{
	LOAD_FUNC1(glDepthFunc);
	glDepthFunc(func);
}
static void GLLOADER_APIENTRY self_init_glDepthMask(GLboolean flag)
{
	LOAD_FUNC1(glDepthMask);
	glDepthMask(flag);
}
static void GLLOADER_APIENTRY self_init_glDepthRangef(GLclampf zNear, GLclampf zFar)
{
	LOAD_FUNC1(glDepthRangef);
	glDepthRangef(zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glDepthRangex(GLclampx zNear, GLclampx zFar)
{
	LOAD_FUNC1(glDepthRangex);
	glDepthRangex(zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glDisable(GLenum cap)
{
	LOAD_FUNC1(glDisable);
	glDisable(cap);
}
static void GLLOADER_APIENTRY self_init_glDisableClientState(GLenum array)
{
	LOAD_FUNC1(glDisableClientState);
	glDisableClientState(array);
}
static void GLLOADER_APIENTRY self_init_glDrawArrays(GLenum mode, GLint first, GLsizei count)
{
	LOAD_FUNC1(glDrawArrays);
	glDrawArrays(mode, first, count);
}
static void GLLOADER_APIENTRY self_init_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices)
{
	LOAD_FUNC1(glDrawElements);
	glDrawElements(mode, count, type, indices);
}
static void GLLOADER_APIENTRY self_init_glEnable(GLenum cap)
{
	LOAD_FUNC1(glEnable);
	glEnable(cap);
}
static void GLLOADER_APIENTRY self_init_glEnableClientState(GLenum array)
{
	LOAD_FUNC1(glEnableClientState);
	glEnableClientState(array);
}
static void GLLOADER_APIENTRY self_init_glFinish()
{
	LOAD_FUNC1(glFinish);
	glFinish();
}
static void GLLOADER_APIENTRY self_init_glFlush()
{
	LOAD_FUNC1(glFlush);
	glFlush();
}
static void GLLOADER_APIENTRY self_init_glFogf(GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glFogf);
	glFogf(pname, param);
}
static void GLLOADER_APIENTRY self_init_glFogfv(GLenum pname, const GLfloat* params)
{
	LOAD_FUNC1(glFogfv);
	glFogfv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glFogx(GLenum pname, GLfixed param)
{
	LOAD_FUNC1(glFogx);
	glFogx(pname, param);
}
static void GLLOADER_APIENTRY self_init_glFogxv(GLenum pname, const GLfixed* params)
{
	LOAD_FUNC1(glFogxv);
	glFogxv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glFrontFace(GLenum mode)
{
	LOAD_FUNC1(glFrontFace);
	glFrontFace(mode);
}
static void GLLOADER_APIENTRY self_init_glFrustumf(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	LOAD_FUNC1(glFrustumf);
	glFrustumf(left, right, bottom, top, zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glFrustumx(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	LOAD_FUNC1(glFrustumx);
	glFrustumx(left, right, bottom, top, zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glGenTextures(GLsizei n, GLuint* textures)
{
	LOAD_FUNC1(glGenTextures);
	glGenTextures(n, textures);
}
static GLenum GLLOADER_APIENTRY self_init_glGetError()
{
	LOAD_FUNC1(glGetError);
	return glGetError();
}
static void GLLOADER_APIENTRY self_init_glGetIntegerv(GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetIntegerv);
	glGetIntegerv(pname, params);
}
static const GLubyte* GLLOADER_APIENTRY self_init_glGetString(GLenum name)
{
	LOAD_FUNC1(glGetString);
	return glGetString(name);
}
static void GLLOADER_APIENTRY self_init_glHint(GLenum target, GLenum mode)
{
	LOAD_FUNC1(glHint);
	glHint(target, mode);
}
static void GLLOADER_APIENTRY self_init_glLightModelf(GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glLightModelf);
	glLightModelf(pname, param);
}
static void GLLOADER_APIENTRY self_init_glLightModelfv(GLenum pname, const GLfloat* params)
{
	LOAD_FUNC1(glLightModelfv);
	glLightModelfv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glLightModelx(GLenum pname, GLfixed param)
{
	LOAD_FUNC1(glLightModelx);
	glLightModelx(pname, param);
}
static void GLLOADER_APIENTRY self_init_glLightModelxv(GLenum pname, const GLfixed* params)
{
	LOAD_FUNC1(glLightModelxv);
	glLightModelxv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glLightf(GLenum light, GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glLightf);
	glLightf(light, pname, param);
}
static void GLLOADER_APIENTRY self_init_glLightfv(GLenum light, GLenum pname, const GLfloat* params)
{
	LOAD_FUNC1(glLightfv);
	glLightfv(light, pname, params);
}
static void GLLOADER_APIENTRY self_init_glLightx(GLenum light, GLenum pname, GLfixed param)
{
	LOAD_FUNC1(glLightx);
	glLightx(light, pname, param);
}
static void GLLOADER_APIENTRY self_init_glLightxv(GLenum light, GLenum pname, const GLfixed* params)
{
	LOAD_FUNC1(glLightxv);
	glLightxv(light, pname, params);
}
static void GLLOADER_APIENTRY self_init_glLineWidth(GLfloat width)
{
	LOAD_FUNC1(glLineWidth);
	glLineWidth(width);
}
static void GLLOADER_APIENTRY self_init_glLineWidthx(GLfixed width)
{
	LOAD_FUNC1(glLineWidthx);
	glLineWidthx(width);
}
static void GLLOADER_APIENTRY self_init_glLoadIdentity()
{
	LOAD_FUNC1(glLoadIdentity);
	glLoadIdentity();
}
static void GLLOADER_APIENTRY self_init_glLoadMatrixf(const GLfloat* m)
{
	LOAD_FUNC1(glLoadMatrixf);
	glLoadMatrixf(m);
}
static void GLLOADER_APIENTRY self_init_glLoadMatrixx(const GLfixed* m)
{
	LOAD_FUNC1(glLoadMatrixx);
	glLoadMatrixx(m);
}
static void GLLOADER_APIENTRY self_init_glLogicOp(GLenum opcode)
{
	LOAD_FUNC1(glLogicOp);
	glLogicOp(opcode);
}
static void GLLOADER_APIENTRY self_init_glMaterialf(GLenum face, GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glMaterialf);
	glMaterialf(face, pname, param);
}
static void GLLOADER_APIENTRY self_init_glMaterialfv(GLenum face, GLenum pname, const GLfloat* params)
{
	LOAD_FUNC1(glMaterialfv);
	glMaterialfv(face, pname, params);
}
static void GLLOADER_APIENTRY self_init_glMaterialx(GLenum face, GLenum pname, GLfixed param)
{
	LOAD_FUNC1(glMaterialx);
	glMaterialx(face, pname, param);
}
static void GLLOADER_APIENTRY self_init_glMaterialxv(GLenum face, GLenum pname, const GLfixed* params)
{
	LOAD_FUNC1(glMaterialxv);
	glMaterialxv(face, pname, params);
}
static void GLLOADER_APIENTRY self_init_glMatrixMode(GLenum mode)
{
	LOAD_FUNC1(glMatrixMode);
	glMatrixMode(mode);
}
static void GLLOADER_APIENTRY self_init_glMultMatrixf(const GLfloat* m)
{
	LOAD_FUNC1(glMultMatrixf);
	glMultMatrixf(m);
}
static void GLLOADER_APIENTRY self_init_glMultMatrixx(const GLfixed* m)
{
	LOAD_FUNC1(glMultMatrixx);
	glMultMatrixx(m);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord4f(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
{
	LOAD_FUNC1(glMultiTexCoord4f);
	glMultiTexCoord4f(target, s, t, r, q);
}
static void GLLOADER_APIENTRY self_init_glMultiTexCoord4x(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q)
{
	LOAD_FUNC1(glMultiTexCoord4x);
	glMultiTexCoord4x(target, s, t, r, q);
}
static void GLLOADER_APIENTRY self_init_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz)
{
	LOAD_FUNC1(glNormal3f);
	glNormal3f(nx, ny, nz);
}
static void GLLOADER_APIENTRY self_init_glNormal3x(GLfixed nx, GLfixed ny, GLfixed nz)
{
	LOAD_FUNC1(glNormal3x);
	glNormal3x(nx, ny, nz);
}
static void GLLOADER_APIENTRY self_init_glNormalPointer(GLenum type, GLsizei stride, const GLvoid* pointer)
{
	LOAD_FUNC1(glNormalPointer);
	glNormalPointer(type, stride, pointer);
}
static void GLLOADER_APIENTRY self_init_glOrthof(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar)
{
	LOAD_FUNC1(glOrthof);
	glOrthof(left, right, bottom, top, zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glOrthox(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar)
{
	LOAD_FUNC1(glOrthox);
	glOrthox(left, right, bottom, top, zNear, zFar);
}
static void GLLOADER_APIENTRY self_init_glPixelStorei(GLenum pname, GLint param)
{
	LOAD_FUNC1(glPixelStorei);
	glPixelStorei(pname, param);
}
static void GLLOADER_APIENTRY self_init_glPointSize(GLfloat size)
{
	LOAD_FUNC1(glPointSize);
	glPointSize(size);
}
static void GLLOADER_APIENTRY self_init_glPointSizex(GLfixed size)
{
	LOAD_FUNC1(glPointSizex);
	glPointSizex(size);
}
static void GLLOADER_APIENTRY self_init_glPolygonOffset(GLfloat factor, GLfloat units)
{
	LOAD_FUNC1(glPolygonOffset);
	glPolygonOffset(factor, units);
}
static void GLLOADER_APIENTRY self_init_glPolygonOffsetx(GLfixed factor, GLfixed units)
{
	LOAD_FUNC1(glPolygonOffsetx);
	glPolygonOffsetx(factor, units);
}
static void GLLOADER_APIENTRY self_init_glPopMatrix()
{
	LOAD_FUNC1(glPopMatrix);
	glPopMatrix();
}
static void GLLOADER_APIENTRY self_init_glPushMatrix()
{
	LOAD_FUNC1(glPushMatrix);
	glPushMatrix();
}
static void GLLOADER_APIENTRY self_init_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels)
{
	LOAD_FUNC1(glReadPixels);
	glReadPixels(x, y, width, height, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glRotatef(GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
{
	LOAD_FUNC1(glRotatef);
	glRotatef(angle, x, y, z);
}
static void GLLOADER_APIENTRY self_init_glRotatex(GLfixed angle, GLfixed x, GLfixed y, GLfixed z)
{
	LOAD_FUNC1(glRotatex);
	glRotatex(angle, x, y, z);
}
static void GLLOADER_APIENTRY self_init_glSampleCoverage(GLclampf value, GLboolean invert)
{
	LOAD_FUNC1(glSampleCoverage);
	glSampleCoverage(value, invert);
}
static void GLLOADER_APIENTRY self_init_glSampleCoveragex(GLclampx value, GLboolean invert)
{
	LOAD_FUNC1(glSampleCoveragex);
	glSampleCoveragex(value, invert);
}
static void GLLOADER_APIENTRY self_init_glScalef(GLfloat x, GLfloat y, GLfloat z)
{
	LOAD_FUNC1(glScalef);
	glScalef(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glScalex(GLfixed x, GLfixed y, GLfixed z)
{
	LOAD_FUNC1(glScalex);
	glScalex(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glScissor(GLint x, GLint y, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glScissor);
	glScissor(x, y, width, height);
}
static void GLLOADER_APIENTRY self_init_glShadeModel(GLenum mode)
{
	LOAD_FUNC1(glShadeModel);
	glShadeModel(mode);
}
static void GLLOADER_APIENTRY self_init_glStencilFunc(GLenum func, GLint ref, GLuint mask)
{
	LOAD_FUNC1(glStencilFunc);
	glStencilFunc(func, ref, mask);
}
static void GLLOADER_APIENTRY self_init_glStencilMask(GLuint mask)
{
	LOAD_FUNC1(glStencilMask);
	glStencilMask(mask);
}
static void GLLOADER_APIENTRY self_init_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass)
{
	LOAD_FUNC1(glStencilOp);
	glStencilOp(fail, zfail, zpass);
}
static void GLLOADER_APIENTRY self_init_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	LOAD_FUNC1(glTexCoordPointer);
	glTexCoordPointer(size, type, stride, pointer);
}
static void GLLOADER_APIENTRY self_init_glTexEnvf(GLenum target, GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glTexEnvf);
	glTexEnvf(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexEnvfv(GLenum target, GLenum pname, const GLfloat* params)
{
	LOAD_FUNC1(glTexEnvfv);
	glTexEnvfv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexEnvx(GLenum target, GLenum pname, GLfixed param)
{
	LOAD_FUNC1(glTexEnvx);
	glTexEnvx(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexEnvxv(GLenum target, GLenum pname, const GLfixed* params)
{
	LOAD_FUNC1(glTexEnvxv);
	glTexEnvxv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	LOAD_FUNC1(glTexImage2D);
	glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glTexParameterf(GLenum target, GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glTexParameterf);
	glTexParameterf(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexParameterx(GLenum target, GLenum pname, GLfixed param)
{
	LOAD_FUNC1(glTexParameterx);
	glTexParameterx(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexSubImage2D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels)
{
	LOAD_FUNC1(glTexSubImage2D);
	glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glTranslatef(GLfloat x, GLfloat y, GLfloat z)
{
	LOAD_FUNC1(glTranslatef);
	glTranslatef(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	LOAD_FUNC1(glVertexPointer);
	glVertexPointer(size, type, stride, pointer);
}
static void GLLOADER_APIENTRY self_init_glTranslatex(GLfixed x, GLfixed y, GLfixed z)
{
	LOAD_FUNC1(glTranslatex);
	glTranslatex(x, y, z);
}
static void GLLOADER_APIENTRY self_init_glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glViewport);
	glViewport(x, y, width, height);
}

glActiveTextureFUNC glActiveTexture = self_init_glActiveTexture;
glAlphaFuncFUNC glAlphaFunc = self_init_glAlphaFunc;
glAlphaFuncxFUNC glAlphaFuncx = self_init_glAlphaFuncx;
glBindTextureFUNC glBindTexture = self_init_glBindTexture;
glBlendFuncFUNC glBlendFunc = self_init_glBlendFunc;
glClearFUNC glClear = self_init_glClear;
glClearColorFUNC glClearColor = self_init_glClearColor;
glClearColorxFUNC glClearColorx = self_init_glClearColorx;
glClearDepthfFUNC glClearDepthf = self_init_glClearDepthf;
glClearDepthxFUNC glClearDepthx = self_init_glClearDepthx;
glClearStencilFUNC glClearStencil = self_init_glClearStencil;
glClientActiveTextureFUNC glClientActiveTexture = self_init_glClientActiveTexture;
glColor4fFUNC glColor4f = self_init_glColor4f;
glColor4xFUNC glColor4x = self_init_glColor4x;
glColorMaskFUNC glColorMask = self_init_glColorMask;
glColorPointerFUNC glColorPointer = self_init_glColorPointer;
glCompressedTexImage2DFUNC glCompressedTexImage2D = self_init_glCompressedTexImage2D;
glCompressedTexSubImage2DFUNC glCompressedTexSubImage2D = self_init_glCompressedTexSubImage2D;
glCopyTexImage2DFUNC glCopyTexImage2D = self_init_glCopyTexImage2D;
glCopyTexSubImage2DFUNC glCopyTexSubImage2D = self_init_glCopyTexSubImage2D;
glCullFaceFUNC glCullFace = self_init_glCullFace;
glDeleteTexturesFUNC glDeleteTextures = self_init_glDeleteTextures;
glDepthFuncFUNC glDepthFunc = self_init_glDepthFunc;
glDepthMaskFUNC glDepthMask = self_init_glDepthMask;
glDepthRangefFUNC glDepthRangef = self_init_glDepthRangef;
glDepthRangexFUNC glDepthRangex = self_init_glDepthRangex;
glDisableFUNC glDisable = self_init_glDisable;
glDisableClientStateFUNC glDisableClientState = self_init_glDisableClientState;
glDrawArraysFUNC glDrawArrays = self_init_glDrawArrays;
glDrawElementsFUNC glDrawElements = self_init_glDrawElements;
glEnableFUNC glEnable = self_init_glEnable;
glEnableClientStateFUNC glEnableClientState = self_init_glEnableClientState;
glFinishFUNC glFinish = self_init_glFinish;
glFlushFUNC glFlush = self_init_glFlush;
glFogfFUNC glFogf = self_init_glFogf;
glFogfvFUNC glFogfv = self_init_glFogfv;
glFogxFUNC glFogx = self_init_glFogx;
glFogxvFUNC glFogxv = self_init_glFogxv;
glFrontFaceFUNC glFrontFace = self_init_glFrontFace;
glFrustumfFUNC glFrustumf = self_init_glFrustumf;
glFrustumxFUNC glFrustumx = self_init_glFrustumx;
glGenTexturesFUNC glGenTextures = self_init_glGenTextures;
glGetErrorFUNC glGetError = self_init_glGetError;
glGetIntegervFUNC glGetIntegerv = self_init_glGetIntegerv;
glGetStringFUNC glGetString = self_init_glGetString;
glHintFUNC glHint = self_init_glHint;
glLightModelfFUNC glLightModelf = self_init_glLightModelf;
glLightModelfvFUNC glLightModelfv = self_init_glLightModelfv;
glLightModelxFUNC glLightModelx = self_init_glLightModelx;
glLightModelxvFUNC glLightModelxv = self_init_glLightModelxv;
glLightfFUNC glLightf = self_init_glLightf;
glLightfvFUNC glLightfv = self_init_glLightfv;
glLightxFUNC glLightx = self_init_glLightx;
glLightxvFUNC glLightxv = self_init_glLightxv;
glLineWidthFUNC glLineWidth = self_init_glLineWidth;
glLineWidthxFUNC glLineWidthx = self_init_glLineWidthx;
glLoadIdentityFUNC glLoadIdentity = self_init_glLoadIdentity;
glLoadMatrixfFUNC glLoadMatrixf = self_init_glLoadMatrixf;
glLoadMatrixxFUNC glLoadMatrixx = self_init_glLoadMatrixx;
glLogicOpFUNC glLogicOp = self_init_glLogicOp;
glMaterialfFUNC glMaterialf = self_init_glMaterialf;
glMaterialfvFUNC glMaterialfv = self_init_glMaterialfv;
glMaterialxFUNC glMaterialx = self_init_glMaterialx;
glMaterialxvFUNC glMaterialxv = self_init_glMaterialxv;
glMatrixModeFUNC glMatrixMode = self_init_glMatrixMode;
glMultMatrixfFUNC glMultMatrixf = self_init_glMultMatrixf;
glMultMatrixxFUNC glMultMatrixx = self_init_glMultMatrixx;
glMultiTexCoord4fFUNC glMultiTexCoord4f = self_init_glMultiTexCoord4f;
glMultiTexCoord4xFUNC glMultiTexCoord4x = self_init_glMultiTexCoord4x;
glNormal3fFUNC glNormal3f = self_init_glNormal3f;
glNormal3xFUNC glNormal3x = self_init_glNormal3x;
glNormalPointerFUNC glNormalPointer = self_init_glNormalPointer;
glOrthofFUNC glOrthof = self_init_glOrthof;
glOrthoxFUNC glOrthox = self_init_glOrthox;
glPixelStoreiFUNC glPixelStorei = self_init_glPixelStorei;
glPointSizeFUNC glPointSize = self_init_glPointSize;
glPointSizexFUNC glPointSizex = self_init_glPointSizex;
glPolygonOffsetFUNC glPolygonOffset = self_init_glPolygonOffset;
glPolygonOffsetxFUNC glPolygonOffsetx = self_init_glPolygonOffsetx;
glPopMatrixFUNC glPopMatrix = self_init_glPopMatrix;
glPushMatrixFUNC glPushMatrix = self_init_glPushMatrix;
glReadPixelsFUNC glReadPixels = self_init_glReadPixels;
glRotatefFUNC glRotatef = self_init_glRotatef;
glRotatexFUNC glRotatex = self_init_glRotatex;
glSampleCoverageFUNC glSampleCoverage = self_init_glSampleCoverage;
glSampleCoveragexFUNC glSampleCoveragex = self_init_glSampleCoveragex;
glScalefFUNC glScalef = self_init_glScalef;
glScalexFUNC glScalex = self_init_glScalex;
glScissorFUNC glScissor = self_init_glScissor;
glShadeModelFUNC glShadeModel = self_init_glShadeModel;
glStencilFuncFUNC glStencilFunc = self_init_glStencilFunc;
glStencilMaskFUNC glStencilMask = self_init_glStencilMask;
glStencilOpFUNC glStencilOp = self_init_glStencilOp;
glTexCoordPointerFUNC glTexCoordPointer = self_init_glTexCoordPointer;
glTexEnvfFUNC glTexEnvf = self_init_glTexEnvf;
glTexEnvfvFUNC glTexEnvfv = self_init_glTexEnvfv;
glTexEnvxFUNC glTexEnvx = self_init_glTexEnvx;
glTexEnvxvFUNC glTexEnvxv = self_init_glTexEnvxv;
glTexImage2DFUNC glTexImage2D = self_init_glTexImage2D;
glTexParameterfFUNC glTexParameterf = self_init_glTexParameterf;
glTexParameterxFUNC glTexParameterx = self_init_glTexParameterx;
glTexSubImage2DFUNC glTexSubImage2D = self_init_glTexSubImage2D;
glTranslatefFUNC glTranslatef = self_init_glTranslatef;
glVertexPointerFUNC glVertexPointer = self_init_glVertexPointer;
glTranslatexFUNC glTranslatex = self_init_glTranslatex;
glViewportFUNC glViewport = self_init_glViewport;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_VERSION_1_1()
{
	return _GLES_VERSION_1_1;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_VERSION_1_1()
{
	glloader_init();
	return glloader_GLES_VERSION_1_1();
}
glloader_GLES_VERSION_1_1FUNC glloader_GLES_VERSION_1_1 = self_init_glloader_GLES_VERSION_1_1;

#ifdef GLES_VERSION_1_1

static void GLLOADER_APIENTRY self_init_glClipPlanef(GLenum plane, const GLfloat* equation)
{
	LOAD_FUNC1(glClipPlanef);
	glClipPlanef(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glGetClipPlanef(GLenum plane, GLfloat* equation)
{
	LOAD_FUNC1(glGetClipPlanef);
	glGetClipPlanef(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glGetFloatv(GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetFloatv);
	glGetFloatv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetLightfv(GLenum light, GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetLightfv);
	glGetLightfv(light, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetMaterialfv(GLenum face, GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetMaterialfv);
	glGetMaterialfv(face, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexEnvfv(GLenum target, GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetTexEnvfv);
	glGetTexEnvfv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetTexParameterfv);
	glGetTexParameterfv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glPointParameterf(GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glPointParameterf);
	glPointParameterf(pname, param);
}
static void GLLOADER_APIENTRY self_init_glPointParameterfv(GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glPointParameterfv);
	glPointParameterfv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexParameterfv(GLenum target, GLenum pname, const GLfloat* params)
{
	LOAD_FUNC1(glTexParameterfv);
	glTexParameterfv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glBindBuffer(GLenum target, GLuint buffer)
{
	LOAD_FUNC1(glBindBuffer);
	glBindBuffer(target, buffer);
}
static void GLLOADER_APIENTRY self_init_glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage)
{
	LOAD_FUNC1(glBufferData);
	glBufferData(target, size, data, usage);
}
static void GLLOADER_APIENTRY self_init_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data)
{
	LOAD_FUNC1(glBufferSubData);
	glBufferSubData(target, offset, size, data);
}
static void GLLOADER_APIENTRY self_init_glClipPlanex(GLenum plane, const GLfixed* equation)
{
	LOAD_FUNC1(glClipPlanex);
	glClipPlanex(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glColor4ub(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
{
	LOAD_FUNC1(glColor4ub);
	glColor4ub(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glDeleteBuffers(GLsizei n, const GLuint* buffers)
{
	LOAD_FUNC1(glDeleteBuffers);
	glDeleteBuffers(n, buffers);
}
static void GLLOADER_APIENTRY self_init_glGetBooleanv(GLenum pname, GLboolean* params)
{
	LOAD_FUNC1(glGetBooleanv);
	glGetBooleanv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetBufferParameteriv);
	glGetBufferParameteriv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetClipPlanex(GLenum plane, GLfixed* equation)
{
	LOAD_FUNC1(glGetClipPlanex);
	glGetClipPlanex(plane, equation);
}
static void GLLOADER_APIENTRY self_init_glGenBuffers(GLsizei n, GLuint* buffers)
{
	LOAD_FUNC1(glGenBuffers);
	glGenBuffers(n, buffers);
}
static void GLLOADER_APIENTRY self_init_glGetFixedv(GLenum pname, GLfixed* params)
{
	LOAD_FUNC1(glGetFixedv);
	glGetFixedv(pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetLightxv(GLenum light, GLenum pname, GLfixed* params)
{
	LOAD_FUNC1(glGetLightxv);
	glGetLightxv(light, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetMaterialxv(GLenum face, GLenum pname, GLfixed* params)
{
	LOAD_FUNC1(glGetMaterialxv);
	glGetMaterialxv(face, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexEnviv(GLenum target, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetTexEnviv);
	glGetTexEnviv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexEnvxv(GLenum target, GLenum pname, GLfixed* params)
{
	LOAD_FUNC1(glGetTexEnvxv);
	glGetTexEnvxv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameteriv(GLenum target, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetTexParameteriv);
	glGetTexParameteriv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexParameterxv(GLenum target, GLenum pname, GLfixed* params)
{
	LOAD_FUNC1(glGetTexParameterxv);
	glGetTexParameterxv(target, pname, params);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsBuffer(GLuint buffer)
{
	LOAD_FUNC1(glIsBuffer);
	return glIsBuffer(buffer);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsEnabled(GLenum cap)
{
	LOAD_FUNC1(glIsEnabled);
	return glIsEnabled(cap);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsTexture(GLuint texture)
{
	LOAD_FUNC1(glIsTexture);
	return glIsTexture(texture);
}
static void GLLOADER_APIENTRY self_init_glTexEnvi(GLenum target, GLenum pname, GLint param)
{
	LOAD_FUNC1(glTexEnvi);
	glTexEnvi(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexEnviv(GLenum target, GLenum pname, const GLint* params)
{
	LOAD_FUNC1(glTexEnviv);
	glTexEnviv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexParameteri(GLenum target, GLenum pname, GLint param)
{
	LOAD_FUNC1(glTexParameteri);
	glTexParameteri(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glTexParameteriv(GLenum target, GLenum pname, const GLint* params)
{
	LOAD_FUNC1(glTexParameteriv);
	glTexParameteriv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glTexParameterxv(GLenum target, GLenum pname, const GLfixed* params)
{
	LOAD_FUNC1(glTexParameterxv);
	glTexParameterxv(target, pname, params);
}

glClipPlanefFUNC glClipPlanef = self_init_glClipPlanef;
glGetClipPlanefFUNC glGetClipPlanef = self_init_glGetClipPlanef;
glGetFloatvFUNC glGetFloatv = self_init_glGetFloatv;
glGetLightfvFUNC glGetLightfv = self_init_glGetLightfv;
glGetMaterialfvFUNC glGetMaterialfv = self_init_glGetMaterialfv;
glGetTexEnvfvFUNC glGetTexEnvfv = self_init_glGetTexEnvfv;
glGetTexParameterfvFUNC glGetTexParameterfv = self_init_glGetTexParameterfv;
glPointParameterfFUNC glPointParameterf = self_init_glPointParameterf;
glPointParameterfvFUNC glPointParameterfv = self_init_glPointParameterfv;
glTexParameterfvFUNC glTexParameterfv = self_init_glTexParameterfv;
glBindBufferFUNC glBindBuffer = self_init_glBindBuffer;
glBufferDataFUNC glBufferData = self_init_glBufferData;
glBufferSubDataFUNC glBufferSubData = self_init_glBufferSubData;
glClipPlanexFUNC glClipPlanex = self_init_glClipPlanex;
glColor4ubFUNC glColor4ub = self_init_glColor4ub;
glDeleteBuffersFUNC glDeleteBuffers = self_init_glDeleteBuffers;
glGetBooleanvFUNC glGetBooleanv = self_init_glGetBooleanv;
glGetBufferParameterivFUNC glGetBufferParameteriv = self_init_glGetBufferParameteriv;
glGetClipPlanexFUNC glGetClipPlanex = self_init_glGetClipPlanex;
glGenBuffersFUNC glGenBuffers = self_init_glGenBuffers;
glGetFixedvFUNC glGetFixedv = self_init_glGetFixedv;
glGetLightxvFUNC glGetLightxv = self_init_glGetLightxv;
glGetMaterialxvFUNC glGetMaterialxv = self_init_glGetMaterialxv;
glGetTexEnvivFUNC glGetTexEnviv = self_init_glGetTexEnviv;
glGetTexEnvxvFUNC glGetTexEnvxv = self_init_glGetTexEnvxv;
glGetTexParameterivFUNC glGetTexParameteriv = self_init_glGetTexParameteriv;
glGetTexParameterxvFUNC glGetTexParameterxv = self_init_glGetTexParameterxv;
glIsBufferFUNC glIsBuffer = self_init_glIsBuffer;
glIsEnabledFUNC glIsEnabled = self_init_glIsEnabled;
glIsTextureFUNC glIsTexture = self_init_glIsTexture;
glTexEnviFUNC glTexEnvi = self_init_glTexEnvi;
glTexEnvivFUNC glTexEnviv = self_init_glTexEnviv;
glTexParameteriFUNC glTexParameteri = self_init_glTexParameteri;
glTexParameterivFUNC glTexParameteriv = self_init_glTexParameteriv;
glTexParameterxvFUNC glTexParameterxv = self_init_glTexParameterxv;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_VERSION_2_0()
{
	return _GLES_VERSION_2_0;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_VERSION_2_0()
{
	glloader_init();
	return glloader_GLES_VERSION_2_0();
}
glloader_GLES_VERSION_2_0FUNC glloader_GLES_VERSION_2_0 = self_init_glloader_GLES_VERSION_2_0;

#ifdef GLES_VERSION_2_0

static void GLLOADER_APIENTRY self_init_glAttachShader(GLuint program, GLuint shader)
{
	LOAD_FUNC1(glAttachShader);
	glAttachShader(program, shader);
}
static void GLLOADER_APIENTRY self_init_glBindAttribLocation(GLuint program, GLuint index, const GLchar* name)
{
	LOAD_FUNC1(glBindAttribLocation);
	glBindAttribLocation(program, index, name);
}
static void GLLOADER_APIENTRY self_init_glBindFramebuffer(GLenum target, GLuint framebuffer)
{
	LOAD_FUNC1(glBindFramebuffer);
	glBindFramebuffer(target, framebuffer);
}
static void GLLOADER_APIENTRY self_init_glBindRenderbuffer(GLenum target, GLuint renderbuffer)
{
	LOAD_FUNC1(glBindRenderbuffer);
	glBindRenderbuffer(target, renderbuffer);
}
static void GLLOADER_APIENTRY self_init_glBlendColor(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha)
{
	LOAD_FUNC1(glBlendColor);
	glBlendColor(red, green, blue, alpha);
}
static void GLLOADER_APIENTRY self_init_glBlendEquation(GLenum mode)
{
	LOAD_FUNC1(glBlendEquation);
	glBlendEquation(mode);
}
static void GLLOADER_APIENTRY self_init_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha)
{
	LOAD_FUNC1(glBlendEquationSeparate);
	glBlendEquationSeparate(modeRGB, modeAlpha);
}
static void GLLOADER_APIENTRY self_init_glBlendFuncSeparate(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha)
{
	LOAD_FUNC1(glBlendFuncSeparate);
	glBlendFuncSeparate(sfactorRGB, dfactorRGB, sfactorAlpha, dfactorAlpha);
}
static GLenum GLLOADER_APIENTRY self_init_glCheckFramebufferStatus(GLenum target)
{
	LOAD_FUNC1(glCheckFramebufferStatus);
	return glCheckFramebufferStatus(target);
}
static void GLLOADER_APIENTRY self_init_glCompileShader(GLuint shader)
{
	LOAD_FUNC1(glCompileShader);
	glCompileShader(shader);
}
static GLuint GLLOADER_APIENTRY self_init_glCreateProgram()
{
	LOAD_FUNC1(glCreateProgram);
	return glCreateProgram();
}
static GLuint GLLOADER_APIENTRY self_init_glCreateShader(GLenum type)
{
	LOAD_FUNC1(glCreateShader);
	return glCreateShader(type);
}
static void GLLOADER_APIENTRY self_init_glDeleteFramebuffers(GLsizei n, const GLuint* framebuffers)
{
	LOAD_FUNC1(glDeleteFramebuffers);
	glDeleteFramebuffers(n, framebuffers);
}
static void GLLOADER_APIENTRY self_init_glDeleteProgram(GLuint program)
{
	LOAD_FUNC1(glDeleteProgram);
	glDeleteProgram(program);
}
static void GLLOADER_APIENTRY self_init_glDeleteRenderbuffers(GLsizei n, const GLuint* renderbuffers)
{
	LOAD_FUNC1(glDeleteRenderbuffers);
	glDeleteRenderbuffers(n, renderbuffers);
}
static void GLLOADER_APIENTRY self_init_glDeleteShader(GLuint shader)
{
	LOAD_FUNC1(glDeleteShader);
	glDeleteShader(shader);
}
static void GLLOADER_APIENTRY self_init_glDetachShader(GLuint program, GLuint shader)
{
	LOAD_FUNC1(glDetachShader);
	glDetachShader(program, shader);
}
static void GLLOADER_APIENTRY self_init_glDisableVertexAttribArray(GLuint index)
{
	LOAD_FUNC1(glDisableVertexAttribArray);
	glDisableVertexAttribArray(index);
}
static void GLLOADER_APIENTRY self_init_glEnableVertexAttribArray(GLuint index)
{
	LOAD_FUNC1(glEnableVertexAttribArray);
	glEnableVertexAttribArray(index);
}
static void GLLOADER_APIENTRY self_init_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer)
{
	LOAD_FUNC1(glFramebufferRenderbuffer);
	glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}
static void GLLOADER_APIENTRY self_init_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level)
{
	LOAD_FUNC1(glFramebufferTexture2D);
	glFramebufferTexture2D(target, attachment, textarget, texture, level);
}
static void GLLOADER_APIENTRY self_init_glGenerateMipmap(GLenum target)
{
	LOAD_FUNC1(glGenerateMipmap);
	glGenerateMipmap(target);
}
static void GLLOADER_APIENTRY self_init_glGenFramebuffers(GLsizei n, GLuint* framebuffers)
{
	LOAD_FUNC1(glGenFramebuffers);
	glGenFramebuffers(n, framebuffers);
}
static void GLLOADER_APIENTRY self_init_glGenRenderbuffers(GLsizei n, GLuint* renderbuffers)
{
	LOAD_FUNC1(glGenRenderbuffers);
	glGenRenderbuffers(n, renderbuffers);
}
static void GLLOADER_APIENTRY self_init_glGetActiveAttrib(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
{
	LOAD_FUNC1(glGetActiveAttrib);
	glGetActiveAttrib(program, index, bufSize, length, size, type, name);
}
static void GLLOADER_APIENTRY self_init_glGetActiveUniform(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name)
{
	LOAD_FUNC1(glGetActiveUniform);
	glGetActiveUniform(program, index, bufSize, length, size, type, name);
}
static void GLLOADER_APIENTRY self_init_glGetAttachedShaders(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shader)
{
	LOAD_FUNC1(glGetAttachedShaders);
	glGetAttachedShaders(program, maxCount, count, shader);
}
static GLint GLLOADER_APIENTRY self_init_glGetAttribLocation(GLuint program, const GLchar* name)
{
	LOAD_FUNC1(glGetAttribLocation);
	return glGetAttribLocation(program, name);
}
static void GLLOADER_APIENTRY self_init_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetFramebufferAttachmentParameteriv);
	glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetProgramiv(GLuint program, GLenum pname, const GLint* params)
{
	LOAD_FUNC1(glGetProgramiv);
	glGetProgramiv(program, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
{
	LOAD_FUNC1(glGetProgramInfoLog);
	glGetProgramInfoLog(program, bufSize, length, infoLog);
}
static void GLLOADER_APIENTRY self_init_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetRenderbufferParameteriv);
	glGetRenderbufferParameteriv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetShaderiv(GLuint shader, GLenum pname, const GLint* params)
{
	LOAD_FUNC1(glGetShaderiv);
	glGetShaderiv(shader, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
{
	LOAD_FUNC1(glGetShaderInfoLog);
	glGetShaderInfoLog(shader, bufSize, length, infoLog);
}
static void GLLOADER_APIENTRY self_init_glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision)
{
	LOAD_FUNC1(glGetShaderPrecisionFormat);
	glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}
static void GLLOADER_APIENTRY self_init_glGetShaderSource(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source)
{
	LOAD_FUNC1(glGetShaderSource);
	glGetShaderSource(shader, bufSize, length, source);
}
static void GLLOADER_APIENTRY self_init_glGetUniformfv(GLuint program, GLint location, GLfloat* params)
{
	LOAD_FUNC1(glGetUniformfv);
	glGetUniformfv(program, location, params);
}
static void GLLOADER_APIENTRY self_init_glGetUniformiv(GLuint program, GLint location, GLint* params)
{
	LOAD_FUNC1(glGetUniformiv);
	glGetUniformiv(program, location, params);
}
static GLint GLLOADER_APIENTRY self_init_glGetUniformLocation(GLuint program, const GLchar* name)
{
	LOAD_FUNC1(glGetUniformLocation);
	return glGetUniformLocation(program, name);
}
static void GLLOADER_APIENTRY self_init_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetVertexAttribfv);
	glGetVertexAttribfv(index, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetVertexAttribiv);
	glGetVertexAttribiv(index, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer)
{
	LOAD_FUNC1(glGetVertexAttribPointerv);
	glGetVertexAttribPointerv(index, pname, pointer);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsFramebuffer(GLuint framebuffer)
{
	LOAD_FUNC1(glIsFramebuffer);
	return glIsFramebuffer(framebuffer);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsProgram(GLuint program)
{
	LOAD_FUNC1(glIsProgram);
	return glIsProgram(program);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsRenderbuffer(GLuint renderbuffer)
{
	LOAD_FUNC1(glIsRenderbuffer);
	return glIsRenderbuffer(renderbuffer);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsShader(GLuint shader)
{
	LOAD_FUNC1(glIsShader);
	return glIsShader(shader);
}
static void GLLOADER_APIENTRY self_init_glLinkProgram(GLuint program)
{
	LOAD_FUNC1(glLinkProgram);
	glLinkProgram(program);
}
static void GLLOADER_APIENTRY self_init_glReleaseShaderCompiler()
{
	LOAD_FUNC1(glReleaseShaderCompiler);
	glReleaseShaderCompiler();
}
static void GLLOADER_APIENTRY self_init_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glRenderbufferStorage);
	glRenderbufferStorage(target, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glShaderBinary(GLsizei n, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length)
{
	LOAD_FUNC1(glShaderBinary);
	glShaderBinary(n, shaders, binaryformat, binary, length);
}
static void GLLOADER_APIENTRY self_init_glShaderSource(GLuint shader, GLsizei count, const GLchar** string, const GLint* length)
{
	LOAD_FUNC1(glShaderSource);
	glShaderSource(shader, count, string, length);
}
static void GLLOADER_APIENTRY self_init_glStencilFuncSeparate(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask)
{
	LOAD_FUNC1(glStencilFuncSeparate);
	glStencilFuncSeparate(frontfunc, backfunc, ref, mask);
}
static void GLLOADER_APIENTRY self_init_glStencilMaskSeparate(GLenum face, GLuint mask)
{
	LOAD_FUNC1(glStencilMaskSeparate);
	glStencilMaskSeparate(face, mask);
}
static void GLLOADER_APIENTRY self_init_glStencilOpSeparate(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass)
{
	LOAD_FUNC1(glStencilOpSeparate);
	glStencilOpSeparate(face, sfail, dpfail, dppass);
}
static void GLLOADER_APIENTRY self_init_glUniform1f(GLint location, GLfloat v0)
{
	LOAD_FUNC1(glUniform1f);
	glUniform1f(location, v0);
}
static void GLLOADER_APIENTRY self_init_glUniform2f(GLint location, GLfloat v0, GLfloat v1)
{
	LOAD_FUNC1(glUniform2f);
	glUniform2f(location, v0, v1);
}
static void GLLOADER_APIENTRY self_init_glUniform3f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	LOAD_FUNC1(glUniform3f);
	glUniform3f(location, v0, v1, v2);
}
static void GLLOADER_APIENTRY self_init_glUniform4f(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	LOAD_FUNC1(glUniform4f);
	glUniform4f(location, v0, v1, v2, v3);
}
static void GLLOADER_APIENTRY self_init_glUniform1i(GLint location, GLint v0)
{
	LOAD_FUNC1(glUniform1i);
	glUniform1i(location, v0);
}
static void GLLOADER_APIENTRY self_init_glUniform2i(GLint location, GLint v0, GLint v1)
{
	LOAD_FUNC1(glUniform2i);
	glUniform2i(location, v0, v1);
}
static void GLLOADER_APIENTRY self_init_glUniform3i(GLint location, GLint v0, GLint v1, GLint v2)
{
	LOAD_FUNC1(glUniform3i);
	glUniform3i(location, v0, v1, v2);
}
static void GLLOADER_APIENTRY self_init_glUniform4i(GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	LOAD_FUNC1(glUniform4i);
	glUniform4i(location, v0, v1, v2, v3);
}
static void GLLOADER_APIENTRY self_init_glUniform1fv(GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glUniform1fv);
	glUniform1fv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform2fv(GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glUniform2fv);
	glUniform2fv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform3fv(GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glUniform3fv);
	glUniform3fv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform4fv(GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glUniform4fv);
	glUniform4fv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform1iv(GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glUniform1iv);
	glUniform1iv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform2iv(GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glUniform2iv);
	glUniform2iv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform3iv(GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glUniform3iv);
	glUniform3iv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform4iv(GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glUniform4iv);
	glUniform4iv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix2fv);
	glUniformMatrix2fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix3fv);
	glUniformMatrix3fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix4fv);
	glUniformMatrix4fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUseProgram(GLuint program)
{
	LOAD_FUNC1(glUseProgram);
	glUseProgram(program);
}
static void GLLOADER_APIENTRY self_init_glValidateProgram(GLuint program)
{
	LOAD_FUNC1(glValidateProgram);
	glValidateProgram(program);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib1f(GLuint index, GLfloat x)
{
	LOAD_FUNC1(glVertexAttrib1f);
	glVertexAttrib1f(index, x);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib1fv(GLuint index, const GLfloat* v)
{
	LOAD_FUNC1(glVertexAttrib1fv);
	glVertexAttrib1fv(index, v);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib2f(GLuint index, GLfloat x, GLfloat y)
{
	LOAD_FUNC1(glVertexAttrib2f);
	glVertexAttrib2f(index, x, y);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib2fv(GLuint index, const GLfloat* v)
{
	LOAD_FUNC1(glVertexAttrib2fv);
	glVertexAttrib2fv(index, v);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib3f(GLuint index, GLfloat x, GLfloat y, GLfloat z)
{
	LOAD_FUNC1(glVertexAttrib3f);
	glVertexAttrib3f(index, x, y, z);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib3fv(GLuint index, const GLfloat* v)
{
	LOAD_FUNC1(glVertexAttrib3fv);
	glVertexAttrib3fv(index, v);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib4f(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
{
	LOAD_FUNC1(glVertexAttrib4f);
	glVertexAttrib4f(index, x, y, z, w);
}
static void GLLOADER_APIENTRY self_init_glVertexAttrib4fv(GLuint index, const GLfloat* v)
{
	LOAD_FUNC1(glVertexAttrib4fv);
	glVertexAttrib4fv(index, v);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer)
{
	LOAD_FUNC1(glVertexAttribPointer);
	glVertexAttribPointer(index, size, type, normalized, stride, pointer);
}

glAttachShaderFUNC glAttachShader = self_init_glAttachShader;
glBindAttribLocationFUNC glBindAttribLocation = self_init_glBindAttribLocation;
glBindFramebufferFUNC glBindFramebuffer = self_init_glBindFramebuffer;
glBindRenderbufferFUNC glBindRenderbuffer = self_init_glBindRenderbuffer;
glBlendColorFUNC glBlendColor = self_init_glBlendColor;
glBlendEquationFUNC glBlendEquation = self_init_glBlendEquation;
glBlendEquationSeparateFUNC glBlendEquationSeparate = self_init_glBlendEquationSeparate;
glBlendFuncSeparateFUNC glBlendFuncSeparate = self_init_glBlendFuncSeparate;
glCheckFramebufferStatusFUNC glCheckFramebufferStatus = self_init_glCheckFramebufferStatus;
glCompileShaderFUNC glCompileShader = self_init_glCompileShader;
glCreateProgramFUNC glCreateProgram = self_init_glCreateProgram;
glCreateShaderFUNC glCreateShader = self_init_glCreateShader;
glDeleteFramebuffersFUNC glDeleteFramebuffers = self_init_glDeleteFramebuffers;
glDeleteProgramFUNC glDeleteProgram = self_init_glDeleteProgram;
glDeleteRenderbuffersFUNC glDeleteRenderbuffers = self_init_glDeleteRenderbuffers;
glDeleteShaderFUNC glDeleteShader = self_init_glDeleteShader;
glDetachShaderFUNC glDetachShader = self_init_glDetachShader;
glDisableVertexAttribArrayFUNC glDisableVertexAttribArray = self_init_glDisableVertexAttribArray;
glEnableVertexAttribArrayFUNC glEnableVertexAttribArray = self_init_glEnableVertexAttribArray;
glFramebufferRenderbufferFUNC glFramebufferRenderbuffer = self_init_glFramebufferRenderbuffer;
glFramebufferTexture2DFUNC glFramebufferTexture2D = self_init_glFramebufferTexture2D;
glGenerateMipmapFUNC glGenerateMipmap = self_init_glGenerateMipmap;
glGenFramebuffersFUNC glGenFramebuffers = self_init_glGenFramebuffers;
glGenRenderbuffersFUNC glGenRenderbuffers = self_init_glGenRenderbuffers;
glGetActiveAttribFUNC glGetActiveAttrib = self_init_glGetActiveAttrib;
glGetActiveUniformFUNC glGetActiveUniform = self_init_glGetActiveUniform;
glGetAttachedShadersFUNC glGetAttachedShaders = self_init_glGetAttachedShaders;
glGetAttribLocationFUNC glGetAttribLocation = self_init_glGetAttribLocation;
glGetFramebufferAttachmentParameterivFUNC glGetFramebufferAttachmentParameteriv = self_init_glGetFramebufferAttachmentParameteriv;
glGetProgramivFUNC glGetProgramiv = self_init_glGetProgramiv;
glGetProgramInfoLogFUNC glGetProgramInfoLog = self_init_glGetProgramInfoLog;
glGetRenderbufferParameterivFUNC glGetRenderbufferParameteriv = self_init_glGetRenderbufferParameteriv;
glGetShaderivFUNC glGetShaderiv = self_init_glGetShaderiv;
glGetShaderInfoLogFUNC glGetShaderInfoLog = self_init_glGetShaderInfoLog;
glGetShaderPrecisionFormatFUNC glGetShaderPrecisionFormat = self_init_glGetShaderPrecisionFormat;
glGetShaderSourceFUNC glGetShaderSource = self_init_glGetShaderSource;
glGetUniformfvFUNC glGetUniformfv = self_init_glGetUniformfv;
glGetUniformivFUNC glGetUniformiv = self_init_glGetUniformiv;
glGetUniformLocationFUNC glGetUniformLocation = self_init_glGetUniformLocation;
glGetVertexAttribfvFUNC glGetVertexAttribfv = self_init_glGetVertexAttribfv;
glGetVertexAttribivFUNC glGetVertexAttribiv = self_init_glGetVertexAttribiv;
glGetVertexAttribPointervFUNC glGetVertexAttribPointerv = self_init_glGetVertexAttribPointerv;
glIsFramebufferFUNC glIsFramebuffer = self_init_glIsFramebuffer;
glIsProgramFUNC glIsProgram = self_init_glIsProgram;
glIsRenderbufferFUNC glIsRenderbuffer = self_init_glIsRenderbuffer;
glIsShaderFUNC glIsShader = self_init_glIsShader;
glLinkProgramFUNC glLinkProgram = self_init_glLinkProgram;
glReleaseShaderCompilerFUNC glReleaseShaderCompiler = self_init_glReleaseShaderCompiler;
glRenderbufferStorageFUNC glRenderbufferStorage = self_init_glRenderbufferStorage;
glShaderBinaryFUNC glShaderBinary = self_init_glShaderBinary;
glShaderSourceFUNC glShaderSource = self_init_glShaderSource;
glStencilFuncSeparateFUNC glStencilFuncSeparate = self_init_glStencilFuncSeparate;
glStencilMaskSeparateFUNC glStencilMaskSeparate = self_init_glStencilMaskSeparate;
glStencilOpSeparateFUNC glStencilOpSeparate = self_init_glStencilOpSeparate;
glUniform1fFUNC glUniform1f = self_init_glUniform1f;
glUniform2fFUNC glUniform2f = self_init_glUniform2f;
glUniform3fFUNC glUniform3f = self_init_glUniform3f;
glUniform4fFUNC glUniform4f = self_init_glUniform4f;
glUniform1iFUNC glUniform1i = self_init_glUniform1i;
glUniform2iFUNC glUniform2i = self_init_glUniform2i;
glUniform3iFUNC glUniform3i = self_init_glUniform3i;
glUniform4iFUNC glUniform4i = self_init_glUniform4i;
glUniform1fvFUNC glUniform1fv = self_init_glUniform1fv;
glUniform2fvFUNC glUniform2fv = self_init_glUniform2fv;
glUniform3fvFUNC glUniform3fv = self_init_glUniform3fv;
glUniform4fvFUNC glUniform4fv = self_init_glUniform4fv;
glUniform1ivFUNC glUniform1iv = self_init_glUniform1iv;
glUniform2ivFUNC glUniform2iv = self_init_glUniform2iv;
glUniform3ivFUNC glUniform3iv = self_init_glUniform3iv;
glUniform4ivFUNC glUniform4iv = self_init_glUniform4iv;
glUniformMatrix2fvFUNC glUniformMatrix2fv = self_init_glUniformMatrix2fv;
glUniformMatrix3fvFUNC glUniformMatrix3fv = self_init_glUniformMatrix3fv;
glUniformMatrix4fvFUNC glUniformMatrix4fv = self_init_glUniformMatrix4fv;
glUseProgramFUNC glUseProgram = self_init_glUseProgram;
glValidateProgramFUNC glValidateProgram = self_init_glValidateProgram;
glVertexAttrib1fFUNC glVertexAttrib1f = self_init_glVertexAttrib1f;
glVertexAttrib1fvFUNC glVertexAttrib1fv = self_init_glVertexAttrib1fv;
glVertexAttrib2fFUNC glVertexAttrib2f = self_init_glVertexAttrib2f;
glVertexAttrib2fvFUNC glVertexAttrib2fv = self_init_glVertexAttrib2fv;
glVertexAttrib3fFUNC glVertexAttrib3f = self_init_glVertexAttrib3f;
glVertexAttrib3fvFUNC glVertexAttrib3fv = self_init_glVertexAttrib3fv;
glVertexAttrib4fFUNC glVertexAttrib4f = self_init_glVertexAttrib4f;
glVertexAttrib4fvFUNC glVertexAttrib4fv = self_init_glVertexAttrib4fv;
glVertexAttribPointerFUNC glVertexAttribPointer = self_init_glVertexAttribPointer;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_VERSION_3_0()
{
	return _GLES_VERSION_3_0;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_VERSION_3_0()
{
	glloader_init();
	return glloader_GLES_VERSION_3_0();
}
glloader_GLES_VERSION_3_0FUNC glloader_GLES_VERSION_3_0 = self_init_glloader_GLES_VERSION_3_0;

#ifdef GLES_VERSION_3_0

static void GLLOADER_APIENTRY self_init_glReadBuffer(GLenum mode)
{
	LOAD_FUNC1(glReadBuffer);
	glReadBuffer(mode);
}
static void GLLOADER_APIENTRY self_init_glDrawRangeElements(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices)
{
	LOAD_FUNC1(glDrawRangeElements);
	glDrawRangeElements(mode, start, end, count, type, indices);
}
static void GLLOADER_APIENTRY self_init_glTexImage3D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels)
{
	LOAD_FUNC1(glTexImage3D);
	glTexImage3D(target, level, internalformat, width, height, depth, border, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels)
{
	LOAD_FUNC1(glTexSubImage3D);
	glTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, type, pixels);
}
static void GLLOADER_APIENTRY self_init_glCopyTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glCopyTexSubImage3D);
	glCopyTexSubImage3D(target, level, xoffset, yoffset, zoffset, x, y, width, height);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexImage3D(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data)
{
	LOAD_FUNC1(glCompressedTexImage3D);
	glCompressedTexImage3D(target, level, internalFormat, width, height, depth, border, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glCompressedTexSubImage3D(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data)
{
	LOAD_FUNC1(glCompressedTexSubImage3D);
	glCompressedTexSubImage3D(target, level, xoffset, yoffset, zoffset, width, height, depth, format, imageSize, data);
}
static void GLLOADER_APIENTRY self_init_glGenQueries(GLsizei n, GLuint* ids)
{
	LOAD_FUNC1(glGenQueries);
	glGenQueries(n, ids);
}
static void GLLOADER_APIENTRY self_init_glDeleteQueries(GLsizei n, const GLuint* ids)
{
	LOAD_FUNC1(glDeleteQueries);
	glDeleteQueries(n, ids);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsQuery(GLuint id)
{
	LOAD_FUNC1(glIsQuery);
	return glIsQuery(id);
}
static void GLLOADER_APIENTRY self_init_glBeginQuery(GLenum target, GLuint id)
{
	LOAD_FUNC1(glBeginQuery);
	glBeginQuery(target, id);
}
static void GLLOADER_APIENTRY self_init_glEndQuery(GLenum target)
{
	LOAD_FUNC1(glEndQuery);
	glEndQuery(target);
}
static void GLLOADER_APIENTRY self_init_glGetQueryiv(GLenum target, GLenum pname, GLint* param)
{
	LOAD_FUNC1(glGetQueryiv);
	glGetQueryiv(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glGetQueryObjectuiv(GLuint id, GLenum pname, GLuint* params)
{
	LOAD_FUNC1(glGetQueryObjectuiv);
	glGetQueryObjectuiv(id, pname, params);
}
static GLboolean GLLOADER_APIENTRY self_init_glUnmapBuffer(GLenum target)
{
	LOAD_FUNC1(glUnmapBuffer);
	return glUnmapBuffer(target);
}
static void GLLOADER_APIENTRY self_init_glGetBufferPointerv(GLenum target, GLenum pname, void** params)
{
	LOAD_FUNC1(glGetBufferPointerv);
	glGetBufferPointerv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glDrawBuffers(GLsizei n, const GLenum* bufs)
{
	LOAD_FUNC1(glDrawBuffers);
	glDrawBuffers(n, bufs);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix2x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix2x3fv);
	glUniformMatrix2x3fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix3x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix3x2fv);
	glUniformMatrix3x2fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix2x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix2x4fv);
	glUniformMatrix2x4fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix4x2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix4x2fv);
	glUniformMatrix4x2fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix3x4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix3x4fv);
	glUniformMatrix3x4fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glUniformMatrix4x3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glUniformMatrix4x3fv);
	glUniformMatrix4x3fv(location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glBlitFramebuffer(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter)
{
	LOAD_FUNC1(glBlitFramebuffer);
	glBlitFramebuffer(srcX0, srcY0, srcX1, srcY1, dstX0, dstY0, dstX1, dstY1, mask, filter);
}
static void GLLOADER_APIENTRY self_init_glRenderbufferStorageMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glRenderbufferStorageMultisample);
	glRenderbufferStorageMultisample(target, samples, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glFramebufferTextureLayer(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer)
{
	LOAD_FUNC1(glFramebufferTextureLayer);
	glFramebufferTextureLayer(target, attachment, texture, level, layer);
}
static void* GLLOADER_APIENTRY self_init_glMapBufferRange(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access)
{
	LOAD_FUNC1(glMapBufferRange);
	return glMapBufferRange(target, offset, length, access);
}
static void GLLOADER_APIENTRY self_init_glFlushMappedBufferRange(GLenum target, GLintptr offset, GLsizeiptr length)
{
	LOAD_FUNC1(glFlushMappedBufferRange);
	glFlushMappedBufferRange(target, offset, length);
}
static void GLLOADER_APIENTRY self_init_glBindVertexArray(GLuint array)
{
	LOAD_FUNC1(glBindVertexArray);
	glBindVertexArray(array);
}
static void GLLOADER_APIENTRY self_init_glDeleteVertexArrays(GLsizei n, const GLuint* arrays)
{
	LOAD_FUNC1(glDeleteVertexArrays);
	glDeleteVertexArrays(n, arrays);
}
static void GLLOADER_APIENTRY self_init_glGenVertexArrays(GLsizei n, GLuint* arrays)
{
	LOAD_FUNC1(glGenVertexArrays);
	glGenVertexArrays(n, arrays);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsVertexArray(GLuint array)
{
	LOAD_FUNC1(glIsVertexArray);
	return glIsVertexArray(array);
}
static void GLLOADER_APIENTRY self_init_glGetIntegeri_v(GLenum target, GLuint index, GLint* data)
{
	LOAD_FUNC1(glGetIntegeri_v);
	glGetIntegeri_v(target, index, data);
}
static void GLLOADER_APIENTRY self_init_glBeginTransformFeedback(GLenum primitiveMode)
{
	LOAD_FUNC1(glBeginTransformFeedback);
	glBeginTransformFeedback(primitiveMode);
}
static void GLLOADER_APIENTRY self_init_glEndTransformFeedback()
{
	LOAD_FUNC1(glEndTransformFeedback);
	glEndTransformFeedback();
}
static void GLLOADER_APIENTRY self_init_glBindBufferRange(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size)
{
	LOAD_FUNC1(glBindBufferRange);
	glBindBufferRange(target, index, buffer, offset, size);
}
static void GLLOADER_APIENTRY self_init_glBindBufferBase(GLenum target, GLuint index, GLuint buffer)
{
	LOAD_FUNC1(glBindBufferBase);
	glBindBufferBase(target, index, buffer);
}
static void GLLOADER_APIENTRY self_init_glTransformFeedbackVaryings(GLuint program, GLsizei count, const GLchar** varyings, GLenum bufferMode)
{
	LOAD_FUNC1(glTransformFeedbackVaryings);
	glTransformFeedbackVaryings(program, count, varyings, bufferMode);
}
static void GLLOADER_APIENTRY self_init_glGetTransformFeedbackVarying(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name)
{
	LOAD_FUNC1(glGetTransformFeedbackVarying);
	glGetTransformFeedbackVarying(program, index, bufSize, length, size, type, name);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribIPointer(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer)
{
	LOAD_FUNC1(glVertexAttribIPointer);
	glVertexAttribIPointer(index, size, type, stride, pointer);
}
static void GLLOADER_APIENTRY self_init_glGetVertexAttribIiv(GLuint index, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetVertexAttribIiv);
	glGetVertexAttribIiv(index, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetVertexAttribIuiv(GLuint index, GLenum pname, GLuint* params)
{
	LOAD_FUNC1(glGetVertexAttribIuiv);
	glGetVertexAttribIuiv(index, pname, params);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribI4i(GLuint index, GLint x, GLint y, GLint z, GLint w)
{
	LOAD_FUNC1(glVertexAttribI4i);
	glVertexAttribI4i(index, x, y, z, w);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribI4ui(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w)
{
	LOAD_FUNC1(glVertexAttribI4ui);
	glVertexAttribI4ui(index, x, y, z, w);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribI4iv(GLuint index, const GLint* v)
{
	LOAD_FUNC1(glVertexAttribI4iv);
	glVertexAttribI4iv(index, v);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribI4uiv(GLuint index, const GLuint* v)
{
	LOAD_FUNC1(glVertexAttribI4uiv);
	glVertexAttribI4uiv(index, v);
}
static void GLLOADER_APIENTRY self_init_glGetUniformuiv(GLuint program, GLint location, GLuint* params)
{
	LOAD_FUNC1(glGetUniformuiv);
	glGetUniformuiv(program, location, params);
}
static GLint GLLOADER_APIENTRY self_init_glGetFragDataLocation(GLuint program, const GLchar* name)
{
	LOAD_FUNC1(glGetFragDataLocation);
	return glGetFragDataLocation(program, name);
}
static void GLLOADER_APIENTRY self_init_glUniform1ui(GLint location, GLuint v0)
{
	LOAD_FUNC1(glUniform1ui);
	glUniform1ui(location, v0);
}
static void GLLOADER_APIENTRY self_init_glUniform2ui(GLint location, GLuint v0, GLuint v1)
{
	LOAD_FUNC1(glUniform2ui);
	glUniform2ui(location, v0, v1);
}
static void GLLOADER_APIENTRY self_init_glUniform3ui(GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	LOAD_FUNC1(glUniform3ui);
	glUniform3ui(location, v0, v1, v2);
}
static void GLLOADER_APIENTRY self_init_glUniform4ui(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	LOAD_FUNC1(glUniform4ui);
	glUniform4ui(location, v0, v1, v2, v3);
}
static void GLLOADER_APIENTRY self_init_glUniform1uiv(GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glUniform1uiv);
	glUniform1uiv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform2uiv(GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glUniform2uiv);
	glUniform2uiv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform3uiv(GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glUniform3uiv);
	glUniform3uiv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glUniform4uiv(GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glUniform4uiv);
	glUniform4uiv(location, count, value);
}
static void GLLOADER_APIENTRY self_init_glClearBufferiv(GLenum buffer, GLint drawbuffer, const GLint* value)
{
	LOAD_FUNC1(glClearBufferiv);
	glClearBufferiv(buffer, drawbuffer, value);
}
static void GLLOADER_APIENTRY self_init_glClearBufferuiv(GLenum buffer, GLint drawbuffer, const GLuint* value)
{
	LOAD_FUNC1(glClearBufferuiv);
	glClearBufferuiv(buffer, drawbuffer, value);
}
static void GLLOADER_APIENTRY self_init_glClearBufferfv(GLenum buffer, GLint drawbuffer, const GLfloat* value)
{
	LOAD_FUNC1(glClearBufferfv);
	glClearBufferfv(buffer, drawbuffer, value);
}
static void GLLOADER_APIENTRY self_init_glClearBufferfi(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil)
{
	LOAD_FUNC1(glClearBufferfi);
	glClearBufferfi(buffer, drawbuffer, depth, stencil);
}
static const GLubyte* GLLOADER_APIENTRY self_init_glGetStringi(GLenum name, GLuint index)
{
	LOAD_FUNC1(glGetStringi);
	return glGetStringi(name, index);
}
static void GLLOADER_APIENTRY self_init_glCopyBufferSubData(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size)
{
	LOAD_FUNC1(glCopyBufferSubData);
	glCopyBufferSubData(readTarget, writeTarget, readOffset, writeOffset, size);
}
static void GLLOADER_APIENTRY self_init_glGetUniformIndices(GLuint program, GLsizei uniformCount, const GLchar** uniformNames, GLuint* uniformIndices)
{
	LOAD_FUNC1(glGetUniformIndices);
	glGetUniformIndices(program, uniformCount, uniformNames, uniformIndices);
}
static void GLLOADER_APIENTRY self_init_glGetActiveUniformsiv(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetActiveUniformsiv);
	glGetActiveUniformsiv(program, uniformCount, uniformIndices, pname, params);
}
static GLuint GLLOADER_APIENTRY self_init_glGetUniformBlockIndex(GLuint program, const GLchar* uniformBlockName)
{
	LOAD_FUNC1(glGetUniformBlockIndex);
	return glGetUniformBlockIndex(program, uniformBlockName);
}
static void GLLOADER_APIENTRY self_init_glGetActiveUniformBlockiv(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetActiveUniformBlockiv);
	glGetActiveUniformBlockiv(program, uniformBlockIndex, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetActiveUniformBlockName(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName)
{
	LOAD_FUNC1(glGetActiveUniformBlockName);
	glGetActiveUniformBlockName(program, uniformBlockIndex, bufSize, length, uniformBlockName);
}
static void GLLOADER_APIENTRY self_init_glUniformBlockBinding(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding)
{
	LOAD_FUNC1(glUniformBlockBinding);
	glUniformBlockBinding(program, uniformBlockIndex, uniformBlockBinding);
}
static void GLLOADER_APIENTRY self_init_glDrawArraysInstanced(GLenum mode, GLint first, GLsizei count, GLsizei primcount)
{
	LOAD_FUNC1(glDrawArraysInstanced);
	glDrawArraysInstanced(mode, first, count, primcount);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount)
{
	LOAD_FUNC1(glDrawElementsInstanced);
	glDrawElementsInstanced(mode, count, type, indices, primcount);
}
static GLsync GLLOADER_APIENTRY self_init_glFenceSync(GLenum condition, GLbitfield flags)
{
	LOAD_FUNC1(glFenceSync);
	return glFenceSync(condition, flags);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsSync(GLsync sync)
{
	LOAD_FUNC1(glIsSync);
	return glIsSync(sync);
}
static void GLLOADER_APIENTRY self_init_glDeleteSync(GLsync sync)
{
	LOAD_FUNC1(glDeleteSync);
	glDeleteSync(sync);
}
static GLenum GLLOADER_APIENTRY self_init_glClientWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	LOAD_FUNC1(glClientWaitSync);
	return glClientWaitSync(sync, flags, timeout);
}
static void GLLOADER_APIENTRY self_init_glWaitSync(GLsync sync, GLbitfield flags, GLuint64 timeout)
{
	LOAD_FUNC1(glWaitSync);
	glWaitSync(sync, flags, timeout);
}
static void GLLOADER_APIENTRY self_init_glGetInteger64v(GLenum pname, GLint64* params)
{
	LOAD_FUNC1(glGetInteger64v);
	glGetInteger64v(pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetSynciv(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values)
{
	LOAD_FUNC1(glGetSynciv);
	glGetSynciv(sync, pname, bufSize, length, values);
}
static void GLLOADER_APIENTRY self_init_glGetInteger64i_v(GLenum target, GLuint index, GLint64* data)
{
	LOAD_FUNC1(glGetInteger64i_v);
	glGetInteger64i_v(target, index, data);
}
static void GLLOADER_APIENTRY self_init_glGetBufferParameteri64v(GLenum target, GLenum pname, GLint64* params)
{
	LOAD_FUNC1(glGetBufferParameteri64v);
	glGetBufferParameteri64v(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGenSamplers(GLsizei count, GLuint* samplers)
{
	LOAD_FUNC1(glGenSamplers);
	glGenSamplers(count, samplers);
}
static void GLLOADER_APIENTRY self_init_glDeleteSamplers(GLsizei count, const GLuint* samplers)
{
	LOAD_FUNC1(glDeleteSamplers);
	glDeleteSamplers(count, samplers);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsSampler(GLuint sampler)
{
	LOAD_FUNC1(glIsSampler);
	return glIsSampler(sampler);
}
static void GLLOADER_APIENTRY self_init_glBindSampler(GLuint unit, GLuint sampler)
{
	LOAD_FUNC1(glBindSampler);
	glBindSampler(unit, sampler);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameteri(GLuint sampler, GLenum pname, GLint param)
{
	LOAD_FUNC1(glSamplerParameteri);
	glSamplerParameteri(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameteriv(GLuint sampler, GLenum pname, const GLint* param)
{
	LOAD_FUNC1(glSamplerParameteriv);
	glSamplerParameteriv(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameterf(GLuint sampler, GLenum pname, GLfloat param)
{
	LOAD_FUNC1(glSamplerParameterf);
	glSamplerParameterf(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glSamplerParameterfv(GLuint sampler, GLenum pname, const GLfloat* param)
{
	LOAD_FUNC1(glSamplerParameterfv);
	glSamplerParameterfv(sampler, pname, param);
}
static void GLLOADER_APIENTRY self_init_glGetSamplerParameteriv(GLuint sampler, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetSamplerParameteriv);
	glGetSamplerParameteriv(sampler, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetSamplerParameterfv(GLuint sampler, GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetSamplerParameterfv);
	glGetSamplerParameterfv(sampler, pname, params);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribDivisor(GLuint index, GLuint divisor)
{
	LOAD_FUNC1(glVertexAttribDivisor);
	glVertexAttribDivisor(index, divisor);
}
static void GLLOADER_APIENTRY self_init_glBindTransformFeedback(GLenum target, GLuint id)
{
	LOAD_FUNC1(glBindTransformFeedback);
	glBindTransformFeedback(target, id);
}
static void GLLOADER_APIENTRY self_init_glDeleteTransformFeedbacks(GLsizei n, const GLuint* ids)
{
	LOAD_FUNC1(glDeleteTransformFeedbacks);
	glDeleteTransformFeedbacks(n, ids);
}
static void GLLOADER_APIENTRY self_init_glGenTransformFeedbacks(GLsizei n, GLuint* ids)
{
	LOAD_FUNC1(glGenTransformFeedbacks);
	glGenTransformFeedbacks(n, ids);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsTransformFeedback(GLuint id)
{
	LOAD_FUNC1(glIsTransformFeedback);
	return glIsTransformFeedback(id);
}
static void GLLOADER_APIENTRY self_init_glPauseTransformFeedback()
{
	LOAD_FUNC1(glPauseTransformFeedback);
	glPauseTransformFeedback();
}
static void GLLOADER_APIENTRY self_init_glResumeTransformFeedback()
{
	LOAD_FUNC1(glResumeTransformFeedback);
	glResumeTransformFeedback();
}
static void GLLOADER_APIENTRY self_init_glGetProgramBinary(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary)
{
	LOAD_FUNC1(glGetProgramBinary);
	glGetProgramBinary(program, bufSize, length, binaryFormat, binary);
}
static void GLLOADER_APIENTRY self_init_glProgramBinary(GLuint program, GLenum binaryFormat, const void* binary, GLint length)
{
	LOAD_FUNC1(glProgramBinary);
	glProgramBinary(program, binaryFormat, binary, length);
}
static GLboolean GLLOADER_APIENTRY self_init_glProgramParameteri(GLuint program, GLenum pname, GLint value)
{
	LOAD_FUNC1(glProgramParameteri);
	return glProgramParameteri(program, pname, value);
}
static void GLLOADER_APIENTRY self_init_glInvalidateFramebuffer(GLenum target, GLsizei numAttachments, const GLenum* attachments)
{
	LOAD_FUNC1(glInvalidateFramebuffer);
	glInvalidateFramebuffer(target, numAttachments, attachments);
}
static void GLLOADER_APIENTRY self_init_glInvalidateSubFramebuffer(GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glInvalidateSubFramebuffer);
	glInvalidateSubFramebuffer(target, numAttachments, attachments, x, y, width, height);
}
static void GLLOADER_APIENTRY self_init_glTexStorage2D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height)
{
	LOAD_FUNC1(glTexStorage2D);
	glTexStorage2D(target, levels, internalformat, width, height);
}
static void GLLOADER_APIENTRY self_init_glTexStorage3D(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth)
{
	LOAD_FUNC1(glTexStorage3D);
	glTexStorage3D(target, levels, internalformat, width, height, depth);
}
static void GLLOADER_APIENTRY self_init_glGetInternalformativ(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params)
{
	LOAD_FUNC1(glGetInternalformativ);
	glGetInternalformativ(target, internalformat, pname, bufSize, params);
}

glReadBufferFUNC glReadBuffer = self_init_glReadBuffer;
glDrawRangeElementsFUNC glDrawRangeElements = self_init_glDrawRangeElements;
glTexImage3DFUNC glTexImage3D = self_init_glTexImage3D;
glTexSubImage3DFUNC glTexSubImage3D = self_init_glTexSubImage3D;
glCopyTexSubImage3DFUNC glCopyTexSubImage3D = self_init_glCopyTexSubImage3D;
glCompressedTexImage3DFUNC glCompressedTexImage3D = self_init_glCompressedTexImage3D;
glCompressedTexSubImage3DFUNC glCompressedTexSubImage3D = self_init_glCompressedTexSubImage3D;
glGenQueriesFUNC glGenQueries = self_init_glGenQueries;
glDeleteQueriesFUNC glDeleteQueries = self_init_glDeleteQueries;
glIsQueryFUNC glIsQuery = self_init_glIsQuery;
glBeginQueryFUNC glBeginQuery = self_init_glBeginQuery;
glEndQueryFUNC glEndQuery = self_init_glEndQuery;
glGetQueryivFUNC glGetQueryiv = self_init_glGetQueryiv;
glGetQueryObjectuivFUNC glGetQueryObjectuiv = self_init_glGetQueryObjectuiv;
glUnmapBufferFUNC glUnmapBuffer = self_init_glUnmapBuffer;
glGetBufferPointervFUNC glGetBufferPointerv = self_init_glGetBufferPointerv;
glDrawBuffersFUNC glDrawBuffers = self_init_glDrawBuffers;
glUniformMatrix2x3fvFUNC glUniformMatrix2x3fv = self_init_glUniformMatrix2x3fv;
glUniformMatrix3x2fvFUNC glUniformMatrix3x2fv = self_init_glUniformMatrix3x2fv;
glUniformMatrix2x4fvFUNC glUniformMatrix2x4fv = self_init_glUniformMatrix2x4fv;
glUniformMatrix4x2fvFUNC glUniformMatrix4x2fv = self_init_glUniformMatrix4x2fv;
glUniformMatrix3x4fvFUNC glUniformMatrix3x4fv = self_init_glUniformMatrix3x4fv;
glUniformMatrix4x3fvFUNC glUniformMatrix4x3fv = self_init_glUniformMatrix4x3fv;
glBlitFramebufferFUNC glBlitFramebuffer = self_init_glBlitFramebuffer;
glRenderbufferStorageMultisampleFUNC glRenderbufferStorageMultisample = self_init_glRenderbufferStorageMultisample;
glFramebufferTextureLayerFUNC glFramebufferTextureLayer = self_init_glFramebufferTextureLayer;
glMapBufferRangeFUNC glMapBufferRange = self_init_glMapBufferRange;
glFlushMappedBufferRangeFUNC glFlushMappedBufferRange = self_init_glFlushMappedBufferRange;
glBindVertexArrayFUNC glBindVertexArray = self_init_glBindVertexArray;
glDeleteVertexArraysFUNC glDeleteVertexArrays = self_init_glDeleteVertexArrays;
glGenVertexArraysFUNC glGenVertexArrays = self_init_glGenVertexArrays;
glIsVertexArrayFUNC glIsVertexArray = self_init_glIsVertexArray;
glGetIntegeri_vFUNC glGetIntegeri_v = self_init_glGetIntegeri_v;
glBeginTransformFeedbackFUNC glBeginTransformFeedback = self_init_glBeginTransformFeedback;
glEndTransformFeedbackFUNC glEndTransformFeedback = self_init_glEndTransformFeedback;
glBindBufferRangeFUNC glBindBufferRange = self_init_glBindBufferRange;
glBindBufferBaseFUNC glBindBufferBase = self_init_glBindBufferBase;
glTransformFeedbackVaryingsFUNC glTransformFeedbackVaryings = self_init_glTransformFeedbackVaryings;
glGetTransformFeedbackVaryingFUNC glGetTransformFeedbackVarying = self_init_glGetTransformFeedbackVarying;
glVertexAttribIPointerFUNC glVertexAttribIPointer = self_init_glVertexAttribIPointer;
glGetVertexAttribIivFUNC glGetVertexAttribIiv = self_init_glGetVertexAttribIiv;
glGetVertexAttribIuivFUNC glGetVertexAttribIuiv = self_init_glGetVertexAttribIuiv;
glVertexAttribI4iFUNC glVertexAttribI4i = self_init_glVertexAttribI4i;
glVertexAttribI4uiFUNC glVertexAttribI4ui = self_init_glVertexAttribI4ui;
glVertexAttribI4ivFUNC glVertexAttribI4iv = self_init_glVertexAttribI4iv;
glVertexAttribI4uivFUNC glVertexAttribI4uiv = self_init_glVertexAttribI4uiv;
glGetUniformuivFUNC glGetUniformuiv = self_init_glGetUniformuiv;
glGetFragDataLocationFUNC glGetFragDataLocation = self_init_glGetFragDataLocation;
glUniform1uiFUNC glUniform1ui = self_init_glUniform1ui;
glUniform2uiFUNC glUniform2ui = self_init_glUniform2ui;
glUniform3uiFUNC glUniform3ui = self_init_glUniform3ui;
glUniform4uiFUNC glUniform4ui = self_init_glUniform4ui;
glUniform1uivFUNC glUniform1uiv = self_init_glUniform1uiv;
glUniform2uivFUNC glUniform2uiv = self_init_glUniform2uiv;
glUniform3uivFUNC glUniform3uiv = self_init_glUniform3uiv;
glUniform4uivFUNC glUniform4uiv = self_init_glUniform4uiv;
glClearBufferivFUNC glClearBufferiv = self_init_glClearBufferiv;
glClearBufferuivFUNC glClearBufferuiv = self_init_glClearBufferuiv;
glClearBufferfvFUNC glClearBufferfv = self_init_glClearBufferfv;
glClearBufferfiFUNC glClearBufferfi = self_init_glClearBufferfi;
glGetStringiFUNC glGetStringi = self_init_glGetStringi;
glCopyBufferSubDataFUNC glCopyBufferSubData = self_init_glCopyBufferSubData;
glGetUniformIndicesFUNC glGetUniformIndices = self_init_glGetUniformIndices;
glGetActiveUniformsivFUNC glGetActiveUniformsiv = self_init_glGetActiveUniformsiv;
glGetUniformBlockIndexFUNC glGetUniformBlockIndex = self_init_glGetUniformBlockIndex;
glGetActiveUniformBlockivFUNC glGetActiveUniformBlockiv = self_init_glGetActiveUniformBlockiv;
glGetActiveUniformBlockNameFUNC glGetActiveUniformBlockName = self_init_glGetActiveUniformBlockName;
glUniformBlockBindingFUNC glUniformBlockBinding = self_init_glUniformBlockBinding;
glDrawArraysInstancedFUNC glDrawArraysInstanced = self_init_glDrawArraysInstanced;
glDrawElementsInstancedFUNC glDrawElementsInstanced = self_init_glDrawElementsInstanced;
glFenceSyncFUNC glFenceSync = self_init_glFenceSync;
glIsSyncFUNC glIsSync = self_init_glIsSync;
glDeleteSyncFUNC glDeleteSync = self_init_glDeleteSync;
glClientWaitSyncFUNC glClientWaitSync = self_init_glClientWaitSync;
glWaitSyncFUNC glWaitSync = self_init_glWaitSync;
glGetInteger64vFUNC glGetInteger64v = self_init_glGetInteger64v;
glGetSyncivFUNC glGetSynciv = self_init_glGetSynciv;
glGetInteger64i_vFUNC glGetInteger64i_v = self_init_glGetInteger64i_v;
glGetBufferParameteri64vFUNC glGetBufferParameteri64v = self_init_glGetBufferParameteri64v;
glGenSamplersFUNC glGenSamplers = self_init_glGenSamplers;
glDeleteSamplersFUNC glDeleteSamplers = self_init_glDeleteSamplers;
glIsSamplerFUNC glIsSampler = self_init_glIsSampler;
glBindSamplerFUNC glBindSampler = self_init_glBindSampler;
glSamplerParameteriFUNC glSamplerParameteri = self_init_glSamplerParameteri;
glSamplerParameterivFUNC glSamplerParameteriv = self_init_glSamplerParameteriv;
glSamplerParameterfFUNC glSamplerParameterf = self_init_glSamplerParameterf;
glSamplerParameterfvFUNC glSamplerParameterfv = self_init_glSamplerParameterfv;
glGetSamplerParameterivFUNC glGetSamplerParameteriv = self_init_glGetSamplerParameteriv;
glGetSamplerParameterfvFUNC glGetSamplerParameterfv = self_init_glGetSamplerParameterfv;
glVertexAttribDivisorFUNC glVertexAttribDivisor = self_init_glVertexAttribDivisor;
glBindTransformFeedbackFUNC glBindTransformFeedback = self_init_glBindTransformFeedback;
glDeleteTransformFeedbacksFUNC glDeleteTransformFeedbacks = self_init_glDeleteTransformFeedbacks;
glGenTransformFeedbacksFUNC glGenTransformFeedbacks = self_init_glGenTransformFeedbacks;
glIsTransformFeedbackFUNC glIsTransformFeedback = self_init_glIsTransformFeedback;
glPauseTransformFeedbackFUNC glPauseTransformFeedback = self_init_glPauseTransformFeedback;
glResumeTransformFeedbackFUNC glResumeTransformFeedback = self_init_glResumeTransformFeedback;
glGetProgramBinaryFUNC glGetProgramBinary = self_init_glGetProgramBinary;
glProgramBinaryFUNC glProgramBinary = self_init_glProgramBinary;
glProgramParameteriFUNC glProgramParameteri = self_init_glProgramParameteri;
glInvalidateFramebufferFUNC glInvalidateFramebuffer = self_init_glInvalidateFramebuffer;
glInvalidateSubFramebufferFUNC glInvalidateSubFramebuffer = self_init_glInvalidateSubFramebuffer;
glTexStorage2DFUNC glTexStorage2D = self_init_glTexStorage2D;
glTexStorage3DFUNC glTexStorage3D = self_init_glTexStorage3D;
glGetInternalformativFUNC glGetInternalformativ = self_init_glGetInternalformativ;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_VERSION_3_1()
{
	return _GLES_VERSION_3_1;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_VERSION_3_1()
{
	glloader_init();
	return glloader_GLES_VERSION_3_1();
}
glloader_GLES_VERSION_3_1FUNC glloader_GLES_VERSION_3_1 = self_init_glloader_GLES_VERSION_3_1;

#ifdef GLES_VERSION_3_1

static void GLLOADER_APIENTRY self_init_glDispatchCompute(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z)
{
	LOAD_FUNC1(glDispatchCompute);
	glDispatchCompute(num_groups_x, num_groups_y, num_groups_z);
}
static void GLLOADER_APIENTRY self_init_glDispatchComputeIndirect(GLintptr indirect)
{
	LOAD_FUNC1(glDispatchComputeIndirect);
	glDispatchComputeIndirect(indirect);
}
static void GLLOADER_APIENTRY self_init_glDrawArraysIndirect(GLenum mode, const GLvoid* indirect)
{
	LOAD_FUNC1(glDrawArraysIndirect);
	glDrawArraysIndirect(mode, indirect);
}
static void GLLOADER_APIENTRY self_init_glDrawElementsIndirect(GLenum mode, GLenum type, const GLvoid* indirect)
{
	LOAD_FUNC1(glDrawElementsIndirect);
	glDrawElementsIndirect(mode, type, indirect);
}
static void GLLOADER_APIENTRY self_init_glFramebufferParameteri(GLenum target, GLenum pname, GLint param)
{
	LOAD_FUNC1(glFramebufferParameteri);
	glFramebufferParameteri(target, pname, param);
}
static void GLLOADER_APIENTRY self_init_glGetFramebufferParameteriv(GLenum target, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetFramebufferParameteriv);
	glGetFramebufferParameteriv(target, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetProgramInterfaceiv(GLuint program, GLenum programInterface, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetProgramInterfaceiv);
	glGetProgramInterfaceiv(program, programInterface, pname, params);
}
static GLuint GLLOADER_APIENTRY self_init_glGetProgramResourceIndex(GLuint program, GLenum programInterface, const GLchar* name)
{
	LOAD_FUNC1(glGetProgramResourceIndex);
	return glGetProgramResourceIndex(program, programInterface, name);
}
static void GLLOADER_APIENTRY self_init_glGetProgramResourceName(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name)
{
	LOAD_FUNC1(glGetProgramResourceName);
	glGetProgramResourceName(program, programInterface, index, bufSize, length, name);
}
static void GLLOADER_APIENTRY self_init_glGetProgramResourceiv(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei bufSize, GLsizei* length, GLint* params)
{
	LOAD_FUNC1(glGetProgramResourceiv);
	glGetProgramResourceiv(program, programInterface, index, propCount, props, bufSize, length, params);
}
static GLint GLLOADER_APIENTRY self_init_glGetProgramResourceLocation(GLuint program, GLenum programInterface, const GLchar* name)
{
	LOAD_FUNC1(glGetProgramResourceLocation);
	return glGetProgramResourceLocation(program, programInterface, name);
}
static void GLLOADER_APIENTRY self_init_glUseProgramStages(GLuint pipeline, GLbitfield stages, GLuint program)
{
	LOAD_FUNC1(glUseProgramStages);
	glUseProgramStages(pipeline, stages, program);
}
static void GLLOADER_APIENTRY self_init_glActiveShaderProgram(GLuint pipeline, GLuint program)
{
	LOAD_FUNC1(glActiveShaderProgram);
	glActiveShaderProgram(pipeline, program);
}
static GLuint GLLOADER_APIENTRY self_init_glCreateShaderProgramv(GLenum type, GLsizei count, const GLchar** strings)
{
	LOAD_FUNC1(glCreateShaderProgramv);
	return glCreateShaderProgramv(type, count, strings);
}
static void GLLOADER_APIENTRY self_init_glBindProgramPipeline(GLuint pipeline)
{
	LOAD_FUNC1(glBindProgramPipeline);
	glBindProgramPipeline(pipeline);
}
static void GLLOADER_APIENTRY self_init_glDeleteProgramPipelines(GLsizei n, const GLuint* pipelines)
{
	LOAD_FUNC1(glDeleteProgramPipelines);
	glDeleteProgramPipelines(n, pipelines);
}
static void GLLOADER_APIENTRY self_init_glGenProgramPipelines(GLsizei n, GLuint* pipelines)
{
	LOAD_FUNC1(glGenProgramPipelines);
	glGenProgramPipelines(n, pipelines);
}
static GLboolean GLLOADER_APIENTRY self_init_glIsProgramPipeline(GLuint pipeline)
{
	LOAD_FUNC1(glIsProgramPipeline);
	return glIsProgramPipeline(pipeline);
}
static void GLLOADER_APIENTRY self_init_glGetProgramPipelineiv(GLuint pipeline, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetProgramPipelineiv);
	glGetProgramPipelineiv(pipeline, pname, params);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform1i(GLuint program, GLint location, GLint v0)
{
	LOAD_FUNC1(glProgramUniform1i);
	glProgramUniform1i(program, location, v0);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform2i(GLuint program, GLint location, GLint v0, GLint v1)
{
	LOAD_FUNC1(glProgramUniform2i);
	glProgramUniform2i(program, location, v0, v1);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform3i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2)
{
	LOAD_FUNC1(glProgramUniform3i);
	glProgramUniform3i(program, location, v0, v1, v2);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform4i(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3)
{
	LOAD_FUNC1(glProgramUniform4i);
	glProgramUniform4i(program, location, v0, v1, v2, v3);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform1ui(GLuint program, GLint location, GLuint v0)
{
	LOAD_FUNC1(glProgramUniform1ui);
	glProgramUniform1ui(program, location, v0);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform2ui(GLuint program, GLint location, GLuint v0, GLuint v1)
{
	LOAD_FUNC1(glProgramUniform2ui);
	glProgramUniform2ui(program, location, v0, v1);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform3ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2)
{
	LOAD_FUNC1(glProgramUniform3ui);
	glProgramUniform3ui(program, location, v0, v1, v2);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform4ui(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3)
{
	LOAD_FUNC1(glProgramUniform4ui);
	glProgramUniform4ui(program, location, v0, v1, v2, v3);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform1f(GLuint program, GLint location, GLfloat v0)
{
	LOAD_FUNC1(glProgramUniform1f);
	glProgramUniform1f(program, location, v0);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform2f(GLuint program, GLint location, GLfloat v0, GLfloat v1)
{
	LOAD_FUNC1(glProgramUniform2f);
	glProgramUniform2f(program, location, v0, v1);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform3f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2)
{
	LOAD_FUNC1(glProgramUniform3f);
	glProgramUniform3f(program, location, v0, v1, v2);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform4f(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3)
{
	LOAD_FUNC1(glProgramUniform4f);
	glProgramUniform4f(program, location, v0, v1, v2, v3);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform1iv(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glProgramUniform1iv);
	glProgramUniform1iv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform2iv(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glProgramUniform2iv);
	glProgramUniform2iv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform3iv(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glProgramUniform3iv);
	glProgramUniform3iv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform4iv(GLuint program, GLint location, GLsizei count, const GLint* value)
{
	LOAD_FUNC1(glProgramUniform4iv);
	glProgramUniform4iv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform1uiv(GLuint program, GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glProgramUniform1uiv);
	glProgramUniform1uiv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform2uiv(GLuint program, GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glProgramUniform2uiv);
	glProgramUniform2uiv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform3uiv(GLuint program, GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glProgramUniform3uiv);
	glProgramUniform3uiv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform4uiv(GLuint program, GLint location, GLsizei count, const GLuint* value)
{
	LOAD_FUNC1(glProgramUniform4uiv);
	glProgramUniform4uiv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform1fv(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniform1fv);
	glProgramUniform1fv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform2fv(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniform2fv);
	glProgramUniform2fv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform3fv(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniform3fv);
	glProgramUniform3fv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniform4fv(GLuint program, GLint location, GLsizei count, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniform4fv);
	glProgramUniform4fv(program, location, count, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix2fv);
	glProgramUniformMatrix2fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix3fv);
	glProgramUniformMatrix3fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix4fv);
	glProgramUniformMatrix4fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix2x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix2x3fv);
	glProgramUniformMatrix2x3fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix3x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix3x2fv);
	glProgramUniformMatrix3x2fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix2x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix2x4fv);
	glProgramUniformMatrix2x4fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix4x2fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix4x2fv);
	glProgramUniformMatrix4x2fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix3x4fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix3x4fv);
	glProgramUniformMatrix3x4fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glProgramUniformMatrix4x3fv(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value)
{
	LOAD_FUNC1(glProgramUniformMatrix4x3fv);
	glProgramUniformMatrix4x3fv(program, location, count, transpose, value);
}
static void GLLOADER_APIENTRY self_init_glValidateProgramPipeline(GLuint pipeline)
{
	LOAD_FUNC1(glValidateProgramPipeline);
	glValidateProgramPipeline(pipeline);
}
static void GLLOADER_APIENTRY self_init_glGetProgramPipelineInfoLog(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog)
{
	LOAD_FUNC1(glGetProgramPipelineInfoLog);
	glGetProgramPipelineInfoLog(pipeline, bufSize, length, infoLog);
}
static void GLLOADER_APIENTRY self_init_glBindImageTexture(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format)
{
	LOAD_FUNC1(glBindImageTexture);
	glBindImageTexture(unit, texture, level, layered, layer, access, format);
}
static void GLLOADER_APIENTRY self_init_glGetBooleani_v(GLenum target, GLuint index, GLboolean* data)
{
	LOAD_FUNC1(glGetBooleani_v);
	glGetBooleani_v(target, index, data);
}
static void GLLOADER_APIENTRY self_init_glMemoryBarrier(GLbitfield barriers)
{
	LOAD_FUNC1(glMemoryBarrier);
	glMemoryBarrier(barriers);
}
static void GLLOADER_APIENTRY self_init_glMemoryBarrierByRegion(GLbitfield barriers)
{
	LOAD_FUNC1(glMemoryBarrierByRegion);
	glMemoryBarrierByRegion(barriers);
}
static void GLLOADER_APIENTRY self_init_glTexStorage2DMultisample(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations)
{
	LOAD_FUNC1(glTexStorage2DMultisample);
	glTexStorage2DMultisample(target, samples, internalformat, width, height, fixedsamplelocations);
}
static void GLLOADER_APIENTRY self_init_glGetMultisamplefv(GLenum pname, GLuint index, GLfloat* val)
{
	LOAD_FUNC1(glGetMultisamplefv);
	glGetMultisamplefv(pname, index, val);
}
static void GLLOADER_APIENTRY self_init_glSampleMaski(GLuint index, GLbitfield mask)
{
	LOAD_FUNC1(glSampleMaski);
	glSampleMaski(index, mask);
}
static void GLLOADER_APIENTRY self_init_glGetTexLevelParameteriv(GLenum target, GLint level, GLenum pname, GLint* params)
{
	LOAD_FUNC1(glGetTexLevelParameteriv);
	glGetTexLevelParameteriv(target, level, pname, params);
}
static void GLLOADER_APIENTRY self_init_glGetTexLevelParameterfv(GLenum target, GLint level, GLenum pname, GLfloat* params)
{
	LOAD_FUNC1(glGetTexLevelParameterfv);
	glGetTexLevelParameterfv(target, level, pname, params);
}
static void GLLOADER_APIENTRY self_init_glBindVertexBuffer(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride)
{
	LOAD_FUNC1(glBindVertexBuffer);
	glBindVertexBuffer(bindingindex, buffer, offset, stride);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribFormat(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset)
{
	LOAD_FUNC1(glVertexAttribFormat);
	glVertexAttribFormat(attribindex, size, type, normalized, relativeoffset);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribIFormat(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset)
{
	LOAD_FUNC1(glVertexAttribIFormat);
	glVertexAttribIFormat(attribindex, size, type, relativeoffset);
}
static void GLLOADER_APIENTRY self_init_glVertexAttribBinding(GLuint attribindex, GLuint bindingindex)
{
	LOAD_FUNC1(glVertexAttribBinding);
	glVertexAttribBinding(attribindex, bindingindex);
}
static void GLLOADER_APIENTRY self_init_glVertexBindingDivisor(GLuint bindingindex, GLuint divisor)
{
	LOAD_FUNC1(glVertexBindingDivisor);
	glVertexBindingDivisor(bindingindex, divisor);
}

glDispatchComputeFUNC glDispatchCompute = self_init_glDispatchCompute;
glDispatchComputeIndirectFUNC glDispatchComputeIndirect = self_init_glDispatchComputeIndirect;
glDrawArraysIndirectFUNC glDrawArraysIndirect = self_init_glDrawArraysIndirect;
glDrawElementsIndirectFUNC glDrawElementsIndirect = self_init_glDrawElementsIndirect;
glFramebufferParameteriFUNC glFramebufferParameteri = self_init_glFramebufferParameteri;
glGetFramebufferParameterivFUNC glGetFramebufferParameteriv = self_init_glGetFramebufferParameteriv;
glGetProgramInterfaceivFUNC glGetProgramInterfaceiv = self_init_glGetProgramInterfaceiv;
glGetProgramResourceIndexFUNC glGetProgramResourceIndex = self_init_glGetProgramResourceIndex;
glGetProgramResourceNameFUNC glGetProgramResourceName = self_init_glGetProgramResourceName;
glGetProgramResourceivFUNC glGetProgramResourceiv = self_init_glGetProgramResourceiv;
glGetProgramResourceLocationFUNC glGetProgramResourceLocation = self_init_glGetProgramResourceLocation;
glUseProgramStagesFUNC glUseProgramStages = self_init_glUseProgramStages;
glActiveShaderProgramFUNC glActiveShaderProgram = self_init_glActiveShaderProgram;
glCreateShaderProgramvFUNC glCreateShaderProgramv = self_init_glCreateShaderProgramv;
glBindProgramPipelineFUNC glBindProgramPipeline = self_init_glBindProgramPipeline;
glDeleteProgramPipelinesFUNC glDeleteProgramPipelines = self_init_glDeleteProgramPipelines;
glGenProgramPipelinesFUNC glGenProgramPipelines = self_init_glGenProgramPipelines;
glIsProgramPipelineFUNC glIsProgramPipeline = self_init_glIsProgramPipeline;
glGetProgramPipelineivFUNC glGetProgramPipelineiv = self_init_glGetProgramPipelineiv;
glProgramUniform1iFUNC glProgramUniform1i = self_init_glProgramUniform1i;
glProgramUniform2iFUNC glProgramUniform2i = self_init_glProgramUniform2i;
glProgramUniform3iFUNC glProgramUniform3i = self_init_glProgramUniform3i;
glProgramUniform4iFUNC glProgramUniform4i = self_init_glProgramUniform4i;
glProgramUniform1uiFUNC glProgramUniform1ui = self_init_glProgramUniform1ui;
glProgramUniform2uiFUNC glProgramUniform2ui = self_init_glProgramUniform2ui;
glProgramUniform3uiFUNC glProgramUniform3ui = self_init_glProgramUniform3ui;
glProgramUniform4uiFUNC glProgramUniform4ui = self_init_glProgramUniform4ui;
glProgramUniform1fFUNC glProgramUniform1f = self_init_glProgramUniform1f;
glProgramUniform2fFUNC glProgramUniform2f = self_init_glProgramUniform2f;
glProgramUniform3fFUNC glProgramUniform3f = self_init_glProgramUniform3f;
glProgramUniform4fFUNC glProgramUniform4f = self_init_glProgramUniform4f;
glProgramUniform1ivFUNC glProgramUniform1iv = self_init_glProgramUniform1iv;
glProgramUniform2ivFUNC glProgramUniform2iv = self_init_glProgramUniform2iv;
glProgramUniform3ivFUNC glProgramUniform3iv = self_init_glProgramUniform3iv;
glProgramUniform4ivFUNC glProgramUniform4iv = self_init_glProgramUniform4iv;
glProgramUniform1uivFUNC glProgramUniform1uiv = self_init_glProgramUniform1uiv;
glProgramUniform2uivFUNC glProgramUniform2uiv = self_init_glProgramUniform2uiv;
glProgramUniform3uivFUNC glProgramUniform3uiv = self_init_glProgramUniform3uiv;
glProgramUniform4uivFUNC glProgramUniform4uiv = self_init_glProgramUniform4uiv;
glProgramUniform1fvFUNC glProgramUniform1fv = self_init_glProgramUniform1fv;
glProgramUniform2fvFUNC glProgramUniform2fv = self_init_glProgramUniform2fv;
glProgramUniform3fvFUNC glProgramUniform3fv = self_init_glProgramUniform3fv;
glProgramUniform4fvFUNC glProgramUniform4fv = self_init_glProgramUniform4fv;
glProgramUniformMatrix2fvFUNC glProgramUniformMatrix2fv = self_init_glProgramUniformMatrix2fv;
glProgramUniformMatrix3fvFUNC glProgramUniformMatrix3fv = self_init_glProgramUniformMatrix3fv;
glProgramUniformMatrix4fvFUNC glProgramUniformMatrix4fv = self_init_glProgramUniformMatrix4fv;
glProgramUniformMatrix2x3fvFUNC glProgramUniformMatrix2x3fv = self_init_glProgramUniformMatrix2x3fv;
glProgramUniformMatrix3x2fvFUNC glProgramUniformMatrix3x2fv = self_init_glProgramUniformMatrix3x2fv;
glProgramUniformMatrix2x4fvFUNC glProgramUniformMatrix2x4fv = self_init_glProgramUniformMatrix2x4fv;
glProgramUniformMatrix4x2fvFUNC glProgramUniformMatrix4x2fv = self_init_glProgramUniformMatrix4x2fv;
glProgramUniformMatrix3x4fvFUNC glProgramUniformMatrix3x4fv = self_init_glProgramUniformMatrix3x4fv;
glProgramUniformMatrix4x3fvFUNC glProgramUniformMatrix4x3fv = self_init_glProgramUniformMatrix4x3fv;
glValidateProgramPipelineFUNC glValidateProgramPipeline = self_init_glValidateProgramPipeline;
glGetProgramPipelineInfoLogFUNC glGetProgramPipelineInfoLog = self_init_glGetProgramPipelineInfoLog;
glBindImageTextureFUNC glBindImageTexture = self_init_glBindImageTexture;
glGetBooleani_vFUNC glGetBooleani_v = self_init_glGetBooleani_v;
glMemoryBarrierFUNC glMemoryBarrier = self_init_glMemoryBarrier;
glMemoryBarrierByRegionFUNC glMemoryBarrierByRegion = self_init_glMemoryBarrierByRegion;
glTexStorage2DMultisampleFUNC glTexStorage2DMultisample = self_init_glTexStorage2DMultisample;
glGetMultisamplefvFUNC glGetMultisamplefv = self_init_glGetMultisamplefv;
glSampleMaskiFUNC glSampleMaski = self_init_glSampleMaski;
glGetTexLevelParameterivFUNC glGetTexLevelParameteriv = self_init_glGetTexLevelParameteriv;
glGetTexLevelParameterfvFUNC glGetTexLevelParameterfv = self_init_glGetTexLevelParameterfv;
glBindVertexBufferFUNC glBindVertexBuffer = self_init_glBindVertexBuffer;
glVertexAttribFormatFUNC glVertexAttribFormat = self_init_glVertexAttribFormat;
glVertexAttribIFormatFUNC glVertexAttribIFormat = self_init_glVertexAttribIFormat;
glVertexAttribBindingFUNC glVertexAttribBinding = self_init_glVertexAttribBinding;
glVertexBindingDivisorFUNC glVertexBindingDivisor = self_init_glVertexBindingDivisor;

#endif

static char GLLOADER_APIENTRY _glloader_GLES_VIV_shader_binary()
{
	return _GLES_VIV_shader_binary;
}

static char GLLOADER_APIENTRY self_init_glloader_GLES_VIV_shader_binary()
{
	glloader_init();
	return glloader_GLES_VIV_shader_binary();
}
glloader_GLES_VIV_shader_binaryFUNC glloader_GLES_VIV_shader_binary = self_init_glloader_GLES_VIV_shader_binary;

void init_GLES_NV_pack_subimage()
{
	glloader_GLES_NV_pack_subimage = _glloader_GLES_NV_pack_subimage;

	_GLES_NV_pack_subimage = 0;
	if (glloader_is_supported("GLES_NV_pack_subimage"))
	{
		_GLES_NV_pack_subimage = 1;
	}
}

void init_GLES_NV_platform_binary()
{
	glloader_GLES_NV_platform_binary = _glloader_GLES_NV_platform_binary;

	_GLES_NV_platform_binary = 0;
	if (glloader_is_supported("GLES_NV_platform_binary"))
	{
		_GLES_NV_platform_binary = 1;
	}
}

void init_GLES_AMD_compressed_3DC_texture()
{
	glloader_GLES_AMD_compressed_3DC_texture = _glloader_GLES_AMD_compressed_3DC_texture;

	_GLES_AMD_compressed_3DC_texture = 0;
	if (glloader_is_supported("GLES_AMD_compressed_3DC_texture"))
	{
		_GLES_AMD_compressed_3DC_texture = 1;
	}
}

void init_GLES_AMD_compressed_ATC_texture()
{
	glloader_GLES_AMD_compressed_ATC_texture = _glloader_GLES_AMD_compressed_ATC_texture;

	_GLES_AMD_compressed_ATC_texture = 0;
	if (glloader_is_supported("GLES_AMD_compressed_ATC_texture"))
	{
		_GLES_AMD_compressed_ATC_texture = 1;
	}
}

void init_GLES_AMD_performance_monitor()
{
	glloader_GLES_AMD_performance_monitor = _glloader_GLES_AMD_performance_monitor;

	{
		glGetPerfMonitorGroupsAMD = NULL;
		glGetPerfMonitorCountersAMD = NULL;
		glGetPerfMonitorGroupStringAMD = NULL;
		glGetPerfMonitorCounterStringAMD = NULL;
		glGetPerfMonitorCounterInfoAMD = NULL;
		glGenPerfMonitorsAMD = NULL;
		glDeletePerfMonitorsAMD = NULL;
		glSelectPerfMonitorCountersAMD = NULL;
		glBeginPerfMonitorAMD = NULL;
		glEndPerfMonitorAMD = NULL;
		glGetPerfMonitorCounterDataAMD = NULL;
	}

	_GLES_AMD_performance_monitor = 0;
	if (glloader_is_supported("GLES_AMD_performance_monitor"))
	{
		_GLES_AMD_performance_monitor = 1;

		LOAD_FUNC1(glGetPerfMonitorGroupsAMD);
		LOAD_FUNC1(glGetPerfMonitorCountersAMD);
		LOAD_FUNC1(glGetPerfMonitorGroupStringAMD);
		LOAD_FUNC1(glGetPerfMonitorCounterStringAMD);
		LOAD_FUNC1(glGetPerfMonitorCounterInfoAMD);
		LOAD_FUNC1(glGenPerfMonitorsAMD);
		LOAD_FUNC1(glDeletePerfMonitorsAMD);
		LOAD_FUNC1(glSelectPerfMonitorCountersAMD);
		LOAD_FUNC1(glBeginPerfMonitorAMD);
		LOAD_FUNC1(glEndPerfMonitorAMD);
		LOAD_FUNC1(glGetPerfMonitorCounterDataAMD);
	}
}

void init_GLES_AMD_program_binary_Z400()
{
	glloader_GLES_AMD_program_binary_Z400 = _glloader_GLES_AMD_program_binary_Z400;

	_GLES_AMD_program_binary_Z400 = 0;
	if (glloader_is_supported("GLES_AMD_program_binary_Z400"))
	{
		_GLES_AMD_program_binary_Z400 = 1;
	}
}

void init_GLES_ANDROID_extension_pack_es31a()
{
	glloader_GLES_ANDROID_extension_pack_es31a = _glloader_GLES_ANDROID_extension_pack_es31a;

	_GLES_ANDROID_extension_pack_es31a = 0;
	if (glloader_is_supported("GLES_ANDROID_extension_pack_es31a"))
	{
		_GLES_ANDROID_extension_pack_es31a = 1;
		LOAD_FUNC1(glDispatchCompute);
		LOAD_FUNC1(glDispatchComputeIndirect);
		LOAD_FUNC1(glDrawArraysIndirect);
		LOAD_FUNC1(glDrawElementsIndirect);
		LOAD_FUNC1(glFramebufferParameteri);
		LOAD_FUNC1(glGetFramebufferParameteriv);
		LOAD_FUNC1(glGetProgramInterfaceiv);
		LOAD_FUNC1(glGetProgramResourceIndex);
		LOAD_FUNC1(glGetProgramResourceName);
		LOAD_FUNC1(glGetProgramResourceiv);
		LOAD_FUNC1(glGetProgramResourceLocation);
		LOAD_FUNC1(glUseProgramStages);
		LOAD_FUNC1(glActiveShaderProgram);
		LOAD_FUNC1(glCreateShaderProgramv);
		LOAD_FUNC1(glBindProgramPipeline);
		LOAD_FUNC1(glDeleteProgramPipelines);
		LOAD_FUNC1(glGenProgramPipelines);
		LOAD_FUNC1(glIsProgramPipeline);
		LOAD_FUNC1(glGetProgramPipelineiv);
		LOAD_FUNC1(glProgramUniform1i);
		LOAD_FUNC1(glProgramUniform2i);
		LOAD_FUNC1(glProgramUniform3i);
		LOAD_FUNC1(glProgramUniform4i);
		LOAD_FUNC1(glProgramUniform1ui);
		LOAD_FUNC1(glProgramUniform2ui);
		LOAD_FUNC1(glProgramUniform3ui);
		LOAD_FUNC1(glProgramUniform4ui);
		LOAD_FUNC1(glProgramUniform1f);
		LOAD_FUNC1(glProgramUniform2f);
		LOAD_FUNC1(glProgramUniform3f);
		LOAD_FUNC1(glProgramUniform4f);
		LOAD_FUNC1(glProgramUniform1iv);
		LOAD_FUNC1(glProgramUniform2iv);
		LOAD_FUNC1(glProgramUniform3iv);
		LOAD_FUNC1(glProgramUniform4iv);
		LOAD_FUNC1(glProgramUniform1uiv);
		LOAD_FUNC1(glProgramUniform2uiv);
		LOAD_FUNC1(glProgramUniform3uiv);
		LOAD_FUNC1(glProgramUniform4uiv);
		LOAD_FUNC1(glProgramUniform1fv);
		LOAD_FUNC1(glProgramUniform2fv);
		LOAD_FUNC1(glProgramUniform3fv);
		LOAD_FUNC1(glProgramUniform4fv);
		LOAD_FUNC1(glProgramUniformMatrix2fv);
		LOAD_FUNC1(glProgramUniformMatrix3fv);
		LOAD_FUNC1(glProgramUniformMatrix4fv);
		LOAD_FUNC1(glProgramUniformMatrix2x3fv);
		LOAD_FUNC1(glProgramUniformMatrix3x2fv);
		LOAD_FUNC1(glProgramUniformMatrix2x4fv);
		LOAD_FUNC1(glProgramUniformMatrix4x2fv);
		LOAD_FUNC1(glProgramUniformMatrix3x4fv);
		LOAD_FUNC1(glProgramUniformMatrix4x3fv);
		LOAD_FUNC1(glValidateProgramPipeline);
		LOAD_FUNC1(glGetProgramPipelineInfoLog);
		LOAD_FUNC1(glBindImageTexture);
		LOAD_FUNC1(glGetBooleani_v);
		LOAD_FUNC1(glMemoryBarrier);
		LOAD_FUNC1(glMemoryBarrierByRegion);
		LOAD_FUNC1(glTexStorage2DMultisample);
		LOAD_FUNC1(glGetMultisamplefv);
		LOAD_FUNC1(glSampleMaski);
		LOAD_FUNC1(glGetTexLevelParameteriv);
		LOAD_FUNC1(glGetTexLevelParameterfv);
		LOAD_FUNC1(glBindVertexBuffer);
		LOAD_FUNC1(glVertexAttribFormat);
		LOAD_FUNC1(glVertexAttribIFormat);
		LOAD_FUNC1(glVertexAttribBinding);
		LOAD_FUNC1(glVertexBindingDivisor);
		LOAD_FUNC1(glDebugMessageControl);
		LOAD_FUNC1(glDebugMessageInsert);
		LOAD_FUNC1(glDebugMessageCallback);
		LOAD_FUNC1(glGetDebugMessageLog);
		LOAD_FUNC1(glGetPointerv);
		LOAD_FUNC1(glPushDebugGroup);
		LOAD_FUNC1(glPopDebugGroup);
		LOAD_FUNC1(glObjectLabel);
		LOAD_FUNC1(glGetObjectLabel);
		LOAD_FUNC1(glObjectPtrLabel);
		LOAD_FUNC1(glGetObjectPtrLabel);
		LOAD_FUNC1(glBlendBarrierKHR);
		LOAD_FUNC1(glCopyImageSubDataEXT);
		LOAD_FUNC1(glEnableiEXT);
		LOAD_FUNC1(glDisableiEXT);
		LOAD_FUNC1(glBlendEquationiEXT);
		LOAD_FUNC1(glBlendEquationSeparateiEXT);
		LOAD_FUNC1(glBlendFunciEXT);
		LOAD_FUNC1(glBlendFuncSeparateiEXT);
		LOAD_FUNC1(glColorMaskiEXT);
		LOAD_FUNC1(glIsEnablediEXT);
		LOAD_FUNC1(glFramebufferTextureEXT);
		LOAD_FUNC1(glPrimitiveBoundingBoxEXT);
		LOAD_FUNC1(glPatchParameteriEXT);
		LOAD_FUNC1(glTexParameterIivEXT);
		LOAD_FUNC1(glTexParameterIuivEXT);
		LOAD_FUNC1(glGetTexParameterIivEXT);
		LOAD_FUNC1(glGetTexParameterIuivEXT);
		LOAD_FUNC1(glSamplerParameterIivEXT);
		LOAD_FUNC1(glSamplerParameterIuivEXT);
		LOAD_FUNC1(glGetSamplerParameterIivEXT);
		LOAD_FUNC1(glGetSamplerParameterIuivEXT);
		LOAD_FUNC1(glTexBufferEXT);
		LOAD_FUNC1(glTexBufferRangeEXT);
	}
	else
	{
		if (glloader_is_supported("GLES_VERSION_3_1")
			&& glloader_is_supported("GLES_KHR_debug")
			&& glloader_is_supported("GLES_KHR_texture_compression_astc_ldr")
			&& glloader_is_supported("GLES_KHR_blend_equation_advanced")
			&& glloader_is_supported("GLES_OES_sample_shading")
			&& glloader_is_supported("GLES_OES_sample_variables")
			&& glloader_is_supported("GLES_OES_shader_image_atomic")
			&& glloader_is_supported("GLES_OES_shader_multisample_interpolation")
			&& glloader_is_supported("GLES_OES_texture_stencil8")
			&& glloader_is_supported("GLES_OES_texture_storage_multisample_2d_array")
			&& glloader_is_supported("GLES_EXT_copy_image")
			&& glloader_is_supported("GLES_EXT_draw_buffers_indexed")
			&& glloader_is_supported("GLES_EXT_geometry_shader")
			&& glloader_is_supported("GLES_EXT_gpu_shader5")
			&& glloader_is_supported("GLES_EXT_primitive_bounding_box")
			&& glloader_is_supported("GLES_EXT_shader_io_blocks")
			&& glloader_is_supported("GLES_EXT_tessellation_shader")
			&& glloader_is_supported("GLES_EXT_texture_border_clamp")
			&& glloader_is_supported("GLES_EXT_texture_buffer")
			&& glloader_is_supported("GLES_EXT_texture_cube_map_array")
			&& glloader_is_supported("GLES_EXT_texture_sRGB_decode"))
		{
			_GLES_ANDROID_extension_pack_es31a = 1;
			promote_high("GLES_ANDROID_extension_pack_es31a");
		}
	}
}

void init_GLES_ANGLE_depth_texture()
{
	glloader_GLES_ANGLE_depth_texture = _glloader_GLES_ANGLE_depth_texture;

	_GLES_ANGLE_depth_texture = 0;
	if (glloader_is_supported("GLES_ANGLE_depth_texture"))
	{
		_GLES_ANGLE_depth_texture = 1;
	}
}

void init_GLES_ANGLE_framebuffer_blit()
{
	glloader_GLES_ANGLE_framebuffer_blit = _glloader_GLES_ANGLE_framebuffer_blit;

	{
		glBlitFramebufferANGLE = NULL;
	}

	_GLES_ANGLE_framebuffer_blit = 0;
	if (glloader_is_supported("GLES_ANGLE_framebuffer_blit"))
	{
		_GLES_ANGLE_framebuffer_blit = 1;

		LOAD_FUNC1(glBlitFramebufferANGLE);
	}
}

void init_GLES_ANGLE_framebuffer_multisample()
{
	glloader_GLES_ANGLE_framebuffer_multisample = _glloader_GLES_ANGLE_framebuffer_multisample;

	{
		glRenderbufferStorageMultisampleANGLE = NULL;
	}

	_GLES_ANGLE_framebuffer_multisample = 0;
	if (glloader_is_supported("GLES_ANGLE_framebuffer_multisample"))
	{
		_GLES_ANGLE_framebuffer_multisample = 1;

		LOAD_FUNC1(glRenderbufferStorageMultisampleANGLE);
	}
}

void init_GLES_ANGLE_instanced_arrays()
{
	glloader_GLES_ANGLE_instanced_arrays = _glloader_GLES_ANGLE_instanced_arrays;

	{
		glVertexAttribDivisorANGLE = NULL;
		glDrawArraysInstancedANGLE = NULL;
		glDrawElementsInstancedANGLE = NULL;
	}

	_GLES_ANGLE_instanced_arrays = 0;
	if (glloader_is_supported("GLES_ANGLE_instanced_arrays"))
	{
		_GLES_ANGLE_instanced_arrays = 1;

		LOAD_FUNC1(glVertexAttribDivisorANGLE);
		LOAD_FUNC1(glDrawArraysInstancedANGLE);
		LOAD_FUNC1(glDrawElementsInstancedANGLE);
	}
}

void init_GLES_ANGLE_pack_reverse_row_order()
{
	glloader_GLES_ANGLE_pack_reverse_row_order = _glloader_GLES_ANGLE_pack_reverse_row_order;

	_GLES_ANGLE_pack_reverse_row_order = 0;
	if (glloader_is_supported("GLES_ANGLE_pack_reverse_row_order"))
	{
		_GLES_ANGLE_pack_reverse_row_order = 1;
	}
}

void init_GLES_ANGLE_program_binary()
{
	glloader_GLES_ANGLE_program_binary = _glloader_GLES_ANGLE_program_binary;

	_GLES_ANGLE_program_binary = 0;
	if (glloader_is_supported("GLES_ANGLE_program_binary"))
	{
		_GLES_ANGLE_program_binary = 1;
	}
}

void init_GLES_ANGLE_robust_resource_initialization()
{
	glloader_GLES_ANGLE_robust_resource_initialization = _glloader_GLES_ANGLE_robust_resource_initialization;

	_GLES_ANGLE_robust_resource_initialization = 0;
	if (glloader_is_supported("GLES_ANGLE_robust_resource_initialization"))
	{
		_GLES_ANGLE_robust_resource_initialization = 1;
	}
}

void init_GLES_ANGLE_texture_compression_dxt1()
{
	glloader_GLES_ANGLE_texture_compression_dxt1 = _glloader_GLES_ANGLE_texture_compression_dxt1;

	_GLES_ANGLE_texture_compression_dxt1 = 0;
	if (glloader_is_supported("GLES_ANGLE_texture_compression_dxt1"))
	{
		_GLES_ANGLE_texture_compression_dxt1 = 1;
	}
}

void init_GLES_ANGLE_texture_compression_dxt3()
{
	glloader_GLES_ANGLE_texture_compression_dxt3 = _glloader_GLES_ANGLE_texture_compression_dxt3;

	_GLES_ANGLE_texture_compression_dxt3 = 0;
	if (glloader_is_supported("GLES_ANGLE_texture_compression_dxt3"))
	{
		_GLES_ANGLE_texture_compression_dxt3 = 1;
	}
}

void init_GLES_ANGLE_texture_compression_dxt5()
{
	glloader_GLES_ANGLE_texture_compression_dxt5 = _glloader_GLES_ANGLE_texture_compression_dxt5;

	_GLES_ANGLE_texture_compression_dxt5 = 0;
	if (glloader_is_supported("GLES_ANGLE_texture_compression_dxt5"))
	{
		_GLES_ANGLE_texture_compression_dxt5 = 1;
	}
}

void init_GLES_ANGLE_texture_usage()
{
	glloader_GLES_ANGLE_texture_usage = _glloader_GLES_ANGLE_texture_usage;

	_GLES_ANGLE_texture_usage = 0;
	if (glloader_is_supported("GLES_ANGLE_texture_usage"))
	{
		_GLES_ANGLE_texture_usage = 1;
	}
}

void init_GL_EXT_timer_query()
{
	glloader_GL_EXT_timer_query = _glloader_GL_EXT_timer_query;

	{
		glGenQueriesANGLE = NULL;
		glDeleteQueriesANGLE = NULL;
		glIsQueryANGLE = NULL;
		glBeginQueryANGLE = NULL;
		glEndQueryANGLE = NULL;
		glQueryCounterANGLE = NULL;
		glGetQueryivANGLE = NULL;
		glGetQueryObjectivANGLE = NULL;
		glGetQueryObjectuivANGLE = NULL;
		glGetQueryObjecti64vANGLE = NULL;
		glGetQueryObjectui64vANGLE = NULL;
	}

	_GL_EXT_timer_query = 0;
	if (glloader_is_supported("GL_EXT_timer_query"))
	{
		_GL_EXT_timer_query = 1;

		LOAD_FUNC1(glGenQueriesANGLE);
		LOAD_FUNC1(glDeleteQueriesANGLE);
		LOAD_FUNC1(glIsQueryANGLE);
		LOAD_FUNC1(glBeginQueryANGLE);
		LOAD_FUNC1(glEndQueryANGLE);
		LOAD_FUNC1(glQueryCounterANGLE);
		LOAD_FUNC1(glGetQueryivANGLE);
		LOAD_FUNC1(glGetQueryObjectivANGLE);
		LOAD_FUNC1(glGetQueryObjectuivANGLE);
		LOAD_FUNC1(glGetQueryObjecti64vANGLE);
		LOAD_FUNC1(glGetQueryObjectui64vANGLE);
	}
}

void init_GLES_ANGLE_translated_shader_source()
{
	glloader_GLES_ANGLE_translated_shader_source = _glloader_GLES_ANGLE_translated_shader_source;

	{
		glGetTranslatedShaderSourceANGLE = NULL;
	}

	_GLES_ANGLE_translated_shader_source = 0;
	if (glloader_is_supported("GLES_ANGLE_translated_shader_source"))
	{
		_GLES_ANGLE_translated_shader_source = 1;

		LOAD_FUNC1(glGetTranslatedShaderSourceANGLE);
	}
}

void init_GLES_APPLE_clip_distance()
{
	glloader_GLES_APPLE_clip_distance = _glloader_GLES_APPLE_clip_distance;

	_GLES_APPLE_clip_distance = 0;
	if (glloader_is_supported("GLES_APPLE_clip_distance"))
	{
		_GLES_APPLE_clip_distance = 1;
	}
}

void init_GLES_APPLE_color_buffer_packed_float()
{
	glloader_GLES_APPLE_color_buffer_packed_float = _glloader_GLES_APPLE_color_buffer_packed_float;

	_GLES_APPLE_color_buffer_packed_float = 0;
	if (glloader_is_supported("GLES_APPLE_color_buffer_packed_float"))
	{
		_GLES_APPLE_color_buffer_packed_float = 1;
	}
}

void init_GLES_APPLE_copy_texture_levels()
{
	glloader_GLES_APPLE_copy_texture_levels = _glloader_GLES_APPLE_copy_texture_levels;

	{
		glCopyTextureLevelsAPPLE = NULL;
	}

	_GLES_APPLE_copy_texture_levels = 0;
	if (glloader_is_supported("GLES_APPLE_copy_texture_levels"))
	{
		_GLES_APPLE_copy_texture_levels = 1;

		LOAD_FUNC1(glCopyTextureLevelsAPPLE);
	}
}

void init_GLES_APPLE_framebuffer_multisample()
{
	glloader_GLES_APPLE_framebuffer_multisample = _glloader_GLES_APPLE_framebuffer_multisample;

	{
		glRenderbufferStorageMultisampleAPPLE = NULL;
	}

	_GLES_APPLE_framebuffer_multisample = 0;
	if (glloader_is_supported("GLES_APPLE_framebuffer_multisample"))
	{
		_GLES_APPLE_framebuffer_multisample = 1;

		LOAD_FUNC1(glRenderbufferStorageMultisampleAPPLE);
	}
}

void init_GLES_APPLE_rgb_422()
{
	glloader_GLES_APPLE_rgb_422 = _glloader_GLES_APPLE_rgb_422;

	_GLES_APPLE_rgb_422 = 0;
	if (glloader_is_supported("GLES_APPLE_rgb_422"))
	{
		_GLES_APPLE_rgb_422 = 1;
	}
}

void init_GLES_APPLE_sync()
{
	glloader_GLES_APPLE_sync = _glloader_GLES_APPLE_sync;

	{
		glFenceSyncAPPLE = NULL;
		glIsSyncAPPLE = NULL;
		glDeleteSyncAPPLE = NULL;
		glClientWaitSyncAPPLE = NULL;
		glWaitSyncAPPLE = NULL;
		glGetInteger64vAPPLE = NULL;
		glGetSyncivAPPLE = NULL;
	}

	_GLES_APPLE_sync = 0;
	if (glloader_is_supported("GLES_APPLE_sync"))
	{
		_GLES_APPLE_sync = 1;

		LOAD_FUNC1(glFenceSyncAPPLE);
		LOAD_FUNC1(glIsSyncAPPLE);
		LOAD_FUNC1(glDeleteSyncAPPLE);
		LOAD_FUNC1(glClientWaitSyncAPPLE);
		LOAD_FUNC1(glWaitSyncAPPLE);
		LOAD_FUNC1(glGetInteger64vAPPLE);
		LOAD_FUNC1(glGetSyncivAPPLE);
	}
}

void init_GLES_APPLE_texture_2D_limited_npot()
{
	glloader_GLES_APPLE_texture_2D_limited_npot = _glloader_GLES_APPLE_texture_2D_limited_npot;

	_GLES_APPLE_texture_2D_limited_npot = 0;
	if (glloader_is_supported("GLES_APPLE_texture_2D_limited_npot"))
	{
		_GLES_APPLE_texture_2D_limited_npot = 1;
	}
}

void init_GLES_APPLE_texture_format_BGRA8888()
{
	glloader_GLES_APPLE_texture_format_BGRA8888 = _glloader_GLES_APPLE_texture_format_BGRA8888;

	_GLES_APPLE_texture_format_BGRA8888 = 0;
	if (glloader_is_supported("GLES_APPLE_texture_format_BGRA8888"))
	{
		_GLES_APPLE_texture_format_BGRA8888 = 1;
	}
}

void init_GLES_APPLE_texture_max_level()
{
	glloader_GLES_APPLE_texture_max_level = _glloader_GLES_APPLE_texture_max_level;

	_GLES_APPLE_texture_max_level = 0;
	if (glloader_is_supported("GLES_APPLE_texture_max_level"))
	{
		_GLES_APPLE_texture_max_level = 1;
	}
}

void init_GLES_APPLE_texture_packed_float()
{
	glloader_GLES_APPLE_texture_packed_float = _glloader_GLES_APPLE_texture_packed_float;

	_GLES_APPLE_texture_packed_float = 0;
	if (glloader_is_supported("GLES_APPLE_texture_packed_float"))
	{
		_GLES_APPLE_texture_packed_float = 1;
	}
}

void init_GLES_ARM_mali_program_binary()
{
	glloader_GLES_ARM_mali_program_binary = _glloader_GLES_ARM_mali_program_binary;

	_GLES_ARM_mali_program_binary = 0;
	if (glloader_is_supported("GLES_ARM_mali_program_binary"))
	{
		_GLES_ARM_mali_program_binary = 1;
	}
}

void init_GLES_ARM_mali_shader_binary()
{
	glloader_GLES_ARM_mali_shader_binary = _glloader_GLES_ARM_mali_shader_binary;

	_GLES_ARM_mali_shader_binary = 0;
	if (glloader_is_supported("GLES_ARM_mali_shader_binary"))
	{
		_GLES_ARM_mali_shader_binary = 1;
	}
}

void init_GLES_ARM_rgba8()
{
	glloader_GLES_ARM_rgba8 = _glloader_GLES_ARM_rgba8;

	_GLES_ARM_rgba8 = 0;
	if (glloader_is_supported("GLES_ARM_rgba8"))
	{
		_GLES_ARM_rgba8 = 1;
	}
}

void init_GLES_ARM_shader_framebuffer_fetch()
{
	glloader_GLES_ARM_shader_framebuffer_fetch = _glloader_GLES_ARM_shader_framebuffer_fetch;

	_GLES_ARM_shader_framebuffer_fetch = 0;
	if (glloader_is_supported("GLES_ARM_shader_framebuffer_fetch"))
	{
		_GLES_ARM_shader_framebuffer_fetch = 1;
	}
}

void init_GLES_ARM_shader_framebuffer_fetch_depth_stencil()
{
	glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil = _glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil;

	_GLES_ARM_shader_framebuffer_fetch_depth_stencil = 0;
	if (glloader_is_supported("GLES_ARM_shader_framebuffer_fetch_depth_stencil"))
	{
		_GLES_ARM_shader_framebuffer_fetch_depth_stencil = 1;
	}
}

void init_GLES_DMP_program_binary()
{
	glloader_GLES_DMP_program_binary = _glloader_GLES_DMP_program_binary;

	_GLES_DMP_program_binary = 0;
	if (glloader_is_supported("GLES_DMP_program_binary"))
	{
		_GLES_DMP_program_binary = 1;
	}
}

void init_GLES_EXT_base_instance()
{
	glloader_GLES_EXT_base_instance = _glloader_GLES_EXT_base_instance;

	{
		glDrawArraysInstancedBaseInstanceEXT = NULL;
		glDrawElementsInstancedBaseInstanceEXT = NULL;
		glDrawElementsInstancedBaseVertexBaseInstanceEXT = NULL;
	}

	_GLES_EXT_base_instance = 0;
	if (glloader_is_supported("GLES_EXT_base_instance"))
	{
		_GLES_EXT_base_instance = 1;

		LOAD_FUNC1(glDrawArraysInstancedBaseInstanceEXT);
		LOAD_FUNC1(glDrawElementsInstancedBaseInstanceEXT);
		LOAD_FUNC1(glDrawElementsInstancedBaseVertexBaseInstanceEXT);
	}
}

void init_GLES_EXT_blend_minmax()
{
	glloader_GLES_EXT_blend_minmax = _glloader_GLES_EXT_blend_minmax;

	{
		glBlendEquationEXT = NULL;
	}

	_GLES_EXT_blend_minmax = 0;
	if (glloader_is_supported("GLES_EXT_blend_minmax"))
	{
		_GLES_EXT_blend_minmax = 1;

		LOAD_FUNC1(glBlendEquationEXT);
	}
}

void init_GLES_EXT_buffer_storage()
{
	glloader_GLES_EXT_buffer_storage = _glloader_GLES_EXT_buffer_storage;

	{
		glBufferStorageEXT = NULL;
		glNamedBufferStorageEXT = NULL;
	}

	_GLES_EXT_buffer_storage = 0;
	if (glloader_is_supported("GLES_EXT_buffer_storage"))
	{
		_GLES_EXT_buffer_storage = 1;

		LOAD_FUNC1(glBufferStorageEXT);
		LOAD_FUNC1(glNamedBufferStorageEXT);
	}
}

void init_GLES_EXT_color_buffer_float()
{
	glloader_GLES_EXT_color_buffer_float = _glloader_GLES_EXT_color_buffer_float;

	_GLES_EXT_color_buffer_float = 0;
	if (glloader_is_supported("GLES_EXT_color_buffer_float"))
	{
		_GLES_EXT_color_buffer_float = 1;
	}
}

void init_GLES_EXT_color_buffer_half_float()
{
	glloader_GLES_EXT_color_buffer_half_float = _glloader_GLES_EXT_color_buffer_half_float;

	_GLES_EXT_color_buffer_half_float = 0;
	if (glloader_is_supported("GLES_EXT_color_buffer_half_float"))
	{
		_GLES_EXT_color_buffer_half_float = 1;
	}
}

void init_GLES_EXT_compressed_ETC1_RGB8_sub_texture()
{
	glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture = _glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture;

	_GLES_EXT_compressed_ETC1_RGB8_sub_texture = 0;
	if (glloader_is_supported("GLES_EXT_compressed_ETC1_RGB8_sub_texture"))
	{
		_GLES_EXT_compressed_ETC1_RGB8_sub_texture = 1;
	}
}

void init_GLES_EXT_copy_image()
{
	glloader_GLES_EXT_copy_image = _glloader_GLES_EXT_copy_image;

	{
		glCopyImageSubDataEXT = NULL;
	}

	_GLES_EXT_copy_image = 0;
	if (glloader_is_supported("GLES_EXT_copy_image"))
	{
		_GLES_EXT_copy_image = 1;

		LOAD_FUNC1(glCopyImageSubDataEXT);
	}
}

void init_GLES_EXT_debug_label()
{
	glloader_GLES_EXT_debug_label = _glloader_GLES_EXT_debug_label;

	{
		glLabelObjectEXT = NULL;
		glGetObjectLabelEXT = NULL;
	}

	_GLES_EXT_debug_label = 0;
	if (glloader_is_supported("GLES_EXT_debug_label"))
	{
		_GLES_EXT_debug_label = 1;

		LOAD_FUNC1(glLabelObjectEXT);
		LOAD_FUNC1(glGetObjectLabelEXT);
	}
}

void init_GLES_EXT_debug_marker()
{
	glloader_GLES_EXT_debug_marker = _glloader_GLES_EXT_debug_marker;

	{
		glInsertEventMarkerEXT = NULL;
		glPushGroupMarkerEXT = NULL;
		glPopGroupMarkerEXT = NULL;
	}

	_GLES_EXT_debug_marker = 0;
	if (glloader_is_supported("GLES_EXT_debug_marker"))
	{
		_GLES_EXT_debug_marker = 1;

		LOAD_FUNC1(glInsertEventMarkerEXT);
		LOAD_FUNC1(glPushGroupMarkerEXT);
		LOAD_FUNC1(glPopGroupMarkerEXT);
	}
}

void init_GLES_EXT_discard_framebuffer()
{
	glloader_GLES_EXT_discard_framebuffer = _glloader_GLES_EXT_discard_framebuffer;

	{
		glDiscardFramebufferEXT = NULL;
	}

	_GLES_EXT_discard_framebuffer = 0;
	if (glloader_is_supported("GLES_EXT_discard_framebuffer"))
	{
		_GLES_EXT_discard_framebuffer = 1;

		LOAD_FUNC1(glDiscardFramebufferEXT);
	}
}

void init_GLES_EXT_disjoint_timer_query()
{
	glloader_GLES_EXT_disjoint_timer_query = _glloader_GLES_EXT_disjoint_timer_query;

	{
		glGenQueriesEXT = NULL;
		glDeleteQueriesEXT = NULL;
		glIsQueryEXT = NULL;
		glBeginQueryEXT = NULL;
		glEndQueryEXT = NULL;
		glQueryCounterEXT = NULL;
		glGetQueryivEXT = NULL;
		glGetQueryObjectivEXT = NULL;
		glGetQueryObjectuivEXT = NULL;
		glGetQueryObjecti64vEXT = NULL;
		glGetQueryObjectui64vEXT = NULL;
	}

	_GLES_EXT_disjoint_timer_query = 0;
	if (glloader_is_supported("GLES_EXT_disjoint_timer_query"))
	{
		_GLES_EXT_disjoint_timer_query = 1;

		LOAD_FUNC1(glGenQueriesEXT);
		LOAD_FUNC1(glDeleteQueriesEXT);
		LOAD_FUNC1(glIsQueryEXT);
		LOAD_FUNC1(glBeginQueryEXT);
		LOAD_FUNC1(glEndQueryEXT);
		LOAD_FUNC1(glQueryCounterEXT);
		LOAD_FUNC1(glGetQueryivEXT);
		LOAD_FUNC1(glGetQueryObjectivEXT);
		LOAD_FUNC1(glGetQueryObjectuivEXT);
		LOAD_FUNC1(glGetQueryObjecti64vEXT);
		LOAD_FUNC1(glGetQueryObjectui64vEXT);
	}
}

void init_GLES_EXT_draw_buffers()
{
	glloader_GLES_EXT_draw_buffers = _glloader_GLES_EXT_draw_buffers;

	{
		glDrawBuffersEXT = NULL;
	}

	_GLES_EXT_draw_buffers = 0;
	if (glloader_is_supported("GLES_EXT_draw_buffers"))
	{
		_GLES_EXT_draw_buffers = 1;

		LOAD_FUNC1(glDrawBuffersEXT);
	}
	else
	{
		if (glloader_is_supported("GLES_NV_draw_buffers"))
		{
			LOAD_FUNC2(glDrawBuffersEXT, glDrawBuffersNV);

			_GLES_EXT_draw_buffers = 1;
			promote_high("GLES_EXT_draw_buffers");
		}
	}
}

void init_GLES_EXT_draw_buffers_indexed()
{
	glloader_GLES_EXT_draw_buffers_indexed = _glloader_GLES_EXT_draw_buffers_indexed;

	{
		glEnableiEXT = NULL;
		glDisableiEXT = NULL;
		glBlendEquationiEXT = NULL;
		glBlendEquationSeparateiEXT = NULL;
		glBlendFunciEXT = NULL;
		glBlendFuncSeparateiEXT = NULL;
		glColorMaskiEXT = NULL;
		glIsEnablediEXT = NULL;
	}

	_GLES_EXT_draw_buffers_indexed = 0;
	if (glloader_is_supported("GLES_EXT_draw_buffers_indexed"))
	{
		_GLES_EXT_draw_buffers_indexed = 1;

		LOAD_FUNC1(glEnableiEXT);
		LOAD_FUNC1(glDisableiEXT);
		LOAD_FUNC1(glBlendEquationiEXT);
		LOAD_FUNC1(glBlendEquationSeparateiEXT);
		LOAD_FUNC1(glBlendFunciEXT);
		LOAD_FUNC1(glBlendFuncSeparateiEXT);
		LOAD_FUNC1(glColorMaskiEXT);
		LOAD_FUNC1(glIsEnablediEXT);
	}
}

void init_GLES_EXT_draw_elements_base_vertex()
{
	glloader_GLES_EXT_draw_elements_base_vertex = _glloader_GLES_EXT_draw_elements_base_vertex;

	{
		glDrawElementsBaseVertexEXT = NULL;
		glDrawRangeElementsBaseVertexEXT = NULL;
		glDrawElementsInstancedBaseVertexEXT = NULL;
		glMultiDrawElementsBaseVertexEXT = NULL;
	}

	_GLES_EXT_draw_elements_base_vertex = 0;
	if (glloader_is_supported("GLES_EXT_draw_elements_base_vertex"))
	{
		_GLES_EXT_draw_elements_base_vertex = 1;

		LOAD_FUNC1(glDrawElementsBaseVertexEXT);
		LOAD_FUNC1(glDrawRangeElementsBaseVertexEXT);
		LOAD_FUNC1(glDrawElementsInstancedBaseVertexEXT);
		LOAD_FUNC1(glMultiDrawElementsBaseVertexEXT);
	}
}

void init_GLES_EXT_draw_instanced()
{
	glloader_GLES_EXT_draw_instanced = _glloader_GLES_EXT_draw_instanced;

	{
		glDrawArraysInstancedEXT = NULL;
		glDrawElementsInstancedEXT = NULL;
	}

	_GLES_EXT_draw_instanced = 0;
	if (glloader_is_supported("GLES_EXT_draw_instanced"))
	{
		_GLES_EXT_draw_instanced = 1;

		LOAD_FUNC1(glDrawArraysInstancedEXT);
		LOAD_FUNC1(glDrawElementsInstancedEXT);
	}
	else
	{
		if (glloader_is_supported("GLES_NV_draw_instanced"))
		{
			LOAD_FUNC2(glDrawArraysInstancedEXT, glDrawArraysInstancedNV);
			LOAD_FUNC2(glDrawElementsInstancedEXT, glDrawElementsInstancedNV);

			_GLES_EXT_draw_instanced = 1;
			promote_high("GLES_EXT_draw_instanced");
		}
		else if (glloader_is_supported("GLES_ANGLE_instanced_arrays"))
		{
			LOAD_FUNC2(glDrawArraysInstancedEXT, glDrawArraysInstancedANGLE);
			LOAD_FUNC2(glDrawElementsInstancedEXT, glDrawElementsInstancedANGLE);

			_GLES_EXT_draw_instanced = 1;
			promote_high("GLES_EXT_draw_instanced");
		}
	}
}

void init_GLES_EXT_float_blend()
{
	glloader_GLES_EXT_float_blend = _glloader_GLES_EXT_float_blend;

	_GLES_EXT_float_blend = 0;
	if (glloader_is_supported("GLES_EXT_float_blend"))
	{
		_GLES_EXT_float_blend = 1;
	}
}

void init_GLES_EXT_frag_depth()
{
	glloader_GLES_EXT_frag_depth = _glloader_GLES_EXT_frag_depth;

	_GLES_EXT_frag_depth = 0;
	if (glloader_is_supported("GLES_EXT_frag_depth"))
	{
		_GLES_EXT_frag_depth = 1;
	}
}

void init_GLES_EXT_geometry_shader()
{
	glloader_GLES_EXT_geometry_shader = _glloader_GLES_EXT_geometry_shader;

	{
		glFramebufferTextureEXT = NULL;
	}

	_GLES_EXT_geometry_shader = 0;
	if (glloader_is_supported("GLES_EXT_geometry_shader"))
	{
		_GLES_EXT_geometry_shader = 1;

		LOAD_FUNC1(glFramebufferTextureEXT);
	}
}

void init_GLES_EXT_gpu_shader5()
{
	glloader_GLES_EXT_gpu_shader5 = _glloader_GLES_EXT_gpu_shader5;

	_GLES_EXT_gpu_shader5 = 0;
	if (glloader_is_supported("GLES_EXT_gpu_shader5"))
	{
		_GLES_EXT_gpu_shader5 = 1;
	}
}

void init_GLES_EXT_instanced_arrays()
{
	glloader_GLES_EXT_instanced_arrays = _glloader_GLES_EXT_instanced_arrays;

	{
		glVertexAttribDivisorEXT = NULL;
		glDrawArraysInstancedEXT = NULL;
		glDrawElementsInstancedEXT = NULL;
	}

	_GLES_EXT_instanced_arrays = 0;
	if (glloader_is_supported("GLES_EXT_instanced_arrays"))
	{
		_GLES_EXT_instanced_arrays = 1;

		LOAD_FUNC1(glVertexAttribDivisorEXT);
		LOAD_FUNC1(glDrawArraysInstancedEXT);
		LOAD_FUNC1(glDrawElementsInstancedEXT);
	}
	else
	{
		if (glloader_is_supported("GLES_NV_instanced_arrays"))
		{
			LOAD_FUNC2(glVertexAttribDivisorEXT, glVertexAttribDivisorNV);
		}
		else if (glloader_is_supported("GLES_ANGLE_instanced_arrays"))
		{
			LOAD_FUNC2(glVertexAttribDivisorEXT, glVertexAttribDivisorANGLE);
		}
		if (glloader_is_supported("GLES_NV_draw_instanced"))
		{
			LOAD_FUNC2(glDrawArraysInstancedEXT, glDrawArraysInstancedNV);
			LOAD_FUNC2(glDrawElementsInstancedEXT, glDrawElementsInstancedNV);
		}
		else if (glloader_is_supported("GLES_ANGLE_instanced_arrays"))
		{
			LOAD_FUNC2(glDrawArraysInstancedEXT, glDrawArraysInstancedANGLE);
			LOAD_FUNC2(glDrawElementsInstancedEXT, glDrawElementsInstancedANGLE);
		}

		if ((glloader_is_supported("GLES_NV_instanced_arrays") || glloader_is_supported("GLES_ANGLE_instanced_arrays"))
			&& (glloader_is_supported("GLES_NV_draw_instanced") || glloader_is_supported("GLES_ANGLE_instanced_arrays")))
		{
			_GLES_EXT_instanced_arrays = 1;
			promote_high("GLES_EXT_instanced_arrays");
		}
	}
}

void init_GLES_EXT_map_buffer_range()
{
	glloader_GLES_EXT_map_buffer_range = _glloader_GLES_EXT_map_buffer_range;

	{
		glMapBufferRangeEXT = NULL;
		glFlushMappedBufferRangeEXT = NULL;
	}

	_GLES_EXT_map_buffer_range = 0;
	if (glloader_is_supported("GLES_EXT_map_buffer_range"))
	{
		_GLES_EXT_map_buffer_range = 1;

		LOAD_FUNC1(glMapBufferRangeEXT);
		LOAD_FUNC1(glFlushMappedBufferRangeEXT);
	}
}

void init_GLES_EXT_multisampled_render_to_texture()
{
	glloader_GLES_EXT_multisampled_render_to_texture = _glloader_GLES_EXT_multisampled_render_to_texture;

	{
		glRenderbufferStorageMultisampleEXT = NULL;
		glFramebufferTexture2DMultisampleEXT = NULL;
	}

	_GLES_EXT_multisampled_render_to_texture = 0;
	if (glloader_is_supported("GLES_EXT_multisampled_render_to_texture"))
	{
		_GLES_EXT_multisampled_render_to_texture = 1;

		LOAD_FUNC1(glRenderbufferStorageMultisampleEXT);
		LOAD_FUNC1(glFramebufferTexture2DMultisampleEXT);
	}
	else
	{
		if (glloader_is_supported("GLES_IMG_multisampled_render_to_texture"))
		{
			LOAD_FUNC2(glRenderbufferStorageMultisampleEXT, glRenderbufferStorageMultisampleIMG);
			LOAD_FUNC2(glFramebufferTexture2DMultisampleEXT, glFramebufferTexture2DMultisampleIMG);

			_GLES_EXT_multisampled_render_to_texture = 1;
			promote_high("GLES_EXT_multisampled_render_to_texture");
		}
	}
}

void init_GLES_EXT_multiview_draw_buffers()
{
	glloader_GLES_EXT_multiview_draw_buffers = _glloader_GLES_EXT_multiview_draw_buffers;

	{
		glReadBufferIndexedEXT = NULL;
		glDrawBuffersIndexedEXT = NULL;
		GetIntegeri_vEXT = NULL;
	}

	_GLES_EXT_multiview_draw_buffers = 0;
	if (glloader_is_supported("GLES_EXT_multiview_draw_buffers"))
	{
		_GLES_EXT_multiview_draw_buffers = 1;

		LOAD_FUNC1(glReadBufferIndexedEXT);
		LOAD_FUNC1(glDrawBuffersIndexedEXT);
		LOAD_FUNC1(GetIntegeri_vEXT);
	}
}

void init_GLES_EXT_multi_draw_arrays()
{
	glloader_GLES_EXT_multi_draw_arrays = _glloader_GLES_EXT_multi_draw_arrays;

	{
		glMultiDrawArraysEXT = NULL;
		glMultiDrawElementsEXT = NULL;
	}

	_GLES_EXT_multi_draw_arrays = 0;
	if (glloader_is_supported("GLES_EXT_multi_draw_arrays"))
	{
		_GLES_EXT_multi_draw_arrays = 1;

		LOAD_FUNC1(glMultiDrawArraysEXT);
		LOAD_FUNC1(glMultiDrawElementsEXT);
	}
}

void init_GLES_EXT_multi_draw_indirect()
{
	glloader_GLES_EXT_multi_draw_indirect = _glloader_GLES_EXT_multi_draw_indirect;

	{
		glMultiDrawArraysIndirectEXT = NULL;
		glMultiDrawElementsIndirectEXT = NULL;
	}

	_GLES_EXT_multi_draw_indirect = 0;
	if (glloader_is_supported("GLES_EXT_multi_draw_indirect"))
	{
		_GLES_EXT_multi_draw_indirect = 1;

		LOAD_FUNC1(glMultiDrawArraysIndirectEXT);
		LOAD_FUNC1(glMultiDrawElementsIndirectEXT);
	}
}

void init_GLES_EXT_occlusion_query_boolean()
{
	glloader_GLES_EXT_occlusion_query_boolean = _glloader_GLES_EXT_occlusion_query_boolean;

	{
		glGenQueriesEXT = NULL;
		glDeleteQueriesEXT = NULL;
		glIsQueryEXT = NULL;
		glBeginQueryEXT = NULL;
		glEndQueryEXT = NULL;
		glGetQueryivEXT = NULL;
		glGetQueryObjectuivEXT = NULL;
	}

	_GLES_EXT_occlusion_query_boolean = 0;
	if (glloader_is_supported("GLES_EXT_occlusion_query_boolean"))
	{
		_GLES_EXT_occlusion_query_boolean = 1;

		LOAD_FUNC1(glGenQueriesEXT);
		LOAD_FUNC1(glDeleteQueriesEXT);
		LOAD_FUNC1(glIsQueryEXT);
		LOAD_FUNC1(glBeginQueryEXT);
		LOAD_FUNC1(glEndQueryEXT);
		LOAD_FUNC1(glGetQueryivEXT);
		LOAD_FUNC1(glGetQueryObjectuivEXT);
	}
}

void init_GLES_EXT_post_depth_coverage()
{
	glloader_GLES_EXT_post_depth_coverage = _glloader_GLES_EXT_post_depth_coverage;

	_GLES_EXT_post_depth_coverage = 0;
	if (glloader_is_supported("GLES_EXT_post_depth_coverage"))
	{
		_GLES_EXT_post_depth_coverage = 1;
	}
}

void init_GLES_EXT_primitive_bounding_box()
{
	glloader_GLES_EXT_primitive_bounding_box = _glloader_GLES_EXT_primitive_bounding_box;

	{
		glPrimitiveBoundingBoxEXT = NULL;
	}

	_GLES_EXT_primitive_bounding_box = 0;
	if (glloader_is_supported("GLES_EXT_primitive_bounding_box"))
	{
		_GLES_EXT_primitive_bounding_box = 1;

		LOAD_FUNC1(glPrimitiveBoundingBoxEXT);
	}
}

void init_GLES_EXT_pvrtc_sRGB()
{
	glloader_GLES_EXT_pvrtc_sRGB = _glloader_GLES_EXT_pvrtc_sRGB;

	_GLES_EXT_pvrtc_sRGB = 0;
	if (glloader_is_supported("GLES_EXT_pvrtc_sRGB"))
	{
		_GLES_EXT_pvrtc_sRGB = 1;
	}
}

void init_GLES_EXT_raster_multisample()
{
	glloader_GLES_EXT_raster_multisample = _glloader_GLES_EXT_raster_multisample;

	{
		glRasterSamplesEXT = NULL;
	}

	_GLES_EXT_raster_multisample = 0;
	if (glloader_is_supported("GLES_EXT_raster_multisample"))
	{
		_GLES_EXT_raster_multisample = 1;

		LOAD_FUNC1(glRasterSamplesEXT);
	}
}

void init_GLES_EXT_read_format_bgra()
{
	glloader_GLES_EXT_read_format_bgra = _glloader_GLES_EXT_read_format_bgra;

	_GLES_EXT_read_format_bgra = 0;
	if (glloader_is_supported("GLES_EXT_read_format_bgra"))
	{
		_GLES_EXT_read_format_bgra = 1;
	}
}

void init_GLES_EXT_render_snorm()
{
	glloader_GLES_EXT_render_snorm = _glloader_GLES_EXT_render_snorm;

	_GLES_EXT_render_snorm = 0;
	if (glloader_is_supported("GLES_EXT_render_snorm"))
	{
		_GLES_EXT_render_snorm = 1;
	}
}

void init_GLES_EXT_robustness()
{
	glloader_GLES_EXT_robustness = _glloader_GLES_EXT_robustness;

	{
		glGetGraphicsResetStatusEXT = NULL;
		glReadnPixelsEXT = NULL;
		glGetnUniformfvEXT = NULL;
		glGetnUniformivEXT = NULL;
	}

	_GLES_EXT_robustness = 0;
	if (glloader_is_supported("GLES_EXT_robustness"))
	{
		_GLES_EXT_robustness = 1;

		LOAD_FUNC1(glGetGraphicsResetStatusEXT);
		LOAD_FUNC1(glReadnPixelsEXT);
		LOAD_FUNC1(glGetnUniformfvEXT);
		LOAD_FUNC1(glGetnUniformivEXT);
	}
}

void init_GLES_EXT_separate_shader_objects()
{
	glloader_GLES_EXT_separate_shader_objects = _glloader_GLES_EXT_separate_shader_objects;

	{
		glUseShaderProgramEXT = NULL;
		glActiveProgramEXT = NULL;
		glCreateShaderProgramEXT = NULL;
		glBindProgramPipelineEXT = NULL;
		glDeleteProgramPipelinesEXT = NULL;
		glGenProgramPipelinesEXT = NULL;
		glIsProgramPipelineEXT = NULL;
		glProgramParameteriEXT = NULL;
		glGetProgramPipelineivEXT = NULL;
		glProgramUniform1iEXT = NULL;
		glProgramUniform2iEXT = NULL;
		glProgramUniform3iEXT = NULL;
		glProgramUniform4iEXT = NULL;
		glProgramUniform1fEXT = NULL;
		glProgramUniform2fEXT = NULL;
		glProgramUniform3fEXT = NULL;
		glProgramUniform4fEXT = NULL;
		glProgramUniform1ivEXT = NULL;
		glProgramUniform2ivEXT = NULL;
		glProgramUniform3ivEXT = NULL;
		glProgramUniform4ivEXT = NULL;
		glProgramUniform1fvEXT = NULL;
		glProgramUniform2fvEXT = NULL;
		glProgramUniform3fvEXT = NULL;
		glProgramUniform4fvEXT = NULL;
		glProgramUniformMatrix2fvEXT = NULL;
		glProgramUniformMatrix3fvEXT = NULL;
		glProgramUniformMatrix4fvEXT = NULL;
		glValidateProgramPipelineEXT = NULL;
		glGetProgramPipelineInfoLogEXT = NULL;
	}

	_GLES_EXT_separate_shader_objects = 0;
	if (glloader_is_supported("GLES_EXT_separate_shader_objects"))
	{
		_GLES_EXT_separate_shader_objects = 1;

		LOAD_FUNC1(glUseShaderProgramEXT);
		LOAD_FUNC1(glActiveProgramEXT);
		LOAD_FUNC1(glCreateShaderProgramEXT);
		LOAD_FUNC1(glBindProgramPipelineEXT);
		LOAD_FUNC1(glDeleteProgramPipelinesEXT);
		LOAD_FUNC1(glGenProgramPipelinesEXT);
		LOAD_FUNC1(glIsProgramPipelineEXT);
		LOAD_FUNC1(glProgramParameteriEXT);
		LOAD_FUNC1(glGetProgramPipelineivEXT);
		LOAD_FUNC1(glProgramUniform1iEXT);
		LOAD_FUNC1(glProgramUniform2iEXT);
		LOAD_FUNC1(glProgramUniform3iEXT);
		LOAD_FUNC1(glProgramUniform4iEXT);
		LOAD_FUNC1(glProgramUniform1fEXT);
		LOAD_FUNC1(glProgramUniform2fEXT);
		LOAD_FUNC1(glProgramUniform3fEXT);
		LOAD_FUNC1(glProgramUniform4fEXT);
		LOAD_FUNC1(glProgramUniform1ivEXT);
		LOAD_FUNC1(glProgramUniform2ivEXT);
		LOAD_FUNC1(glProgramUniform3ivEXT);
		LOAD_FUNC1(glProgramUniform4ivEXT);
		LOAD_FUNC1(glProgramUniform1fvEXT);
		LOAD_FUNC1(glProgramUniform2fvEXT);
		LOAD_FUNC1(glProgramUniform3fvEXT);
		LOAD_FUNC1(glProgramUniform4fvEXT);
		LOAD_FUNC1(glProgramUniformMatrix2fvEXT);
		LOAD_FUNC1(glProgramUniformMatrix3fvEXT);
		LOAD_FUNC1(glProgramUniformMatrix4fvEXT);
		LOAD_FUNC1(glValidateProgramPipelineEXT);
		LOAD_FUNC1(glGetProgramPipelineInfoLogEXT);
	}
}

void init_GLES_EXT_shader_framebuffer_fetch()
{
	glloader_GLES_EXT_shader_framebuffer_fetch = _glloader_GLES_EXT_shader_framebuffer_fetch;

	_GLES_EXT_shader_framebuffer_fetch = 0;
	if (glloader_is_supported("GLES_EXT_shader_framebuffer_fetch"))
	{
		_GLES_EXT_shader_framebuffer_fetch = 1;
	}
}

void init_GLES_EXT_shader_implicit_conversions()
{
	glloader_GLES_EXT_shader_implicit_conversions = _glloader_GLES_EXT_shader_implicit_conversions;

	_GLES_EXT_shader_implicit_conversions = 0;
	if (glloader_is_supported("GLES_EXT_shader_implicit_conversions"))
	{
		_GLES_EXT_shader_implicit_conversions = 1;
	}
}

void init_GLES_EXT_shader_integer_mix()
{
	glloader_GLES_EXT_shader_integer_mix = _glloader_GLES_EXT_shader_integer_mix;

	_GLES_EXT_shader_integer_mix = 0;
	if (glloader_is_supported("GLES_EXT_shader_integer_mix"))
	{
		_GLES_EXT_shader_integer_mix = 1;
	}
}

void init_GLES_EXT_shader_io_blocks()
{
	glloader_GLES_EXT_shader_io_blocks = _glloader_GLES_EXT_shader_io_blocks;

	_GLES_EXT_shader_io_blocks = 0;
	if (glloader_is_supported("GLES_EXT_shader_io_blocks"))
	{
		_GLES_EXT_shader_io_blocks = 1;
	}
}

void init_GLES_EXT_shader_pixel_local_storage()
{
	glloader_GLES_EXT_shader_pixel_local_storage = _glloader_GLES_EXT_shader_pixel_local_storage;

	_GLES_EXT_shader_pixel_local_storage = 0;
	if (glloader_is_supported("GLES_EXT_shader_pixel_local_storage"))
	{
		_GLES_EXT_shader_pixel_local_storage = 1;
	}
}

void init_GLES_EXT_shader_texture_lod()
{
	glloader_GLES_EXT_shader_texture_lod = _glloader_GLES_EXT_shader_texture_lod;

	_GLES_EXT_shader_texture_lod = 0;
	if (glloader_is_supported("GLES_EXT_shader_texture_lod"))
	{
		_GLES_EXT_shader_texture_lod = 1;
	}
}

void init_GLES_EXT_shadow_samplers()
{
	glloader_GLES_EXT_shadow_samplers = _glloader_GLES_EXT_shadow_samplers;

	_GLES_EXT_shadow_samplers = 0;
	if (glloader_is_supported("GLES_EXT_shadow_samplers"))
	{
		_GLES_EXT_shadow_samplers = 1;
	}
}

void init_GLES_EXT_sparse_texture()
{
	glloader_GLES_EXT_sparse_texture = _glloader_GLES_EXT_sparse_texture;

	{
		glTexPageCommitmentEXT = NULL;
		glTexturePageCommitmentEXT = NULL;
	}

	_GLES_EXT_sparse_texture = 0;
	if (glloader_is_supported("GLES_EXT_sparse_texture"))
	{
		_GLES_EXT_sparse_texture = 1;

		LOAD_FUNC1(glTexPageCommitmentEXT);
		LOAD_FUNC1(glTexturePageCommitmentEXT);
	}
}

void init_GLES_EXT_sRGB()
{
	glloader_GLES_EXT_sRGB = _glloader_GLES_EXT_sRGB;

	_GLES_EXT_sRGB = 0;
	if (glloader_is_supported("GLES_EXT_sRGB"))
	{
		_GLES_EXT_sRGB = 1;
	}
}

void init_GLES_EXT_sRGB_write_control()
{
	glloader_GLES_EXT_sRGB_write_control = _glloader_GLES_EXT_sRGB_write_control;

	_GLES_EXT_sRGB_write_control = 0;
	if (glloader_is_supported("GLES_EXT_sRGB_write_control"))
	{
		_GLES_EXT_sRGB_write_control = 1;
	}
}

void init_GLES_EXT_tessellation_shader()
{
	glloader_GLES_EXT_tessellation_shader = _glloader_GLES_EXT_tessellation_shader;

	{
		glPatchParameteriEXT = NULL;
	}

	_GLES_EXT_tessellation_shader = 0;
	if (glloader_is_supported("GLES_EXT_tessellation_shader"))
	{
		_GLES_EXT_tessellation_shader = 1;

		LOAD_FUNC1(glPatchParameteriEXT);
	}
}

void init_GLES_EXT_texture_border_clamp()
{
	glloader_GLES_EXT_texture_border_clamp = _glloader_GLES_EXT_texture_border_clamp;

	{
		glTexParameterIivEXT = NULL;
		glTexParameterIuivEXT = NULL;
		glGetTexParameterIivEXT = NULL;
		glGetTexParameterIuivEXT = NULL;
		glSamplerParameterIivEXT = NULL;
		glSamplerParameterIuivEXT = NULL;
		glGetSamplerParameterIivEXT = NULL;
		glGetSamplerParameterIuivEXT = NULL;
	}

	_GLES_EXT_texture_border_clamp = 0;
	if (glloader_is_supported("GLES_EXT_texture_border_clamp"))
	{
		_GLES_EXT_texture_border_clamp = 1;

		LOAD_FUNC1(glTexParameterIivEXT);
		LOAD_FUNC1(glTexParameterIuivEXT);
		LOAD_FUNC1(glGetTexParameterIivEXT);
		LOAD_FUNC1(glGetTexParameterIuivEXT);
		LOAD_FUNC1(glSamplerParameterIivEXT);
		LOAD_FUNC1(glSamplerParameterIuivEXT);
		LOAD_FUNC1(glGetSamplerParameterIivEXT);
		LOAD_FUNC1(glGetSamplerParameterIuivEXT);
	}
}

void init_GLES_EXT_texture_buffer()
{
	glloader_GLES_EXT_texture_buffer = _glloader_GLES_EXT_texture_buffer;

	{
		glTexBufferEXT = NULL;
		glTexBufferRangeEXT = NULL;
	}

	_GLES_EXT_texture_buffer = 0;
	if (glloader_is_supported("GLES_EXT_texture_buffer"))
	{
		_GLES_EXT_texture_buffer = 1;

		LOAD_FUNC1(glTexBufferEXT);
		LOAD_FUNC1(glTexBufferRangeEXT);
	}
}

void init_GLES_EXT_texture_compression_dxt1()
{
	glloader_GLES_EXT_texture_compression_dxt1 = _glloader_GLES_EXT_texture_compression_dxt1;

	_GLES_EXT_texture_compression_dxt1 = 0;
	if (glloader_is_supported("GLES_EXT_texture_compression_dxt1"))
	{
		_GLES_EXT_texture_compression_dxt1 = 1;
	}
}

void init_GLES_EXT_texture_compression_latc()
{
	glloader_GLES_EXT_texture_compression_latc = _glloader_GLES_EXT_texture_compression_latc;

	_GLES_EXT_texture_compression_latc = 0;
	if (glloader_is_supported("GLES_EXT_texture_compression_latc"))
	{
		_GLES_EXT_texture_compression_latc = 1;
	}
}

void init_GLES_EXT_texture_compression_s3tc()
{
	glloader_GLES_EXT_texture_compression_s3tc = _glloader_GLES_EXT_texture_compression_s3tc;

	_GLES_EXT_texture_compression_s3tc = 0;
	if (glloader_is_supported("GLES_EXT_texture_compression_s3tc"))
	{
		_GLES_EXT_texture_compression_s3tc = 1;
	}
	else
	{
		if (glloader_is_supported("GLES_NV_texture_compression_s3tc"))
		{
			_GLES_EXT_texture_compression_s3tc = 1;
			promote_high("GLES_EXT_texture_compression_s3tc");
		}
	}
}

void init_GLES_EXT_texture_cube_map_array()
{
	glloader_GLES_EXT_texture_cube_map_array = _glloader_GLES_EXT_texture_cube_map_array;

	_GLES_EXT_texture_cube_map_array = 0;
	if (glloader_is_supported("GLES_EXT_texture_cube_map_array"))
	{
		_GLES_EXT_texture_cube_map_array = 1;
	}
}

void init_GLES_EXT_texture_filter_anisotropic()
{
	glloader_GLES_EXT_texture_filter_anisotropic = _glloader_GLES_EXT_texture_filter_anisotropic;

	_GLES_EXT_texture_filter_anisotropic = 0;
	if (glloader_is_supported("GLES_EXT_texture_filter_anisotropic"))
	{
		_GLES_EXT_texture_filter_anisotropic = 1;
	}
}

void init_GLES_EXT_texture_filter_minmax()
{
	glloader_GLES_EXT_texture_filter_minmax = _glloader_GLES_EXT_texture_filter_minmax;

	_GLES_EXT_texture_filter_minmax = 0;
	if (glloader_is_supported("GLES_EXT_texture_filter_minmax"))
	{
		_GLES_EXT_texture_filter_minmax = 1;
	}
}

void init_GLES_EXT_texture_format_BGRA8888()
{
	glloader_GLES_EXT_texture_format_BGRA8888 = _glloader_GLES_EXT_texture_format_BGRA8888;

	_GLES_EXT_texture_format_BGRA8888 = 0;
	if (glloader_is_supported("GLES_EXT_texture_format_BGRA8888"))
	{
		_GLES_EXT_texture_format_BGRA8888 = 1;
	}
}

void init_GLES_EXT_texture_lod_bias()
{
	glloader_GLES_EXT_texture_lod_bias = _glloader_GLES_EXT_texture_lod_bias;

	_GLES_EXT_texture_lod_bias = 0;
	if (glloader_is_supported("GLES_EXT_texture_lod_bias"))
	{
		_GLES_EXT_texture_lod_bias = 1;
	}
}

void init_GLES_EXT_texture_norm16()
{
	glloader_GLES_EXT_texture_norm16 = _glloader_GLES_EXT_texture_norm16;

	_GLES_EXT_texture_norm16 = 0;
	if (glloader_is_supported("GLES_EXT_texture_norm16"))
	{
		_GLES_EXT_texture_norm16 = 1;
	}
}

void init_GLES_EXT_texture_rg()
{
	glloader_GLES_EXT_texture_rg = _glloader_GLES_EXT_texture_rg;

	_GLES_EXT_texture_rg = 0;
	if (glloader_is_supported("GLES_EXT_texture_rg"))
	{
		_GLES_EXT_texture_rg = 1;
	}
}

void init_GLES_EXT_texture_sRGB_decode()
{
	glloader_GLES_EXT_texture_sRGB_decode = _glloader_GLES_EXT_texture_sRGB_decode;

	_GLES_EXT_texture_sRGB_decode = 0;
	if (glloader_is_supported("GLES_EXT_texture_sRGB_decode"))
	{
		_GLES_EXT_texture_sRGB_decode = 1;
	}
}

void init_GLES_EXT_texture_sRGB_R8()
{
	glloader_GLES_EXT_texture_sRGB_R8 = _glloader_GLES_EXT_texture_sRGB_R8;

	_GLES_EXT_texture_sRGB_R8 = 0;
	if (glloader_is_supported("GLES_EXT_texture_sRGB_R8"))
	{
		_GLES_EXT_texture_sRGB_R8 = 1;
	}
}

void init_GLES_EXT_texture_sRGB_RG8()
{
	glloader_GLES_EXT_texture_sRGB_RG8 = _glloader_GLES_EXT_texture_sRGB_RG8;

	_GLES_EXT_texture_sRGB_RG8 = 0;
	if (glloader_is_supported("GLES_EXT_texture_sRGB_RG8"))
	{
		_GLES_EXT_texture_sRGB_RG8 = 1;
	}
}

void init_GLES_EXT_texture_storage()
{
	glloader_GLES_EXT_texture_storage = _glloader_GLES_EXT_texture_storage;

	{
		glTexStorage1DEXT = NULL;
		glTexStorage2DEXT = NULL;
		glTexStorage3DEXT = NULL;
		glTextureStorage1DEXT = NULL;
		glTextureStorage2DEXT = NULL;
		glTextureStorage3DEXT = NULL;
	}

	_GLES_EXT_texture_storage = 0;
	if (glloader_is_supported("GLES_EXT_texture_storage"))
	{
		_GLES_EXT_texture_storage = 1;

		LOAD_FUNC1(glTexStorage1DEXT);
		LOAD_FUNC1(glTexStorage2DEXT);
		LOAD_FUNC1(glTexStorage3DEXT);
		LOAD_FUNC1(glTextureStorage1DEXT);
		LOAD_FUNC1(glTextureStorage2DEXT);
		LOAD_FUNC1(glTextureStorage3DEXT);
	}
}

void init_GLES_EXT_texture_type_2_10_10_10_REV()
{
	glloader_GLES_EXT_texture_type_2_10_10_10_REV = _glloader_GLES_EXT_texture_type_2_10_10_10_REV;

	_GLES_EXT_texture_type_2_10_10_10_REV = 0;
	if (glloader_is_supported("GLES_EXT_texture_type_2_10_10_10_REV"))
	{
		_GLES_EXT_texture_type_2_10_10_10_REV = 1;
	}
}

void init_GLES_EXT_texture_view()
{
	glloader_GLES_EXT_texture_view = _glloader_GLES_EXT_texture_view;

	{
		glTextureViewEXT = NULL;
	}

	_GLES_EXT_texture_view = 0;
	if (glloader_is_supported("GLES_EXT_texture_view"))
	{
		_GLES_EXT_texture_view = 1;

		LOAD_FUNC1(glTextureViewEXT);
	}
}

void init_GLES_EXT_unpack_subimage()
{
	glloader_GLES_EXT_unpack_subimage = _glloader_GLES_EXT_unpack_subimage;

	_GLES_EXT_unpack_subimage = 0;
	if (glloader_is_supported("GLES_EXT_unpack_subimage"))
	{
		_GLES_EXT_unpack_subimage = 1;
	}
}

void init_GLES_EXT_YUV_target()
{
	glloader_GLES_EXT_YUV_target = _glloader_GLES_EXT_YUV_target;

	_GLES_EXT_YUV_target = 0;
	if (glloader_is_supported("GLES_EXT_YUV_target"))
	{
		_GLES_EXT_YUV_target = 1;
	}
}

void init_GLES_FJ_shader_binary_GCCSO()
{
	glloader_GLES_FJ_shader_binary_GCCSO = _glloader_GLES_FJ_shader_binary_GCCSO;

	_GLES_FJ_shader_binary_GCCSO = 0;
	if (glloader_is_supported("GLES_FJ_shader_binary_GCCSO"))
	{
		_GLES_FJ_shader_binary_GCCSO = 1;
	}
}

void init_GLES_IMG_multisampled_render_to_texture()
{
	glloader_GLES_IMG_multisampled_render_to_texture = _glloader_GLES_IMG_multisampled_render_to_texture;

	{
		glRenderbufferStorageMultisampleIMG = NULL;
		glFramebufferTexture2DMultisampleIMG = NULL;
	}

	_GLES_IMG_multisampled_render_to_texture = 0;
	if (glloader_is_supported("GLES_IMG_multisampled_render_to_texture"))
	{
		_GLES_IMG_multisampled_render_to_texture = 1;

		LOAD_FUNC1(glRenderbufferStorageMultisampleIMG);
		LOAD_FUNC1(glFramebufferTexture2DMultisampleIMG);
	}
}

void init_GLES_IMG_program_binary()
{
	glloader_GLES_IMG_program_binary = _glloader_GLES_IMG_program_binary;

	_GLES_IMG_program_binary = 0;
	if (glloader_is_supported("GLES_IMG_program_binary"))
	{
		_GLES_IMG_program_binary = 1;
	}
}

void init_GLES_IMG_read_format()
{
	glloader_GLES_IMG_read_format = _glloader_GLES_IMG_read_format;

	_GLES_IMG_read_format = 0;
	if (glloader_is_supported("GLES_IMG_read_format"))
	{
		_GLES_IMG_read_format = 1;
	}
}

void init_GLES_shader_binary()
{
	glloader_GLES_shader_binary = _glloader_GLES_shader_binary;

	_GLES_shader_binary = 0;
	if (glloader_is_supported("GLES_shader_binary"))
	{
		_GLES_shader_binary = 1;
	}
}

void init_GLES_IMG_texture_compression_pvrtc()
{
	glloader_GLES_IMG_texture_compression_pvrtc = _glloader_GLES_IMG_texture_compression_pvrtc;

	_GLES_IMG_texture_compression_pvrtc = 0;
	if (glloader_is_supported("GLES_IMG_texture_compression_pvrtc"))
	{
		_GLES_IMG_texture_compression_pvrtc = 1;
	}
}

void init_GLES_IMG_texture_compression_pvrtc2()
{
	glloader_GLES_IMG_texture_compression_pvrtc2 = _glloader_GLES_IMG_texture_compression_pvrtc2;

	_GLES_IMG_texture_compression_pvrtc2 = 0;
	if (glloader_is_supported("GLES_IMG_texture_compression_pvrtc2"))
	{
		_GLES_IMG_texture_compression_pvrtc2 = 1;
	}
}

void init_GLES_IMG_texture_env_enhanced_fixed_function()
{
	glloader_GLES_IMG_texture_env_enhanced_fixed_function = _glloader_GLES_IMG_texture_env_enhanced_fixed_function;

	_GLES_IMG_texture_env_enhanced_fixed_function = 0;
	if (glloader_is_supported("GLES_IMG_texture_env_enhanced_fixed_function"))
	{
		_GLES_IMG_texture_env_enhanced_fixed_function = 1;
	}
}

void init_GLES_IMG_user_clip_plane()
{
	glloader_GLES_IMG_user_clip_plane = _glloader_GLES_IMG_user_clip_plane;

	{
		glClipPlanefIMG = NULL;
		glClipPlanexIMG = NULL;
	}

	_GLES_IMG_user_clip_plane = 0;
	if (glloader_is_supported("GLES_IMG_user_clip_plane"))
	{
		_GLES_IMG_user_clip_plane = 1;

		LOAD_FUNC1(glClipPlanefIMG);
		LOAD_FUNC1(glClipPlanexIMG);
	}
}

void init_GLES_INTEL_performance_query()
{
	glloader_GLES_INTEL_performance_query = _glloader_GLES_INTEL_performance_query;

	{
		glGetFirstPerfQueryIdINTEL = NULL;
		glGetNextPerfQueryIdINTEL = NULL;
		glGetPerfQueryIdByNameINTEL = NULL;
		glGetPerfQueryInfoINTEL = NULL;
		glGetPerfCounterInfoINTEL = NULL;
		glCreatePerfQueryINTEL = NULL;
		glDeletePerfQueryINTEL = NULL;
		glBeginPerfQueryINTEL = NULL;
		glEndPerfQueryINTEL = NULL;
		glGetPerfQueryDataINTEL = NULL;
	}

	_GLES_INTEL_performance_query = 0;
	if (glloader_is_supported("GLES_INTEL_performance_query"))
	{
		_GLES_INTEL_performance_query = 1;

		LOAD_FUNC1(glGetFirstPerfQueryIdINTEL);
		LOAD_FUNC1(glGetNextPerfQueryIdINTEL);
		LOAD_FUNC1(glGetPerfQueryIdByNameINTEL);
		LOAD_FUNC1(glGetPerfQueryInfoINTEL);
		LOAD_FUNC1(glGetPerfCounterInfoINTEL);
		LOAD_FUNC1(glCreatePerfQueryINTEL);
		LOAD_FUNC1(glDeletePerfQueryINTEL);
		LOAD_FUNC1(glBeginPerfQueryINTEL);
		LOAD_FUNC1(glEndPerfQueryINTEL);
		LOAD_FUNC1(glGetPerfQueryDataINTEL);
	}
}

void init_GLES_KHR_blend_equation_advanced()
{
	glloader_GLES_KHR_blend_equation_advanced = _glloader_GLES_KHR_blend_equation_advanced;

	{
		glBlendBarrierKHR = NULL;
	}

	_GLES_KHR_blend_equation_advanced = 0;
	if (glloader_is_supported("GLES_KHR_blend_equation_advanced"))
	{
		_GLES_KHR_blend_equation_advanced = 1;

		LOAD_FUNC1(glBlendBarrierKHR);
	}
}

void init_GLES_KHR_context_flush_control()
{
	glloader_GLES_KHR_context_flush_control = _glloader_GLES_KHR_context_flush_control;

	_GLES_KHR_context_flush_control = 0;
	if (glloader_is_supported("GLES_KHR_context_flush_control"))
	{
		_GLES_KHR_context_flush_control = 1;
	}
}

void init_GLES_KHR_debug()
{
	glloader_GLES_KHR_debug = _glloader_GLES_KHR_debug;

	{
		glDebugMessageControl = NULL;
		glDebugMessageInsert = NULL;
		glDebugMessageCallback = NULL;
		glGetDebugMessageLog = NULL;
		glGetPointerv = NULL;
		glPushDebugGroup = NULL;
		glPopDebugGroup = NULL;
		glObjectLabel = NULL;
		glGetObjectLabel = NULL;
		glObjectPtrLabel = NULL;
		glGetObjectPtrLabel = NULL;
	}

	_GLES_KHR_debug = 0;
	if (glloader_is_supported("GLES_KHR_debug"))
	{
		_GLES_KHR_debug = 1;

		LOAD_FUNC1(glDebugMessageControl);
		LOAD_FUNC1(glDebugMessageInsert);
		LOAD_FUNC1(glDebugMessageCallback);
		LOAD_FUNC1(glGetDebugMessageLog);
		LOAD_FUNC1(glGetPointerv);
		LOAD_FUNC1(glPushDebugGroup);
		LOAD_FUNC1(glPopDebugGroup);
		LOAD_FUNC1(glObjectLabel);
		LOAD_FUNC1(glGetObjectLabel);
		LOAD_FUNC1(glObjectPtrLabel);
		LOAD_FUNC1(glGetObjectPtrLabel);
	}
}

void init_GLES_KHR_no_error()
{
	glloader_GLES_KHR_no_error = _glloader_GLES_KHR_no_error;

	_GLES_KHR_no_error = 0;
	if (glloader_is_supported("GLES_KHR_no_error"))
	{
		_GLES_KHR_no_error = 1;
	}
}

void init_GLES_KHR_robustness()
{
	glloader_GLES_KHR_robustness = _glloader_GLES_KHR_robustness;

	{
		glGetGraphicsResetStatus = NULL;
		glReadnPixels = NULL;
		glGetnUniformfv = NULL;
		glGetnUniformiv = NULL;
		glGetnUniformuiv = NULL;
	}

	_GLES_KHR_robustness = 0;
	if (glloader_is_supported("GLES_KHR_robustness"))
	{
		_GLES_KHR_robustness = 1;

		LOAD_FUNC1(glGetGraphicsResetStatus);
		LOAD_FUNC1(glReadnPixels);
		LOAD_FUNC1(glGetnUniformfv);
		LOAD_FUNC1(glGetnUniformiv);
		LOAD_FUNC1(glGetnUniformuiv);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_robustness"))
		{
			LOAD_FUNC2(glGetGraphicsResetStatus, glGetGraphicsResetStatusEXT);
			LOAD_FUNC2(glReadnPixels, glReadnPixelsEXT);
			LOAD_FUNC2(glGetnUniformfv, glGetnUniformfvEXT);
			LOAD_FUNC2(glGetnUniformiv, glGetnUniformivEXT);
			LOAD_FUNC2(glGetnUniformuiv, glGetnUniformuivEXT);

			_GLES_KHR_robustness = 1;
			promote_high("GLES_KHR_robustness");
		}
	}
}

void init_GLES_KHR_robust_buffer_access_behavior()
{
	glloader_GLES_KHR_robust_buffer_access_behavior = _glloader_GLES_KHR_robust_buffer_access_behavior;

	_GLES_KHR_robust_buffer_access_behavior = 0;
	if (glloader_is_supported("GLES_KHR_robust_buffer_access_behavior"))
	{
		_GLES_KHR_robust_buffer_access_behavior = 1;
	}
}

void init_GLES_KHR_texture_compression_astc_ldr()
{
	glloader_GLES_KHR_texture_compression_astc_ldr = _glloader_GLES_KHR_texture_compression_astc_ldr;

	_GLES_KHR_texture_compression_astc_ldr = 0;
	if (glloader_is_supported("GLES_KHR_texture_compression_astc_ldr"))
	{
		_GLES_KHR_texture_compression_astc_ldr = 1;
	}
}

void init_GLES_NV_3dvision_settings()
{
	glloader_GLES_NV_3dvision_settings = _glloader_GLES_NV_3dvision_settings;

	{
		glStereoParameterfNV = NULL;
		glStereoParameteriNV = NULL;
	}

	_GLES_NV_3dvision_settings = 0;
	if (glloader_is_supported("GLES_NV_3dvision_settings"))
	{
		_GLES_NV_3dvision_settings = 1;

		LOAD_FUNC1(glStereoParameterfNV);
		LOAD_FUNC1(glStereoParameteriNV);
	}
}

void init_GLES_NV_bgr()
{
	glloader_GLES_NV_bgr = _glloader_GLES_NV_bgr;

	_GLES_NV_bgr = 0;
	if (glloader_is_supported("GLES_NV_bgr"))
	{
		_GLES_NV_bgr = 1;
	}
}

void init_GLES_NV_bindless_texture()
{
	glloader_GLES_NV_bindless_texture = _glloader_GLES_NV_bindless_texture;

	{
		glGetTextureHandleNV = NULL;
		glGetTextureSamplerHandleNV = NULL;
		glMakeTextureHandleResidentNV = NULL;
		glMakeTextureHandleNonResidentNV = NULL;
		glGetImageHandleNV = NULL;
		glMakeImageHandleResidentNV = NULL;
		glMakeImageHandleNonResidentNV = NULL;
		glUniformHandleui64NV = NULL;
		glUniformHandleui64vNV = NULL;
		glProgramUniformHandleui64NV = NULL;
		glProgramUniformHandleui64vNV = NULL;
		glIsTextureHandleResidentNV = NULL;
		glIsImageHandleResidentNV = NULL;
	}

	_GLES_NV_bindless_texture = 0;
	if (glloader_is_supported("GLES_NV_bindless_texture"))
	{
		_GLES_NV_bindless_texture = 1;

		LOAD_FUNC1(glGetTextureHandleNV);
		LOAD_FUNC1(glGetTextureSamplerHandleNV);
		LOAD_FUNC1(glMakeTextureHandleResidentNV);
		LOAD_FUNC1(glMakeTextureHandleNonResidentNV);
		LOAD_FUNC1(glGetImageHandleNV);
		LOAD_FUNC1(glMakeImageHandleResidentNV);
		LOAD_FUNC1(glMakeImageHandleNonResidentNV);
		LOAD_FUNC1(glUniformHandleui64NV);
		LOAD_FUNC1(glUniformHandleui64vNV);
		LOAD_FUNC1(glProgramUniformHandleui64NV);
		LOAD_FUNC1(glProgramUniformHandleui64vNV);
		LOAD_FUNC1(glIsTextureHandleResidentNV);
		LOAD_FUNC1(glIsImageHandleResidentNV);
	}
}

void init_GLES_NV_blend_equation_advanced()
{
	glloader_GLES_NV_blend_equation_advanced = _glloader_GLES_NV_blend_equation_advanced;

	{
		glBlendParameteriNV = NULL;
		glBlendBarrierNV = NULL;
	}

	_GLES_NV_blend_equation_advanced = 0;
	if (glloader_is_supported("GLES_NV_blend_equation_advanced"))
	{
		_GLES_NV_blend_equation_advanced = 1;

		LOAD_FUNC1(glBlendParameteriNV);
		LOAD_FUNC1(glBlendBarrierNV);
	}
}

void init_GLES_NV_conditional_render()
{
	glloader_GLES_NV_conditional_render = _glloader_GLES_NV_conditional_render;

	{
		glBeginConditionalRenderNV = NULL;
		glEndConditionalRenderNV = NULL;
	}

	_GLES_NV_conditional_render = 0;
	if (glloader_is_supported("GLES_NV_conditional_render"))
	{
		_GLES_NV_conditional_render = 1;

		LOAD_FUNC1(glBeginConditionalRenderNV);
		LOAD_FUNC1(glEndConditionalRenderNV);
	}
}

void init_GLES_NV_conservative_raster()
{
	glloader_GLES_NV_conservative_raster = _glloader_GLES_NV_conservative_raster;

	{
		glSubpixelPrecisionBiasNV = NULL;
	}

	_GLES_NV_conservative_raster = 0;
	if (glloader_is_supported("GLES_NV_conservative_raster"))
	{
		_GLES_NV_conservative_raster = 1;

		LOAD_FUNC1(glSubpixelPrecisionBiasNV);
	}
}

void init_GLES_NV_copy_buffer()
{
	glloader_GLES_NV_copy_buffer = _glloader_GLES_NV_copy_buffer;

	{
		glCopyBufferSubDataNV = NULL;
	}

	_GLES_NV_copy_buffer = 0;
	if (glloader_is_supported("GLES_NV_copy_buffer"))
	{
		_GLES_NV_copy_buffer = 1;

		LOAD_FUNC1(glCopyBufferSubDataNV);
	}
}

void init_GLES_NV_coverage_sample()
{
	glloader_GLES_NV_coverage_sample = _glloader_GLES_NV_coverage_sample;

	{
		glCoverageMaskNV = NULL;
		glCoverageOperationNV = NULL;
	}

	_GLES_NV_coverage_sample = 0;
	if (glloader_is_supported("GLES_NV_coverage_sample"))
	{
		_GLES_NV_coverage_sample = 1;

		LOAD_FUNC1(glCoverageMaskNV);
		LOAD_FUNC1(glCoverageOperationNV);
	}
}

void init_GLES_NV_depth_nonlinear()
{
	glloader_GLES_NV_depth_nonlinear = _glloader_GLES_NV_depth_nonlinear;

	_GLES_NV_depth_nonlinear = 0;
	if (glloader_is_supported("GLES_NV_depth_nonlinear"))
	{
		_GLES_NV_depth_nonlinear = 1;
	}
}

void init_GLES_NV_draw_buffers()
{
	glloader_GLES_NV_draw_buffers = _glloader_GLES_NV_draw_buffers;

	{
		glDrawBuffersNV = NULL;
	}

	_GLES_NV_draw_buffers = 0;
	if (glloader_is_supported("GLES_NV_draw_buffers"))
	{
		_GLES_NV_draw_buffers = 1;

		LOAD_FUNC1(glDrawBuffersNV);
	}
}

void init_GLES_NV_draw_instanced()
{
	glloader_GLES_NV_draw_instanced = _glloader_GLES_NV_draw_instanced;

	{
		glDrawArraysInstancedNV = NULL;
		glDrawElementsInstancedNV = NULL;
	}

	_GLES_NV_draw_instanced = 0;
	if (glloader_is_supported("GLES_NV_draw_instanced"))
	{
		_GLES_NV_draw_instanced = 1;

		LOAD_FUNC1(glDrawArraysInstancedNV);
		LOAD_FUNC1(glDrawElementsInstancedNV);
	}
}

void init_GLES_NV_draw_texture()
{
	glloader_GLES_NV_draw_texture = _glloader_GLES_NV_draw_texture;

	{
		glDrawTextureNV = NULL;
	}

	_GLES_NV_draw_texture = 0;
	if (glloader_is_supported("GLES_NV_draw_texture"))
	{
		_GLES_NV_draw_texture = 1;

		LOAD_FUNC1(glDrawTextureNV);
	}
}

void init_GLES_NV_EGL_stream_consumer_external()
{
	glloader_GLES_NV_EGL_stream_consumer_external = _glloader_GLES_NV_EGL_stream_consumer_external;

	_GLES_NV_EGL_stream_consumer_external = 0;
	if (glloader_is_supported("GLES_NV_EGL_stream_consumer_external"))
	{
		_GLES_NV_EGL_stream_consumer_external = 1;
	}
}

void init_GLES_NV_explicit_attrib_location()
{
	glloader_GLES_NV_explicit_attrib_location = _glloader_GLES_NV_explicit_attrib_location;

	_GLES_NV_explicit_attrib_location = 0;
	if (glloader_is_supported("GLES_NV_explicit_attrib_location"))
	{
		_GLES_NV_explicit_attrib_location = 1;
	}
}

void init_GLES_NV_fbo_color_attachments()
{
	glloader_GLES_NV_fbo_color_attachments = _glloader_GLES_NV_fbo_color_attachments;

	_GLES_NV_fbo_color_attachments = 0;
	if (glloader_is_supported("GLES_NV_fbo_color_attachments"))
	{
		_GLES_NV_fbo_color_attachments = 1;
	}
}

void init_GLES_NV_fence()
{
	glloader_GLES_NV_fence = _glloader_GLES_NV_fence;

	{
		glDeleteFencesNV = NULL;
		glGenFencesNV = NULL;
		glIsFenceNV = NULL;
		glTestFenceNV = NULL;
		glGetFenceivNV = NULL;
		glFinishFenceNV = NULL;
		glSetFenceNV = NULL;
	}

	_GLES_NV_fence = 0;
	if (glloader_is_supported("GLES_NV_fence"))
	{
		_GLES_NV_fence = 1;

		LOAD_FUNC1(glDeleteFencesNV);
		LOAD_FUNC1(glGenFencesNV);
		LOAD_FUNC1(glIsFenceNV);
		LOAD_FUNC1(glTestFenceNV);
		LOAD_FUNC1(glGetFenceivNV);
		LOAD_FUNC1(glFinishFenceNV);
		LOAD_FUNC1(glSetFenceNV);
	}
}

void init_GLES_NV_fill_rectangle()
{
	glloader_GLES_NV_fill_rectangle = _glloader_GLES_NV_fill_rectangle;

	_GLES_NV_fill_rectangle = 0;
	if (glloader_is_supported("GLES_NV_fill_rectangle"))
	{
		_GLES_NV_fill_rectangle = 1;
	}
}

void init_GLES_NV_fragment_coverage_to_color()
{
	glloader_GLES_NV_fragment_coverage_to_color = _glloader_GLES_NV_fragment_coverage_to_color;

	{
		glFragmentCoverageColorNV = NULL;
	}

	_GLES_NV_fragment_coverage_to_color = 0;
	if (glloader_is_supported("GLES_NV_fragment_coverage_to_color"))
	{
		_GLES_NV_fragment_coverage_to_color = 1;

		LOAD_FUNC1(glFragmentCoverageColorNV);
	}
}

void init_GLES_NV_fragment_shader_interlock()
{
	glloader_GLES_NV_fragment_shader_interlock = _glloader_GLES_NV_fragment_shader_interlock;

	_GLES_NV_fragment_shader_interlock = 0;
	if (glloader_is_supported("GLES_NV_fragment_shader_interlock"))
	{
		_GLES_NV_fragment_shader_interlock = 1;
	}
}

void init_GLES_NV_framebuffer_blit()
{
	glloader_GLES_NV_framebuffer_blit = _glloader_GLES_NV_framebuffer_blit;

	{
		glBlitFramebufferNV = NULL;
	}

	_GLES_NV_framebuffer_blit = 0;
	if (glloader_is_supported("GLES_NV_framebuffer_blit"))
	{
		_GLES_NV_framebuffer_blit = 1;

		LOAD_FUNC1(glBlitFramebufferNV);
	}
}

void init_GLES_NV_framebuffer_mixed_samples()
{
	glloader_GLES_NV_framebuffer_mixed_samples = _glloader_GLES_NV_framebuffer_mixed_samples;

	{
		glRasterSamplesEXT = NULL;
		glCoverageModulationTableNV = NULL;
		glGetCoverageModulationTableNV = NULL;
		glCoverageModulationNV = NULL;
	}

	_GLES_NV_framebuffer_mixed_samples = 0;
	if (glloader_is_supported("GLES_NV_framebuffer_mixed_samples"))
	{
		_GLES_NV_framebuffer_mixed_samples = 1;

		LOAD_FUNC1(glRasterSamplesEXT);
		LOAD_FUNC1(glCoverageModulationTableNV);
		LOAD_FUNC1(glGetCoverageModulationTableNV);
		LOAD_FUNC1(glCoverageModulationNV);
	}
}

void init_GLES_NV_framebuffer_multisample()
{
	glloader_GLES_NV_framebuffer_multisample = _glloader_GLES_NV_framebuffer_multisample;

	{
		glRenderbufferStorageMultisampleNV = NULL;
	}

	_GLES_NV_framebuffer_multisample = 0;
	if (glloader_is_supported("GLES_NV_framebuffer_multisample"))
	{
		_GLES_NV_framebuffer_multisample = 1;

		LOAD_FUNC1(glRenderbufferStorageMultisampleNV);
	}
}

void init_GLES_NV_generate_mipmap_sRGB()
{
	glloader_GLES_NV_generate_mipmap_sRGB = _glloader_GLES_NV_generate_mipmap_sRGB;

	_GLES_NV_generate_mipmap_sRGB = 0;
	if (glloader_is_supported("GLES_NV_generate_mipmap_sRGB"))
	{
		_GLES_NV_generate_mipmap_sRGB = 1;
	}
}

void init_GLES_NV_geometry_shader_passthrough()
{
	glloader_GLES_NV_geometry_shader_passthrough = _glloader_GLES_NV_geometry_shader_passthrough;

	_GLES_NV_geometry_shader_passthrough = 0;
	if (glloader_is_supported("GLES_NV_geometry_shader_passthrough"))
	{
		_GLES_NV_geometry_shader_passthrough = 1;
	}
}

void init_GLES_NV_image_formats()
{
	glloader_GLES_NV_image_formats = _glloader_GLES_NV_image_formats;

	_GLES_NV_image_formats = 0;
	if (glloader_is_supported("GLES_NV_image_formats"))
	{
		_GLES_NV_image_formats = 1;
	}
}

void init_GLES_NV_instanced_arrays()
{
	glloader_GLES_NV_instanced_arrays = _glloader_GLES_NV_instanced_arrays;

	{
		glVertexAttribDivisorNV = NULL;
	}

	_GLES_NV_instanced_arrays = 0;
	if (glloader_is_supported("GLES_NV_instanced_arrays"))
	{
		_GLES_NV_instanced_arrays = 1;

		LOAD_FUNC1(glVertexAttribDivisorNV);
	}
}

void init_GLES_NV_internalformat_sample_query()
{
	glloader_GLES_NV_internalformat_sample_query = _glloader_GLES_NV_internalformat_sample_query;

	{
		glGetInternalformatSampleivNV = NULL;
	}

	_GLES_NV_internalformat_sample_query = 0;
	if (glloader_is_supported("GLES_NV_internalformat_sample_query"))
	{
		_GLES_NV_internalformat_sample_query = 1;

		LOAD_FUNC1(glGetInternalformatSampleivNV);
	}
}

void init_GLES_NV_non_square_matrices()
{
	glloader_GLES_NV_non_square_matrices = _glloader_GLES_NV_non_square_matrices;

	{
		glUniformMatrix2x3fvNV = NULL;
		glUniformMatrix3x2fvNV = NULL;
		glUniformMatrix2x4fvNV = NULL;
		glUniformMatrix4x2fvNV = NULL;
		glUniformMatrix3x4fvNV = NULL;
		glUniformMatrix4x3fvNV = NULL;
	}

	_GLES_NV_non_square_matrices = 0;
	if (glloader_is_supported("GLES_NV_non_square_matrices"))
	{
		_GLES_NV_non_square_matrices = 1;

		LOAD_FUNC1(glUniformMatrix2x3fvNV);
		LOAD_FUNC1(glUniformMatrix3x2fvNV);
		LOAD_FUNC1(glUniformMatrix2x4fvNV);
		LOAD_FUNC1(glUniformMatrix4x2fvNV);
		LOAD_FUNC1(glUniformMatrix3x4fvNV);
		LOAD_FUNC1(glUniformMatrix4x3fvNV);
	}
}

void init_GLES_NV_packed_float()
{
	glloader_GLES_NV_packed_float = _glloader_GLES_NV_packed_float;

	_GLES_NV_packed_float = 0;
	if (glloader_is_supported("GLES_NV_packed_float"))
	{
		_GLES_NV_packed_float = 1;
	}
}

void init_GLES_NV_path_rendering()
{
	glloader_GLES_NV_path_rendering = _glloader_GLES_NV_path_rendering;

	{
		glGenPathsNV = NULL;
		glDeletePathsNV = NULL;
		glIsPathNV = NULL;
		glPathCommandsNV = NULL;
		glPathCoordsNV = NULL;
		glPathSubCommandsNV = NULL;
		glPathSubCoordsNV = NULL;
		glPathStringNV = NULL;
		glPathGlyphsNV = NULL;
		glPathGlyphRangeNV = NULL;
		glWeightPathsNV = NULL;
		glCopyPathNV = NULL;
		glInterpolatePathsNV = NULL;
		glTransformPathNV = NULL;
		glPathParameterivNV = NULL;
		glPathParameteriNV = NULL;
		glPathParameterfvNV = NULL;
		glPathParameterfNV = NULL;
		glPathDashArrayNV = NULL;
		glPathStencilFuncNV = NULL;
		glPathStencilDepthOffsetNV = NULL;
		glStencilFillPathNV = NULL;
		glStencilStrokePathNV = NULL;
		glStencilFillPathInstancedNV = NULL;
		glStencilStrokePathInstancedNV = NULL;
		glPathCoverDepthFuncNV = NULL;
		glPathColorGenNV = NULL;
		glPathTexGenNV = NULL;
		glPathFogGenNV = NULL;
		glCoverFillPathNV = NULL;
		glCoverStrokePathNV = NULL;
		glCoverFillPathInstancedNV = NULL;
		glCoverStrokePathInstancedNV = NULL;
		glGetPathParameterivNV = NULL;
		glGetPathParameterfvNV = NULL;
		glGetPathCommandsNV = NULL;
		glGetPathCoordsNV = NULL;
		glGetPathDashArrayNV = NULL;
		glGetPathMetricsNV = NULL;
		glGetPathMetricRangeNV = NULL;
		glGetPathSpacingNV = NULL;
		glGetPathColorGenivNV = NULL;
		glGetPathColorGenfvNV = NULL;
		glGetPathTexGenivNV = NULL;
		glGetPathTexGenfvNV = NULL;
		glIsPointInFillPathNV = NULL;
		glIsPointInStrokePathNV = NULL;
		glGetPathLengthNV = NULL;
		glPointAlongPathNV = NULL;
	}

	_GLES_NV_path_rendering = 0;
	if (glloader_is_supported("GLES_NV_path_rendering"))
	{
		_GLES_NV_path_rendering = 1;

		LOAD_FUNC1(glGenPathsNV);
		LOAD_FUNC1(glDeletePathsNV);
		LOAD_FUNC1(glIsPathNV);
		LOAD_FUNC1(glPathCommandsNV);
		LOAD_FUNC1(glPathCoordsNV);
		LOAD_FUNC1(glPathSubCommandsNV);
		LOAD_FUNC1(glPathSubCoordsNV);
		LOAD_FUNC1(glPathStringNV);
		LOAD_FUNC1(glPathGlyphsNV);
		LOAD_FUNC1(glPathGlyphRangeNV);
		LOAD_FUNC1(glWeightPathsNV);
		LOAD_FUNC1(glCopyPathNV);
		LOAD_FUNC1(glInterpolatePathsNV);
		LOAD_FUNC1(glTransformPathNV);
		LOAD_FUNC1(glPathParameterivNV);
		LOAD_FUNC1(glPathParameteriNV);
		LOAD_FUNC1(glPathParameterfvNV);
		LOAD_FUNC1(glPathParameterfNV);
		LOAD_FUNC1(glPathDashArrayNV);
		LOAD_FUNC1(glPathStencilFuncNV);
		LOAD_FUNC1(glPathStencilDepthOffsetNV);
		LOAD_FUNC1(glStencilFillPathNV);
		LOAD_FUNC1(glStencilStrokePathNV);
		LOAD_FUNC1(glStencilFillPathInstancedNV);
		LOAD_FUNC1(glStencilStrokePathInstancedNV);
		LOAD_FUNC1(glPathCoverDepthFuncNV);
		LOAD_FUNC1(glPathColorGenNV);
		LOAD_FUNC1(glPathTexGenNV);
		LOAD_FUNC1(glPathFogGenNV);
		LOAD_FUNC1(glCoverFillPathNV);
		LOAD_FUNC1(glCoverStrokePathNV);
		LOAD_FUNC1(glCoverFillPathInstancedNV);
		LOAD_FUNC1(glCoverStrokePathInstancedNV);
		LOAD_FUNC1(glGetPathParameterivNV);
		LOAD_FUNC1(glGetPathParameterfvNV);
		LOAD_FUNC1(glGetPathCommandsNV);
		LOAD_FUNC1(glGetPathCoordsNV);
		LOAD_FUNC1(glGetPathDashArrayNV);
		LOAD_FUNC1(glGetPathMetricsNV);
		LOAD_FUNC1(glGetPathMetricRangeNV);
		LOAD_FUNC1(glGetPathSpacingNV);
		LOAD_FUNC1(glGetPathColorGenivNV);
		LOAD_FUNC1(glGetPathColorGenfvNV);
		LOAD_FUNC1(glGetPathTexGenivNV);
		LOAD_FUNC1(glGetPathTexGenfvNV);
		LOAD_FUNC1(glIsPointInFillPathNV);
		LOAD_FUNC1(glIsPointInStrokePathNV);
		LOAD_FUNC1(glGetPathLengthNV);
		LOAD_FUNC1(glPointAlongPathNV);
	}
}

void init_GLES_NV_path_rendering_shared_edge()
{
	glloader_GLES_NV_path_rendering_shared_edge = _glloader_GLES_NV_path_rendering_shared_edge;

	_GLES_NV_path_rendering_shared_edge = 0;
	if (glloader_is_supported("GLES_NV_path_rendering_shared_edge"))
	{
		_GLES_NV_path_rendering_shared_edge = 1;
	}
}

void init_GLES_NV_pixel_buffer_object()
{
	glloader_GLES_NV_pixel_buffer_object = _glloader_GLES_NV_pixel_buffer_object;

	_GLES_NV_pixel_buffer_object = 0;
	if (glloader_is_supported("GLES_NV_pixel_buffer_object"))
	{
		_GLES_NV_pixel_buffer_object = 1;
	}
}

void init_GLES_NV_polygon_mode()
{
	glloader_GLES_NV_polygon_mode = _glloader_GLES_NV_polygon_mode;

	{
		glPolygonModeNV = NULL;
	}

	_GLES_NV_polygon_mode = 0;
	if (glloader_is_supported("GLES_NV_polygon_mode"))
	{
		_GLES_NV_polygon_mode = 1;

		LOAD_FUNC1(glPolygonModeNV);
	}
}

void init_GLES_NV_read_buffer()
{
	glloader_GLES_NV_read_buffer = _glloader_GLES_NV_read_buffer;

	{
		glReadBufferNV = NULL;
	}

	_GLES_NV_read_buffer = 0;
	if (glloader_is_supported("GLES_NV_read_buffer"))
	{
		_GLES_NV_read_buffer = 1;

		LOAD_FUNC1(glReadBufferNV);
	}
}

void init_GLES_NV_read_depth()
{
	glloader_GLES_NV_read_depth = _glloader_GLES_NV_read_depth;

	_GLES_NV_read_depth = 0;
	if (glloader_is_supported("GLES_NV_read_depth"))
	{
		_GLES_NV_read_depth = 1;
	}
}

void init_GLES_NV_read_depth_stencil()
{
	glloader_GLES_NV_read_depth_stencil = _glloader_GLES_NV_read_depth_stencil;

	_GLES_NV_read_depth_stencil = 0;
	if (glloader_is_supported("GLES_NV_read_depth_stencil"))
	{
		_GLES_NV_read_depth_stencil = 1;
	}
}

void init_GLES_NV_read_stencil()
{
	glloader_GLES_NV_read_stencil = _glloader_GLES_NV_read_stencil;

	_GLES_NV_read_stencil = 0;
	if (glloader_is_supported("GLES_NV_read_stencil"))
	{
		_GLES_NV_read_stencil = 1;
	}
}

void init_GLES_NV_sample_locations()
{
	glloader_GLES_NV_sample_locations = _glloader_GLES_NV_sample_locations;

	{
		glFramebufferSampleLocationsfvNV = NULL;
		glNamedFramebufferSampleLocationsfvNV = NULL;
		glResolveDepthValuesNV = NULL;
	}

	_GLES_NV_sample_locations = 0;
	if (glloader_is_supported("GLES_NV_sample_locations"))
	{
		_GLES_NV_sample_locations = 1;

		LOAD_FUNC1(glFramebufferSampleLocationsfvNV);
		LOAD_FUNC1(glNamedFramebufferSampleLocationsfvNV);
		LOAD_FUNC1(glResolveDepthValuesNV);
	}
}

void init_GLES_NV_sample_mask_override_coverage()
{
	glloader_GLES_NV_sample_mask_override_coverage = _glloader_GLES_NV_sample_mask_override_coverage;

	_GLES_NV_sample_mask_override_coverage = 0;
	if (glloader_is_supported("GLES_NV_sample_mask_override_coverage"))
	{
		_GLES_NV_sample_mask_override_coverage = 1;
	}
}

void init_GLES_NV_shader_noperspective_interpolation()
{
	glloader_GLES_NV_shader_noperspective_interpolation = _glloader_GLES_NV_shader_noperspective_interpolation;

	_GLES_NV_shader_noperspective_interpolation = 0;
	if (glloader_is_supported("GLES_NV_shader_noperspective_interpolation"))
	{
		_GLES_NV_shader_noperspective_interpolation = 1;
	}
}

void init_GLES_NV_shadow_samplers_array()
{
	glloader_GLES_NV_shadow_samplers_array = _glloader_GLES_NV_shadow_samplers_array;

	_GLES_NV_shadow_samplers_array = 0;
	if (glloader_is_supported("GLES_NV_shadow_samplers_array"))
	{
		_GLES_NV_shadow_samplers_array = 1;
	}
}

void init_GLES_NV_shadow_samplers_cube()
{
	glloader_GLES_NV_shadow_samplers_cube = _glloader_GLES_NV_shadow_samplers_cube;

	_GLES_NV_shadow_samplers_cube = 0;
	if (glloader_is_supported("GLES_NV_shadow_samplers_cube"))
	{
		_GLES_NV_shadow_samplers_cube = 1;
	}
}

void init_GLES_NV_sRGB_formats()
{
	glloader_GLES_NV_sRGB_formats = _glloader_GLES_NV_sRGB_formats;

	_GLES_NV_sRGB_formats = 0;
	if (glloader_is_supported("GLES_NV_sRGB_formats"))
	{
		_GLES_NV_sRGB_formats = 1;
	}
}

void init_GLES_NV_texture_array()
{
	glloader_GLES_NV_texture_array = _glloader_GLES_NV_texture_array;

	{
		glTexImage3DNV = NULL;
		glTexSubImage3DNV = NULL;
		glCopyTexSubImage3DNV = NULL;
		glCompressedTexImage3DNV = NULL;
		glCompressedTexSubImage3DNV = NULL;
		glFramebufferTextureLayerNV = NULL;
	}

	_GLES_NV_texture_array = 0;
	if (glloader_is_supported("GLES_NV_texture_array"))
	{
		_GLES_NV_texture_array = 1;

		LOAD_FUNC1(glTexImage3DNV);
		LOAD_FUNC1(glTexSubImage3DNV);
		LOAD_FUNC1(glCopyTexSubImage3DNV);
		LOAD_FUNC1(glCompressedTexImage3DNV);
		LOAD_FUNC1(glCompressedTexSubImage3DNV);
		LOAD_FUNC1(glFramebufferTextureLayerNV);
	}
}

void init_GLES_NV_texture_border_clamp()
{
	glloader_GLES_NV_texture_border_clamp = _glloader_GLES_NV_texture_border_clamp;

	_GLES_NV_texture_border_clamp = 0;
	if (glloader_is_supported("GLES_NV_texture_border_clamp"))
	{
		_GLES_NV_texture_border_clamp = 1;
	}
}

void init_GLES_NV_texture_compression_latc()
{
	glloader_GLES_NV_texture_compression_latc = _glloader_GLES_NV_texture_compression_latc;

	_GLES_NV_texture_compression_latc = 0;
	if (glloader_is_supported("GLES_NV_texture_compression_latc"))
	{
		_GLES_NV_texture_compression_latc = 1;
	}
}

void init_GLES_NV_texture_compression_s3tc()
{
	glloader_GLES_NV_texture_compression_s3tc = _glloader_GLES_NV_texture_compression_s3tc;

	_GLES_NV_texture_compression_s3tc = 0;
	if (glloader_is_supported("GLES_NV_texture_compression_s3tc"))
	{
		_GLES_NV_texture_compression_s3tc = 1;
	}
}

void init_GLES_NV_texture_compression_s3tc_update()
{
	glloader_GLES_NV_texture_compression_s3tc_update = _glloader_GLES_NV_texture_compression_s3tc_update;

	_GLES_NV_texture_compression_s3tc_update = 0;
	if (glloader_is_supported("GLES_NV_texture_compression_s3tc_update"))
	{
		_GLES_NV_texture_compression_s3tc_update = 1;
	}
}

void init_GLES_NV_texture_npot_2D_mipmap()
{
	glloader_GLES_NV_texture_npot_2D_mipmap = _glloader_GLES_NV_texture_npot_2D_mipmap;

	_GLES_NV_texture_npot_2D_mipmap = 0;
	if (glloader_is_supported("GLES_NV_texture_npot_2D_mipmap"))
	{
		_GLES_NV_texture_npot_2D_mipmap = 1;
	}
}

void init_GLES_NV_viewport_array()
{
	glloader_GLES_NV_viewport_array = _glloader_GLES_NV_viewport_array;

	{
		glViewportArrayvNV = NULL;
		glViewportIndexedfNV = NULL;
		glViewportIndexedfvNV = NULL;
		glScissorArrayvNV = NULL;
		glScissorIndexedNV = NULL;
		glScissorIndexedvNV = NULL;
		glDepthRangeArrayfvNV = NULL;
		glDepthRangeIndexedfNV = NULL;
		glGetFloati_vNV = NULL;
		glEnableiNV = NULL;
		glDisableiNV = NULL;
		glIsEnablediNV = NULL;
	}

	_GLES_NV_viewport_array = 0;
	if (glloader_is_supported("GLES_NV_viewport_array"))
	{
		_GLES_NV_viewport_array = 1;

		LOAD_FUNC1(glViewportArrayvNV);
		LOAD_FUNC1(glViewportIndexedfNV);
		LOAD_FUNC1(glViewportIndexedfvNV);
		LOAD_FUNC1(glScissorArrayvNV);
		LOAD_FUNC1(glScissorIndexedNV);
		LOAD_FUNC1(glScissorIndexedvNV);
		LOAD_FUNC1(glDepthRangeArrayfvNV);
		LOAD_FUNC1(glDepthRangeIndexedfNV);
		LOAD_FUNC1(glGetFloati_vNV);
		LOAD_FUNC1(glEnableiNV);
		LOAD_FUNC1(glDisableiNV);
		LOAD_FUNC1(glIsEnablediNV);
	}
}

void init_GLES_NV_viewport_array2()
{
	glloader_GLES_NV_viewport_array2 = _glloader_GLES_NV_viewport_array2;

	_GLES_NV_viewport_array2 = 0;
	if (glloader_is_supported("GLES_NV_viewport_array2"))
	{
		_GLES_NV_viewport_array2 = 1;
	}
}

void init_GLES_OES_blend_equation_separate()
{
	glloader_GLES_OES_blend_equation_separate = _glloader_GLES_OES_blend_equation_separate;

	{
		glBlendEquationSeparateOES = NULL;
	}

	_GLES_OES_blend_equation_separate = 0;
	if (glloader_is_supported("GLES_OES_blend_equation_separate"))
	{
		_GLES_OES_blend_equation_separate = 1;

		LOAD_FUNC1(glBlendEquationSeparateOES);
	}
}

void init_GLES_OES_blend_func_separate()
{
	glloader_GLES_OES_blend_func_separate = _glloader_GLES_OES_blend_func_separate;

	{
		glBlendFuncSeparateOES = NULL;
	}

	_GLES_OES_blend_func_separate = 0;
	if (glloader_is_supported("GLES_OES_blend_func_separate"))
	{
		_GLES_OES_blend_func_separate = 1;

		LOAD_FUNC1(glBlendFuncSeparateOES);
	}
}

void init_GLES_OES_blend_subtract()
{
	glloader_GLES_OES_blend_subtract = _glloader_GLES_OES_blend_subtract;

	{
		glBlendEquationOES = NULL;
	}

	_GLES_OES_blend_subtract = 0;
	if (glloader_is_supported("GLES_OES_blend_subtract"))
	{
		_GLES_OES_blend_subtract = 1;

		LOAD_FUNC1(glBlendEquationOES);
	}
}

void init_GLES_OES_byte_coordinates()
{
	glloader_GLES_OES_byte_coordinates = _glloader_GLES_OES_byte_coordinates;

	{
		glVertex2bOES = NULL;
		glVertex3bOES = NULL;
		glVertex4bOES = NULL;
		glVertex2bvOES = NULL;
		glVertex3bvOES = NULL;
		glVertex4bvOES = NULL;
		glTexCoord1bOES = NULL;
		glTexCoord2bOES = NULL;
		glTexCoord3bOES = NULL;
		glTexCoord4bOES = NULL;
		glTexCoord1bvOES = NULL;
		glTexCoord2bvOES = NULL;
		glTexCoord3bvOES = NULL;
		glTexCoord4bvOES = NULL;
		glMultiTexCoord1bOES = NULL;
		glMultiTexCoord2bOES = NULL;
		glMultiTexCoord3bOES = NULL;
		glMultiTexCoord4bOES = NULL;
		glMultiTexCoord1bvOES = NULL;
		glMultiTexCoord2bvOES = NULL;
		glMultiTexCoord3bvOES = NULL;
		glMultiTexCoord4bvOES = NULL;
	}

	_GLES_OES_byte_coordinates = 0;
	if (glloader_is_supported("GLES_OES_byte_coordinates"))
	{
		_GLES_OES_byte_coordinates = 1;

		LOAD_FUNC1(glVertex2bOES);
		LOAD_FUNC1(glVertex3bOES);
		LOAD_FUNC1(glVertex4bOES);
		LOAD_FUNC1(glVertex2bvOES);
		LOAD_FUNC1(glVertex3bvOES);
		LOAD_FUNC1(glVertex4bvOES);
		LOAD_FUNC1(glTexCoord1bOES);
		LOAD_FUNC1(glTexCoord2bOES);
		LOAD_FUNC1(glTexCoord3bOES);
		LOAD_FUNC1(glTexCoord4bOES);
		LOAD_FUNC1(glTexCoord1bvOES);
		LOAD_FUNC1(glTexCoord2bvOES);
		LOAD_FUNC1(glTexCoord3bvOES);
		LOAD_FUNC1(glTexCoord4bvOES);
		LOAD_FUNC1(glMultiTexCoord1bOES);
		LOAD_FUNC1(glMultiTexCoord2bOES);
		LOAD_FUNC1(glMultiTexCoord3bOES);
		LOAD_FUNC1(glMultiTexCoord4bOES);
		LOAD_FUNC1(glMultiTexCoord1bvOES);
		LOAD_FUNC1(glMultiTexCoord2bvOES);
		LOAD_FUNC1(glMultiTexCoord3bvOES);
		LOAD_FUNC1(glMultiTexCoord4bvOES);
	}
}

void init_GLES_OES_compressed_ETC1_RGB8_texture()
{
	glloader_GLES_OES_compressed_ETC1_RGB8_texture = _glloader_GLES_OES_compressed_ETC1_RGB8_texture;

	_GLES_OES_compressed_ETC1_RGB8_texture = 0;
	if (glloader_is_supported("GLES_OES_compressed_ETC1_RGB8_texture"))
	{
		_GLES_OES_compressed_ETC1_RGB8_texture = 1;
	}
}

void init_GLES_OES_compressed_paletted_texture()
{
	glloader_GLES_OES_compressed_paletted_texture = _glloader_GLES_OES_compressed_paletted_texture;

	_GLES_OES_compressed_paletted_texture = 0;
	if (glloader_is_supported("GLES_OES_compressed_paletted_texture"))
	{
		_GLES_OES_compressed_paletted_texture = 1;
	}
}

void init_GLES_OES_copy_image()
{
	glloader_GLES_OES_copy_image = _glloader_GLES_OES_copy_image;

	{
		glCopyImageSubDataOES = NULL;
	}

	_GLES_OES_copy_image = 0;
	if (glloader_is_supported("GLES_OES_copy_image"))
	{
		_GLES_OES_copy_image = 1;

		LOAD_FUNC1(glCopyImageSubDataOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_copy_image"))
		{
			LOAD_FUNC2(glCopyImageSubDataOES, glCopyImageSubDataEXT);

			_GLES_OES_copy_image = 1;
			promote_high("GLES_OES_copy_image");
		}
	}
}

void init_GLES_OES_depth24()
{
	glloader_GLES_OES_depth24 = _glloader_GLES_OES_depth24;

	_GLES_OES_depth24 = 0;
	if (glloader_is_supported("GLES_OES_depth24"))
	{
		_GLES_OES_depth24 = 1;
	}
}

void init_GLES_OES_depth32()
{
	glloader_GLES_OES_depth32 = _glloader_GLES_OES_depth32;

	_GLES_OES_depth32 = 0;
	if (glloader_is_supported("GLES_OES_depth32"))
	{
		_GLES_OES_depth32 = 1;
	}
}

void init_GLES_OES_depth_texture()
{
	glloader_GLES_OES_depth_texture = _glloader_GLES_OES_depth_texture;

	_GLES_OES_depth_texture = 0;
	if (glloader_is_supported("GLES_OES_depth_texture"))
	{
		_GLES_OES_depth_texture = 1;
	}
}

void init_GLES_OES_depth_texture_cube_map()
{
	glloader_GLES_OES_depth_texture_cube_map = _glloader_GLES_OES_depth_texture_cube_map;

	_GLES_OES_depth_texture_cube_map = 0;
	if (glloader_is_supported("GLES_OES_depth_texture_cube_map"))
	{
		_GLES_OES_depth_texture_cube_map = 1;
	}
}

void init_GLES_OES_draw_buffers_indexed()
{
	glloader_GLES_OES_draw_buffers_indexed = _glloader_GLES_OES_draw_buffers_indexed;

	{
		glEnableiOES = NULL;
		glDisableiOES = NULL;
		glBlendEquationiOES = NULL;
		glBlendEquationSeparateiOES = NULL;
		glBlendFunciOES = NULL;
		glBlendFuncSeparateiOES = NULL;
		glColorMaskiOES = NULL;
		glIsEnablediOES = NULL;
	}

	_GLES_OES_draw_buffers_indexed = 0;
	if (glloader_is_supported("GLES_OES_draw_buffers_indexed"))
	{
		_GLES_OES_draw_buffers_indexed = 1;

		LOAD_FUNC1(glEnableiOES);
		LOAD_FUNC1(glDisableiOES);
		LOAD_FUNC1(glBlendEquationiOES);
		LOAD_FUNC1(glBlendEquationSeparateiOES);
		LOAD_FUNC1(glBlendFunciOES);
		LOAD_FUNC1(glBlendFuncSeparateiOES);
		LOAD_FUNC1(glColorMaskiOES);
		LOAD_FUNC1(glIsEnablediOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_draw_buffers_indexed"))
		{
			LOAD_FUNC2(glEnableiOES, glEnableiEXT);
			LOAD_FUNC2(glDisableiOES, glDisableiEXT);
			LOAD_FUNC2(glBlendEquationiOES, glBlendEquationiEXT);
			LOAD_FUNC2(glBlendEquationSeparateiOES, glBlendEquationSeparateiEXT);
			LOAD_FUNC2(glBlendFunciOES, glBlendFunciEXT);
			LOAD_FUNC2(glBlendFuncSeparateiOES, glBlendFuncSeparateiEXT);
			LOAD_FUNC2(glColorMaskiOES, glColorMaskiEXT);
			LOAD_FUNC2(glIsEnablediOES, glIsEnablediEXT);

			_GLES_OES_draw_buffers_indexed = 1;
			promote_high("GLES_OES_draw_buffers_indexed");
		}
	}
}

void init_GLES_OES_draw_elements_base_vertex()
{
	glloader_GLES_OES_draw_elements_base_vertex = _glloader_GLES_OES_draw_elements_base_vertex;

	{
		glDrawElementsBaseVertexOES = NULL;
		glDrawRangeElementsBaseVertexOES = NULL;
		glDrawElementsInstancedBaseVertexOES = NULL;
		glMultiDrawElementsBaseVertexOES = NULL;
	}

	_GLES_OES_draw_elements_base_vertex = 0;
	if (glloader_is_supported("GLES_OES_draw_elements_base_vertex"))
	{
		_GLES_OES_draw_elements_base_vertex = 1;

		LOAD_FUNC1(glDrawElementsBaseVertexOES);
		LOAD_FUNC1(glDrawRangeElementsBaseVertexOES);
		LOAD_FUNC1(glDrawElementsInstancedBaseVertexOES);
		LOAD_FUNC1(glMultiDrawElementsBaseVertexOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_draw_elements_base_vertex"))
		{
			LOAD_FUNC2(glDrawElementsBaseVertexOES, glDrawElementsBaseVertexEXT);
			LOAD_FUNC2(glDrawRangeElementsBaseVertexOES, glDrawRangeElementsBaseVertexEXT);
			LOAD_FUNC2(glDrawElementsInstancedBaseVertexOES, glDrawElementsInstancedBaseVertexEXT);
			LOAD_FUNC2(glMultiDrawElementsBaseVertexOES, glMultiDrawElementsBaseVertexEXT);

			_GLES_OES_draw_elements_base_vertex = 1;
			promote_high("GLES_OES_draw_elements_base_vertex");
		}
	}
}

void init_GLES_OES_draw_texture()
{
	glloader_GLES_OES_draw_texture = _glloader_GLES_OES_draw_texture;

	{
		glDrawTexsOES = NULL;
		glDrawTexiOES = NULL;
		glDrawTexxOES = NULL;
		glDrawTexsvOES = NULL;
		glDrawTexivOES = NULL;
		glDrawTexxvOES = NULL;
		glDrawTexfOES = NULL;
		glDrawTexfvOES = NULL;
	}

	_GLES_OES_draw_texture = 0;
	if (glloader_is_supported("GLES_OES_draw_texture"))
	{
		_GLES_OES_draw_texture = 1;

		LOAD_FUNC1(glDrawTexsOES);
		LOAD_FUNC1(glDrawTexiOES);
		LOAD_FUNC1(glDrawTexxOES);
		LOAD_FUNC1(glDrawTexsvOES);
		LOAD_FUNC1(glDrawTexivOES);
		LOAD_FUNC1(glDrawTexxvOES);
		LOAD_FUNC1(glDrawTexfOES);
		LOAD_FUNC1(glDrawTexfvOES);
	}
}

void init_GLES_OES_EGL_image()
{
	glloader_GLES_OES_EGL_image = _glloader_GLES_OES_EGL_image;

	{
		EGLImageTargetTexture2DOES = NULL;
		EGLImageTargetRenderbufferStorageOES = NULL;
	}

	_GLES_OES_EGL_image = 0;
	if (glloader_is_supported("GLES_OES_EGL_image"))
	{
		_GLES_OES_EGL_image = 1;

		LOAD_FUNC1(EGLImageTargetTexture2DOES);
		LOAD_FUNC1(EGLImageTargetRenderbufferStorageOES);
	}
}

void init_GLES_OES_EGL_image_external()
{
	glloader_GLES_OES_EGL_image_external = _glloader_GLES_OES_EGL_image_external;

	_GLES_OES_EGL_image_external = 0;
	if (glloader_is_supported("GLES_OES_EGL_image_external"))
	{
		_GLES_OES_EGL_image_external = 1;
	}
}

void init_GLES_OES_EGL_image_external_essl3()
{
	glloader_GLES_OES_EGL_image_external_essl3 = _glloader_GLES_OES_EGL_image_external_essl3;

	_GLES_OES_EGL_image_external_essl3 = 0;
	if (glloader_is_supported("GLES_OES_EGL_image_external_essl3"))
	{
		_GLES_OES_EGL_image_external_essl3 = 1;
	}
}

void init_GLES_OES_element_index_uint()
{
	glloader_GLES_OES_element_index_uint = _glloader_GLES_OES_element_index_uint;

	_GLES_OES_element_index_uint = 0;
	if (glloader_is_supported("GLES_OES_element_index_uint"))
	{
		_GLES_OES_element_index_uint = 1;
	}
}

void init_GLES_OES_extended_matrix_palette()
{
	glloader_GLES_OES_extended_matrix_palette = _glloader_GLES_OES_extended_matrix_palette;

	_GLES_OES_extended_matrix_palette = 0;
	if (glloader_is_supported("GLES_OES_extended_matrix_palette"))
	{
		_GLES_OES_extended_matrix_palette = 1;
	}
}

void init_GLES_OES_fbo_render_mipmap()
{
	glloader_GLES_OES_fbo_render_mipmap = _glloader_GLES_OES_fbo_render_mipmap;

	_GLES_OES_fbo_render_mipmap = 0;
	if (glloader_is_supported("GLES_OES_fbo_render_mipmap"))
	{
		_GLES_OES_fbo_render_mipmap = 1;
	}
}

void init_GLES_OES_fixed_point()
{
	glloader_GLES_OES_fixed_point = _glloader_GLES_OES_fixed_point;

	{
		glVertex2xOES = NULL;
		glVertex3xOES = NULL;
		glVertex4xOES = NULL;
		glVertex2xvOES = NULL;
		glVertex3xvOES = NULL;
		glVertex4xvOES = NULL;
		glNormal3xOES = NULL;
		glNormal3xvOES = NULL;
		glTexCoord1xOES = NULL;
		glTexCoord2xOES = NULL;
		glTexCoord3xOES = NULL;
		glTexCoord4xOES = NULL;
		glMultiTexCoord1xOES = NULL;
		glMultiTexCoord2xOES = NULL;
		glMultiTexCoord3xOES = NULL;
		glMultiTexCoord4xOES = NULL;
		glMultiTexCoord1xvOES = NULL;
		glMultiTexCoord2xvOES = NULL;
		glMultiTexCoord3xvOES = NULL;
		glMultiTexCoord4xvOES = NULL;
		glColor3xOES = NULL;
		glColor4xOES = NULL;
		glColor3xvOES = NULL;
		glColor4xvOES = NULL;
		glIndexxOES = NULL;
		glIndexxvOES = NULL;
		glRectxOES = NULL;
		glRectxvOES = NULL;
		glDepthRangexOES = NULL;
		glLoadMatrixxOES = NULL;
		glMultMatrixxOES = NULL;
		glLoadTransposeMatrixxOES = NULL;
		glMultTransposeMatrixxOES = NULL;
		glRotatexOES = NULL;
		glScalexOES = NULL;
		glTranslatexOES = NULL;
		glFrustumxOES = NULL;
		glOrthoxOES = NULL;
		glTexGenxOES = NULL;
		glTexGenxvOES = NULL;
		glGetTexGenxvOES = NULL;
		glClipPlanexOES = NULL;
		glGetClipPlanexOES = NULL;
		glRasterPos2xOES = NULL;
		glRasterPos3xOES = NULL;
		glRasterPos4xOES = NULL;
		glRasterPos2xvOES = NULL;
		glRasterPos3xvOES = NULL;
		glRasterPos4xvOES = NULL;
		glMaterialxOES = NULL;
		glMaterialxvOES = NULL;
		glGetMaterialxOES = NULL;
		glLightxOES = NULL;
		glLightxvOES = NULL;
		glGetLightxvOES = NULL;
		glLightModelxOES = NULL;
		glLightModelxvOES = NULL;
		glPointSizexOES = NULL;
		glPointParameterxvOES = NULL;
		glLineWidthxOES = NULL;
		glPolygonOffsetxOES = NULL;
		glPixelStorexOES = NULL;
		glPixelTransferxOES = NULL;
		glPixelMapxOES = NULL;
		glGetPixelMapxvOES = NULL;
		glConvolutionParameterxOES = NULL;
		glConvolutionParameterxvOES = NULL;
		glGetConvolutionParameterxvOES = NULL;
		glGetHistogramParameterxvOES = NULL;
		glPixelZoomxOES = NULL;
		glBitmapxOES = NULL;
		glTexParameterxOES = NULL;
		glGetTexParameterxvOES = NULL;
		glGetTexLevelParameterxvOES = NULL;
		glPrioritizeTexturesxOES = NULL;
		glTexEnvxOES = NULL;
		glGetTexEnvxvOES = NULL;
		glFogxOES = NULL;
		glFogxvOES = NULL;
		glSampleCoveragexOES = NULL;
		glAlphaFuncxOES = NULL;
		glBlendColorxOES = NULL;
		glClearColorxOES = NULL;
		glClearDepthxOES = NULL;
		glClearAccumxOES = NULL;
		glAccumxOES = NULL;
		glMap1xOES = NULL;
		glMap2xOES = NULL;
		glMapGrid1xOES = NULL;
		glMapGrid2xOES = NULL;
		glGetMapxvOES = NULL;
		glEvalCoord1xOES = NULL;
		glEvalCoord1xvOES = NULL;
		glEvalCoord2xOES = NULL;
		glEvalCoord2xvOES = NULL;
		glFeedbackBufferxOES = NULL;
		glPassThroughxOES = NULL;
		glGetFixedvOES = NULL;
	}

	_GLES_OES_fixed_point = 0;
	if (glloader_is_supported("GLES_OES_fixed_point"))
	{
		_GLES_OES_fixed_point = 1;

		LOAD_FUNC1(glVertex2xOES);
		LOAD_FUNC1(glVertex3xOES);
		LOAD_FUNC1(glVertex4xOES);
		LOAD_FUNC1(glVertex2xvOES);
		LOAD_FUNC1(glVertex3xvOES);
		LOAD_FUNC1(glVertex4xvOES);
		LOAD_FUNC1(glNormal3xOES);
		LOAD_FUNC1(glNormal3xvOES);
		LOAD_FUNC1(glTexCoord1xOES);
		LOAD_FUNC1(glTexCoord2xOES);
		LOAD_FUNC1(glTexCoord3xOES);
		LOAD_FUNC1(glTexCoord4xOES);
		LOAD_FUNC1(glMultiTexCoord1xOES);
		LOAD_FUNC1(glMultiTexCoord2xOES);
		LOAD_FUNC1(glMultiTexCoord3xOES);
		LOAD_FUNC1(glMultiTexCoord4xOES);
		LOAD_FUNC1(glMultiTexCoord1xvOES);
		LOAD_FUNC1(glMultiTexCoord2xvOES);
		LOAD_FUNC1(glMultiTexCoord3xvOES);
		LOAD_FUNC1(glMultiTexCoord4xvOES);
		LOAD_FUNC1(glColor3xOES);
		LOAD_FUNC1(glColor4xOES);
		LOAD_FUNC1(glColor3xvOES);
		LOAD_FUNC1(glColor4xvOES);
		LOAD_FUNC1(glIndexxOES);
		LOAD_FUNC1(glIndexxvOES);
		LOAD_FUNC1(glRectxOES);
		LOAD_FUNC1(glRectxvOES);
		LOAD_FUNC1(glDepthRangexOES);
		LOAD_FUNC1(glLoadMatrixxOES);
		LOAD_FUNC1(glMultMatrixxOES);
		LOAD_FUNC1(glLoadTransposeMatrixxOES);
		LOAD_FUNC1(glMultTransposeMatrixxOES);
		LOAD_FUNC1(glRotatexOES);
		LOAD_FUNC1(glScalexOES);
		LOAD_FUNC1(glTranslatexOES);
		LOAD_FUNC1(glFrustumxOES);
		LOAD_FUNC1(glOrthoxOES);
		LOAD_FUNC1(glTexGenxOES);
		LOAD_FUNC1(glTexGenxvOES);
		LOAD_FUNC1(glGetTexGenxvOES);
		LOAD_FUNC1(glClipPlanexOES);
		LOAD_FUNC1(glGetClipPlanexOES);
		LOAD_FUNC1(glRasterPos2xOES);
		LOAD_FUNC1(glRasterPos3xOES);
		LOAD_FUNC1(glRasterPos4xOES);
		LOAD_FUNC1(glRasterPos2xvOES);
		LOAD_FUNC1(glRasterPos3xvOES);
		LOAD_FUNC1(glRasterPos4xvOES);
		LOAD_FUNC1(glMaterialxOES);
		LOAD_FUNC1(glMaterialxvOES);
		LOAD_FUNC1(glGetMaterialxOES);
		LOAD_FUNC1(glLightxOES);
		LOAD_FUNC1(glLightxvOES);
		LOAD_FUNC1(glGetLightxvOES);
		LOAD_FUNC1(glLightModelxOES);
		LOAD_FUNC1(glLightModelxvOES);
		LOAD_FUNC1(glPointSizexOES);
		LOAD_FUNC1(glPointParameterxvOES);
		LOAD_FUNC1(glLineWidthxOES);
		LOAD_FUNC1(glPolygonOffsetxOES);
		LOAD_FUNC1(glPixelStorexOES);
		LOAD_FUNC1(glPixelTransferxOES);
		LOAD_FUNC1(glPixelMapxOES);
		LOAD_FUNC1(glGetPixelMapxvOES);
		LOAD_FUNC1(glConvolutionParameterxOES);
		LOAD_FUNC1(glConvolutionParameterxvOES);
		LOAD_FUNC1(glGetConvolutionParameterxvOES);
		LOAD_FUNC1(glGetHistogramParameterxvOES);
		LOAD_FUNC1(glPixelZoomxOES);
		LOAD_FUNC1(glBitmapxOES);
		LOAD_FUNC1(glTexParameterxOES);
		LOAD_FUNC1(glGetTexParameterxvOES);
		LOAD_FUNC1(glGetTexLevelParameterxvOES);
		LOAD_FUNC1(glPrioritizeTexturesxOES);
		LOAD_FUNC1(glTexEnvxOES);
		LOAD_FUNC1(glGetTexEnvxvOES);
		LOAD_FUNC1(glFogxOES);
		LOAD_FUNC1(glFogxvOES);
		LOAD_FUNC1(glSampleCoveragexOES);
		LOAD_FUNC1(glAlphaFuncxOES);
		LOAD_FUNC1(glBlendColorxOES);
		LOAD_FUNC1(glClearColorxOES);
		LOAD_FUNC1(glClearDepthxOES);
		LOAD_FUNC1(glClearAccumxOES);
		LOAD_FUNC1(glAccumxOES);
		LOAD_FUNC1(glMap1xOES);
		LOAD_FUNC1(glMap2xOES);
		LOAD_FUNC1(glMapGrid1xOES);
		LOAD_FUNC1(glMapGrid2xOES);
		LOAD_FUNC1(glGetMapxvOES);
		LOAD_FUNC1(glEvalCoord1xOES);
		LOAD_FUNC1(glEvalCoord1xvOES);
		LOAD_FUNC1(glEvalCoord2xOES);
		LOAD_FUNC1(glEvalCoord2xvOES);
		LOAD_FUNC1(glFeedbackBufferxOES);
		LOAD_FUNC1(glPassThroughxOES);
		LOAD_FUNC1(glGetFixedvOES);
	}
}

void init_GLES_OES_fragment_precision_high()
{
	glloader_GLES_OES_fragment_precision_high = _glloader_GLES_OES_fragment_precision_high;

	_GLES_OES_fragment_precision_high = 0;
	if (glloader_is_supported("GLES_OES_fragment_precision_high"))
	{
		_GLES_OES_fragment_precision_high = 1;
	}
}

void init_GLES_OES_framebuffer_object()
{
	glloader_GLES_OES_framebuffer_object = _glloader_GLES_OES_framebuffer_object;

	{
		glIsRenderbufferOES = NULL;
		glBindRenderbufferOES = NULL;
		glDeleteRenderbuffersOES = NULL;
		glGenRenderbuffersOES = NULL;
		glRenderbufferStorageOES = NULL;
		glGetRenderbufferParameterivOES = NULL;
		glIsFramebufferOES = NULL;
		glBindFramebufferOES = NULL;
		glDeleteFramebuffersOES = NULL;
		glGenFramebuffersOES = NULL;
		glCheckFramebufferStatusOES = NULL;
		glFramebufferTexture2DOES = NULL;
		glFramebufferRenderbufferOES = NULL;
		glGetFramebufferAttachmentParameterivOES = NULL;
		glGenerateMipmapOES = NULL;
	}

	_GLES_OES_framebuffer_object = 0;
	if (glloader_is_supported("GLES_OES_framebuffer_object"))
	{
		_GLES_OES_framebuffer_object = 1;

		LOAD_FUNC1(glIsRenderbufferOES);
		LOAD_FUNC1(glBindRenderbufferOES);
		LOAD_FUNC1(glDeleteRenderbuffersOES);
		LOAD_FUNC1(glGenRenderbuffersOES);
		LOAD_FUNC1(glRenderbufferStorageOES);
		LOAD_FUNC1(glGetRenderbufferParameterivOES);
		LOAD_FUNC1(glIsFramebufferOES);
		LOAD_FUNC1(glBindFramebufferOES);
		LOAD_FUNC1(glDeleteFramebuffersOES);
		LOAD_FUNC1(glGenFramebuffersOES);
		LOAD_FUNC1(glCheckFramebufferStatusOES);
		LOAD_FUNC1(glFramebufferTexture2DOES);
		LOAD_FUNC1(glFramebufferRenderbufferOES);
		LOAD_FUNC1(glGetFramebufferAttachmentParameterivOES);
		LOAD_FUNC1(glGenerateMipmapOES);
	}
}

void init_GLES_OES_geometry_shader()
{
	glloader_GLES_OES_geometry_shader = _glloader_GLES_OES_geometry_shader;

	{
		glFramebufferTextureOES = NULL;
	}

	_GLES_OES_geometry_shader = 0;
	if (glloader_is_supported("GLES_OES_geometry_shader"))
	{
		_GLES_OES_geometry_shader = 1;

		LOAD_FUNC1(glFramebufferTextureOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_geometry_shader"))
		{
			LOAD_FUNC2(glFramebufferTextureOES, glFramebufferTextureEXT);

			_GLES_OES_geometry_shader = 1;
			promote_high("GLES_OES_geometry_shader");
		}
	}
}

void init_GLES_OES_get_program_binary()
{
	glloader_GLES_OES_get_program_binary = _glloader_GLES_OES_get_program_binary;

	{
		glGetProgramBinaryOES = NULL;
		glProgramBinaryOES = NULL;
	}

	_GLES_OES_get_program_binary = 0;
	if (glloader_is_supported("GLES_OES_get_program_binary"))
	{
		_GLES_OES_get_program_binary = 1;

		LOAD_FUNC1(glGetProgramBinaryOES);
		LOAD_FUNC1(glProgramBinaryOES);
	}
}

void init_GLES_OES_gpu_shader5()
{
	glloader_GLES_OES_gpu_shader5 = _glloader_GLES_OES_gpu_shader5;

	_GLES_OES_gpu_shader5 = 0;
	if (glloader_is_supported("GLES_OES_gpu_shader5"))
	{
		_GLES_OES_gpu_shader5 = 1;
	}
}

void init_GLES_OES_mapbuffer()
{
	glloader_GLES_OES_mapbuffer = _glloader_GLES_OES_mapbuffer;

	{
		glGetBufferPointervOES = NULL;
		glMapBufferOES = NULL;
		glUnmapBufferOES = NULL;
	}

	_GLES_OES_mapbuffer = 0;
	if (glloader_is_supported("GLES_OES_mapbuffer"))
	{
		_GLES_OES_mapbuffer = 1;

		LOAD_FUNC1(glGetBufferPointervOES);
		LOAD_FUNC1(glMapBufferOES);
		LOAD_FUNC1(glUnmapBufferOES);
	}
}

void init_GLES_OES_matrix_get()
{
	glloader_GLES_OES_matrix_get = _glloader_GLES_OES_matrix_get;

	_GLES_OES_matrix_get = 0;
	if (glloader_is_supported("GLES_OES_matrix_get"))
	{
		_GLES_OES_matrix_get = 1;
	}
}

void init_GLES_OES_matrix_palette()
{
	glloader_GLES_OES_matrix_palette = _glloader_GLES_OES_matrix_palette;

	{
		glCurrentPaletteMatrixOES = NULL;
		glLoadPaletteFromModelViewMatrixOES = NULL;
		glMatrixIndexPointerOES = NULL;
		glWeightPointerOES = NULL;
	}

	_GLES_OES_matrix_palette = 0;
	if (glloader_is_supported("GLES_OES_matrix_palette"))
	{
		_GLES_OES_matrix_palette = 1;

		LOAD_FUNC1(glCurrentPaletteMatrixOES);
		LOAD_FUNC1(glLoadPaletteFromModelViewMatrixOES);
		LOAD_FUNC1(glMatrixIndexPointerOES);
		LOAD_FUNC1(glWeightPointerOES);
	}
}

void init_GLES_OES_packed_depth_stencil()
{
	glloader_GLES_OES_packed_depth_stencil = _glloader_GLES_OES_packed_depth_stencil;

	_GLES_OES_packed_depth_stencil = 0;
	if (glloader_is_supported("GLES_OES_packed_depth_stencil"))
	{
		_GLES_OES_packed_depth_stencil = 1;
	}
}

void init_GLES_OES_point_size_array()
{
	glloader_GLES_OES_point_size_array = _glloader_GLES_OES_point_size_array;

	{
		glPointSizePointerOES = NULL;
	}

	_GLES_OES_point_size_array = 0;
	if (glloader_is_supported("GLES_OES_point_size_array"))
	{
		_GLES_OES_point_size_array = 1;

		LOAD_FUNC1(glPointSizePointerOES);
	}
}

void init_GLES_OES_point_sprite()
{
	glloader_GLES_OES_point_sprite = _glloader_GLES_OES_point_sprite;

	_GLES_OES_point_sprite = 0;
	if (glloader_is_supported("GLES_OES_point_sprite"))
	{
		_GLES_OES_point_sprite = 1;
	}
}

void init_GLES_OES_primitive_bounding_box()
{
	glloader_GLES_OES_primitive_bounding_box = _glloader_GLES_OES_primitive_bounding_box;

	{
		glPrimitiveBoundingBoxOES = NULL;
	}

	_GLES_OES_primitive_bounding_box = 0;
	if (glloader_is_supported("GLES_OES_primitive_bounding_box"))
	{
		_GLES_OES_primitive_bounding_box = 1;

		LOAD_FUNC1(glPrimitiveBoundingBoxOES);
	}
	else
	{
		if (glloader_is_supported("GL_EXT_primitive_bounding_box"))
		{
			LOAD_FUNC2(glPrimitiveBoundingBoxOES, glPrimitiveBoundingBoxEXT);

			_GLES_OES_primitive_bounding_box = 1;
			promote_high("GLES_OES_primitive_bounding_box");
		}
	}
}

void init_GLES_OES_query_matrix()
{
	glloader_GLES_OES_query_matrix = _glloader_GLES_OES_query_matrix;

	{
		glQueryMatrixxOES = NULL;
	}

	_GLES_OES_query_matrix = 0;
	if (glloader_is_supported("GLES_OES_query_matrix"))
	{
		_GLES_OES_query_matrix = 1;

		LOAD_FUNC1(glQueryMatrixxOES);
	}
}

void init_GLES_OES_read_format()
{
	glloader_GLES_OES_read_format = _glloader_GLES_OES_read_format;

	_GLES_OES_read_format = 0;
	if (glloader_is_supported("GLES_OES_read_format"))
	{
		_GLES_OES_read_format = 1;
	}
}

void init_GLES_OES_required_internalformat()
{
	glloader_GLES_OES_required_internalformat = _glloader_GLES_OES_required_internalformat;

	_GLES_OES_required_internalformat = 0;
	if (glloader_is_supported("GLES_OES_required_internalformat"))
	{
		_GLES_OES_required_internalformat = 1;
	}
}

void init_GLES_OES_rgb8_rgba8()
{
	glloader_GLES_OES_rgb8_rgba8 = _glloader_GLES_OES_rgb8_rgba8;

	_GLES_OES_rgb8_rgba8 = 0;
	if (glloader_is_supported("GLES_OES_rgb8_rgba8"))
	{
		_GLES_OES_rgb8_rgba8 = 1;
	}
}

void init_GL_OES_sample_shading()
{
	glloader_GL_OES_sample_shading = _glloader_GL_OES_sample_shading;

	{
		glMinSampleShadingOES = NULL;
	}

	_GL_OES_sample_shading = 0;
	if (glloader_is_supported("GL_OES_sample_shading"))
	{
		_GL_OES_sample_shading = 1;

		LOAD_FUNC1(glMinSampleShadingOES);
	}
}

void init_GL_OES_sample_variables()
{
	glloader_GL_OES_sample_variables = _glloader_GL_OES_sample_variables;

	_GL_OES_sample_variables = 0;
	if (glloader_is_supported("GL_OES_sample_variables"))
	{
		_GL_OES_sample_variables = 1;
	}
}

void init_GLES_OES_shader_binary()
{
	glloader_GLES_OES_shader_binary = _glloader_GLES_OES_shader_binary;

	{
		glShaderBinaryOES = NULL;
	}

	_GLES_OES_shader_binary = 0;
	if (glloader_is_supported("GLES_OES_shader_binary"))
	{
		_GLES_OES_shader_binary = 1;

		LOAD_FUNC1(glShaderBinaryOES);
	}
}

void init_GL_OES_shader_image_atomic()
{
	glloader_GL_OES_shader_image_atomic = _glloader_GL_OES_shader_image_atomic;

	_GL_OES_shader_image_atomic = 0;
	if (glloader_is_supported("GL_OES_shader_image_atomic"))
	{
		_GL_OES_shader_image_atomic = 1;
	}
}

void init_GLES_OES_shader_io_blocks()
{
	glloader_GLES_OES_shader_io_blocks = _glloader_GLES_OES_shader_io_blocks;

	_GLES_OES_shader_io_blocks = 0;
	if (glloader_is_supported("GLES_OES_shader_io_blocks"))
	{
		_GLES_OES_shader_io_blocks = 1;
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_shader_io_blocks"))
		{
			_GLES_OES_shader_io_blocks = 1;
			promote_high("GLES_OES_shader_io_blocks");
		}
	}
}

void init_GL_OES_shader_multisample_interpolation()
{
	glloader_GL_OES_shader_multisample_interpolation = _glloader_GL_OES_shader_multisample_interpolation;

	_GL_OES_shader_multisample_interpolation = 0;
	if (glloader_is_supported("GL_OES_shader_multisample_interpolation"))
	{
		_GL_OES_shader_multisample_interpolation = 1;
	}
}

void init_GLES_OES_shader_source()
{
	glloader_GLES_OES_shader_source = _glloader_GLES_OES_shader_source;

	{
		glReleaseShaderCompilerOES = NULL;
		glGetShaderPrecisionFormatOES = NULL;
	}

	_GLES_OES_shader_source = 0;
	if (glloader_is_supported("GLES_OES_shader_source"))
	{
		_GLES_OES_shader_source = 1;

		LOAD_FUNC1(glReleaseShaderCompilerOES);
		LOAD_FUNC1(glGetShaderPrecisionFormatOES);
	}
}

void init_GLES_OES_single_precision()
{
	glloader_GLES_OES_single_precision = _glloader_GLES_OES_single_precision;

	{
		glDepthRangefOES = NULL;
		glFrustumfOES = NULL;
		glOrthofOES = NULL;
		glClipPlanefOES = NULL;
		glGetClipPlanefOES = NULL;
		glClearDepthfOES = NULL;
	}

	_GLES_OES_single_precision = 0;
	if (glloader_is_supported("GLES_OES_single_precision"))
	{
		_GLES_OES_single_precision = 1;

		LOAD_FUNC1(glDepthRangefOES);
		LOAD_FUNC1(glFrustumfOES);
		LOAD_FUNC1(glOrthofOES);
		LOAD_FUNC1(glClipPlanefOES);
		LOAD_FUNC1(glGetClipPlanefOES);
		LOAD_FUNC1(glClearDepthfOES);
	}
}

void init_GLES_OES_standard_derivatives()
{
	glloader_GLES_OES_standard_derivatives = _glloader_GLES_OES_standard_derivatives;

	_GLES_OES_standard_derivatives = 0;
	if (glloader_is_supported("GLES_OES_standard_derivatives"))
	{
		_GLES_OES_standard_derivatives = 1;
	}
}

void init_GLES_OES_stencil1()
{
	glloader_GLES_OES_stencil1 = _glloader_GLES_OES_stencil1;

	_GLES_OES_stencil1 = 0;
	if (glloader_is_supported("GLES_OES_stencil1"))
	{
		_GLES_OES_stencil1 = 1;
	}
}

void init_GLES_OES_stencil4()
{
	glloader_GLES_OES_stencil4 = _glloader_GLES_OES_stencil4;

	_GLES_OES_stencil4 = 0;
	if (glloader_is_supported("GLES_OES_stencil4"))
	{
		_GLES_OES_stencil4 = 1;
	}
}

void init_GLES_OES_stencil8()
{
	glloader_GLES_OES_stencil8 = _glloader_GLES_OES_stencil8;

	_GLES_OES_stencil8 = 0;
	if (glloader_is_supported("GLES_OES_stencil8"))
	{
		_GLES_OES_stencil8 = 1;
	}
}

void init_GLES_OES_stencil_wrap()
{
	glloader_GLES_OES_stencil_wrap = _glloader_GLES_OES_stencil_wrap;

	_GLES_OES_stencil_wrap = 0;
	if (glloader_is_supported("GLES_OES_stencil_wrap"))
	{
		_GLES_OES_stencil_wrap = 1;
	}
}

void init_GLES_OES_surfaceless_context()
{
	glloader_GLES_OES_surfaceless_context = _glloader_GLES_OES_surfaceless_context;

	_GLES_OES_surfaceless_context = 0;
	if (glloader_is_supported("GLES_OES_surfaceless_context"))
	{
		_GLES_OES_surfaceless_context = 1;
	}
}

void init_GLES_OES_tessellation_shader()
{
	glloader_GLES_OES_tessellation_shader = _glloader_GLES_OES_tessellation_shader;

	{
		glPatchParameteriOES = NULL;
	}

	_GLES_OES_tessellation_shader = 0;
	if (glloader_is_supported("GLES_OES_tessellation_shader"))
	{
		_GLES_OES_tessellation_shader = 1;

		LOAD_FUNC1(glPatchParameteriOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_tessellation_shader"))
		{
			LOAD_FUNC2(glPatchParameteriOES, glPatchParameteriEXT);

			_GLES_OES_tessellation_shader = 1;
			promote_high("GLES_OES_tessellation_shader");
		}
	}
}

void init_GLES_OES_texture_3D()
{
	glloader_GLES_OES_texture_3D = _glloader_GLES_OES_texture_3D;

	{
		glTexImage3DOES = NULL;
		glTexSubImage3DOES = NULL;
		glCopyTexSubImage3DOES = NULL;
		glCompressedTexImage3DOES = NULL;
		glCompressedTexSubImage3DOES = NULL;
		glFramebufferTexture3DOES = NULL;
	}

	_GLES_OES_texture_3D = 0;
	if (glloader_is_supported("GLES_OES_texture_3D"))
	{
		_GLES_OES_texture_3D = 1;

		LOAD_FUNC1(glTexImage3DOES);
		LOAD_FUNC1(glTexSubImage3DOES);
		LOAD_FUNC1(glCopyTexSubImage3DOES);
		LOAD_FUNC1(glCompressedTexImage3DOES);
		LOAD_FUNC1(glCompressedTexSubImage3DOES);
		LOAD_FUNC1(glFramebufferTexture3DOES);
	}
}

void init_GLES_OES_texture_border_clamp()
{
	glloader_GLES_OES_texture_border_clamp = _glloader_GLES_OES_texture_border_clamp;

	{
		glTexParameterIivOES = NULL;
		glTexParameterIuivOES = NULL;
		glGetTexParameterIivOES = NULL;
		glGetTexParameterIuivOES = NULL;
		glSamplerParameterIivOES = NULL;
		glSamplerParameterIuivOES = NULL;
		glGetSamplerParameterIivOES = NULL;
		glGetSamplerParameterIuivOES = NULL;
	}

	_GLES_OES_texture_border_clamp = 0;
	if (glloader_is_supported("GLES_OES_texture_border_clamp"))
	{
		_GLES_OES_texture_border_clamp = 1;

		LOAD_FUNC1(glTexParameterIivOES);
		LOAD_FUNC1(glTexParameterIuivOES);
		LOAD_FUNC1(glGetTexParameterIivOES);
		LOAD_FUNC1(glGetTexParameterIuivOES);
		LOAD_FUNC1(glSamplerParameterIivOES);
		LOAD_FUNC1(glSamplerParameterIuivOES);
		LOAD_FUNC1(glGetSamplerParameterIivOES);
		LOAD_FUNC1(glGetSamplerParameterIuivOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_texture_border_clamp"))
		{
			LOAD_FUNC2(glTexParameterIivOES, glTexParameterIivEXT);
			LOAD_FUNC2(glTexParameterIuivOES, glTexParameterIuivEXT);
			LOAD_FUNC2(glGetTexParameterIivOES, glGetTexParameterIivEXT);
			LOAD_FUNC2(glGetTexParameterIuivOES, glGetTexParameterIuivEXT);
			LOAD_FUNC2(glSamplerParameterIivOES, glSamplerParameterIivEXT);
			LOAD_FUNC2(glSamplerParameterIuivOES, glSamplerParameterIuivEXT);
			LOAD_FUNC2(glGetSamplerParameterIivOES, glGetSamplerParameterIivEXT);
			LOAD_FUNC2(glGetSamplerParameterIuivOES, glGetSamplerParameterIuivEXT);

			_GLES_OES_texture_border_clamp = 1;
			promote_high("GLES_OES_texture_border_clamp");
		}
	}
}

void init_GLES_OES_texture_buffer()
{
	glloader_GLES_OES_texture_buffer = _glloader_GLES_OES_texture_buffer;

	{
		glTexBufferOES = NULL;
		glTexBufferRangeOES = NULL;
	}

	_GLES_OES_texture_buffer = 0;
	if (glloader_is_supported("GLES_OES_texture_buffer"))
	{
		_GLES_OES_texture_buffer = 1;

		LOAD_FUNC1(glTexBufferOES);
		LOAD_FUNC1(glTexBufferRangeOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_texture_buffer"))
		{
			LOAD_FUNC2(glTexBufferOES, glTexBufferEXT);
			LOAD_FUNC2(glTexBufferRangeOES, glTexBufferRangeEXT);

			_GLES_OES_texture_buffer = 1;
			promote_high("GLES_OES_texture_buffer");
		}
	}
}

void init_GLES_OES_texture_compression_astc()
{
	glloader_GLES_OES_texture_compression_astc = _glloader_GLES_OES_texture_compression_astc;

	_GLES_OES_texture_compression_astc = 0;
	if (glloader_is_supported("GLES_OES_texture_compression_astc"))
	{
		_GLES_OES_texture_compression_astc = 1;
	}
}

void init_GLES_OES_texture_cube_map()
{
	glloader_GLES_OES_texture_cube_map = _glloader_GLES_OES_texture_cube_map;

	{
		glTexGenfOES = NULL;
		glTexGenfvOES = NULL;
		glTexGeniOES = NULL;
		glTexGenivOES = NULL;
		glGetTexGenfvOES = NULL;
		glGetTexGenivOES = NULL;
	}

	_GLES_OES_texture_cube_map = 0;
	if (glloader_is_supported("GLES_OES_texture_cube_map"))
	{
		_GLES_OES_texture_cube_map = 1;

		LOAD_FUNC1(glTexGenfOES);
		LOAD_FUNC1(glTexGenfvOES);
		LOAD_FUNC1(glTexGeniOES);
		LOAD_FUNC1(glTexGenivOES);
		LOAD_FUNC1(glGetTexGenfvOES);
		LOAD_FUNC1(glGetTexGenivOES);
	}
}

void init_GLES_OES_texture_cube_map_array()
{
	glloader_GLES_OES_texture_cube_map_array = _glloader_GLES_OES_texture_cube_map_array;

	_GLES_OES_texture_cube_map_array = 0;
	if (glloader_is_supported("GLES_OES_texture_cube_map_array"))
	{
		_GLES_OES_texture_cube_map_array = 1;
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_texture_cube_map_array"))
		{
			_GLES_OES_texture_cube_map_array = 1;
			promote_high("GLES_OES_texture_cube_map_array");
		}
	}
}

void init_GLES_OES_texture_env_crossbar()
{
	glloader_GLES_OES_texture_env_crossbar = _glloader_GLES_OES_texture_env_crossbar;

	_GLES_OES_texture_env_crossbar = 0;
	if (glloader_is_supported("GLES_OES_texture_env_crossbar"))
	{
		_GLES_OES_texture_env_crossbar = 1;
	}
}

void init_GLES_OES_texture_float()
{
	glloader_GLES_OES_texture_float = _glloader_GLES_OES_texture_float;

	_GLES_OES_texture_float = 0;
	if (glloader_is_supported("GLES_OES_texture_float"))
	{
		_GLES_OES_texture_float = 1;
	}
}

void init_GLES_OES_texture_float_linear()
{
	glloader_GLES_OES_texture_float_linear = _glloader_GLES_OES_texture_float_linear;

	_GLES_OES_texture_float_linear = 0;
	if (glloader_is_supported("GLES_OES_texture_float_linear"))
	{
		_GLES_OES_texture_float_linear = 1;
	}
}

void init_GLES_OES_texture_half_float()
{
	glloader_GLES_OES_texture_half_float = _glloader_GLES_OES_texture_half_float;

	_GLES_OES_texture_half_float = 0;
	if (glloader_is_supported("GLES_OES_texture_half_float"))
	{
		_GLES_OES_texture_half_float = 1;
	}
}

void init_GLES_OES_texture_half_float_linear()
{
	glloader_GLES_OES_texture_half_float_linear = _glloader_GLES_OES_texture_half_float_linear;

	_GLES_OES_texture_half_float_linear = 0;
	if (glloader_is_supported("GLES_OES_texture_half_float_linear"))
	{
		_GLES_OES_texture_half_float_linear = 1;
	}
}

void init_GLES_OES_texture_mirrored_repeat()
{
	glloader_GLES_OES_texture_mirrored_repeat = _glloader_GLES_OES_texture_mirrored_repeat;

	_GLES_OES_texture_mirrored_repeat = 0;
	if (glloader_is_supported("GLES_OES_texture_mirrored_repeat"))
	{
		_GLES_OES_texture_mirrored_repeat = 1;
	}
}

void init_GLES_OES_texture_npot()
{
	glloader_GLES_OES_texture_npot = _glloader_GLES_OES_texture_npot;

	_GLES_OES_texture_npot = 0;
	if (glloader_is_supported("GLES_OES_texture_npot"))
	{
		_GLES_OES_texture_npot = 1;
	}
}

void init_GL_OES_texture_stencil8()
{
	glloader_GL_OES_texture_stencil8 = _glloader_GL_OES_texture_stencil8;

	_GL_OES_texture_stencil8 = 0;
	if (glloader_is_supported("GL_OES_texture_stencil8"))
	{
		_GL_OES_texture_stencil8 = 1;
	}
}

void init_GL_OES_texture_storage_multisample_2d_array()
{
	glloader_GL_OES_texture_storage_multisample_2d_array = _glloader_GL_OES_texture_storage_multisample_2d_array;

	{
		glTexImage3DMultisampleOES = NULL;
	}

	_GL_OES_texture_storage_multisample_2d_array = 0;
	if (glloader_is_supported("GL_OES_texture_storage_multisample_2d_array"))
	{
		_GL_OES_texture_storage_multisample_2d_array = 1;

		LOAD_FUNC1(glTexImage3DMultisampleOES);
	}
}

void init_GLES_OES_texture_view()
{
	glloader_GLES_OES_texture_view = _glloader_GLES_OES_texture_view;

	{
		glTextureViewOES = NULL;
	}

	_GLES_OES_texture_view = 0;
	if (glloader_is_supported("GLES_OES_texture_view"))
	{
		_GLES_OES_texture_view = 1;

		LOAD_FUNC1(glTextureViewOES);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_texture_view"))
		{
			LOAD_FUNC2(glTextureViewOES, glTextureViewEXT);

			_GLES_OES_texture_view = 1;
			promote_high("GLES_OES_texture_view");
		}
	}
}

void init_GLES_OES_vertex_array_object()
{
	glloader_GLES_OES_vertex_array_object = _glloader_GLES_OES_vertex_array_object;

	{
		glBindVertexArrayOES = NULL;
		glDeleteVertexArraysOES = NULL;
		glGenVertexArraysOES = NULL;
		glIsVertexArrayOES = NULL;
	}

	_GLES_OES_vertex_array_object = 0;
	if (glloader_is_supported("GLES_OES_vertex_array_object"))
	{
		_GLES_OES_vertex_array_object = 1;

		LOAD_FUNC1(glBindVertexArrayOES);
		LOAD_FUNC1(glDeleteVertexArraysOES);
		LOAD_FUNC1(glGenVertexArraysOES);
		LOAD_FUNC1(glIsVertexArrayOES);
	}
}

void init_GLES_OES_vertex_half_float()
{
	glloader_GLES_OES_vertex_half_float = _glloader_GLES_OES_vertex_half_float;

	_GLES_OES_vertex_half_float = 0;
	if (glloader_is_supported("GLES_OES_vertex_half_float"))
	{
		_GLES_OES_vertex_half_float = 1;
	}
}

void init_GLES_OES_vertex_type_10_10_10_2()
{
	glloader_GLES_OES_vertex_type_10_10_10_2 = _glloader_GLES_OES_vertex_type_10_10_10_2;

	_GLES_OES_vertex_type_10_10_10_2 = 0;
	if (glloader_is_supported("GLES_OES_vertex_type_10_10_10_2"))
	{
		_GLES_OES_vertex_type_10_10_10_2 = 1;
	}
}

void init_GLES_OVR_multiview()
{
	glloader_GLES_OVR_multiview = _glloader_GLES_OVR_multiview;

	{
		glFramebufferTextureMultiviewOVR = NULL;
	}

	_GLES_OVR_multiview = 0;
	if (glloader_is_supported("GLES_OVR_multiview"))
	{
		_GLES_OVR_multiview = 1;

		LOAD_FUNC1(glFramebufferTextureMultiviewOVR);
	}
}

void init_GLES_OVR_multiview2()
{
	glloader_GLES_OVR_multiview2 = _glloader_GLES_OVR_multiview2;

	_GLES_OVR_multiview2 = 0;
	if (glloader_is_supported("GLES_OVR_multiview2"))
	{
		_GLES_OVR_multiview2 = 1;
	}
}

void init_GLES_QCOM_binning_control()
{
	glloader_GLES_QCOM_binning_control = _glloader_GLES_QCOM_binning_control;

	_GLES_QCOM_binning_control = 0;
	if (glloader_is_supported("GLES_QCOM_binning_control"))
	{
		_GLES_QCOM_binning_control = 1;
	}
}

void init_GLES_QCOM_driver_control()
{
	glloader_GLES_QCOM_driver_control = _glloader_GLES_QCOM_driver_control;

	{
		glGetDriverControlsQCOM = NULL;
		glGetDriverControlStringQCOM = NULL;
		glEnableDriverControlQCOM = NULL;
		glDisableDriverControlQCOM = NULL;
	}

	_GLES_QCOM_driver_control = 0;
	if (glloader_is_supported("GLES_QCOM_driver_control"))
	{
		_GLES_QCOM_driver_control = 1;

		LOAD_FUNC1(glGetDriverControlsQCOM);
		LOAD_FUNC1(glGetDriverControlStringQCOM);
		LOAD_FUNC1(glEnableDriverControlQCOM);
		LOAD_FUNC1(glDisableDriverControlQCOM);
	}
}

void init_GLES_QCOM_extended_get()
{
	glloader_GLES_QCOM_extended_get = _glloader_GLES_QCOM_extended_get;

	{
		glExtGetTexturesQCOM = NULL;
		glExtGetBuffersQCOM = NULL;
		glExtGetRenderbuffersQCOM = NULL;
		glExtGetFramebuffersQCOM = NULL;
		glExtGetTexLevelParameterivQCOM = NULL;
		glExtTexObjectStateOverrideiQCOM = NULL;
		glExtGetTexSubImageQCOM = NULL;
		glExtGetBufferPointervQCOM = NULL;
	}

	_GLES_QCOM_extended_get = 0;
	if (glloader_is_supported("GLES_QCOM_extended_get"))
	{
		_GLES_QCOM_extended_get = 1;

		LOAD_FUNC1(glExtGetTexturesQCOM);
		LOAD_FUNC1(glExtGetBuffersQCOM);
		LOAD_FUNC1(glExtGetRenderbuffersQCOM);
		LOAD_FUNC1(glExtGetFramebuffersQCOM);
		LOAD_FUNC1(glExtGetTexLevelParameterivQCOM);
		LOAD_FUNC1(glExtTexObjectStateOverrideiQCOM);
		LOAD_FUNC1(glExtGetTexSubImageQCOM);
		LOAD_FUNC1(glExtGetBufferPointervQCOM);
	}
}

void init_GLES_QCOM_extended_get2()
{
	glloader_GLES_QCOM_extended_get2 = _glloader_GLES_QCOM_extended_get2;

	{
		glExtGetShadersQCOM = NULL;
		glExtGetProgramsQCOM = NULL;
		glExtIsProgramBinaryQCOM = NULL;
		glExtGetProgramBinarySourceQCOM = NULL;
	}

	_GLES_QCOM_extended_get2 = 0;
	if (glloader_is_supported("GLES_QCOM_extended_get2"))
	{
		_GLES_QCOM_extended_get2 = 1;

		LOAD_FUNC1(glExtGetShadersQCOM);
		LOAD_FUNC1(glExtGetProgramsQCOM);
		LOAD_FUNC1(glExtIsProgramBinaryQCOM);
		LOAD_FUNC1(glExtGetProgramBinarySourceQCOM);
	}
}

void init_GLES_QCOM_performance_monitor_global_mode()
{
	glloader_GLES_QCOM_performance_monitor_global_mode = _glloader_GLES_QCOM_performance_monitor_global_mode;

	_GLES_QCOM_performance_monitor_global_mode = 0;
	if (glloader_is_supported("GLES_QCOM_performance_monitor_global_mode"))
	{
		_GLES_QCOM_performance_monitor_global_mode = 1;
	}
}

void init_GLES_QCOM_tiled_rendering()
{
	glloader_GLES_QCOM_tiled_rendering = _glloader_GLES_QCOM_tiled_rendering;

	{
		glStartTilingQCOM = NULL;
		glEndTilingQCOM = NULL;
	}

	_GLES_QCOM_tiled_rendering = 0;
	if (glloader_is_supported("GLES_QCOM_tiled_rendering"))
	{
		_GLES_QCOM_tiled_rendering = 1;

		LOAD_FUNC1(glStartTilingQCOM);
		LOAD_FUNC1(glEndTilingQCOM);
	}
}

void init_GLES_QCOM_writeonly_rendering()
{
	glloader_GLES_QCOM_writeonly_rendering = _glloader_GLES_QCOM_writeonly_rendering;

	_GLES_QCOM_writeonly_rendering = 0;
	if (glloader_is_supported("GLES_QCOM_writeonly_rendering"))
	{
		_GLES_QCOM_writeonly_rendering = 1;
	}
}

void init_GLES_VERSION_1_0()
{
	glloader_GLES_VERSION_1_0 = _glloader_GLES_VERSION_1_0;

	_GLES_VERSION_1_0 = 0;
	if (glloader_is_supported("GLES_VERSION_1_0"))
	{
		_GLES_VERSION_1_0 = 1;

		LOAD_FUNC1(glActiveTexture);
		LOAD_FUNC1(glAlphaFunc);
		LOAD_FUNC1(glAlphaFuncx);
		LOAD_FUNC1(glBindTexture);
		LOAD_FUNC1(glBlendFunc);
		LOAD_FUNC1(glClear);
		LOAD_FUNC1(glClearColor);
		LOAD_FUNC1(glClearColorx);
		LOAD_FUNC1(glClearDepthf);
		LOAD_FUNC1(glClearDepthx);
		LOAD_FUNC1(glClearStencil);
		LOAD_FUNC1(glClientActiveTexture);
		LOAD_FUNC1(glColor4f);
		LOAD_FUNC1(glColor4x);
		LOAD_FUNC1(glColorMask);
		LOAD_FUNC1(glColorPointer);
		LOAD_FUNC1(glCompressedTexImage2D);
		LOAD_FUNC1(glCompressedTexSubImage2D);
		LOAD_FUNC1(glCopyTexImage2D);
		LOAD_FUNC1(glCopyTexSubImage2D);
		LOAD_FUNC1(glCullFace);
		LOAD_FUNC1(glDeleteTextures);
		LOAD_FUNC1(glDepthFunc);
		LOAD_FUNC1(glDepthMask);
		LOAD_FUNC1(glDepthRangef);
		LOAD_FUNC1(glDepthRangex);
		LOAD_FUNC1(glDisable);
		LOAD_FUNC1(glDisableClientState);
		LOAD_FUNC1(glDrawArrays);
		LOAD_FUNC1(glDrawElements);
		LOAD_FUNC1(glEnable);
		LOAD_FUNC1(glEnableClientState);
		LOAD_FUNC1(glFinish);
		LOAD_FUNC1(glFlush);
		LOAD_FUNC1(glFogf);
		LOAD_FUNC1(glFogfv);
		LOAD_FUNC1(glFogx);
		LOAD_FUNC1(glFogxv);
		LOAD_FUNC1(glFrontFace);
		LOAD_FUNC1(glFrustumf);
		LOAD_FUNC1(glFrustumx);
		LOAD_FUNC1(glGenTextures);
		LOAD_FUNC1(glGetError);
		LOAD_FUNC1(glGetIntegerv);
		LOAD_FUNC1(glGetString);
		LOAD_FUNC1(glHint);
		LOAD_FUNC1(glLightModelf);
		LOAD_FUNC1(glLightModelfv);
		LOAD_FUNC1(glLightModelx);
		LOAD_FUNC1(glLightModelxv);
		LOAD_FUNC1(glLightf);
		LOAD_FUNC1(glLightfv);
		LOAD_FUNC1(glLightx);
		LOAD_FUNC1(glLightxv);
		LOAD_FUNC1(glLineWidth);
		LOAD_FUNC1(glLineWidthx);
		LOAD_FUNC1(glLoadIdentity);
		LOAD_FUNC1(glLoadMatrixf);
		LOAD_FUNC1(glLoadMatrixx);
		LOAD_FUNC1(glLogicOp);
		LOAD_FUNC1(glMaterialf);
		LOAD_FUNC1(glMaterialfv);
		LOAD_FUNC1(glMaterialx);
		LOAD_FUNC1(glMaterialxv);
		LOAD_FUNC1(glMatrixMode);
		LOAD_FUNC1(glMultMatrixf);
		LOAD_FUNC1(glMultMatrixx);
		LOAD_FUNC1(glMultiTexCoord4f);
		LOAD_FUNC1(glMultiTexCoord4x);
		LOAD_FUNC1(glNormal3f);
		LOAD_FUNC1(glNormal3x);
		LOAD_FUNC1(glNormalPointer);
		LOAD_FUNC1(glOrthof);
		LOAD_FUNC1(glOrthox);
		LOAD_FUNC1(glPixelStorei);
		LOAD_FUNC1(glPointSize);
		LOAD_FUNC1(glPointSizex);
		LOAD_FUNC1(glPolygonOffset);
		LOAD_FUNC1(glPolygonOffsetx);
		LOAD_FUNC1(glPopMatrix);
		LOAD_FUNC1(glPushMatrix);
		LOAD_FUNC1(glReadPixels);
		LOAD_FUNC1(glRotatef);
		LOAD_FUNC1(glRotatex);
		LOAD_FUNC1(glSampleCoverage);
		LOAD_FUNC1(glSampleCoveragex);
		LOAD_FUNC1(glScalef);
		LOAD_FUNC1(glScalex);
		LOAD_FUNC1(glScissor);
		LOAD_FUNC1(glShadeModel);
		LOAD_FUNC1(glStencilFunc);
		LOAD_FUNC1(glStencilMask);
		LOAD_FUNC1(glStencilOp);
		LOAD_FUNC1(glTexCoordPointer);
		LOAD_FUNC1(glTexEnvf);
		LOAD_FUNC1(glTexEnvfv);
		LOAD_FUNC1(glTexEnvx);
		LOAD_FUNC1(glTexEnvxv);
		LOAD_FUNC1(glTexImage2D);
		LOAD_FUNC1(glTexParameterf);
		LOAD_FUNC1(glTexParameterx);
		LOAD_FUNC1(glTexSubImage2D);
		LOAD_FUNC1(glTranslatef);
		LOAD_FUNC1(glVertexPointer);
		LOAD_FUNC1(glTranslatex);
		LOAD_FUNC1(glViewport);
	}
}

void init_GLES_VERSION_1_1()
{
	glloader_GLES_VERSION_1_1 = _glloader_GLES_VERSION_1_1;

	_GLES_VERSION_1_1 = 0;
	if (glloader_is_supported("GLES_VERSION_1_1"))
	{
		_GLES_VERSION_1_1 = 1;

		LOAD_FUNC1(glClipPlanef);
		LOAD_FUNC1(glGetClipPlanef);
		LOAD_FUNC1(glGetFloatv);
		LOAD_FUNC1(glGetLightfv);
		LOAD_FUNC1(glGetMaterialfv);
		LOAD_FUNC1(glGetTexEnvfv);
		LOAD_FUNC1(glGetTexParameterfv);
		LOAD_FUNC1(glPointParameterf);
		LOAD_FUNC1(glPointParameterfv);
		LOAD_FUNC1(glTexParameterfv);
		LOAD_FUNC1(glBindBuffer);
		LOAD_FUNC1(glBufferData);
		LOAD_FUNC1(glBufferSubData);
		LOAD_FUNC1(glClipPlanex);
		LOAD_FUNC1(glColor4ub);
		LOAD_FUNC1(glDeleteBuffers);
		LOAD_FUNC1(glGetBooleanv);
		LOAD_FUNC1(glGetBufferParameteriv);
		LOAD_FUNC1(glGetClipPlanex);
		LOAD_FUNC1(glGenBuffers);
		LOAD_FUNC1(glGetFixedv);
		LOAD_FUNC1(glGetLightxv);
		LOAD_FUNC1(glGetMaterialxv);
		LOAD_FUNC1(glGetPointerv);
		LOAD_FUNC1(glGetString);
		LOAD_FUNC1(glGetTexEnviv);
		LOAD_FUNC1(glGetTexEnvxv);
		LOAD_FUNC1(glGetTexParameteriv);
		LOAD_FUNC1(glGetTexParameterxv);
		LOAD_FUNC1(glIsBuffer);
		LOAD_FUNC1(glIsEnabled);
		LOAD_FUNC1(glIsTexture);
		LOAD_FUNC1(glTexEnvi);
		LOAD_FUNC1(glTexEnviv);
		LOAD_FUNC1(glTexParameteri);
		LOAD_FUNC1(glTexParameteriv);
		LOAD_FUNC1(glTexParameterxv);
	}
}

void init_GLES_VERSION_2_0()
{
	glloader_GLES_VERSION_2_0 = _glloader_GLES_VERSION_2_0;

	_GLES_VERSION_2_0 = 0;
	if (glloader_is_supported("GLES_VERSION_2_0"))
	{
		_GLES_VERSION_2_0 = 1;

		LOAD_FUNC1(glAttachShader);
		LOAD_FUNC1(glBindAttribLocation);
		LOAD_FUNC1(glBindFramebuffer);
		LOAD_FUNC1(glBindRenderbuffer);
		LOAD_FUNC1(glBlendColor);
		LOAD_FUNC1(glBlendEquation);
		LOAD_FUNC1(glBlendEquationSeparate);
		LOAD_FUNC1(glBlendFuncSeparate);
		LOAD_FUNC1(glCheckFramebufferStatus);
		LOAD_FUNC1(glCompileShader);
		LOAD_FUNC1(glCreateProgram);
		LOAD_FUNC1(glCreateShader);
		LOAD_FUNC1(glDeleteFramebuffers);
		LOAD_FUNC1(glDeleteProgram);
		LOAD_FUNC1(glDeleteRenderbuffers);
		LOAD_FUNC1(glDeleteShader);
		LOAD_FUNC1(glDetachShader);
		LOAD_FUNC1(glDisableVertexAttribArray);
		LOAD_FUNC1(glEnableVertexAttribArray);
		LOAD_FUNC1(glFramebufferRenderbuffer);
		LOAD_FUNC1(glFramebufferTexture2D);
		LOAD_FUNC1(glGenerateMipmap);
		LOAD_FUNC1(glGenFramebuffers);
		LOAD_FUNC1(glGenRenderbuffers);
		LOAD_FUNC1(glGetActiveAttrib);
		LOAD_FUNC1(glGetActiveUniform);
		LOAD_FUNC1(glGetAttachedShaders);
		LOAD_FUNC1(glGetAttribLocation);
		LOAD_FUNC1(glGetFramebufferAttachmentParameteriv);
		LOAD_FUNC1(glGetProgramiv);
		LOAD_FUNC1(glGetProgramInfoLog);
		LOAD_FUNC1(glGetRenderbufferParameteriv);
		LOAD_FUNC1(glGetShaderiv);
		LOAD_FUNC1(glGetShaderInfoLog);
		LOAD_FUNC1(glGetShaderPrecisionFormat);
		LOAD_FUNC1(glGetShaderSource);
		LOAD_FUNC1(glGetUniformfv);
		LOAD_FUNC1(glGetUniformiv);
		LOAD_FUNC1(glGetUniformLocation);
		LOAD_FUNC1(glGetVertexAttribfv);
		LOAD_FUNC1(glGetVertexAttribiv);
		LOAD_FUNC1(glGetVertexAttribPointerv);
		LOAD_FUNC1(glIsFramebuffer);
		LOAD_FUNC1(glIsProgram);
		LOAD_FUNC1(glIsRenderbuffer);
		LOAD_FUNC1(glIsShader);
		LOAD_FUNC1(glLinkProgram);
		LOAD_FUNC1(glReleaseShaderCompiler);
		LOAD_FUNC1(glRenderbufferStorage);
		LOAD_FUNC1(glShaderBinary);
		LOAD_FUNC1(glShaderSource);
		LOAD_FUNC1(glStencilFuncSeparate);
		LOAD_FUNC1(glStencilMaskSeparate);
		LOAD_FUNC1(glStencilOpSeparate);
		LOAD_FUNC1(glUniform1f);
		LOAD_FUNC1(glUniform2f);
		LOAD_FUNC1(glUniform3f);
		LOAD_FUNC1(glUniform4f);
		LOAD_FUNC1(glUniform1i);
		LOAD_FUNC1(glUniform2i);
		LOAD_FUNC1(glUniform3i);
		LOAD_FUNC1(glUniform4i);
		LOAD_FUNC1(glUniform1fv);
		LOAD_FUNC1(glUniform2fv);
		LOAD_FUNC1(glUniform3fv);
		LOAD_FUNC1(glUniform4fv);
		LOAD_FUNC1(glUniform1iv);
		LOAD_FUNC1(glUniform2iv);
		LOAD_FUNC1(glUniform3iv);
		LOAD_FUNC1(glUniform4iv);
		LOAD_FUNC1(glUniformMatrix2fv);
		LOAD_FUNC1(glUniformMatrix3fv);
		LOAD_FUNC1(glUniformMatrix4fv);
		LOAD_FUNC1(glUseProgram);
		LOAD_FUNC1(glValidateProgram);
		LOAD_FUNC1(glVertexAttrib1f);
		LOAD_FUNC1(glVertexAttrib1fv);
		LOAD_FUNC1(glVertexAttrib2f);
		LOAD_FUNC1(glVertexAttrib2fv);
		LOAD_FUNC1(glVertexAttrib3f);
		LOAD_FUNC1(glVertexAttrib3fv);
		LOAD_FUNC1(glVertexAttrib4f);
		LOAD_FUNC1(glVertexAttrib4fv);
		LOAD_FUNC1(glVertexAttribPointer);
	}
}

void init_GLES_VERSION_3_0()
{
	glloader_GLES_VERSION_3_0 = _glloader_GLES_VERSION_3_0;

	_GLES_VERSION_3_0 = 0;
	if (glloader_is_supported("GLES_VERSION_3_0"))
	{
		_GLES_VERSION_3_0 = 1;

		LOAD_FUNC1(glReadBuffer);
		LOAD_FUNC1(glDrawRangeElements);
		LOAD_FUNC1(glTexImage3D);
		LOAD_FUNC1(glTexSubImage3D);
		LOAD_FUNC1(glCopyTexSubImage3D);
		LOAD_FUNC1(glCompressedTexImage3D);
		LOAD_FUNC1(glCompressedTexSubImage3D);
		LOAD_FUNC1(glGenQueries);
		LOAD_FUNC1(glDeleteQueries);
		LOAD_FUNC1(glIsQuery);
		LOAD_FUNC1(glBeginQuery);
		LOAD_FUNC1(glEndQuery);
		LOAD_FUNC1(glGetQueryiv);
		LOAD_FUNC1(glGetQueryObjectuiv);
		LOAD_FUNC1(glUnmapBuffer);
		LOAD_FUNC1(glGetBufferPointerv);
		LOAD_FUNC1(glDrawBuffers);
		LOAD_FUNC1(glUniformMatrix2x3fv);
		LOAD_FUNC1(glUniformMatrix3x2fv);
		LOAD_FUNC1(glUniformMatrix2x4fv);
		LOAD_FUNC1(glUniformMatrix4x2fv);
		LOAD_FUNC1(glUniformMatrix3x4fv);
		LOAD_FUNC1(glUniformMatrix4x3fv);
		LOAD_FUNC1(glBlitFramebuffer);
		LOAD_FUNC1(glRenderbufferStorageMultisample);
		LOAD_FUNC1(glFramebufferTextureLayer);
		LOAD_FUNC1(glMapBufferRange);
		LOAD_FUNC1(glFlushMappedBufferRange);
		LOAD_FUNC1(glBindVertexArray);
		LOAD_FUNC1(glDeleteVertexArrays);
		LOAD_FUNC1(glGenVertexArrays);
		LOAD_FUNC1(glIsVertexArray);
		LOAD_FUNC1(glGetIntegeri_v);
		LOAD_FUNC1(glBeginTransformFeedback);
		LOAD_FUNC1(glEndTransformFeedback);
		LOAD_FUNC1(glBindBufferRange);
		LOAD_FUNC1(glBindBufferBase);
		LOAD_FUNC1(glTransformFeedbackVaryings);
		LOAD_FUNC1(glGetTransformFeedbackVarying);
		LOAD_FUNC1(glVertexAttribIPointer);
		LOAD_FUNC1(glGetVertexAttribIiv);
		LOAD_FUNC1(glGetVertexAttribIuiv);
		LOAD_FUNC1(glVertexAttribI4i);
		LOAD_FUNC1(glVertexAttribI4ui);
		LOAD_FUNC1(glVertexAttribI4iv);
		LOAD_FUNC1(glVertexAttribI4uiv);
		LOAD_FUNC1(glGetUniformuiv);
		LOAD_FUNC1(glGetFragDataLocation);
		LOAD_FUNC1(glUniform1ui);
		LOAD_FUNC1(glUniform2ui);
		LOAD_FUNC1(glUniform3ui);
		LOAD_FUNC1(glUniform4ui);
		LOAD_FUNC1(glUniform1uiv);
		LOAD_FUNC1(glUniform2uiv);
		LOAD_FUNC1(glUniform3uiv);
		LOAD_FUNC1(glUniform4uiv);
		LOAD_FUNC1(glClearBufferiv);
		LOAD_FUNC1(glClearBufferuiv);
		LOAD_FUNC1(glClearBufferfv);
		LOAD_FUNC1(glClearBufferfi);
		LOAD_FUNC1(glGetStringi);
		LOAD_FUNC1(glCopyBufferSubData);
		LOAD_FUNC1(glGetUniformIndices);
		LOAD_FUNC1(glGetActiveUniformsiv);
		LOAD_FUNC1(glGetUniformBlockIndex);
		LOAD_FUNC1(glGetActiveUniformBlockiv);
		LOAD_FUNC1(glGetActiveUniformBlockName);
		LOAD_FUNC1(glUniformBlockBinding);
		LOAD_FUNC1(glDrawArraysInstanced);
		LOAD_FUNC1(glDrawElementsInstanced);
		LOAD_FUNC1(glFenceSync);
		LOAD_FUNC1(glIsSync);
		LOAD_FUNC1(glDeleteSync);
		LOAD_FUNC1(glClientWaitSync);
		LOAD_FUNC1(glWaitSync);
		LOAD_FUNC1(glGetInteger64v);
		LOAD_FUNC1(glGetSynciv);
		LOAD_FUNC1(glGetInteger64i_v);
		LOAD_FUNC1(glGetBufferParameteri64v);
		LOAD_FUNC1(glGenSamplers);
		LOAD_FUNC1(glDeleteSamplers);
		LOAD_FUNC1(glIsSampler);
		LOAD_FUNC1(glBindSampler);
		LOAD_FUNC1(glSamplerParameteri);
		LOAD_FUNC1(glSamplerParameteriv);
		LOAD_FUNC1(glSamplerParameterf);
		LOAD_FUNC1(glSamplerParameterfv);
		LOAD_FUNC1(glGetSamplerParameteriv);
		LOAD_FUNC1(glGetSamplerParameterfv);
		LOAD_FUNC1(glVertexAttribDivisor);
		LOAD_FUNC1(glBindTransformFeedback);
		LOAD_FUNC1(glDeleteTransformFeedbacks);
		LOAD_FUNC1(glGenTransformFeedbacks);
		LOAD_FUNC1(glIsTransformFeedback);
		LOAD_FUNC1(glPauseTransformFeedback);
		LOAD_FUNC1(glResumeTransformFeedback);
		LOAD_FUNC1(glGetProgramBinary);
		LOAD_FUNC1(glProgramBinary);
		LOAD_FUNC1(glProgramParameteri);
		LOAD_FUNC1(glInvalidateFramebuffer);
		LOAD_FUNC1(glInvalidateSubFramebuffer);
		LOAD_FUNC1(glTexStorage2D);
		LOAD_FUNC1(glTexStorage3D);
		LOAD_FUNC1(glGetInternalformativ);
	}
	else
	{
		if (glloader_is_supported("GLES_OES_texture3D"))
		{
			LOAD_FUNC2(glTexImage3D, glTexImage3DOES);
			LOAD_FUNC2(glTexSubImage3D, glTexSubImage3DOES);
			LOAD_FUNC2(glCopyTexSubImage3D, glCopyTexSubImage3DOES);
			LOAD_FUNC2(glCompressedTexImage3D, glCompressedTexImage3DOES);
			LOAD_FUNC2(glCompressedTexSubImage3D, glCompressedTexSubImage3DOES);
		}
		else if (glloader_is_supported("GLES_NV_texture_array"))
		{
			LOAD_FUNC2(glTexImage3D, glTexImage3DNV);
			LOAD_FUNC2(glTexSubImage3D, glTexSubImage3DNV);
			LOAD_FUNC2(glCopyTexSubImage3D, glCopyTexSubImage3DNV);
			LOAD_FUNC2(glCompressedTexImage3D, glCompressedTexImage3DNV);
			LOAD_FUNC2(glCompressedTexSubImage3D, glCompressedTexSubImage3DNV);
		}
		if (glloader_is_supported("GLES_EXT_occlusion_query_boolean"))
		{
			LOAD_FUNC2(glGenQueries, glGenQueriesEXT);
			LOAD_FUNC2(glDeleteQueries, glDeleteQueriesEXT);
			LOAD_FUNC2(glIsQuery, glIsQueryEXT);
			LOAD_FUNC2(glBeginQuery, glBeginQueryEXT);
			LOAD_FUNC2(glEndQuery, glEndQueryEXT);
			LOAD_FUNC2(glGetQueryiv, glGetQueryivEXT);
			LOAD_FUNC2(glGetQueryObjectuiv, glGetQueryObjectuivEXT);
		}
		if (glloader_is_supported("GLES_OES_mapbuffer"))
		{
			LOAD_FUNC2(glUnmapBuffer, glUnmapBufferOES);
			LOAD_FUNC2(glGetBufferPointerv, glGetBufferPointervOES);
		}
		if (glloader_is_supported("GLES_EXT_draw_buffers"))
		{
			LOAD_FUNC2(glDrawBuffers, glDrawBuffersEXT);
		}
		else if (glloader_is_supported("GLES_NV_draw_buffers"))
		{
			LOAD_FUNC2(glDrawBuffers, glDrawBuffersNV);
		}
		if (glloader_is_supported("GLES_NV_non_square_matrices"))
		{
			LOAD_FUNC2(glUniformMatrix2x3fv, glUniformMatrix2x3fvNV);
			LOAD_FUNC2(glUniformMatrix3x2fv, glUniformMatrix3x2fvNV);
			LOAD_FUNC2(glUniformMatrix2x4fv, glUniformMatrix2x4fvNV);
			LOAD_FUNC2(glUniformMatrix4x2fv, glUniformMatrix4x2fvNV);
			LOAD_FUNC2(glUniformMatrix3x4fv, glUniformMatrix3x4fvNV);
			LOAD_FUNC2(glUniformMatrix4x3fv, glUniformMatrix4x3fvNV);
		}
		if (glloader_is_supported("GLES_NV_framebuffer_blit"))
		{
			LOAD_FUNC2(glBlitFramebuffer, glBlitFramebufferNV);
		}
		else if (glloader_is_supported("GLES_ANGLE_framebuffer_blit"))
		{
			LOAD_FUNC2(glBlitFramebuffer, glBlitFramebufferANGLE);
		}
		if (glloader_is_supported("GLES_EXT_multisampled_render_to_texture"))
		{
			LOAD_FUNC2(glRenderbufferStorageMultisample, glRenderbufferStorageMultisampleEXT);
		}
		else if (glloader_is_supported("GLES_IMG_multisampled_render_to_texture"))
		{
			LOAD_FUNC2(glRenderbufferStorageMultisample, glRenderbufferStorageMultisampleIMG);
		}
		else if (glloader_is_supported("GLES_NV_framebuffer_multisample"))
		{
			LOAD_FUNC2(glRenderbufferStorageMultisample, glRenderbufferStorageMultisampleNV);
		}
		else if (glloader_is_supported("GLES_ANGLE_framebuffer_multisample"))
		{
			LOAD_FUNC2(glRenderbufferStorageMultisample, glRenderbufferStorageMultisampleANGLE);
		}
		else if (glloader_is_supported("GLES_APPLE_framebuffer_multisample"))
		{
			LOAD_FUNC2(glRenderbufferStorageMultisample, glRenderbufferStorageMultisampleAPPLE);
		}
		if (glloader_is_supported("GLES_NV_texture_array"))
		{
			LOAD_FUNC2(glFramebufferTextureLayer, glFramebufferTextureLayerNV);
		}
		if (glloader_is_supported("GLES_EXT_map_buffer_range"))
		{
			LOAD_FUNC2(glMapBufferRange, glMapBufferRangeEXT);
			LOAD_FUNC2(glFlushMappedBufferRange, glFlushMappedBufferRangeEXT);
		}
		if (glloader_is_supported("GLES_OES_vertex_array_object"))
		{
			LOAD_FUNC2(glBindVertexArray, glBindVertexArrayOES);
			LOAD_FUNC2(glDeleteVertexArrays, glDeleteVertexArraysOES);
			LOAD_FUNC2(glGenVertexArrays, glGenVertexArraysOES);
			LOAD_FUNC2(glIsVertexArray, glIsVertexArrayOES);
		}
		if (glloader_is_supported("GLES_EXT_instanced_arrays"))
		{
			LOAD_FUNC2(glDrawArraysInstanced, glDrawArraysInstancedEXT);
			LOAD_FUNC2(glDrawElementsInstanced, glDrawElementsInstancedEXT);
		}
		else if (glloader_is_supported("GLES_NV_draw_instanced"))
		{
			LOAD_FUNC2(glDrawArraysInstanced, glDrawArraysInstancedNV);
			LOAD_FUNC2(glDrawElementsInstanced, glDrawElementsInstancedNV);
		}
		else if (glloader_is_supported("GLES_ANGLE_instanced_arrays"))
		{
			LOAD_FUNC2(glDrawArraysInstanced, glDrawArraysInstancedANGLE);
			LOAD_FUNC2(glDrawElementsInstanced, glDrawElementsInstancedANGLE);
		}
		if (glloader_is_supported("GLES_APPLE_sync"))
		{
			LOAD_FUNC2(glFenceSync, glFenceSyncAPPLE);
			LOAD_FUNC2(glIsSync, glIsSyncAPPLE);
			LOAD_FUNC2(glDeleteSync, glDeleteSyncAPPLE);
			LOAD_FUNC2(glClientWaitSync, glClientWaitSyncAPPLE);
			LOAD_FUNC2(glWaitSync, glWaitSyncAPPLE);
			LOAD_FUNC2(glGetInteger64v, glGetInteger64vAPPLE);
			LOAD_FUNC2(glGetSynciv, glGetSyncivAPPLE);
		}
		if (glloader_is_supported("GLES_EXT_instanced_arrays"))
		{
			LOAD_FUNC2(glVertexAttribDivisor, glVertexAttribDivisorEXT);
		}
		else if (glloader_is_supported("GLES_NV_instanced_arrays"))
		{
			LOAD_FUNC2(glVertexAttribDivisor, glVertexAttribDivisorNV);
		}
		else if (glloader_is_supported("GLES_ANGLE_instanced_arrays"))
		{
			LOAD_FUNC2(glVertexAttribDivisor, glVertexAttribDivisorANGLE);
		}
		if (glloader_is_supported("GL_EXT_transform_feedback2"))
		{
			LOAD_FUNC2(glBindTransformFeedback, glBindTransformFeedbackEXT);
			LOAD_FUNC2(glDeleteTransformFeedbacks, glDeleteTransformFeedbacksEXT);
			LOAD_FUNC2(glGenTransformFeedbacks, glGenTransformFeedbacksEXT);
			LOAD_FUNC2(glIsTransformFeedback, glIsTransformFeedbackEXT);
			LOAD_FUNC2(glPauseTransformFeedback, glPauseTransformFeedbackEXT);
			LOAD_FUNC2(glResumeTransformFeedback, glResumeTransformFeedbackEXT);
		}
		else if (glloader_is_supported("GL_NV_transform_feedback2"))
		{
			LOAD_FUNC2(glBindTransformFeedback, glBindTransformFeedbackNV);
			LOAD_FUNC2(glDeleteTransformFeedbacks, glDeleteTransformFeedbacksNV);
			LOAD_FUNC2(glGenTransformFeedbacks, glGenTransformFeedbacksNV);
			LOAD_FUNC2(glIsTransformFeedback, glIsTransformFeedbackNV);
			LOAD_FUNC2(glPauseTransformFeedback, glPauseTransformFeedbackNV);
			LOAD_FUNC2(glResumeTransformFeedback, glResumeTransformFeedbackNV);
		}
		if (glloader_is_supported("GLES_OES_get_program_binary"))
		{
			LOAD_FUNC2(glGetProgramBinary, glGetProgramBinaryOES);
			LOAD_FUNC2(glProgramBinary, glProgramBinaryOES);
		}
		if (glloader_is_supported("GLES_EXT_separate_shader_objects"))
		{
			LOAD_FUNC2(glProgramParameteri, glProgramParameteriEXT);
		}
		if (glloader_is_supported("GLES_EXT_texture_storage"))
		{
			LOAD_FUNC2(glTexStorage2D, glTexStorage2DEXT);
			LOAD_FUNC2(glTexStorage3D, glTexStorage3DEXT);
		}
	}
}

void init_GLES_VERSION_3_1()
{
	glloader_GLES_VERSION_3_1 = _glloader_GLES_VERSION_3_1;

	_GLES_VERSION_3_1 = 0;
	if (glloader_is_supported("GLES_VERSION_3_1"))
	{
		_GLES_VERSION_3_1 = 1;

		LOAD_FUNC1(glDispatchCompute);
		LOAD_FUNC1(glDispatchComputeIndirect);
		LOAD_FUNC1(glDrawArraysIndirect);
		LOAD_FUNC1(glDrawElementsIndirect);
		LOAD_FUNC1(glFramebufferParameteri);
		LOAD_FUNC1(glGetFramebufferParameteriv);
		LOAD_FUNC1(glGetProgramInterfaceiv);
		LOAD_FUNC1(glGetProgramResourceIndex);
		LOAD_FUNC1(glGetProgramResourceName);
		LOAD_FUNC1(glGetProgramResourceiv);
		LOAD_FUNC1(glGetProgramResourceLocation);
		LOAD_FUNC1(glUseProgramStages);
		LOAD_FUNC1(glActiveShaderProgram);
		LOAD_FUNC1(glCreateShaderProgramv);
		LOAD_FUNC1(glBindProgramPipeline);
		LOAD_FUNC1(glDeleteProgramPipelines);
		LOAD_FUNC1(glGenProgramPipelines);
		LOAD_FUNC1(glIsProgramPipeline);
		LOAD_FUNC1(glGetProgramPipelineiv);
		LOAD_FUNC1(glProgramUniform1i);
		LOAD_FUNC1(glProgramUniform2i);
		LOAD_FUNC1(glProgramUniform3i);
		LOAD_FUNC1(glProgramUniform4i);
		LOAD_FUNC1(glProgramUniform1ui);
		LOAD_FUNC1(glProgramUniform2ui);
		LOAD_FUNC1(glProgramUniform3ui);
		LOAD_FUNC1(glProgramUniform4ui);
		LOAD_FUNC1(glProgramUniform1f);
		LOAD_FUNC1(glProgramUniform2f);
		LOAD_FUNC1(glProgramUniform3f);
		LOAD_FUNC1(glProgramUniform4f);
		LOAD_FUNC1(glProgramUniform1iv);
		LOAD_FUNC1(glProgramUniform2iv);
		LOAD_FUNC1(glProgramUniform3iv);
		LOAD_FUNC1(glProgramUniform4iv);
		LOAD_FUNC1(glProgramUniform1uiv);
		LOAD_FUNC1(glProgramUniform2uiv);
		LOAD_FUNC1(glProgramUniform3uiv);
		LOAD_FUNC1(glProgramUniform4uiv);
		LOAD_FUNC1(glProgramUniform1fv);
		LOAD_FUNC1(glProgramUniform2fv);
		LOAD_FUNC1(glProgramUniform3fv);
		LOAD_FUNC1(glProgramUniform4fv);
		LOAD_FUNC1(glProgramUniformMatrix2fv);
		LOAD_FUNC1(glProgramUniformMatrix3fv);
		LOAD_FUNC1(glProgramUniformMatrix4fv);
		LOAD_FUNC1(glProgramUniformMatrix2x3fv);
		LOAD_FUNC1(glProgramUniformMatrix3x2fv);
		LOAD_FUNC1(glProgramUniformMatrix2x4fv);
		LOAD_FUNC1(glProgramUniformMatrix4x2fv);
		LOAD_FUNC1(glProgramUniformMatrix3x4fv);
		LOAD_FUNC1(glProgramUniformMatrix4x3fv);
		LOAD_FUNC1(glValidateProgramPipeline);
		LOAD_FUNC1(glGetProgramPipelineInfoLog);
		LOAD_FUNC1(glBindImageTexture);
		LOAD_FUNC1(glGetBooleani_v);
		LOAD_FUNC1(glMemoryBarrier);
		LOAD_FUNC1(glMemoryBarrierByRegion);
		LOAD_FUNC1(glTexStorage2DMultisample);
		LOAD_FUNC1(glGetMultisamplefv);
		LOAD_FUNC1(glSampleMaski);
		LOAD_FUNC1(glGetTexLevelParameteriv);
		LOAD_FUNC1(glGetTexLevelParameterfv);
		LOAD_FUNC1(glBindVertexBuffer);
		LOAD_FUNC1(glVertexAttribFormat);
		LOAD_FUNC1(glVertexAttribIFormat);
		LOAD_FUNC1(glVertexAttribBinding);
		LOAD_FUNC1(glVertexBindingDivisor);
	}
	else
	{
		if (glloader_is_supported("GLES_EXT_separate_shader_objects"))
		{
			LOAD_FUNC2(glBindProgramPipeline, glBindProgramPipelineEXT);
			LOAD_FUNC2(glDeleteProgramPipelines, glDeleteProgramPipelinesEXT);
			LOAD_FUNC2(glGenProgramPipelines, glGenProgramPipelinesEXT);
			LOAD_FUNC2(glIsProgramPipeline, glIsProgramPipelineEXT);
			LOAD_FUNC2(glGetProgramPipelineiv, glGetProgramPipelineivEXT);
			LOAD_FUNC2(glProgramUniform1i, glProgramUniform1iEXT);
			LOAD_FUNC2(glProgramUniform2i, glProgramUniform2iEXT);
			LOAD_FUNC2(glProgramUniform3i, glProgramUniform3iEXT);
			LOAD_FUNC2(glProgramUniform4i, glProgramUniform4iEXT);
			LOAD_FUNC2(glProgramUniform1ui, glProgramUniform1uiEXT);
			LOAD_FUNC2(glProgramUniform2ui, glProgramUniform2uiEXT);
			LOAD_FUNC2(glProgramUniform3ui, glProgramUniform3uiEXT);
			LOAD_FUNC2(glProgramUniform4ui, glProgramUniform4uiEXT);
			LOAD_FUNC2(glProgramUniform1f, glProgramUniform1fEXT);
			LOAD_FUNC2(glProgramUniform2f, glProgramUniform2fEXT);
			LOAD_FUNC2(glProgramUniform3f, glProgramUniform3fEXT);
			LOAD_FUNC2(glProgramUniform4f, glProgramUniform4fEXT);
			LOAD_FUNC2(glProgramUniform1iv, glProgramUniform1ivEXT);
			LOAD_FUNC2(glProgramUniform2iv, glProgramUniform2ivEXT);
			LOAD_FUNC2(glProgramUniform3iv, glProgramUniform3ivEXT);
			LOAD_FUNC2(glProgramUniform4iv, glProgramUniform4ivEXT);
			LOAD_FUNC2(glProgramUniform1uiv, glProgramUniform1uivEXT);
			LOAD_FUNC2(glProgramUniform2uiv, glProgramUniform2uivEXT);
			LOAD_FUNC2(glProgramUniform3uiv, glProgramUniform3uivEXT);
			LOAD_FUNC2(glProgramUniform4uiv, glProgramUniform4uivEXT);
			LOAD_FUNC2(glProgramUniform1fv, glProgramUniform1fvEXT);
			LOAD_FUNC2(glProgramUniform2fv, glProgramUniform2fvEXT);
			LOAD_FUNC2(glProgramUniform3fv, glProgramUniform3fvEXT);
			LOAD_FUNC2(glProgramUniform4fv, glProgramUniform4fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix2fv, glProgramUniformMatrix2fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix3fv, glProgramUniformMatrix3fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix4fv, glProgramUniformMatrix4fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix2x3fv, glProgramUniformMatrix2x3fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix3x2fv, glProgramUniformMatrix3x2fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix2x4fv, glProgramUniformMatrix2x4fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix4x2fv, glProgramUniformMatrix4x2fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix3x4fv, glProgramUniformMatrix3x4fvEXT);
			LOAD_FUNC2(glProgramUniformMatrix4x3fv, glProgramUniformMatrix4x3fvEXT);
			LOAD_FUNC2(glValidateProgramPipeline, glValidateProgramPipelineEXT);
			LOAD_FUNC2(glGetProgramPipelineInfoLog, glGetProgramPipelineInfoLogEXT);
		}
	}
}

void init_GLES_VIV_shader_binary()
{
	glloader_GLES_VIV_shader_binary = _glloader_GLES_VIV_shader_binary;

	_GLES_VIV_shader_binary = 0;
	if (glloader_is_supported("GLES_VIV_shader_binary"))
	{
		_GLES_VIV_shader_binary = 1;
	}
}


void gles_init()
{
	init_GLES_NV_pack_subimage();
	init_GLES_NV_platform_binary();
	init_GLES_AMD_compressed_3DC_texture();
	init_GLES_AMD_compressed_ATC_texture();
	init_GLES_AMD_performance_monitor();
	init_GLES_AMD_program_binary_Z400();
	init_GLES_ANDROID_extension_pack_es31a();
	init_GLES_ANGLE_depth_texture();
	init_GLES_ANGLE_framebuffer_blit();
	init_GLES_ANGLE_framebuffer_multisample();
	init_GLES_ANGLE_instanced_arrays();
	init_GLES_ANGLE_pack_reverse_row_order();
	init_GLES_ANGLE_program_binary();
	init_GLES_ANGLE_robust_resource_initialization();
	init_GLES_ANGLE_texture_compression_dxt1();
	init_GLES_ANGLE_texture_compression_dxt3();
	init_GLES_ANGLE_texture_compression_dxt5();
	init_GLES_ANGLE_texture_usage();
	init_GL_EXT_timer_query();
	init_GLES_ANGLE_translated_shader_source();
	init_GLES_APPLE_clip_distance();
	init_GLES_APPLE_color_buffer_packed_float();
	init_GLES_APPLE_copy_texture_levels();
	init_GLES_APPLE_framebuffer_multisample();
	init_GLES_APPLE_rgb_422();
	init_GLES_APPLE_sync();
	init_GLES_APPLE_texture_2D_limited_npot();
	init_GLES_APPLE_texture_format_BGRA8888();
	init_GLES_APPLE_texture_max_level();
	init_GLES_APPLE_texture_packed_float();
	init_GLES_ARM_mali_program_binary();
	init_GLES_ARM_mali_shader_binary();
	init_GLES_ARM_rgba8();
	init_GLES_ARM_shader_framebuffer_fetch();
	init_GLES_ARM_shader_framebuffer_fetch_depth_stencil();
	init_GLES_DMP_program_binary();
	init_GLES_EXT_base_instance();
	init_GLES_EXT_blend_minmax();
	init_GLES_EXT_buffer_storage();
	init_GLES_EXT_color_buffer_float();
	init_GLES_EXT_color_buffer_half_float();
	init_GLES_EXT_compressed_ETC1_RGB8_sub_texture();
	init_GLES_EXT_copy_image();
	init_GLES_EXT_debug_label();
	init_GLES_EXT_debug_marker();
	init_GLES_EXT_discard_framebuffer();
	init_GLES_EXT_disjoint_timer_query();
	init_GLES_EXT_draw_buffers();
	init_GLES_EXT_draw_buffers_indexed();
	init_GLES_EXT_draw_elements_base_vertex();
	init_GLES_EXT_draw_instanced();
	init_GLES_EXT_float_blend();
	init_GLES_EXT_frag_depth();
	init_GLES_EXT_geometry_shader();
	init_GLES_EXT_gpu_shader5();
	init_GLES_EXT_instanced_arrays();
	init_GLES_EXT_map_buffer_range();
	init_GLES_EXT_multisampled_render_to_texture();
	init_GLES_EXT_multiview_draw_buffers();
	init_GLES_EXT_multi_draw_arrays();
	init_GLES_EXT_multi_draw_indirect();
	init_GLES_EXT_occlusion_query_boolean();
	init_GLES_EXT_post_depth_coverage();
	init_GLES_EXT_primitive_bounding_box();
	init_GLES_EXT_pvrtc_sRGB();
	init_GLES_EXT_raster_multisample();
	init_GLES_EXT_read_format_bgra();
	init_GLES_EXT_render_snorm();
	init_GLES_EXT_robustness();
	init_GLES_EXT_separate_shader_objects();
	init_GLES_EXT_shader_framebuffer_fetch();
	init_GLES_EXT_shader_implicit_conversions();
	init_GLES_EXT_shader_integer_mix();
	init_GLES_EXT_shader_io_blocks();
	init_GLES_EXT_shader_pixel_local_storage();
	init_GLES_EXT_shader_texture_lod();
	init_GLES_EXT_shadow_samplers();
	init_GLES_EXT_sparse_texture();
	init_GLES_EXT_sRGB();
	init_GLES_EXT_sRGB_write_control();
	init_GLES_EXT_tessellation_shader();
	init_GLES_EXT_texture_border_clamp();
	init_GLES_EXT_texture_buffer();
	init_GLES_EXT_texture_compression_dxt1();
	init_GLES_EXT_texture_compression_latc();
	init_GLES_EXT_texture_compression_s3tc();
	init_GLES_EXT_texture_cube_map_array();
	init_GLES_EXT_texture_filter_anisotropic();
	init_GLES_EXT_texture_filter_minmax();
	init_GLES_EXT_texture_format_BGRA8888();
	init_GLES_EXT_texture_lod_bias();
	init_GLES_EXT_texture_norm16();
	init_GLES_EXT_texture_rg();
	init_GLES_EXT_texture_sRGB_decode();
	init_GLES_EXT_texture_sRGB_R8();
	init_GLES_EXT_texture_sRGB_RG8();
	init_GLES_EXT_texture_storage();
	init_GLES_EXT_texture_type_2_10_10_10_REV();
	init_GLES_EXT_texture_view();
	init_GLES_EXT_unpack_subimage();
	init_GLES_EXT_YUV_target();
	init_GLES_FJ_shader_binary_GCCSO();
	init_GLES_IMG_multisampled_render_to_texture();
	init_GLES_IMG_program_binary();
	init_GLES_IMG_read_format();
	init_GLES_shader_binary();
	init_GLES_IMG_texture_compression_pvrtc();
	init_GLES_IMG_texture_compression_pvrtc2();
	init_GLES_IMG_texture_env_enhanced_fixed_function();
	init_GLES_IMG_user_clip_plane();
	init_GLES_INTEL_performance_query();
	init_GLES_KHR_blend_equation_advanced();
	init_GLES_KHR_context_flush_control();
	init_GLES_KHR_debug();
	init_GLES_KHR_no_error();
	init_GLES_KHR_robustness();
	init_GLES_KHR_robust_buffer_access_behavior();
	init_GLES_KHR_texture_compression_astc_ldr();
	init_GLES_NV_3dvision_settings();
	init_GLES_NV_bgr();
	init_GLES_NV_bindless_texture();
	init_GLES_NV_blend_equation_advanced();
	init_GLES_NV_conditional_render();
	init_GLES_NV_conservative_raster();
	init_GLES_NV_copy_buffer();
	init_GLES_NV_coverage_sample();
	init_GLES_NV_depth_nonlinear();
	init_GLES_NV_draw_buffers();
	init_GLES_NV_draw_instanced();
	init_GLES_NV_draw_texture();
	init_GLES_NV_EGL_stream_consumer_external();
	init_GLES_NV_explicit_attrib_location();
	init_GLES_NV_fbo_color_attachments();
	init_GLES_NV_fence();
	init_GLES_NV_fill_rectangle();
	init_GLES_NV_fragment_coverage_to_color();
	init_GLES_NV_fragment_shader_interlock();
	init_GLES_NV_framebuffer_blit();
	init_GLES_NV_framebuffer_mixed_samples();
	init_GLES_NV_framebuffer_multisample();
	init_GLES_NV_generate_mipmap_sRGB();
	init_GLES_NV_geometry_shader_passthrough();
	init_GLES_NV_image_formats();
	init_GLES_NV_instanced_arrays();
	init_GLES_NV_internalformat_sample_query();
	init_GLES_NV_non_square_matrices();
	init_GLES_NV_packed_float();
	init_GLES_NV_path_rendering();
	init_GLES_NV_path_rendering_shared_edge();
	init_GLES_NV_pixel_buffer_object();
	init_GLES_NV_polygon_mode();
	init_GLES_NV_read_buffer();
	init_GLES_NV_read_depth();
	init_GLES_NV_read_depth_stencil();
	init_GLES_NV_read_stencil();
	init_GLES_NV_sample_locations();
	init_GLES_NV_sample_mask_override_coverage();
	init_GLES_NV_shader_noperspective_interpolation();
	init_GLES_NV_shadow_samplers_array();
	init_GLES_NV_shadow_samplers_cube();
	init_GLES_NV_sRGB_formats();
	init_GLES_NV_texture_array();
	init_GLES_NV_texture_border_clamp();
	init_GLES_NV_texture_compression_latc();
	init_GLES_NV_texture_compression_s3tc();
	init_GLES_NV_texture_compression_s3tc_update();
	init_GLES_NV_texture_npot_2D_mipmap();
	init_GLES_NV_viewport_array();
	init_GLES_NV_viewport_array2();
	init_GLES_OES_blend_equation_separate();
	init_GLES_OES_blend_func_separate();
	init_GLES_OES_blend_subtract();
	init_GLES_OES_byte_coordinates();
	init_GLES_OES_compressed_ETC1_RGB8_texture();
	init_GLES_OES_compressed_paletted_texture();
	init_GLES_OES_copy_image();
	init_GLES_OES_depth24();
	init_GLES_OES_depth32();
	init_GLES_OES_depth_texture();
	init_GLES_OES_depth_texture_cube_map();
	init_GLES_OES_draw_buffers_indexed();
	init_GLES_OES_draw_elements_base_vertex();
	init_GLES_OES_draw_texture();
	init_GLES_OES_EGL_image();
	init_GLES_OES_EGL_image_external();
	init_GLES_OES_EGL_image_external_essl3();
	init_GLES_OES_element_index_uint();
	init_GLES_OES_extended_matrix_palette();
	init_GLES_OES_fbo_render_mipmap();
	init_GLES_OES_fixed_point();
	init_GLES_OES_fragment_precision_high();
	init_GLES_OES_framebuffer_object();
	init_GLES_OES_geometry_shader();
	init_GLES_OES_get_program_binary();
	init_GLES_OES_gpu_shader5();
	init_GLES_OES_mapbuffer();
	init_GLES_OES_matrix_get();
	init_GLES_OES_matrix_palette();
	init_GLES_OES_packed_depth_stencil();
	init_GLES_OES_point_size_array();
	init_GLES_OES_point_sprite();
	init_GLES_OES_primitive_bounding_box();
	init_GLES_OES_query_matrix();
	init_GLES_OES_read_format();
	init_GLES_OES_required_internalformat();
	init_GLES_OES_rgb8_rgba8();
	init_GL_OES_sample_shading();
	init_GL_OES_sample_variables();
	init_GLES_OES_shader_binary();
	init_GL_OES_shader_image_atomic();
	init_GLES_OES_shader_io_blocks();
	init_GL_OES_shader_multisample_interpolation();
	init_GLES_OES_shader_source();
	init_GLES_OES_single_precision();
	init_GLES_OES_standard_derivatives();
	init_GLES_OES_stencil1();
	init_GLES_OES_stencil4();
	init_GLES_OES_stencil8();
	init_GLES_OES_stencil_wrap();
	init_GLES_OES_surfaceless_context();
	init_GLES_OES_tessellation_shader();
	init_GLES_OES_texture_3D();
	init_GLES_OES_texture_border_clamp();
	init_GLES_OES_texture_buffer();
	init_GLES_OES_texture_compression_astc();
	init_GLES_OES_texture_cube_map();
	init_GLES_OES_texture_cube_map_array();
	init_GLES_OES_texture_env_crossbar();
	init_GLES_OES_texture_float();
	init_GLES_OES_texture_float_linear();
	init_GLES_OES_texture_half_float();
	init_GLES_OES_texture_half_float_linear();
	init_GLES_OES_texture_mirrored_repeat();
	init_GLES_OES_texture_npot();
	init_GL_OES_texture_stencil8();
	init_GL_OES_texture_storage_multisample_2d_array();
	init_GLES_OES_texture_view();
	init_GLES_OES_vertex_array_object();
	init_GLES_OES_vertex_half_float();
	init_GLES_OES_vertex_type_10_10_10_2();
	init_GLES_OVR_multiview();
	init_GLES_OVR_multiview2();
	init_GLES_QCOM_binning_control();
	init_GLES_QCOM_driver_control();
	init_GLES_QCOM_extended_get();
	init_GLES_QCOM_extended_get2();
	init_GLES_QCOM_performance_monitor_global_mode();
	init_GLES_QCOM_tiled_rendering();
	init_GLES_QCOM_writeonly_rendering();
	init_GLES_VERSION_1_0();
	init_GLES_VERSION_1_1();
	init_GLES_VERSION_2_0();
	init_GLES_VERSION_3_0();
	init_GLES_VERSION_3_1();
	init_GLES_VIV_shader_binary();
}

#ifdef __cplusplus
}
#endif

#endif		/* GLLOADER_GLES */
