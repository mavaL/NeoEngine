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

#ifndef _GLLOADER_GLES_H
#define _GLLOADER_GLES_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef GLES_NV_pack_subimage
#define GLES_NV_pack_subimage 1
#endif

#ifndef GLES_NV_platform_binary
#define GLES_NV_platform_binary 1
#endif

#ifndef GLES_AMD_compressed_3DC_texture
#define GLES_AMD_compressed_3DC_texture 1
#endif

#ifndef GLES_AMD_compressed_ATC_texture
#define GLES_AMD_compressed_ATC_texture 1
#endif

#ifndef GLES_AMD_performance_monitor
#define GLES_AMD_performance_monitor 1
#endif

#ifndef GLES_AMD_program_binary_Z400
#define GLES_AMD_program_binary_Z400 1
#endif

#ifndef GLES_ANDROID_extension_pack_es31a
#define GLES_ANDROID_extension_pack_es31a 1
#endif

#ifndef GLES_ANGLE_depth_texture
#define GLES_ANGLE_depth_texture 1
#endif

#ifndef GLES_ANGLE_framebuffer_blit
#define GLES_ANGLE_framebuffer_blit 1
#endif

#ifndef GLES_ANGLE_framebuffer_multisample
#define GLES_ANGLE_framebuffer_multisample 1
#endif

#ifndef GLES_ANGLE_instanced_arrays
#define GLES_ANGLE_instanced_arrays 1
#endif

#ifndef GLES_ANGLE_pack_reverse_row_order
#define GLES_ANGLE_pack_reverse_row_order 1
#endif

#ifndef GLES_ANGLE_program_binary
#define GLES_ANGLE_program_binary 1
#endif

#ifndef GLES_ANGLE_robust_resource_initialization
#define GLES_ANGLE_robust_resource_initialization 1
#endif

#ifndef GLES_ANGLE_texture_compression_dxt1
#define GLES_ANGLE_texture_compression_dxt1 1
#endif

#ifndef GLES_ANGLE_texture_compression_dxt3
#define GLES_ANGLE_texture_compression_dxt3 1
#endif

#ifndef GLES_ANGLE_texture_compression_dxt5
#define GLES_ANGLE_texture_compression_dxt5 1
#endif

#ifndef GLES_ANGLE_texture_usage
#define GLES_ANGLE_texture_usage 1
#endif

#ifndef GL_EXT_timer_query
#define GL_EXT_timer_query 1
#endif

#ifndef GLES_ANGLE_translated_shader_source
#define GLES_ANGLE_translated_shader_source 1
#endif

#ifndef GLES_APPLE_clip_distance
#define GLES_APPLE_clip_distance 1
#endif

#ifndef GLES_APPLE_color_buffer_packed_float
#define GLES_APPLE_color_buffer_packed_float 1
#endif

#ifndef GLES_APPLE_copy_texture_levels
#define GLES_APPLE_copy_texture_levels 1
#endif

#ifndef GLES_APPLE_framebuffer_multisample
#define GLES_APPLE_framebuffer_multisample 1
#endif

#ifndef GLES_APPLE_rgb_422
#define GLES_APPLE_rgb_422 1
#endif

#ifndef GLES_APPLE_sync
#define GLES_APPLE_sync 1
#endif

#ifndef GLES_APPLE_texture_2D_limited_npot
#define GLES_APPLE_texture_2D_limited_npot 1
#endif

#ifndef GLES_APPLE_texture_format_BGRA8888
#define GLES_APPLE_texture_format_BGRA8888 1
#endif

#ifndef GLES_APPLE_texture_max_level
#define GLES_APPLE_texture_max_level 1
#endif

#ifndef GLES_APPLE_texture_packed_float
#define GLES_APPLE_texture_packed_float 1
#endif

#ifndef GLES_ARM_mali_program_binary
#define GLES_ARM_mali_program_binary 1
#endif

#ifndef GLES_ARM_mali_shader_binary
#define GLES_ARM_mali_shader_binary 1
#endif

#ifndef GLES_ARM_rgba8
#define GLES_ARM_rgba8 1
#endif

#ifndef GLES_ARM_shader_framebuffer_fetch
#define GLES_ARM_shader_framebuffer_fetch 1
#endif

#ifndef GLES_ARM_shader_framebuffer_fetch_depth_stencil
#define GLES_ARM_shader_framebuffer_fetch_depth_stencil 1
#endif

#ifndef GLES_DMP_program_binary
#define GLES_DMP_program_binary 1
#endif

#ifndef GLES_EXT_base_instance
#define GLES_EXT_base_instance 1
#endif

#ifndef GLES_EXT_blend_minmax
#define GLES_EXT_blend_minmax 1
#endif

#ifndef GLES_EXT_buffer_storage
#define GLES_EXT_buffer_storage 1
#endif

#ifndef GLES_EXT_color_buffer_float
#define GLES_EXT_color_buffer_float 1
#endif

#ifndef GLES_EXT_color_buffer_half_float
#define GLES_EXT_color_buffer_half_float 1
#endif

#ifndef GLES_EXT_compressed_ETC1_RGB8_sub_texture
#define GLES_EXT_compressed_ETC1_RGB8_sub_texture 1
#endif

#ifndef GLES_EXT_copy_image
#define GLES_EXT_copy_image 1
#endif

#ifndef GLES_EXT_debug_label
#define GLES_EXT_debug_label 1
#endif

#ifndef GLES_EXT_debug_marker
#define GLES_EXT_debug_marker 1
#endif

#ifndef GLES_EXT_discard_framebuffer
#define GLES_EXT_discard_framebuffer 1
#endif

#ifndef GLES_EXT_disjoint_timer_query
#define GLES_EXT_disjoint_timer_query 1
#endif

#ifndef GLES_EXT_draw_buffers
#define GLES_EXT_draw_buffers 1
#endif

#ifndef GLES_EXT_draw_buffers_indexed
#define GLES_EXT_draw_buffers_indexed 1
#endif

#ifndef GLES_EXT_draw_elements_base_vertex
#define GLES_EXT_draw_elements_base_vertex 1
#endif

#ifndef GLES_EXT_draw_instanced
#define GLES_EXT_draw_instanced 1
#endif

#ifndef GLES_EXT_float_blend
#define GLES_EXT_float_blend 1
#endif

#ifndef GLES_EXT_frag_depth
#define GLES_EXT_frag_depth 1
#endif

#ifndef GLES_EXT_geometry_shader
#define GLES_EXT_geometry_shader 1
#endif

#ifndef GLES_EXT_gpu_shader5
#define GLES_EXT_gpu_shader5 1
#endif

#ifndef GLES_EXT_instanced_arrays
#define GLES_EXT_instanced_arrays 1
#endif

#ifndef GLES_EXT_map_buffer_range
#define GLES_EXT_map_buffer_range 1
#endif

#ifndef GLES_EXT_multisampled_render_to_texture
#define GLES_EXT_multisampled_render_to_texture 1
#endif

#ifndef GLES_EXT_multiview_draw_buffers
#define GLES_EXT_multiview_draw_buffers 1
#endif

#ifndef GLES_EXT_multi_draw_arrays
#define GLES_EXT_multi_draw_arrays 1
#endif

#ifndef GLES_EXT_multi_draw_indirect
#define GLES_EXT_multi_draw_indirect 1
#endif

#ifndef GLES_EXT_occlusion_query_boolean
#define GLES_EXT_occlusion_query_boolean 1
#endif

#ifndef GLES_EXT_post_depth_coverage
#define GLES_EXT_post_depth_coverage 1
#endif

#ifndef GLES_EXT_primitive_bounding_box
#define GLES_EXT_primitive_bounding_box 1
#endif

#ifndef GLES_EXT_pvrtc_sRGB
#define GLES_EXT_pvrtc_sRGB 1
#endif

#ifndef GLES_EXT_raster_multisample
#define GLES_EXT_raster_multisample 1
#endif

#ifndef GLES_EXT_read_format_bgra
#define GLES_EXT_read_format_bgra 1
#endif

#ifndef GLES_EXT_render_snorm
#define GLES_EXT_render_snorm 1
#endif

#ifndef GLES_EXT_robustness
#define GLES_EXT_robustness 1
#endif

#ifndef GLES_EXT_separate_shader_objects
#define GLES_EXT_separate_shader_objects 1
#endif

#ifndef GLES_EXT_shader_framebuffer_fetch
#define GLES_EXT_shader_framebuffer_fetch 1
#endif

#ifndef GLES_EXT_shader_implicit_conversions
#define GLES_EXT_shader_implicit_conversions 1
#endif

#ifndef GLES_EXT_shader_integer_mix
#define GLES_EXT_shader_integer_mix 1
#endif

#ifndef GLES_EXT_shader_io_blocks
#define GLES_EXT_shader_io_blocks 1
#endif

#ifndef GLES_EXT_shader_pixel_local_storage
#define GLES_EXT_shader_pixel_local_storage 1
#endif

#ifndef GLES_EXT_shader_texture_lod
#define GLES_EXT_shader_texture_lod 1
#endif

#ifndef GLES_EXT_shadow_samplers
#define GLES_EXT_shadow_samplers 1
#endif

#ifndef GLES_EXT_sparse_texture
#define GLES_EXT_sparse_texture 1
#endif

#ifndef GLES_EXT_sRGB
#define GLES_EXT_sRGB 1
#endif

#ifndef GLES_EXT_sRGB_write_control
#define GLES_EXT_sRGB_write_control 1
#endif

#ifndef GLES_EXT_tessellation_shader
#define GLES_EXT_tessellation_shader 1
#endif

#ifndef GLES_EXT_texture_border_clamp
#define GLES_EXT_texture_border_clamp 1
#endif

#ifndef GLES_EXT_texture_buffer
#define GLES_EXT_texture_buffer 1
#endif

#ifndef GLES_EXT_texture_compression_dxt1
#define GLES_EXT_texture_compression_dxt1 1
#endif

#ifndef GLES_EXT_texture_compression_latc
#define GLES_EXT_texture_compression_latc 1
#endif

#ifndef GLES_EXT_texture_compression_s3tc
#define GLES_EXT_texture_compression_s3tc 1
#endif

#ifndef GLES_EXT_texture_cube_map_array
#define GLES_EXT_texture_cube_map_array 1
#endif

#ifndef GLES_EXT_texture_filter_anisotropic
#define GLES_EXT_texture_filter_anisotropic 1
#endif

#ifndef GLES_EXT_texture_filter_minmax
#define GLES_EXT_texture_filter_minmax 1
#endif

#ifndef GLES_EXT_texture_format_BGRA8888
#define GLES_EXT_texture_format_BGRA8888 1
#endif

#ifndef GLES_EXT_texture_lod_bias
#define GLES_EXT_texture_lod_bias 1
#endif

#ifndef GLES_EXT_texture_norm16
#define GLES_EXT_texture_norm16 1
#endif

#ifndef GLES_EXT_texture_rg
#define GLES_EXT_texture_rg 1
#endif

#ifndef GLES_EXT_texture_sRGB_decode
#define GLES_EXT_texture_sRGB_decode 1
#endif

#ifndef GLES_EXT_texture_sRGB_R8
#define GLES_EXT_texture_sRGB_R8 1
#endif

#ifndef GLES_EXT_texture_sRGB_RG8
#define GLES_EXT_texture_sRGB_RG8 1
#endif

#ifndef GLES_EXT_texture_storage
#define GLES_EXT_texture_storage 1
#endif

#ifndef GLES_EXT_texture_type_2_10_10_10_REV
#define GLES_EXT_texture_type_2_10_10_10_REV 1
#endif

#ifndef GLES_EXT_texture_view
#define GLES_EXT_texture_view 1
#endif

#ifndef GLES_EXT_unpack_subimage
#define GLES_EXT_unpack_subimage 1
#endif

#ifndef GLES_EXT_YUV_target
#define GLES_EXT_YUV_target 1
#endif

#ifndef GLES_FJ_shader_binary_GCCSO
#define GLES_FJ_shader_binary_GCCSO 1
#endif

#ifndef GLES_IMG_multisampled_render_to_texture
#define GLES_IMG_multisampled_render_to_texture 1
#endif

#ifndef GLES_IMG_program_binary
#define GLES_IMG_program_binary 1
#endif

#ifndef GLES_IMG_read_format
#define GLES_IMG_read_format 1
#endif

#ifndef GLES_shader_binary
#define GLES_shader_binary 1
#endif

#ifndef GLES_IMG_texture_compression_pvrtc
#define GLES_IMG_texture_compression_pvrtc 1
#endif

#ifndef GLES_IMG_texture_compression_pvrtc2
#define GLES_IMG_texture_compression_pvrtc2 1
#endif

#ifndef GLES_IMG_texture_env_enhanced_fixed_function
#define GLES_IMG_texture_env_enhanced_fixed_function 1
#endif

#ifndef GLES_IMG_user_clip_plane
#define GLES_IMG_user_clip_plane 1
#endif

#ifndef GLES_INTEL_performance_query
#define GLES_INTEL_performance_query 1
#endif

#ifndef GLES_KHR_blend_equation_advanced
#define GLES_KHR_blend_equation_advanced 1
#endif

#ifndef GLES_KHR_context_flush_control
#define GLES_KHR_context_flush_control 1
#endif

#ifndef GLES_KHR_debug
#define GLES_KHR_debug 1
#endif

#ifndef GLES_KHR_no_error
#define GLES_KHR_no_error 1
#endif

#ifndef GLES_KHR_robustness
#define GLES_KHR_robustness 1
#endif

#ifndef GLES_KHR_robust_buffer_access_behavior
#define GLES_KHR_robust_buffer_access_behavior 1
#endif

#ifndef GLES_KHR_texture_compression_astc_ldr
#define GLES_KHR_texture_compression_astc_ldr 1
#endif

#ifndef GLES_NV_3dvision_settings
#define GLES_NV_3dvision_settings 1
#endif

#ifndef GLES_NV_bgr
#define GLES_NV_bgr 1
#endif

#ifndef GLES_NV_bindless_texture
#define GLES_NV_bindless_texture 1
#endif

#ifndef GLES_NV_blend_equation_advanced
#define GLES_NV_blend_equation_advanced 1
#endif

#ifndef GLES_NV_conditional_render
#define GLES_NV_conditional_render 1
#endif

#ifndef GLES_NV_conservative_raster
#define GLES_NV_conservative_raster 1
#endif

#ifndef GLES_NV_copy_buffer
#define GLES_NV_copy_buffer 1
#endif

#ifndef GLES_NV_coverage_sample
#define GLES_NV_coverage_sample 1
#endif

#ifndef GLES_NV_depth_nonlinear
#define GLES_NV_depth_nonlinear 1
#endif

#ifndef GLES_NV_draw_buffers
#define GLES_NV_draw_buffers 1
#endif

#ifndef GLES_NV_draw_instanced
#define GLES_NV_draw_instanced 1
#endif

#ifndef GLES_NV_draw_texture
#define GLES_NV_draw_texture 1
#endif

#ifndef GLES_NV_EGL_stream_consumer_external
#define GLES_NV_EGL_stream_consumer_external 1
#endif

#ifndef GLES_NV_explicit_attrib_location
#define GLES_NV_explicit_attrib_location 1
#endif

#ifndef GLES_NV_fbo_color_attachments
#define GLES_NV_fbo_color_attachments 1
#endif

#ifndef GLES_NV_fence
#define GLES_NV_fence 1
#endif

#ifndef GLES_NV_fill_rectangle
#define GLES_NV_fill_rectangle 1
#endif

#ifndef GLES_NV_fragment_coverage_to_color
#define GLES_NV_fragment_coverage_to_color 1
#endif

#ifndef GLES_NV_fragment_shader_interlock
#define GLES_NV_fragment_shader_interlock 1
#endif

#ifndef GLES_NV_framebuffer_blit
#define GLES_NV_framebuffer_blit 1
#endif

#ifndef GLES_NV_framebuffer_mixed_samples
#define GLES_NV_framebuffer_mixed_samples 1
#endif

#ifndef GLES_NV_framebuffer_multisample
#define GLES_NV_framebuffer_multisample 1
#endif

#ifndef GLES_NV_generate_mipmap_sRGB
#define GLES_NV_generate_mipmap_sRGB 1
#endif

#ifndef GLES_NV_geometry_shader_passthrough
#define GLES_NV_geometry_shader_passthrough 1
#endif

#ifndef GLES_NV_image_formats
#define GLES_NV_image_formats 1
#endif

#ifndef GLES_NV_instanced_arrays
#define GLES_NV_instanced_arrays 1
#endif

#ifndef GLES_NV_internalformat_sample_query
#define GLES_NV_internalformat_sample_query 1
#endif

#ifndef GLES_NV_non_square_matrices
#define GLES_NV_non_square_matrices 1
#endif

#ifndef GLES_NV_packed_float
#define GLES_NV_packed_float 1
#endif

#ifndef GLES_NV_path_rendering
#define GLES_NV_path_rendering 1
#endif

#ifndef GLES_NV_path_rendering_shared_edge
#define GLES_NV_path_rendering_shared_edge 1
#endif

#ifndef GLES_NV_pixel_buffer_object
#define GLES_NV_pixel_buffer_object 1
#endif

#ifndef GLES_NV_polygon_mode
#define GLES_NV_polygon_mode 1
#endif

#ifndef GLES_NV_read_buffer
#define GLES_NV_read_buffer 1
#endif

#ifndef GLES_NV_read_depth
#define GLES_NV_read_depth 1
#endif

#ifndef GLES_NV_read_depth_stencil
#define GLES_NV_read_depth_stencil 1
#endif

#ifndef GLES_NV_read_stencil
#define GLES_NV_read_stencil 1
#endif

#ifndef GLES_NV_sample_locations
#define GLES_NV_sample_locations 1
#endif

#ifndef GLES_NV_sample_mask_override_coverage
#define GLES_NV_sample_mask_override_coverage 1
#endif

#ifndef GLES_NV_shader_noperspective_interpolation
#define GLES_NV_shader_noperspective_interpolation 1
#endif

#ifndef GLES_NV_shadow_samplers_array
#define GLES_NV_shadow_samplers_array 1
#endif

#ifndef GLES_NV_shadow_samplers_cube
#define GLES_NV_shadow_samplers_cube 1
#endif

#ifndef GLES_NV_sRGB_formats
#define GLES_NV_sRGB_formats 1
#endif

#ifndef GLES_NV_texture_array
#define GLES_NV_texture_array 1
#endif

#ifndef GLES_NV_texture_border_clamp
#define GLES_NV_texture_border_clamp 1
#endif

#ifndef GLES_NV_texture_compression_latc
#define GLES_NV_texture_compression_latc 1
#endif

#ifndef GLES_NV_texture_compression_s3tc
#define GLES_NV_texture_compression_s3tc 1
#endif

#ifndef GLES_NV_texture_compression_s3tc_update
#define GLES_NV_texture_compression_s3tc_update 1
#endif

#ifndef GLES_NV_texture_npot_2D_mipmap
#define GLES_NV_texture_npot_2D_mipmap 1
#endif

#ifndef GLES_NV_viewport_array
#define GLES_NV_viewport_array 1
#endif

#ifndef GLES_NV_viewport_array2
#define GLES_NV_viewport_array2 1
#endif

#ifndef GLES_OES_blend_equation_separate
#define GLES_OES_blend_equation_separate 1
#endif

#ifndef GLES_OES_blend_func_separate
#define GLES_OES_blend_func_separate 1
#endif

#ifndef GLES_OES_blend_subtract
#define GLES_OES_blend_subtract 1
#endif

#ifndef GLES_OES_byte_coordinates
#define GLES_OES_byte_coordinates 1
#endif

#ifndef GLES_OES_compressed_ETC1_RGB8_texture
#define GLES_OES_compressed_ETC1_RGB8_texture 1
#endif

#ifndef GLES_OES_compressed_paletted_texture
#define GLES_OES_compressed_paletted_texture 1
#endif

#ifndef GLES_OES_copy_image
#define GLES_OES_copy_image 1
#endif

#ifndef GLES_OES_depth24
#define GLES_OES_depth24 1
#endif

#ifndef GLES_OES_depth32
#define GLES_OES_depth32 1
#endif

#ifndef GLES_OES_depth_texture
#define GLES_OES_depth_texture 1
#endif

#ifndef GLES_OES_depth_texture_cube_map
#define GLES_OES_depth_texture_cube_map 1
#endif

#ifndef GLES_OES_draw_buffers_indexed
#define GLES_OES_draw_buffers_indexed 1
#endif

#ifndef GLES_OES_draw_elements_base_vertex
#define GLES_OES_draw_elements_base_vertex 1
#endif

#ifndef GLES_OES_draw_texture
#define GLES_OES_draw_texture 1
#endif

#ifndef GLES_OES_EGL_image
#define GLES_OES_EGL_image 1
#endif

#ifndef GLES_OES_EGL_image_external
#define GLES_OES_EGL_image_external 1
#endif

#ifndef GLES_OES_EGL_image_external_essl3
#define GLES_OES_EGL_image_external_essl3 1
#endif

#ifndef GLES_OES_element_index_uint
#define GLES_OES_element_index_uint 1
#endif

#ifndef GLES_OES_extended_matrix_palette
#define GLES_OES_extended_matrix_palette 1
#endif

#ifndef GLES_OES_fbo_render_mipmap
#define GLES_OES_fbo_render_mipmap 1
#endif

#ifndef GLES_OES_fixed_point
#define GLES_OES_fixed_point 1
#endif

#ifndef GLES_OES_fragment_precision_high
#define GLES_OES_fragment_precision_high 1
#endif

#ifndef GLES_OES_framebuffer_object
#define GLES_OES_framebuffer_object 1
#endif

#ifndef GLES_OES_geometry_shader
#define GLES_OES_geometry_shader 1
#endif

#ifndef GLES_OES_get_program_binary
#define GLES_OES_get_program_binary 1
#endif

#ifndef GLES_OES_gpu_shader5
#define GLES_OES_gpu_shader5 1
#endif

#ifndef GLES_OES_mapbuffer
#define GLES_OES_mapbuffer 1
#endif

#ifndef GLES_OES_matrix_get
#define GLES_OES_matrix_get 1
#endif

#ifndef GLES_OES_matrix_palette
#define GLES_OES_matrix_palette 1
#endif

#ifndef GLES_OES_packed_depth_stencil
#define GLES_OES_packed_depth_stencil 1
#endif

#ifndef GLES_OES_point_size_array
#define GLES_OES_point_size_array 1
#endif

#ifndef GLES_OES_point_sprite
#define GLES_OES_point_sprite 1
#endif

#ifndef GLES_OES_primitive_bounding_box
#define GLES_OES_primitive_bounding_box 1
#endif

#ifndef GLES_OES_query_matrix
#define GLES_OES_query_matrix 1
#endif

#ifndef GLES_OES_read_format
#define GLES_OES_read_format 1
#endif

#ifndef GLES_OES_required_internalformat
#define GLES_OES_required_internalformat 1
#endif

#ifndef GLES_OES_rgb8_rgba8
#define GLES_OES_rgb8_rgba8 1
#endif

#ifndef GL_OES_sample_shading
#define GL_OES_sample_shading 1
#endif

#ifndef GL_OES_sample_variables
#define GL_OES_sample_variables 1
#endif

#ifndef GLES_OES_shader_binary
#define GLES_OES_shader_binary 1
#endif

#ifndef GL_OES_shader_image_atomic
#define GL_OES_shader_image_atomic 1
#endif

#ifndef GLES_OES_shader_io_blocks
#define GLES_OES_shader_io_blocks 1
#endif

#ifndef GL_OES_shader_multisample_interpolation
#define GL_OES_shader_multisample_interpolation 1
#endif

#ifndef GLES_OES_shader_source
#define GLES_OES_shader_source 1
#endif

#ifndef GLES_OES_single_precision
#define GLES_OES_single_precision 1
#endif

#ifndef GLES_OES_standard_derivatives
#define GLES_OES_standard_derivatives 1
#endif

#ifndef GLES_OES_stencil1
#define GLES_OES_stencil1 1
#endif

#ifndef GLES_OES_stencil4
#define GLES_OES_stencil4 1
#endif

#ifndef GLES_OES_stencil8
#define GLES_OES_stencil8 1
#endif

#ifndef GLES_OES_stencil_wrap
#define GLES_OES_stencil_wrap 1
#endif

#ifndef GLES_OES_surfaceless_context
#define GLES_OES_surfaceless_context 1
#endif

#ifndef GLES_OES_tessellation_shader
#define GLES_OES_tessellation_shader 1
#endif

#ifndef GLES_OES_texture_3D
#define GLES_OES_texture_3D 1
#endif

#ifndef GLES_OES_texture_border_clamp
#define GLES_OES_texture_border_clamp 1
#endif

#ifndef GLES_OES_texture_buffer
#define GLES_OES_texture_buffer 1
#endif

#ifndef GLES_OES_texture_compression_astc
#define GLES_OES_texture_compression_astc 1
#endif

#ifndef GLES_OES_texture_cube_map
#define GLES_OES_texture_cube_map 1
#endif

#ifndef GLES_OES_texture_cube_map_array
#define GLES_OES_texture_cube_map_array 1
#endif

#ifndef GLES_OES_texture_env_crossbar
#define GLES_OES_texture_env_crossbar 1
#endif

#ifndef GLES_OES_texture_float
#define GLES_OES_texture_float 1
#endif

#ifndef GLES_OES_texture_float_linear
#define GLES_OES_texture_float_linear 1
#endif

#ifndef GLES_OES_texture_half_float
#define GLES_OES_texture_half_float 1
#endif

#ifndef GLES_OES_texture_half_float_linear
#define GLES_OES_texture_half_float_linear 1
#endif

#ifndef GLES_OES_texture_mirrored_repeat
#define GLES_OES_texture_mirrored_repeat 1
#endif

#ifndef GLES_OES_texture_npot
#define GLES_OES_texture_npot 1
#endif

#ifndef GL_OES_texture_stencil8
#define GL_OES_texture_stencil8 1
#endif

#ifndef GL_OES_texture_storage_multisample_2d_array
#define GL_OES_texture_storage_multisample_2d_array 1
#endif

#ifndef GLES_OES_texture_view
#define GLES_OES_texture_view 1
#endif

#ifndef GLES_OES_vertex_array_object
#define GLES_OES_vertex_array_object 1
#endif

#ifndef GLES_OES_vertex_half_float
#define GLES_OES_vertex_half_float 1
#endif

#ifndef GLES_OES_vertex_type_10_10_10_2
#define GLES_OES_vertex_type_10_10_10_2 1
#endif

#ifndef GLES_OVR_multiview
#define GLES_OVR_multiview 1
#endif

#ifndef GLES_OVR_multiview2
#define GLES_OVR_multiview2 1
#endif

#ifndef GLES_QCOM_binning_control
#define GLES_QCOM_binning_control 1
#endif

#ifndef GLES_QCOM_driver_control
#define GLES_QCOM_driver_control 1
#endif

#ifndef GLES_QCOM_extended_get
#define GLES_QCOM_extended_get 1
#endif

#ifndef GLES_QCOM_extended_get2
#define GLES_QCOM_extended_get2 1
#endif

#ifndef GLES_QCOM_performance_monitor_global_mode
#define GLES_QCOM_performance_monitor_global_mode 1
#endif

#ifndef GLES_QCOM_tiled_rendering
#define GLES_QCOM_tiled_rendering 1
#endif

#ifndef GLES_QCOM_writeonly_rendering
#define GLES_QCOM_writeonly_rendering 1
#endif

#ifndef GLES_VERSION_1_0
#define GLES_VERSION_1_0 1
#endif

#ifndef GLES_VERSION_1_1
#define GLES_VERSION_1_1 1
#endif

#ifndef GLES_VERSION_2_0
#define GLES_VERSION_2_0 1
#endif

#ifndef GLES_VERSION_3_0
#define GLES_VERSION_3_0 1
#endif

#ifndef GLES_VERSION_3_1
#define GLES_VERSION_3_1 1
#endif

#ifndef GLES_VIV_shader_binary
#define GLES_VIV_shader_binary 1
#endif

#ifdef GLES_NV_pack_subimage

#define GL_PACK_ROW_LENGTH_NV 0x0D02
#define GL_PACK_SKIP_ROWS_NV 0x0D03
#define GL_PACK_SKIP_PIXELS_NV 0x0D04

#endif

#ifdef GLES_NV_platform_binary

#define GL_NVIDIA_PLATFORM_BINARY_NV 0x890B

#endif

#ifdef GLES_AMD_compressed_3DC_texture

#define GL_3DC_X_AMD 0x87F9
#define GL_3DC_XY_AMD 0x87FA

#endif

#ifdef GLES_AMD_compressed_ATC_texture

#define GL_ATC_RGB_AMD 0x8C92
#define GL_ATC_RGBA_EXPLICIT_ALPHA_AMD 0x8C93
#define GL_ATC_RGBA_INTERPOLATED_ALPHA_AMD 0x87EE

#endif

#ifdef GLES_AMD_performance_monitor

#define GL_COUNTER_TYPE_AMD 0x8BC0
#define GL_COUNTER_RANGE_AMD 0x8BC1
#define GL_UNSIGNED_INT64_AMD 0x8BC2
#define GL_PERCENTAGE_AMD 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD 0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD 0x8BC5
#define GL_PERFMON_RESULT_AMD 0x8BC6

#endif

#ifdef GLES_AMD_program_binary_Z400

#define GL_Z400_BINARY_AMD 0x8740

#endif

#ifdef GLES_ANGLE_depth_texture

#define GL_DEPTH_COMPONENT 0x1902
#define GL_DEPTH_STENCIL_OES 0x84F9
#define GL_UNSIGNED_SHORT 0x1403
#define GL_UNSIGNED_INT 0x1405
#define GL_UNSIGNED_INT_24_8_OES 0x84FA
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_DEPTH_COMPONENT32_OES 0x81A7
#define GL_DEPTH24_STENCIL8_OES 0x88F0

#endif

#ifdef GLES_ANGLE_framebuffer_blit

#define GL_READ_FRAMEBUFFER_ANGLE 0x8CA8
#define GL_DRAW_FRAMEBUFFER_ANGLE 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_ANGLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_ANGLE 0x8CAA

#endif

#ifdef GLES_ANGLE_framebuffer_multisample

#define GL_RENDERBUFFER_SAMPLES_ANGLE 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_ANGLE 0x8D56
#define GL_MAX_SAMPLES_ANGLE 0x8D57

#endif

#ifdef GLES_ANGLE_instanced_arrays

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE 0x88FE

#endif

#ifdef GLES_ANGLE_pack_reverse_row_order

#define GL_PACK_REVERSE_ROW_ORDER_ANGLE 0x93A4

#endif

#ifdef GLES_ANGLE_program_binary

#define GL_PROGRAM_BINARY_ANGLE 0x93A6

#endif

#ifdef GLES_ANGLE_robust_resource_initialization

#define GL_CONTEXT_ROBUST_RESOURCE_INITIALIZATION_ANGLE 0x93A7

#endif

#ifdef GLES_ANGLE_texture_compression_dxt1

#define GL_COMPRESSED_RGB_S3TC_DXT1_ANGLE 0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_ANGLE 0x83F1

#endif

#ifdef GLES_ANGLE_texture_compression_dxt3

#define GL_COMPRESSED_RGBA_S3TC_DXT3_ANGLE 0x83F2

#endif

#ifdef GLES_ANGLE_texture_compression_dxt5

#define GL_COMPRESSED_RGBA_S3TC_DXT5_ANGLE 0x83F3

#endif

#ifdef GLES_ANGLE_texture_usage

#define GL_TEXTURE_USAGE_ANGLE 0x93A2
#define GL_FRAMEBUFFER_ATTACHMENT_ANGLE 0x93A3

#endif

#ifdef GL_EXT_timer_query

#define GL_QUERY_COUNTER_BITS_ANGLE 0x8864
#define GL_CURRENT_QUERY_ANGLE 0x8865
#define GL_QUERY_RESULT_ANGLE 0x8866
#define GL_QUERY_RESULT_AVAILABLE_ANGLE 0x8867
#define GL_TIME_ELAPSED_ANGLE 0x88BF
#define GL_TIMESTAMP_ANGLE 0x8E28

#endif

#ifdef GLES_ANGLE_translated_shader_source

#define GL_TRANSLATED_SHADER_SOURCE_LENGTH_ANGLE 0x93A0

#endif

#ifdef GLES_APPLE_clip_distance

#define GL_MAX_CLIP_DISTANCES_APPLE 0x0D32
#define GL_CLIP_DISTANCE0_APPLE 0x3000
#define GL_CLIP_DISTANCE1_APPLE 0x3001
#define GL_CLIP_DISTANCE2_APPLE 0x3002
#define GL_CLIP_DISTANCE3_APPLE 0x3003
#define GL_CLIP_DISTANCE4_APPLE 0x3004
#define GL_CLIP_DISTANCE5_APPLE 0x3005
#define GL_CLIP_DISTANCE6_APPLE 0x3006
#define GL_CLIP_DISTANCE7_APPLE 0x3007

#endif

#ifdef GLES_APPLE_framebuffer_multisample

#define GL_RENDERBUFFER_SAMPLES_APPLE 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_APPLE 0x8D56
#define GL_MAX_SAMPLES_APPLE 0x8D57
#define GL_READ_FRAMEBUFFER_APPLE 0x8CA8
#define GL_DRAW_FRAMEBUFFER_APPLE 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_APPLE 0x8CA6
#define GL_READ_FRAMEBUFFER_BINDING_APPLE 0x8CAA

#endif

#ifdef GLES_APPLE_rgb_422

#define GL_RGB_422_APPLE 0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE 0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE 0x85BB

#endif

#ifdef GLES_APPLE_sync

#define GL_MAX_SERVER_WAIT_TIMEOUT_APPLE 0x9111
#define GL_OBJECT_TYPE_APPLE 0x9112
#define GL_SYNC_CONDITION_APPLE 0x9113
#define GL_SYNC_STATUS_APPLE 0x9114
#define GL_SYNC_FLAGS_APPLE 0x9115
#define GL_SYNC_FENCE_APPLE 0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE_APPLE 0x9117
#define GL_UNSIGNALED_APPLE 0x9118
#define GL_SIGNALED_APPLE 0x9119
#define GL_ALREADY_SIGNALED_APPLE 0x911A
#define GL_TIMEOUT_EXPIRED_APPLE 0x911B
#define GL_CONDITION_SATISFIED_APPLE 0x911C
#define GL_WAIT_FAILED_APPLE 0x911D
#define GL_SYNC_OBJECT_APPLE 0x8A53
#define GL_SYNC_FLUSH_COMMANDS_BIT_APPLE 0x00000001
#define GL_TIMEOUT_IGNORED_APPLE 0xFFFFFFFFFFFFFFFFull

#endif

#ifdef GLES_APPLE_texture_format_BGRA8888

#define GL_BGRA_APPLE 0x80E1

#endif

#ifdef GLES_APPLE_texture_max_level

#define GL_TEXTURE_MAX_LEVEL_APPLE 0x813D

#endif

#ifdef GLES_APPLE_texture_packed_float

#define GL_UNSIGNED_INT_10F_11F_11F_REV_APPLE 0x8C3B
#define GL_UNSIGNED_INT_5_9_9_9_REV_APPLE 0x8C3E
#define GL_R11F_G11F_B10F_APPLE 0x8C3A
#define GL_RGB9_E5_APPLE 0x8C3D

#endif

#ifdef GLES_ARM_mali_program_binary

#define GL_MALI_PROGRAM_BINARY_ARM 0x8F61

#endif

#ifdef GLES_ARM_mali_shader_binary

#define GL_MALI_SHADER_BINARY_ARM 0x8F60

#endif

#ifdef GLES_ARM_rgba8

#define GL_RGBA8_OES 0x8058

#endif

#ifdef GLES_ARM_shader_framebuffer_fetch

#define GL_FETCH_PER_SAMPLE_ARM 0x8F65
#define GL_FRAGMENT_SHADER_FRAMEBUFFER_FETCH_MRT_ARM 0x8F66

#endif

#ifdef GLES_DMP_program_binary

#define GL_SMAPHS30_PROGRAM_BINARY_DMP 0x9251
#define GL_SMAPHS_PROGRAM_BINARY_DMP 0x9252
#define GL_DMP_PROGRAM_BINARY_DMP 0x9253

#endif

#ifdef GLES_EXT_blend_minmax

#define GL_BLEND_EQUATION_EXT 0x8009
#define GL_MIN_EXT 0x8007
#define GL_MAX_EXT 0x8008
#define GL_FUNC_ADD_EXT 0x8006

#endif

#ifdef GLES_EXT_buffer_storage

#define GL_MAP_READ_BIT 0x0001
#define GL_MAP_WRITE_BIT 0x0002
#define GL_MAP_PERSISTENT_BIT_EXT 0x0040
#define GL_MAP_COHERENT_BIT_EXT 0x0080
#define GL_DYNAMIC_STORAGE_BIT_EXT 0x0100
#define GL_CLIENT_STORAGE_BIT_EXT 0x0200
#define GL_BUFFER_IMMUTABLE_STORAGE_EXT 0x821F
#define GL_BUFFER_STORAGE_FLAGS_EXT 0x8220
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT_EXT 0x00004000

#endif

#ifdef GLES_EXT_color_buffer_half_float

#define GL_RGBA16F_EXT 0x881A
#define GL_RGB16F_EXT 0x881B
#define GL_RG16F_EXT 0x822F
#define GL_R16F_EXT 0x822D
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_EXT 0x8211
#define GL_UNSIGNED_NORMALIZED_EXT 0x8C17

#endif

#ifdef GLES_EXT_debug_label

#define GL_BUFFER_OBJECT_EXT 0x9151
#define GL_SHADER_OBJECT_EXT 0x8B48
#define GL_PROGRAM_OBJECT_EXT 0x8B40
#define GL_VERTEX_ARRAY_OBJECT_EXT 0x9154
#define GL_QUERY_OBJECT_EXT 0x9153
#define GL_PROGRAM_PIPELINE_OBJECT_EXT 0x8A4F

#endif

#ifdef GLES_EXT_discard_framebuffer

#define GL_COLOR_EXT 0x1800
#define GL_DEPTH_EXT 0x1801
#define GL_STENCIL_EXT 0x1802

#endif

#ifdef GLES_EXT_disjoint_timer_query

#define GL_QUERY_COUNTER_BITS_EXT 0x8864
#define GL_CURRENT_QUERY_EXT 0x8865
#define GL_QUERY_RESULT_EXT 0x8866
#define GL_QUERY_RESULT_AVAILABLE_EXT 0x8867
#define GL_TIME_ELAPSED_EXT 0x88BF
#define GL_TIMESTAMP_EXT 0x8E28
#define GL_GPU_DISJOINT_EXT 0x8FBB

#endif

#ifdef GLES_EXT_draw_buffers

#define GL_MAX_COLOR_ATTACHMENTS_EXT 0x8CDF
#define GL_MAX_DRAW_BUFFERS_EXT 0x8824
#define GL_DRAW_BUFFER0_EXT 0x8825
#define GL_DRAW_BUFFER1_EXT 0x8826
#define GL_DRAW_BUFFER2_EXT 0x8827
#define GL_DRAW_BUFFER3_EXT 0x8828
#define GL_DRAW_BUFFER4_EXT 0x8829
#define GL_DRAW_BUFFER5_EXT 0x882A
#define GL_DRAW_BUFFER6_EXT 0x882B
#define GL_DRAW_BUFFER7_EXT 0x882C
#define GL_DRAW_BUFFER8_EXT 0x882D
#define GL_DRAW_BUFFER9_EXT 0x882E
#define GL_DRAW_BUFFER10_EXT 0x882F
#define GL_DRAW_BUFFER11_EXT 0x8830
#define GL_DRAW_BUFFER12_EXT 0x8831
#define GL_DRAW_BUFFER13_EXT 0x8832
#define GL_DRAW_BUFFER14_EXT 0x8833
#define GL_DRAW_BUFFER15_EXT 0x8834

#endif

#ifdef GLES_EXT_geometry_shader

#define GL_GEOMETRY_SHADER_EXT 0x8DD9
#define GL_GEOMETRY_SHADER_BIT_EXT 0x00000004
#define GL_GEOMETRY_LINKED_VERTICES_OUT_EXT 0x8916
#define GL_GEOMETRY_LINKED_INPUT_TYPE_EXT 0x8917
#define GL_GEOMETRY_LINKED_OUTPUT_TYPE_EXT 0x8918
#define GL_GEOMETRY_SHADER_INVOCATIONS_EXT 0x887F
#define GL_LAYER_PROVOKING_VERTEX_EXT 0x825E
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_EXT 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_EXT 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_EXT 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_EXT 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_EXT 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_EXT 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_EXT 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_EXT 0x90D7
#define GL_FIRST_VERTEX_CONVENTION_EXT 0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT 0x8E4E
#define GL_UNDEFINED_VERTEX_EXT 0x8260
#define GL_PRIMITIVES_GENERATED_EXT 0x8C87
#define GL_LINES_ADJACENCY_EXT 0xA
#define GL_LINE_STRIP_ADJACENCY_EXT 0xB
#define GL_TRIANGLES_ADJACENCY_EXT 0xC
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT 0xD
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_EXT 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_EXT 0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER_EXT 0x9309

#endif

#ifdef GLES_EXT_instanced_arrays

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_EXT 0x88FE

#endif

#ifdef GLES_EXT_map_buffer_range

#define GL_MAP_READ_BIT_EXT 0x0001
#define GL_MAP_WRITE_BIT_EXT 0x0002
#define GL_MAP_INVALIDATE_RANGE_BIT_EXT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT_EXT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT_EXT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT_EXT 0x0020

#endif

#ifdef GLES_EXT_multisampled_render_to_texture

#define GL_RENDERBUFFER_SAMPLES_EXT 0x9133
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x9134
#define GL_MAX_SAMPLES_EXT 0x9135
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_SAMPLES_EXT 0x8D6C

#endif

#ifdef GLES_EXT_multiview_draw_buffers

#define GL_COLOR_ATTACHMENT_EXT 0x90F0
#define GL_MULTIVIEW_EXT 0x90F1
#define GL_DRAW_BUFFER_EXT 0x0C01
#define GL_READ_BUFFER_EXT 0x0C02
#define GL_MAX_MULTIVIEW_BUFFERS_EXT 0x90F2

#endif

#ifdef GLES_EXT_occlusion_query_boolean

#define GL_ANY_SAMPLES_PASSED_EXT 0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE_EXT 0x8D6A

#endif

#ifdef GLES_EXT_primitive_bounding_box

#define GL_PRIMITIVE_BOUNDING_BOX_EXT 0x92BE

#endif

#ifdef GLES_EXT_pvrtc_sRGB

#define GL_COMPRESSED_SRGB_PVRTC_2BPPV1_EXT 0x8A54
#define GL_COMPRESSED_SRGB_PVRTC_4BPPV1_EXT 0x8A55
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_2BPPV1_EXT 0x8A56
#define GL_COMPRESSED_SRGB_ALPHA_PVRTC_4BPPV1_EXT 0x8A57

#endif

#ifdef GLES_EXT_raster_multisample

#define GL_RASTER_MULTISAMPLE_EXT 0x9327
#define GL_RASTER_SAMPLES_EXT 0x9328
#define GL_MAX_RASTER_SAMPLES_EXT 0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT 0x932C

#endif

#ifdef GLES_EXT_read_format_bgra

#define GL_UNSIGNED_SHORT_4_4_4_4_REV_EXT 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV_EXT 0x8366

#endif

#ifdef GLES_EXT_render_snorm

#define GL_BYTE 0x1400
#define GL_SHORT 0x1402
#define GL_R8_SNORM 0x8F94
#define GL_RG8_SNORM 0x8F95
#define GL_RGBA8_SNORM 0x8F97
#define GL_R16_SNORM_EXT 0x8F98
#define GL_RG16_SNORM_EXT 0x8F99
#define GL_RGBA16_SNORM_EXT 0x8F9B

#endif

#ifdef GLES_EXT_robustness

#define GL_NO_ERROR 0x0000
#define GL_GUILTY_CONTEXT_RESET_EXT 0x8253
#define GL_INNOCENT_CONTEXT_RESET_EXT 0x8254
#define GL_UNKNOWN_CONTEXT_RESET_EXT 0x8255
#define GL_CONTEXT_ROBUST_ACCESS_EXT 0x90F3
#define GL_RESET_NOTIFICATION_STRATEGY_EXT 0x8256
#define GL_LOSE_CONTEXT_ON_RESET_EXT 0x8252
#define GL_NO_RESET_NOTIFICATION_EXT 0x8261

#endif

#ifdef GLES_EXT_separate_shader_objects

#define GL_VERTEX_SHADER_BIT_EXT 0x00000001
#define GL_FRAGMENT_SHADER_BIT_EXT 0x00000002
#define GL_ALL_SHADER_BITS_EXT 0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE_EXT 0x8258
#define GL_ACTIVE_PROGRAM_EXT 0x8B8D
#define GL_PROGRAM_PIPELINE_BINDING_EXT 0x825A

#endif

#ifdef GLES_EXT_shader_framebuffer_fetch

#define GL_FRAGMENT_SHADER_DISCARDS_SAMPLES_EXT 0x8A52

#endif

#ifdef GLES_EXT_shader_pixel_local_storage

#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_FAST_SIZE_EXT 0x8F63
#define GL_MAX_SHADER_PIXEL_LOCAL_STORAGE_SIZE_EXT 0x8F67
#define GL_SHADER_PIXEL_LOCAL_STORAGE_EXT 0x8F64

#endif

#ifdef GLES_EXT_shadow_samplers

#define GL_TEXTURE_COMPARE_MODE_EXT 0x884C
#define GL_TEXTURE_COMPARE_FUNC_EXT 0x884D
#define GL_COMPARE_REF_TO_TEXTURE_EXT 0x884E

#endif

#ifdef GLES_EXT_sparse_texture

#define GL_TEXTURE_SPARSE_EXT 0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_EXT 0x91A7
#define GL_NUM_SPARSE_LEVELS_EXT 0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_EXT 0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_EXT 0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_EXT 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_EXT 0x9197
#define GL_TEXTURE_2D 0x0DE1
#define GL_TEXTURE_2D_ARRAY 0x8C1A
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_CUBE_MAP_ARRAY_OES 0x9009
#define GL_TEXTURE_3D 0x806F
#define GL_MAX_SPARSE_TEXTURE_SIZE_EXT 0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_EXT 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_EXT 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_EXT 0x91A9

#endif

#ifdef GLES_EXT_sRGB

#define SRGB_EXT 0x8C40
#define SRGB_ALPHA_EXT 0x8C42
#define SRGB8_ALPHA8_EXT 0x8C43
#define FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT 0x8210

#endif

#ifdef GLES_EXT_sRGB_write_control

#define GL_FRAMEBUFFER_SRGB_EXT 0x8DB9

#endif

#ifdef GLES_EXT_tessellation_shader

#define GL_PATCHES_EXT 0x000E
#define GL_PATCH_VERTICES_EXT 0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES_EXT 0x8E75
#define GL_TESS_GEN_MODE_EXT 0x8E76
#define GL_TESS_GEN_SPACING_EXT 0x8E77
#define GL_TESS_GEN_VERTEX_ORDER_EXT 0x8E78
#define GL_TESS_GEN_POINT_MODE_EXT 0x8E79
#define GL_TRIANGLES 0x0004
#define GL_ISOLINES_EXT 0x8E7A
#define GL_QUADS_EXT 0x0007
#define GL_EQUAL 0x0202
#define GL_FRACTIONAL_ODD_EXT 0x8E7B
#define GL_FRACTIONAL_EVEN_EXT 0x8E7C
#define GL_CCW 0x0901
#define GL_CW 0x0900
#define GL_MAX_PATCH_VERTICES_EXT 0x8E7D
#define GL_MAX_TESS_GEN_LEVEL_EXT 0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_EXT 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_EXT 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_EXT 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS_EXT 0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_EXT 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_EXT 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_EXT 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_EXT 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_EXT 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_EXT 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_EXT 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_EXT 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_EXT 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_EXT 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_EXT 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_EXT 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_EXT 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_EXT 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_EXT 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_EXT 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_EXT 0x8221
#define GL_IS_PER_PATCH_EXT 0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_EXT 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_EXT 0x9308
#define GL_TESS_EVALUATION_SHADER_EXT 0x8E87
#define GL_TESS_CONTROL_SHADER_EXT 0x8E88
#define GL_TESS_CONTROL_SHADER_BIT_EXT 0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT_EXT 0x00000010

#endif

#ifdef GLES_EXT_texture_border_clamp

#define GL_TEXTURE_BORDER_COLOR_EXT 0x1004
#define GL_CLAMP_TO_BORDER_EXT 0x812D

#endif

#ifdef GLES_EXT_texture_buffer

#define GL_TEXTURE_BUFFER_EXT 0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_EXT 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_EXT 0x919F
#define GL_SAMPLER_BUFFER_EXT 0x8DC2
#define GL_INT_SAMPLER_BUFFER_EXT 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8
#define GL_IMAGE_BUFFER_EXT 0x9051
#define GL_INT_IMAGE_BUFFER_EXT 0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT 0x9067
#define GL_TEXTURE_BUFFER_OFFSET_EXT 0x919D
#define GL_TEXTURE_BUFFER_SIZE_EXT 0x919E

#endif

#ifdef GLES_EXT_texture_compression_dxt1

#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1

#endif

#ifdef GLES_EXT_texture_compression_latc

#define GL_COMPRESSED_LUMINANCE_LATC1_EXT 0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT 0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT 0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT 0x8C73

#endif

#ifdef GLES_EXT_texture_compression_s3tc

#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT 0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT 0x83F3

#endif

#ifdef GLES_EXT_texture_cube_map_array

#define GL_TEXTURE_CUBE_MAP_ARRAY_EXT 0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_EXT 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_EXT 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_EXT 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT 0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A

#endif

#ifdef GLES_EXT_texture_filter_anisotropic

#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF

#endif

#ifdef GLES_EXT_texture_filter_minmax

#define GL_TEXTURE_REDUCTION_MODE_EXT 0x9366
#define GL_WEIGHTED_AVERAGE_EXT 0x9367

#endif

#ifdef GLES_EXT_texture_format_BGRA8888

#define GL_BGRA_EXT 0x80E1

#endif

#ifdef GLES_EXT_texture_lod_bias

#define GL_TEXTURE_FILTER_CONTROL_EXT 0x8500
#define GL_TEXTURE_LOD_BIAS_EXT 0x8501
#define GL_MAX_TEXTURE_LOD_BIAS_EXT 0x84FD

#endif

#ifdef GLES_EXT_texture_norm16

#define GL_R16_EXT 0x822A
#define GL_RG16_EXT 0x822C
#define GL_RGBA16_EXT 0x805B
#define GL_RGB16_EXT 0x8054
#define GL_RGB16_SNORM_EXT 0x8F9A

#endif

#ifdef GLES_EXT_texture_rg

#define GL_RED_EXT 0x1903
#define GL_RG_EXT 0x8227
#define GL_R8_EXT 0x8229
#define GL_RG8_EXT 0x822B

#endif

#ifdef GLES_EXT_texture_sRGB_decode

#define GL_TEXTURE_SRGB_DECODE_EXT 0x8A48
#define GL_DECODE_EXT 0x8A49
#define GL_SKIP_DECODE_EXT 0x8A4A

#endif

#ifdef GLES_EXT_texture_sRGB_R8

#define GL_SR8_EXT 0x8FBD

#endif

#ifdef GLES_EXT_texture_sRGB_RG8

#define GL_SRG8_EXT 0x8FBE

#endif

#ifdef GLES_EXT_texture_storage

#define GL_TEXTURE_IMMUTABLE_FORMAT_EXT 0x912F
#define GL_ALPHA8_EXT 0x803C
#define GL_LUMINANCE8_EXT 0x8040
#define GL_LUMINANCE8_ALPHA8_EXT 0x8045
#define GL_RGBA32F_EXT 0x8814
#define GL_RGB32F_EXT 0x8815
#define GL_ALPHA32F_EXT 0x8816
#define GL_LUMINANCE32F_EXT 0x8818
#define GL_LUMINANCE_ALPHA32F_EXT 0x8819
#define GL_ALPHA16F_EXT 0x881C
#define GL_LUMINANCE16F_EXT 0x881E
#define GL_LUMINANCE_ALPHA16F_EXT 0x881F
#define GL_RGB10_A2_EXT 0x8059
#define GL_RGB10_EXT 0x8052
#define GL_BGRA8_EXT 0x93A1

#endif

#ifdef GLES_EXT_texture_type_2_10_10_10_REV

#define GL_UNSIGNED_INT_2_10_10_10_REV_EXT 0x8368

#endif

#ifdef GLES_EXT_texture_view

#define GL_TEXTURE_VIEW_MIN_LEVEL_EXT 0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_EXT 0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_EXT 0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_EXT 0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS_EXT 0x82DF

#endif

#ifdef GLES_EXT_unpack_subimage

#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4

#endif

#ifdef GLES_EXT_YUV_target

#define GL_SAMPLER_EXTERNAL_2D_Y2Y_EXT 0x8BE7

#endif

#ifdef GLES_FJ_shader_binary_GCCSO

#define GL_GCCSO_SHADER_BINARY_FJ 0x9260

#endif

#ifdef GLES_IMG_multisampled_render_to_texture

#define GL_RENDERBUFFER_SAMPLES_IMG 0x9133
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_IMG 0x9134
#define GL_MAX_SAMPLES_IMG 0x9135
#define GL_TEXTURE_SAMPLES_IMG 0x9136

#endif

#ifdef GLES_IMG_program_binary

#define GL_SGX_PROGRAM_BINARY_IMG 0x9130

#endif

#ifdef GLES_IMG_read_format

#define GL_BGRA_IMG 0x80E1
#define GL_UNSIGNED_SHORT_4_4_4_4_REV_IMG 0x8365

#endif

#ifdef GLES_shader_binary

#define GL_SGX_BINARY_IMG 0x8C0A

#endif

#ifdef GLES_IMG_texture_compression_pvrtc

#define GL_COMPRESSED_RGB_PVRTC_4BPPV1_IMG 0x8C00
#define GL_COMPRESSED_RGB_PVRTC_2BPPV1_IMG 0x8C01
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV1_IMG 0x8C02
#define GL_COMPRESSED_RGBA_PVRTC_2BPPV1_IMG 0x8C03

#endif

#ifdef GLES_IMG_texture_compression_pvrtc2

#define GL_COMPRESSED_RGBA_PVRTC_2BPPV2_IMG 0x9137
#define GL_COMPRESSED_RGBA_PVRTC_4BPPV2_IMG 0x9138

#endif

#ifdef GLES_IMG_texture_env_enhanced_fixed_function

#define GL_MODULATE_COLOR_IMG 0x8C04
#define GL_RECIP_ADD_SIGNED_ALPHA_IMG 0x8C05
#define GL_TEXTURE_ALPHA_MODULATE_IMG 0x8C06
#define GL_FACTOR_ALPHA_MODULATE_IMG 0x8C07
#define GL_FRAGMENT_ALPHA_MODULATE_IMG 0x8C08
#define GL_ADD_BLEND_IMG 0x8C09
#define GL_DOT3_RGBA_IMG 0x86AF

#endif

#ifdef GLES_IMG_user_clip_plane

#define GL_MAX_CLIP_PLANES_IMG 0x0D32
#define GL_CLIP_PLANE0_IMG 0x3000
#define GL_CLIP_PLANE1_IMG 0x3001
#define GL_CLIP_PLANE2_IMG 0x3002
#define GL_CLIP_PLANE3_IMG 0x3003
#define GL_CLIP_PLANE4_IMG 0x3004
#define GL_CLIP_PLANE5_IMG 0x3005

#endif

#ifdef GLES_INTEL_performance_query

#define GL_PERFQUERY_SINGLE_CONTEXT_INTEL 0x0000
#define GL_PERFQUERY_GLOBAL_CONTEXT_INTEL 0x0001
#define GL_PERFQUERY_WAIT_INTEL 0x83FB
#define GL_PERFQUERY_FLUSH_INTEL 0x83FA
#define GL_PERFQUERY_DONOT_FLUSH_INTEL 0x83F9
#define GL_PERFQUERY_COUNTER_EVENT_INTEL 0x94F0
#define GL_PERFQUERY_COUNTER_DURATION_NORM_INTEL 0x94F1
#define GL_PERFQUERY_COUNTER_DURATION_RAW_INTEL 0x94F2
#define GL_PERFQUERY_COUNTER_THROUGHPUT_INTEL 0x94F3
#define GL_PERFQUERY_COUNTER_RAW_INTEL 0x94F4
#define GL_PERFQUERY_COUNTER_TIMESTAMP_INTEL 0x94F5
#define GL_PERFQUERY_COUNTER_DATA_UINT32_INTEL 0x94F8
#define GL_PERFQUERY_COUNTER_DATA_UINT64_INTEL 0x94F9
#define GL_PERFQUERY_COUNTER_DATA_FLOAT_INTEL 0x94FA
#define GL_PERFQUERY_COUNTER_DATA_DOUBLE_INTEL 0x94FB
#define GL_PERFQUERY_COUNTER_DATA_BOOL32_INTEL 0x94FC
#define GL_PERFQUERY_QUERY_NAME_LENGTH_MAX_INTEL 0x94FD
#define GL_PERFQUERY_COUNTER_NAME_LENGTH_MAX_INTEL 0x94FE
#define GL_PERFQUERY_COUNTER_DESC_LENGTH_MAX_INTEL 0x94FF
#define GL_PERFQUERY_GPA_EXTENDED_COUNTERS_INTEL 0x9500

#endif

#ifdef GLES_KHR_blend_equation_advanced

#define GL_BLEND_ADVANCED_COHERENT_KHR 0x9285
#define GL_MULTIPLY_KHR 0x9294
#define GL_SCREEN_KHR 0x9295
#define GL_OVERLAY_KHR 0x9296
#define GL_DARKEN_KHR 0x9297
#define GL_LIGHTEN_KHR 0x9298
#define GL_COLORDODGE_KHR 0x9299
#define GL_COLORBURN_KHR 0x929A
#define GL_HARDLIGHT_KHR 0x929B
#define GL_SOFTLIGHT_KHR 0x929C
#define GL_DIFFERENCE_KHR 0x929E
#define GL_EXCLUSION_KHR 0x92A0
#define GL_HSL_HUE_KHR 0x92AD
#define GL_HSL_SATURATION_KHR 0x92AE
#define GL_HSL_COLOR_KHR 0x92AF
#define GL_HSL_LUMINOSITY_KHR 0x92B0

#endif

#ifdef GLES_KHR_context_flush_control

#define GL_CONTEXT_RELEASE_BEHAVIOR 0x82FB
#define GL_NONE 0x0000
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC

#endif

#ifdef GLES_KHR_debug

#define GL_DEBUG_OUTPUT 0x92E0
#define GL_DEBUG_OUTPUT_SYNCHRONOUS 0x8242
#define GL_CONTEXT_FLAG_DEBUG_BIT 0x00000002
#define GL_MAX_DEBUG_MESSAGE_LENGTH 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES 0x9144
#define GL_DEBUG_LOGGED_MESSAGES 0x9145
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH 0x8243
#define GL_MAX_DEBUG_GROUP_STACK_DEPTH 0x826C
#define GL_DEBUG_GROUP_STACK_DEPTH 0x826D
#define GL_MAX_LABEL_LENGTH 0x82E8
#define GL_DEBUG_CALLBACK_FUNCTION 0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM 0x8245
#define GL_DEBUG_SOURCE_API 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY 0x8249
#define GL_DEBUG_SOURCE_APPLICATION 0x824A
#define GL_DEBUG_SOURCE_OTHER 0x824B
#define GL_DEBUG_TYPE_ERROR 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR 0x824E
#define GL_DEBUG_TYPE_PORTABILITY 0x824F
#define GL_DEBUG_TYPE_PERFORMANCE 0x8250
#define GL_DEBUG_TYPE_OTHER 0x8251
#define GL_DEBUG_TYPE_MARKER 0x8268
#define GL_DEBUG_TYPE_PUSH_GROUP 0x8269
#define GL_DEBUG_TYPE_POP_GROUP 0x826A
#define GL_DEBUG_SEVERITY_HIGH 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM 0x9147
#define GL_DEBUG_SEVERITY_LOW 0x9148
#define GL_DEBUG_SEVERITY_NOTIFICATION 0x826B
#define GL_STACK_UNDERFLOW 0x0504
#define GL_STACK_OVERFLOW 0x0503
#define GL_BUFFER 0x82E0
#define GL_SHADER 0x82E1
#define GL_PROGRAM 0x82E2
#define GL_QUERY 0x82E3
#define GL_PROGRAM_PIPELINE 0x82E4
#define GL_SAMPLER 0x82E6
#define GL_DISPLAY_LIST 0x82E7

#endif

#ifdef GLES_KHR_no_error

#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR 0x00000008

#endif

#ifdef GLES_KHR_robustness

#define GL_GUILTY_CONTEXT_RESET 0x8253
#define GL_INNOCENT_CONTEXT_RESET 0x8254
#define GL_UNKNOWN_CONTEXT_RESET 0x8255
#define GL_CONTEXT_ROBUST_ACCESS 0x90F3
#define GL_RESET_NOTIFICATION_STRATEGY 0x8256
#define GL_LOSE_CONTEXT_ON_RESET 0x8252
#define GL_NO_RESET_NOTIFICATION 0x8261
#define GL_CONTEXT_LOST 0x0507

#endif

#ifdef GLES_KHR_texture_compression_astc_ldr

#define GL_COMPRESSED_RGBA_ASTC_4x4_KHR 0x93B0
#define GL_COMPRESSED_RGBA_ASTC_5x4_KHR 0x93B1
#define GL_COMPRESSED_RGBA_ASTC_5x5_KHR 0x93B2
#define GL_COMPRESSED_RGBA_ASTC_6x5_KHR 0x93B3
#define GL_COMPRESSED_RGBA_ASTC_6x6_KHR 0x93B4
#define GL_COMPRESSED_RGBA_ASTC_8x5_KHR 0x93B5
#define GL_COMPRESSED_RGBA_ASTC_8x6_KHR 0x93B6
#define GL_COMPRESSED_RGBA_ASTC_8x8_KHR 0x93B7
#define GL_COMPRESSED_RGBA_ASTC_10x5_KHR 0x93B8
#define GL_COMPRESSED_RGBA_ASTC_10x6_KHR 0x93B9
#define GL_COMPRESSED_RGBA_ASTC_10x8_KHR 0x93BA
#define GL_COMPRESSED_RGBA_ASTC_10x10_KHR 0x93BB
#define GL_COMPRESSED_RGBA_ASTC_12x10_KHR 0x93BC
#define GL_COMPRESSED_RGBA_ASTC_12x12_KHR 0x93BD
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4_KHR 0x93D0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4_KHR 0x93D1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5_KHR 0x93D2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5_KHR 0x93D3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6_KHR 0x93D4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x5_KHR 0x93D5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x6_KHR 0x93D6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_8x8_KHR 0x93D7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x5_KHR 0x93D8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x6_KHR 0x93D9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x8_KHR 0x93DA
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_10x10_KHR 0x93DB
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x10_KHR 0x93DC
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_12x12_KHR 0x93DD

#endif

#ifdef GLES_NV_3dvision_settings

#define GL_3DVISION_STEREO_NV 0x90F4
#define GL_STEREO_SEPARATION_NV 0x90F5
#define GL_STEREO_CONVERGENCE_NV 0x90F6
#define GL_STEREO_CUTOFF_NV 0x90F7
#define GL_STEREO_PROJECTION_NV 0x90F8
#define GL_STEREO_PROJECTION_PERSPECTIVE_NV 0x90F9
#define GL_STEREO_PROJECTION_ORTHO_NV 0x90FA

#endif

#ifdef GLES_NV_bgr

#define GL_BGR_NV 0x80E0

#endif

#ifdef GLES_NV_blend_equation_advanced

#define GL_BLEND_ADVANCED_COHERENT_NV 0x9285
#define GL_BLEND_PREMULTIPLIED_SRC_NV 0x9280
#define GL_BLEND_OVERLAP_NV 0x9281
#define GL_UNCORRELATED_NV 0x9282
#define GL_DISJOINT_NV 0x9283
#define GL_CONJOINT_NV 0x9284
#define GL_SRC_NV 0x9286
#define GL_DST_NV 0x9287
#define GL_SRC_OVER_NV 0x9288
#define GL_DST_OVER_NV 0x9289
#define GL_SRC_IN_NV 0x928A
#define GL_DST_IN_NV 0x928B
#define GL_SRC_OUT_NV 0x928C
#define GL_DST_OUT_NV 0x928D
#define GL_SRC_ATOP_NV 0x928E
#define GL_DST_ATOP_NV 0x928F
#define GL_MULTIPLY_NV 0x9294
#define GL_SCREEN_NV 0x9295
#define GL_OVERLAY_NV 0x9296
#define GL_DARKEN_NV 0x9297
#define GL_LIGHTEN_NV 0x9298
#define GL_COLORDODGE_NV 0x9299
#define GL_COLORBURN_NV 0x929A
#define GL_HARDLIGHT_NV 0x929B
#define GL_SOFTLIGHT_NV 0x929C
#define GL_DIFFERENCE_NV 0x929E
#define GL_EXCLUSION_NV 0x92A0
#define GL_INVERT_RGB_NV 0x92A3
#define GL_LINEARDODGE_NV 0x92A4
#define GL_LINEARBURN_NV 0x92A5
#define GL_VIVIDLIGHT_NV 0x92A6
#define GL_LINEARLIGHT_NV 0x92A7
#define GL_PINLIGHT_NV 0x92A8
#define GL_HARDMIX_NV 0x92A9
#define GL_HSL_HUE_NV 0x92AD
#define GL_HSL_SATURATION_NV 0x92AE
#define GL_HSL_COLOR_NV 0x92AF
#define GL_HSL_LUMINOSITY_NV 0x92B0
#define GL_PLUS_NV 0x9291
#define GL_PLUS_CLAMPED_NV 0x92B1
#define GL_PLUS_CLAMPED_ALPHA_NV 0x92B2
#define GL_PLUS_DARKER_NV 0x9292
#define GL_MINUS_NV 0x929F
#define GL_MINUS_CLAMPED_NV 0x92B3
#define GL_CONTRAST_NV 0x92A1
#define GL_INVERT_OVG_NV 0x92B4

#endif

#ifdef GLES_NV_conditional_render

#define GL_QUERY_WAIT_NV 0x8E13
#define GL_QUERY_NO_WAIT_NV 0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV 0x8E16

#endif

#ifdef GLES_NV_conservative_raster

#define GL_CONSERVATIVE_RASTERIZATION_NV 0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349

#endif

#ifdef GLES_NV_copy_buffer

#define GL_COPY_READ_BUFFER_NV 0x8F36
#define GL_COPY_WRITE_BUFFER_NV 0x8F37

#endif

#ifdef GLES_NV_coverage_sample

#define GL_COVERAGE_COMPONENT_NV 0x8ED0
#define GL_COVERAGE_COMPONENT4_NV 0x8ED1
#define GL_COVERAGE_ALL_FRAGMENTS_NV 0x8ED5
#define GL_COVERAGE_EDGE_FRAGMENTS_NV 0x8ED6
#define GL_COVERAGE_AUTOMATIC_NV 0x8ED7
#define GL_COVERAGE_ATTACHMENT_NV 0x8ED2
#define GL_COVERAGE_BUFFER_BIT_NV 0x8000
#define GL_COVERAGE_BUFFERS_NV 0x8ED3
#define GL_COVERAGE_SAMPLES_NV 0x8ED4

#endif

#ifdef GLES_NV_depth_nonlinear

#define DEPTH_COMPONENT16_NONLINEAR_NV 0x8E2C

#endif

#ifdef GLES_NV_draw_buffers

#define GL_MAX_DRAW_BUFFERS_NV 0x8824
#define GL_DRAW_BUFFER0_NV 0x8825
#define GL_DRAW_BUFFER1_NV 0x8826
#define GL_DRAW_BUFFER2_NV 0x8827
#define GL_DRAW_BUFFER3_NV 0x8828
#define GL_DRAW_BUFFER4_NV 0x8829
#define GL_DRAW_BUFFER5_NV 0x882A
#define GL_DRAW_BUFFER6_NV 0x882B
#define GL_DRAW_BUFFER7_NV 0x882C
#define GL_DRAW_BUFFER8_NV 0x882D
#define GL_DRAW_BUFFER9_NV 0x882E
#define GL_DRAW_BUFFER10_NV 0x882F
#define GL_DRAW_BUFFER11_NV 0x8830
#define GL_DRAW_BUFFER12_NV 0x8831
#define GL_DRAW_BUFFER13_NV 0x8832
#define GL_DRAW_BUFFER14_NV 0x8833
#define GL_DRAW_BUFFER15_NV 0x8834
#define GL_COLOR_ATTACHMENT0_NV 0x8CE0
#define GL_COLOR_ATTACHMENT1_NV 0x8CE1
#define GL_COLOR_ATTACHMENT2_NV 0x8CE2
#define GL_COLOR_ATTACHMENT3_NV 0x8CE3
#define GL_COLOR_ATTACHMENT4_NV 0x8CE4
#define GL_COLOR_ATTACHMENT5_NV 0x8CE5
#define GL_COLOR_ATTACHMENT6_NV 0x8CE6
#define GL_COLOR_ATTACHMENT7_NV 0x8CE7
#define GL_COLOR_ATTACHMENT8_NV 0x8CE8
#define GL_COLOR_ATTACHMENT9_NV 0x8CE9
#define GL_COLOR_ATTACHMENT10_NV 0x8CEA
#define GL_COLOR_ATTACHMENT11_NV 0x8CEB
#define GL_COLOR_ATTACHMENT12_NV 0x8CEC
#define GL_COLOR_ATTACHMENT13_NV 0x8CED
#define GL_COLOR_ATTACHMENT14_NV 0x8CEE
#define GL_COLOR_ATTACHMENT15_NV 0x8CEF

#endif

#ifdef GLES_NV_draw_texture

#define GL_TEXTURE_MEMORY_LAYOUT_INTEL 0x83FF
#define GL_LAYOUT_DEFAULT_INTEL 0
#define GL_LAYOUT_LINEAR_INTEL 1
#define GL_LAYOUT_LINEAR_CPU_CACHED_INTEL 2

#endif

#ifdef GLES_NV_EGL_stream_consumer_external

#define GL_TEXTURE_EXTERNAL_OES 0x8D65
#define GL_SAMPLER_EXTERNAL_OES 0x8D66
#define GL_TEXTURE_BINDING_EXTERNAL_OES 0x8D67
#define GL_REQUIRED_TEXTURE_IMAGE_UNITS_OES 0x8D68

#endif

#ifdef GLES_NV_fbo_color_attachments

#define GL_MAX_COLOR_ATTACHMENTS_NV 0x8CDF

#endif

#ifdef GLES_NV_fence

#define GL_ALL_COMPLETED_NV 0x84F2
#define GL_FENCE_STATUS_NV 0x84F3
#define GL_FENCE_CONDITION_NV 0x84F4

#endif

#ifdef GLES_NV_fill_rectangle

#define GL_FILL_RECTANGLE_NV 0x933C

#endif

#ifdef GLES_NV_fragment_coverage_to_color

#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV 0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV 0x92DE

#endif

#ifdef GLES_NV_framebuffer_blit

#define GL_READ_FRAMEBUFFER_NV 0x8CA8
#define GL_DRAW_FRAMEBUFFER_NV 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_NV GL_FRAMEBUFFER_BINDING
#define GL_READ_FRAMEBUFFER_BINDING_NV 0x8CAA

#endif

#ifdef GLES_NV_framebuffer_mixed_samples

#define GL_COVERAGE_MODULATION_TABLE_NV 0x9331
#define GL_COLOR_SAMPLES_NV 0x8E20
#define GL_DEPTH_SAMPLES_NV 0x932D
#define GL_STENCIL_SAMPLES_NV 0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV 0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333

#endif

#ifdef GLES_NV_framebuffer_multisample

#define GL_RENDERBUFFER_SAMPLES_NV 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_NV 0x8D56
#define GL_MAX_SAMPLES_NV 0x8D57

#endif

#ifdef GLES_NV_instanced_arrays

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_NV 0x88FE

#endif

#ifdef GLES_NV_internalformat_sample_query

#define GL_MULTISAMPLES_NV 0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV 0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV 0x9373
#define GL_CONFORMANT_NV 0x9374

#endif

#ifdef GLES_NV_non_square_matrices

#define GL_FLOAT_MAT2x3_NV 0x8B65
#define GL_FLOAT_MAT2x4_NV 0x8B66
#define GL_FLOAT_MAT3x2_NV 0x8B67
#define GL_FLOAT_MAT3x4_NV 0x8B68
#define GL_FLOAT_MAT4x2_NV 0x8B69
#define GL_FLOAT_MAT4x3_NV 0x8B6A

#endif

#ifdef GLES_NV_packed_float

#define GL_R11F_G11F_B10F_NV 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_NV 0x8C3B

#endif

#ifdef GLES_NV_path_rendering

#define GL_PATH_FORMAT_SVG_NV 0x9070
#define GL_PATH_FORMAT_PS_NV 0x9071
#define GL_STANDARD_FONT_NAME_NV 0x9072
#define GL_SYSTEM_FONT_NAME_NV 0x9073
#define GL_FILE_NAME_NV 0x9074
#define GL_PATH_STROKE_WIDTH_NV 0x9075
#define GL_PATH_END_CAPS_NV 0x9076
#define GL_PATH_INITIAL_END_CAP_NV 0x9077
#define GL_PATH_TERMINAL_END_CAP_NV 0x9078
#define GL_PATH_JOIN_STYLE_NV 0x9079
#define GL_PATH_MITER_LIMIT_NV 0x907A
#define GL_PATH_DASH_CAPS_NV 0x907B
#define GL_PATH_INITIAL_DASH_CAP_NV 0x907C
#define GL_PATH_TERMINAL_DASH_CAP_NV 0x907D
#define GL_PATH_DASH_OFFSET_NV 0x907E
#define GL_PATH_CLIENT_LENGTH_NV 0x907F
#define GL_PATH_FILL_MODE_NV 0x9080
#define GL_PATH_FILL_MASK_NV 0x9081
#define GL_PATH_FILL_COVER_MODE_NV 0x9082
#define GL_PATH_STROKE_COVER_MODE_NV 0x9083
#define GL_PATH_STROKE_MASK_NV 0x9084
#define GL_PATH_SAMPLE_QUALITY_NV 0x9085
#define GL_PATH_STROKE_BOUND_NV 0x9086
#define GL_PATH_STROKE_OVERSAMPLE_COUNT_NV 0x9087
#define GL_COUNT_UP_NV 0x9088
#define GL_COUNT_DOWN_NV 0x9089
#define GL_PATH_OBJECT_BOUNDING_BOX_NV 0x908A
#define GL_CONVEX_HULL_NV 0x908B
#define GL_MULTI_HULLS_NV 0x908C
#define GL_BOUNDING_BOX_NV 0x908D
#define GL_TRANSLATE_X_NV 0x908E
#define GL_TRANSLATE_Y_NV 0x908F
#define GL_TRANSLATE_2D_NV 0x9090
#define GL_TRANSLATE_3D_NV 0x9091
#define GL_AFFINE_2D_NV 0x9092
#define GL_PROJECTIVE_2D_NV 0x9093
#define GL_AFFINE_3D_NV 0x9094
#define GL_PROJECTIVE_3D_NV 0x9095
#define GL_TRANSPOSE_AFFINE_2D_NV 0x9096
#define GL_TRANSPOSE_PROJECTIVE_2D_NV 0x9097
#define GL_TRANSPOSE_AFFINE_3D_NV 0x9098
#define GL_TRANSPOSE_PROJECTIVE_3D_NV 0x9099
#define GL_UTF8_NV 0x909A
#define GL_UTF16_NV 0x909B
#define GL_BOUNDING_BOX_OF_BOUNDING_BOXES_NV 0x909C
#define GL_PATH_COMMAND_COUNT_NV 0x909D
#define GL_PATH_COORD_COUNT_NV 0x909E
#define GL_PATH_DASH_ARRAY_COUNT_NV 0x909F
#define GL_PATH_COMPUTED_LENGTH_NV 0x90A0
#define GL_PATH_FILL_BOUNDING_BOX_NV 0x90A1
#define GL_PATH_STROKE_BOUNDING_BOX_NV 0x90A2
#define GL_SQUARE_NV 0x90A3
#define GL_ROUND_NV 0x90A4
#define GL_TRIANGULAR_NV 0x90A5
#define GL_BEVEL_NV 0x90A6
#define GL_MITER_REVERT_NV 0x90A7
#define GL_MITER_TRUNCATE_NV 0x90A8
#define GL_SKIP_MISSING_GLYPH_NV 0x90A9
#define GL_USE_MISSING_GLYPH_NV 0x90AA
#define GL_PATH_ERROR_POSITION_NV 0x90AB
#define GL_PATH_FOG_GEN_MODE_NV 0x90AC
#define GL_ACCUM_ADJACENT_PAIRS_NV 0x90AD
#define GL_ADJACENT_PAIRS_NV 0x90AE
#define GL_FIRST_TO_REST_NV 0x90AF
#define GL_PATH_GEN_MODE_NV 0x90B0
#define GL_PATH_GEN_COEFF_NV 0x90B1
#define GL_PATH_GEN_COLOR_FORMAT_NV 0x90B2
#define GL_PATH_GEN_COMPONENTS_NV 0x90B3
#define GL_PATH_STENCIL_FUNC_NV 0x90B7
#define GL_PATH_STENCIL_REF_NV 0x90B8
#define GL_PATH_STENCIL_VALUE_MASK_NV 0x90B9
#define GL_PATH_STENCIL_DEPTH_OFFSET_FACTOR_NV 0x90BD
#define GL_PATH_STENCIL_DEPTH_OFFSET_UNITS_NV 0x90BE
#define GL_PATH_COVER_DEPTH_FUNC_NV 0x90BF
#define GL_PATH_DASH_OFFSET_RESET_NV 0x90B4
#define GL_MOVE_TO_RESETS_NV 0x90B5
#define GL_MOVE_TO_CONTINUES_NV 0x90B6
#define GL_CLOSE_PATH_NV 0x00
#define GL_MOVE_TO_NV 0x02
#define GL_RELATIVE_MOVE_TO_NV 0x03
#define GL_LINE_TO_NV 0x04
#define GL_RELATIVE_LINE_TO_NV 0x05
#define GL_HORIZONTAL_LINE_TO_NV 0x06
#define GL_RELATIVE_HORIZONTAL_LINE_TO_NV 0x07
#define GL_VERTICAL_LINE_TO_NV 0x08
#define GL_RELATIVE_VERTICAL_LINE_TO_NV 0x09
#define GL_QUADRATIC_CURVE_TO_NV 0x0A
#define GL_RELATIVE_QUADRATIC_CURVE_TO_NV 0x0B
#define GL_CUBIC_CURVE_TO_NV 0x0C
#define GL_RELATIVE_CUBIC_CURVE_TO_NV 0x0D
#define GL_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0E
#define GL_RELATIVE_SMOOTH_QUADRATIC_CURVE_TO_NV 0x0F
#define GL_SMOOTH_CUBIC_CURVE_TO_NV 0x10
#define GL_RELATIVE_SMOOTH_CUBIC_CURVE_TO_NV 0x11
#define GL_SMALL_CCW_ARC_TO_NV 0x12
#define GL_RELATIVE_SMALL_CCW_ARC_TO_NV 0x13
#define GL_SMALL_CW_ARC_TO_NV 0x14
#define GL_RELATIVE_SMALL_CW_ARC_TO_NV 0x15
#define GL_LARGE_CCW_ARC_TO_NV 0x16
#define GL_RELATIVE_LARGE_CCW_ARC_TO_NV 0x17
#define GL_LARGE_CW_ARC_TO_NV 0x18
#define GL_RELATIVE_LARGE_CW_ARC_TO_NV 0x19
#define GL_RESTART_PATH_NV 0xF0
#define GL_DUP_FIRST_CUBIC_CURVE_TO_NV 0xF2
#define GL_DUP_LAST_CUBIC_CURVE_TO_NV 0xF4
#define GL_RECT_NV 0xF6
#define GL_CIRCULAR_CCW_ARC_TO_NV 0xF8
#define GL_CIRCULAR_CW_ARC_TO_NV 0xFA
#define GL_CIRCULAR_TANGENT_ARC_TO_NV 0xFC
#define GL_ARC_TO_NV 0xFE
#define GL_RELATIVE_ARC_TO_NV 0xFF
#define GL_BOLD_BIT_NV 0x01
#define GL_ITALIC_BIT_NV 0x02
#define GL_GLYPH_WIDTH_BIT_NV 0x01
#define GL_GLYPH_HEIGHT_BIT_NV 0x02
#define GL_GLYPH_HORIZONTAL_BEARING_X_BIT_NV 0x04
#define GL_GLYPH_HORIZONTAL_BEARING_Y_BIT_NV 0x08
#define GL_GLYPH_HORIZONTAL_BEARING_ADVANCE_BIT_NV 0x10
#define GL_GLYPH_VERTICAL_BEARING_X_BIT_NV 0x20
#define GL_GLYPH_VERTICAL_BEARING_Y_BIT_NV 0x40
#define GL_GLYPH_VERTICAL_BEARING_ADVANCE_BIT_NV 0x80
#define GL_GLYPH_HAS_KERNING_NV 0x100
#define GL_FONT_X_MIN_BOUNDS_NV 0x00010000
#define GL_FONT_Y_MIN_BOUNDS_NV 0x00020000
#define GL_FONT_X_MAX_BOUNDS_NV 0x00040000
#define GL_FONT_Y_MAX_BOUNDS_NV 0x00080000
#define GL_FONT_UNITS_PER_EM_NV 0x00100000
#define GL_FONT_ASCENDER_NV 0x00200000
#define GL_FONT_DESCENDER_NV 0x00400000
#define GL_FONT_HEIGHT_NV 0x00800000
#define GL_FONT_MAX_ADVANCE_WIDTH_NV 0x01000000
#define GL_FONT_MAX_ADVANCE_HEIGHT_NV 0x02000000
#define GL_FONT_UNDERLINE_POSITION_NV 0x04000000
#define GL_FONT_UNDERLINE_THICKNESS_NV 0x08000000
#define GL_FONT_HAS_KERNING_NV 0x10000000

#endif

#ifdef GLES_NV_path_rendering_shared_edge

#define GL_SHARED_EDGE_NV 0xC0

#endif

#ifdef GLES_NV_pixel_buffer_object

#define GL_PIXEL_PACK_BUFFER_NV 0x88EB
#define GL_PIXEL_UNPACK_BUFFER_NV 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_NV 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_NV 0x88EF

#endif

#ifdef GLES_NV_polygon_mode

#define GL_POLYGON_MODE_NV 0x0B40
#define GL_POLYGON_OFFSET_POINT_NV 0x2A01
#define GL_POLYGON_OFFSET_LINE_NV 0x2A02
#define GL_POINT_NV 0x1B00
#define GL_LINE_NV 0x1B01
#define GL_FILL_NV 0x1B02

#endif

#ifdef GLES_NV_read_buffer

#define GL_READ_BUFFER_NV 0x0C02

#endif

#ifdef GLES_NV_sample_locations

#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV 0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343

#endif

#ifdef GLES_NV_shadow_samplers_array

#define GL_SAMPLER_2D_ARRAY_SHADOW_NV 0x8DC4

#endif

#ifdef GLES_NV_shadow_samplers_cube

#define GL_SAMPLER_CUBE_SHADOW_NV 0x8DC5

#endif

#ifdef GLES_NV_sRGB_formats

#define GL_SLUMINANCE_NV 0x8C46
#define GL_SLUMINANCE_ALPHA_NV 0x8C44
#define GL_SRGB8_NV 0x8C41
#define GL_SLUMINANCE8_NV 0x8C47
#define GL_SLUMINANCE8_ALPHA8_NV 0x8C45
#define GL_COMPRESSED_SRGB_S3TC_DXT1_NV 0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_NV 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_NV 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_NV 0x8C4F
#define GL_ETC1_SRGB8_NV 0x88EE

#endif

#ifdef GLES_NV_texture_array

#define GL_TEXTURE_2D_ARRAY_NV 0x8C1A
#define GL_TEXTURE_BINDING_2D_ARRAY_NV 0x8C1D
#define GL_MAX_ARRAY_TEXTURE_LAYERS_NV 0x88FF
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_NV 0x8CD4
#define GL_SAMPLER_2D_ARRAY_NV 0x8DC1
#define GL_UNPACK_SKIP_IMAGES_NV 0x806D
#define GL_UNPACK_IMAGE_HEIGHT_NV 0x806E

#endif

#ifdef GLES_NV_texture_border_clamp

#define GL_TEXTURE_BORDER_COLOR_NV 0x1004
#define GL_CLAMP_TO_BORDER_NV 0x812D

#endif

#ifdef GLES_NV_texture_compression_latc

#define GL_COMPRESSED_LUMINANCE_LATC1_NV 0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_NV 0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_NV 0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_NV 0x8C73

#endif

#ifdef GLES_NV_texture_compression_s3tc


#endif

#ifdef GLES_NV_viewport_array

#define GL_SCISSOR_BOX_NV 0x0C10
#define GL_VIEWPORT_NV 0x0BA2
#define GL_DEPTH_RANGE_NV 0x0B70
#define GL_SCISSOR_TEST_NV 0x0C11
#define GL_MAX_VIEWPORTS_NV 0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS_NV 0x825C
#define GL_VIEWPORT_BOUNDS_RANGE_NV 0x825D
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX_NV 0x825F

#endif

#ifdef GLES_OES_blend_equation_separate

#define GL_BLEND_EQUATION_RGB_OES GL_BLEND_EQUATION_OES
#define GL_BLEND_EQUATION_ALPHA_OES 0x883D

#endif

#ifdef GLES_OES_blend_func_separate

#define GL_BLEND_DST_RGB_OES 0x80C8
#define GL_BLEND_SRC_RGB_OES 0x80C9
#define GL_BLEND_DST_ALPHA_OES 0x80CA
#define GL_BLEND_SRC_ALPHA_OES 0x80CB

#endif

#ifdef GLES_OES_blend_subtract

#define GL_FUNC_ADD_OES 0x8006
#define GL_FUNC_SUBTRACT_OES 0x800A
#define GL_FUNC_REVERSE_SUBTRACT_OES 0x800B
#define GL_BLEND_EQUATION_OES 0x8009

#endif

#ifdef GLES_OES_compressed_ETC1_RGB8_texture

#define GL_ETC1_RGB8_OES 0x8D64

#endif

#ifdef GLES_OES_compressed_paletted_texture

#define GL_PALETTE4_RGB8_OES 0x8B90
#define GL_PALETTE4_RGBA8_OES 0x8B91
#define GL_PALETTE4_R5_G6_B5_OES 0x8B92
#define GL_PALETTE4_RGBA4_OES 0x8B93
#define GL_PALETTE4_RGB5_A1_OES 0x8B94
#define GL_PALETTE8_RGB8_OES 0x8B95
#define GL_PALETTE8_RGBA8_OES 0x8B96
#define GL_PALETTE8_R5_G6_B5_OES 0x8B97
#define GL_PALETTE8_RGBA4_OES 0x8B98
#define GL_PALETTE8_RGB5_A1_OES 0x8B99

#endif

#ifdef GLES_OES_depth24

#define GL_DEPTH_COMPONENT24_OES 0x81A6

#endif

#ifdef GLES_OES_depth32


#endif

#ifdef GLES_OES_depth_texture

#define GL_DEPTH_COMPONENT_OES 0x1902

#endif

#ifdef GLES_OES_depth_texture_cube_map


#endif

#ifdef GLES_OES_draw_texture

#define GL_TEXTURE_CROP_RECT_OES 0x8B9D

#endif

#ifdef GLES_OES_EGL_image_external


#endif

#ifdef GLES_OES_fixed_point

#define GL_FIXED_OES 0x140C

#endif

#ifdef GLES_OES_framebuffer_object

#define GL_FRAMEBUFFER_OES 0x8D40
#define GL_RENDERBUFFER_OES 0x8D41
#define GL_DEPTH_COMPONENT16_OES 0x81A5
#define GL_RGBA4_OES 0x8056
#define GL_RGB5_A1_OES 0x8057
#define GL_RGB565_OES 0x8D62
#define GL_STENCIL_INDEX1_OES 0x8D46
#define GL_STENCIL_INDEX4_OES 0x8D47
#define GL_STENCIL_INDEX8_OES 0x8D48
#define GL_RENDERBUFFER_WIDTH_OES 0x8D42
#define GL_RENDERBUFFER_HEIGHT_OES 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_OES 0x8D44
#define GL_RENDERBUFFER_RED_SIZE_OES 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_OES 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_OES 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_OES 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_OES 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_OES 0x8D55
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_OES 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_OES 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_OES 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_OES 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_OES 0x8CD4
#define GL_COLOR_ATTACHMENT0_OES 0x8CE0
#define GL_DEPTH_ATTACHMENT_OES 0x8D00
#define GL_STENCIL_ATTACHMENT_OES 0x8D20
#define GL_NONE_OES 0
#define GL_FRAMEBUFFER_COMPLETE_OES 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_OES 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_OES 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DUPLICATE_ATTACHMENT_OES 0x8CD8
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_OES 0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_OES 0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_OES 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_OES 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED_OES 0x8CDD
#define GL_FRAMEBUFFER_STATUS_ERROR_OES 0x8CDE
#define GL_FRAMEBUFFER_BINDING_OES 0x8CA6
#define GL_RENDERBUFFER_BINDING_OES 0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE_OES 0x84E8
#define GL_INVALID_FRAMEBUFFER_OPERATION_OES 0x0506

#endif

#ifdef GLES_OES_geometry_shader

#define GL_GEOMETRY_SHADER_OES 0x8DD9
#define GL_GEOMETRY_SHADER_BIT_OES 0x00000004
#define GL_GEOMETRY_VERTICES_OUT_OES 0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_OES 0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_OES 0x8DDC
#define GL_GEOMETRY_SHADER_INVOCATIONS_OES 0x887F
#define GL_LAYER_PROVOKING_VERTEX_OES 0x825E
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8DDF
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS_OES 0x8A2C
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS_OES 0x8A32
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS_OES 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS_OES 0x9124
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_OES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_OES 0x8DE1
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS_OES 0x8E5A
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_OES 0x8C29
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS_OES 0x92CF
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS_OES 0x92D5
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS_OES 0x90CD
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS_OES 0x90D7
#define GL_FIRST_VERTEX_CONVENTION_OES 0x8E4D
#define GL_LAST_VERTEX_CONVENTION_OES 0x8E4E
#define GL_UNDEFINED_VERTEX_OES 0x8260
#define GL_PRIMITIVES_GENERATED_OES 0x8C87
#define GL_LINES_ADJACENCY_OES 0x000A
#define GL_LINE_STRIP_ADJACENCY_OES 0x000B
#define GL_TRIANGLES_ADJACENCY_OES 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_OES 0x000D
#define GL_FRAMEBUFFER_DEFAULT_LAYERS_OES 0x9312
#define GL_MAX_FRAMEBUFFER_LAYERS_OES 0x9317
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_OES 0x8DA8
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_OES 0x8DA7
#define GL_REFERENCED_BY_GEOMETRY_SHADER_OES 0x9309

#endif

#ifdef GLES_OES_get_program_binary

#define GL_PROGRAM_BINARY_LENGTH_OES 0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS_OES 0x87FE
#define GL_PROGRAM_BINARY_FORMATS_OES 0x87FF

#endif

#ifdef GLES_OES_mapbuffer

#define GL_WRITE_ONLY_OES 0x88B9
#define GL_BUFFER_ACCESS_OES 0x88BB
#define GL_BUFFER_MAPPED_OES 0x88BC
#define GL_BUFFER_MAP_POINTER_OES 0x88BD

#endif

#ifdef GLES_OES_matrix_get

#define GL_MODELVIEW_MATRIX_FLOAT_AS_INT_BITS_OES 0x898D
#define GL_PROJECTION_MATRIX_FLOAT_AS_INT_BITS_OES 0x898E
#define GL_TEXTURE_MATRIX_FLOAT_AS_INT_BITS_OES 0x898F

#endif

#ifdef GLES_OES_matrix_palette

#define GL_MAX_VERTEX_UNITS_OES 0x86A4
#define GL_MAX_PALETTE_MATRICES_OES 0x8842
#define GL_MATRIX_PALETTE_OES 0x8840
#define GL_MATRIX_INDEX_ARRAY_OES 0x8844
#define GL_WEIGHT_ARRAY_OES 0x86AD
#define GL_MATRIX_INDEX_ARRAY_SIZE_OES 0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_OES 0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_OES 0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_OES 0x8849
#define GL_MATRIX_INDEX_ARRAY_BUFFER_BINDING_OES 0x8B9E
#define GL_WEIGHT_ARRAY_SIZE_OES 0x86AB
#define GL_WEIGHT_ARRAY_TYPE_OES 0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_OES 0x86AA
#define GL_WEIGHT_ARRAY_POINTER_OES 0x86AC
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_OES 0x889E

#endif

#ifdef GLES_OES_packed_depth_stencil


#endif

#ifdef GLES_OES_point_size_array

#define GL_POINT_SIZE_ARRAY_OES 0x8B9C
#define GL_POINT_SIZE_ARRAY_TYPE_OES 0x898A
#define GL_POINT_SIZE_ARRAY_STRIDE_OES 0x898B
#define GL_POINT_SIZE_ARRAY_POINTER_OES 0x898C
#define GL_POINT_SIZE_ARRAY_BUFFER_BINDING_OES 0x8B9F

#endif

#ifdef GLES_OES_point_sprite

#define GL_POINT_SPRITE_OES 0x8861
#define GL_COORD_REPLACE_OES 0x8862

#endif

#ifdef GLES_OES_primitive_bounding_box

#define GL_PRIMITIVE_BOUNDING_BOX_OES 0x92BE

#endif

#ifdef GLES_OES_read_format

#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B

#endif

#ifdef GLES_OES_required_internalformat

#define GL_ALPHA8_OES 0x803C
#define GL_LUMINANCE8_OES 0x8040
#define GL_LUMINANCE8_ALPHA8_OES 0x8045
#define GL_LUMINANCE4_ALPHA4_OES 0x8043
#define GL_RGB8_OES 0x8051

#endif

#ifdef GLES_OES_rgb8_rgba8


#endif

#ifdef GL_OES_sample_shading

#define GL_SAMPLE_SHADING_OES 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_OES 0x8C37

#endif

#ifdef GLES_OES_shader_binary

#define GL_PLATFORM_BINARY_OES 0x8D63

#endif

#ifdef GL_OES_shader_multisample_interpolation

#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_OES 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS_OES 0x8E5D

#endif

#ifdef GLES_OES_standard_derivatives

#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_OES 0x8B8B

#endif

#ifdef GLES_OES_stencil1


#endif

#ifdef GLES_OES_stencil4


#endif

#ifdef GLES_OES_stencil8


#endif

#ifdef GLES_OES_stencil_wrap

#define GL_INCR_WRAP_OES 0x8507
#define GL_DECR_WRAP_OES 0x8508

#endif

#ifdef GLES_OES_surfaceless_context

#define GL_FRAMEBUFFER_UNDEFINED_OES 0x8219

#endif

#ifdef GLES_OES_tessellation_shader

#define GL_PATCHES_OES 0x000E
#define GL_PATCH_VERTICES_OES 0x8E72
#define GL_TESS_CONTROL_OUTPUT_VERTICES_OES 0x8E75
#define GL_TESS_GEN_MODE_OES 0x8E76
#define GL_TESS_GEN_SPACING_OES 0x8E77
#define GL_TESS_GEN_VERTEX_ORDER_OES 0x8E78
#define GL_TESS_GEN_POINT_MODE_OES 0x8E79
#define GL_ISOLINES_OES 0x8E7A
#define GL_QUADS_OES 0x0007
#define GL_FRACTIONAL_ODD_OES 0x8E7B
#define GL_FRACTIONAL_EVEN_OES 0x8E7C
#define GL_MAX_PATCH_VERTICES_OES 0x8E7D
#define GL_MAX_TESS_GEN_LEVEL_OES 0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS_OES 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS_OES 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS_OES 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS_OES 0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS_OES 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS_OES 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS_OES 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS_OES 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS_OES 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS_OES 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS_OES 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS_OES 0x8E1F
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS_OES 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS_OES 0x92CE
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS_OES 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS_OES 0x92D4
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS_OES 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS_OES 0x90CC
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS_OES 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS_OES 0x90D9
#define GL_PRIMITIVE_RESTART_FOR_PATCHES_SUPPORTED_OES 0x8221
#define GL_IS_PER_PATCH_OES 0x92E7
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER_OES 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER_OES 0x9308
#define GL_TESS_EVALUATION_SHADER_OES 0x8E87
#define GL_TESS_CONTROL_SHADER_OES 0x8E88
#define GL_TESS_CONTROL_SHADER_BIT_OES 0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT_OES 0x00000010

#endif

#ifdef GLES_OES_texture_3D

#define GL_TEXTURE_3D_OES 0x806F
#define GL_TEXTURE_WRAP_R_OES 0x8072
#define GL_MAX_3D_TEXTURE_SIZE_OES 0x8073
#define GL_TEXTURE_BINDING_3D_OES 0x806A

#endif

#ifdef GLES_OES_texture_border_clamp

#define GL_TEXTURE_BORDER_COLOR_OES 0x1004
#define GL_CLAMP_TO_BORDER_OES 0x812D

#endif

#ifdef GLES_OES_texture_buffer

#define GL_TEXTURE_BUFFER_OES 0x8C2A
#define GL_TEXTURE_BUFFER_BINDING_OES 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_OES 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_OES 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_OES 0x8C2D
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT_OES 0x919F
#define GL_SAMPLER_BUFFER_OES 0x8DC2
#define GL_INT_SAMPLER_BUFFER_OES 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_OES 0x8DD8
#define GL_IMAGE_BUFFER_OES 0x9051
#define GL_INT_IMAGE_BUFFER_OES 0x905C
#define GL_UNSIGNED_INT_IMAGE_BUFFER_OES 0x9067
#define GL_TEXTURE_BUFFER_OFFSET_OES 0x919D
#define GL_TEXTURE_BUFFER_SIZE_OES 0x919E

#endif

#ifdef GLES_OES_texture_compression_astc

#define GL_COMPRESSED_RGBA_ASTC_3x3x3_OES 0x93C0
#define GL_COMPRESSED_RGBA_ASTC_4x3x3_OES 0x93C1
#define GL_COMPRESSED_RGBA_ASTC_4x4x3_OES 0x93C2
#define GL_COMPRESSED_RGBA_ASTC_4x4x4_OES 0x93C3
#define GL_COMPRESSED_RGBA_ASTC_5x4x4_OES 0x93C4
#define GL_COMPRESSED_RGBA_ASTC_5x5x4_OES 0x93C5
#define GL_COMPRESSED_RGBA_ASTC_5x5x5_OES 0x93C6
#define GL_COMPRESSED_RGBA_ASTC_6x5x5_OES 0x93C7
#define GL_COMPRESSED_RGBA_ASTC_6x6x5_OES 0x93C8
#define GL_COMPRESSED_RGBA_ASTC_6x6x6_OES 0x93C9
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_3x3x3_OES 0x93E0
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x3x3_OES 0x93E1
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x3_OES 0x93E2
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_4x4x4_OES 0x93E3
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x4x4_OES 0x93E4
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x4_OES 0x93E5
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_5x5x5_OES 0x93E6
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x5x5_OES 0x93E7
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x5_OES 0x93E8
#define GL_COMPRESSED_SRGB8_ALPHA8_ASTC_6x6x6_OES 0x93E9

#endif

#ifdef GLES_OES_texture_cube_map

#define GL_TEXTURE_GEN_MODE_OES 0x2500
#define GL_NORMAL_MAP_OES 0x8511
#define GL_REFLECTION_MAP_OES 0x8512
#define GL_TEXTURE_CUBE_MAP_OES 0x8513
#define GL_TEXTURE_GEN_STR_OES 0x8D60
#define GL_TEXTURE_BINDING_CUBE_MAP_OES 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_OES 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_OES 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_OES 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_OES 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_OES 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_OES 0x851A
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_OES 0x851C

#endif

#ifdef GLES_OES_texture_cube_map_array

#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_OES 0x900A
#define GL_SAMPLER_CUBE_MAP_ARRAY_OES 0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_OES 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_OES 0x900F
#define GL_IMAGE_CUBE_MAP_ARRAY_OES 0x9054
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_OES 0x905F
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_OES 0x906A

#endif

#ifdef GLES_OES_texture_float

#define GL_FLOAT 0x1406

#endif

#ifdef GLES_OES_texture_half_float

#define GL_HALF_FLOAT_OES 0x8D61

#endif

#ifdef GLES_OES_texture_mirrored_repeat

#define GL_MIRRORED_REPEAT_OES 0x8370

#endif

#ifdef GL_OES_texture_stencil8

#define GL_STENCIL_INDEX 0x1901
#define GL_STENCIL_INDEX8 0x8D48

#endif

#ifdef GL_OES_texture_storage_multisample_2d_array

#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9102
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D

#endif

#ifdef GLES_OES_texture_view

#define GL_TEXTURE_VIEW_MIN_LEVEL_OES 0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS_OES 0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER_OES 0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS_OES 0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS_OES 0x82DF

#endif

#ifdef GLES_OES_vertex_array_object

#define GL_VERTEX_ARRAY_BINDING_OES 0x85B5

#endif

#ifdef GLES_OES_vertex_half_float


#endif

#ifdef GLES_OES_vertex_type_10_10_10_2

#define GL_UNSIGNED_INT_10_10_10_2_OES 0x8DF6
#define GL_INT_10_10_10_2_OES 0x8DF7

#endif

#ifdef GLES_OVR_multiview

#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR 0x9631
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR 0x9633

#endif

#ifdef GLES_QCOM_binning_control

#define GL_BINNING_CONTROL_HINT_QCOM 0x8FB0
#define GL_CPU_OPTIMIZED_QCOM 0x8FB1
#define GL_GPU_OPTIMIZED_QCOM 0x8FB2
#define GL_RENDER_DIRECT_TO_FRAMEBUFFER_QCOM 0x8FB3
#define GL_DONT_CARE 0x1100

#endif

#ifdef GLES_QCOM_extended_get

#define GL_TEXTURE_WIDTH_QCOM 0x8BD2
#define GL_TEXTURE_HEIGHT_QCOM 0x8BD3
#define GL_TEXTURE_DEPTH_QCOM 0x8BD4
#define GL_TEXTURE_INTERNAL_FORMAT_QCOM 0x8BD5
#define GL_TEXTURE_FORMAT_QCOM 0x8BD6
#define GL_TEXTURE_TYPE_QCOM 0x8BD7
#define GL_TEXTURE_IMAGE_VALID_QCOM 0x8BD8
#define GL_TEXTURE_NUM_LEVELS_QCOM 0x8BD9
#define GL_TEXTURE_TARGET_QCOM 0x8BDA
#define GL_TEXTURE_OBJECT_VALID_QCOM 0x8BDB
#define GL_STATE_RESTORE 0x8BDC

#endif

#ifdef GLES_QCOM_performance_monitor_global_mode

#define GL_PERFMON_GLOBAL_MODE_QCOM 0x8FA0

#endif

#ifdef GLES_QCOM_tiled_rendering

#define GL_COLOR_BUFFER_BIT0_QCOM 0x00000001
#define GL_COLOR_BUFFER_BIT1_QCOM 0x00000002
#define GL_COLOR_BUFFER_BIT2_QCOM 0x00000004
#define GL_COLOR_BUFFER_BIT3_QCOM 0x00000008
#define GL_COLOR_BUFFER_BIT4_QCOM 0x00000010
#define GL_COLOR_BUFFER_BIT5_QCOM 0x00000020
#define GL_COLOR_BUFFER_BIT6_QCOM 0x00000040
#define GL_COLOR_BUFFER_BIT7_QCOM 0x00000080
#define GL_DEPTH_BUFFER_BIT0_QCOM 0x00000100
#define GL_DEPTH_BUFFER_BIT1_QCOM 0x00000200
#define GL_DEPTH_BUFFER_BIT2_QCOM 0x00000400
#define GL_DEPTH_BUFFER_BIT3_QCOM 0x00000800
#define GL_DEPTH_BUFFER_BIT4_QCOM 0x00001000
#define GL_DEPTH_BUFFER_BIT5_QCOM 0x00002000
#define GL_DEPTH_BUFFER_BIT6_QCOM 0x00004000
#define GL_DEPTH_BUFFER_BIT7_QCOM 0x00008000
#define GL_STENCIL_BUFFER_BIT0_QCOM 0x00010000
#define GL_STENCIL_BUFFER_BIT1_QCOM 0x00020000
#define GL_STENCIL_BUFFER_BIT2_QCOM 0x00040000
#define GL_STENCIL_BUFFER_BIT3_QCOM 0x00080000
#define GL_STENCIL_BUFFER_BIT4_QCOM 0x00100000
#define GL_STENCIL_BUFFER_BIT5_QCOM 0x00200000
#define GL_STENCIL_BUFFER_BIT6_QCOM 0x00400000
#define GL_STENCIL_BUFFER_BIT7_QCOM 0x00800000
#define GL_MULTISAMPLE_BUFFER_BIT0_QCOM 0x01000000
#define GL_MULTISAMPLE_BUFFER_BIT1_QCOM 0x02000000
#define GL_MULTISAMPLE_BUFFER_BIT2_QCOM 0x04000000
#define GL_MULTISAMPLE_BUFFER_BIT3_QCOM 0x08000000
#define GL_MULTISAMPLE_BUFFER_BIT4_QCOM 0x10000000
#define GL_MULTISAMPLE_BUFFER_BIT5_QCOM 0x20000000
#define GL_MULTISAMPLE_BUFFER_BIT6_QCOM 0x40000000
#define GL_MULTISAMPLE_BUFFER_BIT7_QCOM 0x80000000

#endif

#ifdef GLES_QCOM_writeonly_rendering

#define GL_WRITEONLY_RENDERING_QCOM 0x8823

#endif

#ifdef GLES_VERSION_1_0

#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_FALSE 0
#define GL_TRUE 1
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_ZERO 0
#define GL_ONE 1
#define GL_SRC_COLOR 0x0300
#define GL_ONE_MINUS_SRC_COLOR 0x0301
#define GL_SRC_ALPHA 0x0302
#define GL_ONE_MINUS_SRC_ALPHA 0x0303
#define GL_DST_ALPHA 0x0304
#define GL_ONE_MINUS_DST_ALPHA 0x0305
#define GL_DST_COLOR 0x0306
#define GL_ONE_MINUS_DST_COLOR 0x0307
#define GL_SRC_ALPHA_SATURATE 0x0308
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_FRONT_AND_BACK 0x0408
#define GL_FOG 0x0B60
#define GL_LIGHTING 0x0B50
#define GL_CULL_FACE 0x0B44
#define GL_ALPHA_TEST 0x0BC0
#define GL_BLEND 0x0BE2
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_DITHER 0x0BD0
#define GL_STENCIL_TEST 0x0B90
#define GL_DEPTH_TEST 0x0B71
#define GL_POINT_SMOOTH 0x0B10
#define GL_LINE_SMOOTH 0x0B20
#define GL_SCISSOR_TEST 0x0C11
#define GL_COLOR_MATERIAL 0x0B57
#define GL_NORMALIZE 0x0BA1
#define GL_RESCALE_NORMAL 0x803A
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_VERTEX_ARRAY 0x8074
#define GL_NORMAL_ARRAY 0x8075
#define GL_COLOR_ARRAY 0x8076
#define GL_TEXTURE_COORD_ARRAY 0x8078
#define GL_MULTISAMPLE 0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_OUT_OF_MEMORY 0x0505
#define GL_EXP 0x0800
#define GL_EXP2 0x0801
#define GL_FOG_DENSITY 0x0B62
#define GL_FOG_START 0x0B63
#define GL_FOG_END 0x0B64
#define GL_FOG_MODE 0x0B65
#define GL_FOG_COLOR 0x0B66
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_MAX_LIGHTS 0x0D31
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#define GL_MAX_TEXTURE_UNITS 0x84E2
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#define GL_POINT_SMOOTH_HINT 0x0C51
#define GL_LINE_SMOOTH_HINT 0x0C52
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#define GL_FOG_HINT 0x0C54
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#define GL_AMBIENT 0x1200
#define GL_DIFFUSE 0x1201
#define GL_SPECULAR 0x1202
#define GL_POSITION 0x1203
#define GL_SPOT_DIRECTION 0x1204
#define GL_SPOT_EXPONENT 0x1205
#define GL_SPOT_CUTOFF 0x1206
#define GL_CONSTANT_ATTENUATION 0x1207
#define GL_LINEAR_ATTENUATION 0x1208
#define GL_QUADRATIC_ATTENUATION 0x1209
#define GL_UNSIGNED_BYTE 0x1401
#define GL_FIXED 0x140C
#define GL_CLEAR 0x1500
#define GL_AND 0x1501
#define GL_AND_REVERSE 0x1502
#define GL_COPY 0x1503
#define GL_AND_INVERTED 0x1504
#define GL_NOOP 0x1505
#define GL_XOR 0x1506
#define GL_OR 0x1507
#define GL_NOR 0x1508
#define GL_EQUIV 0x1509
#define GL_INVERT 0x150A
#define GL_OR_REVERSE 0x150B
#define GL_COPY_INVERTED 0x150C
#define GL_OR_INVERTED 0x150D
#define GL_NAND 0x150E
#define GL_SET 0x150F
#define GL_EMISSION 0x1600
#define GL_SHININESS 0x1601
#define GL_AMBIENT_AND_DIFFUSE 0x1602
#define GL_MODELVIEW 0x1700
#define GL_PROJECTION 0x1701
#define GL_TEXTURE 0x1702
#define GL_ALPHA 0x1906
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_FLAT 0x1D00
#define GL_SMOOTH 0x1D01
#define GL_KEEP 0x1E00
#define GL_REPLACE 0x1E01
#define GL_INCR 0x1E02
#define GL_DECR 0x1E03
#define GL_VENDOR 0x1F00
#define GL_RENDERER 0x1F01
#define GL_VERSION 0x1F02
#define GL_EXTENSIONS 0x1F03
#define GL_MODULATE 0x2100
#define GL_DECAL 0x2101
#define GL_ADD 0x0104
#define GL_TEXTURE_ENV_MODE 0x2200
#define GL_TEXTURE_ENV_COLOR 0x2201
#define GL_TEXTURE_ENV 0x2300
#define GL_NEAREST 0x2600
#define GL_LINEAR 0x2601
#define GL_NEAREST_MIPMAP_NEAREST 0x2700
#define GL_LINEAR_MIPMAP_NEAREST 0x2701
#define GL_NEAREST_MIPMAP_LINEAR 0x2702
#define GL_LINEAR_MIPMAP_LINEAR 0x2703
#define GL_TEXTURE_MAG_FILTER 0x2800
#define GL_TEXTURE_MIN_FILTER 0x2801
#define GL_TEXTURE_WRAP_S 0x2802
#define GL_TEXTURE_WRAP_T 0x2803
#define GL_TEXTURE0 0x84C0
#define GL_TEXTURE1 0x84C1
#define GL_TEXTURE2 0x84C2
#define GL_TEXTURE3 0x84C3
#define GL_TEXTURE4 0x84C4
#define GL_TEXTURE5 0x84C5
#define GL_TEXTURE6 0x84C6
#define GL_TEXTURE7 0x84C7
#define GL_TEXTURE8 0x84C8
#define GL_TEXTURE9 0x84C9
#define GL_TEXTURE10 0x84CA
#define GL_TEXTURE11 0x84CB
#define GL_TEXTURE12 0x84CC
#define GL_TEXTURE13 0x84CD
#define GL_TEXTURE14 0x84CE
#define GL_TEXTURE15 0x84CF
#define GL_TEXTURE16 0x84D0
#define GL_TEXTURE17 0x84D1
#define GL_TEXTURE18 0x84D2
#define GL_TEXTURE19 0x84D3
#define GL_TEXTURE20 0x84D4
#define GL_TEXTURE21 0x84D5
#define GL_TEXTURE22 0x84D6
#define GL_TEXTURE23 0x84D7
#define GL_TEXTURE24 0x84D8
#define GL_TEXTURE25 0x84D9
#define GL_TEXTURE26 0x84DA
#define GL_TEXTURE27 0x84DB
#define GL_TEXTURE28 0x84DC
#define GL_TEXTURE29 0x84DD
#define GL_TEXTURE30 0x84DE
#define GL_TEXTURE31 0x84DF
#define GL_REPEAT 0x2901
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_LIGHT0 0x4000
#define GL_LIGHT1 0x4001
#define GL_LIGHT2 0x4002
#define GL_LIGHT3 0x4003
#define GL_LIGHT4 0x4004
#define GL_LIGHT5 0x4005
#define GL_LIGHT6 0x4006
#define GL_LIGHT7 0x4007

#endif

#ifdef GLES_VERSION_1_1

#define GL_CLIP_PLANE0 0x3000
#define GL_CLIP_PLANE1 0x3001
#define GL_CLIP_PLANE2 0x3002
#define GL_CLIP_PLANE3 0x3003
#define GL_CLIP_PLANE4 0x3004
#define GL_CLIP_PLANE5 0x3005
#define GL_CURRENT_COLOR 0x0B00
#define GL_CURRENT_NORMAL 0x0B02
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#define GL_POINT_SIZE 0x0B11
#define GL_POINT_SIZE_MIN 0x8126
#define GL_POINT_SIZE_MAX 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#define GL_POINT_DISTANCE_ATTENUATION 0x8129
#define GL_LINE_WIDTH 0x0B21
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_SHADE_MODEL 0x0B54
#define GL_DEPTH_RANGE 0x0B70
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_MATRIX_MODE 0x0BA0
#define GL_VIEWPORT 0x0BA2
#define GL_MODELVIEW_MATRIX 0x0BA6
#define GL_PROJECTION_MATRIX 0x0BA7
#define GL_TEXTURE_MATRIX 0x0BA8
#define GL_ALPHA_TEST_FUNC 0x0BC1
#define GL_ALPHA_TEST_REF 0x0BC2
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_LOGIC_OP_MODE 0x0BF0
#define GL_SCISSOR_BOX 0x0C10
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_MAX_CLIP_PLANES 0x0D32
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_VERTEX_ARRAY_SIZE 0x807A
#define GL_VERTEX_ARRAY_TYPE 0x807B
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#define GL_NORMAL_ARRAY_TYPE 0x807E
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#define GL_COLOR_ARRAY_SIZE 0x8081
#define GL_COLOR_ARRAY_TYPE 0x8082
#define GL_COLOR_ARRAY_STRIDE 0x8083
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#define GL_VERTEX_ARRAY_POINTER 0x808E
#define GL_NORMAL_ARRAY_POINTER 0x808F
#define GL_COLOR_ARRAY_POINTER 0x8090
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLES 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_GENERATE_MIPMAP_HINT 0x8192
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_STATIC_DRAW 0x88E4
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_SUBTRACT 0x84E7
#define GL_COMBINE 0x8570
#define GL_COMBINE_RGB 0x8571
#define GL_COMBINE_ALPHA 0x8572
#define GL_RGB_SCALE 0x8573
#define GL_ADD_SIGNED 0x8574
#define GL_INTERPOLATE 0x8575
#define GL_CONSTANT 0x8576
#define GL_PRIMARY_COLOR 0x8577
#define GL_PREVIOUS 0x8578
#define GL_OPERAND0_RGB 0x8590
#define GL_OPERAND1_RGB 0x8591
#define GL_OPERAND2_RGB 0x8592
#define GL_OPERAND0_ALPHA 0x8598
#define GL_OPERAND1_ALPHA 0x8599
#define GL_OPERAND2_ALPHA 0x859A
#define GL_ALPHA_SCALE 0x0D1C
#define GL_SRC0_RGB 0x8580
#define GL_SRC1_RGB 0x8581
#define GL_SRC2_RGB 0x8582
#define GL_SRC0_ALPHA 0x8588
#define GL_SRC1_ALPHA 0x8589
#define GL_SRC2_ALPHA 0x858A
#define GL_DOT3_RGB 0x86AE
#define GL_DOT3_RGBA 0x86AF

#endif

#ifdef GLES_VERSION_2_0

#define GL_FUNC_ADD 0x8006
#define GL_BLEND_EQUATION 0x8009
#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_FUNC_SUBTRACT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_BLEND_COLOR 0x8005
#define GL_STREAM_DRAW 0x88E0
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#define GL_INT 0x1404
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#define GL_MAX_VARYING_VECTORS 0x8DFC
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#define GL_SHADER_TYPE 0x8B4F
#define GL_DELETE_STATUS 0x8B80
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_MIRRORED_REPEAT 0x8370
#define GL_FLOAT_VEC2 0x8B50
#define GL_FLOAT_VEC3 0x8B51
#define GL_FLOAT_VEC4 0x8B52
#define GL_INT_VEC2 0x8B53
#define GL_INT_VEC3 0x8B54
#define GL_INT_VEC4 0x8B55
#define GL_BOOL 0x8B56
#define GL_BOOL_VEC2 0x8B57
#define GL_BOOL_VEC3 0x8B58
#define GL_BOOL_VEC4 0x8B59
#define GL_FLOAT_MAT2 0x8B5A
#define GL_FLOAT_MAT3 0x8B5B
#define GL_FLOAT_MAT4 0x8B5C
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_CUBE 0x8B60
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_COMPILE_STATUS 0x8B81
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_SHADER_COMPILER 0x8DFA
#define GL_SHADER_BINARY_FORMATS 0x8DF8
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#define GL_LOW_FLOAT 0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT 0x8DF2
#define GL_LOW_INT 0x8DF3
#define GL_MEDIUM_INT 0x8DF4
#define GL_HIGH_INT 0x8DF5
#define GL_FRAMEBUFFER 0x8D40
#define GL_RENDERBUFFER 0x8D41
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGB565 0x8D62
#define GL_RENDERBUFFER_WIDTH 0x8D42
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_COLOR_ATTACHMENT0 0x8CE0
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_ATTACHMENT 0x8D20
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS 0x8CD9
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#define GL_RENDERBUFFER_BINDING 0x8CA7
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506

#endif

#ifdef GLES_VERSION_3_0

#define GL_READ_BUFFER 0x0C02
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802
#define GL_RED 0x1903
#define GL_RGB8 0x8051
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_TEXTURE_BINDING_3D 0x806A
#define GL_UNPACK_SKIP_IMAGES 0x806D
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#define GL_TEXTURE_WRAP_R 0x8072
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_MIN 0x8007
#define GL_MAX 0x8008
#define GL_DEPTH_COMPONENT24 0x81A6
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#define GL_TEXTURE_COMPARE_MODE 0x884C
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#define GL_CURRENT_QUERY 0x8865
#define GL_QUERY_RESULT 0x8866
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#define GL_BUFFER_MAPPED 0x88BC
#define GL_BUFFER_MAP_POINTER 0x88BD
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_MAX_DRAW_BUFFERS 0x8824
#define GL_DRAW_BUFFER0 0x8825
#define GL_DRAW_BUFFER1 0x8826
#define GL_DRAW_BUFFER2 0x8827
#define GL_DRAW_BUFFER3 0x8828
#define GL_DRAW_BUFFER4 0x8829
#define GL_DRAW_BUFFER5 0x882A
#define GL_DRAW_BUFFER6 0x882B
#define GL_DRAW_BUFFER7 0x882C
#define GL_DRAW_BUFFER8 0x882D
#define GL_DRAW_BUFFER9 0x882E
#define GL_DRAW_BUFFER10 0x882F
#define GL_DRAW_BUFFER11 0x8830
#define GL_DRAW_BUFFER12 0x8831
#define GL_DRAW_BUFFER13 0x8832
#define GL_DRAW_BUFFER14 0x8833
#define GL_DRAW_BUFFER15 0x8834
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_PIXEL_PACK_BUFFER 0x88EB
#define GL_PIXEL_UNPACK_BUFFER 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING 0x88EF
#define GL_FLOAT_MAT2x3 0x8B65
#define GL_FLOAT_MAT2x4 0x8B66
#define GL_FLOAT_MAT3x2 0x8B67
#define GL_FLOAT_MAT3x4 0x8B68
#define GL_FLOAT_MAT4x2 0x8B69
#define GL_FLOAT_MAT4x3 0x8B6A
#define GL_SRGB 0x8C40
#define GL_SRGB8 0x8C41
#define GL_SRGB8_ALPHA8 0x8C43
#define GL_COMPARE_REF_TO_TEXTURE 0x884E
#define GL_MAJOR_VERSION 0x821B
#define GL_MINOR_VERSION 0x821C
#define GL_NUM_EXTENSIONS 0x821D
#define GL_RGBA32F 0x8814
#define GL_RGB32F 0x8815
#define GL_RGBA16F 0x881A
#define GL_RGB16F 0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#define GL_MAX_VARYING_COMPONENTS 0x8B4B
#define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#define GL_R11F_G11F_B10F 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B
#define GL_RGB9_E5 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS 0x8C8C
#define GL_SEPARATE_ATTRIBS 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI 0x8D70
#define GL_RGB32UI 0x8D71
#define GL_RGBA16UI 0x8D76
#define GL_RGB16UI 0x8D77
#define GL_RGBA8UI 0x8D7C
#define GL_RGB8UI 0x8D7D
#define GL_RGBA32I 0x8D82
#define GL_RGB32I 0x8D83
#define GL_RGBA16I 0x8D88
#define GL_RGB16I 0x8D89
#define GL_RGBA8I 0x8D8E
#define GL_RGB8I 0x8D8F
#define GL_RED_INTEGER 0x8D94
#define GL_RGB_INTEGER 0x8D98
#define GL_RGBA_INTEGER 0x8D99
#define GL_SAMPLER_2D_ARRAY 0x8DC1
#define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#define GL_UNSIGNED_INT_VEC2 0x8DC6
#define GL_UNSIGNED_INT_VEC3 0x8DC7
#define GL_UNSIGNED_INT_VEC4 0x8DC8
#define GL_INT_SAMPLER_2D 0x8DCA
#define GL_INT_SAMPLER_3D 0x8DCB
#define GL_INT_SAMPLER_CUBE 0x8DCC
#define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#define GL_BUFFER_ACCESS_FLAGS 0x911F
#define GL_BUFFER_MAP_LENGTH 0x9120
#define GL_BUFFER_MAP_OFFSET 0x9121
#define GL_DEPTH_COMPONENT32F 0x8CAC
#define GL_DEPTH32F_STENCIL8 0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD
#define GL_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING 0x8210
#define GL_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE 0x8211
#define GL_FRAMEBUFFER_ATTACHMENT_RED_SIZE 0x8212
#define GL_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE 0x8213
#define GL_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE 0x8214
#define GL_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE 0x8215
#define GL_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE 0x8216
#define GL_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE 0x8217
#define GL_FRAMEBUFFER_DEFAULT 0x8218
#define GL_FRAMEBUFFER_UNDEFINED 0x8219
#define GL_DEPTH_STENCIL_ATTACHMENT 0x821A
#define GL_DEPTH_STENCIL 0x84F9
#define GL_UNSIGNED_INT_24_8 0x84FA
#define GL_DEPTH24_STENCIL8 0x88F0
#define GL_UNSIGNED_NORMALIZED 0x8C17
#define GL_DRAW_FRAMEBUFFER_BINDING GL_FRAMEBUFFER_BINDING
#define GL_READ_FRAMEBUFFER 0x8CA8
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#define GL_RENDERBUFFER_SAMPLES 0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#define GL_COLOR_ATTACHMENT1 0x8CE1
#define GL_COLOR_ATTACHMENT2 0x8CE2
#define GL_COLOR_ATTACHMENT3 0x8CE3
#define GL_COLOR_ATTACHMENT4 0x8CE4
#define GL_COLOR_ATTACHMENT5 0x8CE5
#define GL_COLOR_ATTACHMENT6 0x8CE6
#define GL_COLOR_ATTACHMENT7 0x8CE7
#define GL_COLOR_ATTACHMENT8 0x8CE8
#define GL_COLOR_ATTACHMENT9 0x8CE9
#define GL_COLOR_ATTACHMENT10 0x8CEA
#define GL_COLOR_ATTACHMENT11 0x8CEB
#define GL_COLOR_ATTACHMENT12 0x8CEC
#define GL_COLOR_ATTACHMENT13 0x8CED
#define GL_COLOR_ATTACHMENT14 0x8CEE
#define GL_COLOR_ATTACHMENT15 0x8CEF
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES 0x8D57
#define GL_HALF_FLOAT 0x140B
#define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT 0x0020
#define GL_RG 0x8227
#define GL_RG_INTEGER 0x8228
#define GL_R8 0x8229
#define GL_RG8 0x822B
#define GL_R16F 0x822D
#define GL_R32F 0x822E
#define GL_RG16F 0x822F
#define GL_RG32F 0x8230
#define GL_R8I 0x8231
#define GL_R8UI 0x8232
#define GL_R16I 0x8233
#define GL_R16UI 0x8234
#define GL_R32I 0x8235
#define GL_R32UI 0x8236
#define GL_RG8I 0x8237
#define GL_RG8UI 0x8238
#define GL_RG16I 0x8239
#define GL_RG16UI 0x823A
#define GL_RG32I 0x823B
#define GL_RG32UI 0x823C
#define GL_VERTEX_ARRAY_BINDING 0x85B5
#define GL_RGB8_SNORM 0x8F96
#define GL_SIGNED_NORMALIZED 0x8F9C
#define GL_PRIMITIVE_RESTART_FIXED_INDEX 0x8D69
#define GL_COPY_READ_BUFFER 0x8F36
#define GL_COPY_WRITE_BUFFER 0x8F37
#define GL_COPY_READ_BUFFER_BINDING GL_COPY_READ_BUFFER
#define GL_COPY_WRITE_BUFFER_BINDING GL_COPY_WRITE_BUFFER
#define GL_UNIFORM_BUFFER 0x8A11
#define GL_UNIFORM_BUFFER_BINDING 0x8A28
#define GL_UNIFORM_BUFFER_START 0x8A29
#define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#define GL_UNIFORM_TYPE 0x8A37
#define GL_UNIFORM_SIZE 0x8A38
#define GL_UNIFORM_NAME_LENGTH 0x8A39
#define GL_UNIFORM_BLOCK_INDEX 0x8A3A
#define GL_UNIFORM_OFFSET 0x8A3B
#define GL_UNIFORM_ARRAY_STRIDE 0x8A3C
#define GL_UNIFORM_MATRIX_STRIDE 0x8A3D
#define GL_UNIFORM_IS_ROW_MAJOR 0x8A3E
#define GL_UNIFORM_BLOCK_BINDING 0x8A3F
#define GL_UNIFORM_BLOCK_DATA_SIZE 0x8A40
#define GL_UNIFORM_BLOCK_NAME_LENGTH 0x8A41
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORMS 0x8A42
#define GL_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES 0x8A43
#define GL_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER 0x8A44
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX 0xFFFFFFFFu
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#define GL_MAX_SERVER_WAIT_TIMEOUT 0x9111
#define GL_OBJECT_TYPE 0x9112
#define GL_SYNC_CONDITION 0x9113
#define GL_SYNC_STATUS 0x9114
#define GL_SYNC_FLAGS 0x9115
#define GL_SYNC_FENCE 0x9116
#define GL_SYNC_GPU_COMMANDS_COMPLETE 0x9117
#define GL_UNSIGNALED 0x9118
#define GL_SIGNALED 0x9119
#define GL_ALREADY_SIGNALED 0x911A
#define GL_TIMEOUT_EXPIRED 0x911B
#define GL_CONDITION_SATISFIED 0x911C
#define GL_WAIT_FAILED 0x911D
#define GL_SYNC_FLUSH_COMMANDS_BIT 0x00000001
#define GL_TIMEOUT_IGNORED 0xFFFFFFFFFFFFFFFFull
#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE
#define GL_ANY_SAMPLES_PASSED 0x8C2F
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_SAMPLER_BINDING 0x8919
#define GL_RGB10_A2UI 0x906F
#define GL_TEXTURE_SWIZZLE_R 0x8E42
#define GL_TEXTURE_SWIZZLE_G 0x8E43
#define GL_TEXTURE_SWIZZLE_B 0x8E44
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_INT_2_10_10_10_REV 0x8D9F
#define GL_TRANSFORM_FEEDBACK 0x8E22
#define GL_TRANSFORM_FEEDBACK_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING 0x8E25
#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH 0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS 0x87FE
#define GL_PROGRAM_BINARY_FORMATS 0x87FF
#define GL_COMPRESSED_R11_EAC 0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC 0x9271
#define GL_COMPRESSED_RG11_EAC 0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC 0x9273
#define GL_COMPRESSED_RGB8_ETC2 0x9274
#define GL_COMPRESSED_SRGB8_ETC2 0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC 0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_TEXTURE_IMMUTABLE_FORMAT 0x912F
#define GL_MAX_ELEMENT_INDEX 0x8D6B
#define GL_NUM_SAMPLE_COUNTS 0x9380
#define GL_TEXTURE_IMMUTABLE_LEVELS 0x82DF

#endif

#ifdef GLES_VERSION_3_1

#define GL_COMPUTE_SHADER 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS 0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS 0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS 0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_WORK_GROUP_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT 0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE 0x91BF
#define GL_COMPUTE_WORK_GROUP_SIZE 0x8267
#define GL_DISPATCH_INDIRECT_BUFFER 0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT 0x00000020
#define GL_DRAW_INDIRECT_BUFFER 0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING 0x8F43
#define GL_MAX_UNIFORM_LOCATIONS 0x826E
#define GL_FRAMEBUFFER_DEFAULT_WIDTH 0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT 0x9311
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES 0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH 0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT 0x9316
#define GL_MAX_FRAMEBUFFER_SAMPLES 0x9318
#define GL_UNIFORM 0x92E1
#define GL_UNIFORM_BLOCK 0x92E2
#define GL_PROGRAM_INPUT 0x92E3
#define GL_PROGRAM_OUTPUT 0x92E4
#define GL_BUFFER_VARIABLE 0x92E5
#define GL_SHADER_STORAGE_BLOCK 0x92E6
#define GL_ATOMIC_COUNTER_BUFFER 0x92C0
#define GL_TRANSFORM_FEEDBACK_VARYING 0x92F4
#define GL_ACTIVE_RESOURCES 0x92F5
#define GL_MAX_NAME_LENGTH 0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES 0x92F7
#define GL_NAME_LENGTH 0x92F9
#define GL_TYPE 0x92FA
#define GL_ARRAY_SIZE 0x92FB
#define GL_OFFSET 0x92FC
#define GL_BLOCK_INDEX 0x92FD
#define GL_ARRAY_STRIDE 0x92FE
#define GL_MATRIX_STRIDE 0x92FF
#define GL_IS_ROW_MAJOR 0x9300
#define GL_ATOMIC_COUNTER_BUFFER_INDEX 0x9301
#define GL_BUFFER_BINDING 0x9302
#define GL_BUFFER_DATA_SIZE 0x9303
#define GL_NUM_ACTIVE_VARIABLES 0x9304
#define GL_ACTIVE_VARIABLES 0x9305
#define GL_REFERENCED_BY_VERTEX_SHADER 0x9306
#define GL_REFERENCED_BY_FRAGMENT_SHADER 0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER 0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE 0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE 0x930D
#define GL_LOCATION 0x930E
#define GL_VERTEX_SHADER_BIT 0x00000001
#define GL_FRAGMENT_SHADER_BIT 0x00000002
#define GL_ALL_SHADER_BITS 0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE 0x8258
#define GL_ACTIVE_PROGRAM 0x8259
#define GL_PROGRAM_PIPELINE_BINDING 0x825A
#define GL_ATOMIC_COUNTER_BUFFER_BINDING 0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START 0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE 0x92C3
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS 0x92D2
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS 0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS 0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS 0x92D9
#define GL_UNSIGNED_INT_ATOMIC_COUNTER 0x92DB
#define GL_MAX_IMAGE_UNITS 0x8F38
#define GL_MAX_VERTEX_IMAGE_UNIFORMS 0x90CA
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS 0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS 0x90CF
#define GL_IMAGE_BINDING_NAME 0x8F3A
#define GL_IMAGE_BINDING_LEVEL 0x8F3B
#define GL_IMAGE_BINDING_LAYERED 0x8F3C
#define GL_IMAGE_BINDING_LAYER 0x8F3D
#define GL_IMAGE_BINDING_ACCESS 0x8F3E
#define GL_IMAGE_BINDING_FORMAT 0x906E
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT 0x00000002
#define GL_UNIFORM_BARRIER_BIT 0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT 0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT 0x00000020
#define GL_COMMAND_BARRIER_BIT 0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT 0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT 0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT 0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT 0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT 0x00001000
#define GL_ALL_BARRIER_BITS 0xFFFFFFFF
#define GL_IMAGE_2D 0x904D
#define GL_IMAGE_3D 0x904E
#define GL_IMAGE_CUBE 0x9050
#define GL_IMAGE_2D_ARRAY 0x9053
#define GL_INT_IMAGE_2D 0x9058
#define GL_INT_IMAGE_3D 0x9059
#define GL_INT_IMAGE_CUBE 0x905B
#define GL_INT_IMAGE_2D_ARRAY 0x905E
#define GL_UNSIGNED_INT_IMAGE_2D 0x9063
#define GL_UNSIGNED_INT_IMAGE_3D 0x9064
#define GL_UNSIGNED_INT_IMAGE_CUBE 0x9066
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY 0x9069
#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_READ_ONLY 0x88B8
#define GL_WRITE_ONLY 0x88B9
#define GL_READ_WRITE 0x88BA
#define GL_SHADER_STORAGE_BUFFER 0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING 0x90D3
#define GL_SHADER_STORAGE_BUFFER_START 0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE 0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE 0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT 0x00002000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES 0x8F39
#define GL_DEPTH_STENCIL_TEXTURE_MODE 0x90EA
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_SAMPLE_POSITION 0x8E50
#define GL_SAMPLE_MASK 0x8E51
#define GL_SAMPLE_MASK_VALUE 0x8E52
#define GL_TEXTURE_2D_MULTISAMPLE 0x9100
#define GL_MAX_SAMPLE_MASK_WORDS 0x8E59
#define GL_MAX_COLOR_TEXTURE_SAMPLES 0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES 0x910F
#define GL_MAX_INTEGER_SAMPLES 0x9110
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_SAMPLES 0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_TEXTURE_WIDTH 0x1000
#define GL_TEXTURE_HEIGHT 0x1001
#define GL_TEXTURE_DEPTH 0x8071
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#define GL_TEXTURE_RED_SIZE 0x805C
#define GL_TEXTURE_GREEN_SIZE 0x805D
#define GL_TEXTURE_BLUE_SIZE 0x805E
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#define GL_TEXTURE_DEPTH_SIZE 0x884A
#define GL_TEXTURE_STENCIL_SIZE 0x88F1
#define GL_TEXTURE_SHARED_SIZE 0x8C3F
#define GL_TEXTURE_RED_TYPE 0x8C10
#define GL_TEXTURE_GREEN_TYPE 0x8C11
#define GL_TEXTURE_BLUE_TYPE 0x8C12
#define GL_TEXTURE_ALPHA_TYPE 0x8C13
#define GL_TEXTURE_DEPTH_TYPE 0x8C16
#define GL_TEXTURE_COMPRESSED 0x86A1
#define GL_SAMPLER_2D_MULTISAMPLE 0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE 0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_VERTEX_ATTRIB_BINDING 0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D5
#define GL_VERTEX_BINDING_DIVISOR 0x82D6
#define GL_VERTEX_BINDING_OFFSET 0x82D7
#define GL_VERTEX_BINDING_STRIDE 0x82D8
#define GL_VERTEX_BINDING_BUFFER 0x8F4F
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS 0x82DA
#define GL_MAX_VERTEX_ATTRIB_STRIDE 0x82E5

#endif

#ifdef GLES_VIV_shader_binary

#define GL_SHADER_BINARY_VIV 0x8FC4

#endif

#ifdef GL_EXT_timer_query

typedef GLint64 GLint64EXT;
typedef GLuint64 GLuint64EXT;

#endif

#ifdef GLES_APPLE_sync

typedef struct __GLsync* GLsync;

#endif

#ifdef GLES_KHR_debug

typedef void (GLLOADER_APIENTRY *GLDEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, GLvoid* userParam);

#endif

#ifdef GLES_OES_EGL_image

typedef void* GLeglImageOES;

#endif

#ifdef GLES_OES_EGL_image_external


#endif

#ifdef GLES_VERSION_1_0

typedef void (*_GLfuncptr)();

#endif

#ifdef GLES_VERSION_3_0


#endif

#ifdef GLES_AMD_performance_monitor

typedef void (GLLOADER_APIENTRY *glGetPerfMonitorGroupsAMDFUNC)(GLint* numGroups, GLsizei groupsSize, GLuint* groups);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorCountersAMDFUNC)(GLuint group, GLint* numCounters, GLint* maxActiveCounters, GLsizei countersSize, GLuint* counters);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorGroupStringAMDFUNC)(GLuint group, GLsizei bufSize, GLsizei* length, GLchar* groupString);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorCounterStringAMDFUNC)(GLuint group, GLuint count, GLsizei bufSize, GLsizei* length, GLchar* counterString);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorCounterInfoAMDFUNC)(GLuint group, GLuint counter, GLenum pname, GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGenPerfMonitorsAMDFUNC)(GLsizei n, GLuint* monitors);
typedef void (GLLOADER_APIENTRY *glDeletePerfMonitorsAMDFUNC)(GLsizei n, GLuint* monitors);
typedef void (GLLOADER_APIENTRY *glSelectPerfMonitorCountersAMDFUNC)(GLuint monitor, GLboolean enable, GLuint group, GLint numCounters, GLuint* counterList);
typedef void (GLLOADER_APIENTRY *glBeginPerfMonitorAMDFUNC)(GLuint monitor);
typedef void (GLLOADER_APIENTRY *glEndPerfMonitorAMDFUNC)(GLuint monitor);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorCounterDataAMDFUNC)(GLuint monitor, GLenum pname, GLsizei dataSize, GLuint* data, GLint* bytesWritten);

extern GLLOADER_API glGetPerfMonitorGroupsAMDFUNC glGetPerfMonitorGroupsAMD;
extern GLLOADER_API glGetPerfMonitorCountersAMDFUNC glGetPerfMonitorCountersAMD;
extern GLLOADER_API glGetPerfMonitorGroupStringAMDFUNC glGetPerfMonitorGroupStringAMD;
extern GLLOADER_API glGetPerfMonitorCounterStringAMDFUNC glGetPerfMonitorCounterStringAMD;
extern GLLOADER_API glGetPerfMonitorCounterInfoAMDFUNC glGetPerfMonitorCounterInfoAMD;
extern GLLOADER_API glGenPerfMonitorsAMDFUNC glGenPerfMonitorsAMD;
extern GLLOADER_API glDeletePerfMonitorsAMDFUNC glDeletePerfMonitorsAMD;
extern GLLOADER_API glSelectPerfMonitorCountersAMDFUNC glSelectPerfMonitorCountersAMD;
extern GLLOADER_API glBeginPerfMonitorAMDFUNC glBeginPerfMonitorAMD;
extern GLLOADER_API glEndPerfMonitorAMDFUNC glEndPerfMonitorAMD;
extern GLLOADER_API glGetPerfMonitorCounterDataAMDFUNC glGetPerfMonitorCounterDataAMD;

#endif

#ifdef GLES_ANGLE_framebuffer_blit

typedef void (GLLOADER_APIENTRY *glBlitFramebufferANGLEFUNC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

extern GLLOADER_API glBlitFramebufferANGLEFUNC glBlitFramebufferANGLE;

#endif

#ifdef GLES_ANGLE_framebuffer_multisample

typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleANGLEFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

extern GLLOADER_API glRenderbufferStorageMultisampleANGLEFUNC glRenderbufferStorageMultisampleANGLE;

#endif

#ifdef GLES_ANGLE_instanced_arrays

typedef void (GLLOADER_APIENTRY *glVertexAttribDivisorANGLEFUNC)(GLuint index, GLuint divisor);
typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedANGLEFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedANGLEFUNC)(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount);

extern GLLOADER_API glVertexAttribDivisorANGLEFUNC glVertexAttribDivisorANGLE;
extern GLLOADER_API glDrawArraysInstancedANGLEFUNC glDrawArraysInstancedANGLE;
extern GLLOADER_API glDrawElementsInstancedANGLEFUNC glDrawElementsInstancedANGLE;

#endif

#ifdef GL_EXT_timer_query

typedef void (GLLOADER_APIENTRY *glGenQueriesANGLEFUNC)(GLsizei n, GLuint* ids);
typedef void (GLLOADER_APIENTRY *glDeleteQueriesANGLEFUNC)(GLsizei n, const GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsQueryANGLEFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glBeginQueryANGLEFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glEndQueryANGLEFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glQueryCounterANGLEFUNC)(GLuint id, GLenum target);
typedef void (GLLOADER_APIENTRY *glGetQueryivANGLEFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectivANGLEFUNC)(GLuint id, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectuivANGLEFUNC)(GLuint id, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjecti64vANGLEFUNC)(GLuint id, GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectui64vANGLEFUNC)(GLuint id, GLenum pname, GLuint64* params);

extern GLLOADER_API glGenQueriesANGLEFUNC glGenQueriesANGLE;
extern GLLOADER_API glDeleteQueriesANGLEFUNC glDeleteQueriesANGLE;
extern GLLOADER_API glIsQueryANGLEFUNC glIsQueryANGLE;
extern GLLOADER_API glBeginQueryANGLEFUNC glBeginQueryANGLE;
extern GLLOADER_API glEndQueryANGLEFUNC glEndQueryANGLE;
extern GLLOADER_API glQueryCounterANGLEFUNC glQueryCounterANGLE;
extern GLLOADER_API glGetQueryivANGLEFUNC glGetQueryivANGLE;
extern GLLOADER_API glGetQueryObjectivANGLEFUNC glGetQueryObjectivANGLE;
extern GLLOADER_API glGetQueryObjectuivANGLEFUNC glGetQueryObjectuivANGLE;
extern GLLOADER_API glGetQueryObjecti64vANGLEFUNC glGetQueryObjecti64vANGLE;
extern GLLOADER_API glGetQueryObjectui64vANGLEFUNC glGetQueryObjectui64vANGLE;

#endif

#ifdef GLES_ANGLE_translated_shader_source

typedef void (GLLOADER_APIENTRY *glGetTranslatedShaderSourceANGLEFUNC)(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source);

extern GLLOADER_API glGetTranslatedShaderSourceANGLEFUNC glGetTranslatedShaderSourceANGLE;

#endif

#ifdef GLES_APPLE_copy_texture_levels

typedef void (GLLOADER_APIENTRY *glCopyTextureLevelsAPPLEFUNC)(GLuint destinationTexture, GLuint sourceTexture, GLint sourceBaseLevel, GLsizei sourceLevelCount);

extern GLLOADER_API glCopyTextureLevelsAPPLEFUNC glCopyTextureLevelsAPPLE;

#endif

#ifdef GLES_APPLE_framebuffer_multisample

typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleAPPLEFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

extern GLLOADER_API glRenderbufferStorageMultisampleAPPLEFUNC glRenderbufferStorageMultisampleAPPLE;

#endif

#ifdef GLES_APPLE_sync

typedef GLsync (GLLOADER_APIENTRY *glFenceSyncAPPLEFUNC)(GLenum condition, GLbitfield flags);
typedef GLboolean (GLLOADER_APIENTRY *glIsSyncAPPLEFUNC)(GLsync sync);
typedef void (GLLOADER_APIENTRY *glDeleteSyncAPPLEFUNC)(GLsync sync);
typedef GLenum (GLLOADER_APIENTRY *glClientWaitSyncAPPLEFUNC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLLOADER_APIENTRY *glWaitSyncAPPLEFUNC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLLOADER_APIENTRY *glGetInteger64vAPPLEFUNC)(GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetSyncivAPPLEFUNC)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);

extern GLLOADER_API glFenceSyncAPPLEFUNC glFenceSyncAPPLE;
extern GLLOADER_API glIsSyncAPPLEFUNC glIsSyncAPPLE;
extern GLLOADER_API glDeleteSyncAPPLEFUNC glDeleteSyncAPPLE;
extern GLLOADER_API glClientWaitSyncAPPLEFUNC glClientWaitSyncAPPLE;
extern GLLOADER_API glWaitSyncAPPLEFUNC glWaitSyncAPPLE;
extern GLLOADER_API glGetInteger64vAPPLEFUNC glGetInteger64vAPPLE;
extern GLLOADER_API glGetSyncivAPPLEFUNC glGetSyncivAPPLE;

#endif

#ifdef GLES_EXT_base_instance

typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedBaseInstanceEXTFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedBaseInstanceEXTFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedBaseVertexBaseInstanceEXTFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

extern GLLOADER_API glDrawArraysInstancedBaseInstanceEXTFUNC glDrawArraysInstancedBaseInstanceEXT;
extern GLLOADER_API glDrawElementsInstancedBaseInstanceEXTFUNC glDrawElementsInstancedBaseInstanceEXT;
extern GLLOADER_API glDrawElementsInstancedBaseVertexBaseInstanceEXTFUNC glDrawElementsInstancedBaseVertexBaseInstanceEXT;

#endif

#ifdef GLES_EXT_blend_minmax

typedef void (GLLOADER_APIENTRY *glBlendEquationEXTFUNC)(GLenum mode);

extern GLLOADER_API glBlendEquationEXTFUNC glBlendEquationEXT;

#endif

#ifdef GLES_EXT_buffer_storage

typedef void (GLLOADER_APIENTRY *glBufferStorageEXTFUNC)(GLenum target, GLsizeiptr size, void const * data, GLbitfield flags);
typedef void (GLLOADER_APIENTRY *glNamedBufferStorageEXTFUNC)(GLuint buffer, GLsizeiptr size, void const * data, GLbitfield flags);

extern GLLOADER_API glBufferStorageEXTFUNC glBufferStorageEXT;
extern GLLOADER_API glNamedBufferStorageEXTFUNC glNamedBufferStorageEXT;

#endif

#ifdef GLES_EXT_copy_image

typedef void (GLLOADER_APIENTRY *glCopyImageSubDataEXTFUNC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

extern GLLOADER_API glCopyImageSubDataEXTFUNC glCopyImageSubDataEXT;

#endif

#ifdef GLES_EXT_debug_label

typedef void (GLLOADER_APIENTRY *glLabelObjectEXTFUNC)(GLenum type, GLuint object, GLsizei length, const GLchar* label);
typedef void (GLLOADER_APIENTRY *glGetObjectLabelEXTFUNC)(GLenum type, GLuint object, GLsizei bufSize, GLsizei* length, GLchar* label);

extern GLLOADER_API glLabelObjectEXTFUNC glLabelObjectEXT;
extern GLLOADER_API glGetObjectLabelEXTFUNC glGetObjectLabelEXT;

#endif

#ifdef GLES_EXT_debug_marker

typedef void (GLLOADER_APIENTRY *glInsertEventMarkerEXTFUNC)(GLsizei length, const GLchar* marker);
typedef void (GLLOADER_APIENTRY *glPushGroupMarkerEXTFUNC)(GLsizei length, const GLchar* marker);
typedef void (GLLOADER_APIENTRY *glPopGroupMarkerEXTFUNC)();

extern GLLOADER_API glInsertEventMarkerEXTFUNC glInsertEventMarkerEXT;
extern GLLOADER_API glPushGroupMarkerEXTFUNC glPushGroupMarkerEXT;
extern GLLOADER_API glPopGroupMarkerEXTFUNC glPopGroupMarkerEXT;

#endif

#ifdef GLES_EXT_discard_framebuffer

typedef void (GLLOADER_APIENTRY *glDiscardFramebufferEXTFUNC)(GLenum target, GLsizei numAttachments, const GLenum* attachments);

extern GLLOADER_API glDiscardFramebufferEXTFUNC glDiscardFramebufferEXT;

#endif

#ifdef GLES_EXT_disjoint_timer_query

typedef void (GLLOADER_APIENTRY *glGenQueriesEXTFUNC)(GLsizei n, GLuint* ids);
typedef void (GLLOADER_APIENTRY *glDeleteQueriesEXTFUNC)(GLsizei n, const GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsQueryEXTFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glBeginQueryEXTFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glEndQueryEXTFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glQueryCounterEXTFUNC)(GLuint id, GLenum target);
typedef void (GLLOADER_APIENTRY *glGetQueryivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectivEXTFUNC)(GLuint id, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectuivEXTFUNC)(GLuint id, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjecti64vEXTFUNC)(GLuint id, GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectui64vEXTFUNC)(GLuint id, GLenum pname, GLuint64* params);

extern GLLOADER_API glGenQueriesEXTFUNC glGenQueriesEXT;
extern GLLOADER_API glDeleteQueriesEXTFUNC glDeleteQueriesEXT;
extern GLLOADER_API glIsQueryEXTFUNC glIsQueryEXT;
extern GLLOADER_API glBeginQueryEXTFUNC glBeginQueryEXT;
extern GLLOADER_API glEndQueryEXTFUNC glEndQueryEXT;
extern GLLOADER_API glQueryCounterEXTFUNC glQueryCounterEXT;
extern GLLOADER_API glGetQueryivEXTFUNC glGetQueryivEXT;
extern GLLOADER_API glGetQueryObjectivEXTFUNC glGetQueryObjectivEXT;
extern GLLOADER_API glGetQueryObjectuivEXTFUNC glGetQueryObjectuivEXT;
extern GLLOADER_API glGetQueryObjecti64vEXTFUNC glGetQueryObjecti64vEXT;
extern GLLOADER_API glGetQueryObjectui64vEXTFUNC glGetQueryObjectui64vEXT;

#endif

#ifdef GLES_EXT_draw_buffers

typedef void (GLLOADER_APIENTRY *glDrawBuffersEXTFUNC)(GLsizei n, const GLenum* bufs);

extern GLLOADER_API glDrawBuffersEXTFUNC glDrawBuffersEXT;

#endif

#ifdef GLES_EXT_draw_buffers_indexed

typedef void (GLLOADER_APIENTRY *glEnableiEXTFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableiEXTFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glBlendEquationiEXTFUNC)(GLuint buf, GLenum mode);
typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateiEXTFUNC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GLLOADER_APIENTRY *glBlendFunciEXTFUNC)(GLuint buf, GLenum src, GLenum dst);
typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateiEXTFUNC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GLLOADER_APIENTRY *glColorMaskiEXTFUNC)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GLLOADER_APIENTRY *glIsEnablediEXTFUNC)(GLenum target, GLuint index);

extern GLLOADER_API glEnableiEXTFUNC glEnableiEXT;
extern GLLOADER_API glDisableiEXTFUNC glDisableiEXT;
extern GLLOADER_API glBlendEquationiEXTFUNC glBlendEquationiEXT;
extern GLLOADER_API glBlendEquationSeparateiEXTFUNC glBlendEquationSeparateiEXT;
extern GLLOADER_API glBlendFunciEXTFUNC glBlendFunciEXT;
extern GLLOADER_API glBlendFuncSeparateiEXTFUNC glBlendFuncSeparateiEXT;
extern GLLOADER_API glColorMaskiEXTFUNC glColorMaskiEXT;
extern GLLOADER_API glIsEnablediEXTFUNC glIsEnablediEXT;

#endif

#ifdef GLES_EXT_draw_elements_base_vertex

typedef void (GLLOADER_APIENTRY *glDrawElementsBaseVertexEXTFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glDrawRangeElementsBaseVertexEXTFUNC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedBaseVertexEXTFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsBaseVertexEXTFUNC)(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei drawcount, const GLint* basevertex);

extern GLLOADER_API glDrawElementsBaseVertexEXTFUNC glDrawElementsBaseVertexEXT;
extern GLLOADER_API glDrawRangeElementsBaseVertexEXTFUNC glDrawRangeElementsBaseVertexEXT;
extern GLLOADER_API glDrawElementsInstancedBaseVertexEXTFUNC glDrawElementsInstancedBaseVertexEXT;
extern GLLOADER_API glMultiDrawElementsBaseVertexEXTFUNC glMultiDrawElementsBaseVertexEXT;

#endif

#ifdef GLES_EXT_draw_instanced

typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedEXTFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedEXTFUNC)(GLenum mode, GLsizei count, GLenum type, const void* indices, GLsizei primcount);

extern GLLOADER_API glDrawArraysInstancedEXTFUNC glDrawArraysInstancedEXT;
extern GLLOADER_API glDrawElementsInstancedEXTFUNC glDrawElementsInstancedEXT;

#endif

#ifdef GLES_EXT_geometry_shader

typedef void (GLLOADER_APIENTRY *glFramebufferTextureEXTFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level);

extern GLLOADER_API glFramebufferTextureEXTFUNC glFramebufferTextureEXT;

#endif

#ifdef GLES_EXT_instanced_arrays

typedef void (GLLOADER_APIENTRY *glVertexAttribDivisorEXTFUNC)(GLuint index, GLuint divisor);

extern GLLOADER_API glVertexAttribDivisorEXTFUNC glVertexAttribDivisorEXT;

#endif

#ifdef GLES_EXT_map_buffer_range

typedef void* (GLLOADER_APIENTRY *glMapBufferRangeEXTFUNC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GLLOADER_APIENTRY *glFlushMappedBufferRangeEXTFUNC)(GLenum target, GLintptr offset, GLsizeiptr length);

extern GLLOADER_API glMapBufferRangeEXTFUNC glMapBufferRangeEXT;
extern GLLOADER_API glFlushMappedBufferRangeEXTFUNC glFlushMappedBufferRangeEXT;

#endif

#ifdef GLES_EXT_multisampled_render_to_texture

typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleEXTFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture2DMultisampleEXTFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

extern GLLOADER_API glRenderbufferStorageMultisampleEXTFUNC glRenderbufferStorageMultisampleEXT;
extern GLLOADER_API glFramebufferTexture2DMultisampleEXTFUNC glFramebufferTexture2DMultisampleEXT;

#endif

#ifdef GLES_EXT_multiview_draw_buffers

typedef void (GLLOADER_APIENTRY *glReadBufferIndexedEXTFUNC)(GLenum src, GLint index);
typedef void (GLLOADER_APIENTRY *glDrawBuffersIndexedEXTFUNC)(GLint n, const GLenum* location, const GLint* indices);
typedef void (GLLOADER_APIENTRY *GetIntegeri_vEXTFUNC)(GLenum target, GLuint index, GLint* data);

extern GLLOADER_API glReadBufferIndexedEXTFUNC glReadBufferIndexedEXT;
extern GLLOADER_API glDrawBuffersIndexedEXTFUNC glDrawBuffersIndexedEXT;
extern GLLOADER_API GetIntegeri_vEXTFUNC GetIntegeri_vEXT;

#endif

#ifdef GLES_EXT_multi_draw_arrays

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysEXTFUNC)(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsEXTFUNC)(GLenum mode, GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);

extern GLLOADER_API glMultiDrawArraysEXTFUNC glMultiDrawArraysEXT;
extern GLLOADER_API glMultiDrawElementsEXTFUNC glMultiDrawElementsEXT;

#endif

#ifdef GLES_EXT_multi_draw_indirect

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysIndirectEXTFUNC)(GLenum mode, const GLvoid* indirect, GLsizei drawcount, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsIndirectEXTFUNC)(GLenum mode, GLenum type, const GLvoid* indirect, GLsizei drawcount, GLsizei stride);

extern GLLOADER_API glMultiDrawArraysIndirectEXTFUNC glMultiDrawArraysIndirectEXT;
extern GLLOADER_API glMultiDrawElementsIndirectEXTFUNC glMultiDrawElementsIndirectEXT;

#endif

#ifdef GLES_EXT_occlusion_query_boolean



#endif

#ifdef GLES_EXT_primitive_bounding_box

typedef void (GLLOADER_APIENTRY *glPrimitiveBoundingBoxEXTFUNC)(float minX, float minY, float minZ, float minW, float maxX, float maxY, float maxZ, float maxW);

extern GLLOADER_API glPrimitiveBoundingBoxEXTFUNC glPrimitiveBoundingBoxEXT;

#endif

#ifdef GLES_EXT_raster_multisample

typedef void (GLLOADER_APIENTRY *glRasterSamplesEXTFUNC)(GLuint samples, GLboolean fixedsamplelocations);

extern GLLOADER_API glRasterSamplesEXTFUNC glRasterSamplesEXT;

#endif

#ifdef GLES_EXT_robustness

typedef GLenum (GLLOADER_APIENTRY *glGetGraphicsResetStatusEXTFUNC)();
typedef void (GLLOADER_APIENTRY *glReadnPixelsEXTFUNC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void* data);
typedef void (GLLOADER_APIENTRY *glGetnUniformfvEXTFUNC)(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetnUniformivEXTFUNC)(GLuint program, GLint location, GLsizei bufSize, GLint* params);

extern GLLOADER_API glGetGraphicsResetStatusEXTFUNC glGetGraphicsResetStatusEXT;
extern GLLOADER_API glReadnPixelsEXTFUNC glReadnPixelsEXT;
extern GLLOADER_API glGetnUniformfvEXTFUNC glGetnUniformfvEXT;
extern GLLOADER_API glGetnUniformivEXTFUNC glGetnUniformivEXT;

#endif

#ifdef GLES_EXT_separate_shader_objects

typedef void (GLLOADER_APIENTRY *glUseShaderProgramEXTFUNC)(GLenum type, GLuint program);
typedef void (GLLOADER_APIENTRY *glActiveProgramEXTFUNC)(GLuint program);
typedef GLuint (GLLOADER_APIENTRY *glCreateShaderProgramEXTFUNC)(GLenum type, const GLchar* string);
typedef GLboolean (GLLOADER_APIENTRY *glBindProgramPipelineEXTFUNC)(GLuint pipeline);
typedef GLboolean (GLLOADER_APIENTRY *glDeleteProgramPipelinesEXTFUNC)(GLsizei n, const GLuint* pipelines);
typedef GLboolean (GLLOADER_APIENTRY *glGenProgramPipelinesEXTFUNC)(GLsizei n, GLuint* pipelines);
typedef GLboolean (GLLOADER_APIENTRY *glIsProgramPipelineEXTFUNC)(GLuint pipeline);
typedef GLboolean (GLLOADER_APIENTRY *glProgramParameteriEXTFUNC)(GLuint program, GLenum pname, GLint value);
typedef GLboolean (GLLOADER_APIENTRY *glGetProgramPipelineivEXTFUNC)(GLuint pipeline, GLenum pname, GLint* params);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform1iEXTFUNC)(GLuint program, GLint location, GLint x);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform2iEXTFUNC)(GLuint program, GLint location, GLint x, GLint y);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform3iEXTFUNC)(GLuint program, GLint location, GLint x, GLint y, GLint z);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform4iEXTFUNC)(GLuint program, GLint location, GLint x, GLint y, GLint z, GLint w);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform1fEXTFUNC)(GLuint program, GLint location, GLfloat x);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform2fEXTFUNC)(GLuint program, GLint location, GLfloat x, GLfloat y);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform3fEXTFUNC)(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform4fEXTFUNC)(GLuint program, GLint location, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform1ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform2ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform3ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform4ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform1fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform2fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform3fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniform4fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniformMatrix2fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniformMatrix3fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glProgramUniformMatrix4fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glValidateProgramPipelineEXTFUNC)(GLuint pipeline);
typedef GLboolean (GLLOADER_APIENTRY *glGetProgramPipelineInfoLogEXTFUNC)(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog);

extern GLLOADER_API glUseShaderProgramEXTFUNC glUseShaderProgramEXT;
extern GLLOADER_API glActiveProgramEXTFUNC glActiveProgramEXT;
extern GLLOADER_API glCreateShaderProgramEXTFUNC glCreateShaderProgramEXT;
extern GLLOADER_API glBindProgramPipelineEXTFUNC glBindProgramPipelineEXT;
extern GLLOADER_API glDeleteProgramPipelinesEXTFUNC glDeleteProgramPipelinesEXT;
extern GLLOADER_API glGenProgramPipelinesEXTFUNC glGenProgramPipelinesEXT;
extern GLLOADER_API glIsProgramPipelineEXTFUNC glIsProgramPipelineEXT;
extern GLLOADER_API glProgramParameteriEXTFUNC glProgramParameteriEXT;
extern GLLOADER_API glGetProgramPipelineivEXTFUNC glGetProgramPipelineivEXT;
extern GLLOADER_API glProgramUniform1iEXTFUNC glProgramUniform1iEXT;
extern GLLOADER_API glProgramUniform2iEXTFUNC glProgramUniform2iEXT;
extern GLLOADER_API glProgramUniform3iEXTFUNC glProgramUniform3iEXT;
extern GLLOADER_API glProgramUniform4iEXTFUNC glProgramUniform4iEXT;
extern GLLOADER_API glProgramUniform1fEXTFUNC glProgramUniform1fEXT;
extern GLLOADER_API glProgramUniform2fEXTFUNC glProgramUniform2fEXT;
extern GLLOADER_API glProgramUniform3fEXTFUNC glProgramUniform3fEXT;
extern GLLOADER_API glProgramUniform4fEXTFUNC glProgramUniform4fEXT;
extern GLLOADER_API glProgramUniform1ivEXTFUNC glProgramUniform1ivEXT;
extern GLLOADER_API glProgramUniform2ivEXTFUNC glProgramUniform2ivEXT;
extern GLLOADER_API glProgramUniform3ivEXTFUNC glProgramUniform3ivEXT;
extern GLLOADER_API glProgramUniform4ivEXTFUNC glProgramUniform4ivEXT;
extern GLLOADER_API glProgramUniform1fvEXTFUNC glProgramUniform1fvEXT;
extern GLLOADER_API glProgramUniform2fvEXTFUNC glProgramUniform2fvEXT;
extern GLLOADER_API glProgramUniform3fvEXTFUNC glProgramUniform3fvEXT;
extern GLLOADER_API glProgramUniform4fvEXTFUNC glProgramUniform4fvEXT;
extern GLLOADER_API glProgramUniformMatrix2fvEXTFUNC glProgramUniformMatrix2fvEXT;
extern GLLOADER_API glProgramUniformMatrix3fvEXTFUNC glProgramUniformMatrix3fvEXT;
extern GLLOADER_API glProgramUniformMatrix4fvEXTFUNC glProgramUniformMatrix4fvEXT;
extern GLLOADER_API glValidateProgramPipelineEXTFUNC glValidateProgramPipelineEXT;
extern GLLOADER_API glGetProgramPipelineInfoLogEXTFUNC glGetProgramPipelineInfoLogEXT;

#endif

#ifdef GLES_EXT_sparse_texture

typedef void (GLLOADER_APIENTRY *glTexPageCommitmentEXTFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
typedef void (GLLOADER_APIENTRY *glTexturePageCommitmentEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);

extern GLLOADER_API glTexPageCommitmentEXTFUNC glTexPageCommitmentEXT;
extern GLLOADER_API glTexturePageCommitmentEXTFUNC glTexturePageCommitmentEXT;

#endif

#ifdef GLES_EXT_tessellation_shader

typedef void (GLLOADER_APIENTRY *glPatchParameteriEXTFUNC)(GLenum pname, GLint value);

extern GLLOADER_API glPatchParameteriEXTFUNC glPatchParameteriEXT;

#endif

#ifdef GLES_EXT_texture_border_clamp

typedef void (GLLOADER_APIENTRY *glTexParameterIivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glTexParameterIuivEXTFUNC)(GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIuivEXTFUNC)(GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glSamplerParameterIivEXTFUNC)(GLuint sampler, GLenum pname, const GLint* param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterIuivEXTFUNC)(GLuint sampler, GLenum pname, const GLuint* param);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterIivEXTFUNC)(GLuint sampler, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterIuivEXTFUNC)(GLuint sampler, GLenum pname, GLuint* params);

extern GLLOADER_API glTexParameterIivEXTFUNC glTexParameterIivEXT;
extern GLLOADER_API glTexParameterIuivEXTFUNC glTexParameterIuivEXT;
extern GLLOADER_API glGetTexParameterIivEXTFUNC glGetTexParameterIivEXT;
extern GLLOADER_API glGetTexParameterIuivEXTFUNC glGetTexParameterIuivEXT;
extern GLLOADER_API glSamplerParameterIivEXTFUNC glSamplerParameterIivEXT;
extern GLLOADER_API glSamplerParameterIuivEXTFUNC glSamplerParameterIuivEXT;
extern GLLOADER_API glGetSamplerParameterIivEXTFUNC glGetSamplerParameterIivEXT;
extern GLLOADER_API glGetSamplerParameterIuivEXTFUNC glGetSamplerParameterIuivEXT;

#endif

#ifdef GLES_EXT_texture_buffer

typedef void (GLLOADER_APIENTRY *glTexBufferEXTFUNC)(GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTexBufferRangeEXTFUNC)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

extern GLLOADER_API glTexBufferEXTFUNC glTexBufferEXT;
extern GLLOADER_API glTexBufferRangeEXTFUNC glTexBufferRangeEXT;

#endif

#ifdef GLES_EXT_texture_storage

typedef void (GLLOADER_APIENTRY *glTexStorage1DEXTFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLLOADER_APIENTRY *glTexStorage2DEXTFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTexStorage3DEXTFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLLOADER_APIENTRY *glTextureStorage1DEXTFUNC)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLLOADER_APIENTRY *glTextureStorage2DEXTFUNC)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTextureStorage3DEXTFUNC)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

extern GLLOADER_API glTexStorage1DEXTFUNC glTexStorage1DEXT;
extern GLLOADER_API glTexStorage2DEXTFUNC glTexStorage2DEXT;
extern GLLOADER_API glTexStorage3DEXTFUNC glTexStorage3DEXT;
extern GLLOADER_API glTextureStorage1DEXTFUNC glTextureStorage1DEXT;
extern GLLOADER_API glTextureStorage2DEXTFUNC glTextureStorage2DEXT;
extern GLLOADER_API glTextureStorage3DEXTFUNC glTextureStorage3DEXT;

#endif

#ifdef GLES_EXT_texture_view

typedef void (GLLOADER_APIENTRY *glTextureViewEXTFUNC)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

extern GLLOADER_API glTextureViewEXTFUNC glTextureViewEXT;

#endif

#ifdef GLES_IMG_multisampled_render_to_texture

typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleIMGFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture2DMultisampleIMGFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);

extern GLLOADER_API glRenderbufferStorageMultisampleIMGFUNC glRenderbufferStorageMultisampleIMG;
extern GLLOADER_API glFramebufferTexture2DMultisampleIMGFUNC glFramebufferTexture2DMultisampleIMG;

#endif

#ifdef GLES_IMG_user_clip_plane

typedef void (GLLOADER_APIENTRY *glClipPlanefIMGFUNC)(GLenum p, GLfloat* eqn);
typedef void (GLLOADER_APIENTRY *glClipPlanexIMGFUNC)(GLenum p, GLfixed* eqn);

extern GLLOADER_API glClipPlanefIMGFUNC glClipPlanefIMG;
extern GLLOADER_API glClipPlanexIMGFUNC glClipPlanexIMG;

#endif

#ifdef GLES_INTEL_performance_query

typedef void (GLLOADER_APIENTRY *glGetFirstPerfQueryIdINTELFUNC)(GLuint* queryId);
typedef void (GLLOADER_APIENTRY *glGetNextPerfQueryIdINTELFUNC)(GLuint queryId, GLuint* nextQueryId);
typedef void (GLLOADER_APIENTRY *glGetPerfQueryIdByNameINTELFUNC)(GLchar* queryName, GLuint* queryId);
typedef void (GLLOADER_APIENTRY *glGetPerfQueryInfoINTELFUNC)(GLuint queryId, GLuint queryNameLength, GLchar* queryName, GLuint* dataSize, GLuint* noCounters, GLuint* noInstances, GLuint* capsMask);
typedef void (GLLOADER_APIENTRY *glGetPerfCounterInfoINTELFUNC)(GLuint queryId, GLuint counterId, GLuint counterNameLength, GLchar* counterName, GLuint counterDescLength, GLchar* counterDesc, GLuint* counterOffset, GLuint* counterDataSize, GLuint* counterTypeEnum, GLuint* counterDataTypeEnum, GLuint64* rawCounterMaxValue);
typedef void (GLLOADER_APIENTRY *glCreatePerfQueryINTELFUNC)(GLuint queryId, GLuint* queryHandle);
typedef void (GLLOADER_APIENTRY *glDeletePerfQueryINTELFUNC)(GLuint queryHandle);
typedef void (GLLOADER_APIENTRY *glBeginPerfQueryINTELFUNC)(GLuint queryHandle);
typedef void (GLLOADER_APIENTRY *glEndPerfQueryINTELFUNC)(GLuint queryHandle);
typedef void (GLLOADER_APIENTRY *glGetPerfQueryDataINTELFUNC)(GLuint queryHandle, GLuint flags, GLsizei dataSize, GLvoid* data, GLuint* bytesWritten);

extern GLLOADER_API glGetFirstPerfQueryIdINTELFUNC glGetFirstPerfQueryIdINTEL;
extern GLLOADER_API glGetNextPerfQueryIdINTELFUNC glGetNextPerfQueryIdINTEL;
extern GLLOADER_API glGetPerfQueryIdByNameINTELFUNC glGetPerfQueryIdByNameINTEL;
extern GLLOADER_API glGetPerfQueryInfoINTELFUNC glGetPerfQueryInfoINTEL;
extern GLLOADER_API glGetPerfCounterInfoINTELFUNC glGetPerfCounterInfoINTEL;
extern GLLOADER_API glCreatePerfQueryINTELFUNC glCreatePerfQueryINTEL;
extern GLLOADER_API glDeletePerfQueryINTELFUNC glDeletePerfQueryINTEL;
extern GLLOADER_API glBeginPerfQueryINTELFUNC glBeginPerfQueryINTEL;
extern GLLOADER_API glEndPerfQueryINTELFUNC glEndPerfQueryINTEL;
extern GLLOADER_API glGetPerfQueryDataINTELFUNC glGetPerfQueryDataINTEL;

#endif

#ifdef GLES_KHR_blend_equation_advanced

typedef void (GLLOADER_APIENTRY *glBlendBarrierKHRFUNC)();

extern GLLOADER_API glBlendBarrierKHRFUNC glBlendBarrierKHR;

#endif

#ifdef GLES_KHR_debug

typedef void (GLLOADER_APIENTRY *glDebugMessageControlFUNC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
typedef void (GLLOADER_APIENTRY *glDebugMessageInsertFUNC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf);
typedef void (GLLOADER_APIENTRY *glDebugMessageCallbackFUNC)(GLDEBUGPROC callback, const GLvoid* userParam);
typedef GLuint (GLLOADER_APIENTRY *glGetDebugMessageLogFUNC)(GLuint count, GLsizei bufsize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog);
typedef void (GLLOADER_APIENTRY *glGetPointervFUNC)(GLenum pname, void** params);
typedef void (GLLOADER_APIENTRY *glPushDebugGroupFUNC)(GLenum source, GLuint id, GLsizei length, const GLchar* message);
typedef void (GLLOADER_APIENTRY *glPopDebugGroupFUNC)();
typedef void (GLLOADER_APIENTRY *glObjectLabelFUNC)(GLenum identifier, GLuint name, GLsizei length, const GLchar* label);
typedef void (GLLOADER_APIENTRY *glGetObjectLabelFUNC)(GLenum identifier, GLuint name, GLsizei bufSize, GLsizei* length, GLchar* label);
typedef void (GLLOADER_APIENTRY *glObjectPtrLabelFUNC)(const GLvoid* ptr, GLsizei length, const GLchar* label);
typedef void (GLLOADER_APIENTRY *glGetObjectPtrLabelFUNC)(const GLvoid* ptr, GLsizei bufSize, GLsizei* length, GLchar* label);

extern GLLOADER_API glDebugMessageControlFUNC glDebugMessageControl;
extern GLLOADER_API glDebugMessageInsertFUNC glDebugMessageInsert;
extern GLLOADER_API glDebugMessageCallbackFUNC glDebugMessageCallback;
extern GLLOADER_API glGetDebugMessageLogFUNC glGetDebugMessageLog;
extern GLLOADER_API glGetPointervFUNC glGetPointerv;
extern GLLOADER_API glPushDebugGroupFUNC glPushDebugGroup;
extern GLLOADER_API glPopDebugGroupFUNC glPopDebugGroup;
extern GLLOADER_API glObjectLabelFUNC glObjectLabel;
extern GLLOADER_API glGetObjectLabelFUNC glGetObjectLabel;
extern GLLOADER_API glObjectPtrLabelFUNC glObjectPtrLabel;
extern GLLOADER_API glGetObjectPtrLabelFUNC glGetObjectPtrLabel;

#endif

#ifdef GLES_KHR_robustness

typedef GLenum (GLLOADER_APIENTRY *glGetGraphicsResetStatusFUNC)();
typedef void (GLLOADER_APIENTRY *glReadnPixelsFUNC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGetnUniformfvFUNC)(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetnUniformivFUNC)(GLuint program, GLint location, GLsizei bufSize, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetnUniformuivFUNC)(GLuint program, GLint location, GLsizei bufSize, GLuint* params);

extern GLLOADER_API glGetGraphicsResetStatusFUNC glGetGraphicsResetStatus;
extern GLLOADER_API glReadnPixelsFUNC glReadnPixels;
extern GLLOADER_API glGetnUniformfvFUNC glGetnUniformfv;
extern GLLOADER_API glGetnUniformivFUNC glGetnUniformiv;
extern GLLOADER_API glGetnUniformuivFUNC glGetnUniformuiv;

#endif

#ifdef GLES_NV_3dvision_settings

typedef void (GLLOADER_APIENTRY *glStereoParameterfNVFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glStereoParameteriNVFUNC)(GLenum pname, GLint param);

extern GLLOADER_API glStereoParameterfNVFUNC glStereoParameterfNV;
extern GLLOADER_API glStereoParameteriNVFUNC glStereoParameteriNV;

#endif

#ifdef GLES_NV_bindless_texture

typedef GLuint64 (GLLOADER_APIENTRY *glGetTextureHandleNVFUNC)(GLuint texture);
typedef GLuint64 (GLLOADER_APIENTRY *glGetTextureSamplerHandleNVFUNC)(GLuint texture, GLuint sampler);
typedef void (GLLOADER_APIENTRY *glMakeTextureHandleResidentNVFUNC)(GLuint64 handle);
typedef void (GLLOADER_APIENTRY *glMakeTextureHandleNonResidentNVFUNC)(GLuint64 handle);
typedef GLuint64 (GLLOADER_APIENTRY *glGetImageHandleNVFUNC)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (GLLOADER_APIENTRY *glMakeImageHandleResidentNVFUNC)(GLuint64 handle, GLenum access);
typedef void (GLLOADER_APIENTRY *glMakeImageHandleNonResidentNVFUNC)(GLuint64 handle);
typedef void (GLLOADER_APIENTRY *glUniformHandleui64NVFUNC)(GLint location, GLuint64 value);
typedef void (GLLOADER_APIENTRY *glUniformHandleui64vNVFUNC)(GLint location, GLsizei count, const GLuint64* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformHandleui64NVFUNC)(GLuint program, GLint location, GLuint64 value);
typedef void (GLLOADER_APIENTRY *glProgramUniformHandleui64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLuint64* values);
typedef GLboolean (GLLOADER_APIENTRY *glIsTextureHandleResidentNVFUNC)(GLuint64 handle);
typedef GLboolean (GLLOADER_APIENTRY *glIsImageHandleResidentNVFUNC)(GLuint64 handle);

extern GLLOADER_API glGetTextureHandleNVFUNC glGetTextureHandleNV;
extern GLLOADER_API glGetTextureSamplerHandleNVFUNC glGetTextureSamplerHandleNV;
extern GLLOADER_API glMakeTextureHandleResidentNVFUNC glMakeTextureHandleResidentNV;
extern GLLOADER_API glMakeTextureHandleNonResidentNVFUNC glMakeTextureHandleNonResidentNV;
extern GLLOADER_API glGetImageHandleNVFUNC glGetImageHandleNV;
extern GLLOADER_API glMakeImageHandleResidentNVFUNC glMakeImageHandleResidentNV;
extern GLLOADER_API glMakeImageHandleNonResidentNVFUNC glMakeImageHandleNonResidentNV;
extern GLLOADER_API glUniformHandleui64NVFUNC glUniformHandleui64NV;
extern GLLOADER_API glUniformHandleui64vNVFUNC glUniformHandleui64vNV;
extern GLLOADER_API glProgramUniformHandleui64NVFUNC glProgramUniformHandleui64NV;
extern GLLOADER_API glProgramUniformHandleui64vNVFUNC glProgramUniformHandleui64vNV;
extern GLLOADER_API glIsTextureHandleResidentNVFUNC glIsTextureHandleResidentNV;
extern GLLOADER_API glIsImageHandleResidentNVFUNC glIsImageHandleResidentNV;

#endif

#ifdef GLES_NV_blend_equation_advanced

typedef void (GLLOADER_APIENTRY *glBlendParameteriNVFUNC)(GLenum pname, GLint value);
typedef void (GLLOADER_APIENTRY *glBlendBarrierNVFUNC)();

extern GLLOADER_API glBlendParameteriNVFUNC glBlendParameteriNV;
extern GLLOADER_API glBlendBarrierNVFUNC glBlendBarrierNV;

#endif

#ifdef GLES_NV_conditional_render

typedef void (GLLOADER_APIENTRY *glBeginConditionalRenderNVFUNC)(GLuint id, GLenum mode);
typedef void (GLLOADER_APIENTRY *glEndConditionalRenderNVFUNC)();

extern GLLOADER_API glBeginConditionalRenderNVFUNC glBeginConditionalRenderNV;
extern GLLOADER_API glEndConditionalRenderNVFUNC glEndConditionalRenderNV;

#endif

#ifdef GLES_NV_conservative_raster

typedef void (GLLOADER_APIENTRY *glSubpixelPrecisionBiasNVFUNC)(GLuint xbits, GLuint ybits);

extern GLLOADER_API glSubpixelPrecisionBiasNVFUNC glSubpixelPrecisionBiasNV;

#endif

#ifdef GLES_NV_copy_buffer

typedef void (GLLOADER_APIENTRY *glCopyBufferSubDataNVFUNC)(GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size);

extern GLLOADER_API glCopyBufferSubDataNVFUNC glCopyBufferSubDataNV;

#endif

#ifdef GLES_NV_coverage_sample

typedef void (GLLOADER_APIENTRY *glCoverageMaskNVFUNC)(GLboolean mask);
typedef void (GLLOADER_APIENTRY *glCoverageOperationNVFUNC)(GLenum operation);

extern GLLOADER_API glCoverageMaskNVFUNC glCoverageMaskNV;
extern GLLOADER_API glCoverageOperationNVFUNC glCoverageOperationNV;

#endif

#ifdef GLES_NV_draw_buffers

typedef void (GLLOADER_APIENTRY *glDrawBuffersNVFUNC)(GLsizei n, const GLenum* bufs);

extern GLLOADER_API glDrawBuffersNVFUNC glDrawBuffersNV;

#endif

#ifdef GLES_NV_draw_instanced

typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedNVFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedNVFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount);

extern GLLOADER_API glDrawArraysInstancedNVFUNC glDrawArraysInstancedNV;
extern GLLOADER_API glDrawElementsInstancedNVFUNC glDrawElementsInstancedNV;

#endif

#ifdef GLES_NV_draw_texture

typedef void (GLLOADER_APIENTRY *glDrawTextureNVFUNC)(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);

extern GLLOADER_API glDrawTextureNVFUNC glDrawTextureNV;

#endif

#ifdef GLES_NV_fence

typedef void (GLLOADER_APIENTRY *glDeleteFencesNVFUNC)(GLsizei n, const GLuint* fences);
typedef void (GLLOADER_APIENTRY *glGenFencesNVFUNC)(GLsizei n, GLuint* fences);
typedef GLboolean (GLLOADER_APIENTRY *glIsFenceNVFUNC)(GLuint fence);
typedef GLboolean (GLLOADER_APIENTRY *glTestFenceNVFUNC)(GLuint fence);
typedef void (GLLOADER_APIENTRY *glGetFenceivNVFUNC)(GLuint fence, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glFinishFenceNVFUNC)(GLuint fence);
typedef void (GLLOADER_APIENTRY *glSetFenceNVFUNC)(GLuint fence, GLenum condition);

extern GLLOADER_API glDeleteFencesNVFUNC glDeleteFencesNV;
extern GLLOADER_API glGenFencesNVFUNC glGenFencesNV;
extern GLLOADER_API glIsFenceNVFUNC glIsFenceNV;
extern GLLOADER_API glTestFenceNVFUNC glTestFenceNV;
extern GLLOADER_API glGetFenceivNVFUNC glGetFenceivNV;
extern GLLOADER_API glFinishFenceNVFUNC glFinishFenceNV;
extern GLLOADER_API glSetFenceNVFUNC glSetFenceNV;

#endif

#ifdef GLES_NV_fragment_coverage_to_color

typedef void (GLLOADER_APIENTRY *glFragmentCoverageColorNVFUNC)(GLuint color);

extern GLLOADER_API glFragmentCoverageColorNVFUNC glFragmentCoverageColorNV;

#endif

#ifdef GLES_NV_framebuffer_blit

typedef void (GLLOADER_APIENTRY *glBlitFramebufferNVFUNC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

extern GLLOADER_API glBlitFramebufferNVFUNC glBlitFramebufferNV;

#endif

#ifdef GLES_NV_framebuffer_mixed_samples

typedef void (GLLOADER_APIENTRY *glCoverageModulationTableNVFUNC)(GLsizei n, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glGetCoverageModulationTableNVFUNC)(GLsizei bufsize, GLfloat* v);
typedef void (GLLOADER_APIENTRY *glCoverageModulationNVFUNC)(GLenum components);

extern GLLOADER_API glCoverageModulationTableNVFUNC glCoverageModulationTableNV;
extern GLLOADER_API glGetCoverageModulationTableNVFUNC glGetCoverageModulationTableNV;
extern GLLOADER_API glCoverageModulationNVFUNC glCoverageModulationNV;

#endif

#ifdef GLES_NV_framebuffer_multisample

typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleNVFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

extern GLLOADER_API glRenderbufferStorageMultisampleNVFUNC glRenderbufferStorageMultisampleNV;

#endif

#ifdef GLES_NV_instanced_arrays

typedef void (GLLOADER_APIENTRY *glVertexAttribDivisorNVFUNC)(GLuint index, GLuint divisor);

extern GLLOADER_API glVertexAttribDivisorNVFUNC glVertexAttribDivisorNV;

#endif

#ifdef GLES_NV_internalformat_sample_query

typedef void (GLLOADER_APIENTRY *glGetInternalformatSampleivNVFUNC)(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint* params);

extern GLLOADER_API glGetInternalformatSampleivNVFUNC glGetInternalformatSampleivNV;

#endif

#ifdef GLES_NV_non_square_matrices

typedef void (GLLOADER_APIENTRY *glUniformMatrix2x3fvNVFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x2fvNVFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2x4fvNVFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x2fvNVFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x4fvNVFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x3fvNVFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);

extern GLLOADER_API glUniformMatrix2x3fvNVFUNC glUniformMatrix2x3fvNV;
extern GLLOADER_API glUniformMatrix3x2fvNVFUNC glUniformMatrix3x2fvNV;
extern GLLOADER_API glUniformMatrix2x4fvNVFUNC glUniformMatrix2x4fvNV;
extern GLLOADER_API glUniformMatrix4x2fvNVFUNC glUniformMatrix4x2fvNV;
extern GLLOADER_API glUniformMatrix3x4fvNVFUNC glUniformMatrix3x4fvNV;
extern GLLOADER_API glUniformMatrix4x3fvNVFUNC glUniformMatrix4x3fvNV;

#endif

#ifdef GLES_NV_path_rendering

typedef GLuint (GLLOADER_APIENTRY *glGenPathsNVFUNC)(GLsizei range);
typedef void (GLLOADER_APIENTRY *glDeletePathsNVFUNC)(GLuint path, GLsizei range);
typedef GLboolean (GLLOADER_APIENTRY *glIsPathNVFUNC)(GLuint path);
typedef void (GLLOADER_APIENTRY *glPathCommandsNVFUNC)(GLuint path, GLsizei numCommands, const GLubyte* commands, GLsizei numCoords, GLenum coordType, const GLvoid* coords);
typedef void (GLLOADER_APIENTRY *glPathCoordsNVFUNC)(GLuint path, GLsizei numCoords, GLenum coordType, const GLvoid* coords);
typedef void (GLLOADER_APIENTRY *glPathSubCommandsNVFUNC)(GLuint path, GLsizei commandStart, GLsizei commandsToDelete, GLsizei numCommands, const GLubyte* commands, GLsizei numCoords, GLenum coordType, const GLvoid* coords);
typedef void (GLLOADER_APIENTRY *glPathSubCoordsNVFUNC)(GLuint path, GLsizei coordStart, GLsizei numCoords, GLenum coordType, const GLvoid* coords);
typedef void (GLLOADER_APIENTRY *glPathStringNVFUNC)(GLuint path, GLenum format, GLsizei length, const GLvoid* pathString);
typedef void (GLLOADER_APIENTRY *glPathGlyphsNVFUNC)(GLuint firstPathName, GLenum fontTarget, const GLvoid* fontName, GLbitfield fontStyle, GLsizei numGlyphs, GLenum type, const GLvoid* charcodes, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GLLOADER_APIENTRY *glPathGlyphRangeNVFUNC)(GLuint firstPathName, GLenum fontTarget, const GLvoid* fontName, GLbitfield fontStyle, GLuint firstGlyph, GLsizei numGlyphs, GLenum handleMissingGlyphs, GLuint pathParameterTemplate, GLfloat emScale);
typedef void (GLLOADER_APIENTRY *glWeightPathsNVFUNC)(GLuint resultPath, GLsizei numPaths, const GLuint* paths, const GLfloat* weights);
typedef void (GLLOADER_APIENTRY *glCopyPathNVFUNC)(GLuint resultPath, GLuint srcPath);
typedef void (GLLOADER_APIENTRY *glInterpolatePathsNVFUNC)(GLuint resultPath, GLuint pathA, GLuint pathB, GLfloat weight);
typedef void (GLLOADER_APIENTRY *glTransformPathNVFUNC)(GLuint resultPath, GLuint srcPath, GLenum transformType, const GLfloat* transformValues);
typedef void (GLLOADER_APIENTRY *glPathParameterivNVFUNC)(GLuint path, GLenum pname, const GLint* value);
typedef void (GLLOADER_APIENTRY *glPathParameteriNVFUNC)(GLuint path, GLenum pname, GLint value);
typedef void (GLLOADER_APIENTRY *glPathParameterfvNVFUNC)(GLuint path, GLenum pname, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glPathParameterfNVFUNC)(GLuint path, GLenum pname, GLfloat value);
typedef void (GLLOADER_APIENTRY *glPathDashArrayNVFUNC)(GLuint path, GLsizei dashCount, const GLfloat* dashArray);
typedef void (GLLOADER_APIENTRY *glPathStencilFuncNVFUNC)(GLenum func, GLint ref, GLuint mask);
typedef void (GLLOADER_APIENTRY *glPathStencilDepthOffsetNVFUNC)(GLfloat factor, GLfloat units);
typedef void (GLLOADER_APIENTRY *glStencilFillPathNVFUNC)(GLuint path, GLenum fillMode, GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilStrokePathNVFUNC)(GLuint path, GLint reference, GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilFillPathInstancedNVFUNC)(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLenum fillMode, GLuint mask, GLenum transformType, const GLfloat* transformValues);
typedef void (GLLOADER_APIENTRY *glStencilStrokePathInstancedNVFUNC)(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLint reference, GLuint mask, GLenum transformType, const GLfloat* transformValues);
typedef void (GLLOADER_APIENTRY *glPathCoverDepthFuncNVFUNC)(GLenum func);
typedef void (GLLOADER_APIENTRY *glPathColorGenNVFUNC)(GLenum color, GLenum genMode, GLenum colorFormat, const GLfloat* coeffs);
typedef void (GLLOADER_APIENTRY *glPathTexGenNVFUNC)(GLenum texCoordSet, GLenum genMode, GLint components, const GLfloat* coeffs);
typedef void (GLLOADER_APIENTRY *glPathFogGenNVFUNC)(GLenum genMode);
typedef void (GLLOADER_APIENTRY *glCoverFillPathNVFUNC)(GLuint path, GLenum coverMode);
typedef void (GLLOADER_APIENTRY *glCoverStrokePathNVFUNC)(GLuint path, GLenum coverMode);
typedef void (GLLOADER_APIENTRY *glCoverFillPathInstancedNVFUNC)(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat* transformValues);
typedef void (GLLOADER_APIENTRY *glCoverStrokePathInstancedNVFUNC)(GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLenum coverMode, GLenum transformType, const GLfloat* transformValues);
typedef void (GLLOADER_APIENTRY *glGetPathParameterivNVFUNC)(GLuint path, GLenum pname, GLint* value);
typedef void (GLLOADER_APIENTRY *glGetPathParameterfvNVFUNC)(GLuint path, GLenum pname, GLfloat* value);
typedef void (GLLOADER_APIENTRY *glGetPathCommandsNVFUNC)(GLuint path, GLubyte* commands);
typedef void (GLLOADER_APIENTRY *glGetPathCoordsNVFUNC)(GLuint path, GLfloat* coords);
typedef void (GLLOADER_APIENTRY *glGetPathDashArrayNVFUNC)(GLuint path, GLfloat* dashArray);
typedef void (GLLOADER_APIENTRY *glGetPathMetricsNVFUNC)(GLbitfield metricQueryMask, GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLsizei stride, GLfloat* metrics);
typedef void (GLLOADER_APIENTRY *glGetPathMetricRangeNVFUNC)(GLbitfield metricQueryMask, GLuint firstPathName, GLsizei numPaths, GLsizei stride, GLfloat* metrics);
typedef void (GLLOADER_APIENTRY *glGetPathSpacingNVFUNC)(GLenum pathListMode, GLsizei numPaths, GLenum pathNameType, const GLvoid* paths, GLuint pathBase, GLfloat advanceScale, GLfloat kerningScale, GLenum transformType, GLfloat* returnedSpacing);
typedef void (GLLOADER_APIENTRY *glGetPathColorGenivNVFUNC)(GLenum color, GLenum pname, GLint* value);
typedef void (GLLOADER_APIENTRY *glGetPathColorGenfvNVFUNC)(GLenum color, GLenum pname, GLfloat* value);
typedef void (GLLOADER_APIENTRY *glGetPathTexGenivNVFUNC)(GLenum texCoordSet, GLenum pname, GLint* value);
typedef void (GLLOADER_APIENTRY *glGetPathTexGenfvNVFUNC)(GLenum texCoordSet, GLenum pname, GLfloat* value);
typedef GLboolean (GLLOADER_APIENTRY *glIsPointInFillPathNVFUNC)(GLuint path, GLuint mask, GLfloat x, GLfloat y);
typedef GLboolean (GLLOADER_APIENTRY *glIsPointInStrokePathNVFUNC)(GLuint path, GLfloat x, GLfloat y);
typedef GLfloat (GLLOADER_APIENTRY *glGetPathLengthNVFUNC)(GLuint path, GLsizei startSegment, GLsizei numSegments);
typedef GLboolean (GLLOADER_APIENTRY *glPointAlongPathNVFUNC)(GLuint path, GLsizei startSegment, GLsizei numSegments, GLfloat distance, GLfloat* x, GLfloat* y, GLfloat* tangentX, GLfloat* tangentY);

extern GLLOADER_API glGenPathsNVFUNC glGenPathsNV;
extern GLLOADER_API glDeletePathsNVFUNC glDeletePathsNV;
extern GLLOADER_API glIsPathNVFUNC glIsPathNV;
extern GLLOADER_API glPathCommandsNVFUNC glPathCommandsNV;
extern GLLOADER_API glPathCoordsNVFUNC glPathCoordsNV;
extern GLLOADER_API glPathSubCommandsNVFUNC glPathSubCommandsNV;
extern GLLOADER_API glPathSubCoordsNVFUNC glPathSubCoordsNV;
extern GLLOADER_API glPathStringNVFUNC glPathStringNV;
extern GLLOADER_API glPathGlyphsNVFUNC glPathGlyphsNV;
extern GLLOADER_API glPathGlyphRangeNVFUNC glPathGlyphRangeNV;
extern GLLOADER_API glWeightPathsNVFUNC glWeightPathsNV;
extern GLLOADER_API glCopyPathNVFUNC glCopyPathNV;
extern GLLOADER_API glInterpolatePathsNVFUNC glInterpolatePathsNV;
extern GLLOADER_API glTransformPathNVFUNC glTransformPathNV;
extern GLLOADER_API glPathParameterivNVFUNC glPathParameterivNV;
extern GLLOADER_API glPathParameteriNVFUNC glPathParameteriNV;
extern GLLOADER_API glPathParameterfvNVFUNC glPathParameterfvNV;
extern GLLOADER_API glPathParameterfNVFUNC glPathParameterfNV;
extern GLLOADER_API glPathDashArrayNVFUNC glPathDashArrayNV;
extern GLLOADER_API glPathStencilFuncNVFUNC glPathStencilFuncNV;
extern GLLOADER_API glPathStencilDepthOffsetNVFUNC glPathStencilDepthOffsetNV;
extern GLLOADER_API glStencilFillPathNVFUNC glStencilFillPathNV;
extern GLLOADER_API glStencilStrokePathNVFUNC glStencilStrokePathNV;
extern GLLOADER_API glStencilFillPathInstancedNVFUNC glStencilFillPathInstancedNV;
extern GLLOADER_API glStencilStrokePathInstancedNVFUNC glStencilStrokePathInstancedNV;
extern GLLOADER_API glPathCoverDepthFuncNVFUNC glPathCoverDepthFuncNV;
extern GLLOADER_API glPathColorGenNVFUNC glPathColorGenNV;
extern GLLOADER_API glPathTexGenNVFUNC glPathTexGenNV;
extern GLLOADER_API glPathFogGenNVFUNC glPathFogGenNV;
extern GLLOADER_API glCoverFillPathNVFUNC glCoverFillPathNV;
extern GLLOADER_API glCoverStrokePathNVFUNC glCoverStrokePathNV;
extern GLLOADER_API glCoverFillPathInstancedNVFUNC glCoverFillPathInstancedNV;
extern GLLOADER_API glCoverStrokePathInstancedNVFUNC glCoverStrokePathInstancedNV;
extern GLLOADER_API glGetPathParameterivNVFUNC glGetPathParameterivNV;
extern GLLOADER_API glGetPathParameterfvNVFUNC glGetPathParameterfvNV;
extern GLLOADER_API glGetPathCommandsNVFUNC glGetPathCommandsNV;
extern GLLOADER_API glGetPathCoordsNVFUNC glGetPathCoordsNV;
extern GLLOADER_API glGetPathDashArrayNVFUNC glGetPathDashArrayNV;
extern GLLOADER_API glGetPathMetricsNVFUNC glGetPathMetricsNV;
extern GLLOADER_API glGetPathMetricRangeNVFUNC glGetPathMetricRangeNV;
extern GLLOADER_API glGetPathSpacingNVFUNC glGetPathSpacingNV;
extern GLLOADER_API glGetPathColorGenivNVFUNC glGetPathColorGenivNV;
extern GLLOADER_API glGetPathColorGenfvNVFUNC glGetPathColorGenfvNV;
extern GLLOADER_API glGetPathTexGenivNVFUNC glGetPathTexGenivNV;
extern GLLOADER_API glGetPathTexGenfvNVFUNC glGetPathTexGenfvNV;
extern GLLOADER_API glIsPointInFillPathNVFUNC glIsPointInFillPathNV;
extern GLLOADER_API glIsPointInStrokePathNVFUNC glIsPointInStrokePathNV;
extern GLLOADER_API glGetPathLengthNVFUNC glGetPathLengthNV;
extern GLLOADER_API glPointAlongPathNVFUNC glPointAlongPathNV;

#endif

#ifdef GLES_NV_polygon_mode

typedef void (GLLOADER_APIENTRY *glPolygonModeNVFUNC)(GLenum face, GLenum mode);

extern GLLOADER_API glPolygonModeNVFUNC glPolygonModeNV;

#endif

#ifdef GLES_NV_read_buffer

typedef void (GLLOADER_APIENTRY *glReadBufferNVFUNC)(GLenum mode);

extern GLLOADER_API glReadBufferNVFUNC glReadBufferNV;

#endif

#ifdef GLES_NV_sample_locations

typedef void (GLLOADER_APIENTRY *glFramebufferSampleLocationsfvNVFUNC)(GLenum target, GLuint start, GLsizei count, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferSampleLocationsfvNVFUNC)(GLuint framebuffer, GLuint start, GLsizei count, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glResolveDepthValuesNVFUNC)();

extern GLLOADER_API glFramebufferSampleLocationsfvNVFUNC glFramebufferSampleLocationsfvNV;
extern GLLOADER_API glNamedFramebufferSampleLocationsfvNVFUNC glNamedFramebufferSampleLocationsfvNV;
extern GLLOADER_API glResolveDepthValuesNVFUNC glResolveDepthValuesNV;

#endif

#ifdef GLES_NV_texture_array

typedef void (GLLOADER_APIENTRY *glTexImage3DNVFUNC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage3DNVFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage3DNVFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage3DNVFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage3DNVFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureLayerNVFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);

extern GLLOADER_API glTexImage3DNVFUNC glTexImage3DNV;
extern GLLOADER_API glTexSubImage3DNVFUNC glTexSubImage3DNV;
extern GLLOADER_API glCopyTexSubImage3DNVFUNC glCopyTexSubImage3DNV;
extern GLLOADER_API glCompressedTexImage3DNVFUNC glCompressedTexImage3DNV;
extern GLLOADER_API glCompressedTexSubImage3DNVFUNC glCompressedTexSubImage3DNV;
extern GLLOADER_API glFramebufferTextureLayerNVFUNC glFramebufferTextureLayerNV;

#endif

#ifdef GLES_NV_viewport_array

typedef void (GLLOADER_APIENTRY *glViewportArrayvNVFUNC)(GLuint first, GLsizei count, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glViewportIndexedfNVFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GLLOADER_APIENTRY *glViewportIndexedfvNVFUNC)(GLuint index, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glScissorArrayvNVFUNC)(GLuint first, GLsizei count, GLint const * v);
typedef void (GLLOADER_APIENTRY *glScissorIndexedNVFUNC)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glScissorIndexedvNVFUNC)(GLuint index, GLint const * v);
typedef void (GLLOADER_APIENTRY *glDepthRangeArrayfvNVFUNC)(GLuint first, GLsizei count, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glDepthRangeIndexedfNVFUNC)(GLuint index, GLfloat n, GLfloat f);
typedef void (GLLOADER_APIENTRY *glGetFloati_vNVFUNC)(GLenum target, GLuint index, GLfloat* data);
typedef void (GLLOADER_APIENTRY *glEnableiNVFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableiNVFUNC)(GLenum target, GLuint index);
typedef GLboolean (GLLOADER_APIENTRY *glIsEnablediNVFUNC)(GLenum target, GLuint index);

extern GLLOADER_API glViewportArrayvNVFUNC glViewportArrayvNV;
extern GLLOADER_API glViewportIndexedfNVFUNC glViewportIndexedfNV;
extern GLLOADER_API glViewportIndexedfvNVFUNC glViewportIndexedfvNV;
extern GLLOADER_API glScissorArrayvNVFUNC glScissorArrayvNV;
extern GLLOADER_API glScissorIndexedNVFUNC glScissorIndexedNV;
extern GLLOADER_API glScissorIndexedvNVFUNC glScissorIndexedvNV;
extern GLLOADER_API glDepthRangeArrayfvNVFUNC glDepthRangeArrayfvNV;
extern GLLOADER_API glDepthRangeIndexedfNVFUNC glDepthRangeIndexedfNV;
extern GLLOADER_API glGetFloati_vNVFUNC glGetFloati_vNV;
extern GLLOADER_API glEnableiNVFUNC glEnableiNV;
extern GLLOADER_API glDisableiNVFUNC glDisableiNV;
extern GLLOADER_API glIsEnablediNVFUNC glIsEnablediNV;

#endif

#ifdef GLES_OES_blend_equation_separate

typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateOESFUNC)(GLenum modeRGB, GLenum modeAlpha);

extern GLLOADER_API glBlendEquationSeparateOESFUNC glBlendEquationSeparateOES;

#endif

#ifdef GLES_OES_blend_func_separate

typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateOESFUNC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

extern GLLOADER_API glBlendFuncSeparateOESFUNC glBlendFuncSeparateOES;

#endif

#ifdef GLES_OES_blend_subtract

typedef void (GLLOADER_APIENTRY *glBlendEquationOESFUNC)(GLenum mode);

extern GLLOADER_API glBlendEquationOESFUNC glBlendEquationOES;

#endif

#ifdef GLES_OES_byte_coordinates

typedef void (GLLOADER_APIENTRY *glVertex2bOESFUNC)(GLbyte x, GLbyte y);
typedef void (GLLOADER_APIENTRY *glVertex3bOESFUNC)(GLbyte x, GLbyte y, GLbyte z);
typedef void (GLLOADER_APIENTRY *glVertex4bOESFUNC)(GLbyte x, GLbyte y, GLbyte z, GLbyte w);
typedef void (GLLOADER_APIENTRY *glVertex2bvOESFUNC)(GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertex3bvOESFUNC)(GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertex4bvOESFUNC)(GLbyte* v);
typedef void (GLLOADER_APIENTRY *glTexCoord1bOESFUNC)(GLbyte s);
typedef void (GLLOADER_APIENTRY *glTexCoord2bOESFUNC)(GLbyte s, GLbyte t);
typedef void (GLLOADER_APIENTRY *glTexCoord3bOESFUNC)(GLbyte s, GLbyte t, GLbyte r);
typedef void (GLLOADER_APIENTRY *glTexCoord4bOESFUNC)(GLbyte s, GLbyte t, GLbyte r, GLbyte q);
typedef void (GLLOADER_APIENTRY *glTexCoord1bvOESFUNC)(GLbyte* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2bvOESFUNC)(GLbyte* v);
typedef void (GLLOADER_APIENTRY *glTexCoord3bvOESFUNC)(GLbyte* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4bvOESFUNC)(GLbyte* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1bOESFUNC)(GLenum target, GLbyte s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2bOESFUNC)(GLenum target, GLbyte s, GLbyte t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3bOESFUNC)(GLenum target, GLbyte s, GLbyte t, GLbyte r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4bOESFUNC)(GLenum target, GLbyte s, GLbyte t, GLbyte r, GLbyte q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1bvOESFUNC)(GLenum target, GLbyte* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2bvOESFUNC)(GLenum target, GLbyte* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3bvOESFUNC)(GLenum target, GLbyte* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4bvOESFUNC)(GLenum target, GLbyte* v);

extern GLLOADER_API glVertex2bOESFUNC glVertex2bOES;
extern GLLOADER_API glVertex3bOESFUNC glVertex3bOES;
extern GLLOADER_API glVertex4bOESFUNC glVertex4bOES;
extern GLLOADER_API glVertex2bvOESFUNC glVertex2bvOES;
extern GLLOADER_API glVertex3bvOESFUNC glVertex3bvOES;
extern GLLOADER_API glVertex4bvOESFUNC glVertex4bvOES;
extern GLLOADER_API glTexCoord1bOESFUNC glTexCoord1bOES;
extern GLLOADER_API glTexCoord2bOESFUNC glTexCoord2bOES;
extern GLLOADER_API glTexCoord3bOESFUNC glTexCoord3bOES;
extern GLLOADER_API glTexCoord4bOESFUNC glTexCoord4bOES;
extern GLLOADER_API glTexCoord1bvOESFUNC glTexCoord1bvOES;
extern GLLOADER_API glTexCoord2bvOESFUNC glTexCoord2bvOES;
extern GLLOADER_API glTexCoord3bvOESFUNC glTexCoord3bvOES;
extern GLLOADER_API glTexCoord4bvOESFUNC glTexCoord4bvOES;
extern GLLOADER_API glMultiTexCoord1bOESFUNC glMultiTexCoord1bOES;
extern GLLOADER_API glMultiTexCoord2bOESFUNC glMultiTexCoord2bOES;
extern GLLOADER_API glMultiTexCoord3bOESFUNC glMultiTexCoord3bOES;
extern GLLOADER_API glMultiTexCoord4bOESFUNC glMultiTexCoord4bOES;
extern GLLOADER_API glMultiTexCoord1bvOESFUNC glMultiTexCoord1bvOES;
extern GLLOADER_API glMultiTexCoord2bvOESFUNC glMultiTexCoord2bvOES;
extern GLLOADER_API glMultiTexCoord3bvOESFUNC glMultiTexCoord3bvOES;
extern GLLOADER_API glMultiTexCoord4bvOESFUNC glMultiTexCoord4bvOES;

#endif

#ifdef GLES_OES_copy_image

typedef void (GLLOADER_APIENTRY *glCopyImageSubDataOESFUNC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

extern GLLOADER_API glCopyImageSubDataOESFUNC glCopyImageSubDataOES;

#endif

#ifdef GLES_OES_draw_buffers_indexed

typedef void (GLLOADER_APIENTRY *glEnableiOESFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableiOESFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glBlendEquationiOESFUNC)(GLuint buf, GLenum mode);
typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateiOESFUNC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GLLOADER_APIENTRY *glBlendFunciOESFUNC)(GLuint buf, GLenum src, GLenum dst);
typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateiOESFUNC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GLLOADER_APIENTRY *glColorMaskiOESFUNC)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GLLOADER_APIENTRY *glIsEnablediOESFUNC)(GLenum target, GLuint index);

extern GLLOADER_API glEnableiOESFUNC glEnableiOES;
extern GLLOADER_API glDisableiOESFUNC glDisableiOES;
extern GLLOADER_API glBlendEquationiOESFUNC glBlendEquationiOES;
extern GLLOADER_API glBlendEquationSeparateiOESFUNC glBlendEquationSeparateiOES;
extern GLLOADER_API glBlendFunciOESFUNC glBlendFunciOES;
extern GLLOADER_API glBlendFuncSeparateiOESFUNC glBlendFuncSeparateiOES;
extern GLLOADER_API glColorMaskiOESFUNC glColorMaskiOES;
extern GLLOADER_API glIsEnablediOESFUNC glIsEnablediOES;

#endif

#ifdef GLES_OES_draw_elements_base_vertex

typedef void (GLLOADER_APIENTRY *glDrawElementsBaseVertexOESFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glDrawRangeElementsBaseVertexOESFUNC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedBaseVertexOESFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsBaseVertexOESFUNC)(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei drawcount, const GLint* basevertex);

extern GLLOADER_API glDrawElementsBaseVertexOESFUNC glDrawElementsBaseVertexOES;
extern GLLOADER_API glDrawRangeElementsBaseVertexOESFUNC glDrawRangeElementsBaseVertexOES;
extern GLLOADER_API glDrawElementsInstancedBaseVertexOESFUNC glDrawElementsInstancedBaseVertexOES;
extern GLLOADER_API glMultiDrawElementsBaseVertexOESFUNC glMultiDrawElementsBaseVertexOES;

#endif

#ifdef GLES_OES_draw_texture

typedef void (GLLOADER_APIENTRY *glDrawTexsOESFUNC)(GLshort x, GLshort y, GLshort z, GLshort width, GLshort height);
typedef void (GLLOADER_APIENTRY *glDrawTexiOESFUNC)(GLint x, GLint y, GLint z, GLint width, GLint height);
typedef void (GLLOADER_APIENTRY *glDrawTexxOESFUNC)(GLfixed x, GLfixed y, GLfixed z, GLfixed width, GLfixed height);
typedef void (GLLOADER_APIENTRY *glDrawTexsvOESFUNC)(const GLshort* coords);
typedef void (GLLOADER_APIENTRY *glDrawTexivOESFUNC)(const GLint* coords);
typedef void (GLLOADER_APIENTRY *glDrawTexxvOESFUNC)(const GLfixed* coords);
typedef void (GLLOADER_APIENTRY *glDrawTexfOESFUNC)(GLfloat x, GLfloat y, GLfloat z, GLfloat width, GLfloat height);
typedef void (GLLOADER_APIENTRY *glDrawTexfvOESFUNC)(const GLfloat* coords);

extern GLLOADER_API glDrawTexsOESFUNC glDrawTexsOES;
extern GLLOADER_API glDrawTexiOESFUNC glDrawTexiOES;
extern GLLOADER_API glDrawTexxOESFUNC glDrawTexxOES;
extern GLLOADER_API glDrawTexsvOESFUNC glDrawTexsvOES;
extern GLLOADER_API glDrawTexivOESFUNC glDrawTexivOES;
extern GLLOADER_API glDrawTexxvOESFUNC glDrawTexxvOES;
extern GLLOADER_API glDrawTexfOESFUNC glDrawTexfOES;
extern GLLOADER_API glDrawTexfvOESFUNC glDrawTexfvOES;

#endif

#ifdef GLES_OES_EGL_image

typedef void (GLLOADER_APIENTRY *EGLImageTargetTexture2DOESFUNC)(GLenum target, GLeglImageOES image);
typedef void (GLLOADER_APIENTRY *EGLImageTargetRenderbufferStorageOESFUNC)(GLenum target, GLeglImageOES image);

extern GLLOADER_API EGLImageTargetTexture2DOESFUNC EGLImageTargetTexture2DOES;
extern GLLOADER_API EGLImageTargetRenderbufferStorageOESFUNC EGLImageTargetRenderbufferStorageOES;

#endif

#ifdef GLES_OES_fixed_point

typedef void (GLLOADER_APIENTRY *glVertex2xOESFUNC)(GLfixed x, GLfixed y);
typedef void (GLLOADER_APIENTRY *glVertex3xOESFUNC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glVertex4xOESFUNC)(GLfixed x, GLfixed y, GLfixed z, GLfixed w);
typedef void (GLLOADER_APIENTRY *glVertex2xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glVertex3xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glVertex4xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glNormal3xOESFUNC)(GLfixed nx, GLfixed ny, GLfixed nz);
typedef void (GLLOADER_APIENTRY *glNormal3xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glTexCoord1xOESFUNC)(GLfixed x);
typedef void (GLLOADER_APIENTRY *glTexCoord2xOESFUNC)(GLfixed x, GLfixed y);
typedef void (GLLOADER_APIENTRY *glTexCoord3xOESFUNC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glTexCoord4xOESFUNC)(GLfixed x, GLfixed y, GLfixed z, GLfixed w);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1xOESFUNC)(GLenum target, GLfixed s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2xOESFUNC)(GLenum target, GLfixed s, GLfixed t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3xOESFUNC)(GLenum target, GLfixed s, GLfixed t, GLfixed r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4xOESFUNC)(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1xvOESFUNC)(GLenum target, const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2xvOESFUNC)(GLenum target, const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3xvOESFUNC)(GLenum target, const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4xvOESFUNC)(GLenum target, const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glColor3xOESFUNC)(GLfixed red, GLfixed green, GLfixed blue);
typedef void (GLLOADER_APIENTRY *glColor4xOESFUNC)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef void (GLLOADER_APIENTRY *glColor3xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glColor4xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glIndexxOESFUNC)(GLfixed c);
typedef void (GLLOADER_APIENTRY *glIndexxvOESFUNC)(const GLfixed* c);
typedef void (GLLOADER_APIENTRY *glRectxOESFUNC)(GLfixed x1, GLfixed y1, GLfixed x2, GLfixed y2);
typedef void (GLLOADER_APIENTRY *glRectxvOESFUNC)(const GLfixed* v1, const GLfixed* v2);
typedef void (GLLOADER_APIENTRY *glDepthRangexOESFUNC)(GLclampx zNear, GLclampx zFar);
typedef void (GLLOADER_APIENTRY *glLoadMatrixxOESFUNC)(const GLfixed* m);
typedef void (GLLOADER_APIENTRY *glMultMatrixxOESFUNC)(const GLfixed* m);
typedef void (GLLOADER_APIENTRY *glLoadTransposeMatrixxOESFUNC)(const GLfixed* m);
typedef void (GLLOADER_APIENTRY *glMultTransposeMatrixxOESFUNC)(const GLfixed* m);
typedef void (GLLOADER_APIENTRY *glRotatexOESFUNC)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glScalexOESFUNC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glTranslatexOESFUNC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glFrustumxOESFUNC)(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
typedef void (GLLOADER_APIENTRY *glOrthoxOESFUNC)(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
typedef void (GLLOADER_APIENTRY *glTexGenxOESFUNC)(GLenum coord, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glTexGenxvOESFUNC)(GLenum coord, GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetTexGenxvOESFUNC)(GLenum coord, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glClipPlanexOESFUNC)(GLenum plane, const GLfixed* equation);
typedef void (GLLOADER_APIENTRY *glGetClipPlanexOESFUNC)(GLenum plane, GLfixed* equation);
typedef void (GLLOADER_APIENTRY *glRasterPos2xOESFUNC)(GLfixed x, GLfixed y);
typedef void (GLLOADER_APIENTRY *glRasterPos3xOESFUNC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glRasterPos4xOESFUNC)(GLfixed x, GLfixed y, GLfixed z, GLfixed w);
typedef void (GLLOADER_APIENTRY *glRasterPos2xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glRasterPos3xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glRasterPos4xvOESFUNC)(const GLfixed* v);
typedef void (GLLOADER_APIENTRY *glMaterialxOESFUNC)(GLenum face, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glMaterialxvOESFUNC)(GLenum face, GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetMaterialxOESFUNC)(GLenum face, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glLightxOESFUNC)(GLenum light, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glLightxvOESFUNC)(GLenum light, GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetLightxvOESFUNC)(GLenum light, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glLightModelxOESFUNC)(GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glLightModelxvOESFUNC)(GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glPointSizexOESFUNC)(GLfixed size);
typedef void (GLLOADER_APIENTRY *glPointParameterxvOESFUNC)(GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glLineWidthxOESFUNC)(GLfixed width);
typedef void (GLLOADER_APIENTRY *glPolygonOffsetxOESFUNC)(GLfixed factor, GLfixed units);
typedef void (GLLOADER_APIENTRY *glPixelStorexOESFUNC)(GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glPixelTransferxOESFUNC)(GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glPixelMapxOESFUNC)(GLenum map, GLsizei mapsize, const GLfixed* values);
typedef void (GLLOADER_APIENTRY *glGetPixelMapxvOESFUNC)(GLenum map, GLfixed* values);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterxOESFUNC)(GLenum target, GLenum pname, GLfixed params);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterxvOESFUNC)(GLenum target, GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetConvolutionParameterxvOESFUNC)(GLenum target, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetHistogramParameterxvOESFUNC)(GLenum target, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glPixelZoomxOESFUNC)(GLfixed xfactor, GLfixed yfactor);
typedef void (GLLOADER_APIENTRY *glBitmapxOESFUNC)(GLsizei width, GLsizei height, GLfixed xorig, GLfixed yorig, GLfixed xmove, GLfixed ymove, const GLubyte* bitmap);
typedef void (GLLOADER_APIENTRY *glTexParameterxOESFUNC)(GLenum target, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glGetTexParameterxvOESFUNC)(GLenum target, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetTexLevelParameterxvOESFUNC)(GLenum target, GLint level, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glPrioritizeTexturesxOESFUNC)(GLsizei n, const GLuint* textures, const GLclampx* priorities);
typedef void (GLLOADER_APIENTRY *glTexEnvxOESFUNC)(GLenum target, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glGetTexEnvxvOESFUNC)(GLenum target, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glFogxOESFUNC)(GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glFogxvOESFUNC)(GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glSampleCoveragexOESFUNC)(GLclampx value, GLboolean invert);
typedef void (GLLOADER_APIENTRY *glAlphaFuncxOESFUNC)(GLenum func, GLclampx ref);
typedef void (GLLOADER_APIENTRY *glBlendColorxOESFUNC)(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
typedef void (GLLOADER_APIENTRY *glClearColorxOESFUNC)(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
typedef void (GLLOADER_APIENTRY *glClearDepthxOESFUNC)(GLclampx depth);
typedef void (GLLOADER_APIENTRY *glClearAccumxOESFUNC)(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
typedef void (GLLOADER_APIENTRY *glAccumxOESFUNC)(GLenum op, GLfixed value);
typedef void (GLLOADER_APIENTRY *glMap1xOESFUNC)(GLenum target, GLfixed u1, GLfixed u2, GLint stride, GLint order, const GLfixed* points);
typedef void (GLLOADER_APIENTRY *glMap2xOESFUNC)(GLenum target, GLfixed u1, GLfixed u2, GLint ustride, GLint uorder, GLfixed v1, GLfixed v2, GLint vstride, GLint vorder, const GLfixed* points);
typedef void (GLLOADER_APIENTRY *glMapGrid1xOESFUNC)(GLint un, GLfixed u1, GLfixed u2);
typedef void (GLLOADER_APIENTRY *glMapGrid2xOESFUNC)(GLint un, GLfixed u1, GLfixed u2, GLint vn, GLfixed v1, GLfixed v2);
typedef void (GLLOADER_APIENTRY *glGetMapxvOESFUNC)(GLenum target, GLenum query, GLfixed* v);
typedef void (GLLOADER_APIENTRY *glEvalCoord1xOESFUNC)(GLfixed u);
typedef void (GLLOADER_APIENTRY *glEvalCoord1xvOESFUNC)(const GLfixed* u);
typedef void (GLLOADER_APIENTRY *glEvalCoord2xOESFUNC)(GLfixed u, GLfixed v);
typedef void (GLLOADER_APIENTRY *glEvalCoord2xvOESFUNC)(const GLfixed* u);
typedef void (GLLOADER_APIENTRY *glFeedbackBufferxOESFUNC)(GLsizei size, GLenum type, GLfixed* buffer);
typedef void (GLLOADER_APIENTRY *glPassThroughxOESFUNC)(GLfixed token);
typedef void (GLLOADER_APIENTRY *glGetFixedvOESFUNC)(GLenum pname, GLfixed* params);

extern GLLOADER_API glVertex2xOESFUNC glVertex2xOES;
extern GLLOADER_API glVertex3xOESFUNC glVertex3xOES;
extern GLLOADER_API glVertex4xOESFUNC glVertex4xOES;
extern GLLOADER_API glVertex2xvOESFUNC glVertex2xvOES;
extern GLLOADER_API glVertex3xvOESFUNC glVertex3xvOES;
extern GLLOADER_API glVertex4xvOESFUNC glVertex4xvOES;
extern GLLOADER_API glNormal3xOESFUNC glNormal3xOES;
extern GLLOADER_API glNormal3xvOESFUNC glNormal3xvOES;
extern GLLOADER_API glTexCoord1xOESFUNC glTexCoord1xOES;
extern GLLOADER_API glTexCoord2xOESFUNC glTexCoord2xOES;
extern GLLOADER_API glTexCoord3xOESFUNC glTexCoord3xOES;
extern GLLOADER_API glTexCoord4xOESFUNC glTexCoord4xOES;
extern GLLOADER_API glMultiTexCoord1xOESFUNC glMultiTexCoord1xOES;
extern GLLOADER_API glMultiTexCoord2xOESFUNC glMultiTexCoord2xOES;
extern GLLOADER_API glMultiTexCoord3xOESFUNC glMultiTexCoord3xOES;
extern GLLOADER_API glMultiTexCoord4xOESFUNC glMultiTexCoord4xOES;
extern GLLOADER_API glMultiTexCoord1xvOESFUNC glMultiTexCoord1xvOES;
extern GLLOADER_API glMultiTexCoord2xvOESFUNC glMultiTexCoord2xvOES;
extern GLLOADER_API glMultiTexCoord3xvOESFUNC glMultiTexCoord3xvOES;
extern GLLOADER_API glMultiTexCoord4xvOESFUNC glMultiTexCoord4xvOES;
extern GLLOADER_API glColor3xOESFUNC glColor3xOES;
extern GLLOADER_API glColor4xOESFUNC glColor4xOES;
extern GLLOADER_API glColor3xvOESFUNC glColor3xvOES;
extern GLLOADER_API glColor4xvOESFUNC glColor4xvOES;
extern GLLOADER_API glIndexxOESFUNC glIndexxOES;
extern GLLOADER_API glIndexxvOESFUNC glIndexxvOES;
extern GLLOADER_API glRectxOESFUNC glRectxOES;
extern GLLOADER_API glRectxvOESFUNC glRectxvOES;
extern GLLOADER_API glDepthRangexOESFUNC glDepthRangexOES;
extern GLLOADER_API glLoadMatrixxOESFUNC glLoadMatrixxOES;
extern GLLOADER_API glMultMatrixxOESFUNC glMultMatrixxOES;
extern GLLOADER_API glLoadTransposeMatrixxOESFUNC glLoadTransposeMatrixxOES;
extern GLLOADER_API glMultTransposeMatrixxOESFUNC glMultTransposeMatrixxOES;
extern GLLOADER_API glRotatexOESFUNC glRotatexOES;
extern GLLOADER_API glScalexOESFUNC glScalexOES;
extern GLLOADER_API glTranslatexOESFUNC glTranslatexOES;
extern GLLOADER_API glFrustumxOESFUNC glFrustumxOES;
extern GLLOADER_API glOrthoxOESFUNC glOrthoxOES;
extern GLLOADER_API glTexGenxOESFUNC glTexGenxOES;
extern GLLOADER_API glTexGenxvOESFUNC glTexGenxvOES;
extern GLLOADER_API glGetTexGenxvOESFUNC glGetTexGenxvOES;
extern GLLOADER_API glClipPlanexOESFUNC glClipPlanexOES;
extern GLLOADER_API glGetClipPlanexOESFUNC glGetClipPlanexOES;
extern GLLOADER_API glRasterPos2xOESFUNC glRasterPos2xOES;
extern GLLOADER_API glRasterPos3xOESFUNC glRasterPos3xOES;
extern GLLOADER_API glRasterPos4xOESFUNC glRasterPos4xOES;
extern GLLOADER_API glRasterPos2xvOESFUNC glRasterPos2xvOES;
extern GLLOADER_API glRasterPos3xvOESFUNC glRasterPos3xvOES;
extern GLLOADER_API glRasterPos4xvOESFUNC glRasterPos4xvOES;
extern GLLOADER_API glMaterialxOESFUNC glMaterialxOES;
extern GLLOADER_API glMaterialxvOESFUNC glMaterialxvOES;
extern GLLOADER_API glGetMaterialxOESFUNC glGetMaterialxOES;
extern GLLOADER_API glLightxOESFUNC glLightxOES;
extern GLLOADER_API glLightxvOESFUNC glLightxvOES;
extern GLLOADER_API glGetLightxvOESFUNC glGetLightxvOES;
extern GLLOADER_API glLightModelxOESFUNC glLightModelxOES;
extern GLLOADER_API glLightModelxvOESFUNC glLightModelxvOES;
extern GLLOADER_API glPointSizexOESFUNC glPointSizexOES;
extern GLLOADER_API glPointParameterxvOESFUNC glPointParameterxvOES;
extern GLLOADER_API glLineWidthxOESFUNC glLineWidthxOES;
extern GLLOADER_API glPolygonOffsetxOESFUNC glPolygonOffsetxOES;
extern GLLOADER_API glPixelStorexOESFUNC glPixelStorexOES;
extern GLLOADER_API glPixelTransferxOESFUNC glPixelTransferxOES;
extern GLLOADER_API glPixelMapxOESFUNC glPixelMapxOES;
extern GLLOADER_API glGetPixelMapxvOESFUNC glGetPixelMapxvOES;
extern GLLOADER_API glConvolutionParameterxOESFUNC glConvolutionParameterxOES;
extern GLLOADER_API glConvolutionParameterxvOESFUNC glConvolutionParameterxvOES;
extern GLLOADER_API glGetConvolutionParameterxvOESFUNC glGetConvolutionParameterxvOES;
extern GLLOADER_API glGetHistogramParameterxvOESFUNC glGetHistogramParameterxvOES;
extern GLLOADER_API glPixelZoomxOESFUNC glPixelZoomxOES;
extern GLLOADER_API glBitmapxOESFUNC glBitmapxOES;
extern GLLOADER_API glTexParameterxOESFUNC glTexParameterxOES;
extern GLLOADER_API glGetTexParameterxvOESFUNC glGetTexParameterxvOES;
extern GLLOADER_API glGetTexLevelParameterxvOESFUNC glGetTexLevelParameterxvOES;
extern GLLOADER_API glPrioritizeTexturesxOESFUNC glPrioritizeTexturesxOES;
extern GLLOADER_API glTexEnvxOESFUNC glTexEnvxOES;
extern GLLOADER_API glGetTexEnvxvOESFUNC glGetTexEnvxvOES;
extern GLLOADER_API glFogxOESFUNC glFogxOES;
extern GLLOADER_API glFogxvOESFUNC glFogxvOES;
extern GLLOADER_API glSampleCoveragexOESFUNC glSampleCoveragexOES;
extern GLLOADER_API glAlphaFuncxOESFUNC glAlphaFuncxOES;
extern GLLOADER_API glBlendColorxOESFUNC glBlendColorxOES;
extern GLLOADER_API glClearColorxOESFUNC glClearColorxOES;
extern GLLOADER_API glClearDepthxOESFUNC glClearDepthxOES;
extern GLLOADER_API glClearAccumxOESFUNC glClearAccumxOES;
extern GLLOADER_API glAccumxOESFUNC glAccumxOES;
extern GLLOADER_API glMap1xOESFUNC glMap1xOES;
extern GLLOADER_API glMap2xOESFUNC glMap2xOES;
extern GLLOADER_API glMapGrid1xOESFUNC glMapGrid1xOES;
extern GLLOADER_API glMapGrid2xOESFUNC glMapGrid2xOES;
extern GLLOADER_API glGetMapxvOESFUNC glGetMapxvOES;
extern GLLOADER_API glEvalCoord1xOESFUNC glEvalCoord1xOES;
extern GLLOADER_API glEvalCoord1xvOESFUNC glEvalCoord1xvOES;
extern GLLOADER_API glEvalCoord2xOESFUNC glEvalCoord2xOES;
extern GLLOADER_API glEvalCoord2xvOESFUNC glEvalCoord2xvOES;
extern GLLOADER_API glFeedbackBufferxOESFUNC glFeedbackBufferxOES;
extern GLLOADER_API glPassThroughxOESFUNC glPassThroughxOES;
extern GLLOADER_API glGetFixedvOESFUNC glGetFixedvOES;

#endif

#ifdef GLES_OES_framebuffer_object

typedef GLboolean (GLLOADER_APIENTRY *glIsRenderbufferOESFUNC)(GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glBindRenderbufferOESFUNC)(GLenum target, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glDeleteRenderbuffersOESFUNC)(GLsizei n, const GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glGenRenderbuffersOESFUNC)(GLsizei n, GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glRenderbufferStorageOESFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetRenderbufferParameterivOESFUNC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean (GLLOADER_APIENTRY *glIsFramebufferOESFUNC)(GLuint framebuffer);
typedef void (GLLOADER_APIENTRY *glBindFramebufferOESFUNC)(GLenum target, GLuint framebuffer);
typedef void (GLLOADER_APIENTRY *glDeleteFramebuffersOESFUNC)(GLsizei n, const GLuint* framebuffers);
typedef void (GLLOADER_APIENTRY *glGenFramebuffersOESFUNC)(GLsizei n, GLuint* framebuffers);
typedef GLenum (GLLOADER_APIENTRY *glCheckFramebufferStatusOESFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture2DOESFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glFramebufferRenderbufferOESFUNC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glGetFramebufferAttachmentParameterivOESFUNC)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGenerateMipmapOESFUNC)(GLenum target);

extern GLLOADER_API glIsRenderbufferOESFUNC glIsRenderbufferOES;
extern GLLOADER_API glBindRenderbufferOESFUNC glBindRenderbufferOES;
extern GLLOADER_API glDeleteRenderbuffersOESFUNC glDeleteRenderbuffersOES;
extern GLLOADER_API glGenRenderbuffersOESFUNC glGenRenderbuffersOES;
extern GLLOADER_API glRenderbufferStorageOESFUNC glRenderbufferStorageOES;
extern GLLOADER_API glGetRenderbufferParameterivOESFUNC glGetRenderbufferParameterivOES;
extern GLLOADER_API glIsFramebufferOESFUNC glIsFramebufferOES;
extern GLLOADER_API glBindFramebufferOESFUNC glBindFramebufferOES;
extern GLLOADER_API glDeleteFramebuffersOESFUNC glDeleteFramebuffersOES;
extern GLLOADER_API glGenFramebuffersOESFUNC glGenFramebuffersOES;
extern GLLOADER_API glCheckFramebufferStatusOESFUNC glCheckFramebufferStatusOES;
extern GLLOADER_API glFramebufferTexture2DOESFUNC glFramebufferTexture2DOES;
extern GLLOADER_API glFramebufferRenderbufferOESFUNC glFramebufferRenderbufferOES;
extern GLLOADER_API glGetFramebufferAttachmentParameterivOESFUNC glGetFramebufferAttachmentParameterivOES;
extern GLLOADER_API glGenerateMipmapOESFUNC glGenerateMipmapOES;

#endif

#ifdef GLES_OES_geometry_shader

typedef void (GLLOADER_APIENTRY *glFramebufferTextureOESFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level);

extern GLLOADER_API glFramebufferTextureOESFUNC glFramebufferTextureOES;

#endif

#ifdef GLES_OES_get_program_binary

typedef void (GLLOADER_APIENTRY *glGetProgramBinaryOESFUNC)(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary);
typedef void (GLLOADER_APIENTRY *glProgramBinaryOESFUNC)(GLuint program, GLenum binaryFormat, const void* binary, GLint length);

extern GLLOADER_API glGetProgramBinaryOESFUNC glGetProgramBinaryOES;
extern GLLOADER_API glProgramBinaryOESFUNC glProgramBinaryOES;

#endif

#ifdef GLES_OES_mapbuffer

typedef void (GLLOADER_APIENTRY *glGetBufferPointervOESFUNC)(GLenum target, GLenum pname, void** params);
typedef void* (GLLOADER_APIENTRY *glMapBufferOESFUNC)(GLenum target, GLenum access);
typedef GLboolean (GLLOADER_APIENTRY *glUnmapBufferOESFUNC)(GLenum target);

extern GLLOADER_API glGetBufferPointervOESFUNC glGetBufferPointervOES;
extern GLLOADER_API glMapBufferOESFUNC glMapBufferOES;
extern GLLOADER_API glUnmapBufferOESFUNC glUnmapBufferOES;

#endif

#ifdef GLES_OES_matrix_palette

typedef void (GLLOADER_APIENTRY *glCurrentPaletteMatrixOESFUNC)(GLuint matrixpaletteindex);
typedef void (GLLOADER_APIENTRY *glLoadPaletteFromModelViewMatrixOESFUNC)();
typedef void (GLLOADER_APIENTRY *glMatrixIndexPointerOESFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glWeightPointerOESFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);

extern GLLOADER_API glCurrentPaletteMatrixOESFUNC glCurrentPaletteMatrixOES;
extern GLLOADER_API glLoadPaletteFromModelViewMatrixOESFUNC glLoadPaletteFromModelViewMatrixOES;
extern GLLOADER_API glMatrixIndexPointerOESFUNC glMatrixIndexPointerOES;
extern GLLOADER_API glWeightPointerOESFUNC glWeightPointerOES;

#endif

#ifdef GLES_OES_point_size_array

typedef void (GLLOADER_APIENTRY *glPointSizePointerOESFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);

extern GLLOADER_API glPointSizePointerOESFUNC glPointSizePointerOES;

#endif

#ifdef GLES_OES_primitive_bounding_box

typedef void (GLLOADER_APIENTRY *glPrimitiveBoundingBoxOESFUNC)(GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);

extern GLLOADER_API glPrimitiveBoundingBoxOESFUNC glPrimitiveBoundingBoxOES;

#endif

#ifdef GLES_OES_query_matrix

typedef void (GLLOADER_APIENTRY *glQueryMatrixxOESFUNC)(GLfixed* mantissa, GLint* exponent);

extern GLLOADER_API glQueryMatrixxOESFUNC glQueryMatrixxOES;

#endif

#ifdef GL_OES_sample_shading

typedef void (GLLOADER_APIENTRY *glMinSampleShadingOESFUNC)(GLfloat value);

extern GLLOADER_API glMinSampleShadingOESFUNC glMinSampleShadingOES;

#endif

#ifdef GLES_OES_shader_binary

typedef void (GLLOADER_APIENTRY *glShaderBinaryOESFUNC)(GLint n, GLuint* shaders, GLenum binaryformat, const void* binary, GLint length);

extern GLLOADER_API glShaderBinaryOESFUNC glShaderBinaryOES;

#endif

#ifdef GLES_OES_shader_source

typedef void (GLLOADER_APIENTRY *glReleaseShaderCompilerOESFUNC)();
typedef void (GLLOADER_APIENTRY *glGetShaderPrecisionFormatOESFUNC)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);

extern GLLOADER_API glReleaseShaderCompilerOESFUNC glReleaseShaderCompilerOES;
extern GLLOADER_API glGetShaderPrecisionFormatOESFUNC glGetShaderPrecisionFormatOES;

#endif

#ifdef GLES_OES_single_precision

typedef void (GLLOADER_APIENTRY *glDepthRangefOESFUNC)(GLclampf n, GLclampf f);
typedef void (GLLOADER_APIENTRY *glFrustumfOESFUNC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (GLLOADER_APIENTRY *glOrthofOESFUNC)(GLfloat l, GLfloat r, GLfloat b, GLfloat t, GLfloat n, GLfloat f);
typedef void (GLLOADER_APIENTRY *glClipPlanefOESFUNC)(GLenum plane, const GLfloat* equation);
typedef void (GLLOADER_APIENTRY *glGetClipPlanefOESFUNC)(GLenum plane, GLfloat* equation);
typedef void (GLLOADER_APIENTRY *glClearDepthfOESFUNC)(GLclampd depth);

extern GLLOADER_API glDepthRangefOESFUNC glDepthRangefOES;
extern GLLOADER_API glFrustumfOESFUNC glFrustumfOES;
extern GLLOADER_API glOrthofOESFUNC glOrthofOES;
extern GLLOADER_API glClipPlanefOESFUNC glClipPlanefOES;
extern GLLOADER_API glGetClipPlanefOESFUNC glGetClipPlanefOES;
extern GLLOADER_API glClearDepthfOESFUNC glClearDepthfOES;

#endif

#ifdef GLES_OES_tessellation_shader

typedef void (GLLOADER_APIENTRY *glPatchParameteriOESFUNC)(GLenum pname, GLint value);

extern GLLOADER_API glPatchParameteriOESFUNC glPatchParameteriOES;

#endif

#ifdef GLES_OES_texture_3D

typedef void (GLLOADER_APIENTRY *glTexImage3DOESFUNC)(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage3DOESFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage3DOESFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage3DOESFUNC)(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage3DOESFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture3DOESFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);

extern GLLOADER_API glTexImage3DOESFUNC glTexImage3DOES;
extern GLLOADER_API glTexSubImage3DOESFUNC glTexSubImage3DOES;
extern GLLOADER_API glCopyTexSubImage3DOESFUNC glCopyTexSubImage3DOES;
extern GLLOADER_API glCompressedTexImage3DOESFUNC glCompressedTexImage3DOES;
extern GLLOADER_API glCompressedTexSubImage3DOESFUNC glCompressedTexSubImage3DOES;
extern GLLOADER_API glFramebufferTexture3DOESFUNC glFramebufferTexture3DOES;

#endif

#ifdef GLES_OES_texture_border_clamp

typedef void (GLLOADER_APIENTRY *glTexParameterIivOESFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glTexParameterIuivOESFUNC)(GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIivOESFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIuivOESFUNC)(GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glSamplerParameterIivOESFUNC)(GLuint sampler, GLenum pname, const GLint* param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterIuivOESFUNC)(GLuint sampler, GLenum pname, const GLuint* param);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterIivOESFUNC)(GLuint sampler, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterIuivOESFUNC)(GLuint sampler, GLenum pname, GLuint* params);

extern GLLOADER_API glTexParameterIivOESFUNC glTexParameterIivOES;
extern GLLOADER_API glTexParameterIuivOESFUNC glTexParameterIuivOES;
extern GLLOADER_API glGetTexParameterIivOESFUNC glGetTexParameterIivOES;
extern GLLOADER_API glGetTexParameterIuivOESFUNC glGetTexParameterIuivOES;
extern GLLOADER_API glSamplerParameterIivOESFUNC glSamplerParameterIivOES;
extern GLLOADER_API glSamplerParameterIuivOESFUNC glSamplerParameterIuivOES;
extern GLLOADER_API glGetSamplerParameterIivOESFUNC glGetSamplerParameterIivOES;
extern GLLOADER_API glGetSamplerParameterIuivOESFUNC glGetSamplerParameterIuivOES;

#endif

#ifdef GLES_OES_texture_buffer

typedef void (GLLOADER_APIENTRY *glTexBufferOESFUNC)(GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTexBufferRangeOESFUNC)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

extern GLLOADER_API glTexBufferOESFUNC glTexBufferOES;
extern GLLOADER_API glTexBufferRangeOESFUNC glTexBufferRangeOES;

#endif

#ifdef GLES_OES_texture_cube_map

typedef void (GLLOADER_APIENTRY *glTexGenfOESFUNC)(GLenum coord, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTexGenfvOESFUNC)(GLenum coord, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTexGeniOESFUNC)(GLenum coord, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTexGenivOESFUNC)(GLenum coord, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexGenfvOESFUNC)(GLenum coord, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTexGenivOESFUNC)(GLenum coord, GLenum pname, GLint* params);

extern GLLOADER_API glTexGenfOESFUNC glTexGenfOES;
extern GLLOADER_API glTexGenfvOESFUNC glTexGenfvOES;
extern GLLOADER_API glTexGeniOESFUNC glTexGeniOES;
extern GLLOADER_API glTexGenivOESFUNC glTexGenivOES;
extern GLLOADER_API glGetTexGenfvOESFUNC glGetTexGenfvOES;
extern GLLOADER_API glGetTexGenivOESFUNC glGetTexGenivOES;

#endif

#ifdef GL_OES_texture_storage_multisample_2d_array

typedef void (GLLOADER_APIENTRY *glTexImage3DMultisampleOESFUNC)(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

extern GLLOADER_API glTexImage3DMultisampleOESFUNC glTexImage3DMultisampleOES;

#endif

#ifdef GLES_OES_texture_view

typedef void (GLLOADER_APIENTRY *glTextureViewOESFUNC)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

extern GLLOADER_API glTextureViewOESFUNC glTextureViewOES;

#endif

#ifdef GLES_OES_vertex_array_object

typedef void (GLLOADER_APIENTRY *glBindVertexArrayOESFUNC)(GLuint array);
typedef void (GLLOADER_APIENTRY *glDeleteVertexArraysOESFUNC)(GLsizei n, const GLuint* arrays);
typedef void (GLLOADER_APIENTRY *glGenVertexArraysOESFUNC)(GLsizei n, GLuint* arrays);
typedef GLboolean (GLLOADER_APIENTRY *glIsVertexArrayOESFUNC)(GLuint array);

extern GLLOADER_API glBindVertexArrayOESFUNC glBindVertexArrayOES;
extern GLLOADER_API glDeleteVertexArraysOESFUNC glDeleteVertexArraysOES;
extern GLLOADER_API glGenVertexArraysOESFUNC glGenVertexArraysOES;
extern GLLOADER_API glIsVertexArrayOESFUNC glIsVertexArrayOES;

#endif

#ifdef GLES_OVR_multiview

typedef void (GLLOADER_APIENTRY *glFramebufferTextureMultiviewOVRFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);

extern GLLOADER_API glFramebufferTextureMultiviewOVRFUNC glFramebufferTextureMultiviewOVR;

#endif

#ifdef GLES_QCOM_driver_control

typedef void (GLLOADER_APIENTRY *glGetDriverControlsQCOMFUNC)(GLint* num, GLsizei size, GLuint* driverControls);
typedef void (GLLOADER_APIENTRY *glGetDriverControlStringQCOMFUNC)(GLuint driverControl, GLsizei bufSize, GLsizei* length, GLchar* driverControlString);
typedef void (GLLOADER_APIENTRY *glEnableDriverControlQCOMFUNC)(GLuint driverControl);
typedef void (GLLOADER_APIENTRY *glDisableDriverControlQCOMFUNC)(GLuint driverControl);

extern GLLOADER_API glGetDriverControlsQCOMFUNC glGetDriverControlsQCOM;
extern GLLOADER_API glGetDriverControlStringQCOMFUNC glGetDriverControlStringQCOM;
extern GLLOADER_API glEnableDriverControlQCOMFUNC glEnableDriverControlQCOM;
extern GLLOADER_API glDisableDriverControlQCOMFUNC glDisableDriverControlQCOM;

#endif

#ifdef GLES_QCOM_extended_get

typedef void (GLLOADER_APIENTRY *glExtGetTexturesQCOMFUNC)(GLuint* textures, GLint maxTextures, GLint* numTextures);
typedef void (GLLOADER_APIENTRY *glExtGetBuffersQCOMFUNC)(GLuint* buffers, GLint maxBuffers, GLint* numBuffers);
typedef void (GLLOADER_APIENTRY *glExtGetRenderbuffersQCOMFUNC)(GLuint* renderbuffers, GLint maxRenderbuffers, GLint* numRenderbuffers);
typedef void (GLLOADER_APIENTRY *glExtGetFramebuffersQCOMFUNC)(GLuint* framebuffers, GLint maxFramebuffers, GLint* numFramebuffers);
typedef void (GLLOADER_APIENTRY *glExtGetTexLevelParameterivQCOMFUNC)(GLuint texture, GLenum face, GLint level, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glExtTexObjectStateOverrideiQCOMFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glExtGetTexSubImageQCOMFUNC)(GLenum targe, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void* texels);
typedef void (GLLOADER_APIENTRY *glExtGetBufferPointervQCOMFUNC)(GLenum target, void** params);

extern GLLOADER_API glExtGetTexturesQCOMFUNC glExtGetTexturesQCOM;
extern GLLOADER_API glExtGetBuffersQCOMFUNC glExtGetBuffersQCOM;
extern GLLOADER_API glExtGetRenderbuffersQCOMFUNC glExtGetRenderbuffersQCOM;
extern GLLOADER_API glExtGetFramebuffersQCOMFUNC glExtGetFramebuffersQCOM;
extern GLLOADER_API glExtGetTexLevelParameterivQCOMFUNC glExtGetTexLevelParameterivQCOM;
extern GLLOADER_API glExtTexObjectStateOverrideiQCOMFUNC glExtTexObjectStateOverrideiQCOM;
extern GLLOADER_API glExtGetTexSubImageQCOMFUNC glExtGetTexSubImageQCOM;
extern GLLOADER_API glExtGetBufferPointervQCOMFUNC glExtGetBufferPointervQCOM;

#endif

#ifdef GLES_QCOM_extended_get2

typedef void (GLLOADER_APIENTRY *glExtGetShadersQCOMFUNC)(GLuint* shaders, GLint maxShaders, GLint* numShaders);
typedef void (GLLOADER_APIENTRY *glExtGetProgramsQCOMFUNC)(GLuint* programs, GLint maxPrograms, GLint* numPrograms);
typedef GLboolean (GLLOADER_APIENTRY *glExtIsProgramBinaryQCOMFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glExtGetProgramBinarySourceQCOMFUNC)(GLuint program, GLenum shadertype, GLchar* source, GLint* length);

extern GLLOADER_API glExtGetShadersQCOMFUNC glExtGetShadersQCOM;
extern GLLOADER_API glExtGetProgramsQCOMFUNC glExtGetProgramsQCOM;
extern GLLOADER_API glExtIsProgramBinaryQCOMFUNC glExtIsProgramBinaryQCOM;
extern GLLOADER_API glExtGetProgramBinarySourceQCOMFUNC glExtGetProgramBinarySourceQCOM;

#endif

#ifdef GLES_QCOM_tiled_rendering

typedef void (GLLOADER_APIENTRY *glStartTilingQCOMFUNC)(GLuint x, GLuint y, GLuint width, GLuint height, GLbitfield preserveMask);
typedef void (GLLOADER_APIENTRY *glEndTilingQCOMFUNC)(GLbitfield preserveMask);

extern GLLOADER_API glStartTilingQCOMFUNC glStartTilingQCOM;
extern GLLOADER_API glEndTilingQCOMFUNC glEndTilingQCOM;

#endif

#ifdef GLES_VERSION_1_0

typedef void (GLLOADER_APIENTRY *glActiveTextureFUNC)(GLenum texture);
typedef void (GLLOADER_APIENTRY *glAlphaFuncFUNC)(GLenum func, GLclampf ref);
typedef void (GLLOADER_APIENTRY *glAlphaFuncxFUNC)(GLenum func, GLclampx ref);
typedef void (GLLOADER_APIENTRY *glBindTextureFUNC)(GLenum target, GLuint texture);
typedef void (GLLOADER_APIENTRY *glBlendFuncFUNC)(GLenum sfactor, GLenum dfactor);
typedef void (GLLOADER_APIENTRY *glClearFUNC)(GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glClearColorFUNC)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (GLLOADER_APIENTRY *glClearColorxFUNC)(GLclampx red, GLclampx green, GLclampx blue, GLclampx alpha);
typedef void (GLLOADER_APIENTRY *glClearDepthfFUNC)(GLclampf depth);
typedef void (GLLOADER_APIENTRY *glClearDepthxFUNC)(GLclampx depth);
typedef void (GLLOADER_APIENTRY *glClearStencilFUNC)(GLint s);
typedef void (GLLOADER_APIENTRY *glClientActiveTextureFUNC)(GLenum texture);
typedef void (GLLOADER_APIENTRY *glColor4fFUNC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLLOADER_APIENTRY *glColor4xFUNC)(GLfixed red, GLfixed green, GLfixed blue, GLfixed alpha);
typedef void (GLLOADER_APIENTRY *glColorMaskFUNC)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (GLLOADER_APIENTRY *glColorPointerFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage2DFUNC)(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage2DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCopyTexImage2DFUNC)(GLenum target, GLint level, GLenum internalFormat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage2DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glCullFaceFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glDeleteTexturesFUNC)(GLsizei n, const GLuint* textures);
typedef void (GLLOADER_APIENTRY *glDepthFuncFUNC)(GLenum func);
typedef void (GLLOADER_APIENTRY *glDepthMaskFUNC)(GLboolean flag);
typedef void (GLLOADER_APIENTRY *glDepthRangefFUNC)(GLclampf zNear, GLclampf zFar);
typedef void (GLLOADER_APIENTRY *glDepthRangexFUNC)(GLclampx zNear, GLclampx zFar);
typedef void (GLLOADER_APIENTRY *glDisableFUNC)(GLenum cap);
typedef void (GLLOADER_APIENTRY *glDisableClientStateFUNC)(GLenum array);
typedef void (GLLOADER_APIENTRY *glDrawArraysFUNC)(GLenum mode, GLint first, GLsizei count);
typedef void (GLLOADER_APIENTRY *glDrawElementsFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
typedef void (GLLOADER_APIENTRY *glEnableFUNC)(GLenum cap);
typedef void (GLLOADER_APIENTRY *glEnableClientStateFUNC)(GLenum array);
typedef void (GLLOADER_APIENTRY *glFinishFUNC)();
typedef void (GLLOADER_APIENTRY *glFlushFUNC)();
typedef void (GLLOADER_APIENTRY *glFogfFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFogfvFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glFogxFUNC)(GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glFogxvFUNC)(GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glFrontFaceFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glFrustumfFUNC)(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
typedef void (GLLOADER_APIENTRY *glFrustumxFUNC)(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
typedef void (GLLOADER_APIENTRY *glGenTexturesFUNC)(GLsizei n, GLuint* textures);
typedef GLenum (GLLOADER_APIENTRY *glGetErrorFUNC)();
typedef void (GLLOADER_APIENTRY *glGetIntegervFUNC)(GLenum pname, GLint* params);
typedef const GLubyte* (GLLOADER_APIENTRY *glGetStringFUNC)(GLenum name);
typedef void (GLLOADER_APIENTRY *glHintFUNC)(GLenum target, GLenum mode);
typedef void (GLLOADER_APIENTRY *glLightModelfFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glLightModelfvFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glLightModelxFUNC)(GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glLightModelxvFUNC)(GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glLightfFUNC)(GLenum light, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glLightfvFUNC)(GLenum light, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glLightxFUNC)(GLenum light, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glLightxvFUNC)(GLenum light, GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glLineWidthFUNC)(GLfloat width);
typedef void (GLLOADER_APIENTRY *glLineWidthxFUNC)(GLfixed width);
typedef void (GLLOADER_APIENTRY *glLoadIdentityFUNC)();
typedef void (GLLOADER_APIENTRY *glLoadMatrixfFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glLoadMatrixxFUNC)(const GLfixed* m);
typedef void (GLLOADER_APIENTRY *glLogicOpFUNC)(GLenum opcode);
typedef void (GLLOADER_APIENTRY *glMaterialfFUNC)(GLenum face, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glMaterialfvFUNC)(GLenum face, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glMaterialxFUNC)(GLenum face, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glMaterialxvFUNC)(GLenum face, GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glMatrixModeFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glMultMatrixfFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMultMatrixxFUNC)(const GLfixed* m);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4fFUNC)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4xFUNC)(GLenum target, GLfixed s, GLfixed t, GLfixed r, GLfixed q);
typedef void (GLLOADER_APIENTRY *glNormal3fFUNC)(GLfloat nx, GLfloat ny, GLfloat nz);
typedef void (GLLOADER_APIENTRY *glNormal3xFUNC)(GLfixed nx, GLfixed ny, GLfixed nz);
typedef void (GLLOADER_APIENTRY *glNormalPointerFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glOrthofFUNC)(GLfloat left, GLfloat right, GLfloat bottom, GLfloat top, GLfloat zNear, GLfloat zFar);
typedef void (GLLOADER_APIENTRY *glOrthoxFUNC)(GLfixed left, GLfixed right, GLfixed bottom, GLfixed top, GLfixed zNear, GLfixed zFar);
typedef void (GLLOADER_APIENTRY *glPixelStoreiFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glPointSizeFUNC)(GLfloat size);
typedef void (GLLOADER_APIENTRY *glPointSizexFUNC)(GLfixed size);
typedef void (GLLOADER_APIENTRY *glPolygonOffsetFUNC)(GLfloat factor, GLfloat units);
typedef void (GLLOADER_APIENTRY *glPolygonOffsetxFUNC)(GLfixed factor, GLfixed units);
typedef void (GLLOADER_APIENTRY *glPopMatrixFUNC)();
typedef void (GLLOADER_APIENTRY *glPushMatrixFUNC)();
typedef void (GLLOADER_APIENTRY *glReadPixelsFUNC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glRotatefFUNC)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glRotatexFUNC)(GLfixed angle, GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glSampleCoverageFUNC)(GLclampf value, GLboolean invert);
typedef void (GLLOADER_APIENTRY *glSampleCoveragexFUNC)(GLclampx value, GLboolean invert);
typedef void (GLLOADER_APIENTRY *glScalefFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glScalexFUNC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glScissorFUNC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glShadeModelFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glStencilFuncFUNC)(GLenum func, GLint ref, GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilMaskFUNC)(GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilOpFUNC)(GLenum fail, GLenum zfail, GLenum zpass);
typedef void (GLLOADER_APIENTRY *glTexCoordPointerFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glTexEnvfFUNC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTexEnvfvFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTexEnvxFUNC)(GLenum target, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glTexEnvxvFUNC)(GLenum target, GLenum pname, const GLfixed* params);
typedef void (GLLOADER_APIENTRY *glTexImage2DFUNC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexParameterfFUNC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTexParameterxFUNC)(GLenum target, GLenum pname, GLfixed param);
typedef void (GLLOADER_APIENTRY *glTexSubImage2DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTranslatefFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glVertexPointerFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glTranslatexFUNC)(GLfixed x, GLfixed y, GLfixed z);
typedef void (GLLOADER_APIENTRY *glViewportFUNC)(GLint x, GLint y, GLsizei width, GLsizei height);

extern GLLOADER_API glActiveTextureFUNC glActiveTexture;
extern GLLOADER_API glAlphaFuncFUNC glAlphaFunc;
extern GLLOADER_API glAlphaFuncxFUNC glAlphaFuncx;
extern GLLOADER_API glBindTextureFUNC glBindTexture;
extern GLLOADER_API glBlendFuncFUNC glBlendFunc;
extern GLLOADER_API glClearFUNC glClear;
extern GLLOADER_API glClearColorFUNC glClearColor;
extern GLLOADER_API glClearColorxFUNC glClearColorx;
extern GLLOADER_API glClearDepthfFUNC glClearDepthf;
extern GLLOADER_API glClearDepthxFUNC glClearDepthx;
extern GLLOADER_API glClearStencilFUNC glClearStencil;
extern GLLOADER_API glClientActiveTextureFUNC glClientActiveTexture;
extern GLLOADER_API glColor4fFUNC glColor4f;
extern GLLOADER_API glColor4xFUNC glColor4x;
extern GLLOADER_API glColorMaskFUNC glColorMask;
extern GLLOADER_API glColorPointerFUNC glColorPointer;
extern GLLOADER_API glCompressedTexImage2DFUNC glCompressedTexImage2D;
extern GLLOADER_API glCompressedTexSubImage2DFUNC glCompressedTexSubImage2D;
extern GLLOADER_API glCopyTexImage2DFUNC glCopyTexImage2D;
extern GLLOADER_API glCopyTexSubImage2DFUNC glCopyTexSubImage2D;
extern GLLOADER_API glCullFaceFUNC glCullFace;
extern GLLOADER_API glDeleteTexturesFUNC glDeleteTextures;
extern GLLOADER_API glDepthFuncFUNC glDepthFunc;
extern GLLOADER_API glDepthMaskFUNC glDepthMask;
extern GLLOADER_API glDepthRangefFUNC glDepthRangef;
extern GLLOADER_API glDepthRangexFUNC glDepthRangex;
extern GLLOADER_API glDisableFUNC glDisable;
extern GLLOADER_API glDisableClientStateFUNC glDisableClientState;
extern GLLOADER_API glDrawArraysFUNC glDrawArrays;
extern GLLOADER_API glDrawElementsFUNC glDrawElements;
extern GLLOADER_API glEnableFUNC glEnable;
extern GLLOADER_API glEnableClientStateFUNC glEnableClientState;
extern GLLOADER_API glFinishFUNC glFinish;
extern GLLOADER_API glFlushFUNC glFlush;
extern GLLOADER_API glFogfFUNC glFogf;
extern GLLOADER_API glFogfvFUNC glFogfv;
extern GLLOADER_API glFogxFUNC glFogx;
extern GLLOADER_API glFogxvFUNC glFogxv;
extern GLLOADER_API glFrontFaceFUNC glFrontFace;
extern GLLOADER_API glFrustumfFUNC glFrustumf;
extern GLLOADER_API glFrustumxFUNC glFrustumx;
extern GLLOADER_API glGenTexturesFUNC glGenTextures;
extern GLLOADER_API glGetErrorFUNC glGetError;
extern GLLOADER_API glGetIntegervFUNC glGetIntegerv;
extern GLLOADER_API glGetStringFUNC glGetString;
extern GLLOADER_API glHintFUNC glHint;
extern GLLOADER_API glLightModelfFUNC glLightModelf;
extern GLLOADER_API glLightModelfvFUNC glLightModelfv;
extern GLLOADER_API glLightModelxFUNC glLightModelx;
extern GLLOADER_API glLightModelxvFUNC glLightModelxv;
extern GLLOADER_API glLightfFUNC glLightf;
extern GLLOADER_API glLightfvFUNC glLightfv;
extern GLLOADER_API glLightxFUNC glLightx;
extern GLLOADER_API glLightxvFUNC glLightxv;
extern GLLOADER_API glLineWidthFUNC glLineWidth;
extern GLLOADER_API glLineWidthxFUNC glLineWidthx;
extern GLLOADER_API glLoadIdentityFUNC glLoadIdentity;
extern GLLOADER_API glLoadMatrixfFUNC glLoadMatrixf;
extern GLLOADER_API glLoadMatrixxFUNC glLoadMatrixx;
extern GLLOADER_API glLogicOpFUNC glLogicOp;
extern GLLOADER_API glMaterialfFUNC glMaterialf;
extern GLLOADER_API glMaterialfvFUNC glMaterialfv;
extern GLLOADER_API glMaterialxFUNC glMaterialx;
extern GLLOADER_API glMaterialxvFUNC glMaterialxv;
extern GLLOADER_API glMatrixModeFUNC glMatrixMode;
extern GLLOADER_API glMultMatrixfFUNC glMultMatrixf;
extern GLLOADER_API glMultMatrixxFUNC glMultMatrixx;
extern GLLOADER_API glMultiTexCoord4fFUNC glMultiTexCoord4f;
extern GLLOADER_API glMultiTexCoord4xFUNC glMultiTexCoord4x;
extern GLLOADER_API glNormal3fFUNC glNormal3f;
extern GLLOADER_API glNormal3xFUNC glNormal3x;
extern GLLOADER_API glNormalPointerFUNC glNormalPointer;
extern GLLOADER_API glOrthofFUNC glOrthof;
extern GLLOADER_API glOrthoxFUNC glOrthox;
extern GLLOADER_API glPixelStoreiFUNC glPixelStorei;
extern GLLOADER_API glPointSizeFUNC glPointSize;
extern GLLOADER_API glPointSizexFUNC glPointSizex;
extern GLLOADER_API glPolygonOffsetFUNC glPolygonOffset;
extern GLLOADER_API glPolygonOffsetxFUNC glPolygonOffsetx;
extern GLLOADER_API glPopMatrixFUNC glPopMatrix;
extern GLLOADER_API glPushMatrixFUNC glPushMatrix;
extern GLLOADER_API glReadPixelsFUNC glReadPixels;
extern GLLOADER_API glRotatefFUNC glRotatef;
extern GLLOADER_API glRotatexFUNC glRotatex;
extern GLLOADER_API glSampleCoverageFUNC glSampleCoverage;
extern GLLOADER_API glSampleCoveragexFUNC glSampleCoveragex;
extern GLLOADER_API glScalefFUNC glScalef;
extern GLLOADER_API glScalexFUNC glScalex;
extern GLLOADER_API glScissorFUNC glScissor;
extern GLLOADER_API glShadeModelFUNC glShadeModel;
extern GLLOADER_API glStencilFuncFUNC glStencilFunc;
extern GLLOADER_API glStencilMaskFUNC glStencilMask;
extern GLLOADER_API glStencilOpFUNC glStencilOp;
extern GLLOADER_API glTexCoordPointerFUNC glTexCoordPointer;
extern GLLOADER_API glTexEnvfFUNC glTexEnvf;
extern GLLOADER_API glTexEnvfvFUNC glTexEnvfv;
extern GLLOADER_API glTexEnvxFUNC glTexEnvx;
extern GLLOADER_API glTexEnvxvFUNC glTexEnvxv;
extern GLLOADER_API glTexImage2DFUNC glTexImage2D;
extern GLLOADER_API glTexParameterfFUNC glTexParameterf;
extern GLLOADER_API glTexParameterxFUNC glTexParameterx;
extern GLLOADER_API glTexSubImage2DFUNC glTexSubImage2D;
extern GLLOADER_API glTranslatefFUNC glTranslatef;
extern GLLOADER_API glVertexPointerFUNC glVertexPointer;
extern GLLOADER_API glTranslatexFUNC glTranslatex;
extern GLLOADER_API glViewportFUNC glViewport;

#endif

#ifdef GLES_VERSION_1_1

typedef void (GLLOADER_APIENTRY *glClipPlanefFUNC)(GLenum plane, const GLfloat* equation);
typedef void (GLLOADER_APIENTRY *glGetClipPlanefFUNC)(GLenum plane, GLfloat* equation);
typedef void (GLLOADER_APIENTRY *glGetFloatvFUNC)(GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetLightfvFUNC)(GLenum light, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMaterialfvFUNC)(GLenum face, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTexEnvfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glPointParameterfFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPointParameterfvFUNC)(GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTexParameterfvFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glBindBufferFUNC)(GLenum target, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glBufferDataFUNC)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
typedef void (GLLOADER_APIENTRY *glBufferSubDataFUNC)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glClipPlanexFUNC)(GLenum plane, const GLfixed* equation);
typedef void (GLLOADER_APIENTRY *glColor4ubFUNC)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
typedef void (GLLOADER_APIENTRY *glDeleteBuffersFUNC)(GLsizei n, const GLuint* buffers);
typedef void (GLLOADER_APIENTRY *glGetBooleanvFUNC)(GLenum pname, GLboolean* params);
typedef void (GLLOADER_APIENTRY *glGetBufferParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetClipPlanexFUNC)(GLenum plane, GLfixed* equation);
typedef void (GLLOADER_APIENTRY *glGenBuffersFUNC)(GLsizei n, GLuint* buffers);
typedef void (GLLOADER_APIENTRY *glGetFixedvFUNC)(GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetLightxvFUNC)(GLenum light, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetMaterialxvFUNC)(GLenum face, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetTexEnvivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexEnvxvFUNC)(GLenum target, GLenum pname, GLfixed* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterxvFUNC)(GLenum target, GLenum pname, GLfixed* params);
typedef GLboolean (GLLOADER_APIENTRY *glIsBufferFUNC)(GLuint buffer);
typedef GLboolean (GLLOADER_APIENTRY *glIsEnabledFUNC)(GLenum cap);
typedef GLboolean (GLLOADER_APIENTRY *glIsTextureFUNC)(GLuint texture);
typedef void (GLLOADER_APIENTRY *glTexEnviFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTexEnvivFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glTexParameteriFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTexParameterivFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glTexParameterxvFUNC)(GLenum target, GLenum pname, const GLfixed* params);

extern GLLOADER_API glClipPlanefFUNC glClipPlanef;
extern GLLOADER_API glGetClipPlanefFUNC glGetClipPlanef;
extern GLLOADER_API glGetFloatvFUNC glGetFloatv;
extern GLLOADER_API glGetLightfvFUNC glGetLightfv;
extern GLLOADER_API glGetMaterialfvFUNC glGetMaterialfv;
extern GLLOADER_API glGetTexEnvfvFUNC glGetTexEnvfv;
extern GLLOADER_API glGetTexParameterfvFUNC glGetTexParameterfv;
extern GLLOADER_API glPointParameterfFUNC glPointParameterf;
extern GLLOADER_API glPointParameterfvFUNC glPointParameterfv;
extern GLLOADER_API glTexParameterfvFUNC glTexParameterfv;
extern GLLOADER_API glBindBufferFUNC glBindBuffer;
extern GLLOADER_API glBufferDataFUNC glBufferData;
extern GLLOADER_API glBufferSubDataFUNC glBufferSubData;
extern GLLOADER_API glClipPlanexFUNC glClipPlanex;
extern GLLOADER_API glColor4ubFUNC glColor4ub;
extern GLLOADER_API glDeleteBuffersFUNC glDeleteBuffers;
extern GLLOADER_API glGetBooleanvFUNC glGetBooleanv;
extern GLLOADER_API glGetBufferParameterivFUNC glGetBufferParameteriv;
extern GLLOADER_API glGetClipPlanexFUNC glGetClipPlanex;
extern GLLOADER_API glGenBuffersFUNC glGenBuffers;
extern GLLOADER_API glGetFixedvFUNC glGetFixedv;
extern GLLOADER_API glGetLightxvFUNC glGetLightxv;
extern GLLOADER_API glGetMaterialxvFUNC glGetMaterialxv;
extern GLLOADER_API glGetTexEnvivFUNC glGetTexEnviv;
extern GLLOADER_API glGetTexEnvxvFUNC glGetTexEnvxv;
extern GLLOADER_API glGetTexParameterivFUNC glGetTexParameteriv;
extern GLLOADER_API glGetTexParameterxvFUNC glGetTexParameterxv;
extern GLLOADER_API glIsBufferFUNC glIsBuffer;
extern GLLOADER_API glIsEnabledFUNC glIsEnabled;
extern GLLOADER_API glIsTextureFUNC glIsTexture;
extern GLLOADER_API glTexEnviFUNC glTexEnvi;
extern GLLOADER_API glTexEnvivFUNC glTexEnviv;
extern GLLOADER_API glTexParameteriFUNC glTexParameteri;
extern GLLOADER_API glTexParameterivFUNC glTexParameteriv;
extern GLLOADER_API glTexParameterxvFUNC glTexParameterxv;

#endif

#ifdef GLES_VERSION_2_0

typedef void (GLLOADER_APIENTRY *glAttachShaderFUNC)(GLuint program, GLuint shader);
typedef void (GLLOADER_APIENTRY *glBindAttribLocationFUNC)(GLuint program, GLuint index, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glBindFramebufferFUNC)(GLenum target, GLuint framebuffer);
typedef void (GLLOADER_APIENTRY *glBindRenderbufferFUNC)(GLenum target, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glBlendColorFUNC)(GLclampf red, GLclampf green, GLclampf blue, GLclampf alpha);
typedef void (GLLOADER_APIENTRY *glBlendEquationFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateFUNC)(GLenum modeRGB, GLenum modeAlpha);
typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateFUNC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef GLenum (GLLOADER_APIENTRY *glCheckFramebufferStatusFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glCompileShaderFUNC)(GLuint shader);
typedef GLuint (GLLOADER_APIENTRY *glCreateProgramFUNC)();
typedef GLuint (GLLOADER_APIENTRY *glCreateShaderFUNC)(GLenum type);
typedef void (GLLOADER_APIENTRY *glDeleteFramebuffersFUNC)(GLsizei n, const GLuint* framebuffers);
typedef void (GLLOADER_APIENTRY *glDeleteProgramFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glDeleteRenderbuffersFUNC)(GLsizei n, const GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glDeleteShaderFUNC)(GLuint shader);
typedef void (GLLOADER_APIENTRY *glDetachShaderFUNC)(GLuint program, GLuint shader);
typedef void (GLLOADER_APIENTRY *glDisableVertexAttribArrayFUNC)(GLuint index);
typedef void (GLLOADER_APIENTRY *glEnableVertexAttribArrayFUNC)(GLuint index);
typedef void (GLLOADER_APIENTRY *glFramebufferRenderbufferFUNC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture2DFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glGenerateMipmapFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glGenFramebuffersFUNC)(GLsizei n, GLuint* framebuffers);
typedef void (GLLOADER_APIENTRY *glGenRenderbuffersFUNC)(GLsizei n, GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glGetActiveAttribFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetAttachedShadersFUNC)(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* shader);
typedef GLint (GLLOADER_APIENTRY *glGetAttribLocationFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetFramebufferAttachmentParameterivFUNC)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramivFUNC)(GLuint program, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramInfoLogFUNC)(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (GLLOADER_APIENTRY *glGetRenderbufferParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetShaderivFUNC)(GLuint shader, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGetShaderInfoLogFUNC)(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (GLLOADER_APIENTRY *glGetShaderPrecisionFormatFUNC)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
typedef void (GLLOADER_APIENTRY *glGetShaderSourceFUNC)(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source);
typedef void (GLLOADER_APIENTRY *glGetUniformfvFUNC)(GLuint program, GLint location, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetUniformivFUNC)(GLuint program, GLint location, GLint* params);
typedef GLint (GLLOADER_APIENTRY *glGetUniformLocationFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribfvFUNC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribivFUNC)(GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribPointervFUNC)(GLuint index, GLenum pname, GLvoid** pointer);
typedef GLboolean (GLLOADER_APIENTRY *glIsFramebufferFUNC)(GLuint framebuffer);
typedef GLboolean (GLLOADER_APIENTRY *glIsProgramFUNC)(GLuint program);
typedef GLboolean (GLLOADER_APIENTRY *glIsRenderbufferFUNC)(GLuint renderbuffer);
typedef GLboolean (GLLOADER_APIENTRY *glIsShaderFUNC)(GLuint shader);
typedef void (GLLOADER_APIENTRY *glLinkProgramFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glReleaseShaderCompilerFUNC)();
typedef void (GLLOADER_APIENTRY *glRenderbufferStorageFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glShaderBinaryFUNC)(GLsizei n, const GLuint* shaders, GLenum binaryformat, const void* binary, GLsizei length);
typedef void (GLLOADER_APIENTRY *glShaderSourceFUNC)(GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
typedef void (GLLOADER_APIENTRY *glStencilFuncSeparateFUNC)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilMaskSeparateFUNC)(GLenum face, GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilOpSeparateFUNC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (GLLOADER_APIENTRY *glUniform1fFUNC)(GLint location, GLfloat v0);
typedef void (GLLOADER_APIENTRY *glUniform2fFUNC)(GLint location, GLfloat v0, GLfloat v1);
typedef void (GLLOADER_APIENTRY *glUniform3fFUNC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLLOADER_APIENTRY *glUniform4fFUNC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLLOADER_APIENTRY *glUniform1iFUNC)(GLint location, GLint v0);
typedef void (GLLOADER_APIENTRY *glUniform2iFUNC)(GLint location, GLint v0, GLint v1);
typedef void (GLLOADER_APIENTRY *glUniform3iFUNC)(GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLLOADER_APIENTRY *glUniform4iFUNC)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLLOADER_APIENTRY *glUniform1fvFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform2fvFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform3fvFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform4fvFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform1ivFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniform2ivFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniform3ivFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniform4ivFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUseProgramFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glValidateProgramFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fFUNC)(GLuint index, GLfloat x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fFUNC)(GLuint index, GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribPointerFUNC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer);

extern GLLOADER_API glAttachShaderFUNC glAttachShader;
extern GLLOADER_API glBindAttribLocationFUNC glBindAttribLocation;
extern GLLOADER_API glBindFramebufferFUNC glBindFramebuffer;
extern GLLOADER_API glBindRenderbufferFUNC glBindRenderbuffer;
extern GLLOADER_API glBlendColorFUNC glBlendColor;
extern GLLOADER_API glBlendEquationFUNC glBlendEquation;
extern GLLOADER_API glBlendEquationSeparateFUNC glBlendEquationSeparate;
extern GLLOADER_API glBlendFuncSeparateFUNC glBlendFuncSeparate;
extern GLLOADER_API glCheckFramebufferStatusFUNC glCheckFramebufferStatus;
extern GLLOADER_API glCompileShaderFUNC glCompileShader;
extern GLLOADER_API glCreateProgramFUNC glCreateProgram;
extern GLLOADER_API glCreateShaderFUNC glCreateShader;
extern GLLOADER_API glDeleteFramebuffersFUNC glDeleteFramebuffers;
extern GLLOADER_API glDeleteProgramFUNC glDeleteProgram;
extern GLLOADER_API glDeleteRenderbuffersFUNC glDeleteRenderbuffers;
extern GLLOADER_API glDeleteShaderFUNC glDeleteShader;
extern GLLOADER_API glDetachShaderFUNC glDetachShader;
extern GLLOADER_API glDisableVertexAttribArrayFUNC glDisableVertexAttribArray;
extern GLLOADER_API glEnableVertexAttribArrayFUNC glEnableVertexAttribArray;
extern GLLOADER_API glFramebufferRenderbufferFUNC glFramebufferRenderbuffer;
extern GLLOADER_API glFramebufferTexture2DFUNC glFramebufferTexture2D;
extern GLLOADER_API glGenerateMipmapFUNC glGenerateMipmap;
extern GLLOADER_API glGenFramebuffersFUNC glGenFramebuffers;
extern GLLOADER_API glGenRenderbuffersFUNC glGenRenderbuffers;
extern GLLOADER_API glGetActiveAttribFUNC glGetActiveAttrib;
extern GLLOADER_API glGetActiveUniformFUNC glGetActiveUniform;
extern GLLOADER_API glGetAttachedShadersFUNC glGetAttachedShaders;
extern GLLOADER_API glGetAttribLocationFUNC glGetAttribLocation;
extern GLLOADER_API glGetFramebufferAttachmentParameterivFUNC glGetFramebufferAttachmentParameteriv;
extern GLLOADER_API glGetProgramivFUNC glGetProgramiv;
extern GLLOADER_API glGetProgramInfoLogFUNC glGetProgramInfoLog;
extern GLLOADER_API glGetRenderbufferParameterivFUNC glGetRenderbufferParameteriv;
extern GLLOADER_API glGetShaderivFUNC glGetShaderiv;
extern GLLOADER_API glGetShaderInfoLogFUNC glGetShaderInfoLog;
extern GLLOADER_API glGetShaderPrecisionFormatFUNC glGetShaderPrecisionFormat;
extern GLLOADER_API glGetShaderSourceFUNC glGetShaderSource;
extern GLLOADER_API glGetUniformfvFUNC glGetUniformfv;
extern GLLOADER_API glGetUniformivFUNC glGetUniformiv;
extern GLLOADER_API glGetUniformLocationFUNC glGetUniformLocation;
extern GLLOADER_API glGetVertexAttribfvFUNC glGetVertexAttribfv;
extern GLLOADER_API glGetVertexAttribivFUNC glGetVertexAttribiv;
extern GLLOADER_API glGetVertexAttribPointervFUNC glGetVertexAttribPointerv;
extern GLLOADER_API glIsFramebufferFUNC glIsFramebuffer;
extern GLLOADER_API glIsProgramFUNC glIsProgram;
extern GLLOADER_API glIsRenderbufferFUNC glIsRenderbuffer;
extern GLLOADER_API glIsShaderFUNC glIsShader;
extern GLLOADER_API glLinkProgramFUNC glLinkProgram;
extern GLLOADER_API glReleaseShaderCompilerFUNC glReleaseShaderCompiler;
extern GLLOADER_API glRenderbufferStorageFUNC glRenderbufferStorage;
extern GLLOADER_API glShaderBinaryFUNC glShaderBinary;
extern GLLOADER_API glShaderSourceFUNC glShaderSource;
extern GLLOADER_API glStencilFuncSeparateFUNC glStencilFuncSeparate;
extern GLLOADER_API glStencilMaskSeparateFUNC glStencilMaskSeparate;
extern GLLOADER_API glStencilOpSeparateFUNC glStencilOpSeparate;
extern GLLOADER_API glUniform1fFUNC glUniform1f;
extern GLLOADER_API glUniform2fFUNC glUniform2f;
extern GLLOADER_API glUniform3fFUNC glUniform3f;
extern GLLOADER_API glUniform4fFUNC glUniform4f;
extern GLLOADER_API glUniform1iFUNC glUniform1i;
extern GLLOADER_API glUniform2iFUNC glUniform2i;
extern GLLOADER_API glUniform3iFUNC glUniform3i;
extern GLLOADER_API glUniform4iFUNC glUniform4i;
extern GLLOADER_API glUniform1fvFUNC glUniform1fv;
extern GLLOADER_API glUniform2fvFUNC glUniform2fv;
extern GLLOADER_API glUniform3fvFUNC glUniform3fv;
extern GLLOADER_API glUniform4fvFUNC glUniform4fv;
extern GLLOADER_API glUniform1ivFUNC glUniform1iv;
extern GLLOADER_API glUniform2ivFUNC glUniform2iv;
extern GLLOADER_API glUniform3ivFUNC glUniform3iv;
extern GLLOADER_API glUniform4ivFUNC glUniform4iv;
extern GLLOADER_API glUniformMatrix2fvFUNC glUniformMatrix2fv;
extern GLLOADER_API glUniformMatrix3fvFUNC glUniformMatrix3fv;
extern GLLOADER_API glUniformMatrix4fvFUNC glUniformMatrix4fv;
extern GLLOADER_API glUseProgramFUNC glUseProgram;
extern GLLOADER_API glValidateProgramFUNC glValidateProgram;
extern GLLOADER_API glVertexAttrib1fFUNC glVertexAttrib1f;
extern GLLOADER_API glVertexAttrib1fvFUNC glVertexAttrib1fv;
extern GLLOADER_API glVertexAttrib2fFUNC glVertexAttrib2f;
extern GLLOADER_API glVertexAttrib2fvFUNC glVertexAttrib2fv;
extern GLLOADER_API glVertexAttrib3fFUNC glVertexAttrib3f;
extern GLLOADER_API glVertexAttrib3fvFUNC glVertexAttrib3fv;
extern GLLOADER_API glVertexAttrib4fFUNC glVertexAttrib4f;
extern GLLOADER_API glVertexAttrib4fvFUNC glVertexAttrib4fv;
extern GLLOADER_API glVertexAttribPointerFUNC glVertexAttribPointer;

#endif

#ifdef GLES_VERSION_3_0

typedef void (GLLOADER_APIENTRY *glReadBufferFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glDrawRangeElementsFUNC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices);
typedef void (GLLOADER_APIENTRY *glTexImage3DFUNC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage3DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage3DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage3DFUNC)(GLenum target, GLint level, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage3DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGenQueriesFUNC)(GLsizei n, GLuint* ids);
typedef void (GLLOADER_APIENTRY *glDeleteQueriesFUNC)(GLsizei n, const GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsQueryFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glBeginQueryFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glEndQueryFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glGetQueryivFUNC)(GLenum target, GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectuivFUNC)(GLuint id, GLenum pname, GLuint* params);
typedef GLboolean (GLLOADER_APIENTRY *glUnmapBufferFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glGetBufferPointervFUNC)(GLenum target, GLenum pname, void** params);
typedef void (GLLOADER_APIENTRY *glDrawBuffersFUNC)(GLsizei n, const GLenum* bufs);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2x3fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x2fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2x4fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x2fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x4fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x3fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glBlitFramebufferFUNC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureLayerFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void* (GLLOADER_APIENTRY *glMapBufferRangeFUNC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GLLOADER_APIENTRY *glFlushMappedBufferRangeFUNC)(GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GLLOADER_APIENTRY *glBindVertexArrayFUNC)(GLuint array);
typedef void (GLLOADER_APIENTRY *glDeleteVertexArraysFUNC)(GLsizei n, const GLuint* arrays);
typedef void (GLLOADER_APIENTRY *glGenVertexArraysFUNC)(GLsizei n, GLuint* arrays);
typedef GLboolean (GLLOADER_APIENTRY *glIsVertexArrayFUNC)(GLuint array);
typedef void (GLLOADER_APIENTRY *glGetIntegeri_vFUNC)(GLenum target, GLuint index, GLint* data);
typedef void (GLLOADER_APIENTRY *glBeginTransformFeedbackFUNC)(GLenum primitiveMode);
typedef void (GLLOADER_APIENTRY *glEndTransformFeedbackFUNC)();
typedef void (GLLOADER_APIENTRY *glBindBufferRangeFUNC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glBindBufferBaseFUNC)(GLenum target, GLuint index, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTransformFeedbackVaryingsFUNC)(GLuint program, GLsizei count, const GLchar** varyings, GLenum bufferMode);
typedef void (GLLOADER_APIENTRY *glGetTransformFeedbackVaryingFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);
typedef void (GLLOADER_APIENTRY *glVertexAttribIPointerFUNC)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribIivFUNC)(GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribIuivFUNC)(GLuint index, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4iFUNC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4uiFUNC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4ivFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4uivFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glGetUniformuivFUNC)(GLuint program, GLint location, GLuint* params);
typedef GLint (GLLOADER_APIENTRY *glGetFragDataLocationFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glUniform1uiFUNC)(GLint location, GLuint v0);
typedef void (GLLOADER_APIENTRY *glUniform2uiFUNC)(GLint location, GLuint v0, GLuint v1);
typedef void (GLLOADER_APIENTRY *glUniform3uiFUNC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLLOADER_APIENTRY *glUniform4uiFUNC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLLOADER_APIENTRY *glUniform1uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform2uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform3uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform4uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glClearBufferivFUNC)(GLenum buffer, GLint drawbuffer, const GLint* value);
typedef void (GLLOADER_APIENTRY *glClearBufferuivFUNC)(GLenum buffer, GLint drawbuffer, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glClearBufferfvFUNC)(GLenum buffer, GLint drawbuffer, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glClearBufferfiFUNC)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte* (GLLOADER_APIENTRY *glGetStringiFUNC)(GLenum name, GLuint index);
typedef void (GLLOADER_APIENTRY *glCopyBufferSubDataFUNC)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glGetUniformIndicesFUNC)(GLuint program, GLsizei uniformCount, const GLchar** uniformNames, GLuint* uniformIndices);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformsivFUNC)(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
typedef GLuint (GLLOADER_APIENTRY *glGetUniformBlockIndexFUNC)(GLuint program, const GLchar* uniformBlockName);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformBlockivFUNC)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformBlockNameFUNC)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
typedef void (GLLOADER_APIENTRY *glUniformBlockBindingFUNC)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);
typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount);
typedef GLsync (GLLOADER_APIENTRY *glFenceSyncFUNC)(GLenum condition, GLbitfield flags);
typedef GLboolean (GLLOADER_APIENTRY *glIsSyncFUNC)(GLsync sync);
typedef void (GLLOADER_APIENTRY *glDeleteSyncFUNC)(GLsync sync);
typedef GLenum (GLLOADER_APIENTRY *glClientWaitSyncFUNC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLLOADER_APIENTRY *glWaitSyncFUNC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLLOADER_APIENTRY *glGetInteger64vFUNC)(GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetSyncivFUNC)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);
typedef void (GLLOADER_APIENTRY *glGetInteger64i_vFUNC)(GLenum target, GLuint index, GLint64* data);
typedef void (GLLOADER_APIENTRY *glGetBufferParameteri64vFUNC)(GLenum target, GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGenSamplersFUNC)(GLsizei count, GLuint* samplers);
typedef void (GLLOADER_APIENTRY *glDeleteSamplersFUNC)(GLsizei count, const GLuint* samplers);
typedef GLboolean (GLLOADER_APIENTRY *glIsSamplerFUNC)(GLuint sampler);
typedef void (GLLOADER_APIENTRY *glBindSamplerFUNC)(GLuint unit, GLuint sampler);
typedef void (GLLOADER_APIENTRY *glSamplerParameteriFUNC)(GLuint sampler, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterivFUNC)(GLuint sampler, GLenum pname, const GLint* param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterfFUNC)(GLuint sampler, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterfvFUNC)(GLuint sampler, GLenum pname, const GLfloat* param);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterivFUNC)(GLuint sampler, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterfvFUNC)(GLuint sampler, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glVertexAttribDivisorFUNC)(GLuint index, GLuint divisor);
typedef void (GLLOADER_APIENTRY *glBindTransformFeedbackFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glDeleteTransformFeedbacksFUNC)(GLsizei n, const GLuint* ids);
typedef void (GLLOADER_APIENTRY *glGenTransformFeedbacksFUNC)(GLsizei n, GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsTransformFeedbackFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glPauseTransformFeedbackFUNC)();
typedef void (GLLOADER_APIENTRY *glResumeTransformFeedbackFUNC)();
typedef void (GLLOADER_APIENTRY *glGetProgramBinaryFUNC)(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, void* binary);
typedef void (GLLOADER_APIENTRY *glProgramBinaryFUNC)(GLuint program, GLenum binaryFormat, const void* binary, GLint length);
typedef GLboolean (GLLOADER_APIENTRY *glProgramParameteriFUNC)(GLuint program, GLenum pname, GLint value);
typedef void (GLLOADER_APIENTRY *glInvalidateFramebufferFUNC)(GLenum target, GLsizei numAttachments, const GLenum* attachments);
typedef void (GLLOADER_APIENTRY *glInvalidateSubFramebufferFUNC)(GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTexStorage2DFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTexStorage3DFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLLOADER_APIENTRY *glGetInternalformativFUNC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params);

extern GLLOADER_API glReadBufferFUNC glReadBuffer;
extern GLLOADER_API glDrawRangeElementsFUNC glDrawRangeElements;
extern GLLOADER_API glTexImage3DFUNC glTexImage3D;
extern GLLOADER_API glTexSubImage3DFUNC glTexSubImage3D;
extern GLLOADER_API glCopyTexSubImage3DFUNC glCopyTexSubImage3D;
extern GLLOADER_API glCompressedTexImage3DFUNC glCompressedTexImage3D;
extern GLLOADER_API glCompressedTexSubImage3DFUNC glCompressedTexSubImage3D;
extern GLLOADER_API glGenQueriesFUNC glGenQueries;
extern GLLOADER_API glDeleteQueriesFUNC glDeleteQueries;
extern GLLOADER_API glIsQueryFUNC glIsQuery;
extern GLLOADER_API glBeginQueryFUNC glBeginQuery;
extern GLLOADER_API glEndQueryFUNC glEndQuery;
extern GLLOADER_API glGetQueryivFUNC glGetQueryiv;
extern GLLOADER_API glGetQueryObjectuivFUNC glGetQueryObjectuiv;
extern GLLOADER_API glUnmapBufferFUNC glUnmapBuffer;
extern GLLOADER_API glGetBufferPointervFUNC glGetBufferPointerv;
extern GLLOADER_API glDrawBuffersFUNC glDrawBuffers;
extern GLLOADER_API glUniformMatrix2x3fvFUNC glUniformMatrix2x3fv;
extern GLLOADER_API glUniformMatrix3x2fvFUNC glUniformMatrix3x2fv;
extern GLLOADER_API glUniformMatrix2x4fvFUNC glUniformMatrix2x4fv;
extern GLLOADER_API glUniformMatrix4x2fvFUNC glUniformMatrix4x2fv;
extern GLLOADER_API glUniformMatrix3x4fvFUNC glUniformMatrix3x4fv;
extern GLLOADER_API glUniformMatrix4x3fvFUNC glUniformMatrix4x3fv;
extern GLLOADER_API glBlitFramebufferFUNC glBlitFramebuffer;
extern GLLOADER_API glRenderbufferStorageMultisampleFUNC glRenderbufferStorageMultisample;
extern GLLOADER_API glFramebufferTextureLayerFUNC glFramebufferTextureLayer;
extern GLLOADER_API glMapBufferRangeFUNC glMapBufferRange;
extern GLLOADER_API glFlushMappedBufferRangeFUNC glFlushMappedBufferRange;
extern GLLOADER_API glBindVertexArrayFUNC glBindVertexArray;
extern GLLOADER_API glDeleteVertexArraysFUNC glDeleteVertexArrays;
extern GLLOADER_API glGenVertexArraysFUNC glGenVertexArrays;
extern GLLOADER_API glIsVertexArrayFUNC glIsVertexArray;
extern GLLOADER_API glGetIntegeri_vFUNC glGetIntegeri_v;
extern GLLOADER_API glBeginTransformFeedbackFUNC glBeginTransformFeedback;
extern GLLOADER_API glEndTransformFeedbackFUNC glEndTransformFeedback;
extern GLLOADER_API glBindBufferRangeFUNC glBindBufferRange;
extern GLLOADER_API glBindBufferBaseFUNC glBindBufferBase;
extern GLLOADER_API glTransformFeedbackVaryingsFUNC glTransformFeedbackVaryings;
extern GLLOADER_API glGetTransformFeedbackVaryingFUNC glGetTransformFeedbackVarying;
extern GLLOADER_API glVertexAttribIPointerFUNC glVertexAttribIPointer;
extern GLLOADER_API glGetVertexAttribIivFUNC glGetVertexAttribIiv;
extern GLLOADER_API glGetVertexAttribIuivFUNC glGetVertexAttribIuiv;
extern GLLOADER_API glVertexAttribI4iFUNC glVertexAttribI4i;
extern GLLOADER_API glVertexAttribI4uiFUNC glVertexAttribI4ui;
extern GLLOADER_API glVertexAttribI4ivFUNC glVertexAttribI4iv;
extern GLLOADER_API glVertexAttribI4uivFUNC glVertexAttribI4uiv;
extern GLLOADER_API glGetUniformuivFUNC glGetUniformuiv;
extern GLLOADER_API glGetFragDataLocationFUNC glGetFragDataLocation;
extern GLLOADER_API glUniform1uiFUNC glUniform1ui;
extern GLLOADER_API glUniform2uiFUNC glUniform2ui;
extern GLLOADER_API glUniform3uiFUNC glUniform3ui;
extern GLLOADER_API glUniform4uiFUNC glUniform4ui;
extern GLLOADER_API glUniform1uivFUNC glUniform1uiv;
extern GLLOADER_API glUniform2uivFUNC glUniform2uiv;
extern GLLOADER_API glUniform3uivFUNC glUniform3uiv;
extern GLLOADER_API glUniform4uivFUNC glUniform4uiv;
extern GLLOADER_API glClearBufferivFUNC glClearBufferiv;
extern GLLOADER_API glClearBufferuivFUNC glClearBufferuiv;
extern GLLOADER_API glClearBufferfvFUNC glClearBufferfv;
extern GLLOADER_API glClearBufferfiFUNC glClearBufferfi;
extern GLLOADER_API glGetStringiFUNC glGetStringi;
extern GLLOADER_API glCopyBufferSubDataFUNC glCopyBufferSubData;
extern GLLOADER_API glGetUniformIndicesFUNC glGetUniformIndices;
extern GLLOADER_API glGetActiveUniformsivFUNC glGetActiveUniformsiv;
extern GLLOADER_API glGetUniformBlockIndexFUNC glGetUniformBlockIndex;
extern GLLOADER_API glGetActiveUniformBlockivFUNC glGetActiveUniformBlockiv;
extern GLLOADER_API glGetActiveUniformBlockNameFUNC glGetActiveUniformBlockName;
extern GLLOADER_API glUniformBlockBindingFUNC glUniformBlockBinding;
extern GLLOADER_API glDrawArraysInstancedFUNC glDrawArraysInstanced;
extern GLLOADER_API glDrawElementsInstancedFUNC glDrawElementsInstanced;
extern GLLOADER_API glFenceSyncFUNC glFenceSync;
extern GLLOADER_API glIsSyncFUNC glIsSync;
extern GLLOADER_API glDeleteSyncFUNC glDeleteSync;
extern GLLOADER_API glClientWaitSyncFUNC glClientWaitSync;
extern GLLOADER_API glWaitSyncFUNC glWaitSync;
extern GLLOADER_API glGetInteger64vFUNC glGetInteger64v;
extern GLLOADER_API glGetSyncivFUNC glGetSynciv;
extern GLLOADER_API glGetInteger64i_vFUNC glGetInteger64i_v;
extern GLLOADER_API glGetBufferParameteri64vFUNC glGetBufferParameteri64v;
extern GLLOADER_API glGenSamplersFUNC glGenSamplers;
extern GLLOADER_API glDeleteSamplersFUNC glDeleteSamplers;
extern GLLOADER_API glIsSamplerFUNC glIsSampler;
extern GLLOADER_API glBindSamplerFUNC glBindSampler;
extern GLLOADER_API glSamplerParameteriFUNC glSamplerParameteri;
extern GLLOADER_API glSamplerParameterivFUNC glSamplerParameteriv;
extern GLLOADER_API glSamplerParameterfFUNC glSamplerParameterf;
extern GLLOADER_API glSamplerParameterfvFUNC glSamplerParameterfv;
extern GLLOADER_API glGetSamplerParameterivFUNC glGetSamplerParameteriv;
extern GLLOADER_API glGetSamplerParameterfvFUNC glGetSamplerParameterfv;
extern GLLOADER_API glVertexAttribDivisorFUNC glVertexAttribDivisor;
extern GLLOADER_API glBindTransformFeedbackFUNC glBindTransformFeedback;
extern GLLOADER_API glDeleteTransformFeedbacksFUNC glDeleteTransformFeedbacks;
extern GLLOADER_API glGenTransformFeedbacksFUNC glGenTransformFeedbacks;
extern GLLOADER_API glIsTransformFeedbackFUNC glIsTransformFeedback;
extern GLLOADER_API glPauseTransformFeedbackFUNC glPauseTransformFeedback;
extern GLLOADER_API glResumeTransformFeedbackFUNC glResumeTransformFeedback;
extern GLLOADER_API glGetProgramBinaryFUNC glGetProgramBinary;
extern GLLOADER_API glProgramBinaryFUNC glProgramBinary;
extern GLLOADER_API glProgramParameteriFUNC glProgramParameteri;
extern GLLOADER_API glInvalidateFramebufferFUNC glInvalidateFramebuffer;
extern GLLOADER_API glInvalidateSubFramebufferFUNC glInvalidateSubFramebuffer;
extern GLLOADER_API glTexStorage2DFUNC glTexStorage2D;
extern GLLOADER_API glTexStorage3DFUNC glTexStorage3D;
extern GLLOADER_API glGetInternalformativFUNC glGetInternalformativ;

#endif

#ifdef GLES_VERSION_3_1

typedef void (GLLOADER_APIENTRY *glDispatchComputeFUNC)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (GLLOADER_APIENTRY *glDispatchComputeIndirectFUNC)(GLintptr indirect);
typedef void (GLLOADER_APIENTRY *glDrawArraysIndirectFUNC)(GLenum mode, const GLvoid* indirect);
typedef void (GLLOADER_APIENTRY *glDrawElementsIndirectFUNC)(GLenum mode, GLenum type, const GLvoid* indirect);
typedef void (GLLOADER_APIENTRY *glFramebufferParameteriFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glGetFramebufferParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramInterfaceivFUNC)(GLuint program, GLenum programInterface, GLenum pname, GLint* params);
typedef GLuint (GLLOADER_APIENTRY *glGetProgramResourceIndexFUNC)(GLuint program, GLenum programInterface, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetProgramResourceNameFUNC)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetProgramResourceivFUNC)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei bufSize, GLsizei* length, GLint* params);
typedef GLint (GLLOADER_APIENTRY *glGetProgramResourceLocationFUNC)(GLuint program, GLenum programInterface, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glUseProgramStagesFUNC)(GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GLLOADER_APIENTRY *glActiveShaderProgramFUNC)(GLuint pipeline, GLuint program);
typedef GLuint (GLLOADER_APIENTRY *glCreateShaderProgramvFUNC)(GLenum type, GLsizei count, const GLchar** strings);
typedef void (GLLOADER_APIENTRY *glBindProgramPipelineFUNC)(GLuint pipeline);
typedef void (GLLOADER_APIENTRY *glDeleteProgramPipelinesFUNC)(GLsizei n, const GLuint* pipelines);
typedef void (GLLOADER_APIENTRY *glGenProgramPipelinesFUNC)(GLsizei n, GLuint* pipelines);
typedef GLboolean (GLLOADER_APIENTRY *glIsProgramPipelineFUNC)(GLuint pipeline);
typedef void (GLLOADER_APIENTRY *glGetProgramPipelineivFUNC)(GLuint pipeline, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glProgramUniform1iFUNC)(GLuint program, GLint location, GLint v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform2iFUNC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform3iFUNC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform4iFUNC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform1uiFUNC)(GLuint program, GLint location, GLuint v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform2uiFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform3uiFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform4uiFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform1fFUNC)(GLuint program, GLint location, GLfloat v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform2fFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform3fFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform4fFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform1ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x3fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x2fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x4fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x2fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x4fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x3fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glValidateProgramPipelineFUNC)(GLuint pipeline);
typedef void (GLLOADER_APIENTRY *glGetProgramPipelineInfoLogFUNC)(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (GLLOADER_APIENTRY *glBindImageTextureFUNC)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (GLLOADER_APIENTRY *glGetBooleani_vFUNC)(GLenum target, GLuint index, GLboolean* data);
typedef void (GLLOADER_APIENTRY *glMemoryBarrierFUNC)(GLbitfield barriers);
typedef void (GLLOADER_APIENTRY *glMemoryBarrierByRegionFUNC)(GLbitfield barriers);
typedef void (GLLOADER_APIENTRY *glTexStorage2DMultisampleFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glGetMultisamplefvFUNC)(GLenum pname, GLuint index, GLfloat* val);
typedef void (GLLOADER_APIENTRY *glSampleMaskiFUNC)(GLuint index, GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glGetTexLevelParameterivFUNC)(GLenum target, GLint level, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexLevelParameterfvFUNC)(GLenum target, GLint level, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glBindVertexBufferFUNC)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glVertexAttribFormatFUNC)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexAttribIFormatFUNC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexAttribBindingFUNC)(GLuint attribindex, GLuint bindingindex);
typedef void (GLLOADER_APIENTRY *glVertexBindingDivisorFUNC)(GLuint bindingindex, GLuint divisor);

extern GLLOADER_API glDispatchComputeFUNC glDispatchCompute;
extern GLLOADER_API glDispatchComputeIndirectFUNC glDispatchComputeIndirect;
extern GLLOADER_API glDrawArraysIndirectFUNC glDrawArraysIndirect;
extern GLLOADER_API glDrawElementsIndirectFUNC glDrawElementsIndirect;
extern GLLOADER_API glFramebufferParameteriFUNC glFramebufferParameteri;
extern GLLOADER_API glGetFramebufferParameterivFUNC glGetFramebufferParameteriv;
extern GLLOADER_API glGetProgramInterfaceivFUNC glGetProgramInterfaceiv;
extern GLLOADER_API glGetProgramResourceIndexFUNC glGetProgramResourceIndex;
extern GLLOADER_API glGetProgramResourceNameFUNC glGetProgramResourceName;
extern GLLOADER_API glGetProgramResourceivFUNC glGetProgramResourceiv;
extern GLLOADER_API glGetProgramResourceLocationFUNC glGetProgramResourceLocation;
extern GLLOADER_API glUseProgramStagesFUNC glUseProgramStages;
extern GLLOADER_API glActiveShaderProgramFUNC glActiveShaderProgram;
extern GLLOADER_API glCreateShaderProgramvFUNC glCreateShaderProgramv;
extern GLLOADER_API glBindProgramPipelineFUNC glBindProgramPipeline;
extern GLLOADER_API glDeleteProgramPipelinesFUNC glDeleteProgramPipelines;
extern GLLOADER_API glGenProgramPipelinesFUNC glGenProgramPipelines;
extern GLLOADER_API glIsProgramPipelineFUNC glIsProgramPipeline;
extern GLLOADER_API glGetProgramPipelineivFUNC glGetProgramPipelineiv;
extern GLLOADER_API glProgramUniform1iFUNC glProgramUniform1i;
extern GLLOADER_API glProgramUniform2iFUNC glProgramUniform2i;
extern GLLOADER_API glProgramUniform3iFUNC glProgramUniform3i;
extern GLLOADER_API glProgramUniform4iFUNC glProgramUniform4i;
extern GLLOADER_API glProgramUniform1uiFUNC glProgramUniform1ui;
extern GLLOADER_API glProgramUniform2uiFUNC glProgramUniform2ui;
extern GLLOADER_API glProgramUniform3uiFUNC glProgramUniform3ui;
extern GLLOADER_API glProgramUniform4uiFUNC glProgramUniform4ui;
extern GLLOADER_API glProgramUniform1fFUNC glProgramUniform1f;
extern GLLOADER_API glProgramUniform2fFUNC glProgramUniform2f;
extern GLLOADER_API glProgramUniform3fFUNC glProgramUniform3f;
extern GLLOADER_API glProgramUniform4fFUNC glProgramUniform4f;
extern GLLOADER_API glProgramUniform1ivFUNC glProgramUniform1iv;
extern GLLOADER_API glProgramUniform2ivFUNC glProgramUniform2iv;
extern GLLOADER_API glProgramUniform3ivFUNC glProgramUniform3iv;
extern GLLOADER_API glProgramUniform4ivFUNC glProgramUniform4iv;
extern GLLOADER_API glProgramUniform1uivFUNC glProgramUniform1uiv;
extern GLLOADER_API glProgramUniform2uivFUNC glProgramUniform2uiv;
extern GLLOADER_API glProgramUniform3uivFUNC glProgramUniform3uiv;
extern GLLOADER_API glProgramUniform4uivFUNC glProgramUniform4uiv;
extern GLLOADER_API glProgramUniform1fvFUNC glProgramUniform1fv;
extern GLLOADER_API glProgramUniform2fvFUNC glProgramUniform2fv;
extern GLLOADER_API glProgramUniform3fvFUNC glProgramUniform3fv;
extern GLLOADER_API glProgramUniform4fvFUNC glProgramUniform4fv;
extern GLLOADER_API glProgramUniformMatrix2fvFUNC glProgramUniformMatrix2fv;
extern GLLOADER_API glProgramUniformMatrix3fvFUNC glProgramUniformMatrix3fv;
extern GLLOADER_API glProgramUniformMatrix4fvFUNC glProgramUniformMatrix4fv;
extern GLLOADER_API glProgramUniformMatrix2x3fvFUNC glProgramUniformMatrix2x3fv;
extern GLLOADER_API glProgramUniformMatrix3x2fvFUNC glProgramUniformMatrix3x2fv;
extern GLLOADER_API glProgramUniformMatrix2x4fvFUNC glProgramUniformMatrix2x4fv;
extern GLLOADER_API glProgramUniformMatrix4x2fvFUNC glProgramUniformMatrix4x2fv;
extern GLLOADER_API glProgramUniformMatrix3x4fvFUNC glProgramUniformMatrix3x4fv;
extern GLLOADER_API glProgramUniformMatrix4x3fvFUNC glProgramUniformMatrix4x3fv;
extern GLLOADER_API glValidateProgramPipelineFUNC glValidateProgramPipeline;
extern GLLOADER_API glGetProgramPipelineInfoLogFUNC glGetProgramPipelineInfoLog;
extern GLLOADER_API glBindImageTextureFUNC glBindImageTexture;
extern GLLOADER_API glGetBooleani_vFUNC glGetBooleani_v;
extern GLLOADER_API glMemoryBarrierFUNC glMemoryBarrier;
extern GLLOADER_API glMemoryBarrierByRegionFUNC glMemoryBarrierByRegion;
extern GLLOADER_API glTexStorage2DMultisampleFUNC glTexStorage2DMultisample;
extern GLLOADER_API glGetMultisamplefvFUNC glGetMultisamplefv;
extern GLLOADER_API glSampleMaskiFUNC glSampleMaski;
extern GLLOADER_API glGetTexLevelParameterivFUNC glGetTexLevelParameteriv;
extern GLLOADER_API glGetTexLevelParameterfvFUNC glGetTexLevelParameterfv;
extern GLLOADER_API glBindVertexBufferFUNC glBindVertexBuffer;
extern GLLOADER_API glVertexAttribFormatFUNC glVertexAttribFormat;
extern GLLOADER_API glVertexAttribIFormatFUNC glVertexAttribIFormat;
extern GLLOADER_API glVertexAttribBindingFUNC glVertexAttribBinding;
extern GLLOADER_API glVertexBindingDivisorFUNC glVertexBindingDivisor;

#endif

typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_pack_subimageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_platform_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_AMD_compressed_3DC_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_AMD_compressed_ATC_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_AMD_performance_monitorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_AMD_program_binary_Z400FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANDROID_extension_pack_es31aFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_depth_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_framebuffer_blitFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_framebuffer_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_instanced_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_pack_reverse_row_orderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_program_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_robust_resource_initializationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_texture_compression_dxt1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_texture_compression_dxt3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_texture_compression_dxt5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_texture_usageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_timer_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ANGLE_translated_shader_sourceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_clip_distanceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_color_buffer_packed_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_copy_texture_levelsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_framebuffer_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_rgb_422FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_syncFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_texture_2D_limited_npotFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_texture_format_BGRA8888FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_texture_max_levelFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_APPLE_texture_packed_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ARM_mali_program_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ARM_mali_shader_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ARM_rgba8FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ARM_shader_framebuffer_fetchFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_DMP_program_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_base_instanceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_blend_minmaxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_buffer_storageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_color_buffer_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_color_buffer_half_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_compressed_ETC1_RGB8_sub_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_copy_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_debug_labelFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_debug_markerFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_discard_framebufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_disjoint_timer_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_draw_buffersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_draw_buffers_indexedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_draw_elements_base_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_draw_instancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_float_blendFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_frag_depthFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_geometry_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_gpu_shader5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_instanced_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_map_buffer_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_multisampled_render_to_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_multiview_draw_buffersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_multi_draw_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_multi_draw_indirectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_occlusion_query_booleanFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_post_depth_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_primitive_bounding_boxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_pvrtc_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_raster_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_read_format_bgraFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_render_snormFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_robustnessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_separate_shader_objectsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_shader_framebuffer_fetchFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_shader_implicit_conversionsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_shader_integer_mixFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_shader_io_blocksFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_shader_pixel_local_storageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_shader_texture_lodFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_shadow_samplersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_sparse_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_sRGB_write_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_tessellation_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_border_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_compression_dxt1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_compression_latcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_compression_s3tcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_cube_map_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_filter_anisotropicFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_filter_minmaxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_format_BGRA8888FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_lod_biasFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_norm16FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_rgFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_sRGB_decodeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_sRGB_R8FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_sRGB_RG8FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_storageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_type_2_10_10_10_REVFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_texture_viewFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_unpack_subimageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_EXT_YUV_targetFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_FJ_shader_binary_GCCSOFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_IMG_multisampled_render_to_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_IMG_program_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_IMG_read_formatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_shader_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_IMG_texture_compression_pvrtcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_IMG_texture_compression_pvrtc2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_IMG_texture_env_enhanced_fixed_functionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_IMG_user_clip_planeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_INTEL_performance_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_KHR_blend_equation_advancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_KHR_context_flush_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_KHR_debugFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_KHR_no_errorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_KHR_robustnessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_KHR_robust_buffer_access_behaviorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_KHR_texture_compression_astc_ldrFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_3dvision_settingsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_bgrFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_bindless_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_blend_equation_advancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_conditional_renderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_conservative_rasterFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_copy_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_coverage_sampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_depth_nonlinearFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_draw_buffersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_draw_instancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_draw_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_EGL_stream_consumer_externalFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_explicit_attrib_locationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_fbo_color_attachmentsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_fenceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_fill_rectangleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_fragment_coverage_to_colorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_fragment_shader_interlockFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_framebuffer_blitFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_framebuffer_mixed_samplesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_framebuffer_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_generate_mipmap_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_geometry_shader_passthroughFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_image_formatsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_instanced_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_internalformat_sample_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_non_square_matricesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_packed_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_path_renderingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_path_rendering_shared_edgeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_pixel_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_polygon_modeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_read_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_read_depthFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_read_depth_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_read_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_sample_locationsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_sample_mask_override_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_shader_noperspective_interpolationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_shadow_samplers_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_shadow_samplers_cubeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_sRGB_formatsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_texture_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_texture_border_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_texture_compression_latcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_texture_compression_s3tcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_texture_compression_s3tc_updateFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_texture_npot_2D_mipmapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_viewport_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_NV_viewport_array2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_blend_equation_separateFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_blend_func_separateFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_blend_subtractFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_byte_coordinatesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_compressed_ETC1_RGB8_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_compressed_paletted_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_copy_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_depth24FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_depth32FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_depth_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_depth_texture_cube_mapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_draw_buffers_indexedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_draw_elements_base_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_draw_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_EGL_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_EGL_image_externalFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_EGL_image_external_essl3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_element_index_uintFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_extended_matrix_paletteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_fbo_render_mipmapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_fixed_pointFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_fragment_precision_highFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_framebuffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_geometry_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_get_program_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_gpu_shader5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_mapbufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_matrix_getFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_matrix_paletteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_packed_depth_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_point_size_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_point_spriteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_primitive_bounding_boxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_query_matrixFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_read_formatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_required_internalformatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_rgb8_rgba8FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OES_sample_shadingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OES_sample_variablesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_shader_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OES_shader_image_atomicFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_shader_io_blocksFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OES_shader_multisample_interpolationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_shader_sourceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_single_precisionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_standard_derivativesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_stencil1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_stencil4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_stencil8FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_stencil_wrapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_surfaceless_contextFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_tessellation_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_3DFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_border_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_compression_astcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_cube_mapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_cube_map_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_env_crossbarFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_float_linearFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_half_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_half_float_linearFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_mirrored_repeatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_npotFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OES_texture_stencil8FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OES_texture_storage_multisample_2d_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_texture_viewFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_vertex_array_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_vertex_half_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OES_vertex_type_10_10_10_2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OVR_multiviewFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_OVR_multiview2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_QCOM_binning_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_QCOM_driver_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_QCOM_extended_getFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_QCOM_extended_get2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_QCOM_performance_monitor_global_modeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_QCOM_tiled_renderingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_QCOM_writeonly_renderingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_VERSION_1_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_VERSION_1_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_VERSION_2_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_VERSION_3_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_VERSION_3_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLES_VIV_shader_binaryFUNC)();

extern GLLOADER_API glloader_GLES_NV_pack_subimageFUNC glloader_GLES_NV_pack_subimage;
extern GLLOADER_API glloader_GLES_NV_platform_binaryFUNC glloader_GLES_NV_platform_binary;
extern GLLOADER_API glloader_GLES_AMD_compressed_3DC_textureFUNC glloader_GLES_AMD_compressed_3DC_texture;
extern GLLOADER_API glloader_GLES_AMD_compressed_ATC_textureFUNC glloader_GLES_AMD_compressed_ATC_texture;
extern GLLOADER_API glloader_GLES_AMD_performance_monitorFUNC glloader_GLES_AMD_performance_monitor;
extern GLLOADER_API glloader_GLES_AMD_program_binary_Z400FUNC glloader_GLES_AMD_program_binary_Z400;
extern GLLOADER_API glloader_GLES_ANDROID_extension_pack_es31aFUNC glloader_GLES_ANDROID_extension_pack_es31a;
extern GLLOADER_API glloader_GLES_ANGLE_depth_textureFUNC glloader_GLES_ANGLE_depth_texture;
extern GLLOADER_API glloader_GLES_ANGLE_framebuffer_blitFUNC glloader_GLES_ANGLE_framebuffer_blit;
extern GLLOADER_API glloader_GLES_ANGLE_framebuffer_multisampleFUNC glloader_GLES_ANGLE_framebuffer_multisample;
extern GLLOADER_API glloader_GLES_ANGLE_instanced_arraysFUNC glloader_GLES_ANGLE_instanced_arrays;
extern GLLOADER_API glloader_GLES_ANGLE_pack_reverse_row_orderFUNC glloader_GLES_ANGLE_pack_reverse_row_order;
extern GLLOADER_API glloader_GLES_ANGLE_program_binaryFUNC glloader_GLES_ANGLE_program_binary;
extern GLLOADER_API glloader_GLES_ANGLE_robust_resource_initializationFUNC glloader_GLES_ANGLE_robust_resource_initialization;
extern GLLOADER_API glloader_GLES_ANGLE_texture_compression_dxt1FUNC glloader_GLES_ANGLE_texture_compression_dxt1;
extern GLLOADER_API glloader_GLES_ANGLE_texture_compression_dxt3FUNC glloader_GLES_ANGLE_texture_compression_dxt3;
extern GLLOADER_API glloader_GLES_ANGLE_texture_compression_dxt5FUNC glloader_GLES_ANGLE_texture_compression_dxt5;
extern GLLOADER_API glloader_GLES_ANGLE_texture_usageFUNC glloader_GLES_ANGLE_texture_usage;
extern GLLOADER_API glloader_GL_EXT_timer_queryFUNC glloader_GL_EXT_timer_query;
extern GLLOADER_API glloader_GLES_ANGLE_translated_shader_sourceFUNC glloader_GLES_ANGLE_translated_shader_source;
extern GLLOADER_API glloader_GLES_APPLE_clip_distanceFUNC glloader_GLES_APPLE_clip_distance;
extern GLLOADER_API glloader_GLES_APPLE_color_buffer_packed_floatFUNC glloader_GLES_APPLE_color_buffer_packed_float;
extern GLLOADER_API glloader_GLES_APPLE_copy_texture_levelsFUNC glloader_GLES_APPLE_copy_texture_levels;
extern GLLOADER_API glloader_GLES_APPLE_framebuffer_multisampleFUNC glloader_GLES_APPLE_framebuffer_multisample;
extern GLLOADER_API glloader_GLES_APPLE_rgb_422FUNC glloader_GLES_APPLE_rgb_422;
extern GLLOADER_API glloader_GLES_APPLE_syncFUNC glloader_GLES_APPLE_sync;
extern GLLOADER_API glloader_GLES_APPLE_texture_2D_limited_npotFUNC glloader_GLES_APPLE_texture_2D_limited_npot;
extern GLLOADER_API glloader_GLES_APPLE_texture_format_BGRA8888FUNC glloader_GLES_APPLE_texture_format_BGRA8888;
extern GLLOADER_API glloader_GLES_APPLE_texture_max_levelFUNC glloader_GLES_APPLE_texture_max_level;
extern GLLOADER_API glloader_GLES_APPLE_texture_packed_floatFUNC glloader_GLES_APPLE_texture_packed_float;
extern GLLOADER_API glloader_GLES_ARM_mali_program_binaryFUNC glloader_GLES_ARM_mali_program_binary;
extern GLLOADER_API glloader_GLES_ARM_mali_shader_binaryFUNC glloader_GLES_ARM_mali_shader_binary;
extern GLLOADER_API glloader_GLES_ARM_rgba8FUNC glloader_GLES_ARM_rgba8;
extern GLLOADER_API glloader_GLES_ARM_shader_framebuffer_fetchFUNC glloader_GLES_ARM_shader_framebuffer_fetch;
extern GLLOADER_API glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencilFUNC glloader_GLES_ARM_shader_framebuffer_fetch_depth_stencil;
extern GLLOADER_API glloader_GLES_DMP_program_binaryFUNC glloader_GLES_DMP_program_binary;
extern GLLOADER_API glloader_GLES_EXT_base_instanceFUNC glloader_GLES_EXT_base_instance;
extern GLLOADER_API glloader_GLES_EXT_blend_minmaxFUNC glloader_GLES_EXT_blend_minmax;
extern GLLOADER_API glloader_GLES_EXT_buffer_storageFUNC glloader_GLES_EXT_buffer_storage;
extern GLLOADER_API glloader_GLES_EXT_color_buffer_floatFUNC glloader_GLES_EXT_color_buffer_float;
extern GLLOADER_API glloader_GLES_EXT_color_buffer_half_floatFUNC glloader_GLES_EXT_color_buffer_half_float;
extern GLLOADER_API glloader_GLES_EXT_compressed_ETC1_RGB8_sub_textureFUNC glloader_GLES_EXT_compressed_ETC1_RGB8_sub_texture;
extern GLLOADER_API glloader_GLES_EXT_copy_imageFUNC glloader_GLES_EXT_copy_image;
extern GLLOADER_API glloader_GLES_EXT_debug_labelFUNC glloader_GLES_EXT_debug_label;
extern GLLOADER_API glloader_GLES_EXT_debug_markerFUNC glloader_GLES_EXT_debug_marker;
extern GLLOADER_API glloader_GLES_EXT_discard_framebufferFUNC glloader_GLES_EXT_discard_framebuffer;
extern GLLOADER_API glloader_GLES_EXT_disjoint_timer_queryFUNC glloader_GLES_EXT_disjoint_timer_query;
extern GLLOADER_API glloader_GLES_EXT_draw_buffersFUNC glloader_GLES_EXT_draw_buffers;
extern GLLOADER_API glloader_GLES_EXT_draw_buffers_indexedFUNC glloader_GLES_EXT_draw_buffers_indexed;
extern GLLOADER_API glloader_GLES_EXT_draw_elements_base_vertexFUNC glloader_GLES_EXT_draw_elements_base_vertex;
extern GLLOADER_API glloader_GLES_EXT_draw_instancedFUNC glloader_GLES_EXT_draw_instanced;
extern GLLOADER_API glloader_GLES_EXT_float_blendFUNC glloader_GLES_EXT_float_blend;
extern GLLOADER_API glloader_GLES_EXT_frag_depthFUNC glloader_GLES_EXT_frag_depth;
extern GLLOADER_API glloader_GLES_EXT_geometry_shaderFUNC glloader_GLES_EXT_geometry_shader;
extern GLLOADER_API glloader_GLES_EXT_gpu_shader5FUNC glloader_GLES_EXT_gpu_shader5;
extern GLLOADER_API glloader_GLES_EXT_instanced_arraysFUNC glloader_GLES_EXT_instanced_arrays;
extern GLLOADER_API glloader_GLES_EXT_map_buffer_rangeFUNC glloader_GLES_EXT_map_buffer_range;
extern GLLOADER_API glloader_GLES_EXT_multisampled_render_to_textureFUNC glloader_GLES_EXT_multisampled_render_to_texture;
extern GLLOADER_API glloader_GLES_EXT_multiview_draw_buffersFUNC glloader_GLES_EXT_multiview_draw_buffers;
extern GLLOADER_API glloader_GLES_EXT_multi_draw_arraysFUNC glloader_GLES_EXT_multi_draw_arrays;
extern GLLOADER_API glloader_GLES_EXT_multi_draw_indirectFUNC glloader_GLES_EXT_multi_draw_indirect;
extern GLLOADER_API glloader_GLES_EXT_occlusion_query_booleanFUNC glloader_GLES_EXT_occlusion_query_boolean;
extern GLLOADER_API glloader_GLES_EXT_post_depth_coverageFUNC glloader_GLES_EXT_post_depth_coverage;
extern GLLOADER_API glloader_GLES_EXT_primitive_bounding_boxFUNC glloader_GLES_EXT_primitive_bounding_box;
extern GLLOADER_API glloader_GLES_EXT_pvrtc_sRGBFUNC glloader_GLES_EXT_pvrtc_sRGB;
extern GLLOADER_API glloader_GLES_EXT_raster_multisampleFUNC glloader_GLES_EXT_raster_multisample;
extern GLLOADER_API glloader_GLES_EXT_read_format_bgraFUNC glloader_GLES_EXT_read_format_bgra;
extern GLLOADER_API glloader_GLES_EXT_render_snormFUNC glloader_GLES_EXT_render_snorm;
extern GLLOADER_API glloader_GLES_EXT_robustnessFUNC glloader_GLES_EXT_robustness;
extern GLLOADER_API glloader_GLES_EXT_separate_shader_objectsFUNC glloader_GLES_EXT_separate_shader_objects;
extern GLLOADER_API glloader_GLES_EXT_shader_framebuffer_fetchFUNC glloader_GLES_EXT_shader_framebuffer_fetch;
extern GLLOADER_API glloader_GLES_EXT_shader_implicit_conversionsFUNC glloader_GLES_EXT_shader_implicit_conversions;
extern GLLOADER_API glloader_GLES_EXT_shader_integer_mixFUNC glloader_GLES_EXT_shader_integer_mix;
extern GLLOADER_API glloader_GLES_EXT_shader_io_blocksFUNC glloader_GLES_EXT_shader_io_blocks;
extern GLLOADER_API glloader_GLES_EXT_shader_pixel_local_storageFUNC glloader_GLES_EXT_shader_pixel_local_storage;
extern GLLOADER_API glloader_GLES_EXT_shader_texture_lodFUNC glloader_GLES_EXT_shader_texture_lod;
extern GLLOADER_API glloader_GLES_EXT_shadow_samplersFUNC glloader_GLES_EXT_shadow_samplers;
extern GLLOADER_API glloader_GLES_EXT_sparse_textureFUNC glloader_GLES_EXT_sparse_texture;
extern GLLOADER_API glloader_GLES_EXT_sRGBFUNC glloader_GLES_EXT_sRGB;
extern GLLOADER_API glloader_GLES_EXT_sRGB_write_controlFUNC glloader_GLES_EXT_sRGB_write_control;
extern GLLOADER_API glloader_GLES_EXT_tessellation_shaderFUNC glloader_GLES_EXT_tessellation_shader;
extern GLLOADER_API glloader_GLES_EXT_texture_border_clampFUNC glloader_GLES_EXT_texture_border_clamp;
extern GLLOADER_API glloader_GLES_EXT_texture_bufferFUNC glloader_GLES_EXT_texture_buffer;
extern GLLOADER_API glloader_GLES_EXT_texture_compression_dxt1FUNC glloader_GLES_EXT_texture_compression_dxt1;
extern GLLOADER_API glloader_GLES_EXT_texture_compression_latcFUNC glloader_GLES_EXT_texture_compression_latc;
extern GLLOADER_API glloader_GLES_EXT_texture_compression_s3tcFUNC glloader_GLES_EXT_texture_compression_s3tc;
extern GLLOADER_API glloader_GLES_EXT_texture_cube_map_arrayFUNC glloader_GLES_EXT_texture_cube_map_array;
extern GLLOADER_API glloader_GLES_EXT_texture_filter_anisotropicFUNC glloader_GLES_EXT_texture_filter_anisotropic;
extern GLLOADER_API glloader_GLES_EXT_texture_filter_minmaxFUNC glloader_GLES_EXT_texture_filter_minmax;
extern GLLOADER_API glloader_GLES_EXT_texture_format_BGRA8888FUNC glloader_GLES_EXT_texture_format_BGRA8888;
extern GLLOADER_API glloader_GLES_EXT_texture_lod_biasFUNC glloader_GLES_EXT_texture_lod_bias;
extern GLLOADER_API glloader_GLES_EXT_texture_norm16FUNC glloader_GLES_EXT_texture_norm16;
extern GLLOADER_API glloader_GLES_EXT_texture_rgFUNC glloader_GLES_EXT_texture_rg;
extern GLLOADER_API glloader_GLES_EXT_texture_sRGB_decodeFUNC glloader_GLES_EXT_texture_sRGB_decode;
extern GLLOADER_API glloader_GLES_EXT_texture_sRGB_R8FUNC glloader_GLES_EXT_texture_sRGB_R8;
extern GLLOADER_API glloader_GLES_EXT_texture_sRGB_RG8FUNC glloader_GLES_EXT_texture_sRGB_RG8;
extern GLLOADER_API glloader_GLES_EXT_texture_storageFUNC glloader_GLES_EXT_texture_storage;
extern GLLOADER_API glloader_GLES_EXT_texture_type_2_10_10_10_REVFUNC glloader_GLES_EXT_texture_type_2_10_10_10_REV;
extern GLLOADER_API glloader_GLES_EXT_texture_viewFUNC glloader_GLES_EXT_texture_view;
extern GLLOADER_API glloader_GLES_EXT_unpack_subimageFUNC glloader_GLES_EXT_unpack_subimage;
extern GLLOADER_API glloader_GLES_EXT_YUV_targetFUNC glloader_GLES_EXT_YUV_target;
extern GLLOADER_API glloader_GLES_FJ_shader_binary_GCCSOFUNC glloader_GLES_FJ_shader_binary_GCCSO;
extern GLLOADER_API glloader_GLES_IMG_multisampled_render_to_textureFUNC glloader_GLES_IMG_multisampled_render_to_texture;
extern GLLOADER_API glloader_GLES_IMG_program_binaryFUNC glloader_GLES_IMG_program_binary;
extern GLLOADER_API glloader_GLES_IMG_read_formatFUNC glloader_GLES_IMG_read_format;
extern GLLOADER_API glloader_GLES_shader_binaryFUNC glloader_GLES_shader_binary;
extern GLLOADER_API glloader_GLES_IMG_texture_compression_pvrtcFUNC glloader_GLES_IMG_texture_compression_pvrtc;
extern GLLOADER_API glloader_GLES_IMG_texture_compression_pvrtc2FUNC glloader_GLES_IMG_texture_compression_pvrtc2;
extern GLLOADER_API glloader_GLES_IMG_texture_env_enhanced_fixed_functionFUNC glloader_GLES_IMG_texture_env_enhanced_fixed_function;
extern GLLOADER_API glloader_GLES_IMG_user_clip_planeFUNC glloader_GLES_IMG_user_clip_plane;
extern GLLOADER_API glloader_GLES_INTEL_performance_queryFUNC glloader_GLES_INTEL_performance_query;
extern GLLOADER_API glloader_GLES_KHR_blend_equation_advancedFUNC glloader_GLES_KHR_blend_equation_advanced;
extern GLLOADER_API glloader_GLES_KHR_context_flush_controlFUNC glloader_GLES_KHR_context_flush_control;
extern GLLOADER_API glloader_GLES_KHR_debugFUNC glloader_GLES_KHR_debug;
extern GLLOADER_API glloader_GLES_KHR_no_errorFUNC glloader_GLES_KHR_no_error;
extern GLLOADER_API glloader_GLES_KHR_robustnessFUNC glloader_GLES_KHR_robustness;
extern GLLOADER_API glloader_GLES_KHR_robust_buffer_access_behaviorFUNC glloader_GLES_KHR_robust_buffer_access_behavior;
extern GLLOADER_API glloader_GLES_KHR_texture_compression_astc_ldrFUNC glloader_GLES_KHR_texture_compression_astc_ldr;
extern GLLOADER_API glloader_GLES_NV_3dvision_settingsFUNC glloader_GLES_NV_3dvision_settings;
extern GLLOADER_API glloader_GLES_NV_bgrFUNC glloader_GLES_NV_bgr;
extern GLLOADER_API glloader_GLES_NV_bindless_textureFUNC glloader_GLES_NV_bindless_texture;
extern GLLOADER_API glloader_GLES_NV_blend_equation_advancedFUNC glloader_GLES_NV_blend_equation_advanced;
extern GLLOADER_API glloader_GLES_NV_conditional_renderFUNC glloader_GLES_NV_conditional_render;
extern GLLOADER_API glloader_GLES_NV_conservative_rasterFUNC glloader_GLES_NV_conservative_raster;
extern GLLOADER_API glloader_GLES_NV_copy_bufferFUNC glloader_GLES_NV_copy_buffer;
extern GLLOADER_API glloader_GLES_NV_coverage_sampleFUNC glloader_GLES_NV_coverage_sample;
extern GLLOADER_API glloader_GLES_NV_depth_nonlinearFUNC glloader_GLES_NV_depth_nonlinear;
extern GLLOADER_API glloader_GLES_NV_draw_buffersFUNC glloader_GLES_NV_draw_buffers;
extern GLLOADER_API glloader_GLES_NV_draw_instancedFUNC glloader_GLES_NV_draw_instanced;
extern GLLOADER_API glloader_GLES_NV_draw_textureFUNC glloader_GLES_NV_draw_texture;
extern GLLOADER_API glloader_GLES_NV_EGL_stream_consumer_externalFUNC glloader_GLES_NV_EGL_stream_consumer_external;
extern GLLOADER_API glloader_GLES_NV_explicit_attrib_locationFUNC glloader_GLES_NV_explicit_attrib_location;
extern GLLOADER_API glloader_GLES_NV_fbo_color_attachmentsFUNC glloader_GLES_NV_fbo_color_attachments;
extern GLLOADER_API glloader_GLES_NV_fenceFUNC glloader_GLES_NV_fence;
extern GLLOADER_API glloader_GLES_NV_fill_rectangleFUNC glloader_GLES_NV_fill_rectangle;
extern GLLOADER_API glloader_GLES_NV_fragment_coverage_to_colorFUNC glloader_GLES_NV_fragment_coverage_to_color;
extern GLLOADER_API glloader_GLES_NV_fragment_shader_interlockFUNC glloader_GLES_NV_fragment_shader_interlock;
extern GLLOADER_API glloader_GLES_NV_framebuffer_blitFUNC glloader_GLES_NV_framebuffer_blit;
extern GLLOADER_API glloader_GLES_NV_framebuffer_mixed_samplesFUNC glloader_GLES_NV_framebuffer_mixed_samples;
extern GLLOADER_API glloader_GLES_NV_framebuffer_multisampleFUNC glloader_GLES_NV_framebuffer_multisample;
extern GLLOADER_API glloader_GLES_NV_generate_mipmap_sRGBFUNC glloader_GLES_NV_generate_mipmap_sRGB;
extern GLLOADER_API glloader_GLES_NV_geometry_shader_passthroughFUNC glloader_GLES_NV_geometry_shader_passthrough;
extern GLLOADER_API glloader_GLES_NV_image_formatsFUNC glloader_GLES_NV_image_formats;
extern GLLOADER_API glloader_GLES_NV_instanced_arraysFUNC glloader_GLES_NV_instanced_arrays;
extern GLLOADER_API glloader_GLES_NV_internalformat_sample_queryFUNC glloader_GLES_NV_internalformat_sample_query;
extern GLLOADER_API glloader_GLES_NV_non_square_matricesFUNC glloader_GLES_NV_non_square_matrices;
extern GLLOADER_API glloader_GLES_NV_packed_floatFUNC glloader_GLES_NV_packed_float;
extern GLLOADER_API glloader_GLES_NV_path_renderingFUNC glloader_GLES_NV_path_rendering;
extern GLLOADER_API glloader_GLES_NV_path_rendering_shared_edgeFUNC glloader_GLES_NV_path_rendering_shared_edge;
extern GLLOADER_API glloader_GLES_NV_pixel_buffer_objectFUNC glloader_GLES_NV_pixel_buffer_object;
extern GLLOADER_API glloader_GLES_NV_polygon_modeFUNC glloader_GLES_NV_polygon_mode;
extern GLLOADER_API glloader_GLES_NV_read_bufferFUNC glloader_GLES_NV_read_buffer;
extern GLLOADER_API glloader_GLES_NV_read_depthFUNC glloader_GLES_NV_read_depth;
extern GLLOADER_API glloader_GLES_NV_read_depth_stencilFUNC glloader_GLES_NV_read_depth_stencil;
extern GLLOADER_API glloader_GLES_NV_read_stencilFUNC glloader_GLES_NV_read_stencil;
extern GLLOADER_API glloader_GLES_NV_sample_locationsFUNC glloader_GLES_NV_sample_locations;
extern GLLOADER_API glloader_GLES_NV_sample_mask_override_coverageFUNC glloader_GLES_NV_sample_mask_override_coverage;
extern GLLOADER_API glloader_GLES_NV_shader_noperspective_interpolationFUNC glloader_GLES_NV_shader_noperspective_interpolation;
extern GLLOADER_API glloader_GLES_NV_shadow_samplers_arrayFUNC glloader_GLES_NV_shadow_samplers_array;
extern GLLOADER_API glloader_GLES_NV_shadow_samplers_cubeFUNC glloader_GLES_NV_shadow_samplers_cube;
extern GLLOADER_API glloader_GLES_NV_sRGB_formatsFUNC glloader_GLES_NV_sRGB_formats;
extern GLLOADER_API glloader_GLES_NV_texture_arrayFUNC glloader_GLES_NV_texture_array;
extern GLLOADER_API glloader_GLES_NV_texture_border_clampFUNC glloader_GLES_NV_texture_border_clamp;
extern GLLOADER_API glloader_GLES_NV_texture_compression_latcFUNC glloader_GLES_NV_texture_compression_latc;
extern GLLOADER_API glloader_GLES_NV_texture_compression_s3tcFUNC glloader_GLES_NV_texture_compression_s3tc;
extern GLLOADER_API glloader_GLES_NV_texture_compression_s3tc_updateFUNC glloader_GLES_NV_texture_compression_s3tc_update;
extern GLLOADER_API glloader_GLES_NV_texture_npot_2D_mipmapFUNC glloader_GLES_NV_texture_npot_2D_mipmap;
extern GLLOADER_API glloader_GLES_NV_viewport_arrayFUNC glloader_GLES_NV_viewport_array;
extern GLLOADER_API glloader_GLES_NV_viewport_array2FUNC glloader_GLES_NV_viewport_array2;
extern GLLOADER_API glloader_GLES_OES_blend_equation_separateFUNC glloader_GLES_OES_blend_equation_separate;
extern GLLOADER_API glloader_GLES_OES_blend_func_separateFUNC glloader_GLES_OES_blend_func_separate;
extern GLLOADER_API glloader_GLES_OES_blend_subtractFUNC glloader_GLES_OES_blend_subtract;
extern GLLOADER_API glloader_GLES_OES_byte_coordinatesFUNC glloader_GLES_OES_byte_coordinates;
extern GLLOADER_API glloader_GLES_OES_compressed_ETC1_RGB8_textureFUNC glloader_GLES_OES_compressed_ETC1_RGB8_texture;
extern GLLOADER_API glloader_GLES_OES_compressed_paletted_textureFUNC glloader_GLES_OES_compressed_paletted_texture;
extern GLLOADER_API glloader_GLES_OES_copy_imageFUNC glloader_GLES_OES_copy_image;
extern GLLOADER_API glloader_GLES_OES_depth24FUNC glloader_GLES_OES_depth24;
extern GLLOADER_API glloader_GLES_OES_depth32FUNC glloader_GLES_OES_depth32;
extern GLLOADER_API glloader_GLES_OES_depth_textureFUNC glloader_GLES_OES_depth_texture;
extern GLLOADER_API glloader_GLES_OES_depth_texture_cube_mapFUNC glloader_GLES_OES_depth_texture_cube_map;
extern GLLOADER_API glloader_GLES_OES_draw_buffers_indexedFUNC glloader_GLES_OES_draw_buffers_indexed;
extern GLLOADER_API glloader_GLES_OES_draw_elements_base_vertexFUNC glloader_GLES_OES_draw_elements_base_vertex;
extern GLLOADER_API glloader_GLES_OES_draw_textureFUNC glloader_GLES_OES_draw_texture;
extern GLLOADER_API glloader_GLES_OES_EGL_imageFUNC glloader_GLES_OES_EGL_image;
extern GLLOADER_API glloader_GLES_OES_EGL_image_externalFUNC glloader_GLES_OES_EGL_image_external;
extern GLLOADER_API glloader_GLES_OES_EGL_image_external_essl3FUNC glloader_GLES_OES_EGL_image_external_essl3;
extern GLLOADER_API glloader_GLES_OES_element_index_uintFUNC glloader_GLES_OES_element_index_uint;
extern GLLOADER_API glloader_GLES_OES_extended_matrix_paletteFUNC glloader_GLES_OES_extended_matrix_palette;
extern GLLOADER_API glloader_GLES_OES_fbo_render_mipmapFUNC glloader_GLES_OES_fbo_render_mipmap;
extern GLLOADER_API glloader_GLES_OES_fixed_pointFUNC glloader_GLES_OES_fixed_point;
extern GLLOADER_API glloader_GLES_OES_fragment_precision_highFUNC glloader_GLES_OES_fragment_precision_high;
extern GLLOADER_API glloader_GLES_OES_framebuffer_objectFUNC glloader_GLES_OES_framebuffer_object;
extern GLLOADER_API glloader_GLES_OES_geometry_shaderFUNC glloader_GLES_OES_geometry_shader;
extern GLLOADER_API glloader_GLES_OES_get_program_binaryFUNC glloader_GLES_OES_get_program_binary;
extern GLLOADER_API glloader_GLES_OES_gpu_shader5FUNC glloader_GLES_OES_gpu_shader5;
extern GLLOADER_API glloader_GLES_OES_mapbufferFUNC glloader_GLES_OES_mapbuffer;
extern GLLOADER_API glloader_GLES_OES_matrix_getFUNC glloader_GLES_OES_matrix_get;
extern GLLOADER_API glloader_GLES_OES_matrix_paletteFUNC glloader_GLES_OES_matrix_palette;
extern GLLOADER_API glloader_GLES_OES_packed_depth_stencilFUNC glloader_GLES_OES_packed_depth_stencil;
extern GLLOADER_API glloader_GLES_OES_point_size_arrayFUNC glloader_GLES_OES_point_size_array;
extern GLLOADER_API glloader_GLES_OES_point_spriteFUNC glloader_GLES_OES_point_sprite;
extern GLLOADER_API glloader_GLES_OES_primitive_bounding_boxFUNC glloader_GLES_OES_primitive_bounding_box;
extern GLLOADER_API glloader_GLES_OES_query_matrixFUNC glloader_GLES_OES_query_matrix;
extern GLLOADER_API glloader_GLES_OES_read_formatFUNC glloader_GLES_OES_read_format;
extern GLLOADER_API glloader_GLES_OES_required_internalformatFUNC glloader_GLES_OES_required_internalformat;
extern GLLOADER_API glloader_GLES_OES_rgb8_rgba8FUNC glloader_GLES_OES_rgb8_rgba8;
extern GLLOADER_API glloader_GL_OES_sample_shadingFUNC glloader_GL_OES_sample_shading;
extern GLLOADER_API glloader_GL_OES_sample_variablesFUNC glloader_GL_OES_sample_variables;
extern GLLOADER_API glloader_GLES_OES_shader_binaryFUNC glloader_GLES_OES_shader_binary;
extern GLLOADER_API glloader_GL_OES_shader_image_atomicFUNC glloader_GL_OES_shader_image_atomic;
extern GLLOADER_API glloader_GLES_OES_shader_io_blocksFUNC glloader_GLES_OES_shader_io_blocks;
extern GLLOADER_API glloader_GL_OES_shader_multisample_interpolationFUNC glloader_GL_OES_shader_multisample_interpolation;
extern GLLOADER_API glloader_GLES_OES_shader_sourceFUNC glloader_GLES_OES_shader_source;
extern GLLOADER_API glloader_GLES_OES_single_precisionFUNC glloader_GLES_OES_single_precision;
extern GLLOADER_API glloader_GLES_OES_standard_derivativesFUNC glloader_GLES_OES_standard_derivatives;
extern GLLOADER_API glloader_GLES_OES_stencil1FUNC glloader_GLES_OES_stencil1;
extern GLLOADER_API glloader_GLES_OES_stencil4FUNC glloader_GLES_OES_stencil4;
extern GLLOADER_API glloader_GLES_OES_stencil8FUNC glloader_GLES_OES_stencil8;
extern GLLOADER_API glloader_GLES_OES_stencil_wrapFUNC glloader_GLES_OES_stencil_wrap;
extern GLLOADER_API glloader_GLES_OES_surfaceless_contextFUNC glloader_GLES_OES_surfaceless_context;
extern GLLOADER_API glloader_GLES_OES_tessellation_shaderFUNC glloader_GLES_OES_tessellation_shader;
extern GLLOADER_API glloader_GLES_OES_texture_3DFUNC glloader_GLES_OES_texture_3D;
extern GLLOADER_API glloader_GLES_OES_texture_border_clampFUNC glloader_GLES_OES_texture_border_clamp;
extern GLLOADER_API glloader_GLES_OES_texture_bufferFUNC glloader_GLES_OES_texture_buffer;
extern GLLOADER_API glloader_GLES_OES_texture_compression_astcFUNC glloader_GLES_OES_texture_compression_astc;
extern GLLOADER_API glloader_GLES_OES_texture_cube_mapFUNC glloader_GLES_OES_texture_cube_map;
extern GLLOADER_API glloader_GLES_OES_texture_cube_map_arrayFUNC glloader_GLES_OES_texture_cube_map_array;
extern GLLOADER_API glloader_GLES_OES_texture_env_crossbarFUNC glloader_GLES_OES_texture_env_crossbar;
extern GLLOADER_API glloader_GLES_OES_texture_floatFUNC glloader_GLES_OES_texture_float;
extern GLLOADER_API glloader_GLES_OES_texture_float_linearFUNC glloader_GLES_OES_texture_float_linear;
extern GLLOADER_API glloader_GLES_OES_texture_half_floatFUNC glloader_GLES_OES_texture_half_float;
extern GLLOADER_API glloader_GLES_OES_texture_half_float_linearFUNC glloader_GLES_OES_texture_half_float_linear;
extern GLLOADER_API glloader_GLES_OES_texture_mirrored_repeatFUNC glloader_GLES_OES_texture_mirrored_repeat;
extern GLLOADER_API glloader_GLES_OES_texture_npotFUNC glloader_GLES_OES_texture_npot;
extern GLLOADER_API glloader_GL_OES_texture_stencil8FUNC glloader_GL_OES_texture_stencil8;
extern GLLOADER_API glloader_GL_OES_texture_storage_multisample_2d_arrayFUNC glloader_GL_OES_texture_storage_multisample_2d_array;
extern GLLOADER_API glloader_GLES_OES_texture_viewFUNC glloader_GLES_OES_texture_view;
extern GLLOADER_API glloader_GLES_OES_vertex_array_objectFUNC glloader_GLES_OES_vertex_array_object;
extern GLLOADER_API glloader_GLES_OES_vertex_half_floatFUNC glloader_GLES_OES_vertex_half_float;
extern GLLOADER_API glloader_GLES_OES_vertex_type_10_10_10_2FUNC glloader_GLES_OES_vertex_type_10_10_10_2;
extern GLLOADER_API glloader_GLES_OVR_multiviewFUNC glloader_GLES_OVR_multiview;
extern GLLOADER_API glloader_GLES_OVR_multiview2FUNC glloader_GLES_OVR_multiview2;
extern GLLOADER_API glloader_GLES_QCOM_binning_controlFUNC glloader_GLES_QCOM_binning_control;
extern GLLOADER_API glloader_GLES_QCOM_driver_controlFUNC glloader_GLES_QCOM_driver_control;
extern GLLOADER_API glloader_GLES_QCOM_extended_getFUNC glloader_GLES_QCOM_extended_get;
extern GLLOADER_API glloader_GLES_QCOM_extended_get2FUNC glloader_GLES_QCOM_extended_get2;
extern GLLOADER_API glloader_GLES_QCOM_performance_monitor_global_modeFUNC glloader_GLES_QCOM_performance_monitor_global_mode;
extern GLLOADER_API glloader_GLES_QCOM_tiled_renderingFUNC glloader_GLES_QCOM_tiled_rendering;
extern GLLOADER_API glloader_GLES_QCOM_writeonly_renderingFUNC glloader_GLES_QCOM_writeonly_rendering;
extern GLLOADER_API glloader_GLES_VERSION_1_0FUNC glloader_GLES_VERSION_1_0;
extern GLLOADER_API glloader_GLES_VERSION_1_1FUNC glloader_GLES_VERSION_1_1;
extern GLLOADER_API glloader_GLES_VERSION_2_0FUNC glloader_GLES_VERSION_2_0;
extern GLLOADER_API glloader_GLES_VERSION_3_0FUNC glloader_GLES_VERSION_3_0;
extern GLLOADER_API glloader_GLES_VERSION_3_1FUNC glloader_GLES_VERSION_3_1;
extern GLLOADER_API glloader_GLES_VIV_shader_binaryFUNC glloader_GLES_VIV_shader_binary;

#ifdef __cplusplus
}
#endif

#endif		/* _GLLOADER_GLES_H */
