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

#ifndef _GLLOADER_GL_H
#define _GLLOADER_GL_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef GL_3DFX_multisample
#define GL_3DFX_multisample 1
#endif

#ifndef GL_3DFX_tbuffer
#define GL_3DFX_tbuffer 1
#endif

#ifndef GL_3DFX_texture_compression_FXT1
#define GL_3DFX_texture_compression_FXT1 1
#endif

#ifndef GL_AMD_blend_minmax_factor
#define GL_AMD_blend_minmax_factor 1
#endif

#ifndef GL_AMD_conservative_depth
#define GL_AMD_conservative_depth 1
#endif

#ifndef GL_AMD_debug_output
#define GL_AMD_debug_output 1
#endif

#ifndef GL_AMD_depth_clamp_separate
#define GL_AMD_depth_clamp_separate 1
#endif

#ifndef GL_AMD_draw_buffers_blend
#define GL_AMD_draw_buffers_blend 1
#endif

#ifndef GL_AMD_gcn_shader
#define GL_AMD_gcn_shader 1
#endif

#ifndef GL_AMD_gpu_shader_int64
#define GL_AMD_gpu_shader_int64 1
#endif

#ifndef GL_AMD_interleaved_elements
#define GL_AMD_interleaved_elements 1
#endif

#ifndef GL_AMD_multi_draw_indirect
#define GL_AMD_multi_draw_indirect 1
#endif

#ifndef GL_AMD_name_gen_delete
#define GL_AMD_name_gen_delete 1
#endif

#ifndef GL_AMD_occlusion_query_event
#define GL_AMD_occlusion_query_event 1
#endif

#ifndef GL_AMD_performance_monitor
#define GL_AMD_performance_monitor 1
#endif

#ifndef GL_AMD_pinned_memory
#define GL_AMD_pinned_memory 1
#endif

#ifndef GL_AMD_query_buffer_object
#define GL_AMD_query_buffer_object 1
#endif

#ifndef GL_AMD_sample_positions
#define GL_AMD_sample_positions 1
#endif

#ifndef GL_AMD_seamless_cubemap_per_texture
#define GL_AMD_seamless_cubemap_per_texture 1
#endif

#ifndef GL_AMD_shader_atomic_counter_ops
#define GL_AMD_shader_atomic_counter_ops 1
#endif

#ifndef GL_AMD_shader_stencil_export
#define GL_AMD_shader_stencil_export 1
#endif

#ifndef GL_AMD_shader_stencil_value_export
#define GL_AMD_shader_stencil_value_export 1
#endif

#ifndef GL_AMD_shader_trinary_minmax
#define GL_AMD_shader_trinary_minmax 1
#endif

#ifndef GL_AMD_sparse_texture
#define GL_AMD_sparse_texture 1
#endif

#ifndef GL_AMD_stencil_operation_extended
#define GL_AMD_stencil_operation_extended 1
#endif

#ifndef GL_AMD_texture_texture4
#define GL_AMD_texture_texture4 1
#endif

#ifndef GL_AMD_transform_feedback3_lines_triangles
#define GL_AMD_transform_feedback3_lines_triangles 1
#endif

#ifndef GL_AMD_transform_feedback4
#define GL_AMD_transform_feedback4 1
#endif

#ifndef GL_AMD_vertex_shader_layer
#define GL_AMD_vertex_shader_layer 1
#endif

#ifndef GL_AMD_vertex_shader_tessellator
#define GL_AMD_vertex_shader_tessellator 1
#endif

#ifndef GL_AMD_vertex_shader_viewport_index
#define GL_AMD_vertex_shader_viewport_index 1
#endif

#ifndef GL_APPLE_aux_depth_stencil
#define GL_APPLE_aux_depth_stencil 1
#endif

#ifndef GL_APPLE_client_storage
#define GL_APPLE_client_storage 1
#endif

#ifndef GL_APPLE_element_array
#define GL_APPLE_element_array 1
#endif

#ifndef GL_APPLE_fence
#define GL_APPLE_fence 1
#endif

#ifndef GL_APPLE_float_pixels
#define GL_APPLE_float_pixels 1
#endif

#ifndef GL_APPLE_flush_buffer_range
#define GL_APPLE_flush_buffer_range 1
#endif

#ifndef GL_APPLE_object_purgeable
#define GL_APPLE_object_purgeable 1
#endif

#ifndef GL_APPLE_rgb_422
#define GL_APPLE_rgb_422 1
#endif

#ifndef GL_APPLE_row_bytes
#define GL_APPLE_row_bytes 1
#endif

#ifndef GL_APPLE_specular_vector
#define GL_APPLE_specular_vector 1
#endif

#ifndef GL_APPLE_texture_range
#define GL_APPLE_texture_range 1
#endif

#ifndef GL_APPLE_transform_hint
#define GL_APPLE_transform_hint 1
#endif

#ifndef GL_APPLE_vertex_array_object
#define GL_APPLE_vertex_array_object 1
#endif

#ifndef GL_APPLE_vertex_array_range
#define GL_APPLE_vertex_array_range 1
#endif

#ifndef GL_APPLE_vertex_program_evaluators
#define GL_APPLE_vertex_program_evaluators 1
#endif

#ifndef GL_APPLE_ycbcr_422
#define GL_APPLE_ycbcr_422 1
#endif

#ifndef GL_ARB_arrays_of_arrays
#define GL_ARB_arrays_of_arrays 1
#endif

#ifndef GL_ARB_base_instance
#define GL_ARB_base_instance 1
#endif

#ifndef GL_ARB_bindless_texture
#define GL_ARB_bindless_texture 1
#endif

#ifndef GL_ARB_blend_func_extended
#define GL_ARB_blend_func_extended 1
#endif

#ifndef GL_ARB_buffer_storage
#define GL_ARB_buffer_storage 1
#endif

#ifndef GL_ARB_clear_buffer_object
#define GL_ARB_clear_buffer_object 1
#endif

#ifndef GL_ARB_clear_texture
#define GL_ARB_clear_texture 1
#endif

#ifndef GL_ARB_clip_control
#define GL_ARB_clip_control 1
#endif

#ifndef GL_ARB_cl_event
#define GL_ARB_cl_event 1
#endif

#ifndef GL_ARB_color_buffer_float
#define GL_ARB_color_buffer_float 1
#endif

#ifndef GL_ARB_compatibility
#define GL_ARB_compatibility 1
#endif

#ifndef GL_ARB_compressed_texture_pixel_storage
#define GL_ARB_compressed_texture_pixel_storage 1
#endif

#ifndef GL_ARB_compute_shader
#define GL_ARB_compute_shader 1
#endif

#ifndef GL_ARB_compute_variable_group_size
#define GL_ARB_compute_variable_group_size 1
#endif

#ifndef GL_ARB_conditional_render_inverted
#define GL_ARB_conditional_render_inverted 1
#endif

#ifndef GL_ARB_conservative_depth
#define GL_ARB_conservative_depth 1
#endif

#ifndef GL_ARB_copy_buffer
#define GL_ARB_copy_buffer 1
#endif

#ifndef GL_ARB_copy_image
#define GL_ARB_copy_image 1
#endif

#ifndef GL_ARB_cull_distance
#define GL_ARB_cull_distance 1
#endif

#ifndef GL_ARB_debug_output
#define GL_ARB_debug_output 1
#endif

#ifndef GL_ARB_depth_buffer_float
#define GL_ARB_depth_buffer_float 1
#endif

#ifndef GL_ARB_depth_clamp
#define GL_ARB_depth_clamp 1
#endif

#ifndef GL_ARB_depth_texture
#define GL_ARB_depth_texture 1
#endif

#ifndef GL_ARB_derivative_control
#define GL_ARB_derivative_control 1
#endif

#ifndef GL_ARB_direct_state_access
#define GL_ARB_direct_state_access 1
#endif

#ifndef GL_ARB_draw_buffers
#define GL_ARB_draw_buffers 1
#endif

#ifndef GL_ARB_draw_buffers_blend
#define GL_ARB_draw_buffers_blend 1
#endif

#ifndef GL_ARB_draw_elements_base_vertex
#define GL_ARB_draw_elements_base_vertex 1
#endif

#ifndef GL_ARB_draw_indirect
#define GL_ARB_draw_indirect 1
#endif

#ifndef GL_ARB_draw_instanced
#define GL_ARB_draw_instanced 1
#endif

#ifndef GL_ARB_enhanced_layouts
#define GL_ARB_enhanced_layouts 1
#endif

#ifndef GL_ARB_ES2_compatibility
#define GL_ARB_ES2_compatibility 1
#endif

#ifndef GL_ARB_ES3_1_compatibility
#define GL_ARB_ES3_1_compatibility 1
#endif

#ifndef GL_ARB_ES3_compatibility
#define GL_ARB_ES3_compatibility 1
#endif

#ifndef GL_ARB_explicit_attrib_location
#define GL_ARB_explicit_attrib_location 1
#endif

#ifndef GL_ARB_explicit_uniform_location
#define GL_ARB_explicit_uniform_location 1
#endif

#ifndef GL_ARB_fragment_coord_conventions
#define GL_ARB_fragment_coord_conventions 1
#endif

#ifndef GL_ARB_fragment_layer_viewport
#define GL_ARB_fragment_layer_viewport 1
#endif

#ifndef GL_ARB_fragment_program
#define GL_ARB_fragment_program 1
#endif

#ifndef GL_ARB_fragment_program_shadow
#define GL_ARB_fragment_program_shadow 1
#endif

#ifndef GL_ARB_fragment_shader
#define GL_ARB_fragment_shader 1
#endif

#ifndef GL_ARB_framebuffer_no_attachments
#define GL_ARB_framebuffer_no_attachments 1
#endif

#ifndef GL_ARB_framebuffer_object
#define GL_ARB_framebuffer_object 1
#endif

#ifndef GL_ARB_framebuffer_sRGB
#define GL_ARB_framebuffer_sRGB 1
#endif

#ifndef GL_ARB_geometry_shader4
#define GL_ARB_geometry_shader4 1
#endif

#ifndef GL_ARB_get_program_binary
#define GL_ARB_get_program_binary 1
#endif

#ifndef GL_ARB_get_texture_sub_image
#define GL_ARB_get_texture_sub_image 1
#endif

#ifndef GL_ARB_gpu_shader5
#define GL_ARB_gpu_shader5 1
#endif

#ifndef GL_ARB_gpu_shader_fp64
#define GL_ARB_gpu_shader_fp64 1
#endif

#ifndef GL_ARB_half_float_pixel
#define GL_ARB_half_float_pixel 1
#endif

#ifndef GL_ARB_half_float_vertex
#define GL_ARB_half_float_vertex 1
#endif

#ifndef GL_ARB_imaging
#define GL_ARB_imaging 1
#endif

#ifndef GL_ARB_indirect_parameters
#define GL_ARB_indirect_parameters 1
#endif

#ifndef GL_ARB_instanced_arrays
#define GL_ARB_instanced_arrays 1
#endif

#ifndef GL_ARB_internalformat_query
#define GL_ARB_internalformat_query 1
#endif

#ifndef GL_ARB_internalformat_query2
#define GL_ARB_internalformat_query2 1
#endif

#ifndef GL_ARB_invalidate_subdata
#define GL_ARB_invalidate_subdata 1
#endif

#ifndef GL_ARB_map_buffer_alignment
#define GL_ARB_map_buffer_alignment 1
#endif

#ifndef GL_ARB_map_buffer_range
#define GL_ARB_map_buffer_range 1
#endif

#ifndef GL_ARB_matrix_palette
#define GL_ARB_matrix_palette 1
#endif

#ifndef GL_ARB_multisample
#define GL_ARB_multisample 1
#endif

#ifndef GL_ARB_multitexture
#define GL_ARB_multitexture 1
#endif

#ifndef GL_ARB_multi_bind
#define GL_ARB_multi_bind 1
#endif

#ifndef GL_ARB_multi_draw_indirect
#define GL_ARB_multi_draw_indirect 1
#endif

#ifndef GL_ARB_occlusion_query
#define GL_ARB_occlusion_query 1
#endif

#ifndef GL_ARB_occlusion_query2
#define GL_ARB_occlusion_query2 1
#endif

#ifndef GL_ARB_pipeline_statistics_query
#define GL_ARB_pipeline_statistics_query 1
#endif

#ifndef GL_ARB_pixel_buffer_object
#define GL_ARB_pixel_buffer_object 1
#endif

#ifndef GL_ARB_point_parameters
#define GL_ARB_point_parameters 1
#endif

#ifndef GL_ARB_point_sprite
#define GL_ARB_point_sprite 1
#endif

#ifndef GL_ARB_program_interface_query
#define GL_ARB_program_interface_query 1
#endif

#ifndef GL_ARB_provoking_vertex
#define GL_ARB_provoking_vertex 1
#endif

#ifndef GL_ARB_query_buffer_object
#define GL_ARB_query_buffer_object 1
#endif

#ifndef GL_ARB_robustness
#define GL_ARB_robustness 1
#endif

#ifndef GL_ARB_robustness_isolation
#define GL_ARB_robustness_isolation 1
#endif

#ifndef GL_ARB_robust_buffer_access_behavior
#define GL_ARB_robust_buffer_access_behavior 1
#endif

#ifndef GL_ARB_sampler_objects
#define GL_ARB_sampler_objects 1
#endif

#ifndef GL_ARB_sample_shading
#define GL_ARB_sample_shading 1
#endif

#ifndef GL_ARB_seamless_cubemap_per_texture
#define GL_ARB_seamless_cubemap_per_texture 1
#endif

#ifndef GL_ARB_seamless_cube_map
#define GL_ARB_seamless_cube_map 1
#endif

#ifndef GL_ARB_separate_shader_objects
#define GL_ARB_separate_shader_objects 1
#endif

#ifndef GL_ARB_shader_atomic_counters
#define GL_ARB_shader_atomic_counters 1
#endif

#ifndef GL_ARB_shader_bit_encoding
#define GL_ARB_shader_bit_encoding 1
#endif

#ifndef GL_ARB_shader_draw_parameters
#define GL_ARB_shader_draw_parameters 1
#endif

#ifndef GL_ARB_shader_group_vote
#define GL_ARB_shader_group_vote 1
#endif

#ifndef GL_ARB_shader_image_load_store
#define GL_ARB_shader_image_load_store 1
#endif

#ifndef GL_ARB_shader_image_size
#define GL_ARB_shader_image_size 1
#endif

#ifndef GL_ARB_shader_objects
#define GL_ARB_shader_objects 1
#endif

#ifndef GL_ARB_shader_precision
#define GL_ARB_shader_precision 1
#endif

#ifndef GL_ARB_shader_stencil_export
#define GL_ARB_shader_stencil_export 1
#endif

#ifndef GL_ARB_shader_storage_buffer_object
#define GL_ARB_shader_storage_buffer_object 1
#endif

#ifndef GL_ARB_shader_subroutine
#define GL_ARB_shader_subroutine 1
#endif

#ifndef GL_ARB_shader_texture_image_samples
#define GL_ARB_shader_texture_image_samples 1
#endif

#ifndef GL_ARB_shader_texture_lod
#define GL_ARB_shader_texture_lod 1
#endif

#ifndef GL_ARB_shading_language_100
#define GL_ARB_shading_language_100 1
#endif

#ifndef GL_ARB_shading_language_420pack
#define GL_ARB_shading_language_420pack 1
#endif

#ifndef GL_ARB_shading_language_include
#define GL_ARB_shading_language_include 1
#endif

#ifndef GL_ARB_shading_language_packing
#define GL_ARB_shading_language_packing 1
#endif

#ifndef GL_ARB_shadow
#define GL_ARB_shadow 1
#endif

#ifndef GL_ARB_shadow_ambient
#define GL_ARB_shadow_ambient 1
#endif

#ifndef GL_ARB_sparse_buffer
#define GL_ARB_sparse_buffer 1
#endif

#ifndef GL_ARB_sparse_texture
#define GL_ARB_sparse_texture 1
#endif

#ifndef GL_ARB_stencil_texturing
#define GL_ARB_stencil_texturing 1
#endif

#ifndef GL_ARB_sync
#define GL_ARB_sync 1
#endif

#ifndef GL_ARB_tessellation_shader
#define GL_ARB_tessellation_shader 1
#endif

#ifndef GL_ARB_texture_barrier
#define GL_ARB_texture_barrier 1
#endif

#ifndef GL_ARB_texture_border_clamp
#define GL_ARB_texture_border_clamp 1
#endif

#ifndef GL_ARB_texture_buffer_object
#define GL_ARB_texture_buffer_object 1
#endif

#ifndef GL_ARB_texture_buffer_object_rgb32
#define GL_ARB_texture_buffer_object_rgb32 1
#endif

#ifndef GL_ARB_texture_buffer_range
#define GL_ARB_texture_buffer_range 1
#endif

#ifndef GL_ARB_texture_compression
#define GL_ARB_texture_compression 1
#endif

#ifndef GL_ARB_texture_compression_bptc
#define GL_ARB_texture_compression_bptc 1
#endif

#ifndef GL_ARB_texture_compression_rgtc
#define GL_ARB_texture_compression_rgtc 1
#endif

#ifndef GL_ARB_texture_cube_map
#define GL_ARB_texture_cube_map 1
#endif

#ifndef GL_ARB_texture_cube_map_array
#define GL_ARB_texture_cube_map_array 1
#endif

#ifndef GL_ARB_texture_env_add
#define GL_ARB_texture_env_add 1
#endif

#ifndef GL_ARB_texture_env_combine
#define GL_ARB_texture_env_combine 1
#endif

#ifndef GL_ARB_texture_env_crossbar
#define GL_ARB_texture_env_crossbar 1
#endif

#ifndef GL_ARB_texture_env_dot3
#define GL_ARB_texture_env_dot3 1
#endif

#ifndef GL_ARB_texture_float
#define GL_ARB_texture_float 1
#endif

#ifndef GL_ARB_texture_gather
#define GL_ARB_texture_gather 1
#endif

#ifndef GL_ARB_texture_mirrored_repeat
#define GL_ARB_texture_mirrored_repeat 1
#endif

#ifndef GL_ARB_texture_mirror_clamp_to_edge
#define GL_ARB_texture_mirror_clamp_to_edge 1
#endif

#ifndef GL_ARB_texture_multisample
#define GL_ARB_texture_multisample 1
#endif

#ifndef GL_ARB_texture_non_power_of_two
#define GL_ARB_texture_non_power_of_two 1
#endif

#ifndef GL_ARB_texture_query_levels
#define GL_ARB_texture_query_levels 1
#endif

#ifndef GL_ARB_texture_query_lod
#define GL_ARB_texture_query_lod 1
#endif

#ifndef GL_ARB_texture_rectangle
#define GL_ARB_texture_rectangle 1
#endif

#ifndef GL_ARB_texture_rg
#define GL_ARB_texture_rg 1
#endif

#ifndef GL_ARB_texture_rgb10_a2ui
#define GL_ARB_texture_rgb10_a2ui 1
#endif

#ifndef GL_ARB_texture_stencil8
#define GL_ARB_texture_stencil8 1
#endif

#ifndef GL_ARB_texture_storage
#define GL_ARB_texture_storage 1
#endif

#ifndef GL_ARB_texture_storage_multisample
#define GL_ARB_texture_storage_multisample 1
#endif

#ifndef GL_ARB_texture_swizzle
#define GL_ARB_texture_swizzle 1
#endif

#ifndef GL_ARB_texture_view
#define GL_ARB_texture_view 1
#endif

#ifndef GL_ARB_timer_query
#define GL_ARB_timer_query 1
#endif

#ifndef GL_ARB_transform_feedback2
#define GL_ARB_transform_feedback2 1
#endif

#ifndef GL_ARB_transform_feedback3
#define GL_ARB_transform_feedback3 1
#endif

#ifndef GL_ARB_transform_feedback_instanced
#define GL_ARB_transform_feedback_instanced 1
#endif

#ifndef GL_ARB_transform_feedback_overflow_query
#define GL_ARB_transform_feedback_overflow_query 1
#endif

#ifndef GL_ARB_transpose_matrix
#define GL_ARB_transpose_matrix 1
#endif

#ifndef GL_ARB_uniform_buffer_object
#define GL_ARB_uniform_buffer_object 1
#endif

#ifndef GL_ARB_vertex_array_bgra
#define GL_ARB_vertex_array_bgra 1
#endif

#ifndef GL_ARB_vertex_array_object
#define GL_ARB_vertex_array_object 1
#endif

#ifndef GL_ARB_vertex_attrib_64bit
#define GL_ARB_vertex_attrib_64bit 1
#endif

#ifndef GL_ARB_vertex_attrib_binding
#define GL_ARB_vertex_attrib_binding 1
#endif

#ifndef GL_ARB_vertex_blend
#define GL_ARB_vertex_blend 1
#endif

#ifndef GL_ARB_vertex_buffer_object
#define GL_ARB_vertex_buffer_object 1
#endif

#ifndef GL_ARB_vertex_program
#define GL_ARB_vertex_program 1
#endif

#ifndef GL_ARB_vertex_shader
#define GL_ARB_vertex_shader 1
#endif

#ifndef GL_ARB_vertex_type_10f_11f_11f_rev
#define GL_ARB_vertex_type_10f_11f_11f_rev 1
#endif

#ifndef GL_ARB_vertex_type_2_10_10_10_rev
#define GL_ARB_vertex_type_2_10_10_10_rev 1
#endif

#ifndef GL_ARB_viewport_array
#define GL_ARB_viewport_array 1
#endif

#ifndef GL_ARB_window_pos
#define GL_ARB_window_pos 1
#endif

#ifndef GL_ATI_draw_buffers
#define GL_ATI_draw_buffers 1
#endif

#ifndef GL_ATI_element_array
#define GL_ATI_element_array 1
#endif

#ifndef GL_ATI_envmap_bumpmap
#define GL_ATI_envmap_bumpmap 1
#endif

#ifndef GL_ATI_fragment_shader
#define GL_ATI_fragment_shader 1
#endif

#ifndef GL_ATI_map_object_buffer
#define GL_ATI_map_object_buffer 1
#endif

#ifndef GL_ATI_meminfo
#define GL_ATI_meminfo 1
#endif

#ifndef GL_ATI_pixel_format_float
#define GL_ATI_pixel_format_float 1
#endif

#ifndef GL_ATI_pn_triangles
#define GL_ATI_pn_triangles 1
#endif

#ifndef GL_ATI_separate_stencil
#define GL_ATI_separate_stencil 1
#endif

#ifndef GL_ATI_shader_texture_lod
#define GL_ATI_shader_texture_lod 1
#endif

#ifndef GL_ATI_texture_compression_3dc
#define GL_ATI_texture_compression_3dc 1
#endif

#ifndef GL_ATI_texture_env_combine3
#define GL_ATI_texture_env_combine3 1
#endif

#ifndef GL_ATI_texture_float
#define GL_ATI_texture_float 1
#endif

#ifndef GL_ATI_texture_mirror_once
#define GL_ATI_texture_mirror_once 1
#endif

#ifndef GL_ATI_text_fragment_shader
#define GL_ATI_text_fragment_shader 1
#endif

#ifndef GL_ATI_vertex_array_object
#define GL_ATI_vertex_array_object 1
#endif

#ifndef GL_ATI_vertex_attrib_array_object
#define GL_ATI_vertex_attrib_array_object 1
#endif

#ifndef GL_ATI_vertex_streams
#define GL_ATI_vertex_streams 1
#endif

#ifndef GL_EXT_422_pixels
#define GL_EXT_422_pixels 1
#endif

#ifndef GL_EXT_abgr
#define GL_EXT_abgr 1
#endif

#ifndef GL_EXT_bgra
#define GL_EXT_bgra 1
#endif

#ifndef GL_EXT_bindable_uniform
#define GL_EXT_bindable_uniform 1
#endif

#ifndef GL_EXT_blend_color
#define GL_EXT_blend_color 1
#endif

#ifndef GL_EXT_blend_equation_separate
#define GL_EXT_blend_equation_separate 1
#endif

#ifndef GL_EXT_blend_func_separate
#define GL_EXT_blend_func_separate 1
#endif

#ifndef GL_EXT_blend_logic_op
#define GL_EXT_blend_logic_op 1
#endif

#ifndef GL_EXT_blend_minmax
#define GL_EXT_blend_minmax 1
#endif

#ifndef GL_EXT_blend_subtract
#define GL_EXT_blend_subtract 1
#endif

#ifndef GL_EXT_clip_volume_hint
#define GL_EXT_clip_volume_hint 1
#endif

#ifndef GL_EXT_cmyka
#define GL_EXT_cmyka 1
#endif

#ifndef GL_EXT_color_subtable
#define GL_EXT_color_subtable 1
#endif

#ifndef GL_EXT_compiled_vertex_array
#define GL_EXT_compiled_vertex_array 1
#endif

#ifndef GL_EXT_convolution
#define GL_EXT_convolution 1
#endif

#ifndef GL_EXT_coordinate_frame
#define GL_EXT_coordinate_frame 1
#endif

#ifndef GL_EXT_copy_buffer
#define GL_EXT_copy_buffer 1
#endif

#ifndef GL_EXT_copy_texture
#define GL_EXT_copy_texture 1
#endif

#ifndef GL_EXT_cull_vertex
#define GL_EXT_cull_vertex 1
#endif

#ifndef GL_EXT_debug_label
#define GL_EXT_debug_label 1
#endif

#ifndef GL_EXT_debug_marker
#define GL_EXT_debug_marker 1
#endif

#ifndef GL_EXT_depth_bounds_test
#define GL_EXT_depth_bounds_test 1
#endif

#ifndef GL_EXT_direct_state_access
#define GL_EXT_direct_state_access 1
#endif

#ifndef GL_EXT_draw_buffers2
#define GL_EXT_draw_buffers2 1
#endif

#ifndef GL_EXT_draw_instanced
#define GL_EXT_draw_instanced 1
#endif

#ifndef GL_EXT_draw_range_elements
#define GL_EXT_draw_range_elements 1
#endif

#ifndef GL_EXT_fog_coord
#define GL_EXT_fog_coord 1
#endif

#ifndef GL_EXT_fragment_lighting
#define GL_EXT_fragment_lighting 1
#endif

#ifndef GL_EXT_framebuffer_blit
#define GL_EXT_framebuffer_blit 1
#endif

#ifndef GL_EXT_framebuffer_multisample
#define GL_EXT_framebuffer_multisample 1
#endif

#ifndef GL_EXT_framebuffer_multisample_blit_scaled
#define GL_EXT_framebuffer_multisample_blit_scaled 1
#endif

#ifndef GL_EXT_framebuffer_object
#define GL_EXT_framebuffer_object 1
#endif

#ifndef GL_EXT_framebuffer_sRGB
#define GL_EXT_framebuffer_sRGB 1
#endif

#ifndef GL_EXT_geometry_shader4
#define GL_EXT_geometry_shader4 1
#endif

#ifndef GL_EXT_gpu_program_parameters
#define GL_EXT_gpu_program_parameters 1
#endif

#ifndef GL_EXT_gpu_shader4
#define GL_EXT_gpu_shader4 1
#endif

#ifndef GL_EXT_histogram
#define GL_EXT_histogram 1
#endif

#ifndef GL_EXT_index_array_formats
#define GL_EXT_index_array_formats 1
#endif

#ifndef GL_EXT_index_func
#define GL_EXT_index_func 1
#endif

#ifndef GL_EXT_index_material
#define GL_EXT_index_material 1
#endif

#ifndef GL_EXT_index_texture
#define GL_EXT_index_texture 1
#endif

#ifndef GL_EXT_light_texture
#define GL_EXT_light_texture 1
#endif

#ifndef GL_EXT_misc_attribute
#define GL_EXT_misc_attribute 1
#endif

#ifndef GL_EXT_multisample
#define GL_EXT_multisample 1
#endif

#ifndef GL_EXT_multi_draw_arrays
#define GL_EXT_multi_draw_arrays 1
#endif

#ifndef GL_EXT_packed_depth_stencil
#define GL_EXT_packed_depth_stencil 1
#endif

#ifndef GL_EXT_packed_float
#define GL_EXT_packed_float 1
#endif

#ifndef GL_EXT_packed_pixels
#define GL_EXT_packed_pixels 1
#endif

#ifndef GL_EXT_paletted_texture
#define GL_EXT_paletted_texture 1
#endif

#ifndef GL_EXT_pixel_buffer_object
#define GL_EXT_pixel_buffer_object 1
#endif

#ifndef GL_EXT_pixel_transform
#define GL_EXT_pixel_transform 1
#endif

#ifndef GL_EXT_pixel_transform_color_table
#define GL_EXT_pixel_transform_color_table 1
#endif

#ifndef GL_EXT_point_parameters
#define GL_EXT_point_parameters 1
#endif

#ifndef GL_EXT_polygon_offset
#define GL_EXT_polygon_offset 1
#endif

#ifndef GL_EXT_polygon_offset_clamp
#define GL_EXT_polygon_offset_clamp 1
#endif

#ifndef GL_EXT_post_depth_coverage
#define GL_EXT_post_depth_coverage 1
#endif

#ifndef GL_EXT_provoking_vertex
#define GL_EXT_provoking_vertex 1
#endif

#ifndef GL_EXT_raster_multisample
#define GL_EXT_raster_multisample 1
#endif

#ifndef GL_EXT_rescale_normal
#define GL_EXT_rescale_normal 1
#endif

#ifndef GL_EXT_secondary_color
#define GL_EXT_secondary_color 1
#endif

#ifndef GL_EXT_separate_shader_objects
#define GL_EXT_separate_shader_objects 1
#endif

#ifndef GL_EXT_separate_specular_color
#define GL_EXT_separate_specular_color 1
#endif

#ifndef GL_EXT_shader_image_load_formatted
#define GL_EXT_shader_image_load_formatted 1
#endif

#ifndef GL_EXT_shader_image_load_store
#define GL_EXT_shader_image_load_store 1
#endif

#ifndef GL_EXT_shader_integer_mix
#define GL_EXT_shader_integer_mix 1
#endif

#ifndef GL_EXT_shadow_funcs
#define GL_EXT_shadow_funcs 1
#endif

#ifndef GL_EXT_shared_texture_palette
#define GL_EXT_shared_texture_palette 1
#endif

#ifndef GL_EXT_sparse_texture2
#define GL_EXT_sparse_texture2 1
#endif

#ifndef GL_EXT_stencil_clear_tag
#define GL_EXT_stencil_clear_tag 1
#endif

#ifndef GL_EXT_stencil_two_side
#define GL_EXT_stencil_two_side 1
#endif

#ifndef GL_EXT_stencil_wrap
#define GL_EXT_stencil_wrap 1
#endif

#ifndef GL_EXT_subtexture
#define GL_EXT_subtexture 1
#endif

#ifndef GL_EXT_texture
#define GL_EXT_texture 1
#endif

#ifndef GL_EXT_texture3D
#define GL_EXT_texture3D 1
#endif

#ifndef GL_EXT_texture_array
#define GL_EXT_texture_array 1
#endif

#ifndef GL_EXT_texture_buffer_object
#define GL_EXT_texture_buffer_object 1
#endif

#ifndef GL_EXT_texture_compression_dxt1
#define GL_EXT_texture_compression_dxt1 1
#endif

#ifndef GL_EXT_texture_compression_latc
#define GL_EXT_texture_compression_latc 1
#endif

#ifndef GL_EXT_texture_compression_rgtc
#define GL_EXT_texture_compression_rgtc 1
#endif

#ifndef GL_EXT_texture_compression_s3tc
#define GL_EXT_texture_compression_s3tc 1
#endif

#ifndef GL_EXT_texture_env_add
#define GL_EXT_texture_env_add 1
#endif

#ifndef GL_EXT_texture_env_combine
#define GL_EXT_texture_env_combine 1
#endif

#ifndef GL_EXT_texture_env_dot3
#define GL_EXT_texture_env_dot3 1
#endif

#ifndef GL_EXT_texture_filter_anisotropic
#define GL_EXT_texture_filter_anisotropic 1
#endif

#ifndef GL_EXT_texture_filter_minmax
#define GL_EXT_texture_filter_minmax 1
#endif

#ifndef GL_EXT_texture_integer
#define GL_EXT_texture_integer 1
#endif

#ifndef GL_EXT_texture_lod_bias
#define GL_EXT_texture_lod_bias 1
#endif

#ifndef GL_EXT_texture_mirror_clamp
#define GL_EXT_texture_mirror_clamp 1
#endif

#ifndef GL_EXT_texture_object
#define GL_EXT_texture_object 1
#endif

#ifndef GL_EXT_texture_perturb_normal
#define GL_EXT_texture_perturb_normal 1
#endif

#ifndef GL_EXT_texture_shared_exponent
#define GL_EXT_texture_shared_exponent 1
#endif

#ifndef GL_EXT_texture_snorm
#define GL_EXT_texture_snorm 1
#endif

#ifndef GL_EXT_texture_sRGB
#define GL_EXT_texture_sRGB 1
#endif

#ifndef GL_EXT_texture_sRGB_decode
#define GL_EXT_texture_sRGB_decode 1
#endif

#ifndef GL_EXT_texture_swizzle
#define GL_EXT_texture_swizzle 1
#endif

#ifndef GL_EXT_timer_query
#define GL_EXT_timer_query 1
#endif

#ifndef GL_EXT_transform_feedback
#define GL_EXT_transform_feedback 1
#endif

#ifndef GL_EXT_transform_feedback2
#define GL_EXT_transform_feedback2 1
#endif

#ifndef GL_EXT_vertex_array
#define GL_EXT_vertex_array 1
#endif

#ifndef GL_EXT_vertex_array_bgra
#define GL_EXT_vertex_array_bgra 1
#endif

#ifndef GL_EXT_vertex_attrib_64bit
#define GL_EXT_vertex_attrib_64bit 1
#endif

#ifndef GL_EXT_vertex_shader
#define GL_EXT_vertex_shader 1
#endif

#ifndef GL_EXT_vertex_weighting
#define GL_EXT_vertex_weighting 1
#endif

#ifndef GL_EXT_x11_sync_object
#define GL_EXT_x11_sync_object 1
#endif

#ifndef GL_FfdMaskSGIX
#define GL_FfdMaskSGIX 1
#endif

#ifndef GL_GREMEDY_frame_terminator
#define GL_GREMEDY_frame_terminator 1
#endif

#ifndef GL_GREMEDY_string_marker
#define GL_GREMEDY_string_marker 1
#endif

#ifndef GL_HP_convolution_border_modes
#define GL_HP_convolution_border_modes 1
#endif

#ifndef GL_HP_image_transform
#define GL_HP_image_transform 1
#endif

#ifndef GL_HP_occlusion_test
#define GL_HP_occlusion_test 1
#endif

#ifndef GL_HP_texture_lighting
#define GL_HP_texture_lighting 1
#endif

#ifndef GL_IBM_cull_vertex
#define GL_IBM_cull_vertex 1
#endif

#ifndef GL_IBM_multimode_draw_arrays
#define GL_IBM_multimode_draw_arrays 1
#endif

#ifndef GL_IBM_rasterpos_clip
#define GL_IBM_rasterpos_clip 1
#endif

#ifndef GL_IBM_static_data
#define GL_IBM_static_data 1
#endif

#ifndef GL_IBM_texture_mirrored_repeat
#define GL_IBM_texture_mirrored_repeat 1
#endif

#ifndef GL_IBM_vertex_array_lists
#define GL_IBM_vertex_array_lists 1
#endif

#ifndef GL_INGR_blend_func_separate
#define GL_INGR_blend_func_separate 1
#endif

#ifndef GL_INGR_color_clamp
#define GL_INGR_color_clamp 1
#endif

#ifndef GL_INGR_interlace_read
#define GL_INGR_interlace_read 1
#endif

#ifndef GL_INGR_palette_buffer
#define GL_INGR_palette_buffer 1
#endif

#ifndef GL_INTEL_fragment_shader_ordering
#define GL_INTEL_fragment_shader_ordering 1
#endif

#ifndef GL_INTEL_map_texture
#define GL_INTEL_map_texture 1
#endif

#ifndef GL_INTEL_parallel_arrays
#define GL_INTEL_parallel_arrays 1
#endif

#ifndef GL_INTEL_performance_query
#define GL_INTEL_performance_query 1
#endif

#ifndef GL_INTEL_texture_scissor
#define GL_INTEL_texture_scissor 1
#endif

#ifndef GL_KHR_blend_equation_advanced
#define GL_KHR_blend_equation_advanced 1
#endif

#ifndef GL_KHR_context_flush_control
#define GL_KHR_context_flush_control 1
#endif

#ifndef GL_KHR_debug
#define GL_KHR_debug 1
#endif

#ifndef GL_KHR_no_error
#define GL_KHR_no_error 1
#endif

#ifndef GL_KHR_robustness
#define GL_KHR_robustness 1
#endif

#ifndef GL_KHR_robust_buffer_access_behavior
#define GL_KHR_robust_buffer_access_behavior 1
#endif

#ifndef GL_KHR_texture_compression_astc_ldr
#define GL_KHR_texture_compression_astc_ldr 1
#endif

#ifndef GL_MESAX_texture_stack
#define GL_MESAX_texture_stack 1
#endif

#ifndef GL_MESA_pack_invert
#define GL_MESA_pack_invert 1
#endif

#ifndef GL_MESA_resize_buffers
#define GL_MESA_resize_buffers 1
#endif

#ifndef GL_MESA_window_pos
#define GL_MESA_window_pos 1
#endif

#ifndef GL_MESA_ycbcr_texture
#define GL_MESA_ycbcr_texture 1
#endif

#ifndef GL_NVX_conditional_render
#define GL_NVX_conditional_render 1
#endif

#ifndef GL_NVX_gpu_memory_info
#define GL_NVX_gpu_memory_info 1
#endif

#ifndef GL_NV_bindless_multi_draw_indirect
#define GL_NV_bindless_multi_draw_indirect 1
#endif

#ifndef GL_NV_bindless_multi_draw_indirect_count
#define GL_NV_bindless_multi_draw_indirect_count 1
#endif

#ifndef GL_NV_bindless_texture
#define GL_NV_bindless_texture 1
#endif

#ifndef GL_NV_blend_equation_advanced
#define GL_NV_blend_equation_advanced 1
#endif

#ifndef GL_NV_blend_square
#define GL_NV_blend_square 1
#endif

#ifndef GL_NV_compute_program5
#define GL_NV_compute_program5 1
#endif

#ifndef GL_NV_conditional_render
#define GL_NV_conditional_render 1
#endif

#ifndef GL_NV_conservative_raster
#define GL_NV_conservative_raster 1
#endif

#ifndef GL_NV_copy_depth_to_color
#define GL_NV_copy_depth_to_color 1
#endif

#ifndef GL_NV_copy_image
#define GL_NV_copy_image 1
#endif

#ifndef GL_NV_deep_texture3D
#define GL_NV_deep_texture3D 1
#endif

#ifndef GL_NV_depth_buffer_float
#define GL_NV_depth_buffer_float 1
#endif

#ifndef GL_NV_depth_clamp
#define GL_NV_depth_clamp 1
#endif

#ifndef GL_NV_draw_texture
#define GL_NV_draw_texture 1
#endif

#ifndef GL_NV_evaluators
#define GL_NV_evaluators 1
#endif

#ifndef GL_NV_explicit_multisample
#define GL_NV_explicit_multisample 1
#endif

#ifndef GL_NV_fence
#define GL_NV_fence 1
#endif

#ifndef GL_NV_fill_rectangle
#define GL_NV_fill_rectangle 1
#endif

#ifndef GL_NV_float_buffer
#define GL_NV_float_buffer 1
#endif

#ifndef GL_NV_fog_distance
#define GL_NV_fog_distance 1
#endif

#ifndef GL_NV_fragment_coverage_to_color
#define GL_NV_fragment_coverage_to_color 1
#endif

#ifndef GL_NV_fragment_program
#define GL_NV_fragment_program 1
#endif

#ifndef GL_NV_fragment_program2
#define GL_NV_fragment_program2 1
#endif

#ifndef GL_NV_fragment_program4
#define GL_NV_fragment_program4 1
#endif

#ifndef GL_NV_fragment_program_option
#define GL_NV_fragment_program_option 1
#endif

#ifndef GL_NV_fragment_shader_interlock
#define GL_NV_fragment_shader_interlock 1
#endif

#ifndef GL_NV_framebuffer_mixed_samples
#define GL_NV_framebuffer_mixed_samples 1
#endif

#ifndef GL_NV_framebuffer_multisample_coverage
#define GL_NV_framebuffer_multisample_coverage 1
#endif

#ifndef GL_NV_geometry_program4
#define GL_NV_geometry_program4 1
#endif

#ifndef GL_NV_geometry_shader4
#define GL_NV_geometry_shader4 1
#endif

#ifndef GL_NV_geometry_shader_passthrough
#define GL_NV_geometry_shader_passthrough 1
#endif

#ifndef GL_NV_gpu_program4
#define GL_NV_gpu_program4 1
#endif

#ifndef GL_NV_gpu_program5
#define GL_NV_gpu_program5 1
#endif

#ifndef GL_NV_gpu_program5_mem_extended
#define GL_NV_gpu_program5_mem_extended 1
#endif

#ifndef GL_NV_gpu_shader5
#define GL_NV_gpu_shader5 1
#endif

#ifndef GL_NV_half_float
#define GL_NV_half_float 1
#endif

#ifndef GL_NV_internalformat_sample_query
#define GL_NV_internalformat_sample_query 1
#endif

#ifndef GL_NV_light_max_exponent
#define GL_NV_light_max_exponent 1
#endif

#ifndef GL_NV_multisample_coverage
#define GL_NV_multisample_coverage 1
#endif

#ifndef GL_NV_multisample_filter_hint
#define GL_NV_multisample_filter_hint 1
#endif

#ifndef GL_NV_occlusion_query
#define GL_NV_occlusion_query 1
#endif

#ifndef GL_NV_packed_depth_stencil
#define GL_NV_packed_depth_stencil 1
#endif

#ifndef GL_NV_parameter_buffer_object
#define GL_NV_parameter_buffer_object 1
#endif

#ifndef GL_NV_parameter_buffer_object2
#define GL_NV_parameter_buffer_object2 1
#endif

#ifndef GL_NV_path_rendering
#define GL_NV_path_rendering 1
#endif

#ifndef GL_NV_path_rendering_shared_edge
#define GL_NV_path_rendering_shared_edge 1
#endif

#ifndef GL_NV_pixel_data_range
#define GL_NV_pixel_data_range 1
#endif

#ifndef GL_NV_point_sprite
#define GL_NV_point_sprite 1
#endif

#ifndef GL_NV_present_video
#define GL_NV_present_video 1
#endif

#ifndef GL_NV_primitive_restart
#define GL_NV_primitive_restart 1
#endif

#ifndef GL_NV_register_combiners
#define GL_NV_register_combiners 1
#endif

#ifndef GL_NV_register_combiners2
#define GL_NV_register_combiners2 1
#endif

#ifndef GL_NV_sample_locations
#define GL_NV_sample_locations 1
#endif

#ifndef GL_NV_sample_mask_override_coverage
#define GL_NV_sample_mask_override_coverage 1
#endif

#ifndef GL_NV_shader_atomic_counters
#define GL_NV_shader_atomic_counters 1
#endif

#ifndef GL_NV_shader_atomic_float
#define GL_NV_shader_atomic_float 1
#endif

#ifndef GL_NV_shader_atomic_fp16_vector
#define GL_NV_shader_atomic_fp16_vector 1
#endif

#ifndef GL_NV_shader_atomic_int64
#define GL_NV_shader_atomic_int64 1
#endif

#ifndef GL_NV_shader_buffer_load
#define GL_NV_shader_buffer_load 1
#endif

#ifndef GL_NV_shader_buffer_store
#define GL_NV_shader_buffer_store 1
#endif

#ifndef GL_NV_shader_storage_buffer_object
#define GL_NV_shader_storage_buffer_object 1
#endif

#ifndef GL_NV_shader_thread_group
#define GL_NV_shader_thread_group 1
#endif

#ifndef GL_NV_shader_thread_shuffle
#define GL_NV_shader_thread_shuffle 1
#endif

#ifndef GL_NV_tessellation_program5
#define GL_NV_tessellation_program5 1
#endif

#ifndef GL_NV_texgen_emboss
#define GL_NV_texgen_emboss 1
#endif

#ifndef GL_NV_texgen_reflection
#define GL_NV_texgen_reflection 1
#endif

#ifndef GL_NV_texture_barrier
#define GL_NV_texture_barrier 1
#endif

#ifndef GL_NV_texture_compression_vtc
#define GL_NV_texture_compression_vtc 1
#endif

#ifndef GL_NV_texture_env_combine4
#define GL_NV_texture_env_combine4 1
#endif

#ifndef GL_NV_texture_expand_normal
#define GL_NV_texture_expand_normal 1
#endif

#ifndef GL_NV_texture_multisample
#define GL_NV_texture_multisample 1
#endif

#ifndef GL_NV_texture_rectangle
#define GL_NV_texture_rectangle 1
#endif

#ifndef GL_NV_texture_shader
#define GL_NV_texture_shader 1
#endif

#ifndef GL_NV_texture_shader2
#define GL_NV_texture_shader2 1
#endif

#ifndef GL_NV_texture_shader3
#define GL_NV_texture_shader3 1
#endif

#ifndef GL_NV_transform_feedback
#define GL_NV_transform_feedback 1
#endif

#ifndef GL_NV_transform_feedback2
#define GL_NV_transform_feedback2 1
#endif

#ifndef GL_NV_uniform_buffer_unified_memory
#define GL_NV_uniform_buffer_unified_memory 1
#endif

#ifndef GL_NV_vdpau_interop
#define GL_NV_vdpau_interop 1
#endif

#ifndef GL_NV_vertex_array_range
#define GL_NV_vertex_array_range 1
#endif

#ifndef GL_NV_vertex_array_range2
#define GL_NV_vertex_array_range2 1
#endif

#ifndef GL_NV_vertex_attrib_integer_64bit
#define GL_NV_vertex_attrib_integer_64bit 1
#endif

#ifndef GL_NV_vertex_buffer_unified_memory
#define GL_NV_vertex_buffer_unified_memory 1
#endif

#ifndef GL_NV_vertex_program
#define GL_NV_vertex_program 1
#endif

#ifndef GL_NV_vertex_program1_1
#define GL_NV_vertex_program1_1 1
#endif

#ifndef GL_NV_vertex_program2
#define GL_NV_vertex_program2 1
#endif

#ifndef GL_NV_vertex_program2_option
#define GL_NV_vertex_program2_option 1
#endif

#ifndef GL_NV_vertex_program3
#define GL_NV_vertex_program3 1
#endif

#ifndef GL_NV_vertex_program4
#define GL_NV_vertex_program4 1
#endif

#ifndef GL_NV_video_capture
#define GL_NV_video_capture 1
#endif

#ifndef GL_NV_viewport_array2
#define GL_NV_viewport_array2 1
#endif

#ifndef GL_OES_read_format
#define GL_OES_read_format 1
#endif

#ifndef GL_OML_interlace
#define GL_OML_interlace 1
#endif

#ifndef GL_OML_resample
#define GL_OML_resample 1
#endif

#ifndef GL_OML_subsample
#define GL_OML_subsample 1
#endif

#ifndef GL_OVR_multiview
#define GL_OVR_multiview 1
#endif

#ifndef GL_OVR_multiview2
#define GL_OVR_multiview2 1
#endif

#ifndef GL_PGI_misc_hints
#define GL_PGI_misc_hints 1
#endif

#ifndef GL_PGI_vertex_hints
#define GL_PGI_vertex_hints 1
#endif

#ifndef GL_REND_screen_coordinates
#define GL_REND_screen_coordinates 1
#endif

#ifndef GL_S3_s3tc
#define GL_S3_s3tc 1
#endif

#ifndef GL_SGIS_detail_texture
#define GL_SGIS_detail_texture 1
#endif

#ifndef GL_SGIS_fog_function
#define GL_SGIS_fog_function 1
#endif

#ifndef GL_SGIS_generate_mipmap
#define GL_SGIS_generate_mipmap 1
#endif

#ifndef GL_SGIS_multisample
#define GL_SGIS_multisample 1
#endif

#ifndef GL_SGIS_pixel_texture
#define GL_SGIS_pixel_texture 1
#endif

#ifndef GL_SGIS_point_line_texgen
#define GL_SGIS_point_line_texgen 1
#endif

#ifndef GL_SGIS_point_parameters
#define GL_SGIS_point_parameters 1
#endif

#ifndef GL_SGIS_sharpen_texture
#define GL_SGIS_sharpen_texture 1
#endif

#ifndef GL_SGIS_texture4D
#define GL_SGIS_texture4D 1
#endif

#ifndef GL_SGIS_texture_border_clamp
#define GL_SGIS_texture_border_clamp 1
#endif

#ifndef GL_SGIS_texture_color_mask
#define GL_SGIS_texture_color_mask 1
#endif

#ifndef GL_SGIS_texture_edge_clamp
#define GL_SGIS_texture_edge_clamp 1
#endif

#ifndef GL_SGIS_texture_filter4
#define GL_SGIS_texture_filter4 1
#endif

#ifndef GL_SGIS_texture_lod
#define GL_SGIS_texture_lod 1
#endif

#ifndef GL_SGIS_texture_select
#define GL_SGIS_texture_select 1
#endif

#ifndef GL_SGIX_async
#define GL_SGIX_async 1
#endif

#ifndef GL_SGIX_async_histogram
#define GL_SGIX_async_histogram 1
#endif

#ifndef GL_SGIX_async_pixel
#define GL_SGIX_async_pixel 1
#endif

#ifndef GL_SGIX_blend_alpha_minmax
#define GL_SGIX_blend_alpha_minmax 1
#endif

#ifndef GL_SGIX_calligraphic_fragment
#define GL_SGIX_calligraphic_fragment 1
#endif

#ifndef GL_SGIX_clipmap
#define GL_SGIX_clipmap 1
#endif

#ifndef GL_SGIX_convolution_accuracy
#define GL_SGIX_convolution_accuracy 1
#endif

#ifndef GL_SGIX_depth_pass_instrument
#define GL_SGIX_depth_pass_instrument 1
#endif

#ifndef GL_SGIX_depth_texture
#define GL_SGIX_depth_texture 1
#endif

#ifndef GL_SGIX_flush_raster
#define GL_SGIX_flush_raster 1
#endif

#ifndef GL_SGIX_fog_offset
#define GL_SGIX_fog_offset 1
#endif

#ifndef GL_SGIX_fog_scale
#define GL_SGIX_fog_scale 1
#endif

#ifndef GL_SGIX_fragment_lighting
#define GL_SGIX_fragment_lighting 1
#endif

#ifndef GL_SGIX_framezoom
#define GL_SGIX_framezoom 1
#endif

#ifndef GL_SGIX_igloo_interface
#define GL_SGIX_igloo_interface 1
#endif

#ifndef GL_SGIX_impact_pixel_texture
#define GL_SGIX_impact_pixel_texture 1
#endif

#ifndef GL_SGIX_instruments
#define GL_SGIX_instruments 1
#endif

#ifndef GL_SGIX_interlace
#define GL_SGIX_interlace 1
#endif

#ifndef GL_SGIX_ir_instrument1
#define GL_SGIX_ir_instrument1 1
#endif

#ifndef GL_SGIX_list_priority
#define GL_SGIX_list_priority 1
#endif

#ifndef GL_SGIX_pixel_texture
#define GL_SGIX_pixel_texture 1
#endif

#ifndef GL_SGIX_pixel_tiles
#define GL_SGIX_pixel_tiles 1
#endif

#ifndef GL_SGIX_polynomial_ffd
#define GL_SGIX_polynomial_ffd 1
#endif

#ifndef GL_SGIX_reference_plane
#define GL_SGIX_reference_plane 1
#endif

#ifndef GL_SGIX_resample
#define GL_SGIX_resample 1
#endif

#ifndef GL_SGIX_scalebias_hint
#define GL_SGIX_scalebias_hint 1
#endif

#ifndef GL_SGIX_shadow
#define GL_SGIX_shadow 1
#endif

#ifndef GL_SGIX_shadow_ambient
#define GL_SGIX_shadow_ambient 1
#endif

#ifndef GL_SGIX_sprite
#define GL_SGIX_sprite 1
#endif

#ifndef GL_SGIX_subsample
#define GL_SGIX_subsample 1
#endif

#ifndef GL_SGIX_tag_sample_buffer
#define GL_SGIX_tag_sample_buffer 1
#endif

#ifndef GL_SGIX_texture_add_env
#define GL_SGIX_texture_add_env 1
#endif

#ifndef GL_SGIX_texture_coordinate_clamp
#define GL_SGIX_texture_coordinate_clamp 1
#endif

#ifndef GL_SGIX_texture_lod_bias
#define GL_SGIX_texture_lod_bias 1
#endif

#ifndef GL_SGIX_texture_multi_buffer
#define GL_SGIX_texture_multi_buffer 1
#endif

#ifndef GL_SGIX_texture_range
#define GL_SGIX_texture_range 1
#endif

#ifndef GL_SGIX_texture_scale_bias
#define GL_SGIX_texture_scale_bias 1
#endif

#ifndef GL_SGIX_texture_select
#define GL_SGIX_texture_select 1
#endif

#ifndef GL_SGIX_vertex_preclip
#define GL_SGIX_vertex_preclip 1
#endif

#ifndef GL_SGIX_ycrcb
#define GL_SGIX_ycrcb 1
#endif

#ifndef GL_SGIX_ycrcba
#define GL_SGIX_ycrcba 1
#endif

#ifndef GL_SGIX_ycrcb_subsample
#define GL_SGIX_ycrcb_subsample 1
#endif

#ifndef GL_SGI_color_matrix
#define GL_SGI_color_matrix 1
#endif

#ifndef GL_SGI_color_table
#define GL_SGI_color_table 1
#endif

#ifndef GL_SGI_depth_pass_instrument
#define GL_SGI_depth_pass_instrument 1
#endif

#ifndef GL_SGI_texture_color_table
#define GL_SGI_texture_color_table 1
#endif

#ifndef GL_SUNX_constant_data
#define GL_SUNX_constant_data 1
#endif

#ifndef GL_SUN_convolution_border_modes
#define GL_SUN_convolution_border_modes 1
#endif

#ifndef GL_SUN_global_alpha
#define GL_SUN_global_alpha 1
#endif

#ifndef GL_SUN_mesh_array
#define GL_SUN_mesh_array 1
#endif

#ifndef GL_SUN_slice_accum
#define GL_SUN_slice_accum 1
#endif

#ifndef GL_SUN_triangle_list
#define GL_SUN_triangle_list 1
#endif

#ifndef GL_SUN_vertex
#define GL_SUN_vertex 1
#endif

#ifndef GL_VERSION_1_0
#define GL_VERSION_1_0 1
#endif

#ifndef GL_VERSION_1_1
#define GL_VERSION_1_1 1
#endif

#ifndef GL_VERSION_1_2
#define GL_VERSION_1_2 1
#endif

#ifndef GL_VERSION_1_3
#define GL_VERSION_1_3 1
#endif

#ifndef GL_VERSION_1_4
#define GL_VERSION_1_4 1
#endif

#ifndef GL_VERSION_1_5
#define GL_VERSION_1_5 1
#endif

#ifndef GL_VERSION_2_0
#define GL_VERSION_2_0 1
#endif

#ifndef GL_VERSION_2_1
#define GL_VERSION_2_1 1
#endif

#ifndef GL_VERSION_3_0
#define GL_VERSION_3_0 1
#endif

#ifndef GL_VERSION_3_1
#define GL_VERSION_3_1 1
#endif

#ifndef GL_VERSION_3_2
#define GL_VERSION_3_2 1
#endif

#ifndef GL_VERSION_3_3
#define GL_VERSION_3_3 1
#endif

#ifndef GL_VERSION_4_0
#define GL_VERSION_4_0 1
#endif

#ifndef GL_VERSION_4_1
#define GL_VERSION_4_1 1
#endif

#ifndef GL_VERSION_4_2
#define GL_VERSION_4_2 1
#endif

#ifndef GL_VERSION_4_3
#define GL_VERSION_4_3 1
#endif

#ifndef GL_VERSION_4_4
#define GL_VERSION_4_4 1
#endif

#ifndef GL_VERSION_4_5
#define GL_VERSION_4_5 1
#endif

#ifndef GL_WIN_phong_shading
#define GL_WIN_phong_shading 1
#endif

#ifndef GL_WIN_specular_fog
#define GL_WIN_specular_fog 1
#endif

#ifdef GL_3DFX_multisample

#define GL_MULTISAMPLE_3DFX 0x86B2
#define GL_SAMPLE_BUFFERS_3DFX 0x86B3
#define GL_SAMPLES_3DFX 0x86B4
#define GL_MULTISAMPLE_BIT_3DFX 0x20000000

#endif

#ifdef GL_3DFX_texture_compression_FXT1

#define GL_COMPRESSED_RGB_FXT1_3DFX 0x86B0
#define GL_COMPRESSED_RGBA_FXT1_3DFX 0x86B1

#endif

#ifdef GL_AMD_blend_minmax_factor

#define GL_FACTOR_MIN_AMD 0x901C
#define GL_FACTOR_MAX_AMD 0x901D

#endif

#ifdef GL_AMD_debug_output

#define GL_MAX_DEBUG_LOGGED_MESSAGES_AMD 0x9144
#define GL_DEBUG_LOGGED_MESSAGES_AMD 0x9145
#define GL_DEBUG_SEVERITY_HIGH_AMD 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_AMD 0x9147
#define GL_DEBUG_SEVERITY_LOW_AMD 0x9148
#define GL_DEBUG_CATEGORY_API_ERROR_AMD 0x9149
#define GL_DEBUG_CATEGORY_WINDOW_SYSTEM_AMD 0x914A
#define GL_DEBUG_CATEGORY_DEPRECATION_AMD 0x914B
#define GL_DEBUG_CATEGORY_UNDEFINED_BEHAVIOR_AMD 0x914C
#define GL_DEBUG_CATEGORY_PERFORMANCE_AMD 0x914D
#define GL_DEBUG_CATEGORY_SHADER_COMPILER_AMD 0x914E
#define GL_DEBUG_CATEGORY_APPLICATION_AMD 0x914F
#define GL_DEBUG_CATEGORY_OTHER_AMD 0x9150

#endif

#ifdef GL_AMD_depth_clamp_separate

#define GL_DEPTH_CLAMP_NEAR_AMD 0x901E
#define GL_DEPTH_CLAMP_FAR_AMD 0x901F

#endif

#ifdef GL_AMD_gpu_shader_int64

#define GL_INT64_NV 0x140E
#define GL_UNSIGNED_INT64_NV 0x140F
#define GL_INT8_NV 0x8FE0
#define GL_INT8_VEC2_NV 0x8FE1
#define GL_INT8_VEC3_NV 0x8FE2
#define GL_INT8_VEC4_NV 0x8FE3
#define GL_INT16_NV 0x8FE4
#define GL_INT16_VEC2_NV 0x8FE5
#define GL_INT16_VEC3_NV 0x8FE6
#define GL_INT16_VEC4_NV 0x8FE7
#define GL_INT64_VEC2_NV 0x8FE9
#define GL_INT64_VEC3_NV 0x8FEA
#define GL_INT64_VEC4_NV 0x8FEB
#define GL_UNSIGNED_INT8_NV 0x8FEC
#define GL_UNSIGNED_INT8_VEC2_NV 0x8FED
#define GL_UNSIGNED_INT8_VEC3_NV 0x8FEE
#define GL_UNSIGNED_INT8_VEC4_NV 0x8FEF
#define GL_UNSIGNED_INT16_NV 0x8FF0
#define GL_UNSIGNED_INT16_VEC2_NV 0x8FF1
#define GL_UNSIGNED_INT16_VEC3_NV 0x8FF2
#define GL_UNSIGNED_INT16_VEC4_NV 0x8FF3
#define GL_UNSIGNED_INT64_VEC2_NV 0x8FF5
#define GL_UNSIGNED_INT64_VEC3_NV 0x8FF6
#define GL_UNSIGNED_INT64_VEC4_NV 0x8FF7
#define GL_FLOAT16_NV 0x8FF8
#define GL_FLOAT16_VEC2_NV 0x8FF9
#define GL_FLOAT16_VEC3_NV 0x8FFA
#define GL_FLOAT16_VEC4_NV 0x8FFB

#endif

#ifdef GL_AMD_interleaved_elements

#define GL_VERTEX_ELEMENT_SWIZZLE_AMD 0x91A4
#define GL_VERTEX_ID_SWIZZLE_AMD 0x91A5
#define GL_RED 0x1903
#define GL_GREEN 0x1904
#define GL_BLUE 0x1905
#define GL_ALPHA 0x1906
#define GL_RG8UI 0x8238
#define GL_RG16UI 0x823A
#define GL_RGBA8UI 0x8D7C

#endif

#ifdef GL_AMD_name_gen_delete

#define GL_DATA_BUFFER_AMD 0x9151
#define GL_PERFORMANCE_MONITOR_AMD 0x9152
#define GL_QUERY_OBJECT_AMD 0x9153
#define GL_VERTEX_ARRAY_OBJECT_AMD 0x9154
#define GL_SAMPLER_OBJECT_AMD 0x9155

#endif

#ifdef GL_AMD_occlusion_query_event

#define GL_OCCLUSION_QUERY_EVENT_MASK_AMD 0x874F
#define GL_QUERY_DEPTH_PASS_EVENT_BIT_AMD 0x00000001
#define GL_QUERY_DEPTH_FAIL_EVENT_BIT_AMD 0x00000002
#define GL_QUERY_STENCIL_FAIL_EVENT_BIT_AMD 0x00000004
#define GL_QUERY_DEPTH_BOUNDS_FAIL_EVENT_BIT_AMD 0x00000008
#define GL_QUERY_ALL_EVENT_BITS_AMD 0xFFFFFFFF

#endif

#ifdef GL_AMD_performance_monitor

#define GL_COUNTER_TYPE_AMD 0x8BC0
#define GL_COUNTER_RANGE_AMD 0x8BC1
#define GL_UNSIGNED_INT64_AMD 0x8BC2
#define GL_PERCENTAGE_AMD 0x8BC3
#define GL_PERFMON_RESULT_AVAILABLE_AMD 0x8BC4
#define GL_PERFMON_RESULT_SIZE_AMD 0x8BC5
#define GL_PERFMON_RESULT_AMD 0x8BC6

#endif

#ifdef GL_AMD_pinned_memory

#define GL_EXTERNAL_VIRTUAL_MEMORY_BUFFER_AMD 0x9160

#endif

#ifdef GL_AMD_query_buffer_object

#define GL_QUERY_BUFFER_AMD 0x9192
#define GL_QUERY_BUFFER_BINDING_AMD 0x9193
#define GL_QUERY_RESULT_NO_WAIT_AMD 0x9194

#endif

#ifdef GL_AMD_sample_positions

#define GL_SUBSAMPLE_DISTANCE_AMD 0x883F

#endif

#ifdef GL_AMD_seamless_cubemap_per_texture

#define GL_TEXTURE_CUBE_MAP_SEAMLESS 0x884F

#endif

#ifdef GL_AMD_sparse_texture

#define GL_TEXTURE_STORAGE_SPARSE_BIT_AMD 0x00000001
#define GL_VIRTUAL_PAGE_SIZE_X_AMD 0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_AMD 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_AMD 0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_AMD 0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_AMD 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_AMD 0x919A
#define GL_MIN_SPARSE_LEVEL_AMD 0x919B
#define GL_MIN_LOD_WARNING_AMD 0x919C

#endif

#ifdef GL_AMD_stencil_operation_extended

#define GL_SET_AMD 0x874A
#define GL_REPLACE_VALUE_AMD 0x874B
#define GL_STENCIL_OP_VALUE_AMD 0x874C
#define GL_STENCIL_BACK_OP_VALUE_AMD 0x874D

#endif

#ifdef GL_AMD_transform_feedback4

#define GL_STREAM_RASTERIZATION_AMD 0x91A0

#endif

#ifdef GL_AMD_vertex_shader_tessellator

#define GL_SAMPLER_BUFFER_AMD 0x9001
#define GL_INT_SAMPLER_BUFFER_AMD 0x9002
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_AMD 0x9003
#define GL_TESSELLATION_MODE_AMD 0x9004
#define GL_TESSELLATION_FACTOR_AMD 0x9005
#define GL_DISCRETE_AMD 0x9006
#define GL_CONTINUOUS_AMD 0x9007

#endif

#ifdef GL_APPLE_aux_depth_stencil

#define GL_AUX_DEPTH_STENCIL_APPLE 0x8A14

#endif

#ifdef GL_APPLE_client_storage

#define GL_UNPACK_CLIENT_STORAGE_APPLE 0x85B2

#endif

#ifdef GL_APPLE_element_array

#define GL_ELEMENT_ARRAY_APPLE 0x8A0C
#define GL_ELEMENT_ARRAY_TYPE_APPLE 0x8A0D
#define GL_ELEMENT_ARRAY_POINTER_APPLE 0x8A0E

#endif

#ifdef GL_APPLE_fence

#define GL_DRAW_PIXELS_APPLE 0x8A0A
#define GL_FENCE_APPLE 0x8A0B

#endif

#ifdef GL_APPLE_float_pixels

#define GL_HALF_APPLE 0x140B
#define GL_RGBA_FLOAT32_APPLE 0x8814
#define GL_RGB_FLOAT32_APPLE 0x8815
#define GL_ALPHA_FLOAT32_APPLE 0x8816
#define GL_INTENSITY_FLOAT32_APPLE 0x8817
#define GL_LUMINANCE_FLOAT32_APPLE 0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_APPLE 0x8819
#define GL_RGBA_FLOAT16_APPLE 0x881A
#define GL_RGB_FLOAT16_APPLE 0x881B
#define GL_ALPHA_FLOAT16_APPLE 0x881C
#define GL_INTENSITY_FLOAT16_APPLE 0x881D
#define GL_LUMINANCE_FLOAT16_APPLE 0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_APPLE 0x881F
#define GL_COLOR_FLOAT_APPLE 0x8A0F

#endif

#ifdef GL_APPLE_flush_buffer_range

#define GL_BUFFER_SERIALIZED_MODIFY_APPLE 0x8A12
#define GL_BUFFER_FLUSHING_UNMAP_APPLE 0x8A13

#endif

#ifdef GL_APPLE_object_purgeable

#define GL_BUFFER_OBJECT_APPLE 0x85B3
#define GL_RELEASED_APPLE 0x8A19
#define GL_VOLATILE_APPLE 0x8A1A
#define GL_RETAINED_APPLE 0x8A1B
#define GL_UNDEFINED_APPLE 0x8A1C
#define GL_PURGEABLE_APPLE 0x8A1D

#endif

#ifdef GL_APPLE_rgb_422

#define GL_RGB_422_APPLE 0x8A1F
#define GL_UNSIGNED_SHORT_8_8_APPLE 0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_APPLE 0x85BB

#endif

#ifdef GL_APPLE_row_bytes

#define GL_PACK_ROW_BYTES_APPLE 0x8A15
#define GL_UNPACK_ROW_BYTES_APPLE 0x8A16

#endif

#ifdef GL_APPLE_specular_vector

#define GL_LIGHT_MODEL_SPECULAR_VECTOR_APPLE 0x85B0

#endif

#ifdef GL_APPLE_texture_range

#define GL_TEXTURE_RANGE_LENGTH_APPLE 0x85B7
#define GL_TEXTURE_RANGE_POINTER_APPLE 0x85B8
#define GL_TEXTURE_STORAGE_HINT_APPLE 0x85BC
#define GL_STORAGE_PRIVATE_APPLE 0x85BD
#define GL_STORAGE_CACHED_APPLE 0x85BE
#define GL_STORAGE_SHARED_APPLE 0x85BF

#endif

#ifdef GL_APPLE_transform_hint

#define GL_TRANSFORM_HINT_APPLE 0x85B1

#endif

#ifdef GL_APPLE_vertex_array_object

#define GL_VERTEX_ARRAY_BINDING_APPLE 0x85B5

#endif

#ifdef GL_APPLE_vertex_array_range

#define GL_VERTEX_ARRAY_RANGE_APPLE 0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_APPLE 0x851E
#define GL_VERTEX_ARRAY_STORAGE_HINT_APPLE 0x851F
#define GL_VERTEX_ARRAY_RANGE_POINTER_APPLE 0x8521
#define GL_STORAGE_CLIENT_APPLE 0x85B4

#endif

#ifdef GL_APPLE_vertex_program_evaluators

#define GL_VERTEX_ATTRIB_MAP1_APPLE 0x8A00
#define GL_VERTEX_ATTRIB_MAP2_APPLE 0x8A01
#define GL_VERTEX_ATTRIB_MAP1_SIZE_APPLE 0x8A02
#define GL_VERTEX_ATTRIB_MAP1_COEFF_APPLE 0x8A03
#define GL_VERTEX_ATTRIB_MAP1_ORDER_APPLE 0x8A04
#define GL_VERTEX_ATTRIB_MAP1_DOMAIN_APPLE 0x8A05
#define GL_VERTEX_ATTRIB_MAP2_SIZE_APPLE 0x8A06
#define GL_VERTEX_ATTRIB_MAP2_COEFF_APPLE 0x8A07
#define GL_VERTEX_ATTRIB_MAP2_ORDER_APPLE 0x8A08
#define GL_VERTEX_ATTRIB_MAP2_DOMAIN_APPLE 0x8A09

#endif

#ifdef GL_APPLE_ycbcr_422

#define GL_YCBCR_422_APPLE 0x85B9

#endif

#ifdef GL_ARB_bindless_texture

#define GL_UNSIGNED_INT64_ARB 0x140F

#endif

#ifdef GL_ARB_blend_func_extended

#define GL_SRC1_COLOR 0x88F9
#define GL_SRC1_ALPHA 0x8589
#define GL_ONE_MINUS_SRC1_COLOR 0x88FA
#define GL_ONE_MINUS_SRC1_ALPHA 0x88FB
#define GL_MAX_DUAL_SOURCE_DRAW_BUFFERS 0x88FC

#endif

#ifdef GL_ARB_buffer_storage

#define GL_MAP_READ_BIT 0x0001
#define GL_MAP_WRITE_BIT 0x0002
#define GL_MAP_PERSISTENT_BIT 0x0040
#define GL_MAP_COHERENT_BIT 0x0080
#define GL_DYNAMIC_STORAGE_BIT 0x0100
#define GL_CLIENT_STORAGE_BIT 0x0200
#define GL_BUFFER_IMMUTABLE_STORAGE 0x821F
#define GL_BUFFER_STORAGE_FLAGS 0x8220
#define GL_CLIENT_MAPPED_BUFFER_BARRIER_BIT 0x00004000

#endif

#ifdef GL_ARB_clear_texture

#define GL_CLEAR_TEXTURE 0x9365

#endif

#ifdef GL_ARB_clip_control

#define GL_LOWER_LEFT 0x8CA1
#define GL_UPPER_LEFT 0x8CA2
#define GL_NEGATIVE_ONE_TO_ONE 0x935E
#define GL_ZERO_TO_ONE 0x935F
#define GL_CLIP_ORIGIN 0x935C
#define GL_CLIP_DEPTH_MODE 0x935D

#endif

#ifdef GL_ARB_cl_event

#ifdef __OPENCL_CL_H

#define GL_SYNC_CL_EVENT_ARB 0x8240
#define GL_SYNC_CL_EVENT_COMPLETE_ARB 0x8241

#endif

#endif

#ifdef GL_ARB_color_buffer_float

#define GL_RGBA_FLOAT_MODE_ARB 0x8820
#define GL_CLAMP_VERTEX_COLOR_ARB 0x891A
#define GL_CLAMP_FRAGMENT_COLOR_ARB 0x891B
#define GL_CLAMP_READ_COLOR_ARB 0x891C
#define GL_FIXED_ONLY_ARB 0x891D

#endif

#ifdef GL_ARB_compressed_texture_pixel_storage

#define GL_UNPACK_COMPRESSED_BLOCK_WIDTH 0x9127
#define GL_UNPACK_COMPRESSED_BLOCK_HEIGHT 0x9128
#define GL_UNPACK_COMPRESSED_BLOCK_DEPTH 0x9129
#define GL_UNPACK_COMPRESSED_BLOCK_SIZE 0x912A
#define GL_PACK_COMPRESSED_BLOCK_WIDTH 0x912B
#define GL_PACK_COMPRESSED_BLOCK_HEIGHT 0x912C
#define GL_PACK_COMPRESSED_BLOCK_DEPTH 0x912D
#define GL_PACK_COMPRESSED_BLOCK_SIZE 0x912E

#endif

#ifdef GL_ARB_compute_shader

#define GL_COMPUTE_SHADER 0x91B9
#define GL_MAX_COMPUTE_UNIFORM_BLOCKS 0x91BB
#define GL_MAX_COMPUTE_TEXTURE_IMAGE_UNITS 0x91BC
#define GL_MAX_COMPUTE_IMAGE_UNIFORMS 0x91BD
#define GL_MAX_COMPUTE_SHARED_MEMORY_SIZE 0x8262
#define GL_MAX_COMPUTE_UNIFORM_COMPONENTS 0x8263
#define GL_MAX_COMPUTE_ATOMIC_COUNTER_BUFFERS 0x8264
#define GL_MAX_COMPUTE_ATOMIC_COUNTERS 0x8265
#define GL_MAX_COMBINED_COMPUTE_UNIFORM_COMPONENTS 0x8266
#define GL_MAX_COMPUTE_LOCAL_INVOCATIONS 0x90EB
#define GL_MAX_COMPUTE_WORK_GROUP_COUNT 0x91BE
#define GL_MAX_COMPUTE_WORK_GROUP_SIZE 0x91BF
#define GL_COMPUTE_LOCAL_WORK_SIZE 0x8267
#define GL_UNIFORM_BLOCK_REFERENCED_BY_COMPUTE_SHADER 0x90EC
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_COMPUTE_SHADER 0x90ED
#define GL_DISPATCH_INDIRECT_BUFFER 0x90EE
#define GL_DISPATCH_INDIRECT_BUFFER_BINDING 0x90EF
#define GL_COMPUTE_SHADER_BIT 0x00000020

#endif

#ifdef GL_ARB_compute_variable_group_size

#define GL_MAX_COMPUTE_VARIABLE_GROUP_INVOCATIONS_ARB 0x9344
#define GL_MAX_COMPUTE_FIXED_GROUP_INVOCATIONS_ARB 0x90EB
#define GL_MAX_COMPUTE_VARIABLE_GROUP_SIZE_ARB 0x9345
#define GL_MAX_COMPUTE_FIXED_GROUP_SIZE_ARB 0x91BF

#endif

#ifdef GL_ARB_conditional_render_inverted

#define GL_QUERY_WAIT_INVERTED 0x8E17
#define GL_QUERY_NO_WAIT_INVERTED 0x8E18
#define GL_QUERY_BY_REGION_WAIT_INVERTED 0x8E19
#define GL_QUERY_BY_REGION_NO_WAIT_INVERTED 0x8E1A

#endif

#ifdef GL_ARB_copy_buffer

#define GL_COPY_READ_BUFFER_BINDING 0x8F36
#define GL_COPY_READ_BUFFER GL_COPY_READ_BUFFER_BINDING
#define GL_COPY_WRITE_BUFFER_BINDING 0x8F37
#define GL_COPY_WRITE_BUFFER GL_COPY_WRITE_BUFFER_BINDING

#endif

#ifdef GL_ARB_cull_distance

#define GL_MAX_CULL_DISTANCES 0x82F9
#define GL_MAX_COMBINED_CLIP_AND_CULL_DISTANCES 0x82FA

#endif

#ifdef GL_ARB_debug_output

#define GL_DEBUG_OUTPUT_SYNCHRONOUS_ARB 0x8242
#define GL_DEBUG_NEXT_LOGGED_MESSAGE_LENGTH_ARB 0x8243
#define GL_DEBUG_CALLBACK_FUNCTION_ARB 0x8244
#define GL_DEBUG_CALLBACK_USER_PARAM_ARB 0x8245
#define GL_DEBUG_SOURCE_API_ARB 0x8246
#define GL_DEBUG_SOURCE_WINDOW_SYSTEM_ARB 0x8247
#define GL_DEBUG_SOURCE_SHADER_COMPILER_ARB 0x8248
#define GL_DEBUG_SOURCE_THIRD_PARTY_ARB 0x8249
#define GL_DEBUG_SOURCE_APPLICATION_ARB 0x824A
#define GL_DEBUG_SOURCE_OTHER_ARB 0x824B
#define GL_DEBUG_TYPE_ERROR_ARB 0x824C
#define GL_DEBUG_TYPE_DEPRECATED_BEHAVIOR_ARB 0x824D
#define GL_DEBUG_TYPE_UNDEFINED_BEHAVIOR_ARB 0x824E
#define GL_DEBUG_TYPE_PORTABILITY_ARB 0x824F
#define GL_DEBUG_TYPE_PERFORMANCE_ARB 0x8250
#define GL_DEBUG_TYPE_OTHER_ARB 0x8251
#define GL_MAX_DEBUG_MESSAGE_LENGTH_ARB 0x9143
#define GL_MAX_DEBUG_LOGGED_MESSAGES_ARB 0x9144
#define GL_DEBUG_LOGGED_MESSAGES_ARB 0x9145
#define GL_DEBUG_SEVERITY_HIGH_ARB 0x9146
#define GL_DEBUG_SEVERITY_MEDIUM_ARB 0x9147
#define GL_DEBUG_SEVERITY_LOW_ARB 0x9148

#endif

#ifdef GL_ARB_depth_buffer_float

#define GL_DEPTH_COMPONENT32F 0x8CAC
#define GL_DEPTH32F_STENCIL8 0x8CAD
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV 0x8DAD

#endif

#ifdef GL_ARB_depth_clamp

#define GL_DEPTH_CLAMP 0x864F

#endif

#ifdef GL_ARB_depth_texture

#define GL_DEPTH_COMPONENT16_ARB 0x81A5
#define GL_DEPTH_COMPONENT24_ARB 0x81A6
#define GL_DEPTH_COMPONENT32_ARB 0x81A7
#define GL_TEXTURE_DEPTH_SIZE_ARB 0x884A
#define GL_DEPTH_TEXTURE_MODE_ARB 0x884B

#endif

#ifdef GL_ARB_direct_state_access

#define GL_TEXTURE_TARGET 0x1006
#define GL_QUERY_TARGET 0x82EA
#define GL_TEXTURE_BINDING 0x82EB

#endif

#ifdef GL_ARB_draw_buffers

#define GL_MAX_DRAW_BUFFERS_ARB 0x8824
#define GL_DRAW_BUFFER0_ARB 0x8825
#define GL_DRAW_BUFFER1_ARB 0x8826
#define GL_DRAW_BUFFER2_ARB 0x8827
#define GL_DRAW_BUFFER3_ARB 0x8828
#define GL_DRAW_BUFFER4_ARB 0x8829
#define GL_DRAW_BUFFER5_ARB 0x882A
#define GL_DRAW_BUFFER6_ARB 0x882B
#define GL_DRAW_BUFFER7_ARB 0x882C
#define GL_DRAW_BUFFER8_ARB 0x882D
#define GL_DRAW_BUFFER9_ARB 0x882E
#define GL_DRAW_BUFFER10_ARB 0x882F
#define GL_DRAW_BUFFER11_ARB 0x8830
#define GL_DRAW_BUFFER12_ARB 0x8831
#define GL_DRAW_BUFFER13_ARB 0x8832
#define GL_DRAW_BUFFER14_ARB 0x8833
#define GL_DRAW_BUFFER15_ARB 0x8834

#endif

#ifdef GL_ARB_draw_indirect

#define GL_DRAW_INDIRECT_BUFFER 0x8F3F
#define GL_DRAW_INDIRECT_BUFFER_BINDING 0x8F43

#endif

#ifdef GL_ARB_enhanced_layouts

#define GL_LOCATION_COMPONENT 0x934A
#define GL_TRANSFORM_FEEDBACK_BUFFER_INDEX 0x934B
#define GL_TRANSFORM_FEEDBACK_BUFFER_STRIDE 0x934C

#endif

#ifdef GL_ARB_ES2_compatibility

#define GL_FIXED 0x140C
#define GL_IMPLEMENTATION_COLOR_READ_TYPE 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT 0x8B9B
#define GL_LOW_FLOAT 0x8DF0
#define GL_MEDIUM_FLOAT 0x8DF1
#define GL_HIGH_FLOAT 0x8DF2
#define GL_LOW_INT 0x8DF3
#define GL_MEDIUM_INT 0x8DF4
#define GL_HIGH_INT 0x8DF5
#define GL_SHADER_COMPILER 0x8DFA
#define GL_NUM_SHADER_BINARY_FORMATS 0x8DF9
#define GL_MAX_VERTEX_UNIFORM_VECTORS 0x8DFB
#define GL_MAX_VARYING_VECTORS 0x8DFC
#define GL_MAX_FRAGMENT_UNIFORM_VECTORS 0x8DFD
#define GL_RGB565 0x8D62

#endif

#ifdef GL_ARB_ES3_compatibility

#define GL_COMPRESSED_RGB8_ETC2 0x9274
#define GL_COMPRESSED_SRGB8_ETC2 0x9275
#define GL_COMPRESSED_RGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9276
#define GL_COMPRESSED_SRGB8_PUNCHTHROUGH_ALPHA1_ETC2 0x9277
#define GL_COMPRESSED_RGBA8_ETC2_EAC 0x9278
#define GL_COMPRESSED_SRGB8_ALPHA8_ETC2_EAC 0x9279
#define GL_COMPRESSED_R11_EAC 0x9270
#define GL_COMPRESSED_SIGNED_R11_EAC 0x9271
#define GL_COMPRESSED_RG11_EAC 0x9272
#define GL_COMPRESSED_SIGNED_RG11_EAC 0x9273
#define GL_PRIMITIVE_RESTART_FIXED_INDEX 0x8D69
#define GL_ANY_SAMPLES_PASSED_CONSERVATIVE 0x8D6A
#define GL_MAX_ELEMENT_INDEX 0x8D6B

#endif

#ifdef GL_ARB_explicit_uniform_location

#define GL_MAX_UNIFORM_LOCATIONS 0x826E

#endif

#ifdef GL_ARB_fragment_program

#define GL_FRAGMENT_PROGRAM_ARB 0x8804
#define GL_PROGRAM_ALU_INSTRUCTIONS_ARB 0x8805
#define GL_PROGRAM_TEX_INSTRUCTIONS_ARB 0x8806
#define GL_PROGRAM_TEX_INDIRECTIONS_ARB 0x8807
#define GL_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x8808
#define GL_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x8809
#define GL_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x880A
#define GL_MAX_PROGRAM_ALU_INSTRUCTIONS_ARB 0x880B
#define GL_MAX_PROGRAM_TEX_INSTRUCTIONS_ARB 0x880C
#define GL_MAX_PROGRAM_TEX_INDIRECTIONS_ARB 0x880D
#define GL_MAX_PROGRAM_NATIVE_ALU_INSTRUCTIONS_ARB 0x880E
#define GL_MAX_PROGRAM_NATIVE_TEX_INSTRUCTIONS_ARB 0x880F
#define GL_MAX_PROGRAM_NATIVE_TEX_INDIRECTIONS_ARB 0x8810
#define GL_MAX_TEXTURE_COORDS_ARB 0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_ARB 0x8872

#endif

#ifdef GL_ARB_fragment_shader

#define GL_FRAGMENT_SHADER_ARB 0x8B30
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS_ARB 0x8B49
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT_ARB 0x8B8B

#endif

#ifdef GL_ARB_framebuffer_no_attachments

#define GL_FRAMEBUFFER_DEFAULT_WIDTH 0x9310
#define GL_FRAMEBUFFER_DEFAULT_HEIGHT 0x9311
#define GL_FRAMEBUFFER_DEFAULT_LAYERS 0x9312
#define GL_FRAMEBUFFER_DEFAULT_SAMPLES 0x9313
#define GL_FRAMEBUFFER_DEFAULT_FIXED_SAMPLE_LOCATIONS 0x9314
#define GL_MAX_FRAMEBUFFER_WIDTH 0x9315
#define GL_MAX_FRAMEBUFFER_HEIGHT 0x9316
#define GL_MAX_FRAMEBUFFER_LAYERS 0x9317
#define GL_MAX_FRAMEBUFFER_SAMPLES 0x9318

#endif

#ifdef GL_ARB_framebuffer_object

#define GL_INVALID_FRAMEBUFFER_OPERATION 0x0506
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
#define GL_MAX_RENDERBUFFER_SIZE 0x84E8
#define GL_DEPTH_STENCIL 0x84F9
#define GL_UNSIGNED_INT_24_8 0x84FA
#define GL_DEPTH24_STENCIL8 0x88F0
#define GL_TEXTURE_STENCIL_SIZE 0x88F1
#define GL_TEXTURE_RED_TYPE 0x8C10
#define GL_TEXTURE_GREEN_TYPE 0x8C11
#define GL_TEXTURE_BLUE_TYPE 0x8C12
#define GL_TEXTURE_ALPHA_TYPE 0x8C13
#define GL_TEXTURE_DEPTH_TYPE 0x8C16
#define GL_UNSIGNED_NORMALIZED 0x8C17
#define GL_FRAMEBUFFER_BINDING 0x8CA6
#define GL_DRAW_FRAMEBUFFER_BINDING GL_FRAMEBUFFER_BINDING
#define GL_RENDERBUFFER_BINDING 0x8CA7
#define GL_READ_FRAMEBUFFER 0x8CA8
#define GL_DRAW_FRAMEBUFFER 0x8CA9
#define GL_READ_FRAMEBUFFER_BINDING 0x8CAA
#define GL_RENDERBUFFER_SAMPLES 0x8CAB
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED 0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS 0x8CDF
#define GL_COLOR_ATTACHMENT0 0x8CE0
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
#define GL_DEPTH_ATTACHMENT 0x8D00
#define GL_STENCIL_ATTACHMENT 0x8D20
#define GL_FRAMEBUFFER 0x8D40
#define GL_RENDERBUFFER 0x8D41
#define GL_RENDERBUFFER_WIDTH 0x8D42
#define GL_RENDERBUFFER_HEIGHT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT 0x8D44
#define GL_STENCIL_INDEX1 0x8D46
#define GL_STENCIL_INDEX4 0x8D47
#define GL_STENCIL_INDEX8 0x8D48
#define GL_STENCIL_INDEX16 0x8D49
#define GL_RENDERBUFFER_RED_SIZE 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE 0x8D55
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE 0x8D56
#define GL_MAX_SAMPLES 0x8D57
#define GL_INDEX 0x8222
#define GL_TEXTURE_LUMINANCE_TYPE 0x8C14
#define GL_TEXTURE_INTENSITY_TYPE 0x8C15

#endif

#ifdef GL_ARB_framebuffer_sRGB

#define GL_FRAMEBUFFER_SRGB 0x8DB9

#endif

#ifdef GL_ARB_geometry_shader4

#define GL_LINES_ADJACENCY_ARB 0x000A
#define GL_LINE_STRIP_ADJACENCY_ARB 0x000B
#define GL_TRIANGLES_ADJACENCY_ARB 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_ARB 0x000D
#define GL_PROGRAM_POINT_SIZE_ARB 0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_ARB 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_ARB 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_ARB 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_ARB 0x8DA9
#define GL_GEOMETRY_SHADER_ARB 0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_ARB 0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_ARB 0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_ARB 0x8DDC
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_ARB 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_ARB 0x8DDE
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_ARB 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_ARB 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_ARB 0x8DE1
#define GL_MAX_VARYING_COMPONENTS 0x8B4B

#endif

#ifdef GL_ARB_get_program_binary

#define GL_PROGRAM_BINARY_RETRIEVABLE_HINT 0x8257
#define GL_PROGRAM_BINARY_LENGTH 0x8741
#define GL_NUM_PROGRAM_BINARY_FORMATS 0x87FE
#define GL_PROGRAM_BINARY_FORMATS 0x87FF

#endif

#ifdef GL_ARB_gpu_shader5

#define GL_GEOMETRY_SHADER_INVOCATIONS 0x887F
#define GL_MAX_GEOMETRY_SHADER_INVOCATIONS 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET 0x8E5C
#define GL_FRAGMENT_INTERPOLATION_OFFSET_BITS 0x8E5D
#define GL_MAX_VERTEX_STREAMS 0x8E71

#endif

#ifdef GL_ARB_gpu_shader_fp64

#define GL_DOUBLE 0x140A
#define GL_DOUBLE_VEC2 0x8FFC
#define GL_DOUBLE_VEC3 0x8FFD
#define GL_DOUBLE_VEC4 0x8FFE
#define GL_DOUBLE_MAT2 0x8F46
#define GL_DOUBLE_MAT3 0x8F47
#define GL_DOUBLE_MAT4 0x8F48
#define GL_DOUBLE_MAT2x3 0x8F49
#define GL_DOUBLE_MAT2x4 0x8F4A
#define GL_DOUBLE_MAT3x2 0x8F4B
#define GL_DOUBLE_MAT3x4 0x8F4C
#define GL_DOUBLE_MAT4x2 0x8F4D
#define GL_DOUBLE_MAT4x3 0x8F4E

#endif

#ifdef GL_ARB_half_float_pixel

#define GL_HALF_FLOAT_ARB 0x140B

#endif

#ifdef GL_ARB_half_float_vertex

#define GL_HALF_FLOAT 0x140B

#endif

#ifdef GL_ARB_imaging

#define GL_CONSTANT_COLOR 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR 0x8002
#define GL_CONSTANT_ALPHA 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA 0x8004
#define GL_BLEND_COLOR 0x8005
#define GL_FUNC_ADD 0x8006
#define GL_MIN 0x8007
#define GL_MAX 0x8008
#define GL_BLEND_EQUATION 0x8009
#define GL_FUNC_SUBTRACT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT 0x800B
#define GL_CONVOLUTION_1D 0x8010
#define GL_CONVOLUTION_2D 0x8011
#define GL_SEPARABLE_2D 0x8012
#define GL_CONVOLUTION_BORDER_MODE 0x8013
#define GL_CONVOLUTION_FILTER_SCALE 0x8014
#define GL_CONVOLUTION_FILTER_BIAS 0x8015
#define GL_REDUCE 0x8016
#define GL_CONVOLUTION_FORMAT 0x8017
#define GL_CONVOLUTION_WIDTH 0x8018
#define GL_CONVOLUTION_HEIGHT 0x8019
#define GL_MAX_CONVOLUTION_WIDTH 0x801A
#define GL_MAX_CONVOLUTION_HEIGHT 0x801B
#define GL_POST_CONVOLUTION_RED_SCALE 0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE 0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS 0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS 0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS 0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS 0x8023
#define GL_HISTOGRAM 0x8024
#define GL_PROXY_HISTOGRAM 0x8025
#define GL_HISTOGRAM_WIDTH 0x8026
#define GL_HISTOGRAM_FORMAT 0x8027
#define GL_HISTOGRAM_RED_SIZE 0x8028
#define GL_HISTOGRAM_GREEN_SIZE 0x8029
#define GL_HISTOGRAM_BLUE_SIZE 0x802A
#define GL_HISTOGRAM_ALPHA_SIZE 0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE 0x802C
#define GL_HISTOGRAM_SINK 0x802D
#define GL_MINMAX 0x802E
#define GL_MINMAX_FORMAT 0x802F
#define GL_MINMAX_SINK 0x8030
#define GL_TABLE_TOO_LARGE 0x8031
#define GL_COLOR_MATRIX 0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH 0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH 0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE 0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE 0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE 0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE 0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS 0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS 0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS 0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS 0x80BB
#define GL_COLOR_TABLE 0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE 0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE 0x80D2
#define GL_PROXY_COLOR_TABLE 0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE 0x80D5
#define GL_COLOR_TABLE_SCALE 0x80D6
#define GL_COLOR_TABLE_BIAS 0x80D7
#define GL_COLOR_TABLE_FORMAT 0x80D8
#define GL_COLOR_TABLE_WIDTH 0x80D9
#define GL_COLOR_TABLE_RED_SIZE 0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE 0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE 0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE 0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE 0x80DF
#define GL_CONSTANT_BORDER 0x8151
#define GL_REPLICATE_BORDER 0x8153
#define GL_CONVOLUTION_BORDER_COLOR 0x8154

#endif

#ifdef GL_ARB_indirect_parameters

#define GL_PARAMETER_BUFFER_ARB 0x80EE
#define GL_PARAMETER_BUFFER_BINDING_ARB 0x80EF

#endif

#ifdef GL_ARB_instanced_arrays

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR_ARB 0x88FE

#endif

#ifdef GL_ARB_internalformat_query

#define GL_NUM_SAMPLE_COUNTS 0x9380

#endif

#ifdef GL_ARB_internalformat_query2

#define GL_IMAGE_FORMAT_COMPATIBILITY_TYPE 0x90C7
#define GL_SAMPLES 0x80A9
#define GL_TEXTURE_1D 0x0DE0
#define GL_TEXTURE_1D_ARRAY 0x8C18
#define GL_TEXTURE_2D 0x0DE1
#define GL_TEXTURE_2D_ARRAY 0x8C1A
#define GL_TEXTURE_3D 0x806F
#define GL_TEXTURE_CUBE_MAP 0x8513
#define GL_TEXTURE_CUBE_MAP_ARRAY 0x9009
#define GL_TEXTURE_RECTANGLE 0x84F5
#define GL_TEXTURE_BUFFER 0x8C2A
#define GL_TEXTURE_2D_MULTISAMPLE 0x9100
#define GL_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9102
#define GL_TEXTURE_COMPRESSED 0x86A1
#define GL_INTERNALFORMAT_SUPPORTED 0x826F
#define GL_INTERNALFORMAT_PREFERRED 0x8270
#define GL_INTERNALFORMAT_RED_SIZE 0x8271
#define GL_INTERNALFORMAT_GREEN_SIZE 0x8272
#define GL_INTERNALFORMAT_BLUE_SIZE 0x8273
#define GL_INTERNALFORMAT_ALPHA_SIZE 0x8274
#define GL_INTERNALFORMAT_DEPTH_SIZE 0x8275
#define GL_INTERNALFORMAT_STENCIL_SIZE 0x8276
#define GL_INTERNALFORMAT_SHARED_SIZE 0x8277
#define GL_INTERNALFORMAT_RED_TYPE 0x8278
#define GL_INTERNALFORMAT_GREEN_TYPE 0x8279
#define GL_INTERNALFORMAT_BLUE_TYPE 0x827A
#define GL_INTERNALFORMAT_ALPHA_TYPE 0x827B
#define GL_INTERNALFORMAT_DEPTH_TYPE 0x827C
#define GL_INTERNALFORMAT_STENCIL_TYPE 0x827D
#define GL_MAX_WIDTH 0x827E
#define GL_MAX_HEIGHT 0x827F
#define GL_MAX_DEPTH 0x8280
#define GL_MAX_LAYERS 0x8281
#define GL_MAX_COMBINED_DIMENSIONS 0x8282
#define GL_COLOR_COMPONENTS 0x8283
#define GL_DEPTH_COMPONENTS 0x8284
#define GL_STENCIL_COMPONENTS 0x8285
#define GL_COLOR_RENDERABLE 0x8286
#define GL_DEPTH_RENDERABLE 0x8287
#define GL_STENCIL_RENDERABLE 0x8288
#define GL_FRAMEBUFFER_RENDERABLE 0x8289
#define GL_FRAMEBUFFER_RENDERABLE_LAYERED 0x828A
#define GL_FRAMEBUFFER_BLEND 0x828B
#define GL_READ_PIXELS 0x828C
#define GL_READ_PIXELS_FORMAT 0x828D
#define GL_READ_PIXELS_TYPE 0x828E
#define GL_TEXTURE_IMAGE_FORMAT 0x828F
#define GL_TEXTURE_IMAGE_TYPE 0x8290
#define GL_GET_TEXTURE_IMAGE_FORMAT 0x8291
#define GL_GET_TEXTURE_IMAGE_TYPE 0x8292
#define GL_MIPMAP 0x8293
#define GL_MANUAL_GENERATE_MIPMAP 0x8294
#define GL_AUTO_GENERATE_MIPMAP 0x8295
#define GL_COLOR_ENCODING 0x8296
#define GL_SRGB_READ 0x8297
#define GL_SRGB_WRITE 0x8298
#define GL_SRGB_DECODE_ARB 0x8299
#define GL_FILTER 0x829A
#define GL_VERTEX_TEXTURE 0x829B
#define GL_TESS_CONTROL_TEXTURE 0x829C
#define GL_TESS_EVALUATION_TEXTURE 0x829D
#define GL_GEOMETRY_TEXTURE 0x829E
#define GL_FRAGMENT_TEXTURE 0x829F
#define GL_COMPUTE_TEXTURE 0x82A0
#define GL_TEXTURE_SHADOW 0x82A1
#define GL_TEXTURE_GATHER 0x82A2
#define GL_TEXTURE_GATHER_SHADOW 0x82A3
#define GL_SHADER_IMAGE_LOAD 0x82A4
#define GL_SHADER_IMAGE_STORE 0x82A5
#define GL_SHADER_IMAGE_ATOMIC 0x82A6
#define GL_IMAGE_TEXEL_SIZE 0x82A7
#define GL_IMAGE_COMPATIBILITY_CLASS 0x82A8
#define GL_IMAGE_PIXEL_FORMAT 0x82A9
#define GL_IMAGE_PIXEL_TYPE 0x82AA
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_TEST 0x82AC
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_TEST 0x82AD
#define GL_SIMULTANEOUS_TEXTURE_AND_DEPTH_WRITE 0x82AE
#define GL_SIMULTANEOUS_TEXTURE_AND_STENCIL_WRITE 0x82AF
#define GL_TEXTURE_COMPRESSED_BLOCK_WIDTH 0x82B1
#define GL_TEXTURE_COMPRESSED_BLOCK_HEIGHT 0x82B2
#define GL_TEXTURE_COMPRESSED_BLOCK_SIZE 0x82B3
#define GL_CLEAR_BUFFER 0x82B4
#define GL_TEXTURE_VIEW 0x82B5
#define GL_VIEW_COMPATIBILITY_CLASS 0x82B6
#define GL_FULL_SUPPORT 0x82B7
#define GL_CAVEAT_SUPPORT 0x82B8
#define GL_IMAGE_CLASS_4_X_32 0x82B9
#define GL_IMAGE_CLASS_2_X_32 0x82BA
#define GL_IMAGE_CLASS_1_X_32 0x82BB
#define GL_IMAGE_CLASS_4_X_16 0x82BC
#define GL_IMAGE_CLASS_2_X_16 0x82BD
#define GL_IMAGE_CLASS_1_X_16 0x82BE
#define GL_IMAGE_CLASS_4_X_8 0x82BF
#define GL_IMAGE_CLASS_2_X_8 0x82C0
#define GL_IMAGE_CLASS_1_X_8 0x82C1
#define GL_IMAGE_CLASS_11_11_10 0x82C2
#define GL_IMAGE_CLASS_10_10_10_2 0x82C3
#define GL_VIEW_CLASS_128_BITS 0x82C4
#define GL_VIEW_CLASS_96_BITS 0x82C5
#define GL_VIEW_CLASS_64_BITS 0x82C6
#define GL_VIEW_CLASS_48_BITS 0x82C7
#define GL_VIEW_CLASS_32_BITS 0x82C8
#define GL_VIEW_CLASS_24_BITS 0x82C9
#define GL_VIEW_CLASS_16_BITS 0x82CA
#define GL_VIEW_CLASS_8_BITS 0x82CB
#define GL_VIEW_CLASS_S3TC_DXT1_RGB 0x82CC
#define GL_VIEW_CLASS_S3TC_DXT1_RGBA 0x82CD
#define GL_VIEW_CLASS_S3TC_DXT3_RGBA 0x82CE
#define GL_VIEW_CLASS_S3TC_DXT5_RGBA 0x82CF
#define GL_VIEW_CLASS_RGTC1_RED 0x82D0
#define GL_VIEW_CLASS_RGTC2_RG 0x82D1
#define GL_VIEW_CLASS_BPTC_UNORM 0x82D2
#define GL_VIEW_CLASS_BPTC_FLOAT 0x82D3

#endif

#ifdef GL_ARB_map_buffer_alignment

#define GL_MIN_MAP_BUFFER_ALIGNMENT 0x90BC

#endif

#ifdef GL_ARB_map_buffer_range

#define GL_MAP_INVALIDATE_RANGE_BIT 0x0004
#define GL_MAP_INVALIDATE_BUFFER_BIT 0x0008
#define GL_MAP_FLUSH_EXPLICIT_BIT 0x0010
#define GL_MAP_UNSYNCHRONIZED_BIT 0x0020

#endif

#ifdef GL_ARB_matrix_palette

#define GL_MATRIX_PALETTE_ARB 0x8840
#define GL_MAX_MATRIX_PALETTE_STACK_DEPTH_ARB 0x8841
#define GL_MAX_PALETTE_MATRICES_ARB 0x8842
#define GL_CURRENT_PALETTE_MATRIX_ARB 0x8843
#define GL_MATRIX_INDEX_ARRAY_ARB 0x8844
#define GL_CURRENT_MATRIX_INDEX_ARB 0x8845
#define GL_MATRIX_INDEX_ARRAY_SIZE_ARB 0x8846
#define GL_MATRIX_INDEX_ARRAY_TYPE_ARB 0x8847
#define GL_MATRIX_INDEX_ARRAY_STRIDE_ARB 0x8848
#define GL_MATRIX_INDEX_ARRAY_POINTER_ARB 0x8849

#endif

#ifdef GL_ARB_multisample

#define GL_MULTISAMPLE_ARB 0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE_ARB 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_ARB 0x809F
#define GL_SAMPLE_COVERAGE_ARB 0x80A0
#define GL_SAMPLE_BUFFERS_ARB 0x80A8
#define GL_SAMPLES_ARB 0x80A9
#define GL_SAMPLE_COVERAGE_VALUE_ARB 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT_ARB 0x80AB
#define GL_MULTISAMPLE_BIT_ARB 0x20000000

#endif

#ifdef GL_ARB_multitexture

#define GL_TEXTURE0_ARB 0x84C0
#define GL_TEXTURE1_ARB 0x84C1
#define GL_TEXTURE2_ARB 0x84C2
#define GL_TEXTURE3_ARB 0x84C3
#define GL_TEXTURE4_ARB 0x84C4
#define GL_TEXTURE5_ARB 0x84C5
#define GL_TEXTURE6_ARB 0x84C6
#define GL_TEXTURE7_ARB 0x84C7
#define GL_TEXTURE8_ARB 0x84C8
#define GL_TEXTURE9_ARB 0x84C9
#define GL_TEXTURE10_ARB 0x84CA
#define GL_TEXTURE11_ARB 0x84CB
#define GL_TEXTURE12_ARB 0x84CC
#define GL_TEXTURE13_ARB 0x84CD
#define GL_TEXTURE14_ARB 0x84CE
#define GL_TEXTURE15_ARB 0x84CF
#define GL_TEXTURE16_ARB 0x84D0
#define GL_TEXTURE17_ARB 0x84D1
#define GL_TEXTURE18_ARB 0x84D2
#define GL_TEXTURE19_ARB 0x84D3
#define GL_TEXTURE20_ARB 0x84D4
#define GL_TEXTURE21_ARB 0x84D5
#define GL_TEXTURE22_ARB 0x84D6
#define GL_TEXTURE23_ARB 0x84D7
#define GL_TEXTURE24_ARB 0x84D8
#define GL_TEXTURE25_ARB 0x84D9
#define GL_TEXTURE26_ARB 0x84DA
#define GL_TEXTURE27_ARB 0x84DB
#define GL_TEXTURE28_ARB 0x84DC
#define GL_TEXTURE29_ARB 0x84DD
#define GL_TEXTURE30_ARB 0x84DE
#define GL_TEXTURE31_ARB 0x84DF
#define GL_ACTIVE_TEXTURE_ARB 0x84E0
#define GL_CLIENT_ACTIVE_TEXTURE_ARB 0x84E1
#define GL_MAX_TEXTURE_UNITS_ARB 0x84E2

#endif

#ifdef GL_ARB_occlusion_query

#define GL_QUERY_COUNTER_BITS_ARB 0x8864
#define GL_CURRENT_QUERY_ARB 0x8865
#define GL_QUERY_RESULT_ARB 0x8866
#define GL_QUERY_RESULT_AVAILABLE_ARB 0x8867
#define GL_SAMPLES_PASSED_ARB 0x8914

#endif

#ifdef GL_ARB_occlusion_query2

#define GL_ANY_SAMPLES_PASSED 0x8C2F

#endif

#ifdef GL_ARB_pipeline_statistics_query

#define GL_VERTICES_SUBMITTED_ARB 0x82EE
#define GL_PRIMITIVES_SUBMITTED_ARB 0x82EF
#define GL_VERTEX_SHADER_INVOCATIONS_ARB 0x82F0
#define GL_TESS_CONTROL_SHADER_PATCHES_ARB 0x82F1
#define GL_TESS_EVALUATION_SHADER_INVOCATIONS_ARB 0x82F2
#define GL_GEOMETRY_SHADER_PRIMITIVES_EMITTED_ARB 0x82F3
#define GL_FRAGMENT_SHADER_INVOCATIONS_ARB 0x82F4
#define GL_COMPUTE_SHADER_INVOCATIONS_ARB 0x82F5
#define GL_CLIPPING_INPUT_PRIMITIVES_ARB 0x82F6
#define GL_CLIPPING_OUTPUT_PRIMITIVES_ARB 0x82F7

#endif

#ifdef GL_ARB_pixel_buffer_object

#define GL_PIXEL_PACK_BUFFER_ARB 0x88EB
#define GL_PIXEL_UNPACK_BUFFER_ARB 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_ARB 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_ARB 0x88EF

#endif

#ifdef GL_ARB_point_parameters

#define GL_POINT_SIZE_MIN_ARB 0x8126
#define GL_POINT_SIZE_MAX_ARB 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_ARB 0x8128
#define GL_POINT_DISTANCE_ATTENUATION_ARB 0x8129

#endif

#ifdef GL_ARB_point_sprite

#define GL_POINT_SPRITE_ARB 0x8861
#define GL_COORD_REPLACE_ARB 0x8862

#endif

#ifdef GL_ARB_program_interface_query

#define GL_UNIFORM 0x92E1
#define GL_UNIFORM_BLOCK 0x92E2
#define GL_PROGRAM_INPUT 0x92E3
#define GL_PROGRAM_OUTPUT 0x92E4
#define GL_BUFFER_VARIABLE 0x92E5
#define GL_SHADER_STORAGE_BLOCK 0x92E6
#define GL_ATOMIC_COUNTER_BUFFER 0x92C0
#define GL_VERTEX_SUBROUTINE 0x92E8
#define GL_TESS_CONTROL_SUBROUTINE 0x92E9
#define GL_TESS_EVALUATION_SUBROUTINE 0x92EA
#define GL_GEOMETRY_SUBROUTINE 0x92EB
#define GL_FRAGMENT_SUBROUTINE 0x92EC
#define GL_COMPUTE_SUBROUTINE 0x92ED
#define GL_VERTEX_SUBROUTINE_UNIFORM 0x92EE
#define GL_TESS_CONTROL_SUBROUTINE_UNIFORM 0x92EF
#define GL_TESS_EVALUATION_SUBROUTINE_UNIFORM 0x92F0
#define GL_GEOMETRY_SUBROUTINE_UNIFORM 0x92F1
#define GL_FRAGMENT_SUBROUTINE_UNIFORM 0x92F2
#define GL_COMPUTE_SUBROUTINE_UNIFORM 0x92F3
#define GL_TRANSFORM_FEEDBACK_VARYING 0x92F4
#define GL_ACTIVE_RESOURCES 0x92F5
#define GL_MAX_NAME_LENGTH 0x92F6
#define GL_MAX_NUM_ACTIVE_VARIABLES 0x92F7
#define GL_MAX_NUM_COMPATIBLE_SUBROUTINES 0x92F8
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
#define GL_REFERENCED_BY_TESS_CONTROL_SHADER 0x9307
#define GL_REFERENCED_BY_TESS_EVALUATION_SHADER 0x9308
#define GL_REFERENCED_BY_GEOMETRY_SHADER 0x9309
#define GL_REFERENCED_BY_FRAGMENT_SHADER 0x930A
#define GL_REFERENCED_BY_COMPUTE_SHADER 0x930B
#define GL_TOP_LEVEL_ARRAY_SIZE 0x930C
#define GL_TOP_LEVEL_ARRAY_STRIDE 0x930D
#define GL_LOCATION 0x930E
#define GL_LOCATION_INDEX 0x930F
#define GL_IS_PER_PATCH 0x92E7
#define GL_NUM_COMPATIBLE_SUBROUTINES 0x8E4A
#define GL_COMPATIBLE_SUBROUTINES 0x8E4B

#endif

#ifdef GL_ARB_provoking_vertex

#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION 0x8E4D
#define GL_LAST_VERTEX_CONVENTION 0x8E4E
#define GL_PROVOKING_VERTEX 0x8E4F

#endif

#ifdef GL_ARB_query_buffer_object

#define GL_QUERY_RESULT_NO_WAIT 0x9194
#define GL_QUERY_BUFFER 0x9192
#define GL_QUERY_BUFFER_BINDING 0x9193
#define GL_QUERY_BUFFER_BARRIER_BIT 0x00008000

#endif

#ifdef GL_ARB_robustness

#define GL_NO_ERROR 0
#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GL_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define GL_GUILTY_CONTEXT_RESET_ARB 0x8253
#define GL_INNOCENT_CONTEXT_RESET_ARB 0x8254
#define GL_UNKNOWN_CONTEXT_RESET_ARB 0x8255
#define GL_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GL_NO_RESET_NOTIFICATION_ARB 0x8261

#endif

#ifdef GL_ARB_sampler_objects

#define GL_SAMPLER_BINDING 0x8919

#endif

#ifdef GL_ARB_sample_shading

#define GL_SAMPLE_SHADING_ARB 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE_ARB 0x8C37

#endif

#ifdef GL_ARB_seamless_cubemap_per_texture


#endif

#ifdef GL_ARB_seamless_cube_map


#endif

#ifdef GL_ARB_separate_shader_objects

#define GL_VERTEX_SHADER_BIT 0x00000001
#define GL_FRAGMENT_SHADER_BIT 0x00000002
#define GL_GEOMETRY_SHADER_BIT 0x00000004
#define GL_TESS_CONTROL_SHADER_BIT 0x00000008
#define GL_TESS_EVALUATION_SHADER_BIT 0x00000010
#define GL_ALL_SHADER_BITS 0xFFFFFFFF
#define GL_PROGRAM_SEPARABLE 0x8258
#define GL_ACTIVE_PROGRAM 0x8259
#define GL_PROGRAM_PIPELINE_BINDING 0x825A

#endif

#ifdef GL_ARB_shader_atomic_counters

#define GL_ATOMIC_COUNTER_BUFFER_BINDING 0x92C1
#define GL_ATOMIC_COUNTER_BUFFER_START 0x92C2
#define GL_ATOMIC_COUNTER_BUFFER_SIZE 0x92C3
#define GL_ATOMIC_COUNTER_BUFFER_DATA_SIZE 0x92C4
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTERS 0x92C5
#define GL_ATOMIC_COUNTER_BUFFER_ACTIVE_ATOMIC_COUNTER_INDICES 0x92C6
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_VERTEX_SHADER 0x92C7
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_CONTROL_SHADER 0x92C8
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_TESS_EVALUATION_SHADER 0x92C9
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_GEOMETRY_SHADER 0x92CA
#define GL_ATOMIC_COUNTER_BUFFER_REFERENCED_BY_FRAGMENT_SHADER 0x92CB
#define GL_MAX_VERTEX_ATOMIC_COUNTER_BUFFERS 0x92CC
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTER_BUFFERS 0x92CD
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTER_BUFFERS 0x92CE
#define GL_MAX_GEOMETRY_ATOMIC_COUNTER_BUFFERS 0x92CF
#define GL_MAX_FRAGMENT_ATOMIC_COUNTER_BUFFERS 0x92D0
#define GL_MAX_COMBINED_ATOMIC_COUNTER_BUFFERS 0x92D1
#define GL_MAX_VERTEX_ATOMIC_COUNTERS 0x92D2
#define GL_MAX_TESS_CONTROL_ATOMIC_COUNTERS 0x92D3
#define GL_MAX_TESS_EVALUATION_ATOMIC_COUNTERS 0x92D4
#define GL_MAX_GEOMETRY_ATOMIC_COUNTERS 0x92D5
#define GL_MAX_FRAGMENT_ATOMIC_COUNTERS 0x92D6
#define GL_MAX_COMBINED_ATOMIC_COUNTERS 0x92D7
#define GL_MAX_ATOMIC_COUNTER_BUFFER_SIZE 0x92D8
#define GL_MAX_ATOMIC_COUNTER_BUFFER_BINDINGS 0x92DC
#define GL_ACTIVE_ATOMIC_COUNTER_BUFFERS 0x92D9
#define GL_UNIFORM_ATOMIC_COUNTER_BUFFER_INDEX 0x92DA
#define GL_UNSIGNED_INT_ATOMIC_COUNTER 0x92DB

#endif

#ifdef GL_ARB_shader_image_load_store

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
#define GL_MAX_IMAGE_UNITS 0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS 0x8F39
#define GL_IMAGE_BINDING_NAME 0x8F3A
#define GL_IMAGE_BINDING_LEVEL 0x8F3B
#define GL_IMAGE_BINDING_LAYERED 0x8F3C
#define GL_IMAGE_BINDING_LAYER 0x8F3D
#define GL_IMAGE_BINDING_ACCESS 0x8F3E
#define GL_IMAGE_1D 0x904C
#define GL_IMAGE_2D 0x904D
#define GL_IMAGE_3D 0x904E
#define GL_IMAGE_2D_RECT 0x904F
#define GL_IMAGE_CUBE 0x9050
#define GL_IMAGE_BUFFER 0x9051
#define GL_IMAGE_1D_ARRAY 0x9052
#define GL_IMAGE_2D_ARRAY 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY 0x9054
#define GL_IMAGE_2D_MULTISAMPLE 0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY 0x9056
#define GL_INT_IMAGE_1D 0x9057
#define GL_INT_IMAGE_2D 0x9058
#define GL_INT_IMAGE_3D 0x9059
#define GL_INT_IMAGE_2D_RECT 0x905A
#define GL_INT_IMAGE_CUBE 0x905B
#define GL_INT_IMAGE_BUFFER 0x905C
#define GL_INT_IMAGE_1D_ARRAY 0x905D
#define GL_INT_IMAGE_2D_ARRAY 0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY 0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE 0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D 0x9062
#define GL_UNSIGNED_INT_IMAGE_2D 0x9063
#define GL_UNSIGNED_INT_IMAGE_3D 0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT 0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE 0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER 0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY 0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY 0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY 0x906C
#define GL_MAX_IMAGE_SAMPLES 0x906D
#define GL_IMAGE_BINDING_FORMAT 0x906E
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_SIZE 0x90C8
#define GL_IMAGE_FORMAT_COMPATIBILITY_BY_CLASS 0x90C9
#define GL_MAX_VERTEX_IMAGE_UNIFORMS 0x90CA
#define GL_MAX_TESS_CONTROL_IMAGE_UNIFORMS 0x90CB
#define GL_MAX_TESS_EVALUATION_IMAGE_UNIFORMS 0x90CC
#define GL_MAX_GEOMETRY_IMAGE_UNIFORMS 0x90CD
#define GL_MAX_FRAGMENT_IMAGE_UNIFORMS 0x90CE
#define GL_MAX_COMBINED_IMAGE_UNIFORMS 0x90CF

#endif

#ifdef GL_ARB_shader_objects

#define GL_PROGRAM_OBJECT_ARB 0x8B40
#define GL_SHADER_OBJECT_ARB 0x8B48
#define GL_OBJECT_TYPE_ARB 0x8B4E
#define GL_OBJECT_SUBTYPE_ARB 0x8B4F
#define GL_FLOAT_VEC2_ARB 0x8B50
#define GL_FLOAT_VEC3_ARB 0x8B51
#define GL_FLOAT_VEC4_ARB 0x8B52
#define GL_INT_VEC2_ARB 0x8B53
#define GL_INT_VEC3_ARB 0x8B54
#define GL_INT_VEC4_ARB 0x8B55
#define GL_BOOL_ARB 0x8B56
#define GL_BOOL_VEC2_ARB 0x8B57
#define GL_BOOL_VEC3_ARB 0x8B58
#define GL_BOOL_VEC4_ARB 0x8B59
#define GL_FLOAT_MAT2_ARB 0x8B5A
#define GL_FLOAT_MAT3_ARB 0x8B5B
#define GL_FLOAT_MAT4_ARB 0x8B5C
#define GL_SAMPLER_1D_ARB 0x8B5D
#define GL_SAMPLER_2D_ARB 0x8B5E
#define GL_SAMPLER_3D_ARB 0x8B5F
#define GL_SAMPLER_CUBE_ARB 0x8B60
#define GL_SAMPLER_1D_SHADOW_ARB 0x8B61
#define GL_SAMPLER_2D_SHADOW_ARB 0x8B62
#define GL_SAMPLER_2D_RECT_ARB 0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW_ARB 0x8B64
#define GL_OBJECT_DELETE_STATUS_ARB 0x8B80
#define GL_OBJECT_COMPILE_STATUS_ARB 0x8B81
#define GL_OBJECT_LINK_STATUS_ARB 0x8B82
#define GL_OBJECT_VALIDATE_STATUS_ARB 0x8B83
#define GL_OBJECT_INFO_LOG_LENGTH_ARB 0x8B84
#define GL_OBJECT_ATTACHED_OBJECTS_ARB 0x8B85
#define GL_OBJECT_ACTIVE_UNIFORMS_ARB 0x8B86
#define GL_OBJECT_ACTIVE_UNIFORM_MAX_LENGTH_ARB 0x8B87
#define GL_OBJECT_SHADER_SOURCE_LENGTH_ARB 0x8B88

#endif

#ifdef GL_ARB_shader_storage_buffer_object

#define GL_SHADER_STORAGE_BUFFER 0x90D2
#define GL_SHADER_STORAGE_BUFFER_BINDING 0x90D3
#define GL_SHADER_STORAGE_BUFFER_START 0x90D4
#define GL_SHADER_STORAGE_BUFFER_SIZE 0x90D5
#define GL_MAX_VERTEX_SHADER_STORAGE_BLOCKS 0x90D6
#define GL_MAX_GEOMETRY_SHADER_STORAGE_BLOCKS 0x90D7
#define GL_MAX_TESS_CONTROL_SHADER_STORAGE_BLOCKS 0x90D8
#define GL_MAX_TESS_EVALUATION_SHADER_STORAGE_BLOCKS 0x90D9
#define GL_MAX_FRAGMENT_SHADER_STORAGE_BLOCKS 0x90DA
#define GL_MAX_COMPUTE_SHADER_STORAGE_BLOCKS 0x90DB
#define GL_MAX_COMBINED_SHADER_STORAGE_BLOCKS 0x90DC
#define GL_MAX_SHADER_STORAGE_BUFFER_BINDINGS 0x90DD
#define GL_MAX_SHADER_STORAGE_BLOCK_SIZE 0x90DE
#define GL_SHADER_STORAGE_BUFFER_OFFSET_ALIGNMENT 0x90DF
#define GL_SHADER_STORAGE_BARRIER_BIT 0x2000
#define GL_MAX_COMBINED_SHADER_OUTPUT_RESOURCES GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS

#endif

#ifdef GL_ARB_shader_subroutine

#define GL_ACTIVE_SUBROUTINES 0x8DE5
#define GL_ACTIVE_SUBROUTINE_UNIFORMS 0x8DE6
#define GL_ACTIVE_SUBROUTINE_UNIFORM_LOCATIONS 0x8E47
#define GL_ACTIVE_SUBROUTINE_MAX_LENGTH 0x8E48
#define GL_ACTIVE_SUBROUTINE_UNIFORM_MAX_LENGTH 0x8E49
#define GL_MAX_SUBROUTINES 0x8DE7
#define GL_MAX_SUBROUTINE_UNIFORM_LOCATIONS 0x8DE8
#define GL_UNIFORM_SIZE 0x8A38
#define GL_UNIFORM_NAME_LENGTH 0x8A39

#endif

#ifdef GL_ARB_shading_language_100

#define GL_SHADING_LANGUAGE_VERSION_ARB 0x8B8C

#endif

#ifdef GL_ARB_shading_language_include

#define GL_SHADER_INCLUDE_ARB 0x8DAE
#define GL_NAMED_STRING_LENGTH_ARB 0x8DE9
#define GL_NAMED_STRING_TYPE_ARB 0x8DEA

#endif

#ifdef GL_ARB_shadow

#define GL_TEXTURE_COMPARE_MODE_ARB 0x884C
#define GL_TEXTURE_COMPARE_FUNC_ARB 0x884D
#define GL_COMPARE_R_TO_TEXTURE_ARB 0x884E

#endif

#ifdef GL_ARB_shadow_ambient

#define GL_TEXTURE_COMPARE_FAIL_VALUE_ARB 0x80BF

#endif

#ifdef GL_ARB_sparse_buffer

#define GL_SPARSE_STORAGE_BIT_ARB 0x0400
#define GL_SPARSE_BUFFER_PAGE_SIZE_ARB 0x82F8

#endif

#ifdef GL_ARB_sparse_texture

#define GL_TEXTURE_SPARSE_ARB 0x91A6
#define GL_VIRTUAL_PAGE_SIZE_INDEX_ARB 0x91A7
#define GL_NUM_SPARSE_LEVELS_ARB 0x91AA
#define GL_NUM_VIRTUAL_PAGE_SIZES_ARB 0x91A8
#define GL_VIRTUAL_PAGE_SIZE_X_ARB 0x9195
#define GL_VIRTUAL_PAGE_SIZE_Y_ARB 0x9196
#define GL_VIRTUAL_PAGE_SIZE_Z_ARB 0x9197
#define GL_MAX_SPARSE_TEXTURE_SIZE_ARB 0x9198
#define GL_MAX_SPARSE_3D_TEXTURE_SIZE_ARB 0x9199
#define GL_MAX_SPARSE_ARRAY_TEXTURE_LAYERS_ARB 0x919A
#define GL_SPARSE_TEXTURE_FULL_ARRAY_CUBE_MIPMAPS_ARB 0x91A9

#endif

#ifdef GL_ARB_stencil_texturing

#define GL_DEPTH_STENCIL_TEXTURE_MODE 0x90EA

#endif

#ifdef GL_ARB_sync

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

#endif

#ifdef GL_ARB_tessellation_shader

#define GL_PATCHES 0x000E
#define GL_PATCH_VERTICES 0x8E72
#define GL_PATCH_DEFAULT_INNER_LEVEL 0x8E73
#define GL_PATCH_DEFAULT_OUTER_LEVEL 0x8E74
#define GL_TESS_CONTROL_OUTPUT_VERTICES 0x8E75
#define GL_TESS_GEN_MODE 0x8E76
#define GL_TESS_GEN_SPACING 0x8E77
#define GL_TESS_GEN_VERTEX_ORDER 0x8E78
#define GL_TESS_GEN_POINT_MODE 0x8E79
#define GL_TRIANGLES 0x0004
#define GL_QUADS 0x0007
#define GL_ISOLINES 0x8E7A
#define GL_EQUAL 0x0202
#define GL_FRACTIONAL_ODD 0x8E7B
#define GL_FRACTIONAL_EVEN 0x8E7C
#define GL_CCW 0x0901
#define GL_CW 0x0900
#define GL_MAX_PATCH_VERTICES 0x8E7D
#define GL_MAX_TESS_GEN_LEVEL 0x8E7E
#define GL_MAX_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E7F
#define GL_MAX_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E80
#define GL_MAX_TESS_CONTROL_TEXTURE_IMAGE_UNITS 0x8E81
#define GL_MAX_TESS_EVALUATION_TEXTURE_IMAGE_UNITS 0x8E82
#define GL_MAX_TESS_CONTROL_OUTPUT_COMPONENTS 0x8E83
#define GL_MAX_TESS_PATCH_COMPONENTS 0x8E84
#define GL_MAX_TESS_CONTROL_TOTAL_OUTPUT_COMPONENTS 0x8E85
#define GL_MAX_TESS_EVALUATION_OUTPUT_COMPONENTS 0x8E86
#define GL_MAX_TESS_CONTROL_UNIFORM_BLOCKS 0x8E89
#define GL_MAX_TESS_EVALUATION_UNIFORM_BLOCKS 0x8E8A
#define GL_MAX_TESS_CONTROL_INPUT_COMPONENTS 0x886C
#define GL_MAX_TESS_EVALUATION_INPUT_COMPONENTS 0x886D
#define GL_MAX_COMBINED_TESS_CONTROL_UNIFORM_COMPONENTS 0x8E1E
#define GL_MAX_COMBINED_TESS_EVALUATION_UNIFORM_COMPONENTS 0x8E1F
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_CONTROL_SHADER 0x84F0
#define GL_UNIFORM_BLOCK_REFERENCED_BY_TESS_EVALUATION_SHADER 0x84F1
#define GL_TESS_EVALUATION_SHADER 0x8E87
#define GL_TESS_CONTROL_SHADER 0x8E88

#endif

#ifdef GL_ARB_texture_border_clamp

#define GL_CLAMP_TO_BORDER_ARB 0x812D

#endif

#ifdef GL_ARB_texture_buffer_object

#define GL_TEXTURE_BUFFER_ARB 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_ARB 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_ARB 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_ARB 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_ARB 0x8C2E

#endif

#ifdef GL_ARB_texture_buffer_object_rgb32

#define GL_RGB32F 0x8815
#define GL_RGB32UI 0x8D71
#define GL_RGB32I 0x8D83

#endif

#ifdef GL_ARB_texture_buffer_range

#define GL_TEXTURE_BUFFER_OFFSET 0x919D
#define GL_TEXTURE_BUFFER_SIZE 0x919E
#define GL_TEXTURE_BUFFER_OFFSET_ALIGNMENT 0x919F

#endif

#ifdef GL_ARB_texture_compression

#define GL_COMPRESSED_ALPHA_ARB 0x84E9
#define GL_COMPRESSED_LUMINANCE_ARB 0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA_ARB 0x84EB
#define GL_COMPRESSED_INTENSITY_ARB 0x84EC
#define GL_COMPRESSED_RGB_ARB 0x84ED
#define GL_COMPRESSED_RGBA_ARB 0x84EE
#define GL_TEXTURE_COMPRESSION_HINT_ARB 0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE_ARB 0x86A0
#define GL_TEXTURE_COMPRESSED_ARB 0x86A1
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS_ARB 0x86A3

#endif

#ifdef GL_ARB_texture_compression_bptc

#define GL_COMPRESSED_RGBA_BPTC_UNORM_ARB 0x8E8C
#define GL_COMPRESSED_SRGB_ALPHA_BPTC_UNORM_ARB 0x8E8D
#define GL_COMPRESSED_RGB_BPTC_SIGNED_FLOAT_ARB 0x8E8E
#define GL_COMPRESSED_RGB_BPTC_UNSIGNED_FLOAT_ARB 0x8E8F

#endif

#ifdef GL_ARB_texture_compression_rgtc

#define GL_COMPRESSED_RED_RGTC1 0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1 0x8DBC
#define GL_COMPRESSED_RG_RGTC2 0x8DBD
#define GL_COMPRESSED_SIGNED_RG_RGTC2 0x8DBE

#endif

#ifdef GL_ARB_texture_cube_map

#define GL_NORMAL_MAP_ARB 0x8511
#define GL_REFLECTION_MAP_ARB 0x8512
#define GL_TEXTURE_CUBE_MAP_ARB 0x8513
#define GL_TEXTURE_BINDING_CUBE_MAP_ARB 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARB 0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE_ARB 0x851C

#endif

#ifdef GL_ARB_texture_cube_map_array

#define GL_TEXTURE_CUBE_MAP_ARRAY_ARB 0x9009
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY_ARB 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY_ARB 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW_ARB 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY_ARB 0x900F

#endif

#ifdef GL_ARB_texture_env_combine

#define GL_COMBINE_ARB 0x8570
#define GL_COMBINE_RGB_ARB 0x8571
#define GL_COMBINE_ALPHA_ARB 0x8572
#define GL_SOURCE0_RGB_ARB 0x8580
#define GL_SOURCE1_RGB_ARB 0x8581
#define GL_SOURCE2_RGB_ARB 0x8582
#define GL_SOURCE0_ALPHA_ARB 0x8588
#define GL_SOURCE1_ALPHA_ARB 0x8589
#define GL_SOURCE2_ALPHA_ARB 0x858A
#define GL_OPERAND0_RGB_ARB 0x8590
#define GL_OPERAND1_RGB_ARB 0x8591
#define GL_OPERAND2_RGB_ARB 0x8592
#define GL_OPERAND0_ALPHA_ARB 0x8598
#define GL_OPERAND1_ALPHA_ARB 0x8599
#define GL_OPERAND2_ALPHA_ARB 0x859A
#define GL_RGB_SCALE_ARB 0x8573
#define GL_ADD_SIGNED_ARB 0x8574
#define GL_INTERPOLATE_ARB 0x8575
#define GL_SUBTRACT_ARB 0x84E7
#define GL_CONSTANT_ARB 0x8576
#define GL_PRIMARY_COLOR_ARB 0x8577
#define GL_PREVIOUS_ARB 0x8578

#endif

#ifdef GL_ARB_texture_env_dot3

#define GL_DOT3_RGB_ARB 0x86AE
#define GL_DOT3_RGBA_ARB 0x86AF

#endif

#ifdef GL_ARB_texture_float

#define GL_TEXTURE_RED_TYPE_ARB 0x8C10
#define GL_TEXTURE_GREEN_TYPE_ARB 0x8C11
#define GL_TEXTURE_BLUE_TYPE_ARB 0x8C12
#define GL_TEXTURE_ALPHA_TYPE_ARB 0x8C13
#define GL_TEXTURE_LUMINANCE_TYPE_ARB 0x8C14
#define GL_TEXTURE_INTENSITY_TYPE_ARB 0x8C15
#define GL_TEXTURE_DEPTH_TYPE_ARB 0x8C16
#define GL_UNSIGNED_NORMALIZED_ARB 0x8C17
#define GL_RGBA32F_ARB 0x8814
#define GL_RGB32F_ARB 0x8815
#define GL_ALPHA32F_ARB 0x8816
#define GL_INTENSITY32F_ARB 0x8817
#define GL_LUMINANCE32F_ARB 0x8818
#define GL_LUMINANCE_ALPHA32F_ARB 0x8819
#define GL_RGBA16F_ARB 0x881A
#define GL_RGB16F_ARB 0x881B
#define GL_ALPHA16F_ARB 0x881C
#define GL_INTENSITY16F_ARB 0x881D
#define GL_LUMINANCE16F_ARB 0x881E
#define GL_LUMINANCE_ALPHA16F_ARB 0x881F

#endif

#ifdef GL_ARB_texture_gather

#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_ARB 0x8E5F

#endif

#ifdef GL_ARB_texture_mirrored_repeat

#define GL_MIRRORED_REPEAT_ARB 0x8370

#endif

#ifdef GL_ARB_texture_mirror_clamp_to_edge

#define GL_MIRROR_CLAMP_TO_EDGE 0x8743

#endif

#ifdef GL_ARB_texture_multisample

#define GL_SAMPLE_POSITION 0x8E50
#define GL_SAMPLE_MASK 0x8E51
#define GL_SAMPLE_MASK_VALUE 0x8E52
#define GL_MAX_SAMPLE_MASK_WORDS 0x8E59
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE 0x9101
#define GL_PROXY_TEXTURE_2D_MULTISAMPLE_ARRAY 0x9103
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE 0x9104
#define GL_TEXTURE_BINDING_2D_MULTISAMPLE_ARRAY 0x9105
#define GL_TEXTURE_SAMPLES 0x9106
#define GL_TEXTURE_FIXED_SAMPLE_LOCATIONS 0x9107
#define GL_SAMPLER_2D_MULTISAMPLE 0x9108
#define GL_INT_SAMPLER_2D_MULTISAMPLE 0x9109
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE 0x910A
#define GL_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910B
#define GL_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910C
#define GL_UNSIGNED_INT_SAMPLER_2D_MULTISAMPLE_ARRAY 0x910D
#define GL_MAX_COLOR_TEXTURE_SAMPLES 0x910E
#define GL_MAX_DEPTH_TEXTURE_SAMPLES 0x910F
#define GL_MAX_INTEGER_SAMPLES 0x9110

#endif

#ifdef GL_ARB_texture_rectangle

#define GL_TEXTURE_RECTANGLE_ARB 0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_ARB 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_ARB 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_ARB 0x84F8

#endif

#ifdef GL_ARB_texture_rg

#define GL_RG 0x8227
#define GL_RG_INTEGER 0x8228
#define GL_R8 0x8229
#define GL_R16 0x822A
#define GL_RG8 0x822B
#define GL_RG16 0x822C
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
#define GL_RG16I 0x8239
#define GL_RG32I 0x823B
#define GL_RG32UI 0x823C

#endif

#ifdef GL_ARB_texture_rgb10_a2ui

#define GL_RGB10_A2UI 0x906F

#endif

#ifdef GL_ARB_texture_stencil8

#define GL_STENCIL_INDEX 0x1901

#endif

#ifdef GL_ARB_texture_storage

#define GL_TEXTURE_IMMUTABLE_FORMAT 0x912F

#endif

#ifdef GL_ARB_texture_swizzle

#define GL_TEXTURE_SWIZZLE_R 0x8E42
#define GL_TEXTURE_SWIZZLE_G 0x8E43
#define GL_TEXTURE_SWIZZLE_B 0x8E44
#define GL_TEXTURE_SWIZZLE_A 0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA 0x8E46

#endif

#ifdef GL_ARB_texture_view

#define GL_TEXTURE_VIEW_MIN_LEVEL 0x82DB
#define GL_TEXTURE_VIEW_NUM_LEVELS 0x82DC
#define GL_TEXTURE_VIEW_MIN_LAYER 0x82DD
#define GL_TEXTURE_VIEW_NUM_LAYERS 0x82DE
#define GL_TEXTURE_IMMUTABLE_LEVELS 0x82DF

#endif

#ifdef GL_ARB_timer_query

#define GL_TIME_ELAPSED 0x88BF
#define GL_TIMESTAMP 0x8E28

#endif

#ifdef GL_ARB_transform_feedback2

#define GL_TRANSFORM_FEEDBACK 0x8E22
#define GL_TRANSFORM_FEEDBACK_PAUSED 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED GL_TRANSFORM_FEEDBACK_PAUSED
#define GL_TRANSFORM_FEEDBACK_ACTIVE 0x8E24
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE GL_TRANSFORM_FEEDBACK_ACTIVE
#define GL_TRANSFORM_FEEDBACK_BINDING 0x8E25

#endif

#ifdef GL_ARB_transform_feedback3

#define GL_MAX_TRANSFORM_FEEDBACK_BUFFERS 0x8E70

#endif

#ifdef GL_ARB_transform_feedback_overflow_query

#define GL_TRANSFORM_FEEDBACK_OVERFLOW_ARB 0x82EC
#define GL_TRANSFORM_FEEDBACK_STREAM_OVERFLOW_ARB 0x82ED

#endif

#ifdef GL_ARB_transpose_matrix

#define GL_TRANSPOSE_MODELVIEW_MATRIX_ARB 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX_ARB 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX_ARB 0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX_ARB 0x84E6

#endif

#ifdef GL_ARB_uniform_buffer_object

#define GL_UNIFORM_BUFFER 0x8A11
#define GL_UNIFORM_BUFFER_BINDING 0x8A28
#define GL_UNIFORM_BUFFER_START 0x8A29
#define GL_UNIFORM_BUFFER_SIZE 0x8A2A
#define GL_MAX_VERTEX_UNIFORM_BLOCKS 0x8A2B
#define GL_MAX_GEOMETRY_UNIFORM_BLOCKS 0x8A2C
#define GL_MAX_FRAGMENT_UNIFORM_BLOCKS 0x8A2D
#define GL_MAX_COMBINED_UNIFORM_BLOCKS 0x8A2E
#define GL_MAX_UNIFORM_BUFFER_BINDINGS 0x8A2F
#define GL_MAX_UNIFORM_BLOCK_SIZE 0x8A30
#define GL_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS 0x8A31
#define GL_MAX_COMBINED_GEOMETRY_UNIFORM_COMPONENTS 0x8A32
#define GL_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS 0x8A33
#define GL_UNIFORM_BUFFER_OFFSET_ALIGNMENT 0x8A34
#define GL_ACTIVE_UNIFORM_BLOCK_MAX_NAME_LENGTH 0x8A35
#define GL_ACTIVE_UNIFORM_BLOCKS 0x8A36
#define GL_UNIFORM_TYPE 0x8A37
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
#define GL_UNIFORM_BLOCK_REFERENCED_BY_GEOMETRY_SHADER 0x8A45
#define GL_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER 0x8A46
#define GL_INVALID_INDEX 0xFFFFFFFFu

#endif

#ifdef GL_ARB_vertex_array_bgra

#define GL_BGRA 0x80E1

#endif

#ifdef GL_ARB_vertex_array_object

#define GL_VERTEX_ARRAY_BINDING 0x85B5

#endif

#ifdef GL_ARB_vertex_attrib_64bit


#endif

#ifdef GL_ARB_vertex_attrib_binding

#define GL_VERTEX_ATTRIB_BINDING 0x82D4
#define GL_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D5
#define GL_VERTEX_BINDING_DIVISOR 0x82D6
#define GL_VERTEX_BINDING_OFFSET 0x82D7
#define GL_VERTEX_BINDING_STRIDE 0x82D8
#define GL_VERTEX_BINDING_BUFFER 0x8F4F
#define GL_MAX_VERTEX_ATTRIB_RELATIVE_OFFSET 0x82D9
#define GL_MAX_VERTEX_ATTRIB_BINDINGS 0x82DA

#endif

#ifdef GL_ARB_vertex_blend

#define GL_MAX_VERTEX_UNITS_ARB 0x86A4
#define GL_ACTIVE_VERTEX_UNITS_ARB 0x86A5
#define GL_WEIGHT_SUM_UNITY_ARB 0x86A6
#define GL_VERTEX_BLEND_ARB 0x86A7
#define GL_CURRENT_WEIGHT_ARB 0x86A8
#define GL_WEIGHT_ARRAY_TYPE_ARB 0x86A9
#define GL_WEIGHT_ARRAY_STRIDE_ARB 0x86AA
#define GL_WEIGHT_ARRAY_SIZE_ARB 0x86AB
#define GL_WEIGHT_ARRAY_POINTER_ARB 0x86AC
#define GL_WEIGHT_ARRAY_ARB 0x86AD
#define GL_MODELVIEW0_ARB 0x1700
#define GL_MODELVIEW1_ARB 0x850A
#define GL_MODELVIEW2_ARB 0x8722
#define GL_MODELVIEW3_ARB 0x8723
#define GL_MODELVIEW4_ARB 0x8724
#define GL_MODELVIEW5_ARB 0x8725
#define GL_MODELVIEW6_ARB 0x8726
#define GL_MODELVIEW7_ARB 0x8727
#define GL_MODELVIEW8_ARB 0x8728
#define GL_MODELVIEW9_ARB 0x8729
#define GL_MODELVIEW10_ARB 0x872A
#define GL_MODELVIEW11_ARB 0x872B
#define GL_MODELVIEW12_ARB 0x872C
#define GL_MODELVIEW13_ARB 0x872D
#define GL_MODELVIEW14_ARB 0x872E
#define GL_MODELVIEW15_ARB 0x872F
#define GL_MODELVIEW16_ARB 0x8730
#define GL_MODELVIEW17_ARB 0x8731
#define GL_MODELVIEW18_ARB 0x8732
#define GL_MODELVIEW19_ARB 0x8733
#define GL_MODELVIEW20_ARB 0x8734
#define GL_MODELVIEW21_ARB 0x8735
#define GL_MODELVIEW22_ARB 0x8736
#define GL_MODELVIEW23_ARB 0x8737
#define GL_MODELVIEW24_ARB 0x8738
#define GL_MODELVIEW25_ARB 0x8739
#define GL_MODELVIEW26_ARB 0x873A
#define GL_MODELVIEW27_ARB 0x873B
#define GL_MODELVIEW28_ARB 0x873C
#define GL_MODELVIEW29_ARB 0x873D
#define GL_MODELVIEW30_ARB 0x873E
#define GL_MODELVIEW31_ARB 0x873F

#endif

#ifdef GL_ARB_vertex_buffer_object

#define GL_BUFFER_SIZE_ARB 0x8764
#define GL_BUFFER_USAGE_ARB 0x8765
#define GL_ARRAY_BUFFER_ARB 0x8892
#define GL_ELEMENT_ARRAY_BUFFER_ARB 0x8893
#define GL_ARRAY_BUFFER_BINDING_ARB 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING_ARB 0x8895
#define GL_VERTEX_ARRAY_BUFFER_BINDING_ARB 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING_ARB 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING_ARB 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING_ARB 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING_ARB 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING_ARB 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING_ARB 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING_ARB 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING_ARB 0x889E
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_ARB 0x889F
#define GL_READ_ONLY_ARB 0x88B8
#define GL_WRITE_ONLY_ARB 0x88B9
#define GL_READ_WRITE_ARB 0x88BA
#define GL_BUFFER_ACCESS_ARB 0x88BB
#define GL_BUFFER_MAPPED_ARB 0x88BC
#define GL_BUFFER_MAP_POINTER_ARB 0x88BD
#define GL_STREAM_DRAW_ARB 0x88E0
#define GL_STREAM_READ_ARB 0x88E1
#define GL_STREAM_COPY_ARB 0x88E2
#define GL_STATIC_DRAW_ARB 0x88E4
#define GL_STATIC_READ_ARB 0x88E5
#define GL_STATIC_COPY_ARB 0x88E6
#define GL_DYNAMIC_DRAW_ARB 0x88E8
#define GL_DYNAMIC_READ_ARB 0x88E9
#define GL_DYNAMIC_COPY_ARB 0x88EA

#endif

#ifdef GL_ARB_vertex_program

#define GL_COLOR_SUM_ARB 0x8458
#define GL_VERTEX_PROGRAM_ARB 0x8620
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED_ARB 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE_ARB 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE_ARB 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE_ARB 0x8625
#define GL_CURRENT_VERTEX_ATTRIB_ARB 0x8626
#define GL_PROGRAM_LENGTH_ARB 0x8627
#define GL_PROGRAM_STRING_ARB 0x8628
#define GL_MAX_PROGRAM_MATRIX_STACK_DEPTH_ARB 0x862E
#define GL_MAX_PROGRAM_MATRICES_ARB 0x862F
#define GL_CURRENT_MATRIX_STACK_DEPTH_ARB 0x8640
#define GL_CURRENT_MATRIX_ARB 0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_ARB 0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_ARB 0x8643
#define GL_VERTEX_ATTRIB_ARRAY_POINTER_ARB 0x8645
#define GL_PROGRAM_ERROR_POSITION_ARB 0x864B
#define GL_PROGRAM_BINDING_ARB 0x8677
#define GL_MAX_VERTEX_ATTRIBS_ARB 0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED_ARB 0x886A
#define GL_PROGRAM_ERROR_STRING_ARB 0x8874
#define GL_PROGRAM_FORMAT_ASCII_ARB 0x8875
#define GL_PROGRAM_FORMAT_ARB 0x8876
#define GL_PROGRAM_INSTRUCTIONS_ARB 0x88A0
#define GL_MAX_PROGRAM_INSTRUCTIONS_ARB 0x88A1
#define GL_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A2
#define GL_MAX_PROGRAM_NATIVE_INSTRUCTIONS_ARB 0x88A3
#define GL_PROGRAM_TEMPORARIES_ARB 0x88A4
#define GL_MAX_PROGRAM_TEMPORARIES_ARB 0x88A5
#define GL_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A6
#define GL_MAX_PROGRAM_NATIVE_TEMPORARIES_ARB 0x88A7
#define GL_PROGRAM_PARAMETERS_ARB 0x88A8
#define GL_MAX_PROGRAM_PARAMETERS_ARB 0x88A9
#define GL_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AA
#define GL_MAX_PROGRAM_NATIVE_PARAMETERS_ARB 0x88AB
#define GL_PROGRAM_ATTRIBS_ARB 0x88AC
#define GL_MAX_PROGRAM_ATTRIBS_ARB 0x88AD
#define GL_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AE
#define GL_MAX_PROGRAM_NATIVE_ATTRIBS_ARB 0x88AF
#define GL_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B0
#define GL_MAX_PROGRAM_ADDRESS_REGISTERS_ARB 0x88B1
#define GL_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B2
#define GL_MAX_PROGRAM_NATIVE_ADDRESS_REGISTERS_ARB 0x88B3
#define GL_MAX_PROGRAM_LOCAL_PARAMETERS_ARB 0x88B4
#define GL_MAX_PROGRAM_ENV_PARAMETERS_ARB 0x88B5
#define GL_PROGRAM_UNDER_NATIVE_LIMITS_ARB 0x88B6
#define GL_TRANSPOSE_CURRENT_MATRIX_ARB 0x88B7
#define GL_MATRIX0_ARB 0x88C0
#define GL_MATRIX1_ARB 0x88C1
#define GL_MATRIX2_ARB 0x88C2
#define GL_MATRIX3_ARB 0x88C3
#define GL_MATRIX4_ARB 0x88C4
#define GL_MATRIX5_ARB 0x88C5
#define GL_MATRIX6_ARB 0x88C6
#define GL_MATRIX7_ARB 0x88C7
#define GL_MATRIX8_ARB 0x88C8
#define GL_MATRIX9_ARB 0x88C9
#define GL_MATRIX10_ARB 0x88CA
#define GL_MATRIX11_ARB 0x88CB
#define GL_MATRIX12_ARB 0x88CC
#define GL_MATRIX13_ARB 0x88CD
#define GL_MATRIX14_ARB 0x88CE
#define GL_MATRIX15_ARB 0x88CF
#define GL_MATRIX16_ARB 0x88D0
#define GL_MATRIX17_ARB 0x88D1
#define GL_MATRIX18_ARB 0x88D2
#define GL_MATRIX19_ARB 0x88D3
#define GL_MATRIX20_ARB 0x88D4
#define GL_MATRIX21_ARB 0x88D5
#define GL_MATRIX22_ARB 0x88D6
#define GL_MATRIX23_ARB 0x88D7
#define GL_MATRIX24_ARB 0x88D8
#define GL_MATRIX25_ARB 0x88D9
#define GL_MATRIX26_ARB 0x88DA
#define GL_MATRIX27_ARB 0x88DB
#define GL_MATRIX28_ARB 0x88DC
#define GL_MATRIX29_ARB 0x88DD
#define GL_MATRIX30_ARB 0x88DE
#define GL_MATRIX31_ARB 0x88DF

#endif

#ifdef GL_ARB_vertex_shader

#define GL_VERTEX_SHADER_ARB 0x8B31
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS_ARB 0x8B4A
#define GL_MAX_VARYING_FLOATS_ARB 0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS_ARB 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS_ARB 0x8B4D
#define GL_OBJECT_ACTIVE_ATTRIBUTES_ARB 0x8B89
#define GL_OBJECT_ACTIVE_ATTRIBUTE_MAX_LENGTH_ARB 0x8B8A

#endif

#ifdef GL_ARB_vertex_type_10f_11f_11f_rev

#define GL_UNSIGNED_INT_10F_11F_11F_REV 0x8C3B

#endif

#ifdef GL_ARB_vertex_type_2_10_10_10_rev

#define GL_UNSIGNED_INT_2_10_10_10_REV 0x8368
#define GL_INT_2_10_10_10_REV 0x8D9F

#endif

#ifdef GL_ARB_viewport_array

#define GL_SCISSOR_BOX 0x0C10
#define GL_VIEWPORT 0x0BA2
#define GL_DEPTH_RANGE 0x0B70
#define GL_SCISSOR_TEST 0x0C11
#define GL_MAX_VIEWPORTS 0x825B
#define GL_VIEWPORT_SUBPIXEL_BITS 0x825C
#define GL_VIEWPORT_BOUNDS_RANGE 0x825D
#define GL_LAYER_PROVOKING_VERTEX 0x825E
#define GL_VIEWPORT_INDEX_PROVOKING_VERTEX 0x825F
#define GL_UNDEFINED_VERTEX 0x8260

#endif

#ifdef GL_ATI_draw_buffers

#define GL_MAX_DRAW_BUFFERS_ATI 0x8824
#define GL_DRAW_BUFFER0_ATI 0x8825
#define GL_DRAW_BUFFER1_ATI 0x8826
#define GL_DRAW_BUFFER2_ATI 0x8827
#define GL_DRAW_BUFFER3_ATI 0x8828
#define GL_DRAW_BUFFER4_ATI 0x8829
#define GL_DRAW_BUFFER5_ATI 0x882A
#define GL_DRAW_BUFFER6_ATI 0x882B
#define GL_DRAW_BUFFER7_ATI 0x882C
#define GL_DRAW_BUFFER8_ATI 0x882D
#define GL_DRAW_BUFFER9_ATI 0x882E
#define GL_DRAW_BUFFER10_ATI 0x882F
#define GL_DRAW_BUFFER11_ATI 0x8830
#define GL_DRAW_BUFFER12_ATI 0x8831
#define GL_DRAW_BUFFER13_ATI 0x8832
#define GL_DRAW_BUFFER14_ATI 0x8833
#define GL_DRAW_BUFFER15_ATI 0x8834

#endif

#ifdef GL_ATI_element_array

#define GL_ELEMENT_ARRAY_ATI 0x8768
#define GL_ELEMENT_ARRAY_TYPE_ATI 0x8769
#define GL_ELEMENT_ARRAY_POINTER_ATI 0x876A

#endif

#ifdef GL_ATI_envmap_bumpmap

#define GL_BUMP_ROT_MATRIX_ATI 0x8775
#define GL_BUMP_ROT_MATRIX_SIZE_ATI 0x8776
#define GL_BUMP_NUM_TEX_UNITS_ATI 0x8777
#define GL_BUMP_TEX_UNITS_ATI 0x8778
#define GL_DUDV_ATI 0x8779
#define GL_DU8DV8_ATI 0x877A
#define GL_BUMP_ENVMAP_ATI 0x877B
#define GL_BUMP_TARGET_ATI 0x877C

#endif

#ifdef GL_ATI_fragment_shader

#define GL_FRAGMENT_SHADER_ATI 0x8920
#define GL_REG_0_ATI 0x8921
#define GL_REG_1_ATI 0x8922
#define GL_REG_2_ATI 0x8923
#define GL_REG_3_ATI 0x8924
#define GL_REG_4_ATI 0x8925
#define GL_REG_5_ATI 0x8926
#define GL_REG_6_ATI 0x8927
#define GL_REG_7_ATI 0x8928
#define GL_REG_8_ATI 0x8929
#define GL_REG_9_ATI 0x892A
#define GL_REG_10_ATI 0x892B
#define GL_REG_11_ATI 0x892C
#define GL_REG_12_ATI 0x892D
#define GL_REG_13_ATI 0x892E
#define GL_REG_14_ATI 0x892F
#define GL_REG_15_ATI 0x8930
#define GL_REG_16_ATI 0x8931
#define GL_REG_17_ATI 0x8932
#define GL_REG_18_ATI 0x8933
#define GL_REG_19_ATI 0x8934
#define GL_REG_20_ATI 0x8935
#define GL_REG_21_ATI 0x8936
#define GL_REG_22_ATI 0x8937
#define GL_REG_23_ATI 0x8938
#define GL_REG_24_ATI 0x8939
#define GL_REG_25_ATI 0x893A
#define GL_REG_26_ATI 0x893B
#define GL_REG_27_ATI 0x893C
#define GL_REG_28_ATI 0x893D
#define GL_REG_29_ATI 0x893E
#define GL_REG_30_ATI 0x893F
#define GL_REG_31_ATI 0x8940
#define GL_CON_0_ATI 0x8941
#define GL_CON_1_ATI 0x8942
#define GL_CON_2_ATI 0x8943
#define GL_CON_3_ATI 0x8944
#define GL_CON_4_ATI 0x8945
#define GL_CON_5_ATI 0x8946
#define GL_CON_6_ATI 0x8947
#define GL_CON_7_ATI 0x8948
#define GL_CON_8_ATI 0x8949
#define GL_CON_9_ATI 0x894A
#define GL_CON_10_ATI 0x894B
#define GL_CON_11_ATI 0x894C
#define GL_CON_12_ATI 0x894D
#define GL_CON_13_ATI 0x894E
#define GL_CON_14_ATI 0x894F
#define GL_CON_15_ATI 0x8950
#define GL_CON_16_ATI 0x8951
#define GL_CON_17_ATI 0x8952
#define GL_CON_18_ATI 0x8953
#define GL_CON_19_ATI 0x8954
#define GL_CON_20_ATI 0x8955
#define GL_CON_21_ATI 0x8956
#define GL_CON_22_ATI 0x8957
#define GL_CON_23_ATI 0x8958
#define GL_CON_24_ATI 0x8959
#define GL_CON_25_ATI 0x895A
#define GL_CON_26_ATI 0x895B
#define GL_CON_27_ATI 0x895C
#define GL_CON_28_ATI 0x895D
#define GL_CON_29_ATI 0x895E
#define GL_CON_30_ATI 0x895F
#define GL_CON_31_ATI 0x8960
#define GL_MOV_ATI 0x8961
#define GL_ADD_ATI 0x8963
#define GL_MUL_ATI 0x8964
#define GL_SUB_ATI 0x8965
#define GL_DOT3_ATI 0x8966
#define GL_DOT4_ATI 0x8967
#define GL_MAD_ATI 0x8968
#define GL_LERP_ATI 0x8969
#define GL_CND_ATI 0x896A
#define GL_CND0_ATI 0x896B
#define GL_DOT2_ADD_ATI 0x896C
#define GL_SECONDARY_INTERPOLATOR_ATI 0x896D
#define GL_NUM_FRAGMENT_REGISTERS_ATI 0x896E
#define GL_NUM_FRAGMENT_CONSTANTS_ATI 0x896F
#define GL_NUM_PASSES_ATI 0x8970
#define GL_NUM_INSTRUCTIONS_PER_PASS_ATI 0x8971
#define GL_NUM_INSTRUCTIONS_TOTAL_ATI 0x8972
#define GL_NUM_INPUT_INTERPOLATOR_COMPONENTS_ATI 0x8973
#define GL_NUM_LOOPBACK_COMPONENTS_ATI 0x8974
#define GL_COLOR_ALPHA_PAIRING_ATI 0x8975
#define GL_SWIZZLE_STR_ATI 0x8976
#define GL_SWIZZLE_STQ_ATI 0x8977
#define GL_SWIZZLE_STR_DR_ATI 0x8978
#define GL_SWIZZLE_STQ_DQ_ATI 0x8979
#define GL_SWIZZLE_STRQ_ATI 0x897A
#define GL_SWIZZLE_STRQ_DQ_ATI 0x897B
#define GL_RED_BIT_ATI 0x00000001
#define GL_GREEN_BIT_ATI 0x00000002
#define GL_BLUE_BIT_ATI 0x00000004
#define GL_2X_BIT_ATI 0x00000001
#define GL_4X_BIT_ATI 0x00000002
#define GL_8X_BIT_ATI 0x00000004
#define GL_HALF_BIT_ATI 0x00000008
#define GL_QUARTER_BIT_ATI 0x00000010
#define GL_EIGHTH_BIT_ATI 0x00000020
#define GL_SATURATE_BIT_ATI 0x00000040
#define GL_COMP_BIT_ATI 0x00000002
#define GL_NEGATE_BIT_ATI 0x00000004
#define GL_BIAS_BIT_ATI 0x00000008

#endif

#ifdef GL_ATI_meminfo

#define GL_VBO_FREE_MEMORY_ATI 0x87FB
#define GL_TEXTURE_FREE_MEMORY_ATI 0x87FC
#define GL_RENDERBUFFER_FREE_MEMORY_ATI 0x87FD

#endif

#ifdef GL_ATI_pixel_format_float

#define GL_TYPE_RGBA_FLOAT_ATI 0x8820
#define GL_COLOR_CLEAR_UNCLAMPED_VALUE_ATI 0x8835

#endif

#ifdef GL_ATI_pn_triangles

#define GL_PN_TRIANGLES_ATI 0x87F0
#define GL_MAX_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F1
#define GL_PN_TRIANGLES_POINT_MODE_ATI 0x87F2
#define GL_PN_TRIANGLES_NORMAL_MODE_ATI 0x87F3
#define GL_PN_TRIANGLES_TESSELATION_LEVEL_ATI 0x87F4
#define GL_PN_TRIANGLES_POINT_MODE_LINEAR_ATI 0x87F5
#define GL_PN_TRIANGLES_POINT_MODE_CUBIC_ATI 0x87F6
#define GL_PN_TRIANGLES_NORMAL_MODE_LINEAR_ATI 0x87F7
#define GL_PN_TRIANGLES_NORMAL_MODE_QUADRATIC_ATI 0x87F8

#endif

#ifdef GL_ATI_separate_stencil

#define GL_STENCIL_BACK_FUNC_ATI 0x8800
#define GL_STENCIL_BACK_FAIL_ATI 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL_ATI 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS_ATI 0x8803

#endif

#ifdef GL_ATI_texture_compression_3dc

#define GL_COMPRESSED_LUMINANCE_ALPHA_3DC_ATI 0x8837

#endif

#ifdef GL_ATI_texture_env_combine3

#define GL_MODULATE_ADD_ATI 0x8744
#define GL_MODULATE_SIGNED_ADD_ATI 0x8745
#define GL_MODULATE_SUBTRACT_ATI 0x8746

#endif

#ifdef GL_ATI_texture_float

#define GL_RGBA_FLOAT32_ATI 0x8814
#define GL_RGB_FLOAT32_ATI 0x8815
#define GL_ALPHA_FLOAT32_ATI 0x8816
#define GL_INTENSITY_FLOAT32_ATI 0x8817
#define GL_LUMINANCE_FLOAT32_ATI 0x8818
#define GL_LUMINANCE_ALPHA_FLOAT32_ATI 0x8819
#define GL_RGBA_FLOAT16_ATI 0x881A
#define GL_RGB_FLOAT16_ATI 0x881B
#define GL_ALPHA_FLOAT16_ATI 0x881C
#define GL_INTENSITY_FLOAT16_ATI 0x881D
#define GL_LUMINANCE_FLOAT16_ATI 0x881E
#define GL_LUMINANCE_ALPHA_FLOAT16_ATI 0x881F

#endif

#ifdef GL_ATI_texture_mirror_once

#define GL_MIRROR_CLAMP_ATI 0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_ATI 0x8743

#endif

#ifdef GL_ATI_text_fragment_shader

#define GL_TEXT_FRAGMENT_SHADER_ATI 0x8200

#endif

#ifdef GL_ATI_vertex_array_object

#define GL_STATIC_ATI 0x8760
#define GL_DYNAMIC_ATI 0x8761
#define GL_PRESERVE_ATI 0x8762
#define GL_DISCARD_ATI 0x8763
#define GL_OBJECT_BUFFER_SIZE_ATI 0x8764
#define GL_OBJECT_BUFFER_USAGE_ATI 0x8765
#define GL_ARRAY_OBJECT_BUFFER_ATI 0x8766
#define GL_ARRAY_OBJECT_OFFSET_ATI 0x8767

#endif

#ifdef GL_ATI_vertex_streams

#define GL_MAX_VERTEX_STREAMS_ATI 0x876B
#define GL_VERTEX_STREAM0_ATI 0x876C
#define GL_VERTEX_STREAM1_ATI 0x876D
#define GL_VERTEX_STREAM2_ATI 0x876E
#define GL_VERTEX_STREAM3_ATI 0x876F
#define GL_VERTEX_STREAM4_ATI 0x8770
#define GL_VERTEX_STREAM5_ATI 0x8771
#define GL_VERTEX_STREAM6_ATI 0x8772
#define GL_VERTEX_STREAM7_ATI 0x8773
#define GL_VERTEX_SOURCE_ATI 0x8774

#endif

#ifdef GL_EXT_422_pixels

#define GL_422_EXT 0x80CC
#define GL_422_REV_EXT 0x80CD
#define GL_422_AVERAGE_EXT 0x80CE
#define GL_422_REV_AVERAGE_EXT 0x80CF

#endif

#ifdef GL_EXT_abgr

#define GL_ABGR_EXT 0x8000

#endif

#ifdef GL_EXT_bgra

#define GL_BGR_EXT 0x80E0
#define GL_BGRA_EXT 0x80E1

#endif

#ifdef GL_EXT_bindable_uniform

#define GL_MAX_VERTEX_BINDABLE_UNIFORMS_EXT 0x8DE2
#define GL_MAX_FRAGMENT_BINDABLE_UNIFORMS_EXT 0x8DE3
#define GL_MAX_GEOMETRY_BINDABLE_UNIFORMS_EXT 0x8DE4
#define GL_MAX_BINDABLE_UNIFORM_SIZE_EXT 0x8DED
#define GL_UNIFORM_BUFFER_EXT 0x8DEE
#define GL_UNIFORM_BUFFER_BINDING_EXT 0x8DEF

#endif

#ifdef GL_EXT_blend_color

#define GL_CONSTANT_COLOR_EXT 0x8001
#define GL_ONE_MINUS_CONSTANT_COLOR_EXT 0x8002
#define GL_CONSTANT_ALPHA_EXT 0x8003
#define GL_ONE_MINUS_CONSTANT_ALPHA_EXT 0x8004
#define GL_BLEND_COLOR_EXT 0x8005

#endif

#ifdef GL_EXT_blend_equation_separate

#define GL_BLEND_EQUATION_RGB_EXT 0x8009
#define GL_BLEND_EQUATION_ALPHA_EXT 0x883D

#endif

#ifdef GL_EXT_blend_func_separate

#define GL_BLEND_DST_RGB_EXT 0x80C8
#define GL_BLEND_SRC_RGB_EXT 0x80C9
#define GL_BLEND_DST_ALPHA_EXT 0x80CA
#define GL_BLEND_SRC_ALPHA_EXT 0x80CB

#endif

#ifdef GL_EXT_blend_minmax

#define GL_FUNC_ADD_EXT 0x8006
#define GL_MIN_EXT 0x8007
#define GL_MAX_EXT 0x8008
#define GL_BLEND_EQUATION_EXT 0x8009

#endif

#ifdef GL_EXT_blend_subtract

#define GL_FUNC_SUBTRACT_EXT 0x800A
#define GL_FUNC_REVERSE_SUBTRACT_EXT 0x800B

#endif

#ifdef GL_EXT_clip_volume_hint

#define GL_CLIP_VOLUME_CLIPPING_HINT_EXT 0x80F0

#endif

#ifdef GL_EXT_cmyka

#define GL_CMYK_EXT 0x800C
#define GL_CMYKA_EXT 0x800D
#define GL_PACK_CMYK_HINT_EXT 0x800E
#define GL_UNPACK_CMYK_HINT_EXT 0x800F

#endif

#ifdef GL_EXT_compiled_vertex_array

#define GL_ARRAY_ELEMENT_LOCK_FIRST_EXT 0x81A8
#define GL_ARRAY_ELEMENT_LOCK_COUNT_EXT 0x81A9

#endif

#ifdef GL_EXT_convolution

#define GL_CONVOLUTION_1D_EXT 0x8010
#define GL_CONVOLUTION_2D_EXT 0x8011
#define GL_SEPARABLE_2D_EXT 0x8012
#define GL_CONVOLUTION_BORDER_MODE_EXT 0x8013
#define GL_CONVOLUTION_FILTER_SCALE_EXT 0x8014
#define GL_CONVOLUTION_FILTER_BIAS_EXT 0x8015
#define GL_REDUCE_EXT 0x8016
#define GL_CONVOLUTION_FORMAT_EXT 0x8017
#define GL_CONVOLUTION_WIDTH_EXT 0x8018
#define GL_CONVOLUTION_HEIGHT_EXT 0x8019
#define GL_MAX_CONVOLUTION_WIDTH_EXT 0x801A
#define GL_MAX_CONVOLUTION_HEIGHT_EXT 0x801B
#define GL_POST_CONVOLUTION_RED_SCALE_EXT 0x801C
#define GL_POST_CONVOLUTION_GREEN_SCALE_EXT 0x801D
#define GL_POST_CONVOLUTION_BLUE_SCALE_EXT 0x801E
#define GL_POST_CONVOLUTION_ALPHA_SCALE_EXT 0x801F
#define GL_POST_CONVOLUTION_RED_BIAS_EXT 0x8020
#define GL_POST_CONVOLUTION_GREEN_BIAS_EXT 0x8021
#define GL_POST_CONVOLUTION_BLUE_BIAS_EXT 0x8022
#define GL_POST_CONVOLUTION_ALPHA_BIAS_EXT 0x8023

#endif

#ifdef GL_EXT_coordinate_frame

#define GL_TANGENT_ARRAY_EXT 0x8439
#define GL_BINORMAL_ARRAY_EXT 0x843A
#define GL_CURRENT_TANGENT_EXT 0x843B
#define GL_CURRENT_BINORMAL_EXT 0x843C
#define GL_TANGENT_ARRAY_TYPE_EXT 0x843E
#define GL_TANGENT_ARRAY_STRIDE_EXT 0x843F
#define GL_BINORMAL_ARRAY_TYPE_EXT 0x8440
#define GL_BINORMAL_ARRAY_STRIDE_EXT 0x8441
#define GL_TANGENT_ARRAY_POINTER_EXT 0x8442
#define GL_BINORMAL_ARRAY_POINTER_EXT 0x8443
#define GL_MAP1_TANGENT_EXT 0x8444
#define GL_MAP2_TANGENT_EXT 0x8445
#define GL_MAP1_BINORMAL_EXT 0x8446
#define GL_MAP2_BINORMAL_EXT 0x8447

#endif

#ifdef GL_EXT_copy_buffer

#define GL_COPY_READ_BUFFER_EXT 0x8F36
#define GL_COPY_WRITE_BUFFER_EXT 0x8F37

#endif

#ifdef GL_EXT_cull_vertex

#define GL_CULL_VERTEX_EXT 0x81AA
#define GL_CULL_VERTEX_EYE_POSITION_EXT 0x81AB
#define GL_CULL_VERTEX_OBJECT_POSITION_EXT 0x81AC

#endif

#ifdef GL_EXT_debug_label

#define GL_BUFFER_OBJECT_EXT 0x9151
#define GL_SHADER_OBJECT_EXT 0x8B48
#define GL_PROGRAM_OBJECT_EXT 0x8B40
#define GL_VERTEX_ARRAY_OBJECT_EXT 0x9154
#define GL_QUERY_OBJECT_EXT 0x9153
#define GL_PROGRAM_PIPELINE_OBJECT_EXT 0x8A4F

#endif

#ifdef GL_EXT_depth_bounds_test

#define GL_DEPTH_BOUNDS_TEST_EXT 0x8890
#define GL_DEPTH_BOUNDS_EXT 0x8891

#endif

#ifdef GL_EXT_direct_state_access

#define GL_PROGRAM_MATRIX_EXT 0x8E2D
#define GL_TRANSPOSE_PROGRAM_MATRIX_EXT 0x8E2E
#define GL_PROGRAM_MATRIX_STACK_DEPTH_EXT 0x8E2F

#endif

#ifdef GL_EXT_draw_range_elements

#define GL_MAX_ELEMENTS_VERTICES_EXT 0x80E8
#define GL_MAX_ELEMENTS_INDICES_EXT 0x80E9

#endif

#ifdef GL_EXT_fog_coord

#define GL_FOG_COORDINATE_SOURCE_EXT 0x8450
#define GL_FOG_COORDINATE_EXT 0x8451
#define GL_FRAGMENT_DEPTH_EXT 0x8452
#define GL_CURRENT_FOG_COORDINATE_EXT 0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE_EXT 0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE_EXT 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER_EXT 0x8456
#define GL_FOG_COORDINATE_ARRAY_EXT 0x8457

#endif

#ifdef GL_EXT_fragment_lighting

#define GL_FRAGMENT_LIGHTING_EXT 0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_EXT 0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_EXT 0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_EXT 0x8403
#define GL_MAX_FRAGMENT_LIGHTS_EXT 0x8404
#define GL_MAX_ACTIVE_LIGHTS_EXT 0x8405
#define GL_CURRENT_RASTER_NORMAL_EXT 0x8406
#define GL_LIGHT_ENV_MODE_EXT 0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_EXT 0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_EXT 0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_EXT 0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_EXT 0x840B
#define GL_FRAGMENT_LIGHT0_EXT 0x840C
#define GL_FRAGMENT_LIGHT1_EXT 0x840D
#define GL_FRAGMENT_LIGHT2_EXT 0x840E
#define GL_FRAGMENT_LIGHT3_EXT 0x840F
#define GL_FRAGMENT_LIGHT4_EXT 0x8410
#define GL_FRAGMENT_LIGHT5_EXT 0x8411
#define GL_FRAGMENT_LIGHT6_EXT 0x8412
#define GL_FRAGMENT_LIGHT7_EXT 0x8413

#endif

#ifdef GL_EXT_framebuffer_blit

#define GL_READ_FRAMEBUFFER_EXT 0x8CA8
#define GL_DRAW_FRAMEBUFFER_EXT 0x8CA9
#define GL_DRAW_FRAMEBUFFER_BINDING_EXT GL_FRAMEBUFFER_BINDING_EXT
#define GL_READ_FRAMEBUFFER_BINDING_EXT 0x8CAA

#endif

#ifdef GL_EXT_framebuffer_multisample

#define GL_RENDERBUFFER_SAMPLES_EXT 0x8CAB
#define GL_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_EXT 0x8D56
#define GL_MAX_SAMPLES_EXT 0x8D57

#endif

#ifdef GL_EXT_framebuffer_multisample_blit_scaled

#define GL_SCALED_RESOLVE_FASTEST_EXT 0x90BA
#define GL_SCALED_RESOLVE_NICEST_EXT 0x90BB

#endif

#ifdef GL_EXT_framebuffer_object

#define GL_INVALID_FRAMEBUFFER_OPERATION_EXT 0x0506
#define GL_MAX_RENDERBUFFER_SIZE_EXT 0x84E8
#define GL_FRAMEBUFFER_BINDING_EXT 0x8CA6
#define GL_RENDERBUFFER_BINDING_EXT 0x8CA7
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_EXT 0x8CD0
#define GL_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_EXT 0x8CD1
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_EXT 0x8CD2
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_EXT 0x8CD3
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_3D_ZOFFSET_EXT 0x8CD4
#define GL_FRAMEBUFFER_COMPLETE_EXT 0x8CD5
#define GL_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_EXT 0x8CD6
#define GL_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_EXT 0x8CD7
#define GL_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_EXT 0x8CD9
#define GL_FRAMEBUFFER_INCOMPLETE_FORMATS_EXT 0x8CDA
#define GL_FRAMEBUFFER_INCOMPLETE_DRAW_BUFFER_EXT 0x8CDB
#define GL_FRAMEBUFFER_INCOMPLETE_READ_BUFFER_EXT 0x8CDC
#define GL_FRAMEBUFFER_UNSUPPORTED_EXT 0x8CDD
#define GL_MAX_COLOR_ATTACHMENTS_EXT 0x8CDF
#define GL_COLOR_ATTACHMENT0_EXT 0x8CE0
#define GL_COLOR_ATTACHMENT1_EXT 0x8CE1
#define GL_COLOR_ATTACHMENT2_EXT 0x8CE2
#define GL_COLOR_ATTACHMENT3_EXT 0x8CE3
#define GL_COLOR_ATTACHMENT4_EXT 0x8CE4
#define GL_COLOR_ATTACHMENT5_EXT 0x8CE5
#define GL_COLOR_ATTACHMENT6_EXT 0x8CE6
#define GL_COLOR_ATTACHMENT7_EXT 0x8CE7
#define GL_COLOR_ATTACHMENT8_EXT 0x8CE8
#define GL_COLOR_ATTACHMENT9_EXT 0x8CE9
#define GL_COLOR_ATTACHMENT10_EXT 0x8CEA
#define GL_COLOR_ATTACHMENT11_EXT 0x8CEB
#define GL_COLOR_ATTACHMENT12_EXT 0x8CEC
#define GL_COLOR_ATTACHMENT13_EXT 0x8CED
#define GL_COLOR_ATTACHMENT14_EXT 0x8CEE
#define GL_COLOR_ATTACHMENT15_EXT 0x8CEF
#define GL_DEPTH_ATTACHMENT_EXT 0x8D00
#define GL_STENCIL_ATTACHMENT_EXT 0x8D20
#define GL_FRAMEBUFFER_EXT 0x8D40
#define GL_RENDERBUFFER_EXT 0x8D41
#define GL_RENDERBUFFER_WIDTH_EXT 0x8D42
#define GL_RENDERBUFFER_HEIGHT_EXT 0x8D43
#define GL_RENDERBUFFER_INTERNAL_FORMAT_EXT 0x8D44
#define GL_STENCIL_INDEX1_EXT 0x8D46
#define GL_STENCIL_INDEX4_EXT 0x8D47
#define GL_STENCIL_INDEX8_EXT 0x8D48
#define GL_STENCIL_INDEX16_EXT 0x8D49
#define GL_RENDERBUFFER_RED_SIZE_EXT 0x8D50
#define GL_RENDERBUFFER_GREEN_SIZE_EXT 0x8D51
#define GL_RENDERBUFFER_BLUE_SIZE_EXT 0x8D52
#define GL_RENDERBUFFER_ALPHA_SIZE_EXT 0x8D53
#define GL_RENDERBUFFER_DEPTH_SIZE_EXT 0x8D54
#define GL_RENDERBUFFER_STENCIL_SIZE_EXT 0x8D55

#endif

#ifdef GL_EXT_framebuffer_sRGB

#define GL_FRAMEBUFFER_SRGB_EXT 0x8DB9
#define GL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x8DBA

#endif

#ifdef GL_EXT_geometry_shader4

#define GL_GEOMETRY_SHADER_EXT 0x8DD9
#define GL_GEOMETRY_VERTICES_OUT_EXT 0x8DDA
#define GL_GEOMETRY_INPUT_TYPE_EXT 0x8DDB
#define GL_GEOMETRY_OUTPUT_TYPE_EXT 0x8DDC
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS_EXT 0x8C29
#define GL_MAX_GEOMETRY_VARYING_COMPONENTS_EXT 0x8DDD
#define GL_MAX_VERTEX_VARYING_COMPONENTS_EXT 0x8DDE
#define GL_MAX_VARYING_COMPONENTS_EXT 0x8B4B
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS_EXT 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES_EXT 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS_EXT 0x8DE1
#define GL_LINES_ADJACENCY_EXT 0x000A
#define GL_LINE_STRIP_ADJACENCY_EXT 0x000B
#define GL_TRIANGLES_ADJACENCY_EXT 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY_EXT 0x000D
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS_EXT 0x8DA8
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_COUNT_EXT 0x8DA9
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED_EXT 0x8DA7
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_EXT 0x8CD4
#define GL_PROGRAM_POINT_SIZE_EXT 0x8642

#endif

#ifdef GL_EXT_gpu_shader4

#define GL_SAMPLER_1D_ARRAY_EXT 0x8DC0
#define GL_SAMPLER_2D_ARRAY_EXT 0x8DC1
#define GL_SAMPLER_BUFFER_EXT 0x8DC2
#define GL_SAMPLER_1D_ARRAY_SHADOW_EXT 0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW_EXT 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW_EXT 0x8DC5
#define GL_UNSIGNED_INT_VEC2_EXT 0x8DC6
#define GL_UNSIGNED_INT_VEC3_EXT 0x8DC7
#define GL_UNSIGNED_INT_VEC4_EXT 0x8DC8
#define GL_INT_SAMPLER_1D_EXT 0x8DC9
#define GL_INT_SAMPLER_2D_EXT 0x8DCA
#define GL_INT_SAMPLER_3D_EXT 0x8DCB
#define GL_INT_SAMPLER_CUBE_EXT 0x8DCC
#define GL_INT_SAMPLER_2D_RECT_EXT 0x8DCD
#define GL_INT_SAMPLER_1D_ARRAY_EXT 0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY_EXT 0x8DCF
#define GL_INT_SAMPLER_BUFFER_EXT 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_1D_EXT 0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D_EXT 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D_EXT 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE_EXT 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT_EXT 0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY_EXT 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY_EXT 0x8DD7
#define GL_UNSIGNED_INT_SAMPLER_BUFFER_EXT 0x8DD8

#endif

#ifdef GL_EXT_histogram

#define GL_HISTOGRAM_EXT 0x8024
#define GL_PROXY_HISTOGRAM_EXT 0x8025
#define GL_HISTOGRAM_WIDTH_EXT 0x8026
#define GL_HISTOGRAM_FORMAT_EXT 0x8027
#define GL_HISTOGRAM_RED_SIZE_EXT 0x8028
#define GL_HISTOGRAM_GREEN_SIZE_EXT 0x8029
#define GL_HISTOGRAM_BLUE_SIZE_EXT 0x802A
#define GL_HISTOGRAM_ALPHA_SIZE_EXT 0x802B
#define GL_HISTOGRAM_LUMINANCE_SIZE_EXT 0x802C
#define GL_HISTOGRAM_SINK_EXT 0x802D
#define GL_MINMAX_EXT 0x802E
#define GL_MINMAX_FORMAT_EXT 0x802F
#define GL_MINMAX_SINK_EXT 0x8030
#define GL_TABLE_TOO_LARGE_EXT 0x8031

#endif

#ifdef GL_EXT_index_array_formats

#define GL_IUI_V2F_EXT 0x81AD
#define GL_IUI_V3F_EXT 0x81AE
#define GL_IUI_N3F_V2F_EXT 0x81AF
#define GL_IUI_N3F_V3F_EXT 0x81B0
#define GL_T2F_IUI_V2F_EXT 0x81B1
#define GL_T2F_IUI_V3F_EXT 0x81B2
#define GL_T2F_IUI_N3F_V2F_EXT 0x81B3
#define GL_T2F_IUI_N3F_V3F_EXT 0x81B4

#endif

#ifdef GL_EXT_index_func

#define GL_INDEX_TEST_EXT 0x81B5
#define GL_INDEX_TEST_FUNC_EXT 0x81B6
#define GL_INDEX_TEST_REF_EXT 0x81B7

#endif

#ifdef GL_EXT_index_material

#define GL_INDEX_MATERIAL_EXT 0x81B8
#define GL_INDEX_MATERIAL_PARAMETER_EXT 0x81B9
#define GL_INDEX_MATERIAL_FACE_EXT 0x81BA

#endif

#ifdef GL_EXT_light_texture

#define GL_FRAGMENT_MATERIAL_EXT 0x8349
#define GL_FRAGMENT_NORMAL_EXT 0x834A
#define GL_FRAGMENT_COLOR_EXT 0x834C
#define GL_ATTENUATION_EXT 0x834D
#define GL_SHADOW_ATTENUATION_EXT 0x834E
#define GL_TEXTURE_APPLICATION_MODE_EXT 0x834F
#define GL_TEXTURE_LIGHT_EXT 0x8350
#define GL_TEXTURE_MATERIAL_FACE_EXT 0x8351
#define GL_TEXTURE_MATERIAL_PARAMETER_EXT 0x8352

#endif

#ifdef GL_EXT_multisample

#define GL_MULTISAMPLE_EXT 0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_EXT 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_EXT 0x809F
#define GL_SAMPLE_MASK_EXT 0x80A0
#define GL_1PASS_EXT 0x80A1
#define GL_2PASS_0_EXT 0x80A2
#define GL_2PASS_1_EXT 0x80A3
#define GL_4PASS_0_EXT 0x80A4
#define GL_4PASS_1_EXT 0x80A5
#define GL_4PASS_2_EXT 0x80A6
#define GL_4PASS_3_EXT 0x80A7
#define GL_SAMPLE_BUFFERS_EXT 0x80A8
#define GL_SAMPLES_EXT 0x80A9
#define GL_SAMPLE_MASK_VALUE_EXT 0x80AA
#define GL_SAMPLE_MASK_INVERT_EXT 0x80AB
#define GL_SAMPLE_PATTERN_EXT 0x80AC
#define GL_MULTISAMPLE_BIT_EXT 0x20000000

#endif

#ifdef GL_EXT_packed_depth_stencil

#define GL_DEPTH_STENCIL_EXT 0x84F9
#define GL_UNSIGNED_INT_24_8_EXT 0x84FA
#define GL_DEPTH24_STENCIL8_EXT 0x88F0
#define GL_TEXTURE_STENCIL_SIZE_EXT 0x88F1

#endif

#ifdef GL_EXT_packed_float

#define GL_R11F_G11F_B10F_EXT 0x8C3A
#define GL_UNSIGNED_INT_10F_11F_11F_REV_EXT 0x8C3B
#define GL_RGBA_SIGNED_COMPONENTS_EXT 0x8C3C

#endif

#ifdef GL_EXT_packed_pixels

#define GL_UNSIGNED_BYTE_3_3_2_EXT 0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4_EXT 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1_EXT 0x8034
#define GL_UNSIGNED_INT_8_8_8_8_EXT 0x8035
#define GL_UNSIGNED_INT_10_10_10_2_EXT 0x8036

#endif

#ifdef GL_EXT_paletted_texture

#define GL_COLOR_INDEX1_EXT 0x80E2
#define GL_COLOR_INDEX2_EXT 0x80E3
#define GL_COLOR_INDEX4_EXT 0x80E4
#define GL_COLOR_INDEX8_EXT 0x80E5
#define GL_COLOR_INDEX12_EXT 0x80E6
#define GL_COLOR_INDEX16_EXT 0x80E7
#define GL_TEXTURE_INDEX_SIZE_EXT 0x80ED

#endif

#ifdef GL_EXT_pixel_buffer_object

#define GL_PIXEL_PACK_BUFFER_EXT 0x88EB
#define GL_PIXEL_UNPACK_BUFFER_EXT 0x88EC
#define GL_PIXEL_PACK_BUFFER_BINDING_EXT 0x88ED
#define GL_PIXEL_UNPACK_BUFFER_BINDING_EXT 0x88EF

#endif

#ifdef GL_EXT_pixel_transform

#define GL_PIXEL_TRANSFORM_2D_EXT 0x8330
#define GL_PIXEL_MAG_FILTER_EXT 0x8331
#define GL_PIXEL_MIN_FILTER_EXT 0x8332
#define GL_PIXEL_CUBIC_WEIGHT_EXT 0x8333
#define GL_CUBIC_EXT 0x8334
#define GL_AVERAGE_EXT 0x8335
#define GL_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8336
#define GL_MAX_PIXEL_TRANSFORM_2D_STACK_DEPTH_EXT 0x8337
#define GL_PIXEL_TRANSFORM_2D_MATRIX_EXT 0x8338

#endif

#ifdef GL_EXT_point_parameters

#define GL_POINT_SIZE_MIN_EXT 0x8126
#define GL_POINT_SIZE_MAX_EXT 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_EXT 0x8128
#define GL_DISTANCE_ATTENUATION_EXT 0x8129

#endif

#ifdef GL_EXT_polygon_offset

#define GL_POLYGON_OFFSET_EXT 0x8037
#define GL_POLYGON_OFFSET_FACTOR_EXT 0x8038
#define GL_POLYGON_OFFSET_BIAS_EXT 0x8039

#endif

#ifdef GL_EXT_polygon_offset_clamp

#define GL_POLYGON_OFFSET_CLAMP_EXT 0x8E1B

#endif

#ifdef GL_EXT_provoking_vertex

#define GL_QUADS_FOLLOW_PROVOKING_VERTEX_CONVENTION_EXT 0x8E4C
#define GL_FIRST_VERTEX_CONVENTION_EXT 0x8E4D
#define GL_LAST_VERTEX_CONVENTION_EXT 0x8E4E
#define GL_PROVOKING_VERTEX_EXT 0x8E4F

#endif

#ifdef GL_EXT_raster_multisample

#define GL_RASTER_MULTISAMPLE_EXT 0x9327
#define GL_RASTER_SAMPLES_EXT 0x9328
#define GL_MAX_RASTER_SAMPLES_EXT 0x9329
#define GL_RASTER_FIXED_SAMPLE_LOCATIONS_EXT 0x932A
#define GL_MULTISAMPLE_RASTERIZATION_ALLOWED_EXT 0x932B
#define GL_EFFECTIVE_RASTER_SAMPLES_EXT 0x932C

#endif

#ifdef GL_EXT_rescale_normal

#define GL_RESCALE_NORMAL_EXT 0x803A

#endif

#ifdef GL_EXT_secondary_color

#define GL_COLOR_SUM_EXT 0x8458
#define GL_CURRENT_SECONDARY_COLOR_EXT 0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE_EXT 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE_EXT 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE_EXT 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER_EXT 0x845D
#define GL_SECONDARY_COLOR_ARRAY_EXT 0x845E

#endif

#ifdef GL_EXT_separate_shader_objects

#define GL_ACTIVE_PROGRAM_EXT 0x8B8D

#endif

#ifdef GL_EXT_separate_specular_color

#define GL_LIGHT_MODEL_COLOR_CONTROL_EXT 0x81F8
#define GL_SINGLE_COLOR_EXT 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR_EXT 0x81FA

#endif

#ifdef GL_EXT_shader_image_load_store

#define GL_MAX_IMAGE_UNITS_EXT 0x8F38
#define GL_MAX_COMBINED_IMAGE_UNITS_AND_FRAGMENT_OUTPUTS_EXT 0x8F39
#define GL_IMAGE_BINDING_NAME_EXT 0x8F3A
#define GL_IMAGE_BINDING_LEVEL_EXT 0x8F3B
#define GL_IMAGE_BINDING_LAYERED_EXT 0x8F3C
#define GL_IMAGE_BINDING_LAYER_EXT 0x8F3D
#define GL_IMAGE_BINDING_ACCESS_EXT 0x8F3E
#define GL_IMAGE_1D_EXT 0x904C
#define GL_IMAGE_2D_EXT 0x904D
#define GL_IMAGE_3D_EXT 0x904E
#define GL_IMAGE_2D_RECT_EXT 0x904F
#define GL_IMAGE_CUBE_EXT 0x9050
#define GL_IMAGE_BUFFER_EXT 0x9051
#define GL_IMAGE_1D_ARRAY_EXT 0x9052
#define GL_IMAGE_2D_ARRAY_EXT 0x9053
#define GL_IMAGE_CUBE_MAP_ARRAY_EXT 0x9054
#define GL_IMAGE_2D_MULTISAMPLE_EXT 0x9055
#define GL_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9056
#define GL_INT_IMAGE_1D_EXT 0x9057
#define GL_INT_IMAGE_2D_EXT 0x9058
#define GL_INT_IMAGE_3D_EXT 0x9059
#define GL_INT_IMAGE_2D_RECT_EXT 0x905A
#define GL_INT_IMAGE_CUBE_EXT 0x905B
#define GL_INT_IMAGE_BUFFER_EXT 0x905C
#define GL_INT_IMAGE_1D_ARRAY_EXT 0x905D
#define GL_INT_IMAGE_2D_ARRAY_EXT 0x905E
#define GL_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x905F
#define GL_INT_IMAGE_2D_MULTISAMPLE_EXT 0x9060
#define GL_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x9061
#define GL_UNSIGNED_INT_IMAGE_1D_EXT 0x9062
#define GL_UNSIGNED_INT_IMAGE_2D_EXT 0x9063
#define GL_UNSIGNED_INT_IMAGE_3D_EXT 0x9064
#define GL_UNSIGNED_INT_IMAGE_2D_RECT_EXT 0x9065
#define GL_UNSIGNED_INT_IMAGE_CUBE_EXT 0x9066
#define GL_UNSIGNED_INT_IMAGE_BUFFER_EXT 0x9067
#define GL_UNSIGNED_INT_IMAGE_1D_ARRAY_EXT 0x9068
#define GL_UNSIGNED_INT_IMAGE_2D_ARRAY_EXT 0x9069
#define GL_UNSIGNED_INT_IMAGE_CUBE_MAP_ARRAY_EXT 0x906A
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_EXT 0x906B
#define GL_UNSIGNED_INT_IMAGE_2D_MULTISAMPLE_ARRAY_EXT 0x906C
#define GL_MAX_IMAGE_SAMPLES_EXT 0x906D
#define GL_IMAGE_BINDING_FORMAT_EXT 0x906E
#define GL_VERTEX_ATTRIB_ARRAY_BARRIER_BIT_EXT 0x00000001
#define GL_ELEMENT_ARRAY_BARRIER_BIT_EXT 0x00000002
#define GL_UNIFORM_BARRIER_BIT_EXT 0x00000004
#define GL_TEXTURE_FETCH_BARRIER_BIT_EXT 0x00000008
#define GL_SHADER_IMAGE_ACCESS_BARRIER_BIT_EXT 0x00000020
#define GL_COMMAND_BARRIER_BIT_EXT 0x00000040
#define GL_PIXEL_BUFFER_BARRIER_BIT_EXT 0x00000080
#define GL_TEXTURE_UPDATE_BARRIER_BIT_EXT 0x00000100
#define GL_BUFFER_UPDATE_BARRIER_BIT_EXT 0x00000200
#define GL_FRAMEBUFFER_BARRIER_BIT_EXT 0x00000400
#define GL_TRANSFORM_FEEDBACK_BARRIER_BIT_EXT 0x00000800
#define GL_ATOMIC_COUNTER_BARRIER_BIT_EXT 0x00001000
#define GL_ALL_BARRIER_BITS_EXT 0xFFFFFFFF

#endif

#ifdef GL_EXT_shared_texture_palette

#define GL_SHARED_TEXTURE_PALETTE_EXT 0x81FB

#endif

#ifdef GL_EXT_stencil_clear_tag

#define GL_STENCIL_TAG_BITS_EXT 0x88F2
#define GL_STENCIL_CLEAR_TAG_VALUE_EXT 0x88F3

#endif

#ifdef GL_EXT_stencil_two_side

#define GL_STENCIL_TEST_TWO_SIDE_EXT 0x8910
#define GL_ACTIVE_STENCIL_FACE_EXT 0x8911

#endif

#ifdef GL_EXT_stencil_wrap

#define GL_INCR_WRAP_EXT 0x8507
#define GL_DECR_WRAP_EXT 0x8508

#endif

#ifdef GL_EXT_texture

#define GL_ALPHA4_EXT 0x803B
#define GL_ALPHA8_EXT 0x803C
#define GL_ALPHA12_EXT 0x803D
#define GL_ALPHA16_EXT 0x803E
#define GL_LUMINANCE4_EXT 0x803F
#define GL_LUMINANCE8_EXT 0x8040
#define GL_LUMINANCE12_EXT 0x8041
#define GL_LUMINANCE16_EXT 0x8042
#define GL_LUMINANCE4_ALPHA4_EXT 0x8043
#define GL_LUMINANCE6_ALPHA2_EXT 0x8044
#define GL_LUMINANCE8_ALPHA8_EXT 0x8045
#define GL_LUMINANCE12_ALPHA4_EXT 0x8046
#define GL_LUMINANCE12_ALPHA12_EXT 0x8047
#define GL_LUMINANCE16_ALPHA16_EXT 0x8048
#define GL_INTENSITY_EXT 0x8049
#define GL_INTENSITY4_EXT 0x804A
#define GL_INTENSITY8_EXT 0x804B
#define GL_INTENSITY12_EXT 0x804C
#define GL_INTENSITY16_EXT 0x804D
#define GL_RGB2_EXT 0x804E
#define GL_RGB4_EXT 0x804F
#define GL_RGB5_EXT 0x8050
#define GL_RGB8_EXT 0x8051
#define GL_RGB10_EXT 0x8052
#define GL_RGB12_EXT 0x8053
#define GL_RGB16_EXT 0x8054
#define GL_RGBA2_EXT 0x8055
#define GL_RGBA4_EXT 0x8056
#define GL_RGB5_A1_EXT 0x8057
#define GL_RGBA8_EXT 0x8058
#define GL_RGB10_A2_EXT 0x8059
#define GL_RGBA12_EXT 0x805A
#define GL_RGBA16_EXT 0x805B
#define GL_TEXTURE_RED_SIZE_EXT 0x805C
#define GL_TEXTURE_GREEN_SIZE_EXT 0x805D
#define GL_TEXTURE_BLUE_SIZE_EXT 0x805E
#define GL_TEXTURE_ALPHA_SIZE_EXT 0x805F
#define GL_TEXTURE_LUMINANCE_SIZE_EXT 0x8060
#define GL_TEXTURE_INTENSITY_SIZE_EXT 0x8061
#define GL_REPLACE_EXT 0x8062
#define GL_PROXY_TEXTURE_1D_EXT 0x8063
#define GL_PROXY_TEXTURE_2D_EXT 0x8064
#define GL_TEXTURE_TOO_LARGE_EXT 0x8065

#endif

#ifdef GL_EXT_texture3D

#define GL_PACK_SKIP_IMAGES_EXT 0x806B
#define GL_PACK_IMAGE_HEIGHT_EXT 0x806C
#define GL_UNPACK_SKIP_IMAGES_EXT 0x806D
#define GL_UNPACK_IMAGE_HEIGHT_EXT 0x806E
#define GL_TEXTURE_3D_EXT 0x806F
#define GL_PROXY_TEXTURE_3D_EXT 0x8070
#define GL_TEXTURE_DEPTH_EXT 0x8071
#define GL_TEXTURE_WRAP_R_EXT 0x8072
#define GL_MAX_3D_TEXTURE_SIZE_EXT 0x8073

#endif

#ifdef GL_EXT_texture_array

#define GL_TEXTURE_1D_ARRAY_EXT 0x8C18
#define GL_PROXY_TEXTURE_1D_ARRAY_EXT 0x8C19
#define GL_TEXTURE_2D_ARRAY_EXT 0x8C1A
#define GL_PROXY_TEXTURE_2D_ARRAY_EXT 0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY_EXT 0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY_EXT 0x8C1D
#define GL_MAX_ARRAY_TEXTURE_LAYERS_EXT 0x88FF
#define GL_COMPARE_REF_DEPTH_TO_TEXTURE_EXT 0x884E

#endif

#ifdef GL_EXT_texture_buffer_object

#define GL_TEXTURE_BUFFER_EXT 0x8C2A
#define GL_MAX_TEXTURE_BUFFER_SIZE_EXT 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER_EXT 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING_EXT 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT_EXT 0x8C2E

#endif

#ifdef GL_EXT_texture_compression_dxt1

#define GL_COMPRESSED_RGB_S3TC_DXT1_EXT 0x83F0
#define GL_COMPRESSED_RGBA_S3TC_DXT1_EXT 0x83F1

#endif

#ifdef GL_EXT_texture_compression_latc

#define GL_COMPRESSED_LUMINANCE_LATC1_EXT 0x8C70
#define GL_COMPRESSED_SIGNED_LUMINANCE_LATC1_EXT 0x8C71
#define GL_COMPRESSED_LUMINANCE_ALPHA_LATC2_EXT 0x8C72
#define GL_COMPRESSED_SIGNED_LUMINANCE_ALPHA_LATC2_EXT 0x8C73

#endif

#ifdef GL_EXT_texture_compression_rgtc

#define GL_COMPRESSED_RED_RGTC1_EXT 0x8DBB
#define GL_COMPRESSED_SIGNED_RED_RGTC1_EXT 0x8DBC
#define GL_COMPRESSED_RED_GREEN_RGTC2_EXT 0x8DBD
#define GL_COMPRESSED_SIGNED_RED_GREEN_RGTC2_EXT 0x8DBE

#endif

#ifdef GL_EXT_texture_compression_s3tc

#define GL_COMPRESSED_RGBA_S3TC_DXT3_EXT 0x83F2
#define GL_COMPRESSED_RGBA_S3TC_DXT5_EXT 0x83F3

#endif

#ifdef GL_EXT_texture_env_combine

#define GL_COMBINE_EXT 0x8570
#define GL_COMBINE_RGB_EXT 0x8571
#define GL_COMBINE_ALPHA_EXT 0x8572
#define GL_RGB_SCALE_EXT 0x8573
#define GL_ADD_SIGNED_EXT 0x8574
#define GL_INTERPOLATE_EXT 0x8575
#define GL_CONSTANT_EXT 0x8576
#define GL_PRIMARY_COLOR_EXT 0x8577
#define GL_PREVIOUS_EXT 0x8578
#define GL_SOURCE0_RGB_EXT 0x8580
#define GL_SOURCE1_RGB_EXT 0x8581
#define GL_SOURCE2_RGB_EXT 0x8582
#define GL_SOURCE0_ALPHA_EXT 0x8588
#define GL_SOURCE1_ALPHA_EXT 0x8589
#define GL_SOURCE2_ALPHA_EXT 0x858A
#define GL_OPERAND0_RGB_EXT 0x8590
#define GL_OPERAND1_RGB_EXT 0x8591
#define GL_OPERAND2_RGB_EXT 0x8592
#define GL_OPERAND0_ALPHA_EXT 0x8598
#define GL_OPERAND1_ALPHA_EXT 0x8599
#define GL_OPERAND2_ALPHA_EXT 0x859A

#endif

#ifdef GL_EXT_texture_env_dot3

#define GL_DOT3_RGB_EXT 0x8740
#define GL_DOT3_RGBA_EXT 0x8741

#endif

#ifdef GL_EXT_texture_filter_anisotropic

#define GL_TEXTURE_MAX_ANISOTROPY_EXT 0x84FE
#define GL_MAX_TEXTURE_MAX_ANISOTROPY_EXT 0x84FF

#endif

#ifdef GL_EXT_texture_filter_minmax

#define GL_TEXTURE_REDUCTION_MODE_EXT 0x9366
#define GL_WEIGHTED_AVERAGE_EXT 0x9367

#endif

#ifdef GL_EXT_texture_integer

#define GL_RGBA32UI_EXT 0x8D70
#define GL_RGB32UI_EXT 0x8D71
#define GL_ALPHA32UI_EXT 0x8D72
#define GL_INTENSITY32UI_EXT 0x8D73
#define GL_LUMINANCE32UI_EXT 0x8D74
#define GL_LUMINANCE_ALPHA32UI_EXT 0x8D75
#define GL_RGBA16UI_EXT 0x8D76
#define GL_RGB16UI_EXT 0x8D77
#define GL_ALPHA16UI_EXT 0x8D78
#define GL_INTENSITY16UI_EXT 0x8D79
#define GL_LUMINANCE16UI_EXT 0x8D7A
#define GL_LUMINANCE_ALPHA16UI_EXT 0x8D7B
#define GL_RGBA8UI_EXT 0x8D7C
#define GL_RGB8UI_EXT 0x8D7D
#define GL_ALPHA8UI_EXT 0x8D7E
#define GL_INTENSITY8UI_EXT 0x8D7F
#define GL_LUMINANCE8UI_EXT 0x8D80
#define GL_LUMINANCE_ALPHA8UI_EXT 0x8D81
#define GL_RGBA32I_EXT 0x8D82
#define GL_RGB32I_EXT 0x8D83
#define GL_ALPHA32I_EXT 0x8D84
#define GL_INTENSITY32I_EXT 0x8D85
#define GL_LUMINANCE32I_EXT 0x8D86
#define GL_LUMINANCE_ALPHA32I_EXT 0x8D87
#define GL_RGBA16I_EXT 0x8D88
#define GL_RGB16I_EXT 0x8D89
#define GL_ALPHA16I_EXT 0x8D8A
#define GL_INTENSITY16I_EXT 0x8D8B
#define GL_LUMINANCE16I_EXT 0x8D8C
#define GL_LUMINANCE_ALPHA16I_EXT 0x8D8D
#define GL_RGBA8I_EXT 0x8D8E
#define GL_RGB8I_EXT 0x8D8F
#define GL_ALPHA8I_EXT 0x8D90
#define GL_INTENSITY8I_EXT 0x8D91
#define GL_LUMINANCE8I_EXT 0x8D92
#define GL_LUMINANCE_ALPHA8I_EXT 0x8D93
#define GL_RED_INTEGER_EXT 0x8D94
#define GL_GREEN_INTEGER_EXT 0x8D95
#define GL_BLUE_INTEGER_EXT 0x8D96
#define GL_ALPHA_INTEGER_EXT 0x8D97
#define GL_RGB_INTEGER_EXT 0x8D98
#define GL_RGBA_INTEGER_EXT 0x8D99
#define GL_BGR_INTEGER_EXT 0x8D9A
#define GL_BGRA_INTEGER_EXT 0x8D9B
#define GL_LUMINANCE_INTEGER_EXT 0x8D9C
#define GL_LUMINANCE_ALPHA_INTEGER_EXT 0x8D9D
#define GL_RGBA_INTEGER_MODE_EXT 0x8D9E

#endif

#ifdef GL_EXT_texture_lod_bias

#define GL_MAX_TEXTURE_LOD_BIAS_EXT 0x84FD
#define GL_TEXTURE_FILTER_CONTROL_EXT 0x8500
#define GL_TEXTURE_LOD_BIAS_EXT 0x8501

#endif

#ifdef GL_EXT_texture_mirror_clamp

#define GL_MIRROR_CLAMP_EXT 0x8742
#define GL_MIRROR_CLAMP_TO_EDGE_EXT 0x8743
#define GL_MIRROR_CLAMP_TO_BORDER_EXT 0x8912

#endif

#ifdef GL_EXT_texture_object

#define GL_TEXTURE_PRIORITY_EXT 0x8066
#define GL_TEXTURE_RESIDENT_EXT 0x8067
#define GL_TEXTURE_1D_BINDING_EXT 0x8068
#define GL_TEXTURE_2D_BINDING_EXT 0x8069
#define GL_TEXTURE_3D_BINDING_EXT 0x806A

#endif

#ifdef GL_EXT_texture_perturb_normal

#define GL_PERTURB_EXT 0x85AE
#define GL_TEXTURE_NORMAL_EXT 0x85AF

#endif

#ifdef GL_EXT_texture_shared_exponent

#define GL_RGB9_E5_EXT 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV_EXT 0x8C3E
#define GL_TEXTURE_SHARED_SIZE_EXT 0x8C3F

#endif

#ifdef GL_EXT_texture_snorm

#define GL_ALPHA_SNORM 0x9010
#define GL_LUMINANCE_SNORM 0x9011
#define GL_LUMINANCE_ALPHA_SNORM 0x9012
#define GL_INTENSITY_SNORM 0x9013
#define GL_ALPHA8_SNORM 0x9014
#define GL_LUMINANCE8_SNORM 0x9015
#define GL_LUMINANCE8_ALPHA8_SNORM 0x9016
#define GL_INTENSITY8_SNORM 0x9017
#define GL_ALPHA16_SNORM 0x9018
#define GL_LUMINANCE16_SNORM 0x9019
#define GL_LUMINANCE16_ALPHA16_SNORM 0x901A
#define GL_INTENSITY16_SNORM 0x901B
#define GL_RED_SNORM 0x8F90
#define GL_RG_SNORM 0x8F91
#define GL_RGB_SNORM 0x8F92
#define GL_RGBA_SNORM 0x8F93
#define GL_R8_SNORM 0x8F94
#define GL_RG8_SNORM 0x8F95
#define GL_RGB8_SNORM 0x8F96
#define GL_RGBA8_SNORM 0x8F97
#define GL_R16_SNORM 0x8F98
#define GL_RG16_SNORM 0x8F99
#define GL_RGB16_SNORM 0x8F9A
#define GL_RGBA16_SNORM 0x8F9B
#define GL_SIGNED_NORMALIZED 0x8F9C

#endif

#ifdef GL_EXT_texture_sRGB

#define GL_SRGB_EXT 0x8C40
#define GL_SRGB8_EXT 0x8C41
#define GL_SRGB_ALPHA_EXT 0x8C42
#define GL_SRGB8_ALPHA8_EXT 0x8C43
#define GL_SLUMINANCE_ALPHA_EXT 0x8C44
#define GL_SLUMINANCE8_ALPHA8_EXT 0x8C45
#define GL_SLUMINANCE_EXT 0x8C46
#define GL_SLUMINANCE8_EXT 0x8C47
#define GL_COMPRESSED_SRGB_EXT 0x8C48
#define GL_COMPRESSED_SRGB_ALPHA_EXT 0x8C49
#define GL_COMPRESSED_SLUMINANCE_EXT 0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA_EXT 0x8C4B
#define GL_COMPRESSED_SRGB_S3TC_DXT1_EXT 0x8C4C
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT1_EXT 0x8C4D
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT3_EXT 0x8C4E
#define GL_COMPRESSED_SRGB_ALPHA_S3TC_DXT5_EXT 0x8C4F

#endif

#ifdef GL_EXT_texture_sRGB_decode

#define GL_TEXTURE_SRGB_DECODE_EXT 0x8A48
#define GL_DECODE_EXT 0x8A49
#define GL_SKIP_DECODE_EXT 0x8A4A

#endif

#ifdef GL_EXT_texture_swizzle

#define GL_TEXTURE_SWIZZLE_R_EXT 0x8E42
#define GL_TEXTURE_SWIZZLE_G_EXT 0x8E43
#define GL_TEXTURE_SWIZZLE_B_EXT 0x8E44
#define GL_TEXTURE_SWIZZLE_A_EXT 0x8E45
#define GL_TEXTURE_SWIZZLE_RGBA_EXT 0x8E46

#endif

#ifdef GL_EXT_timer_query

#define GL_TIME_ELAPSED_EXT 0x88BF

#endif

#ifdef GL_EXT_transform_feedback

#define GL_TRANSFORM_FEEDBACK_BUFFER_EXT 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_EXT 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_EXT 0x8C85
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_EXT 0x8C8F
#define GL_INTERLEAVED_ATTRIBS_EXT 0x8C8C
#define GL_SEPARATE_ATTRIBS_EXT 0x8C8D
#define GL_PRIMITIVES_GENERATED_EXT 0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_EXT 0x8C88
#define GL_RASTERIZER_DISCARD_EXT 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_EXT 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_EXT 0x8C8B
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_EXT 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS_EXT 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_EXT 0x8C7F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH_EXT 0x8C76

#endif

#ifdef GL_EXT_transform_feedback2

#define GL_TRANSFORM_FEEDBACK_EXT 0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_EXT 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_EXT 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING_EXT 0x8E25

#endif

#ifdef GL_EXT_vertex_array

#define GL_VERTEX_ARRAY_EXT 0x8074
#define GL_NORMAL_ARRAY_EXT 0x8075
#define GL_COLOR_ARRAY_EXT 0x8076
#define GL_INDEX_ARRAY_EXT 0x8077
#define GL_TEXTURE_COORD_ARRAY_EXT 0x8078
#define GL_EDGE_FLAG_ARRAY_EXT 0x8079
#define GL_VERTEX_ARRAY_SIZE_EXT 0x807A
#define GL_VERTEX_ARRAY_TYPE_EXT 0x807B
#define GL_VERTEX_ARRAY_STRIDE_EXT 0x807C
#define GL_VERTEX_ARRAY_COUNT_EXT 0x807D
#define GL_NORMAL_ARRAY_TYPE_EXT 0x807E
#define GL_NORMAL_ARRAY_STRIDE_EXT 0x807F
#define GL_NORMAL_ARRAY_COUNT_EXT 0x8080
#define GL_COLOR_ARRAY_SIZE_EXT 0x8081
#define GL_COLOR_ARRAY_TYPE_EXT 0x8082
#define GL_COLOR_ARRAY_STRIDE_EXT 0x8083
#define GL_COLOR_ARRAY_COUNT_EXT 0x8084
#define GL_INDEX_ARRAY_TYPE_EXT 0x8085
#define GL_INDEX_ARRAY_STRIDE_EXT 0x8086
#define GL_INDEX_ARRAY_COUNT_EXT 0x8087
#define GL_TEXTURE_COORD_ARRAY_SIZE_EXT 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE_EXT 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE_EXT 0x808A
#define GL_TEXTURE_COORD_ARRAY_COUNT_EXT 0x808B
#define GL_EDGE_FLAG_ARRAY_STRIDE_EXT 0x808C
#define GL_EDGE_FLAG_ARRAY_COUNT_EXT 0x808D
#define GL_VERTEX_ARRAY_POINTER_EXT 0x808E
#define GL_NORMAL_ARRAY_POINTER_EXT 0x808F
#define GL_COLOR_ARRAY_POINTER_EXT 0x8090
#define GL_INDEX_ARRAY_POINTER_EXT 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER_EXT 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER_EXT 0x8093

#endif

#ifdef GL_EXT_vertex_array_bgra


#endif

#ifdef GL_EXT_vertex_attrib_64bit

#define GL_DOUBLE_VEC2_EXT 0x8FFC
#define GL_DOUBLE_VEC3_EXT 0x8FFD
#define GL_DOUBLE_VEC4_EXT 0x8FFE
#define GL_DOUBLE_MAT2_EXT 0x8F46
#define GL_DOUBLE_MAT3_EXT 0x8F47
#define GL_DOUBLE_MAT4_EXT 0x8F48
#define GL_DOUBLE_MAT2x3_EXT 0x8F49
#define GL_DOUBLE_MAT2x4_EXT 0x8F4A
#define GL_DOUBLE_MAT3x2_EXT 0x8F4B
#define GL_DOUBLE_MAT3x4_EXT 0x8F4C
#define GL_DOUBLE_MAT4x2_EXT 0x8F4D
#define GL_DOUBLE_MAT4x3_EXT 0x8F4E

#endif

#ifdef GL_EXT_vertex_shader

#define GL_VERTEX_SHADER_EXT 0x8780
#define GL_VERTEX_SHADER_BINDING_EXT 0x8781
#define GL_OP_INDEX_EXT 0x8782
#define GL_OP_NEGATE_EXT 0x8783
#define GL_OP_DOT3_EXT 0x8784
#define GL_OP_DOT4_EXT 0x8785
#define GL_OP_MUL_EXT 0x8786
#define GL_OP_ADD_EXT 0x8787
#define GL_OP_MADD_EXT 0x8788
#define GL_OP_FRAC_EXT 0x8789
#define GL_OP_MAX_EXT 0x878A
#define GL_OP_MIN_EXT 0x878B
#define GL_OP_SET_GE_EXT 0x878C
#define GL_OP_SET_LT_EXT 0x878D
#define GL_OP_CLAMP_EXT 0x878E
#define GL_OP_FLOOR_EXT 0x878F
#define GL_OP_ROUND_EXT 0x8790
#define GL_OP_EXP_BASE_2_EXT 0x8791
#define GL_OP_LOG_BASE_2_EXT 0x8792
#define GL_OP_POWER_EXT 0x8793
#define GL_OP_RECIP_EXT 0x8794
#define GL_OP_RECIP_SQRT_EXT 0x8795
#define GL_OP_SUB_EXT 0x8796
#define GL_OP_CROSS_PRODUCT_EXT 0x8797
#define GL_OP_MULTIPLY_MATRIX_EXT 0x8798
#define GL_OP_MOV_EXT 0x8799
#define GL_OUTPUT_VERTEX_EXT 0x879A
#define GL_OUTPUT_COLOR0_EXT 0x879B
#define GL_OUTPUT_COLOR1_EXT 0x879C
#define GL_OUTPUT_TEXTURE_COORD0_EXT 0x879D
#define GL_OUTPUT_TEXTURE_COORD1_EXT 0x879E
#define GL_OUTPUT_TEXTURE_COORD2_EXT 0x879F
#define GL_OUTPUT_TEXTURE_COORD3_EXT 0x87A0
#define GL_OUTPUT_TEXTURE_COORD4_EXT 0x87A1
#define GL_OUTPUT_TEXTURE_COORD5_EXT 0x87A2
#define GL_OUTPUT_TEXTURE_COORD6_EXT 0x87A3
#define GL_OUTPUT_TEXTURE_COORD7_EXT 0x87A4
#define GL_OUTPUT_TEXTURE_COORD8_EXT 0x87A5
#define GL_OUTPUT_TEXTURE_COORD9_EXT 0x87A6
#define GL_OUTPUT_TEXTURE_COORD10_EXT 0x87A7
#define GL_OUTPUT_TEXTURE_COORD11_EXT 0x87A8
#define GL_OUTPUT_TEXTURE_COORD12_EXT 0x87A9
#define GL_OUTPUT_TEXTURE_COORD13_EXT 0x87AA
#define GL_OUTPUT_TEXTURE_COORD14_EXT 0x87AB
#define GL_OUTPUT_TEXTURE_COORD15_EXT 0x87AC
#define GL_OUTPUT_TEXTURE_COORD16_EXT 0x87AD
#define GL_OUTPUT_TEXTURE_COORD17_EXT 0x87AE
#define GL_OUTPUT_TEXTURE_COORD18_EXT 0x87AF
#define GL_OUTPUT_TEXTURE_COORD19_EXT 0x87B0
#define GL_OUTPUT_TEXTURE_COORD20_EXT 0x87B1
#define GL_OUTPUT_TEXTURE_COORD21_EXT 0x87B2
#define GL_OUTPUT_TEXTURE_COORD22_EXT 0x87B3
#define GL_OUTPUT_TEXTURE_COORD23_EXT 0x87B4
#define GL_OUTPUT_TEXTURE_COORD24_EXT 0x87B5
#define GL_OUTPUT_TEXTURE_COORD25_EXT 0x87B6
#define GL_OUTPUT_TEXTURE_COORD26_EXT 0x87B7
#define GL_OUTPUT_TEXTURE_COORD27_EXT 0x87B8
#define GL_OUTPUT_TEXTURE_COORD28_EXT 0x87B9
#define GL_OUTPUT_TEXTURE_COORD29_EXT 0x87BA
#define GL_OUTPUT_TEXTURE_COORD30_EXT 0x87BB
#define GL_OUTPUT_TEXTURE_COORD31_EXT 0x87BC
#define GL_OUTPUT_FOG_EXT 0x87BD
#define GL_SCALAR_EXT 0x87BE
#define GL_VECTOR_EXT 0x87BF
#define GL_MATRIX_EXT 0x87C0
#define GL_VARIANT_EXT 0x87C1
#define GL_INVARIANT_EXT 0x87C2
#define GL_LOCAL_CONSTANT_EXT 0x87C3
#define GL_LOCAL_EXT 0x87C4
#define GL_MAX_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87C5
#define GL_MAX_VERTEX_SHADER_VARIANTS_EXT 0x87C6
#define GL_MAX_VERTEX_SHADER_INVARIANTS_EXT 0x87C7
#define GL_MAX_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87C8
#define GL_MAX_VERTEX_SHADER_LOCALS_EXT 0x87C9
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CA
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_VARIANTS_EXT 0x87CB
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87CC
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_INVARIANTS_EXT 0x87CD
#define GL_MAX_OPTIMIZED_VERTEX_SHADER_LOCALS_EXT 0x87CE
#define GL_VERTEX_SHADER_INSTRUCTIONS_EXT 0x87CF
#define GL_VERTEX_SHADER_VARIANTS_EXT 0x87D0
#define GL_VERTEX_SHADER_INVARIANTS_EXT 0x87D1
#define GL_VERTEX_SHADER_LOCAL_CONSTANTS_EXT 0x87D2
#define GL_VERTEX_SHADER_LOCALS_EXT 0x87D3
#define GL_VERTEX_SHADER_OPTIMIZED_EXT 0x87D4
#define GL_X_EXT 0x87D5
#define GL_Y_EXT 0x87D6
#define GL_Z_EXT 0x87D7
#define GL_W_EXT 0x87D8
#define GL_NEGATIVE_X_EXT 0x87D9
#define GL_NEGATIVE_Y_EXT 0x87DA
#define GL_NEGATIVE_Z_EXT 0x87DB
#define GL_NEGATIVE_W_EXT 0x87DC
#define GL_ZERO_EXT 0x87DD
#define GL_ONE_EXT 0x87DE
#define GL_NEGATIVE_ONE_EXT 0x87DF
#define GL_NORMALIZED_RANGE_EXT 0x87E0
#define GL_FULL_RANGE_EXT 0x87E1
#define GL_CURRENT_VERTEX_EXT 0x87E2
#define GL_MVP_MATRIX_EXT 0x87E3
#define GL_VARIANT_VALUE_EXT 0x87E4
#define GL_VARIANT_DATATYPE_EXT 0x87E5
#define GL_VARIANT_ARRAY_STRIDE_EXT 0x87E6
#define GL_VARIANT_ARRAY_TYPE_EXT 0x87E7
#define GL_VARIANT_ARRAY_EXT 0x87E8
#define GL_VARIANT_ARRAY_POINTER_EXT 0x87E9
#define GL_INVARIANT_VALUE_EXT 0x87EA
#define GL_INVARIANT_DATATYPE_EXT 0x87EB
#define GL_LOCAL_CONSTANT_VALUE_EXT 0x87EC
#define GL_LOCAL_CONSTANT_DATATYPE_EXT 0x87ED

#endif

#ifdef GL_EXT_vertex_weighting

#define GL_MODELVIEW0_STACK_DEPTH_EXT GL_MODELVIEW_STACK_DEPTH
#define GL_MODELVIEW1_STACK_DEPTH_EXT 0x8502
#define GL_MODELVIEW0_MATRIX_EXT GL_MODELVIEW_MATRIX
#define GL_MODELVIEW1_MATRIX_EXT 0x8506
#define GL_VERTEX_WEIGHTING_EXT 0x8509
#define GL_MODELVIEW0_EXT GL_MODELVIEW
#define GL_MODELVIEW1_EXT 0x850A
#define GL_CURRENT_VERTEX_WEIGHT_EXT 0x850B
#define GL_VERTEX_WEIGHT_ARRAY_EXT 0x850C
#define GL_VERTEX_WEIGHT_ARRAY_SIZE_EXT 0x850D
#define GL_VERTEX_WEIGHT_ARRAY_TYPE_EXT 0x850E
#define GL_VERTEX_WEIGHT_ARRAY_STRIDE_EXT 0x850F
#define GL_VERTEX_WEIGHT_ARRAY_POINTER_EXT 0x8510

#endif

#ifdef GL_EXT_x11_sync_object

#define GL_SYNC_X11_FENCE_EXT 0x90E1

#endif

#ifdef GL_FfdMaskSGIX

#define GL_TEXTURE_DEFORMATION_BIT_SGIX 0x00000001
#define GL_GEOMETRY_DEFORMATION_BIT_SGIX 0x00000002

#endif

#ifdef GL_HP_convolution_border_modes

#define GL_IGNORE_BORDER_HP 0x8150
#define GL_CONSTANT_BORDER_HP 0x8151
#define GL_REPLICATE_BORDER_HP 0x8153
#define GL_CONVOLUTION_BORDER_COLOR_HP 0x8154

#endif

#ifdef GL_HP_image_transform

#define GL_IMAGE_SCALE_X_HP 0x8155
#define GL_IMAGE_SCALE_Y_HP 0x8156
#define GL_IMAGE_TRANSLATE_X_HP 0x8157
#define GL_IMAGE_TRANSLATE_Y_HP 0x8158
#define GL_IMAGE_ROTATE_ANGLE_HP 0x8159
#define GL_IMAGE_ROTATE_ORIGIN_X_HP 0x815A
#define GL_IMAGE_ROTATE_ORIGIN_Y_HP 0x815B
#define GL_IMAGE_MAG_FILTER_HP 0x815C
#define GL_IMAGE_MIN_FILTER_HP 0x815D
#define GL_IMAGE_CUBIC_WEIGHT_HP 0x815E
#define GL_CUBIC_HP 0x815F
#define GL_AVERAGE_HP 0x8160
#define GL_IMAGE_TRANSFORM_2D_HP 0x8161
#define GL_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8162
#define GL_PROXY_POST_IMAGE_TRANSFORM_COLOR_TABLE_HP 0x8163

#endif

#ifdef GL_HP_occlusion_test

#define GL_OCCLUSION_TEST_HP 0x8165
#define GL_OCCLUSION_TEST_RESULT_HP 0x8166

#endif

#ifdef GL_HP_texture_lighting

#define GL_TEXTURE_LIGHTING_MODE_HP 0x8167
#define GL_TEXTURE_POST_SPECULAR_HP 0x8168
#define GL_TEXTURE_PRE_SPECULAR_HP 0x8169

#endif

#ifdef GL_IBM_cull_vertex

#define GL_CULL_VERTEX_IBM 103050

#endif

#ifdef GL_IBM_rasterpos_clip

#define GL_RASTER_POSITION_UNCLIPPED_IBM 0x19262

#endif

#ifdef GL_IBM_static_data

#define GL_ALL_STATIC_DATA_IBM 103060
#define GL_STATIC_VERTEX_ARRAY_IBM 103061

#endif

#ifdef GL_IBM_texture_mirrored_repeat

#define GL_MIRRORED_REPEAT_IBM 0x8370

#endif

#ifdef GL_IBM_vertex_array_lists

#define GL_VERTEX_ARRAY_LIST_IBM 103070
#define GL_NORMAL_ARRAY_LIST_IBM 103071
#define GL_COLOR_ARRAY_LIST_IBM 103072
#define GL_INDEX_ARRAY_LIST_IBM 103073
#define GL_TEXTURE_COORD_ARRAY_LIST_IBM 103074
#define GL_EDGE_FLAG_ARRAY_LIST_IBM 103075
#define GL_FOG_COORDINATE_ARRAY_LIST_IBM 103076
#define GL_SECONDARY_COLOR_ARRAY_LIST_IBM 103077
#define GL_VERTEX_ARRAY_LIST_STRIDE_IBM 103080
#define GL_NORMAL_ARRAY_LIST_STRIDE_IBM 103081
#define GL_COLOR_ARRAY_LIST_STRIDE_IBM 103082
#define GL_INDEX_ARRAY_LIST_STRIDE_IBM 103083
#define GL_TEXTURE_COORD_ARRAY_LIST_STRIDE_IBM 103084
#define GL_EDGE_FLAG_ARRAY_LIST_STRIDE_IBM 103085
#define GL_FOG_COORDINATE_ARRAY_LIST_STRIDE_IBM 103086
#define GL_SECONDARY_COLOR_ARRAY_LIST_STRIDE_IBM 103087

#endif

#ifdef GL_INGR_color_clamp

#define GL_RED_MIN_CLAMP_INGR 0x8560
#define GL_GREEN_MIN_CLAMP_INGR 0x8561
#define GL_BLUE_MIN_CLAMP_INGR 0x8562
#define GL_ALPHA_MIN_CLAMP_INGR 0x8563
#define GL_RED_MAX_CLAMP_INGR 0x8564
#define GL_GREEN_MAX_CLAMP_INGR 0x8565
#define GL_BLUE_MAX_CLAMP_INGR 0x8566
#define GL_ALPHA_MAX_CLAMP_INGR 0x8567

#endif

#ifdef GL_INGR_interlace_read

#define GL_INTERLACE_READ_INGR 0x8568

#endif

#ifdef GL_INTEL_map_texture

#define GL_TEXTURE_MEMORY_LAYOUT_INTEL 0x83FF
#define GL_LAYOUT_DEFAULT_INTEL 0
#define GL_LAYOUT_LINEAR_INTEL 1
#define GL_LAYOUT_LINEAR_CPU_CACHED_INTEL 2

#endif

#ifdef GL_INTEL_parallel_arrays

#define GL_PARALLEL_ARRAYS_INTEL 0x83F4
#define GL_VERTEX_ARRAY_PARALLEL_POINTERS_INTEL 0x83F5
#define GL_NORMAL_ARRAY_PARALLEL_POINTERS_INTEL 0x83F6
#define GL_COLOR_ARRAY_PARALLEL_POINTERS_INTEL 0x83F7
#define GL_TEXTURE_COORD_ARRAY_PARALLEL_POINTERS_INTEL 0x83F8

#endif

#ifdef GL_INTEL_performance_query

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

#ifdef GL_KHR_blend_equation_advanced

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

#ifdef GL_KHR_context_flush_control

#define GL_CONTEXT_RELEASE_BEHAVIOR 0x82FB
#define GL_NONE 0x0000
#define GL_CONTEXT_RELEASE_BEHAVIOR_FLUSH 0x82FC
#define WGL_CONTEXT_RELEASE_BEHAVIOR_ARB 0x2097
#define WGL_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB 0x0000
#define WGL_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB 0x2098
#define GLX_CONTEXT_RELEASE_BEHAVIOR_ARB 0x2097
#define GLX_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB 0x0000
#define GLX_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB 0x2098

#endif

#ifdef GL_KHR_debug

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

#ifdef GL_KHR_no_error

#define GL_CONTEXT_FLAG_NO_ERROR_BIT_KHR 0x00000008

#endif

#ifdef GL_KHR_robustness

#define GL_GUILTY_CONTEXT_RESET 0x8253
#define GL_INNOCENT_CONTEXT_RESET 0x8254
#define GL_UNKNOWN_CONTEXT_RESET 0x8255
#define GL_CONTEXT_ROBUST_ACCESS 0x90F3
#define GL_RESET_NOTIFICATION_STRATEGY 0x8256
#define GL_LOSE_CONTEXT_ON_RESET 0x8252
#define GL_NO_RESET_NOTIFICATION 0x8261
#define GL_CONTEXT_LOST 0x0507

#endif

#ifdef GL_KHR_texture_compression_astc_ldr

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

#ifdef GL_MESAX_texture_stack

#define GL_TEXTURE_1D_STACK_MESAX 0x8759
#define GL_TEXTURE_2D_STACK_MESAX 0x875A
#define GL_PROXY_TEXTURE_1D_STACK_MESAX 0x875B
#define GL_PROXY_TEXTURE_2D_STACK_MESAX 0x875C
#define GL_TEXTURE_1D_STACK_BINDING_MESAX 0x875D
#define GL_TEXTURE_2D_STACK_BINDING_MESAX 0x875E

#endif

#ifdef GL_MESA_pack_invert

#define GL_PACK_INVERT_MESA 0x8758

#endif

#ifdef GL_MESA_ycbcr_texture

#define GL_UNSIGNED_SHORT_8_8_MESA 0x85BA
#define GL_UNSIGNED_SHORT_8_8_REV_MESA 0x85BB
#define GL_YCBCR_MESA 0x8757

#endif

#ifdef GL_NVX_gpu_memory_info

#define GL_GPU_MEMORY_INFO_DEDICATED_VIDMEM_NVX 0x9047
#define GL_GPU_MEMORY_INFO_TOTAL_AVAILABLE_MEMORY_NVX 0x9048
#define GL_GPU_MEMORY_INFO_CURRENT_AVAILABLE_VIDMEM_NVX 0x9049
#define GL_GPU_MEMORY_INFO_EVICTION_COUNT_NVX 0x904A
#define GL_GPU_MEMORY_INFO_EVICTED_MEMORY_NVX 0x904B

#endif

#ifdef GL_NV_blend_equation_advanced

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

#ifdef GL_NV_compute_program5

#define GL_COMPUTE_PROGRAM_NV 0x90FB
#define GL_COMPUTE_PROGRAM_PARAMETER_BUFFER_NV 0x90FC

#endif

#ifdef GL_NV_conditional_render

#define GL_QUERY_WAIT_NV 0x8E13
#define GL_QUERY_NO_WAIT_NV 0x8E14
#define GL_QUERY_BY_REGION_WAIT_NV 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT_NV 0x8E16

#endif

#ifdef GL_NV_conservative_raster

#define GL_CONSERVATIVE_RASTERIZATION_NV 0x9346
#define GL_SUBPIXEL_PRECISION_BIAS_X_BITS_NV 0x9347
#define GL_SUBPIXEL_PRECISION_BIAS_Y_BITS_NV 0x9348
#define GL_MAX_SUBPIXEL_PRECISION_BIAS_BITS_NV 0x9349

#endif

#ifdef GL_NV_copy_depth_to_color

#define GL_DEPTH_STENCIL_TO_RGBA_NV 0x886E
#define GL_DEPTH_STENCIL_TO_BGRA_NV 0x886F

#endif

#ifdef GL_NV_deep_texture3D

#define GL_MAX_DEEP_3D_TEXTURE_WIDTH_HEIGHT_NV 0x90D0
#define GL_MAX_DEEP_3D_TEXTURE_DEPTH_NV 0x90D1

#endif

#ifdef GL_NV_depth_buffer_float

#define GL_DEPTH_COMPONENT32F_NV 0x8DAB
#define GL_DEPTH32F_STENCIL8_NV 0x8DAC
#define GL_FLOAT_32_UNSIGNED_INT_24_8_REV_NV 0x8DAD
#define GL_DEPTH_BUFFER_FLOAT_MODE_NV 0x8DAF

#endif

#ifdef GL_NV_depth_clamp

#define GL_DEPTH_CLAMP_NV 0x864F

#endif

#ifdef GL_NV_draw_texture


#endif

#ifdef GL_NV_evaluators

#define GL_EVAL_2D_NV 0x86C0
#define GL_EVAL_TRIANGULAR_2D_NV 0x86C1
#define GL_MAP_TESSELLATION_NV 0x86C2
#define GL_MAP_ATTRIB_U_ORDER_NV 0x86C3
#define GL_MAP_ATTRIB_V_ORDER_NV 0x86C4
#define GL_EVAL_FRACTIONAL_TESSELLATION_NV 0x86C5
#define GL_EVAL_VERTEX_ATTRIB0_NV 0x86C6
#define GL_EVAL_VERTEX_ATTRIB1_NV 0x86C7
#define GL_EVAL_VERTEX_ATTRIB2_NV 0x86C8
#define GL_EVAL_VERTEX_ATTRIB3_NV 0x86C9
#define GL_EVAL_VERTEX_ATTRIB4_NV 0x86CA
#define GL_EVAL_VERTEX_ATTRIB5_NV 0x86CB
#define GL_EVAL_VERTEX_ATTRIB6_NV 0x86CC
#define GL_EVAL_VERTEX_ATTRIB7_NV 0x86CD
#define GL_EVAL_VERTEX_ATTRIB8_NV 0x86CE
#define GL_EVAL_VERTEX_ATTRIB9_NV 0x86CF
#define GL_EVAL_VERTEX_ATTRIB10_NV 0x86D0
#define GL_EVAL_VERTEX_ATTRIB11_NV 0x86D1
#define GL_EVAL_VERTEX_ATTRIB12_NV 0x86D2
#define GL_EVAL_VERTEX_ATTRIB13_NV 0x86D3
#define GL_EVAL_VERTEX_ATTRIB14_NV 0x86D4
#define GL_EVAL_VERTEX_ATTRIB15_NV 0x86D5
#define GL_MAX_MAP_TESSELLATION_NV 0x86D6
#define GL_MAX_RATIONAL_EVAL_ORDER_NV 0x86D7

#endif

#ifdef GL_NV_explicit_multisample

#define GL_SAMPLE_POSITION_NV 0x8E50
#define GL_SAMPLE_MASK_NV 0x8E51
#define GL_SAMPLE_MASK_VALUE_NV 0x8E52
#define GL_TEXTURE_BINDING_RENDERBUFFER_NV 0x8E53
#define GL_TEXTURE_RENDERBUFFER_DATA_STORE_BINDING_NV 0x8E54
#define GL_TEXTURE_RENDERBUFFER_NV 0x8E55
#define GL_SAMPLER_RENDERBUFFER_NV 0x8E56
#define GL_INT_SAMPLER_RENDERBUFFER_NV 0x8E57
#define GL_UNSIGNED_INT_SAMPLER_RENDERBUFFER_NV 0x8E58
#define GL_MAX_SAMPLE_MASK_WORDS_NV 0x8E59

#endif

#ifdef GL_NV_fence

#define GL_ALL_COMPLETED_NV 0x84F2
#define GL_FENCE_STATUS_NV 0x84F3
#define GL_FENCE_CONDITION_NV 0x84F4

#endif

#ifdef GL_NV_fill_rectangle

#define GL_FILL_RECTANGLE_NV 0x933C

#endif

#ifdef GL_NV_float_buffer

#define GL_FLOAT_R_NV 0x8880
#define GL_FLOAT_RG_NV 0x8881
#define GL_FLOAT_RGB_NV 0x8882
#define GL_FLOAT_RGBA_NV 0x8883
#define GL_FLOAT_R16_NV 0x8884
#define GL_FLOAT_R32_NV 0x8885
#define GL_FLOAT_RG16_NV 0x8886
#define GL_FLOAT_RG32_NV 0x8887
#define GL_FLOAT_RGB16_NV 0x8888
#define GL_FLOAT_RGB32_NV 0x8889
#define GL_FLOAT_RGBA16_NV 0x888A
#define GL_FLOAT_RGBA32_NV 0x888B
#define GL_TEXTURE_FLOAT_COMPONENTS_NV 0x888C
#define GL_FLOAT_CLEAR_COLOR_VALUE_NV 0x888D
#define GL_FLOAT_RGBA_MODE_NV 0x888E

#endif

#ifdef GL_NV_fog_distance

#define GL_FOG_DISTANCE_MODE_NV 0x855A
#define GL_EYE_RADIAL_NV 0x855B
#define GL_EYE_PLANE_ABSOLUTE_NV 0x855C
#define GL_EYE_PLANE 0x2502

#endif

#ifdef GL_NV_fragment_coverage_to_color

#define GL_FRAGMENT_COVERAGE_TO_COLOR_NV 0x92DD
#define GL_FRAGMENT_COVERAGE_COLOR_NV 0x92DE

#endif

#ifdef GL_NV_fragment_program

#define GL_MAX_FRAGMENT_PROGRAM_LOCAL_PARAMETERS_NV 0x8868
#define GL_FRAGMENT_PROGRAM_NV 0x8870
#define GL_MAX_TEXTURE_COORDS_NV 0x8871
#define GL_MAX_TEXTURE_IMAGE_UNITS_NV 0x8872
#define GL_FRAGMENT_PROGRAM_BINDING_NV 0x8873
#define GL_PROGRAM_ERROR_STRING_NV 0x8874

#endif

#ifdef GL_NV_fragment_program2

#define GL_MAX_PROGRAM_EXEC_INSTRUCTIONS_NV 0x88F4
#define GL_MAX_PROGRAM_CALL_DEPTH_NV 0x88F5
#define GL_MAX_PROGRAM_IF_DEPTH_NV 0x88F6
#define GL_MAX_PROGRAM_LOOP_DEPTH_NV 0x88F7
#define GL_MAX_PROGRAM_LOOP_COUNT_NV 0x88F8

#endif

#ifdef GL_NV_framebuffer_mixed_samples

#define GL_COVERAGE_MODULATION_TABLE_NV 0x9331
#define GL_COLOR_SAMPLES_NV 0x8E20
#define GL_DEPTH_SAMPLES_NV 0x932D
#define GL_STENCIL_SAMPLES_NV 0x932E
#define GL_MIXED_DEPTH_SAMPLES_SUPPORTED_NV 0x932F
#define GL_MIXED_STENCIL_SAMPLES_SUPPORTED_NV 0x9330
#define GL_COVERAGE_MODULATION_NV 0x9332
#define GL_COVERAGE_MODULATION_TABLE_SIZE_NV 0x9333

#endif

#ifdef GL_NV_framebuffer_multisample_coverage

#define GL_RENDERBUFFER_COVERAGE_SAMPLES_NV 0x8CAB
#define GL_RENDERBUFFER_COLOR_SAMPLES_NV 0x8E10
#define GL_MAX_MULTISAMPLE_COVERAGE_MODES_NV 0x8E11
#define GL_MULTISAMPLE_COVERAGE_MODES_NV 0x8E12

#endif

#ifdef GL_NV_geometry_program4

#define GL_GEOMETRY_PROGRAM_NV 0x8C26
#define GL_MAX_PROGRAM_OUTPUT_VERTICES_NV 0x8C27
#define GL_MAX_PROGRAM_TOTAL_OUTPUT_COMPONENTS_NV 0x8C28

#endif

#ifdef GL_NV_gpu_program4

#define GL_MIN_PROGRAM_TEXEL_OFFSET_NV 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET_NV 0x8905
#define GL_PROGRAM_ATTRIB_COMPONENTS_NV 0x8906
#define GL_PROGRAM_RESULT_COMPONENTS_NV 0x8907
#define GL_MAX_PROGRAM_ATTRIB_COMPONENTS_NV 0x8908
#define GL_MAX_PROGRAM_RESULT_COMPONENTS_NV 0x8909
#define GL_MAX_PROGRAM_GENERIC_ATTRIBS_NV 0x8DA5
#define GL_MAX_PROGRAM_GENERIC_RESULTS_NV 0x8DA6

#endif

#ifdef GL_NV_gpu_program5

#define GL_MAX_GEOMETRY_PROGRAM_INVOCATIONS_NV 0x8E5A
#define GL_MIN_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5B
#define GL_MAX_FRAGMENT_INTERPOLATION_OFFSET_NV 0x8E5C
#define GL_FRAGMENT_PROGRAM_INTERPOLATION_OFFSET_BITS_NV 0x8E5D
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET_NV 0x8E5F
#define GL_MAX_PROGRAM_SUBROUTINE_PARAMETERS_NV 0x8F44
#define GL_MAX_PROGRAM_SUBROUTINE_NUM_NV 0x8F45

#endif

#ifdef GL_NV_gpu_shader5


#endif

#ifdef GL_NV_half_float

#define GL_HALF_FLOAT_NV 0x140B

#endif

#ifdef GL_NV_internalformat_sample_query

#define GL_MULTISAMPLES_NV 0x9371
#define GL_SUPERSAMPLE_SCALE_X_NV 0x9372
#define GL_SUPERSAMPLE_SCALE_Y_NV 0x9373
#define GL_CONFORMANT_NV 0x9374

#endif

#ifdef GL_NV_light_max_exponent

#define GL_MAX_SHININESS_NV 0x8504
#define GL_MAX_SPOT_EXPONENT_NV 0x8505

#endif

#ifdef GL_NV_multisample_coverage

#define GL_COVERAGE_SAMPLES_NV 0x80A9

#endif

#ifdef GL_NV_multisample_filter_hint

#define GL_MULTISAMPLE_FILTER_HINT_NV 0x8534

#endif

#ifdef GL_NV_occlusion_query

#define GL_PIXEL_COUNTER_BITS_NV 0x8864
#define GL_CURRENT_OCCLUSION_QUERY_ID_NV 0x8865
#define GL_PIXEL_COUNT_NV 0x8866
#define GL_PIXEL_COUNT_AVAILABLE_NV 0x8867

#endif

#ifdef GL_NV_packed_depth_stencil

#define GL_DEPTH_STENCIL_NV 0x84F9
#define GL_UNSIGNED_INT_24_8_NV 0x84FA

#endif

#ifdef GL_NV_parameter_buffer_object

#define GL_MAX_PROGRAM_PARAMETER_BUFFER_BINDINGS_NV 0x8DA0
#define GL_MAX_PROGRAM_PARAMETER_BUFFER_SIZE_NV 0x8DA1
#define GL_VERTEX_PROGRAM_PARAMETER_BUFFER_NV 0x8DA2
#define GL_GEOMETRY_PROGRAM_PARAMETER_BUFFER_NV 0x8DA3
#define GL_FRAGMENT_PROGRAM_PARAMETER_BUFFER_NV 0x8DA4

#endif

#ifdef GL_NV_path_rendering

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

#ifdef GL_NV_path_rendering_shared_edge

#define GL_SHARED_EDGE_NV 0xC0

#endif

#ifdef GL_NV_pixel_data_range

#define GL_WRITE_PIXEL_DATA_RANGE_NV 0x8878
#define GL_READ_PIXEL_DATA_RANGE_NV 0x8879
#define GL_WRITE_PIXEL_DATA_RANGE_LENGTH_NV 0x887A
#define GL_READ_PIXEL_DATA_RANGE_LENGTH_NV 0x887B
#define GL_WRITE_PIXEL_DATA_RANGE_POINTER_NV 0x887C
#define GL_READ_PIXEL_DATA_RANGE_POINTER_NV 0x887D

#endif

#ifdef GL_NV_point_sprite

#define GL_POINT_SPRITE_NV 0x8861
#define GL_COORD_REPLACE_NV 0x8862
#define GL_POINT_SPRITE_R_MODE_NV 0x8863

#endif

#ifdef GL_NV_present_video

#define GL_FRAME_NV 0x8E26
#define GL_FIELDS_NV 0x8E27
#define GL_CURRENT_TIME_NV 0x8E28
#define GL_NUM_FILL_STREAMS_NV 0x8E29
#define GL_PRESENT_TIME_NV 0x8E2A
#define GL_PRESENT_DURATION_NV 0x8E2B

#endif

#ifdef GL_NV_primitive_restart

#define GL_PRIMITIVE_RESTART_NV 0x8558
#define GL_PRIMITIVE_RESTART_INDEX_NV 0x8559

#endif

#ifdef GL_NV_register_combiners

#define GL_REGISTER_COMBINERS_NV 0x8522
#define GL_VARIABLE_A_NV 0x8523
#define GL_VARIABLE_B_NV 0x8524
#define GL_VARIABLE_C_NV 0x8525
#define GL_VARIABLE_D_NV 0x8526
#define GL_VARIABLE_E_NV 0x8527
#define GL_VARIABLE_F_NV 0x8528
#define GL_VARIABLE_G_NV 0x8529
#define GL_CONSTANT_COLOR0_NV 0x852A
#define GL_CONSTANT_COLOR1_NV 0x852B
#define GL_PRIMARY_COLOR_NV 0x852C
#define GL_SECONDARY_COLOR_NV 0x852D
#define GL_SPARE0_NV 0x852E
#define GL_SPARE1_NV 0x852F
#define GL_DISCARD_NV 0x8530
#define GL_E_TIMES_F_NV 0x8531
#define GL_SPARE0_PLUS_SECONDARY_COLOR_NV 0x8532
#define GL_UNSIGNED_IDENTITY_NV 0x8536
#define GL_UNSIGNED_INVERT_NV 0x8537
#define GL_EXPAND_NORMAL_NV 0x8538
#define GL_EXPAND_NEGATE_NV 0x8539
#define GL_HALF_BIAS_NORMAL_NV 0x853A
#define GL_HALF_BIAS_NEGATE_NV 0x853B
#define GL_SIGNED_IDENTITY_NV 0x853C
#define GL_SIGNED_NEGATE_NV 0x853D
#define GL_SCALE_BY_TWO_NV 0x853E
#define GL_SCALE_BY_FOUR_NV 0x853F
#define GL_SCALE_BY_ONE_HALF_NV 0x8540
#define GL_BIAS_BY_NEGATIVE_ONE_HALF_NV 0x8541
#define GL_COMBINER_INPUT_NV 0x8542
#define GL_COMBINER_MAPPING_NV 0x8543
#define GL_COMBINER_COMPONENT_USAGE_NV 0x8544
#define GL_COMBINER_AB_DOT_PRODUCT_NV 0x8545
#define GL_COMBINER_CD_DOT_PRODUCT_NV 0x8546
#define GL_COMBINER_MUX_SUM_NV 0x8547
#define GL_COMBINER_SCALE_NV 0x8548
#define GL_COMBINER_BIAS_NV 0x8549
#define GL_COMBINER_AB_OUTPUT_NV 0x854A
#define GL_COMBINER_CD_OUTPUT_NV 0x854B
#define GL_COMBINER_SUM_OUTPUT_NV 0x854C
#define GL_MAX_GENERAL_COMBINERS_NV 0x854D
#define GL_NUM_GENERAL_COMBINERS_NV 0x854E
#define GL_COLOR_SUM_CLAMP_NV 0x854F
#define GL_COMBINER0_NV 0x8550
#define GL_COMBINER1_NV 0x8551
#define GL_COMBINER2_NV 0x8552
#define GL_COMBINER3_NV 0x8553
#define GL_COMBINER4_NV 0x8554
#define GL_COMBINER5_NV 0x8555
#define GL_COMBINER6_NV 0x8556
#define GL_COMBINER7_NV 0x8557
#define GL_ZERO 0
#define GL_FOG 0x0B60

#endif

#ifdef GL_NV_register_combiners2

#define GL_PER_STAGE_CONSTANTS_NV 0x8535

#endif

#ifdef GL_NV_sample_locations

#define GL_SAMPLE_LOCATION_SUBPIXEL_BITS_NV 0x933D
#define GL_SAMPLE_LOCATION_PIXEL_GRID_WIDTH_NV 0x933E
#define GL_SAMPLE_LOCATION_PIXEL_GRID_HEIGHT_NV 0x933F
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_TABLE_SIZE_NV 0x9340
#define GL_SAMPLE_LOCATION_NV 0x8E50
#define GL_PROGRAMMABLE_SAMPLE_LOCATION_NV 0x9341
#define GL_FRAMEBUFFER_PROGRAMMABLE_SAMPLE_LOCATIONS_NV 0x9342
#define GL_FRAMEBUFFER_SAMPLE_LOCATION_PIXEL_GRID_NV 0x9343

#endif

#ifdef GL_NV_shader_buffer_load

#define GL_BUFFER_GPU_ADDRESS_NV 0x8F1D
#define GL_GPU_ADDRESS_NV 0x8F34
#define GL_MAX_SHADER_BUFFER_ADDRESS_NV 0x8F35

#endif

#ifdef GL_NV_shader_buffer_store

#define GL_SHADER_GLOBAL_ACCESS_BARRIER_BIT_NV 0x00000010
#define GL_READ_WRITE 0x88BA
#define GL_WRITE_ONLY 0x88B9

#endif

#ifdef GL_NV_shader_thread_group

#define GL_WARP_SIZE_NV 0x9339
#define GL_WARPS_PER_SM_NV 0x933A
#define GL_SM_COUNT_NV 0x933B

#endif

#ifdef GL_NV_tessellation_program5

#define GL_MAX_PROGRAM_PATCH_ATTRIBS_NV 0x86D8
#define GL_TESS_CONTROL_PROGRAM_NV 0x891E
#define GL_TESS_EVALUATION_PROGRAM_NV 0x891F
#define GL_TESS_CONTROL_PROGRAM_PARAMETER_BUFFER_NV 0x8C74
#define GL_TESS_EVALUATION_PROGRAM_PARAMETER_BUFFER_NV 0x8C75

#endif

#ifdef GL_NV_texgen_emboss

#define GL_EMBOSS_LIGHT_NV 0x855D
#define GL_EMBOSS_CONSTANT_NV 0x855E
#define GL_EMBOSS_MAP_NV 0x855F

#endif

#ifdef GL_NV_texgen_reflection

#define GL_NORMAL_MAP_NV 0x8511
#define GL_REFLECTION_MAP_NV 0x8512

#endif

#ifdef GL_NV_texture_env_combine4

#define GL_COMBINE4_NV 0x8503
#define GL_SOURCE3_RGB_NV 0x8583
#define GL_SOURCE3_ALPHA_NV 0x858B
#define GL_OPERAND3_RGB_NV 0x8593
#define GL_OPERAND3_ALPHA_NV 0x859B

#endif

#ifdef GL_NV_texture_expand_normal

#define GL_TEXTURE_UNSIGNED_REMAP_MODE_NV 0x888F

#endif

#ifdef GL_NV_texture_multisample

#define GL_TEXTURE_COVERAGE_SAMPLES_NV 0x9045
#define GL_TEXTURE_COLOR_SAMPLES_NV 0x9046

#endif

#ifdef GL_NV_texture_rectangle

#define GL_TEXTURE_RECTANGLE_NV 0x84F5
#define GL_TEXTURE_BINDING_RECTANGLE_NV 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE_NV 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE_NV 0x84F8

#endif

#ifdef GL_NV_texture_shader

#define GL_OFFSET_TEXTURE_RECTANGLE_NV 0x864C
#define GL_OFFSET_TEXTURE_RECTANGLE_SCALE_NV 0x864D
#define GL_DOT_PRODUCT_TEXTURE_RECTANGLE_NV 0x864E
#define GL_RGBA_UNSIGNED_DOT_PRODUCT_MAPPING_NV 0x86D9
#define GL_UNSIGNED_INT_S8_S8_8_8_NV 0x86DA
#define GL_UNSIGNED_INT_8_8_S8_S8_REV_NV 0x86DB
#define GL_DSDT_MAG_INTENSITY_NV 0x86DC
#define GL_SHADER_CONSISTENT_NV 0x86DD
#define GL_TEXTURE_SHADER_NV 0x86DE
#define GL_SHADER_OPERATION_NV 0x86DF
#define GL_CULL_MODES_NV 0x86E0
#define GL_OFFSET_TEXTURE_MATRIX_NV 0x86E1
#define GL_OFFSET_TEXTURE_SCALE_NV 0x86E2
#define GL_OFFSET_TEXTURE_BIAS_NV 0x86E3
#define GL_OFFSET_TEXTURE_2D_MATRIX_NV GL_OFFSET_TEXTURE_MATRIX_NV
#define GL_OFFSET_TEXTURE_2D_SCALE_NV GL_OFFSET_TEXTURE_SCALE_NV
#define GL_OFFSET_TEXTURE_2D_BIAS_NV GL_OFFSET_TEXTURE_BIAS_NV
#define GL_PREVIOUS_TEXTURE_INPUT_NV 0x86E4
#define GL_CONST_EYE_NV 0x86E5
#define GL_PASS_THROUGH_NV 0x86E6
#define GL_CULL_FRAGMENT_NV 0x86E7
#define GL_OFFSET_TEXTURE_2D_NV 0x86E8
#define GL_DEPENDENT_AR_TEXTURE_2D_NV 0x86E9
#define GL_DEPENDENT_GB_TEXTURE_2D_NV 0x86EA
#define GL_DOT_PRODUCT_NV 0x86EC
#define GL_DOT_PRODUCT_DEPTH_REPLACE_NV 0x86ED
#define GL_DOT_PRODUCT_TEXTURE_2D_NV 0x86EE
#define GL_DOT_PRODUCT_TEXTURE_CUBE_MAP_NV 0x86F0
#define GL_DOT_PRODUCT_DIFFUSE_CUBE_MAP_NV 0x86F1
#define GL_DOT_PRODUCT_REFLECT_CUBE_MAP_NV 0x86F2
#define GL_DOT_PRODUCT_CONST_EYE_REFLECT_CUBE_MAP_NV 0x86F3
#define GL_HILO_NV 0x86F4
#define GL_DSDT_NV 0x86F5
#define GL_DSDT_MAG_NV 0x86F6
#define GL_DSDT_MAG_VIB_NV 0x86F7
#define GL_HILO16_NV 0x86F8
#define GL_SIGNED_HILO_NV 0x86F9
#define GL_SIGNED_HILO16_NV 0x86FA
#define GL_SIGNED_RGBA_NV 0x86FB
#define GL_SIGNED_RGBA8_NV 0x86FC
#define GL_SIGNED_RGB_NV 0x86FE
#define GL_SIGNED_RGB8_NV 0x86FF
#define GL_SIGNED_LUMINANCE_NV 0x8701
#define GL_SIGNED_LUMINANCE8_NV 0x8702
#define GL_SIGNED_LUMINANCE_ALPHA_NV 0x8703
#define GL_SIGNED_LUMINANCE8_ALPHA8_NV 0x8704
#define GL_SIGNED_ALPHA_NV 0x8705
#define GL_SIGNED_ALPHA8_NV 0x8706
#define GL_SIGNED_INTENSITY_NV 0x8707
#define GL_SIGNED_INTENSITY8_NV 0x8708
#define GL_DSDT8_NV 0x8709
#define GL_DSDT8_MAG8_NV 0x870A
#define GL_DSDT8_MAG8_INTENSITY8_NV 0x870B
#define GL_SIGNED_RGB_UNSIGNED_ALPHA_NV 0x870C
#define GL_SIGNED_RGB8_UNSIGNED_ALPHA8_NV 0x870D
#define GL_HI_SCALE_NV 0x870E
#define GL_LO_SCALE_NV 0x870F
#define GL_DS_SCALE_NV 0x8710
#define GL_DT_SCALE_NV 0x8711
#define GL_MAGNITUDE_SCALE_NV 0x8712
#define GL_VIBRANCE_SCALE_NV 0x8713
#define GL_HI_BIAS_NV 0x8714
#define GL_LO_BIAS_NV 0x8715
#define GL_DS_BIAS_NV 0x8716
#define GL_DT_BIAS_NV 0x8717
#define GL_MAGNITUDE_BIAS_NV 0x8718
#define GL_VIBRANCE_BIAS_NV 0x8719
#define GL_TEXTURE_BORDER_VALUES_NV 0x871A
#define GL_TEXTURE_HI_SIZE_NV 0x871B
#define GL_TEXTURE_LO_SIZE_NV 0x871C
#define GL_TEXTURE_DS_SIZE_NV 0x871D
#define GL_TEXTURE_DT_SIZE_NV 0x871E
#define GL_TEXTURE_MAG_SIZE_NV 0x871F

#endif

#ifdef GL_NV_texture_shader2

#define GL_DOT_PRODUCT_TEXTURE_3D_NV 0x86EF

#endif

#ifdef GL_NV_texture_shader3

#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_NV 0x8850
#define GL_OFFSET_PROJECTIVE_TEXTURE_2D_SCALE_NV 0x8851
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8852
#define GL_OFFSET_PROJECTIVE_TEXTURE_RECTANGLE_SCALE_NV 0x8853
#define GL_OFFSET_HILO_TEXTURE_2D_NV 0x8854
#define GL_OFFSET_HILO_TEXTURE_RECTANGLE_NV 0x8855
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_2D_NV 0x8856
#define GL_OFFSET_HILO_PROJECTIVE_TEXTURE_RECTANGLE_NV 0x8857
#define GL_DEPENDENT_HILO_TEXTURE_2D_NV 0x8858
#define GL_DEPENDENT_RGB_TEXTURE_3D_NV 0x8859
#define GL_DEPENDENT_RGB_TEXTURE_CUBE_MAP_NV 0x885A
#define GL_DOT_PRODUCT_PASS_THROUGH_NV 0x885B
#define GL_DOT_PRODUCT_TEXTURE_1D_NV 0x885C
#define GL_DOT_PRODUCT_AFFINE_DEPTH_REPLACE_NV 0x885D
#define GL_HILO8_NV 0x885E
#define GL_SIGNED_HILO8_NV 0x885F
#define GL_FORCE_BLUE_TO_ONE_NV 0x8860

#endif

#ifdef GL_NV_transform_feedback

#define GL_BACK_PRIMARY_COLOR_NV 0x8C77
#define GL_BACK_SECONDARY_COLOR_NV 0x8C78
#define GL_TEXTURE_COORD_NV 0x8C79
#define GL_CLIP_DISTANCE_NV 0x8C7A
#define GL_VERTEX_ID_NV 0x8C7B
#define GL_PRIMITIVE_ID_NV 0x8C7C
#define GL_GENERIC_ATTRIB_NV 0x8C7D
#define GL_TRANSFORM_FEEDBACK_ATTRIBS_NV 0x8C7E
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE_NV 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_NV 0x8C80
#define GL_ACTIVE_VARYINGS_NV 0x8C81
#define GL_ACTIVE_VARYING_MAX_LENGTH_NV 0x8C82
#define GL_TRANSFORM_FEEDBACK_VARYINGS_NV 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START_NV 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE_NV 0x8C85
#define GL_TRANSFORM_FEEDBACK_RECORD_NV 0x8C86
#define GL_PRIMITIVES_GENERATED_NV 0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_NV 0x8C88
#define GL_RASTERIZER_DISCARD_NV 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_ATTRIBS_NV 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_NV 0x8C8B
#define GL_INTERLEAVED_ATTRIBS_NV 0x8C8C
#define GL_SEPARATE_ATTRIBS_NV 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER_NV 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING_NV 0x8C8F
#define GL_LAYER_NV 0x8DAA
#define GL_NEXT_BUFFER_NV -2
#define GL_SKIP_COMPONENTS4_NV -3
#define GL_SKIP_COMPONENTS3_NV -4
#define GL_SKIP_COMPONENTS2_NV -5
#define GL_SKIP_COMPONENTS1_NV -6

#endif

#ifdef GL_NV_transform_feedback2

#define GL_TRANSFORM_FEEDBACK_NV 0x8E22
#define GL_TRANSFORM_FEEDBACK_BUFFER_PAUSED_NV 0x8E23
#define GL_TRANSFORM_FEEDBACK_BUFFER_ACTIVE_NV 0x8E24
#define GL_TRANSFORM_FEEDBACK_BINDING_NV 0x8E25

#endif

#ifdef GL_NV_uniform_buffer_unified_memory

#define GL_UNIFORM_BUFFER_UNIFIED_NV 0x936E
#define GL_UNIFORM_BUFFER_ADDRESS_NV 0x936F
#define GL_UNIFORM_BUFFER_LENGTH_NV 0x9370

#endif

#ifdef GL_NV_vdpau_interop

#define GL_SURFACE_STATE_NV 0x86EB
#define GL_SURFACE_REGISTERED_NV 0x86FD
#define GL_SURFACE_MAPPED_NV 0x8700
#define GL_WRITE_DISCARD_NV 0x88BE

#endif

#ifdef GL_NV_vertex_array_range

#define GL_VERTEX_ARRAY_RANGE_NV 0x851D
#define GL_VERTEX_ARRAY_RANGE_LENGTH_NV 0x851E
#define GL_VERTEX_ARRAY_RANGE_VALID_NV 0x851F
#define GL_MAX_VERTEX_ARRAY_RANGE_ELEMENT_NV 0x8520
#define GL_VERTEX_ARRAY_RANGE_POINTER_NV 0x8521

#endif

#ifdef GL_NV_vertex_array_range2

#define GL_VERTEX_ARRAY_RANGE_WITHOUT_FLUSH_NV 0x8533

#endif

#ifdef GL_NV_vertex_attrib_integer_64bit


#endif

#ifdef GL_NV_vertex_buffer_unified_memory

#define GL_VERTEX_ATTRIB_ARRAY_UNIFIED_NV 0x8F1E
#define GL_ELEMENT_ARRAY_UNIFIED_NV 0x8F1F
#define GL_VERTEX_ATTRIB_ARRAY_ADDRESS_NV 0x8F20
#define GL_VERTEX_ARRAY_ADDRESS_NV 0x8F21
#define GL_NORMAL_ARRAY_ADDRESS_NV 0x8F22
#define GL_COLOR_ARRAY_ADDRESS_NV 0x8F23
#define GL_INDEX_ARRAY_ADDRESS_NV 0x8F24
#define GL_TEXTURE_COORD_ARRAY_ADDRESS_NV 0x8F25
#define GL_EDGE_FLAG_ARRAY_ADDRESS_NV 0x8F26
#define GL_SECONDARY_COLOR_ARRAY_ADDRESS_NV 0x8F27
#define GL_FOG_COORD_ARRAY_ADDRESS_NV 0x8F28
#define GL_ELEMENT_ARRAY_ADDRESS_NV 0x8F29
#define GL_VERTEX_ATTRIB_ARRAY_LENGTH_NV 0x8F2A
#define GL_VERTEX_ARRAY_LENGTH_NV 0x8F2B
#define GL_NORMAL_ARRAY_LENGTH_NV 0x8F2C
#define GL_COLOR_ARRAY_LENGTH_NV 0x8F2D
#define GL_INDEX_ARRAY_LENGTH_NV 0x8F2E
#define GL_TEXTURE_COORD_ARRAY_LENGTH_NV 0x8F2F
#define GL_EDGE_FLAG_ARRAY_LENGTH_NV 0x8F30
#define GL_SECONDARY_COLOR_ARRAY_LENGTH_NV 0x8F31
#define GL_FOG_COORD_ARRAY_LENGTH_NV 0x8F32
#define GL_ELEMENT_ARRAY_LENGTH_NV 0x8F33
#define GL_DRAW_INDIRECT_UNIFIED_NV 0x8F40
#define GL_DRAW_INDIRECT_ADDRESS_NV 0x8F41
#define GL_DRAW_INDIRECT_LENGTH_NV 0x8F42

#endif

#ifdef GL_NV_vertex_program

#define GL_VERTEX_PROGRAM_NV 0x8620
#define GL_VERTEX_STATE_PROGRAM_NV 0x8621
#define GL_ATTRIB_ARRAY_SIZE_NV 0x8623
#define GL_ATTRIB_ARRAY_STRIDE_NV 0x8624
#define GL_ATTRIB_ARRAY_TYPE_NV 0x8625
#define GL_CURRENT_ATTRIB_NV 0x8626
#define GL_PROGRAM_LENGTH_NV 0x8627
#define GL_PROGRAM_STRING_NV 0x8628
#define GL_MODELVIEW_PROJECTION_NV 0x8629
#define GL_IDENTITY_NV 0x862A
#define GL_INVERSE_NV 0x862B
#define GL_TRANSPOSE_NV 0x862C
#define GL_INVERSE_TRANSPOSE_NV 0x862D
#define GL_MAX_TRACK_MATRIX_STACK_DEPTH_NV 0x862E
#define GL_MAX_TRACK_MATRICES_NV 0x862F
#define GL_MATRIX0_NV 0x8630
#define GL_MATRIX1_NV 0x8631
#define GL_MATRIX2_NV 0x8632
#define GL_MATRIX3_NV 0x8633
#define GL_MATRIX4_NV 0x8634
#define GL_MATRIX5_NV 0x8635
#define GL_MATRIX6_NV 0x8636
#define GL_MATRIX7_NV 0x8637
#define GL_CURRENT_MATRIX_STACK_DEPTH_NV 0x8640
#define GL_CURRENT_MATRIX_NV 0x8641
#define GL_VERTEX_PROGRAM_POINT_SIZE_NV 0x8642
#define GL_VERTEX_PROGRAM_TWO_SIDE_NV 0x8643
#define GL_PROGRAM_PARAMETER_NV 0x8644
#define GL_ATTRIB_ARRAY_POINTER_NV 0x8645
#define GL_PROGRAM_TARGET_NV 0x8646
#define GL_PROGRAM_RESIDENT_NV 0x8647
#define GL_TRACK_MATRIX_NV 0x8648
#define GL_TRACK_MATRIX_TRANSFORM_NV 0x8649
#define GL_VERTEX_PROGRAM_BINDING_NV 0x864A
#define GL_PROGRAM_ERROR_POSITION_NV 0x864B
#define GL_VERTEX_ATTRIB_ARRAY0_NV 0x8650
#define GL_VERTEX_ATTRIB_ARRAY1_NV 0x8651
#define GL_VERTEX_ATTRIB_ARRAY2_NV 0x8652
#define GL_VERTEX_ATTRIB_ARRAY3_NV 0x8653
#define GL_VERTEX_ATTRIB_ARRAY4_NV 0x8654
#define GL_VERTEX_ATTRIB_ARRAY5_NV 0x8655
#define GL_VERTEX_ATTRIB_ARRAY6_NV 0x8656
#define GL_VERTEX_ATTRIB_ARRAY7_NV 0x8657
#define GL_VERTEX_ATTRIB_ARRAY8_NV 0x8658
#define GL_VERTEX_ATTRIB_ARRAY9_NV 0x8659
#define GL_VERTEX_ATTRIB_ARRAY10_NV 0x865A
#define GL_VERTEX_ATTRIB_ARRAY11_NV 0x865B
#define GL_VERTEX_ATTRIB_ARRAY12_NV 0x865C
#define GL_VERTEX_ATTRIB_ARRAY13_NV 0x865D
#define GL_VERTEX_ATTRIB_ARRAY14_NV 0x865E
#define GL_VERTEX_ATTRIB_ARRAY15_NV 0x865F
#define GL_MAP1_VERTEX_ATTRIB0_4_NV 0x8660
#define GL_MAP1_VERTEX_ATTRIB1_4_NV 0x8661
#define GL_MAP1_VERTEX_ATTRIB2_4_NV 0x8662
#define GL_MAP1_VERTEX_ATTRIB3_4_NV 0x8663
#define GL_MAP1_VERTEX_ATTRIB4_4_NV 0x8664
#define GL_MAP1_VERTEX_ATTRIB5_4_NV 0x8665
#define GL_MAP1_VERTEX_ATTRIB6_4_NV 0x8666
#define GL_MAP1_VERTEX_ATTRIB7_4_NV 0x8667
#define GL_MAP1_VERTEX_ATTRIB8_4_NV 0x8668
#define GL_MAP1_VERTEX_ATTRIB9_4_NV 0x8669
#define GL_MAP1_VERTEX_ATTRIB10_4_NV 0x866A
#define GL_MAP1_VERTEX_ATTRIB11_4_NV 0x866B
#define GL_MAP1_VERTEX_ATTRIB12_4_NV 0x866C
#define GL_MAP1_VERTEX_ATTRIB13_4_NV 0x866D
#define GL_MAP1_VERTEX_ATTRIB14_4_NV 0x866E
#define GL_MAP1_VERTEX_ATTRIB15_4_NV 0x866F
#define GL_MAP2_VERTEX_ATTRIB0_4_NV 0x8670
#define GL_MAP2_VERTEX_ATTRIB1_4_NV 0x8671
#define GL_MAP2_VERTEX_ATTRIB2_4_NV 0x8672
#define GL_MAP2_VERTEX_ATTRIB3_4_NV 0x8673
#define GL_MAP2_VERTEX_ATTRIB4_4_NV 0x8674
#define GL_MAP2_VERTEX_ATTRIB5_4_NV 0x8675
#define GL_MAP2_VERTEX_ATTRIB6_4_NV 0x8676
#define GL_MAP2_VERTEX_ATTRIB7_4_NV 0x8677
#define GL_MAP2_VERTEX_ATTRIB8_4_NV 0x8678
#define GL_MAP2_VERTEX_ATTRIB9_4_NV 0x8679
#define GL_MAP2_VERTEX_ATTRIB10_4_NV 0x867A
#define GL_MAP2_VERTEX_ATTRIB11_4_NV 0x867B
#define GL_MAP2_VERTEX_ATTRIB12_4_NV 0x867C
#define GL_MAP2_VERTEX_ATTRIB13_4_NV 0x867D
#define GL_MAP2_VERTEX_ATTRIB14_4_NV 0x867E
#define GL_MAP2_VERTEX_ATTRIB15_4_NV 0x867F

#endif

#ifdef GL_NV_vertex_program2_option


#endif

#ifdef GL_NV_vertex_program3


#endif

#ifdef GL_NV_vertex_program4

#define GL_VERTEX_ATTRIB_ARRAY_INTEGER_NV 0x88FD

#endif

#ifdef GL_NV_video_capture

#define GL_VIDEO_BUFFER_NV 0x9020
#define GL_VIDEO_BUFFER_BINDING_NV 0x9021
#define GL_FIELD_UPPER_NV 0x9022
#define GL_FIELD_LOWER_NV 0x9023
#define GL_NUM_VIDEO_CAPTURE_STREAMS_NV 0x9024
#define GL_NEXT_VIDEO_CAPTURE_BUFFER_STATUS_NV 0x9025
#define GL_VIDEO_CAPTURE_TO_422_SUPPORTED_NV 0x9026
#define GL_LAST_VIDEO_CAPTURE_STATUS_NV 0x9027
#define GL_VIDEO_BUFFER_PITCH_NV 0x9028
#define GL_VIDEO_COLOR_CONVERSION_MATRIX_NV 0x9029
#define GL_VIDEO_COLOR_CONVERSION_MAX_NV 0x902A
#define GL_VIDEO_COLOR_CONVERSION_MIN_NV 0x902B
#define GL_VIDEO_COLOR_CONVERSION_OFFSET_NV 0x902C
#define GL_VIDEO_BUFFER_INTERNAL_FORMAT_NV 0x902D
#define GL_PARTIAL_SUCCESS_NV 0x902E
#define GL_SUCCESS_NV 0x902F
#define GL_FAILURE_NV 0x9030
#define GL_YCBYCR8_422_NV 0x9031
#define GL_YCBAYCR8A_4224_NV 0x9032
#define GL_Z6Y10Z6CB10Z6Y10Z6CR10_422_NV 0x9033
#define GL_Z6Y10Z6CB10Z6A10Z6Y10Z6CR10Z6A10_4224_NV 0x9034
#define GL_Z4Y12Z4CB12Z4Y12Z4CR12_422_NV 0x9035
#define GL_Z4Y12Z4CB12Z4A12Z4Y12Z4CR12Z4A12_4224_NV 0x9036
#define GL_Z4Y12Z4CB12Z4CR12_444_NV 0x9037
#define GL_VIDEO_CAPTURE_FRAME_WIDTH_NV 0x9038
#define GL_VIDEO_CAPTURE_FRAME_HEIGHT_NV 0x9039
#define GL_VIDEO_CAPTURE_FIELD_UPPER_HEIGHT_NV 0x903A
#define GL_VIDEO_CAPTURE_FIELD_LOWER_HEIGHT_NV 0x903B
#define GL_VIDEO_CAPTURE_SURFACE_ORIGIN_NV 0x903C

#endif

#ifdef GL_OES_read_format

#define GL_IMPLEMENTATION_COLOR_READ_TYPE_OES 0x8B9A
#define GL_IMPLEMENTATION_COLOR_READ_FORMAT_OES 0x8B9B

#endif

#ifdef GL_OML_interlace

#define GL_INTERLACE_OML 0x8980
#define GL_INTERLACE_READ_OML 0x8981

#endif

#ifdef GL_OML_resample

#define GL_PACK_RESAMPLE_OML 0x8984
#define GL_UNPACK_RESAMPLE_OML 0x8985
#define GL_RESAMPLE_REPLICATE_OML 0x8986
#define GL_RESAMPLE_ZERO_FILL_OML 0x8987
#define GL_RESAMPLE_AVERAGE_OML 0x8988
#define GL_RESAMPLE_DECIMATE_OML 0x8989

#endif

#ifdef GL_OML_subsample

#define GL_FORMAT_SUBSAMPLE_24_24_OML 0x8982
#define GL_FORMAT_SUBSAMPLE_244_244_OML 0x8983

#endif

#ifdef GL_OVR_multiview

#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_NUM_VIEWS_OVR 0x9630
#define GL_FRAMEBUFFER_ATTACHMENT_TEXTURE_BASE_VIEW_INDEX_OVR 0x9632
#define GL_MAX_VIEWS_OVR 0x9631
#define GL_FRAMEBUFFER_INCOMPLETE_VIEW_TARGETS_OVR 0x9633

#endif

#ifdef GL_PGI_misc_hints

#define GL_PREFER_DOUBLEBUFFER_HINT_PGI 0x1A1F8
#define GL_CONSERVE_MEMORY_HINT_PGI 0x1A1FD
#define GL_RECLAIM_MEMORY_HINT_PGI 0x1A1FE
#define GL_NATIVE_GRAPHICS_HANDLE_PGI 0x1A202
#define GL_NATIVE_GRAPHICS_BEGIN_HINT_PGI 0x1A203
#define GL_NATIVE_GRAPHICS_END_HINT_PGI 0x1A204
#define GL_ALWAYS_FAST_HINT_PGI 0x1A20C
#define GL_ALWAYS_SOFT_HINT_PGI 0x1A20D
#define GL_ALLOW_DRAW_OBJ_HINT_PGI 0x1A20E
#define GL_ALLOW_DRAW_WIN_HINT_PGI 0x1A20F
#define GL_ALLOW_DRAW_FRG_HINT_PGI 0x1A210
#define GL_ALLOW_DRAW_MEM_HINT_PGI 0x1A211
#define GL_STRICT_DEPTHFUNC_HINT_PGI 0x1A216
#define GL_STRICT_LIGHTING_HINT_PGI 0x1A217
#define GL_STRICT_SCISSOR_HINT_PGI 0x1A218
#define GL_FULL_STIPPLE_HINT_PGI 0x1A219
#define GL_CLIP_NEAR_HINT_PGI 0x1A220
#define GL_CLIP_FAR_HINT_PGI 0x1A221
#define GL_WIDE_LINE_HINT_PGI 0x1A222
#define GL_BACK_NORMALS_HINT_PGI 0x1A223

#endif

#ifdef GL_PGI_vertex_hints

#define GL_VERTEX_DATA_HINT_PGI 0x1A22A
#define GL_VERTEX_CONSISTENT_HINT_PGI 0x1A22B
#define GL_MATERIAL_SIDE_HINT_PGI 0x1A22C
#define GL_MAX_VERTEX_HINT_PGI 0x1A22D
#define GL_COLOR3_BIT_PGI 0x00010000
#define GL_COLOR4_BIT_PGI 0x00020000
#define GL_EDGEFLAG_BIT_PGI 0x00040000
#define GL_INDEX_BIT_PGI 0x00080000
#define GL_MAT_AMBIENT_BIT_PGI 0x00100000
#define GL_MAT_AMBIENT_AND_DIFFUSE_BIT_PGI 0x00200000
#define GL_MAT_DIFFUSE_BIT_PGI 0x00400000
#define GL_MAT_EMISSION_BIT_PGI 0x00800000
#define GL_MAT_COLOR_INDEXES_BIT_PGI 0x01000000
#define GL_MAT_SHININESS_BIT_PGI 0x02000000
#define GL_MAT_SPECULAR_BIT_PGI 0x04000000
#define GL_NORMAL_BIT_PGI 0x08000000
#define GL_TEXCOORD1_BIT_PGI 0x10000000
#define GL_TEXCOORD2_BIT_PGI 0x20000000
#define GL_TEXCOORD3_BIT_PGI 0x40000000
#define GL_TEXCOORD4_BIT_PGI 0x80000000
#define GL_VERTEX23_BIT_PGI 0x00000004
#define GL_VERTEX4_BIT_PGI 0x00000008

#endif

#ifdef GL_REND_screen_coordinates

#define GL_SCREEN_COORDINATES_REND 0x8490
#define GL_INVERTED_SCREEN_W_REND 0x8491

#endif

#ifdef GL_S3_s3tc

#define GL_RGB_S3TC 0x83A0
#define GL_RGB4_S3TC 0x83A1
#define GL_RGBA_S3TC 0x83A2
#define GL_RGBA4_S3TC 0x83A3

#endif

#ifdef GL_SGIS_detail_texture

#define GL_DETAIL_TEXTURE_2D_SGIS 0x8095
#define GL_DETAIL_TEXTURE_2D_BINDING_SGIS 0x8096
#define GL_LINEAR_DETAIL_SGIS 0x8097
#define GL_LINEAR_DETAIL_ALPHA_SGIS 0x8098
#define GL_LINEAR_DETAIL_COLOR_SGIS 0x8099
#define GL_DETAIL_TEXTURE_LEVEL_SGIS 0x809A
#define GL_DETAIL_TEXTURE_MODE_SGIS 0x809B
#define GL_DETAIL_TEXTURE_FUNC_POINTS_SGIS 0x809C

#endif

#ifdef GL_SGIS_fog_function

#define GL_FOG_FUNC_SGIS 0x812A
#define GL_FOG_FUNC_POINTS_SGIS 0x812B
#define GL_MAX_FOG_FUNC_POINTS_SGIS 0x812C

#endif

#ifdef GL_SGIS_generate_mipmap

#define GL_GENERATE_MIPMAP_SGIS 0x8191
#define GL_GENERATE_MIPMAP_HINT_SGIS 0x8192

#endif

#ifdef GL_SGIS_multisample

#define GL_MULTISAMPLE_SGIS 0x809D
#define GL_SAMPLE_ALPHA_TO_MASK_SGIS 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE_SGIS 0x809F
#define GL_SAMPLE_MASK_SGIS 0x80A0
#define GL_1PASS_SGIS 0x80A1
#define GL_2PASS_0_SGIS 0x80A2
#define GL_2PASS_1_SGIS 0x80A3
#define GL_4PASS_0_SGIS 0x80A4
#define GL_4PASS_1_SGIS 0x80A5
#define GL_4PASS_2_SGIS 0x80A6
#define GL_4PASS_3_SGIS 0x80A7
#define GL_SAMPLE_BUFFERS_SGIS 0x80A8
#define GL_SAMPLES_SGIS 0x80A9
#define GL_SAMPLE_MASK_VALUE_SGIS 0x80AA
#define GL_SAMPLE_MASK_INVERT_SGIS 0x80AB
#define GL_SAMPLE_PATTERN_SGIS 0x80AC

#endif

#ifdef GL_SGIS_pixel_texture

#define GL_PIXEL_TEXTURE_SGIS 0x8353
#define GL_PIXEL_FRAGMENT_RGB_SOURCE_SGIS 0x8354
#define GL_PIXEL_FRAGMENT_ALPHA_SOURCE_SGIS 0x8355
#define GL_PIXEL_GROUP_COLOR_SGIS 0x8356

#endif

#ifdef GL_SGIS_point_line_texgen

#define GL_EYE_DISTANCE_TO_POINT_SGIS 0x81F0
#define GL_OBJECT_DISTANCE_TO_POINT_SGIS 0x81F1
#define GL_EYE_DISTANCE_TO_LINE_SGIS 0x81F2
#define GL_OBJECT_DISTANCE_TO_LINE_SGIS 0x81F3
#define GL_EYE_POINT_SGIS 0x81F4
#define GL_OBJECT_POINT_SGIS 0x81F5
#define GL_EYE_LINE_SGIS 0x81F6
#define GL_OBJECT_LINE_SGIS 0x81F7

#endif

#ifdef GL_SGIS_point_parameters

#define GL_POINT_SIZE_MIN_SGIS 0x8126
#define GL_POINT_SIZE_MAX_SGIS 0x8127
#define GL_POINT_FADE_THRESHOLD_SIZE_SGIS 0x8128
#define GL_DISTANCE_ATTENUATION_SGIS 0x8129

#endif

#ifdef GL_SGIS_sharpen_texture

#define GL_LINEAR_SHARPEN_SGIS 0x80AD
#define GL_LINEAR_SHARPEN_ALPHA_SGIS 0x80AE
#define GL_LINEAR_SHARPEN_COLOR_SGIS 0x80AF
#define GL_SHARPEN_TEXTURE_FUNC_POINTS_SGIS 0x80B0

#endif

#ifdef GL_SGIS_texture4D

#define GL_PACK_SKIP_VOLUMES_SGIS 0x8130
#define GL_PACK_IMAGE_DEPTH_SGIS 0x8131
#define GL_UNPACK_SKIP_VOLUMES_SGIS 0x8132
#define GL_UNPACK_IMAGE_DEPTH_SGIS 0x8133
#define GL_TEXTURE_4D_SGIS 0x8134
#define GL_PROXY_TEXTURE_4D_SGIS 0x8135
#define GL_TEXTURE_4DSIZE_SGIS 0x8136
#define GL_TEXTURE_WRAP_Q_SGIS 0x8137
#define GL_MAX_4D_TEXTURE_SIZE_SGIS 0x8138
#define GL_TEXTURE_4D_BINDING_SGIS 0x814F

#endif

#ifdef GL_SGIS_texture_border_clamp

#define GL_CLAMP_TO_BORDER_SGIS 0x812D

#endif

#ifdef GL_SGIS_texture_color_mask

#define GL_TEXTURE_COLOR_WRITEMASK_SGIS 0x81EF

#endif

#ifdef GL_SGIS_texture_edge_clamp

#define GL_CLAMP_TO_EDGE_SGIS 0x812F

#endif

#ifdef GL_SGIS_texture_filter4

#define GL_FILTER4_SGIS 0x8146
#define GL_TEXTURE_FILTER4_SIZE_SGIS 0x8147

#endif

#ifdef GL_SGIS_texture_lod

#define GL_TEXTURE_MIN_LOD_SGIS 0x813A
#define GL_TEXTURE_MAX_LOD_SGIS 0x813B
#define GL_TEXTURE_BASE_LEVEL_SGIS 0x813C
#define GL_TEXTURE_MAX_LEVEL_SGIS 0x813D

#endif

#ifdef GL_SGIS_texture_select

#define GL_DUAL_ALPHA4_SGIS 0x8110
#define GL_DUAL_ALPHA8_SGIS 0x8111
#define GL_DUAL_ALPHA12_SGIS 0x8112
#define GL_DUAL_ALPHA16_SGIS 0x8113
#define GL_DUAL_LUMINANCE4_SGIS 0x8114
#define GL_DUAL_LUMINANCE8_SGIS 0x8115
#define GL_DUAL_LUMINANCE12_SGIS 0x8116
#define GL_DUAL_LUMINANCE16_SGIS 0x8117
#define GL_DUAL_INTENSITY4_SGIS 0x8118
#define GL_DUAL_INTENSITY8_SGIS 0x8119
#define GL_DUAL_INTENSITY12_SGIS 0x811A
#define GL_DUAL_INTENSITY16_SGIS 0x811B
#define GL_DUAL_LUMINANCE_ALPHA4_SGIS 0x811C
#define GL_DUAL_LUMINANCE_ALPHA8_SGIS 0x811D
#define GL_QUAD_ALPHA4_SGIS 0x811E
#define GL_QUAD_ALPHA8_SGIS 0x811F
#define GL_QUAD_LUMINANCE4_SGIS 0x8120
#define GL_QUAD_LUMINANCE8_SGIS 0x8121
#define GL_QUAD_INTENSITY4_SGIS 0x8122
#define GL_QUAD_INTENSITY8_SGIS 0x8123
#define GL_DUAL_TEXTURE_SELECT_SGIS 0x8124
#define GL_QUAD_TEXTURE_SELECT_SGIS 0x8125

#endif

#ifdef GL_SGIX_async

#define GL_ASYNC_MARKER_SGIX 0x8329

#endif

#ifdef GL_SGIX_async_histogram

#define GL_ASYNC_HISTOGRAM_SGIX 0x832C
#define GL_MAX_ASYNC_HISTOGRAM_SGIX 0x832D

#endif

#ifdef GL_SGIX_async_pixel

#define GL_ASYNC_TEX_IMAGE_SGIX 0x835C
#define GL_ASYNC_DRAW_PIXELS_SGIX 0x835D
#define GL_ASYNC_READ_PIXELS_SGIX 0x835E
#define GL_MAX_ASYNC_TEX_IMAGE_SGIX 0x835F
#define GL_MAX_ASYNC_DRAW_PIXELS_SGIX 0x8360
#define GL_MAX_ASYNC_READ_PIXELS_SGIX 0x8361

#endif

#ifdef GL_SGIX_blend_alpha_minmax

#define GL_ALPHA_MIN_SGIX 0x8320
#define GL_ALPHA_MAX_SGIX 0x8321

#endif

#ifdef GL_SGIX_calligraphic_fragment

#define GL_CALLIGRAPHIC_FRAGMENT_SGIX 0x8183

#endif

#ifdef GL_SGIX_clipmap

#define GL_LINEAR_CLIPMAP_LINEAR_SGIX 0x8170
#define GL_TEXTURE_CLIPMAP_CENTER_SGIX 0x8171
#define GL_TEXTURE_CLIPMAP_FRAME_SGIX 0x8172
#define GL_TEXTURE_CLIPMAP_OFFSET_SGIX 0x8173
#define GL_TEXTURE_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8174
#define GL_TEXTURE_CLIPMAP_LOD_OFFSET_SGIX 0x8175
#define GL_TEXTURE_CLIPMAP_DEPTH_SGIX 0x8176
#define GL_MAX_CLIPMAP_DEPTH_SGIX 0x8177
#define GL_MAX_CLIPMAP_VIRTUAL_DEPTH_SGIX 0x8178
#define GL_NEAREST_CLIPMAP_NEAREST_SGIX 0x844D
#define GL_NEAREST_CLIPMAP_LINEAR_SGIX 0x844E
#define GL_LINEAR_CLIPMAP_NEAREST_SGIX 0x844F

#endif

#ifdef GL_SGIX_convolution_accuracy

#define GL_CONVOLUTION_HINT_SGIX 0x8316

#endif

#ifdef GL_SGIX_depth_texture

#define GL_DEPTH_COMPONENT16_SGIX 0x81A5
#define GL_DEPTH_COMPONENT24_SGIX 0x81A6
#define GL_DEPTH_COMPONENT32_SGIX 0x81A7

#endif

#ifdef GL_SGIX_fog_offset

#define GL_FOG_OFFSET_SGIX 0x8198
#define GL_FOG_OFFSET_VALUE_SGIX 0x8199

#endif

#ifdef GL_SGIX_fog_scale

#define GL_FOG_SCALE_SGIX 0x81FC
#define GL_FOG_SCALE_VALUE_SGIX 0x81FD

#endif

#ifdef GL_SGIX_fragment_lighting

#define GL_FRAGMENT_LIGHTING_SGIX 0x8400
#define GL_FRAGMENT_COLOR_MATERIAL_SGIX 0x8401
#define GL_FRAGMENT_COLOR_MATERIAL_FACE_SGIX 0x8402
#define GL_FRAGMENT_COLOR_MATERIAL_PARAMETER_SGIX 0x8403
#define GL_MAX_FRAGMENT_LIGHTS_SGIX 0x8404
#define GL_MAX_ACTIVE_LIGHTS_SGIX 0x8405
#define GL_CURRENT_RASTER_NORMAL_SGIX 0x8406
#define GL_LIGHT_ENV_MODE_SGIX 0x8407
#define GL_FRAGMENT_LIGHT_MODEL_LOCAL_VIEWER_SGIX 0x8408
#define GL_FRAGMENT_LIGHT_MODEL_TWO_SIDE_SGIX 0x8409
#define GL_FRAGMENT_LIGHT_MODEL_AMBIENT_SGIX 0x840A
#define GL_FRAGMENT_LIGHT_MODEL_NORMAL_INTERPOLATION_SGIX 0x840B
#define GL_FRAGMENT_LIGHT0_SGIX 0x840C
#define GL_FRAGMENT_LIGHT1_SGIX 0x840D
#define GL_FRAGMENT_LIGHT2_SGIX 0x840E
#define GL_FRAGMENT_LIGHT3_SGIX 0x840F
#define GL_FRAGMENT_LIGHT4_SGIX 0x8410
#define GL_FRAGMENT_LIGHT5_SGIX 0x8411
#define GL_FRAGMENT_LIGHT6_SGIX 0x8412
#define GL_FRAGMENT_LIGHT7_SGIX 0x8413

#endif

#ifdef GL_SGIX_framezoom

#define GL_FRAMEZOOM_SGIX 0x818B
#define GL_FRAMEZOOM_FACTOR_SGIX 0x818C
#define GL_MAX_FRAMEZOOM_FACTOR_SGIX 0x818D

#endif

#ifdef GL_SGIX_impact_pixel_texture

#define GL_PIXEL_TEX_GEN_Q_CEILING_SGIX 0x8184
#define GL_PIXEL_TEX_GEN_Q_ROUND_SGIX 0x8185
#define GL_PIXEL_TEX_GEN_Q_FLOOR_SGIX 0x8186
#define GL_PIXEL_TEX_GEN_ALPHA_REPLACE_SGIX 0x8187
#define GL_PIXEL_TEX_GEN_ALPHA_NO_REPLACE_SGIX 0x8188
#define GL_PIXEL_TEX_GEN_ALPHA_LS_SGIX 0x8189
#define GL_PIXEL_TEX_GEN_ALPHA_MS_SGIX 0x818A

#endif

#ifdef GL_SGIX_instruments

#define GL_INSTRUMENT_BUFFER_POINTER_SGIX 0x8180
#define GL_INSTRUMENT_MEASUREMENTS_SGIX 0x8181

#endif

#ifdef GL_SGIX_interlace

#define GL_INTERLACE_SGIX 0x8094

#endif

#ifdef GL_SGIX_ir_instrument1

#define GL_IR_INSTRUMENT1_SGIX 0x817F

#endif

#ifdef GL_SGIX_list_priority

#define GL_LIST_PRIORITY_SGIX 0x8182

#endif

#ifdef GL_SGIX_pixel_texture

#define GL_PIXEL_TEX_GEN_SGIX 0x8139
#define GL_PIXEL_TEX_GEN_MODE_SGIX 0x832B

#endif

#ifdef GL_SGIX_pixel_tiles

#define GL_PIXEL_TILE_BEST_ALIGNMENT_SGIX 0x813E
#define GL_PIXEL_TILE_CACHE_INCREMENT_SGIX 0x813F
#define GL_PIXEL_TILE_WIDTH_SGIX 0x8140
#define GL_PIXEL_TILE_HEIGHT_SGIX 0x8141
#define GL_PIXEL_TILE_GRID_WIDTH_SGIX 0x8142
#define GL_PIXEL_TILE_GRID_HEIGHT_SGIX 0x8143
#define GL_PIXEL_TILE_GRID_DEPTH_SGIX 0x8144
#define GL_PIXEL_TILE_CACHE_SIZE_SGIX 0x8145

#endif

#ifdef GL_SGIX_polynomial_ffd

#define GL_GEOMETRY_DEFORMATION_SGIX 0x8194
#define GL_TEXTURE_DEFORMATION_SGIX 0x8195
#define GL_DEFORMATIONS_MASK_SGIX 0x8196
#define GL_MAX_DEFORMATION_ORDER_SGIX 0x8197

#endif

#ifdef GL_SGIX_reference_plane

#define GL_REFERENCE_PLANE_SGIX 0x817D
#define GL_REFERENCE_PLANE_EQUATION_SGIX 0x817E

#endif

#ifdef GL_SGIX_resample

#define GL_PACK_RESAMPLE_SGIX 0x842C
#define GL_UNPACK_RESAMPLE_SGIX 0x842D
#define GL_RESAMPLE_REPLICATE_SGIX 0x842E
#define GL_RESAMPLE_ZERO_FILL_SGIX 0x842F
#define GL_RESAMPLE_DECIMATE_SGIX 0x8430

#endif

#ifdef GL_SGIX_scalebias_hint

#define GL_SCALEBIAS_HINT_SGIX 0x8322

#endif

#ifdef GL_SGIX_shadow

#define GL_TEXTURE_COMPARE_SGIX 0x819A
#define GL_TEXTURE_COMPARE_OPERATOR_SGIX 0x819B
#define GL_TEXTURE_LEQUAL_R_SGIX 0x819C
#define GL_TEXTURE_GEQUAL_R_SGIX 0x819D

#endif

#ifdef GL_SGIX_shadow_ambient

#define GL_SHADOW_AMBIENT_SGIX 0x80BF

#endif

#ifdef GL_SGIX_sprite

#define GL_SPRITE_SGIX 0x8148
#define GL_SPRITE_MODE_SGIX 0x8149
#define GL_SPRITE_AXIS_SGIX 0x814A
#define GL_SPRITE_TRANSLATION_SGIX 0x814B
#define GL_SPRITE_AXIAL_SGIX 0x814C
#define GL_SPRITE_OBJECT_ALIGNED_SGIX 0x814D
#define GL_SPRITE_EYE_ALIGNED_SGIX 0x814E

#endif

#ifdef GL_SGIX_subsample

#define GL_PACK_SUBSAMPLE_RATE_SGIX 0x85A0
#define GL_UNPACK_SUBSAMPLE_RATE_SGIX 0x85A1
#define GL_PIXEL_SUBSAMPLE_4444_SGIX 0x85A2
#define GL_PIXEL_SUBSAMPLE_2424_SGIX 0x85A3
#define GL_PIXEL_SUBSAMPLE_4242_SGIX 0x85A4

#endif

#ifdef GL_SGIX_texture_add_env

#define GL_TEXTURE_ENV_BIAS_SGIX 0x80BE

#endif

#ifdef GL_SGIX_texture_coordinate_clamp

#define GL_TEXTURE_MAX_CLAMP_S_SGIX 0x8369
#define GL_TEXTURE_MAX_CLAMP_T_SGIX 0x836A
#define GL_TEXTURE_MAX_CLAMP_R_SGIX 0x836B

#endif

#ifdef GL_SGIX_texture_lod_bias

#define GL_TEXTURE_LOD_BIAS_S_SGIX 0x818E
#define GL_TEXTURE_LOD_BIAS_T_SGIX 0x818F
#define GL_TEXTURE_LOD_BIAS_R_SGIX 0x8190

#endif

#ifdef GL_SGIX_texture_multi_buffer

#define GL_TEXTURE_MULTI_BUFFER_HINT_SGIX 0x812E

#endif

#ifdef GL_SGIX_texture_range

#define GL_RGB_SIGNED_SGIX 0x85E0
#define GL_RGBA_SIGNED_SGIX 0x85E1
#define GL_ALPHA_SIGNED_SGIX 0x85E2
#define GL_LUMINANCE_SIGNED_SGIX 0x85E3
#define GL_INTENSITY_SIGNED_SGIX 0x85E4
#define GL_LUMINANCE_ALPHA_SIGNED_SGIX 0x85E5
#define GL_RGB16_SIGNED_SGIX 0x85E6
#define GL_RGBA16_SIGNED_SGIX 0x85E7
#define GL_ALPHA16_SIGNED_SGIX 0x85E8
#define GL_LUMINANCE16_SIGNED_SGIX 0x85E9
#define GL_INTENSITY16_SIGNED_SGIX 0x85EA
#define GL_LUMINANCE16_ALPHA16_SIGNED_SGIX 0x85EB
#define GL_RGB_EXTENDED_RANGE_SGIX 0x85EC
#define GL_RGBA_EXTENDED_RANGE_SGIX 0x85ED
#define GL_ALPHA_EXTENDED_RANGE_SGIX 0x85EE
#define GL_LUMINANCE_EXTENDED_RANGE_SGIX 0x85EF
#define GL_INTENSITY_EXTENDED_RANGE_SGIX 0x85F0
#define GL_LUMINANCE_ALPHA_EXTENDED_RANGE_SGIX 0x85F1
#define GL_RGB16_EXTENDED_RANGE_SGIX 0x85F2
#define GL_RGBA16_EXTENDED_RANGE_SGIX 0x85F3
#define GL_ALPHA16_EXTENDED_RANGE_SGIX 0x85F4
#define GL_LUMINANCE16_EXTENDED_RANGE_SGIX 0x85F5
#define GL_INTENSITY16_EXTENDED_RANGE_SGIX 0x85F6
#define GL_LUMINANCE16_ALPHA16_EXTENDED_RANGE_SGIX 0x85F7
#define GL_MIN_LUMINANCE_SGIS 0x85F8
#define GL_MAX_LUMINANCE_SGIS 0x85F9
#define GL_MIN_INTENSITY_SGIS 0x85FA
#define GL_MAX_INTENSITY_SGIS 0x85FB

#endif

#ifdef GL_SGIX_texture_scale_bias

#define GL_POST_TEXTURE_FILTER_BIAS_SGIX 0x8179
#define GL_POST_TEXTURE_FILTER_SCALE_SGIX 0x817A
#define GL_POST_TEXTURE_FILTER_BIAS_RANGE_SGIX 0x817B
#define GL_POST_TEXTURE_FILTER_SCALE_RANGE_SGIX 0x817C

#endif

#ifdef GL_SGIX_vertex_preclip

#define GL_VERTEX_PRECLIP_SGIX 0x83EE
#define GL_VERTEX_PRECLIP_HINT_SGIX 0x83EF

#endif

#ifdef GL_SGIX_ycrcb

#define GL_YCRCB_422_SGIX 0x81BB
#define GL_YCRCB_444_SGIX 0x81BC

#endif

#ifdef GL_SGIX_ycrcba

#define GL_YCRCB_SGIX 0x8318
#define GL_YCRCBA_SGIX 0x8319

#endif

#ifdef GL_SGIX_ycrcb_subsample


#endif

#ifdef GL_SGI_color_matrix

#define GL_COLOR_MATRIX_SGI 0x80B1
#define GL_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B2
#define GL_MAX_COLOR_MATRIX_STACK_DEPTH_SGI 0x80B3
#define GL_POST_COLOR_MATRIX_RED_SCALE_SGI 0x80B4
#define GL_POST_COLOR_MATRIX_GREEN_SCALE_SGI 0x80B5
#define GL_POST_COLOR_MATRIX_BLUE_SCALE_SGI 0x80B6
#define GL_POST_COLOR_MATRIX_ALPHA_SCALE_SGI 0x80B7
#define GL_POST_COLOR_MATRIX_RED_BIAS_SGI 0x80B8
#define GL_POST_COLOR_MATRIX_GREEN_BIAS_SGI 0x80B9
#define GL_POST_COLOR_MATRIX_BLUE_BIAS_SGI 0x80BA
#define GL_POST_COLOR_MATRIX_ALPHA_BIAS_SGI 0x80BB

#endif

#ifdef GL_SGI_color_table

#define GL_COLOR_TABLE_SGI 0x80D0
#define GL_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D1
#define GL_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D2
#define GL_PROXY_COLOR_TABLE_SGI 0x80D3
#define GL_PROXY_POST_CONVOLUTION_COLOR_TABLE_SGI 0x80D4
#define GL_PROXY_POST_COLOR_MATRIX_COLOR_TABLE_SGI 0x80D5
#define GL_COLOR_TABLE_SCALE_SGI 0x80D6
#define GL_COLOR_TABLE_BIAS_SGI 0x80D7
#define GL_COLOR_TABLE_FORMAT_SGI 0x80D8
#define GL_COLOR_TABLE_WIDTH_SGI 0x80D9
#define GL_COLOR_TABLE_RED_SIZE_SGI 0x80DA
#define GL_COLOR_TABLE_GREEN_SIZE_SGI 0x80DB
#define GL_COLOR_TABLE_BLUE_SIZE_SGI 0x80DC
#define GL_COLOR_TABLE_ALPHA_SIZE_SGI 0x80DD
#define GL_COLOR_TABLE_LUMINANCE_SIZE_SGI 0x80DE
#define GL_COLOR_TABLE_INTENSITY_SIZE_SGI 0x80DF

#endif

#ifdef GL_SGI_depth_pass_instrument

#define GL_DEPTH_PASS_INSTRUMENT_SGI 0x8310
#define GL_DEPTH_PASS_INSTRUMENT_COUNTERS_SGI 0x8311
#define GL_DEPTH_PASS_INSTRUMENT_MAX_SGI 0x8312

#endif

#ifdef GL_SGI_texture_color_table

#define GL_TEXTURE_COLOR_TABLE_SGI 0x80BC
#define GL_PROXY_TEXTURE_COLOR_TABLE_SGI 0x80BD

#endif

#ifdef GL_SUNX_constant_data

#define GL_UNPACK_CONSTANT_DATA_SUNX 0x81D5
#define GL_TEXTURE_CONSTANT_DATA_SUNX 0x81D6

#endif

#ifdef GL_SUN_convolution_border_modes

#define GL_WRAP_BORDER_SUN 0x81D4

#endif

#ifdef GL_SUN_global_alpha

#define GL_GLOBAL_ALPHA_SUN 0x81D9
#define GL_GLOBAL_ALPHA_FACTOR_SUN 0x81DA

#endif

#ifdef GL_SUN_mesh_array

#define GL_QUAD_MESH_SUN 0x8614
#define GL_TRIANGLE_MESH_SUN 0x8615

#endif

#ifdef GL_SUN_slice_accum

#define GL_SLICE_ACCUM_SUN 0x85CC

#endif

#ifdef GL_SUN_triangle_list

#define GL_RESTART_SUN 0x0001
#define GL_REPLACE_MIDDLE_SUN 0x0002
#define GL_REPLACE_OLDEST_SUN 0x0003
#define GL_TRIANGLE_LIST_SUN 0x81D7
#define GL_REPLACEMENT_CODE_SUN 0x81D8
#define GL_REPLACEMENT_CODE_ARRAY_SUN 0x85C0
#define GL_REPLACEMENT_CODE_ARRAY_TYPE_SUN 0x85C1
#define GL_REPLACEMENT_CODE_ARRAY_STRIDE_SUN 0x85C2
#define GL_REPLACEMENT_CODE_ARRAY_POINTER_SUN 0x85C3
#define GL_R1UI_V3F_SUN 0x85C4
#define GL_R1UI_C4UB_V3F_SUN 0x85C5
#define GL_R1UI_C3F_V3F_SUN 0x85C6
#define GL_R1UI_N3F_V3F_SUN 0x85C7
#define GL_R1UI_C4F_N3F_V3F_SUN 0x85C8
#define GL_R1UI_T2F_V3F_SUN 0x85C9
#define GL_R1UI_T2F_N3F_V3F_SUN 0x85CA
#define GL_R1UI_T2F_C4F_N3F_V3F_SUN 0x85CB

#endif

#ifdef GL_VERSION_1_0

#define GL_ACCUM 0x0100
#define GL_LOAD 0x0101
#define GL_RETURN 0x0102
#define GL_MULT 0x0103
#define GL_ADD 0x0104
#define GL_NEVER 0x0200
#define GL_LESS 0x0201
#define GL_LEQUAL 0x0203
#define GL_GREATER 0x0204
#define GL_NOTEQUAL 0x0205
#define GL_GEQUAL 0x0206
#define GL_ALWAYS 0x0207
#define GL_CURRENT_BIT 0x00000001
#define GL_POINT_BIT 0x00000002
#define GL_LINE_BIT 0x00000004
#define GL_POLYGON_BIT 0x00000008
#define GL_POLYGON_STIPPLE_BIT 0x00000010
#define GL_PIXEL_MODE_BIT 0x00000020
#define GL_LIGHTING_BIT 0x00000040
#define GL_FOG_BIT 0x00000080
#define GL_DEPTH_BUFFER_BIT 0x00000100
#define GL_ACCUM_BUFFER_BIT 0x00000200
#define GL_STENCIL_BUFFER_BIT 0x00000400
#define GL_VIEWPORT_BIT 0x00000800
#define GL_TRANSFORM_BIT 0x00001000
#define GL_ENABLE_BIT 0x00002000
#define GL_COLOR_BUFFER_BIT 0x00004000
#define GL_HINT_BIT 0x00008000
#define GL_EVAL_BIT 0x00010000
#define GL_LIST_BIT 0x00020000
#define GL_TEXTURE_BIT 0x00040000
#define GL_SCISSOR_BIT 0x00080000
#define GL_ALL_ATTRIB_BITS 0x000FFFFF
#define GL_POINTS 0x0000
#define GL_LINES 0x0001
#define GL_LINE_LOOP 0x0002
#define GL_LINE_STRIP 0x0003
#define GL_TRIANGLE_STRIP 0x0005
#define GL_TRIANGLE_FAN 0x0006
#define GL_QUAD_STRIP 0x0008
#define GL_POLYGON 0x0009
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
#define GL_TRUE 1
#define GL_FALSE 0
#define GL_CLIP_PLANE0 0x3000
#define GL_CLIP_PLANE1 0x3001
#define GL_CLIP_PLANE2 0x3002
#define GL_CLIP_PLANE3 0x3003
#define GL_CLIP_PLANE4 0x3004
#define GL_CLIP_PLANE5 0x3005
#define GL_BYTE 0x1400
#define GL_UNSIGNED_BYTE 0x1401
#define GL_SHORT 0x1402
#define GL_UNSIGNED_SHORT 0x1403
#define GL_INT 0x1404
#define GL_UNSIGNED_INT 0x1405
#define GL_FLOAT 0x1406
#define GL_2_BYTES 0x1407
#define GL_3_BYTES 0x1408
#define GL_4_BYTES 0x1409
#define GL_FRONT_LEFT 0x0400
#define GL_FRONT_RIGHT 0x0401
#define GL_BACK_LEFT 0x0402
#define GL_BACK_RIGHT 0x0403
#define GL_FRONT 0x0404
#define GL_BACK 0x0405
#define GL_LEFT 0x0406
#define GL_RIGHT 0x0407
#define GL_FRONT_AND_BACK 0x0408
#define GL_AUX0 0x0409
#define GL_AUX1 0x040A
#define GL_AUX2 0x040B
#define GL_AUX3 0x040C
#define GL_INVALID_ENUM 0x0500
#define GL_INVALID_VALUE 0x0501
#define GL_INVALID_OPERATION 0x0502
#define GL_OUT_OF_MEMORY 0x0505
#define GL_2D 0x0600
#define GL_3D 0x0601
#define GL_3D_COLOR 0x0602
#define GL_3D_COLOR_TEXTURE 0x0603
#define GL_4D_COLOR_TEXTURE 0x0604
#define GL_PASS_THROUGH_TOKEN 0x0700
#define GL_POINT_TOKEN 0x0701
#define GL_LINE_TOKEN 0x0702
#define GL_POLYGON_TOKEN 0x0703
#define GL_BITMAP_TOKEN 0x0704
#define GL_DRAW_PIXEL_TOKEN 0x0705
#define GL_COPY_PIXEL_TOKEN 0x0706
#define GL_LINE_RESET_TOKEN 0x0707
#define GL_EXP 0x0800
#define GL_EXP2 0x0801
#define GL_COEFF 0x0A00
#define GL_ORDER 0x0A01
#define GL_DOMAIN 0x0A02
#define GL_CURRENT_COLOR 0x0B00
#define GL_CURRENT_INDEX 0x0B01
#define GL_CURRENT_NORMAL 0x0B02
#define GL_CURRENT_TEXTURE_COORDS 0x0B03
#define GL_CURRENT_RASTER_COLOR 0x0B04
#define GL_CURRENT_RASTER_INDEX 0x0B05
#define GL_CURRENT_RASTER_TEXTURE_COORDS 0x0B06
#define GL_CURRENT_RASTER_POSITION 0x0B07
#define GL_CURRENT_RASTER_POSITION_VALID 0x0B08
#define GL_CURRENT_RASTER_DISTANCE 0x0B09
#define GL_POINT_SMOOTH 0x0B10
#define GL_POINT_SIZE 0x0B11
#define GL_POINT_SIZE_RANGE 0x0B12
#define GL_POINT_SIZE_GRANULARITY 0x0B13
#define GL_LINE_SMOOTH 0x0B20
#define GL_LINE_WIDTH 0x0B21
#define GL_LINE_WIDTH_RANGE 0x0B22
#define GL_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_LINE_STIPPLE 0x0B24
#define GL_LINE_STIPPLE_PATTERN 0x0B25
#define GL_LINE_STIPPLE_REPEAT 0x0B26
#define GL_LIST_MODE 0x0B30
#define GL_MAX_LIST_NESTING 0x0B31
#define GL_LIST_BASE 0x0B32
#define GL_LIST_INDEX 0x0B33
#define GL_POLYGON_MODE 0x0B40
#define GL_POLYGON_SMOOTH 0x0B41
#define GL_POLYGON_STIPPLE 0x0B42
#define GL_EDGE_FLAG 0x0B43
#define GL_CULL_FACE 0x0B44
#define GL_CULL_FACE_MODE 0x0B45
#define GL_FRONT_FACE 0x0B46
#define GL_LIGHTING 0x0B50
#define GL_LIGHT_MODEL_LOCAL_VIEWER 0x0B51
#define GL_LIGHT_MODEL_TWO_SIDE 0x0B52
#define GL_LIGHT_MODEL_AMBIENT 0x0B53
#define GL_SHADE_MODEL 0x0B54
#define GL_COLOR_MATERIAL_FACE 0x0B55
#define GL_COLOR_MATERIAL_PARAMETER 0x0B56
#define GL_COLOR_MATERIAL 0x0B57
#define GL_FOG_INDEX 0x0B61
#define GL_FOG_DENSITY 0x0B62
#define GL_FOG_START 0x0B63
#define GL_FOG_END 0x0B64
#define GL_FOG_MODE 0x0B65
#define GL_FOG_COLOR 0x0B66
#define GL_DEPTH_TEST 0x0B71
#define GL_DEPTH_WRITEMASK 0x0B72
#define GL_DEPTH_CLEAR_VALUE 0x0B73
#define GL_DEPTH_FUNC 0x0B74
#define GL_ACCUM_CLEAR_VALUE 0x0B80
#define GL_STENCIL_TEST 0x0B90
#define GL_STENCIL_CLEAR_VALUE 0x0B91
#define GL_STENCIL_FUNC 0x0B92
#define GL_STENCIL_VALUE_MASK 0x0B93
#define GL_STENCIL_FAIL 0x0B94
#define GL_STENCIL_PASS_DEPTH_FAIL 0x0B95
#define GL_STENCIL_PASS_DEPTH_PASS 0x0B96
#define GL_STENCIL_REF 0x0B97
#define GL_STENCIL_WRITEMASK 0x0B98
#define GL_MATRIX_MODE 0x0BA0
#define GL_NORMALIZE 0x0BA1
#define GL_MODELVIEW_STACK_DEPTH 0x0BA3
#define GL_PROJECTION_STACK_DEPTH 0x0BA4
#define GL_MODELVIEW_MATRIX 0x0BA6
#define GL_TEXTURE_STACK_DEPTH 0x0BA5
#define GL_PROJECTION_MATRIX 0x0BA7
#define GL_TEXTURE_MATRIX 0x0BA8
#define GL_ATTRIB_STACK_DEPTH 0x0BB0
#define GL_CLIENT_ATTRIB_STACK_DEPTH 0x0BB1
#define GL_ALPHA_TEST 0x0BC0
#define GL_ALPHA_TEST_FUNC 0x0BC1
#define GL_ALPHA_TEST_REF 0x0BC2
#define GL_DITHER 0x0BD0
#define GL_BLEND_DST 0x0BE0
#define GL_BLEND_SRC 0x0BE1
#define GL_BLEND 0x0BE2
#define GL_LOGIC_OP_MODE 0x0BF0
#define GL_INDEX_LOGIC_OP 0x0BF1
#define GL_COLOR_LOGIC_OP 0x0BF2
#define GL_AUX_BUFFERS 0x0C00
#define GL_DRAW_BUFFER 0x0C01
#define GL_READ_BUFFER 0x0C02
#define GL_INDEX_CLEAR_VALUE 0x0C20
#define GL_INDEX_WRITEMASK 0x0C21
#define GL_COLOR_CLEAR_VALUE 0x0C22
#define GL_COLOR_WRITEMASK 0x0C23
#define GL_INDEX_MODE 0x0C30
#define GL_RGBA_MODE 0x0C31
#define GL_DOUBLEBUFFER 0x0C32
#define GL_STEREO 0x0C33
#define GL_RENDER_MODE 0x0C40
#define GL_PERSPECTIVE_CORRECTION_HINT 0x0C50
#define GL_POINT_SMOOTH_HINT 0x0C51
#define GL_LINE_SMOOTH_HINT 0x0C52
#define GL_POLYGON_SMOOTH_HINT 0x0C53
#define GL_FOG_HINT 0x0C54
#define GL_TEXTURE_GEN_S 0x0C60
#define GL_TEXTURE_GEN_T 0x0C61
#define GL_TEXTURE_GEN_R 0x0C62
#define GL_TEXTURE_GEN_Q 0x0C63
#define GL_PIXEL_MAP_I_TO_I 0x0C70
#define GL_PIXEL_MAP_S_TO_S 0x0C71
#define GL_PIXEL_MAP_I_TO_R 0x0C72
#define GL_PIXEL_MAP_I_TO_G 0x0C73
#define GL_PIXEL_MAP_I_TO_B 0x0C74
#define GL_PIXEL_MAP_I_TO_A 0x0C75
#define GL_PIXEL_MAP_R_TO_R 0x0C76
#define GL_PIXEL_MAP_G_TO_G 0x0C77
#define GL_PIXEL_MAP_B_TO_B 0x0C78
#define GL_PIXEL_MAP_A_TO_A 0x0C79
#define GL_PIXEL_MAP_I_TO_I_SIZE 0x0CB0
#define GL_PIXEL_MAP_S_TO_S_SIZE 0x0CB1
#define GL_PIXEL_MAP_I_TO_R_SIZE 0x0CB2
#define GL_PIXEL_MAP_I_TO_G_SIZE 0x0CB3
#define GL_PIXEL_MAP_I_TO_B_SIZE 0x0CB4
#define GL_PIXEL_MAP_I_TO_A_SIZE 0x0CB5
#define GL_PIXEL_MAP_R_TO_R_SIZE 0x0CB6
#define GL_PIXEL_MAP_G_TO_G_SIZE 0x0CB7
#define GL_PIXEL_MAP_B_TO_B_SIZE 0x0CB8
#define GL_PIXEL_MAP_A_TO_A_SIZE 0x0CB9
#define GL_UNPACK_SWAP_BYTES 0x0CF0
#define GL_UNPACK_LSB_FIRST 0x0CF1
#define GL_UNPACK_ROW_LENGTH 0x0CF2
#define GL_UNPACK_SKIP_ROWS 0x0CF3
#define GL_UNPACK_SKIP_PIXELS 0x0CF4
#define GL_UNPACK_ALIGNMENT 0x0CF5
#define GL_PACK_SWAP_BYTES 0x0D00
#define GL_PACK_LSB_FIRST 0x0D01
#define GL_PACK_ROW_LENGTH 0x0D02
#define GL_PACK_SKIP_ROWS 0x0D03
#define GL_PACK_SKIP_PIXELS 0x0D04
#define GL_PACK_ALIGNMENT 0x0D05
#define GL_MAP_COLOR 0x0D10
#define GL_MAP_STENCIL 0x0D11
#define GL_INDEX_SHIFT 0x0D12
#define GL_INDEX_OFFSET 0x0D13
#define GL_RED_SCALE 0x0D14
#define GL_RED_BIAS 0x0D15
#define GL_ZOOM_X 0x0D16
#define GL_ZOOM_Y 0x0D17
#define GL_GREEN_SCALE 0x0D18
#define GL_GREEN_BIAS 0x0D19
#define GL_BLUE_SCALE 0x0D1A
#define GL_BLUE_BIAS 0x0D1B
#define GL_ALPHA_SCALE 0x0D1C
#define GL_ALPHA_BIAS 0x0D1D
#define GL_DEPTH_SCALE 0x0D1E
#define GL_DEPTH_BIAS 0x0D1F
#define GL_MAX_EVAL_ORDER 0x0D30
#define GL_MAX_LIGHTS 0x0D31
#define GL_MAX_CLIP_PLANES 0x0D32
#define GL_MAX_TEXTURE_SIZE 0x0D33
#define GL_MAX_PIXEL_MAP_TABLE 0x0D34
#define GL_MAX_ATTRIB_STACK_DEPTH 0x0D35
#define GL_MAX_MODELVIEW_STACK_DEPTH 0x0D36
#define GL_MAX_NAME_STACK_DEPTH 0x0D37
#define GL_MAX_PROJECTION_STACK_DEPTH 0x0D38
#define GL_MAX_TEXTURE_STACK_DEPTH 0x0D39
#define GL_MAX_VIEWPORT_DIMS 0x0D3A
#define GL_MAX_CLIENT_ATTRIB_STACK_DEPTH 0x0D3B
#define GL_SUBPIXEL_BITS 0x0D50
#define GL_INDEX_BITS 0x0D51
#define GL_RED_BITS 0x0D52
#define GL_GREEN_BITS 0x0D53
#define GL_BLUE_BITS 0x0D54
#define GL_ALPHA_BITS 0x0D55
#define GL_DEPTH_BITS 0x0D56
#define GL_STENCIL_BITS 0x0D57
#define GL_ACCUM_RED_BITS 0x0D58
#define GL_ACCUM_GREEN_BITS 0x0D59
#define GL_ACCUM_BLUE_BITS 0x0D5A
#define GL_ACCUM_ALPHA_BITS 0x0D5B
#define GL_NAME_STACK_DEPTH 0x0D70
#define GL_AUTO_NORMAL 0x0D80
#define GL_MAP1_COLOR_4 0x0D90
#define GL_MAP1_INDEX 0x0D91
#define GL_MAP1_NORMAL 0x0D92
#define GL_MAP1_TEXTURE_COORD_1 0x0D93
#define GL_MAP1_TEXTURE_COORD_2 0x0D94
#define GL_MAP1_TEXTURE_COORD_3 0x0D95
#define GL_MAP1_TEXTURE_COORD_4 0x0D96
#define GL_MAP1_VERTEX_3 0x0D97
#define GL_MAP1_VERTEX_4 0x0D98
#define GL_MAP2_COLOR_4 0x0DB0
#define GL_MAP2_INDEX 0x0DB1
#define GL_MAP2_NORMAL 0x0DB2
#define GL_MAP2_TEXTURE_COORD_1 0x0DB3
#define GL_MAP2_TEXTURE_COORD_2 0x0DB4
#define GL_MAP2_TEXTURE_COORD_3 0x0DB5
#define GL_MAP2_TEXTURE_COORD_4 0x0DB6
#define GL_MAP2_VERTEX_3 0x0DB7
#define GL_MAP2_VERTEX_4 0x0DB8
#define GL_MAP1_GRID_DOMAIN 0x0DD0
#define GL_MAP1_GRID_SEGMENTS 0x0DD1
#define GL_MAP2_GRID_DOMAIN 0x0DD2
#define GL_MAP2_GRID_SEGMENTS 0x0DD3
#define GL_FEEDBACK_BUFFER_POINTER 0x0DF0
#define GL_FEEDBACK_BUFFER_SIZE 0x0DF1
#define GL_FEEDBACK_BUFFER_TYPE 0x0DF2
#define GL_SELECTION_BUFFER_POINTER 0x0DF3
#define GL_SELECTION_BUFFER_SIZE 0x0DF4
#define GL_TEXTURE_WIDTH 0x1000
#define GL_TEXTURE_HEIGHT 0x1001
#define GL_TEXTURE_INTERNAL_FORMAT 0x1003
#define GL_TEXTURE_BORDER_COLOR 0x1004
#define GL_TEXTURE_BORDER 0x1005
#define GL_DONT_CARE 0x1100
#define GL_FASTEST 0x1101
#define GL_NICEST 0x1102
#define GL_LIGHT0 0x4000
#define GL_LIGHT1 0x4001
#define GL_LIGHT2 0x4002
#define GL_LIGHT3 0x4003
#define GL_LIGHT4 0x4004
#define GL_LIGHT5 0x4005
#define GL_LIGHT6 0x4006
#define GL_LIGHT7 0x4007
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
#define GL_COMPILE 0x1300
#define GL_COMPILE_AND_EXECUTE 0x1301
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
#define GL_COLOR_INDEXES 0x1603
#define GL_MODELVIEW 0x1700
#define GL_PROJECTION 0x1701
#define GL_TEXTURE 0x1702
#define GL_COLOR 0x1800
#define GL_DEPTH 0x1801
#define GL_STENCIL 0x1802
#define GL_COLOR_INDEX 0x1900
#define GL_DEPTH_COMPONENT 0x1902
#define GL_RGB 0x1907
#define GL_RGBA 0x1908
#define GL_LUMINANCE 0x1909
#define GL_LUMINANCE_ALPHA 0x190A
#define GL_BITMAP 0x1A00
#define GL_POINT 0x1B00
#define GL_LINE 0x1B01
#define GL_FILL 0x1B02
#define GL_RENDER 0x1C00
#define GL_FEEDBACK 0x1C01
#define GL_SELECT 0x1C02
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
#define GL_S 0x2000
#define GL_T 0x2001
#define GL_R 0x2002
#define GL_Q 0x2003
#define GL_MODULATE 0x2100
#define GL_DECAL 0x2101
#define GL_TEXTURE_ENV_MODE 0x2200
#define GL_TEXTURE_ENV_COLOR 0x2201
#define GL_TEXTURE_ENV 0x2300
#define GL_EYE_LINEAR 0x2400
#define GL_OBJECT_LINEAR 0x2401
#define GL_SPHERE_MAP 0x2402
#define GL_TEXTURE_GEN_MODE 0x2500
#define GL_OBJECT_PLANE 0x2501
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
#define GL_CLAMP 0x2900
#define GL_REPEAT 0x2901

#endif

#ifdef GL_VERSION_1_1

#define GL_VERTEX_ARRAY 0x8074
#define GL_NORMAL_ARRAY 0x8075
#define GL_COLOR_ARRAY 0x8076
#define GL_INDEX_ARRAY 0x8077
#define GL_TEXTURE_COORD_ARRAY 0x8078
#define GL_EDGE_FLAG_ARRAY 0x8079
#define GL_VERTEX_ARRAY_SIZE 0x807A
#define GL_VERTEX_ARRAY_TYPE 0x807B
#define GL_VERTEX_ARRAY_STRIDE 0x807C
#define GL_NORMAL_ARRAY_TYPE 0x807E
#define GL_NORMAL_ARRAY_STRIDE 0x807F
#define GL_COLOR_ARRAY_SIZE 0x8081
#define GL_COLOR_ARRAY_TYPE 0x8082
#define GL_COLOR_ARRAY_STRIDE 0x8083
#define GL_INDEX_ARRAY_TYPE 0x8085
#define GL_INDEX_ARRAY_STRIDE 0x8086
#define GL_TEXTURE_COORD_ARRAY_SIZE 0x8088
#define GL_TEXTURE_COORD_ARRAY_TYPE 0x8089
#define GL_TEXTURE_COORD_ARRAY_STRIDE 0x808A
#define GL_EDGE_FLAG_ARRAY_STRIDE 0x808C
#define GL_VERTEX_ARRAY_POINTER 0x808E
#define GL_NORMAL_ARRAY_POINTER 0x808F
#define GL_COLOR_ARRAY_POINTER 0x8090
#define GL_INDEX_ARRAY_POINTER 0x8091
#define GL_TEXTURE_COORD_ARRAY_POINTER 0x8092
#define GL_EDGE_FLAG_ARRAY_POINTER 0x8093
#define GL_V2F 0x2A20
#define GL_V3F 0x2A21
#define GL_C4UB_V2F 0x2A22
#define GL_C4UB_V3F 0x2A23
#define GL_C3F_V3F 0x2A24
#define GL_N3F_V3F 0x2A25
#define GL_C4F_N3F_V3F 0x2A26
#define GL_T2F_V3F 0x2A27
#define GL_T4F_V4F 0x2A28
#define GL_T2F_C4UB_V3F 0x2A29
#define GL_T2F_C3F_V3F 0x2A2A
#define GL_T2F_N3F_V3F 0x2A2B
#define GL_T2F_C4F_N3F_V3F 0x2A2C
#define GL_T4F_C4F_N3F_V4F 0x2A2D
#define GL_POLYGON_OFFSET 0x8037
#define GL_POLYGON_OFFSET_FACTOR 0x8038
#define GL_POLYGON_OFFSET_UNITS 0x2A00
#define GL_POLYGON_OFFSET_POINT 0x2A01
#define GL_POLYGON_OFFSET_LINE 0x2A02
#define GL_POLYGON_OFFSET_FILL 0x8037
#define GL_ALPHA4 0x803B
#define GL_ALPHA8 0x803C
#define GL_ALPHA12 0x803D
#define GL_ALPHA16 0x803E
#define GL_LUMINANCE4 0x803F
#define GL_LUMINANCE8 0x8040
#define GL_LUMINANCE12 0x8041
#define GL_LUMINANCE16 0x8042
#define GL_LUMINANCE4_ALPHA4 0x8043
#define GL_LUMINANCE6_ALPHA2 0x8044
#define GL_LUMINANCE8_ALPHA8 0x8045
#define GL_LUMINANCE12_ALPHA4 0x8046
#define GL_LUMINANCE12_ALPHA12 0x8047
#define GL_LUMINANCE16_ALPHA16 0x8048
#define GL_INTENSITY 0x8049
#define GL_INTENSITY4 0x804A
#define GL_INTENSITY8 0x804B
#define GL_INTENSITY12 0x804C
#define GL_INTENSITY16 0x804D
#define GL_R3_G3_B2 0x2A10
#define GL_RGB4 0x804F
#define GL_RGB5 0x8050
#define GL_RGB8 0x8051
#define GL_RGB10 0x8052
#define GL_RGB12 0x8053
#define GL_RGB16 0x8054
#define GL_RGBA2 0x8055
#define GL_RGBA4 0x8056
#define GL_RGB5_A1 0x8057
#define GL_RGBA8 0x8058
#define GL_RGB10_A2 0x8059
#define GL_RGBA12 0x805A
#define GL_RGBA16 0x805B
#define GL_TEXTURE_RED_SIZE 0x805C
#define GL_TEXTURE_GREEN_SIZE 0x805D
#define GL_TEXTURE_BLUE_SIZE 0x805E
#define GL_TEXTURE_ALPHA_SIZE 0x805F
#define GL_TEXTURE_LUMINANCE_SIZE 0x8060
#define GL_TEXTURE_INTENSITY_SIZE 0x8061
#define GL_PROXY_TEXTURE_1D 0x8063
#define GL_PROXY_TEXTURE_2D 0x8064
#define GL_TEXTURE_TOO_LARGE 0x8065
#define GL_TEXTURE_PRIORITY 0x8066
#define GL_TEXTURE_RESIDENT 0x8067
#define GL_TEXTURE_BINDING_1D 0x8068
#define GL_TEXTURE_BINDING_2D 0x8069
#define GL_CLIENT_PIXEL_STORE_BIT 0x00000001
#define GL_CLIENT_VERTEX_ARRAY_BIT 0x00000002
#define GL_CLIENT_ALL_ATTRIB_BITS 0xFFFFFFFF

#endif

#ifdef GL_VERSION_1_2

#define GL_UNSIGNED_BYTE_3_3_2 0x8032
#define GL_UNSIGNED_SHORT_4_4_4_4 0x8033
#define GL_UNSIGNED_SHORT_5_5_5_1 0x8034
#define GL_UNSIGNED_INT_8_8_8_8 0x8035
#define GL_UNSIGNED_INT_10_10_10_2 0x8036
#define GL_TEXTURE_BINDING_3D 0x806A
#define GL_PACK_SKIP_IMAGES 0x806B
#define GL_PACK_IMAGE_HEIGHT 0x806C
#define GL_UNPACK_SKIP_IMAGES 0x806D
#define GL_UNPACK_IMAGE_HEIGHT 0x806E
#define GL_PROXY_TEXTURE_3D 0x8070
#define GL_TEXTURE_DEPTH 0x8071
#define GL_TEXTURE_WRAP_R 0x8072
#define GL_MAX_3D_TEXTURE_SIZE 0x8073
#define GL_UNSIGNED_BYTE_2_3_3_REV 0x8362
#define GL_UNSIGNED_SHORT_5_6_5 0x8363
#define GL_UNSIGNED_SHORT_5_6_5_REV 0x8364
#define GL_UNSIGNED_SHORT_4_4_4_4_REV 0x8365
#define GL_UNSIGNED_SHORT_1_5_5_5_REV 0x8366
#define GL_UNSIGNED_INT_8_8_8_8_REV 0x8367
#define GL_BGR 0x80E0
#define GL_MAX_ELEMENTS_VERTICES 0x80E8
#define GL_MAX_ELEMENTS_INDICES 0x80E9
#define GL_CLAMP_TO_EDGE 0x812F
#define GL_TEXTURE_MIN_LOD 0x813A
#define GL_TEXTURE_MAX_LOD 0x813B
#define GL_TEXTURE_BASE_LEVEL 0x813C
#define GL_TEXTURE_MAX_LEVEL 0x813D
#define GL_SMOOTH_POINT_SIZE_RANGE 0x0B12
#define GL_SMOOTH_POINT_SIZE_GRANULARITY 0x0B13
#define GL_SMOOTH_LINE_WIDTH_RANGE 0x0B22
#define GL_SMOOTH_LINE_WIDTH_GRANULARITY 0x0B23
#define GL_ALIASED_LINE_WIDTH_RANGE 0x846E
#define GL_RESCALE_NORMAL 0x803A
#define GL_LIGHT_MODEL_COLOR_CONTROL 0x81F8
#define GL_SINGLE_COLOR 0x81F9
#define GL_SEPARATE_SPECULAR_COLOR 0x81FA
#define GL_ALIASED_POINT_SIZE_RANGE 0x846D

#endif

#ifdef GL_VERSION_1_3

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
#define GL_ACTIVE_TEXTURE 0x84E0
#define GL_MULTISAMPLE 0x809D
#define GL_SAMPLE_ALPHA_TO_COVERAGE 0x809E
#define GL_SAMPLE_ALPHA_TO_ONE 0x809F
#define GL_SAMPLE_COVERAGE 0x80A0
#define GL_SAMPLE_BUFFERS 0x80A8
#define GL_SAMPLE_COVERAGE_VALUE 0x80AA
#define GL_SAMPLE_COVERAGE_INVERT 0x80AB
#define GL_TEXTURE_BINDING_CUBE_MAP 0x8514
#define GL_TEXTURE_CUBE_MAP_POSITIVE_X 0x8515
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_X 0x8516
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Y 0x8517
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Y 0x8518
#define GL_TEXTURE_CUBE_MAP_POSITIVE_Z 0x8519
#define GL_TEXTURE_CUBE_MAP_NEGATIVE_Z 0x851A
#define GL_PROXY_TEXTURE_CUBE_MAP 0x851B
#define GL_MAX_CUBE_MAP_TEXTURE_SIZE 0x851C
#define GL_COMPRESSED_RGB 0x84ED
#define GL_COMPRESSED_RGBA 0x84EE
#define GL_TEXTURE_COMPRESSION_HINT 0x84EF
#define GL_TEXTURE_COMPRESSED_IMAGE_SIZE 0x86A0
#define GL_NUM_COMPRESSED_TEXTURE_FORMATS 0x86A2
#define GL_COMPRESSED_TEXTURE_FORMATS 0x86A3
#define GL_CLAMP_TO_BORDER 0x812D
#define GL_CLIENT_ACTIVE_TEXTURE 0x84E1
#define GL_MAX_TEXTURE_UNITS 0x84E2
#define GL_TRANSPOSE_MODELVIEW_MATRIX 0x84E3
#define GL_TRANSPOSE_PROJECTION_MATRIX 0x84E4
#define GL_TRANSPOSE_TEXTURE_MATRIX 0x84E5
#define GL_TRANSPOSE_COLOR_MATRIX 0x84E6
#define GL_MULTISAMPLE_BIT 0x20000000
#define GL_NORMAL_MAP 0x8511
#define GL_REFLECTION_MAP 0x8512
#define GL_COMPRESSED_ALPHA 0x84E9
#define GL_COMPRESSED_LUMINANCE 0x84EA
#define GL_COMPRESSED_LUMINANCE_ALPHA 0x84EB
#define GL_COMPRESSED_INTENSITY 0x84EC
#define GL_COMBINE 0x8570
#define GL_COMBINE_RGB 0x8571
#define GL_COMBINE_ALPHA 0x8572
#define GL_SOURCE0_RGB 0x8580
#define GL_SOURCE1_RGB 0x8581
#define GL_SOURCE2_RGB 0x8582
#define GL_SOURCE0_ALPHA 0x8588
#define GL_SOURCE1_ALPHA 0x8589
#define GL_SOURCE2_ALPHA 0x858A
#define GL_OPERAND0_RGB 0x8590
#define GL_OPERAND1_RGB 0x8591
#define GL_OPERAND2_RGB 0x8592
#define GL_OPERAND0_ALPHA 0x8598
#define GL_OPERAND1_ALPHA 0x8599
#define GL_OPERAND2_ALPHA 0x859A
#define GL_RGB_SCALE 0x8573
#define GL_ADD_SIGNED 0x8574
#define GL_INTERPOLATE 0x8575
#define GL_SUBTRACT 0x84E7
#define GL_CONSTANT 0x8576
#define GL_PRIMARY_COLOR 0x8577
#define GL_PREVIOUS 0x8578
#define GL_DOT3_RGB 0x86AE
#define GL_DOT3_RGBA 0x86AF

#endif

#ifdef GL_VERSION_1_4

#define GL_BLEND_DST_RGB 0x80C8
#define GL_BLEND_SRC_RGB 0x80C9
#define GL_BLEND_DST_ALPHA 0x80CA
#define GL_BLEND_SRC_ALPHA 0x80CB
#define GL_POINT_FADE_THRESHOLD_SIZE 0x8128
#define GL_DEPTH_COMPONENT16 0x81A5
#define GL_DEPTH_COMPONENT24 0x81A6
#define GL_DEPTH_COMPONENT32 0x81A7
#define GL_MIRRORED_REPEAT 0x8370
#define GL_MAX_TEXTURE_LOD_BIAS 0x84FD
#define GL_TEXTURE_LOD_BIAS 0x8501
#define GL_INCR_WRAP 0x8507
#define GL_DECR_WRAP 0x8508
#define GL_TEXTURE_DEPTH_SIZE 0x884A
#define GL_TEXTURE_COMPARE_MODE 0x884C
#define GL_TEXTURE_COMPARE_FUNC 0x884D
#define GL_POINT_SIZE_MIN 0x8126
#define GL_POINT_SIZE_MAX 0x8127
#define GL_POINT_DISTANCE_ATTENUATION 0x8129
#define GL_GENERATE_MIPMAP 0x8191
#define GL_GENERATE_MIPMAP_HINT 0x8192
#define GL_FOG_COORDINATE_SOURCE 0x8450
#define GL_FOG_COORDINATE 0x8451
#define GL_FRAGMENT_DEPTH 0x8452
#define GL_CURRENT_FOG_COORDINATE 0x8453
#define GL_FOG_COORDINATE_ARRAY_TYPE 0x8454
#define GL_FOG_COORDINATE_ARRAY_STRIDE 0x8455
#define GL_FOG_COORDINATE_ARRAY_POINTER 0x8456
#define GL_FOG_COORDINATE_ARRAY 0x8457
#define GL_COLOR_SUM 0x8458
#define GL_CURRENT_SECONDARY_COLOR 0x8459
#define GL_SECONDARY_COLOR_ARRAY_SIZE 0x845A
#define GL_SECONDARY_COLOR_ARRAY_TYPE 0x845B
#define GL_SECONDARY_COLOR_ARRAY_STRIDE 0x845C
#define GL_SECONDARY_COLOR_ARRAY_POINTER 0x845D
#define GL_SECONDARY_COLOR_ARRAY 0x845E
#define GL_TEXTURE_FILTER_CONTROL 0x8500
#define GL_DEPTH_TEXTURE_MODE 0x884B
#define GL_COMPARE_R_TO_TEXTURE 0x884E

#endif

#ifdef GL_VERSION_1_5

#define GL_BUFFER_SIZE 0x8764
#define GL_BUFFER_USAGE 0x8765
#define GL_QUERY_COUNTER_BITS 0x8864
#define GL_CURRENT_QUERY 0x8865
#define GL_QUERY_RESULT 0x8866
#define GL_QUERY_RESULT_AVAILABLE 0x8867
#define GL_ARRAY_BUFFER 0x8892
#define GL_ELEMENT_ARRAY_BUFFER 0x8893
#define GL_ARRAY_BUFFER_BINDING 0x8894
#define GL_ELEMENT_ARRAY_BUFFER_BINDING 0x8895
#define GL_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING 0x889F
#define GL_READ_ONLY 0x88B8
#define GL_BUFFER_ACCESS 0x88BB
#define GL_BUFFER_MAPPED 0x88BC
#define GL_BUFFER_MAP_POINTER 0x88BD
#define GL_STREAM_DRAW 0x88E0
#define GL_STREAM_READ 0x88E1
#define GL_STREAM_COPY 0x88E2
#define GL_STATIC_DRAW 0x88E4
#define GL_STATIC_READ 0x88E5
#define GL_STATIC_COPY 0x88E6
#define GL_DYNAMIC_DRAW 0x88E8
#define GL_DYNAMIC_READ 0x88E9
#define GL_DYNAMIC_COPY 0x88EA
#define GL_SAMPLES_PASSED 0x8914
#define GL_VERTEX_ARRAY_BUFFER_BINDING 0x8896
#define GL_NORMAL_ARRAY_BUFFER_BINDING 0x8897
#define GL_COLOR_ARRAY_BUFFER_BINDING 0x8898
#define GL_INDEX_ARRAY_BUFFER_BINDING 0x8899
#define GL_TEXTURE_COORD_ARRAY_BUFFER_BINDING 0x889A
#define GL_EDGE_FLAG_ARRAY_BUFFER_BINDING 0x889B
#define GL_SECONDARY_COLOR_ARRAY_BUFFER_BINDING 0x889C
#define GL_FOG_COORDINATE_ARRAY_BUFFER_BINDING 0x889D
#define GL_WEIGHT_ARRAY_BUFFER_BINDING 0x889E
#define GL_FOG_COORD_SRC 0x8450
#define GL_FOG_COORD 0x8451
#define GL_CURRENT_FOG_COORD 0x8453
#define GL_FOG_COORD_ARRAY_TYPE 0x8454
#define GL_FOG_COORD_ARRAY_STRIDE 0x8455
#define GL_FOG_COORD_ARRAY_POINTER 0x8456
#define GL_FOG_COORD_ARRAY 0x8457
#define GL_FOG_COORD_ARRAY_BUFFER_BINDING 0x889D
#define GL_SRC0_RGB 0x8580
#define GL_SRC1_RGB 0x8581
#define GL_SRC2_RGB 0x8582
#define GL_SRC0_ALPHA 0x8588
#define GL_SRC2_ALPHA 0x858A

#endif

#ifdef GL_VERSION_2_0

#define GL_BLEND_EQUATION_RGB 0x8009
#define GL_VERTEX_ATTRIB_ARRAY_ENABLED 0x8622
#define GL_VERTEX_ATTRIB_ARRAY_SIZE 0x8623
#define GL_VERTEX_ATTRIB_ARRAY_STRIDE 0x8624
#define GL_VERTEX_ATTRIB_ARRAY_TYPE 0x8625
#define GL_CURRENT_VERTEX_ATTRIB 0x8626
#define GL_VERTEX_PROGRAM_POINT_SIZE 0x8642
#define GL_VERTEX_ATTRIB_ARRAY_POINTER 0x8645
#define GL_STENCIL_BACK_FUNC 0x8800
#define GL_STENCIL_BACK_FAIL 0x8801
#define GL_STENCIL_BACK_PASS_DEPTH_FAIL 0x8802
#define GL_STENCIL_BACK_PASS_DEPTH_PASS 0x8803
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
#define GL_BLEND_EQUATION_ALPHA 0x883D
#define GL_MAX_VERTEX_ATTRIBS 0x8869
#define GL_VERTEX_ATTRIB_ARRAY_NORMALIZED 0x886A
#define GL_MAX_TEXTURE_IMAGE_UNITS 0x8872
#define GL_FRAGMENT_SHADER 0x8B30
#define GL_VERTEX_SHADER 0x8B31
#define GL_MAX_FRAGMENT_UNIFORM_COMPONENTS 0x8B49
#define GL_MAX_VERTEX_UNIFORM_COMPONENTS 0x8B4A
#define GL_MAX_VARYING_FLOATS 0x8B4B
#define GL_MAX_VERTEX_TEXTURE_IMAGE_UNITS 0x8B4C
#define GL_MAX_COMBINED_TEXTURE_IMAGE_UNITS 0x8B4D
#define GL_SHADER_TYPE 0x8B4F
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
#define GL_SAMPLER_1D 0x8B5D
#define GL_SAMPLER_2D 0x8B5E
#define GL_SAMPLER_3D 0x8B5F
#define GL_SAMPLER_CUBE 0x8B60
#define GL_SAMPLER_1D_SHADOW 0x8B61
#define GL_SAMPLER_2D_SHADOW 0x8B62
#define GL_DELETE_STATUS 0x8B80
#define GL_COMPILE_STATUS 0x8B81
#define GL_LINK_STATUS 0x8B82
#define GL_VALIDATE_STATUS 0x8B83
#define GL_INFO_LOG_LENGTH 0x8B84
#define GL_ATTACHED_SHADERS 0x8B85
#define GL_ACTIVE_UNIFORMS 0x8B86
#define GL_ACTIVE_UNIFORM_MAX_LENGTH 0x8B87
#define GL_SHADER_SOURCE_LENGTH 0x8B88
#define GL_ACTIVE_ATTRIBUTES 0x8B89
#define GL_ACTIVE_ATTRIBUTE_MAX_LENGTH 0x8B8A
#define GL_FRAGMENT_SHADER_DERIVATIVE_HINT 0x8B8B
#define GL_SHADING_LANGUAGE_VERSION 0x8B8C
#define GL_CURRENT_PROGRAM 0x8B8D
#define GL_POINT_SPRITE_COORD_ORIGIN 0x8CA0
#define GL_STENCIL_BACK_REF 0x8CA3
#define GL_STENCIL_BACK_VALUE_MASK 0x8CA4
#define GL_STENCIL_BACK_WRITEMASK 0x8CA5
#define GL_VERTEX_PROGRAM_TWO_SIDE 0x8643
#define GL_POINT_SPRITE 0x8861
#define GL_COORD_REPLACE 0x8862
#define GL_MAX_TEXTURE_COORDS 0x8871

#endif

#ifdef GL_VERSION_2_1

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
#define GL_SRGB_ALPHA 0x8C42
#define GL_SRGB8_ALPHA8 0x8C43
#define GL_COMPRESSED_SRGB 0x8C48
#define GL_COMPRESSED_SRGB_ALPHA 0x8C49
#define GL_CURRENT_RASTER_SECONDARY_COLOR 0x845F
#define GL_SLUMINANCE_ALPHA 0x8C44
#define GL_SLUMINANCE8_ALPHA8 0x8C45
#define GL_SLUMINANCE 0x8C46
#define GL_SLUMINANCE8 0x8C47
#define GL_COMPRESSED_SLUMINANCE 0x8C4A
#define GL_COMPRESSED_SLUMINANCE_ALPHA 0x8C4B

#endif

#ifdef GL_VERSION_3_0

#define GL_COMPARE_REF_TO_TEXTURE 0x884E
#define GL_CLIP_DISTANCE0 0x3000
#define GL_CLIP_DISTANCE1 0x3001
#define GL_CLIP_DISTANCE2 0x3002
#define GL_CLIP_DISTANCE3 0x3003
#define GL_CLIP_DISTANCE4 0x3004
#define GL_CLIP_DISTANCE5 0x3005
#define GL_CLIP_DISTANCE6 0x3006
#define GL_CLIP_DISTANCE7 0x3007
#define GL_MAX_CLIP_DISTANCES 0x0D32
#define GL_MAJOR_VERSION 0x821B
#define GL_MINOR_VERSION 0x821C
#define GL_NUM_EXTENSIONS 0x821D
#define GL_CONTEXT_FLAGS 0x821E
#define GL_COMPRESSED_RED 0x8225
#define GL_COMPRESSED_RG 0x8226
#define GL_CONTEXT_FLAG_FORWARD_COMPATIBLE_BIT 0x0001
#define GL_RGBA32F 0x8814
#define GL_RGBA16F 0x881A
#define GL_RGB16F 0x881B
#define GL_VERTEX_ATTRIB_ARRAY_INTEGER 0x88FD
#define GL_MAX_ARRAY_TEXTURE_LAYERS 0x88FF
#define GL_MIN_PROGRAM_TEXEL_OFFSET 0x8904
#define GL_MAX_PROGRAM_TEXEL_OFFSET 0x8905
#define GL_CLAMP_READ_COLOR 0x891C
#define GL_FIXED_ONLY 0x891D
#define GL_PROXY_TEXTURE_1D_ARRAY 0x8C19
#define GL_PROXY_TEXTURE_2D_ARRAY 0x8C1B
#define GL_TEXTURE_BINDING_1D_ARRAY 0x8C1C
#define GL_TEXTURE_BINDING_2D_ARRAY 0x8C1D
#define GL_R11F_G11F_B10F 0x8C3A
#define GL_RGB9_E5 0x8C3D
#define GL_UNSIGNED_INT_5_9_9_9_REV 0x8C3E
#define GL_TEXTURE_SHARED_SIZE 0x8C3F
#define GL_TRANSFORM_FEEDBACK_VARYING_MAX_LENGTH 0x8C76
#define GL_TRANSFORM_FEEDBACK_BUFFER_MODE 0x8C7F
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS 0x8C80
#define GL_TRANSFORM_FEEDBACK_VARYINGS 0x8C83
#define GL_TRANSFORM_FEEDBACK_BUFFER_START 0x8C84
#define GL_TRANSFORM_FEEDBACK_BUFFER_SIZE 0x8C85
#define GL_PRIMITIVES_GENERATED 0x8C87
#define GL_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN 0x8C88
#define GL_RASTERIZER_DISCARD 0x8C89
#define GL_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS 0x8C8A
#define GL_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS 0x8C8B
#define GL_INTERLEAVED_ATTRIBS 0x8C8C
#define GL_SEPARATE_ATTRIBS 0x8C8D
#define GL_TRANSFORM_FEEDBACK_BUFFER 0x8C8E
#define GL_TRANSFORM_FEEDBACK_BUFFER_BINDING 0x8C8F
#define GL_RGBA32UI 0x8D70
#define GL_RGBA16UI 0x8D76
#define GL_RGB16UI 0x8D77
#define GL_RGB8UI 0x8D7D
#define GL_RGBA32I 0x8D82
#define GL_RGBA16I 0x8D88
#define GL_RGB16I 0x8D89
#define GL_RGBA8I 0x8D8E
#define GL_RGB8I 0x8D8F
#define GL_RED_INTEGER 0x8D94
#define GL_GREEN_INTEGER 0x8D95
#define GL_BLUE_INTEGER 0x8D96
#define GL_RGB_INTEGER 0x8D98
#define GL_RGBA_INTEGER 0x8D99
#define GL_BGR_INTEGER 0x8D9A
#define GL_BGRA_INTEGER 0x8D9B
#define GL_SAMPLER_1D_ARRAY 0x8DC0
#define GL_SAMPLER_2D_ARRAY 0x8DC1
#define GL_SAMPLER_1D_ARRAY_SHADOW 0x8DC3
#define GL_SAMPLER_2D_ARRAY_SHADOW 0x8DC4
#define GL_SAMPLER_CUBE_SHADOW 0x8DC5
#define GL_UNSIGNED_INT_VEC2 0x8DC6
#define GL_UNSIGNED_INT_VEC3 0x8DC7
#define GL_UNSIGNED_INT_VEC4 0x8DC8
#define GL_INT_SAMPLER_1D 0x8DC9
#define GL_INT_SAMPLER_2D 0x8DCA
#define GL_INT_SAMPLER_3D 0x8DCB
#define GL_INT_SAMPLER_CUBE 0x8DCC
#define GL_INT_SAMPLER_1D_ARRAY 0x8DCE
#define GL_INT_SAMPLER_2D_ARRAY 0x8DCF
#define GL_UNSIGNED_INT_SAMPLER_1D 0x8DD1
#define GL_UNSIGNED_INT_SAMPLER_2D 0x8DD2
#define GL_UNSIGNED_INT_SAMPLER_3D 0x8DD3
#define GL_UNSIGNED_INT_SAMPLER_CUBE 0x8DD4
#define GL_UNSIGNED_INT_SAMPLER_1D_ARRAY 0x8DD6
#define GL_UNSIGNED_INT_SAMPLER_2D_ARRAY 0x8DD7
#define GL_QUERY_WAIT 0x8E13
#define GL_QUERY_NO_WAIT 0x8E14
#define GL_QUERY_BY_REGION_WAIT 0x8E15
#define GL_QUERY_BY_REGION_NO_WAIT 0x8E16
#define GL_BUFFER_ACCESS_FLAGS 0x911F
#define GL_BUFFER_MAP_LENGTH 0x9120
#define GL_BUFFER_MAP_OFFSET 0x9121
#define GL_CLAMP_VERTEX_COLOR 0x891A
#define GL_CLAMP_FRAGMENT_COLOR 0x891B
#define GL_ALPHA_INTEGER 0x8D97

#endif

#ifdef GL_VERSION_3_1

#define GL_SAMPLER_2D_RECT 0x8B63
#define GL_SAMPLER_2D_RECT_SHADOW 0x8B64
#define GL_SAMPLER_BUFFER 0x8DC2
#define GL_INT_SAMPLER_2D_RECT 0x8DCD
#define GL_INT_SAMPLER_BUFFER 0x8DD0
#define GL_UNSIGNED_INT_SAMPLER_2D_RECT 0x8DD5
#define GL_UNSIGNED_INT_SAMPLER_BUFFER 0x8DD8
#define GL_MAX_TEXTURE_BUFFER_SIZE 0x8C2B
#define GL_TEXTURE_BINDING_BUFFER 0x8C2C
#define GL_TEXTURE_BUFFER_DATA_STORE_BINDING 0x8C2D
#define GL_TEXTURE_BUFFER_FORMAT 0x8C2E
#define GL_TEXTURE_BINDING_RECTANGLE 0x84F6
#define GL_PROXY_TEXTURE_RECTANGLE 0x84F7
#define GL_MAX_RECTANGLE_TEXTURE_SIZE 0x84F8
#define GL_PRIMITIVE_RESTART 0x8F9D
#define GL_PRIMITIVE_RESTART_INDEX 0x8F9E

#endif

#ifdef GL_VERSION_3_2

#define GL_CONTEXT_CORE_PROFILE_BIT 0x00000001
#define GL_CONTEXT_COMPATIBILITY_PROFILE_BIT 0x00000002
#define GL_LINES_ADJACENCY 0x000A
#define GL_LINE_STRIP_ADJACENCY 0x000B
#define GL_TRIANGLES_ADJACENCY 0x000C
#define GL_TRIANGLE_STRIP_ADJACENCY 0x000D
#define GL_PROGRAM_POINT_SIZE 0x8642
#define GL_MAX_GEOMETRY_TEXTURE_IMAGE_UNITS 0x8C29
#define GL_FRAMEBUFFER_ATTACHMENT_LAYERED 0x8DA7
#define GL_FRAMEBUFFER_INCOMPLETE_LAYER_TARGETS 0x8DA8
#define GL_GEOMETRY_SHADER 0x8DD9
#define GL_GEOMETRY_VERTICES_OUT 0x8916
#define GL_GEOMETRY_INPUT_TYPE 0x8917
#define GL_GEOMETRY_OUTPUT_TYPE 0x8918
#define GL_MAX_GEOMETRY_UNIFORM_COMPONENTS 0x8DDF
#define GL_MAX_GEOMETRY_OUTPUT_VERTICES 0x8DE0
#define GL_MAX_GEOMETRY_TOTAL_OUTPUT_COMPONENTS 0x8DE1
#define GL_MAX_VERTEX_OUTPUT_COMPONENTS 0x9122
#define GL_MAX_GEOMETRY_INPUT_COMPONENTS 0x9123
#define GL_MAX_GEOMETRY_OUTPUT_COMPONENTS 0x9124
#define GL_MAX_FRAGMENT_INPUT_COMPONENTS 0x9125
#define GL_CONTEXT_PROFILE_MASK 0x9126

#endif

#ifdef GL_VERSION_3_3

#define GL_VERTEX_ATTRIB_ARRAY_DIVISOR 0x88FE

#endif

#ifdef GL_VERSION_4_0

#define GL_SAMPLE_SHADING 0x8C36
#define GL_MIN_SAMPLE_SHADING_VALUE 0x8C37
#define GL_MIN_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5E
#define GL_MAX_PROGRAM_TEXTURE_GATHER_OFFSET 0x8E5F
#define GL_TEXTURE_BINDING_CUBE_MAP_ARRAY 0x900A
#define GL_PROXY_TEXTURE_CUBE_MAP_ARRAY 0x900B
#define GL_SAMPLER_CUBE_MAP_ARRAY 0x900C
#define GL_SAMPLER_CUBE_MAP_ARRAY_SHADOW 0x900D
#define GL_INT_SAMPLER_CUBE_MAP_ARRAY 0x900E
#define GL_UNSIGNED_INT_SAMPLER_CUBE_MAP_ARRAY 0x900F

#endif

#ifdef GL_VERSION_4_1


#endif

#ifdef GL_VERSION_4_2


#endif

#ifdef GL_VERSION_4_3

#define GL_NUM_SHADING_LANGUAGE_VERSIONS 0x82E9
#define GL_VERTEX_ATTRIB_ARRAY_LONG 0x874E

#endif

#ifdef GL_VERSION_4_4

#define GL_MAX_VERTEX_ATTRIB_STRIDE 0x82E5

#endif

#ifdef GL_VERSION_4_5

#define GL_CONTEXT_FLAG_ROBUST_ACCESS_BIT 0x00000004

#endif

#ifdef GL_WIN_phong_shading

#define GL_PHONG_WIN 0x80EA
#define GL_PHONG_HINT_WIN 0x80EB

#endif

#ifdef GL_WIN_specular_fog

#define GL_FOG_SPECULAR_TEXTURE_WIN 0x80EC

#endif

#ifdef GL_AMD_debug_output

typedef void (GLLOADER_APIENTRY *GLDEBUGPROCAMD)(GLuint id, GLenum category, GLenum severity, GLsizei length, const GLchar* message, GLvoid* userParam);

#endif

#ifdef GL_ARB_debug_output

typedef void (GLLOADER_APIENTRY *GLDEBUGPROCARB)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, GLvoid* userParam);

#endif

#ifdef GL_ARB_half_float_pixel

typedef unsigned short GLhalfARB;

#endif

#ifdef GL_ARB_shader_objects

typedef char GLcharARB;
typedef unsigned int GLhandleARB;

#endif

#ifdef GL_ARB_sync

typedef struct __GLsync* GLsync;

#endif

#ifdef GL_ARB_vertex_buffer_object

typedef ptrdiff_t GLintptrARB;
typedef ptrdiff_t GLsizeiptrARB;

#endif

#ifdef GL_EXT_timer_query

typedef GLint64 GLint64EXT;
typedef GLuint64 GLuint64EXT;

#endif

#ifdef GL_KHR_debug

typedef void (GLLOADER_APIENTRY *GLDEBUGPROC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* message, GLvoid* userParam);

#endif

#ifdef GL_NV_half_float

typedef unsigned short GLhalfNV;

#endif

#ifdef GL_NV_vdpau_interop

typedef GLintptr GLvdpauSurfaceNV;

#endif

#ifdef GL_3DFX_tbuffer

typedef void (GLLOADER_APIENTRY *glTbufferMask3DFXFUNC)(GLuint mask);

extern GLLOADER_API glTbufferMask3DFXFUNC glTbufferMask3DFX;

#endif

#ifdef GL_AMD_debug_output

typedef void (GLLOADER_APIENTRY *glDebugMessageEnableAMDFUNC)(GLenum category, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
typedef void (GLLOADER_APIENTRY *glDebugMessageInsertAMDFUNC)(GLenum category, GLenum severity, GLuint id, GLsizei length, const GLchar* buf);
typedef void (GLLOADER_APIENTRY *glDebugMessageCallbackAMDFUNC)(GLDEBUGPROCAMD callback, GLvoid* userParam);
typedef GLuint (GLLOADER_APIENTRY *glGetDebugMessageLogAMDFUNC)(GLuint count, GLsizei bufsize, GLenum* categories, GLuint* severities, GLuint* ids, GLsizei* lengths, GLchar* message);

extern GLLOADER_API glDebugMessageEnableAMDFUNC glDebugMessageEnableAMD;
extern GLLOADER_API glDebugMessageInsertAMDFUNC glDebugMessageInsertAMD;
extern GLLOADER_API glDebugMessageCallbackAMDFUNC glDebugMessageCallbackAMD;
extern GLLOADER_API glGetDebugMessageLogAMDFUNC glGetDebugMessageLogAMD;

#endif

#ifdef GL_AMD_draw_buffers_blend

typedef void (GLLOADER_APIENTRY *glBlendFuncIndexedAMDFUNC)(GLuint buf, GLenum src, GLenum dst);
typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateIndexedAMDFUNC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GLLOADER_APIENTRY *glBlendEquationIndexedAMDFUNC)(GLuint buf, GLenum mode);
typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateIndexedAMDFUNC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);

extern GLLOADER_API glBlendFuncIndexedAMDFUNC glBlendFuncIndexedAMD;
extern GLLOADER_API glBlendFuncSeparateIndexedAMDFUNC glBlendFuncSeparateIndexedAMD;
extern GLLOADER_API glBlendEquationIndexedAMDFUNC glBlendEquationIndexedAMD;
extern GLLOADER_API glBlendEquationSeparateIndexedAMDFUNC glBlendEquationSeparateIndexedAMD;

#endif

#ifdef GL_AMD_gpu_shader_int64

typedef void (GLLOADER_APIENTRY *glUniform1i64NVFUNC)(GLint location, GLint64EXT x);
typedef void (GLLOADER_APIENTRY *glUniform2i64NVFUNC)(GLint location, GLint64EXT x, GLint64EXT y);
typedef void (GLLOADER_APIENTRY *glUniform3i64NVFUNC)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (GLLOADER_APIENTRY *glUniform4i64NVFUNC)(GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (GLLOADER_APIENTRY *glUniform1i64vNVFUNC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glUniform2i64vNVFUNC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glUniform3i64vNVFUNC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glUniform4i64vNVFUNC)(GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glUniform1ui64NVFUNC)(GLint location, GLuint64EXT x);
typedef void (GLLOADER_APIENTRY *glUniform2ui64NVFUNC)(GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (GLLOADER_APIENTRY *glUniform3ui64NVFUNC)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (GLLOADER_APIENTRY *glUniform4ui64NVFUNC)(GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (GLLOADER_APIENTRY *glUniform1ui64vNVFUNC)(GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glUniform2ui64vNVFUNC)(GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glUniform3ui64vNVFUNC)(GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glUniform4ui64vNVFUNC)(GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glGetUniformi64vNVFUNC)(GLuint program, GLint location, GLint64EXT* params);
typedef void (GLLOADER_APIENTRY *glGetUniformui64vNVFUNC)(GLuint program, GLint location, GLuint64EXT* params);
typedef void (GLLOADER_APIENTRY *glProgramUniform1i64NVFUNC)(GLuint program, GLint location, GLint64EXT x);
typedef void (GLLOADER_APIENTRY *glProgramUniform2i64NVFUNC)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y);
typedef void (GLLOADER_APIENTRY *glProgramUniform3i64NVFUNC)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (GLLOADER_APIENTRY *glProgramUniform4i64NVFUNC)(GLuint program, GLint location, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (GLLOADER_APIENTRY *glProgramUniform1i64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2i64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3i64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4i64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1ui64NVFUNC)(GLuint program, GLint location, GLuint64EXT x);
typedef void (GLLOADER_APIENTRY *glProgramUniform2ui64NVFUNC)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y);
typedef void (GLLOADER_APIENTRY *glProgramUniform3ui64NVFUNC)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (GLLOADER_APIENTRY *glProgramUniform4ui64NVFUNC)(GLuint program, GLint location, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (GLLOADER_APIENTRY *glProgramUniform1ui64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2ui64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3ui64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4ui64vNVFUNC)(GLuint program, GLint location, GLsizei count, const GLuint64EXT* value);

extern GLLOADER_API glUniform1i64NVFUNC glUniform1i64NV;
extern GLLOADER_API glUniform2i64NVFUNC glUniform2i64NV;
extern GLLOADER_API glUniform3i64NVFUNC glUniform3i64NV;
extern GLLOADER_API glUniform4i64NVFUNC glUniform4i64NV;
extern GLLOADER_API glUniform1i64vNVFUNC glUniform1i64vNV;
extern GLLOADER_API glUniform2i64vNVFUNC glUniform2i64vNV;
extern GLLOADER_API glUniform3i64vNVFUNC glUniform3i64vNV;
extern GLLOADER_API glUniform4i64vNVFUNC glUniform4i64vNV;
extern GLLOADER_API glUniform1ui64NVFUNC glUniform1ui64NV;
extern GLLOADER_API glUniform2ui64NVFUNC glUniform2ui64NV;
extern GLLOADER_API glUniform3ui64NVFUNC glUniform3ui64NV;
extern GLLOADER_API glUniform4ui64NVFUNC glUniform4ui64NV;
extern GLLOADER_API glUniform1ui64vNVFUNC glUniform1ui64vNV;
extern GLLOADER_API glUniform2ui64vNVFUNC glUniform2ui64vNV;
extern GLLOADER_API glUniform3ui64vNVFUNC glUniform3ui64vNV;
extern GLLOADER_API glUniform4ui64vNVFUNC glUniform4ui64vNV;
extern GLLOADER_API glGetUniformi64vNVFUNC glGetUniformi64vNV;
extern GLLOADER_API glGetUniformui64vNVFUNC glGetUniformui64vNV;
extern GLLOADER_API glProgramUniform1i64NVFUNC glProgramUniform1i64NV;
extern GLLOADER_API glProgramUniform2i64NVFUNC glProgramUniform2i64NV;
extern GLLOADER_API glProgramUniform3i64NVFUNC glProgramUniform3i64NV;
extern GLLOADER_API glProgramUniform4i64NVFUNC glProgramUniform4i64NV;
extern GLLOADER_API glProgramUniform1i64vNVFUNC glProgramUniform1i64vNV;
extern GLLOADER_API glProgramUniform2i64vNVFUNC glProgramUniform2i64vNV;
extern GLLOADER_API glProgramUniform3i64vNVFUNC glProgramUniform3i64vNV;
extern GLLOADER_API glProgramUniform4i64vNVFUNC glProgramUniform4i64vNV;
extern GLLOADER_API glProgramUniform1ui64NVFUNC glProgramUniform1ui64NV;
extern GLLOADER_API glProgramUniform2ui64NVFUNC glProgramUniform2ui64NV;
extern GLLOADER_API glProgramUniform3ui64NVFUNC glProgramUniform3ui64NV;
extern GLLOADER_API glProgramUniform4ui64NVFUNC glProgramUniform4ui64NV;
extern GLLOADER_API glProgramUniform1ui64vNVFUNC glProgramUniform1ui64vNV;
extern GLLOADER_API glProgramUniform2ui64vNVFUNC glProgramUniform2ui64vNV;
extern GLLOADER_API glProgramUniform3ui64vNVFUNC glProgramUniform3ui64vNV;
extern GLLOADER_API glProgramUniform4ui64vNVFUNC glProgramUniform4ui64vNV;

#endif

#ifdef GL_AMD_interleaved_elements

typedef void (GLLOADER_APIENTRY *glVertexAttribParameteriAMDFUNC)(GLint index, GLenum pname, GLint param);

extern GLLOADER_API glVertexAttribParameteriAMDFUNC glVertexAttribParameteriAMD;

#endif

#ifdef GL_AMD_multi_draw_indirect

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysIndirectAMDFUNC)(GLenum mode, const GLvoid* indirect, GLsizei primcount, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsIndirectAMDFUNC)(GLenum mode, GLenum type, const GLvoid* indirect, GLsizei primcount, GLsizei stride);

extern GLLOADER_API glMultiDrawArraysIndirectAMDFUNC glMultiDrawArraysIndirectAMD;
extern GLLOADER_API glMultiDrawElementsIndirectAMDFUNC glMultiDrawElementsIndirectAMD;

#endif

#ifdef GL_AMD_name_gen_delete

typedef void (GLLOADER_APIENTRY *glGenNamesAMDFUNC)(GLenum identifier, GLuint num, GLuint* names);
typedef void (GLLOADER_APIENTRY *glDeleteNamesAMDFUNC)(GLenum identifier, GLuint num, const GLuint* names);
typedef GLboolean (GLLOADER_APIENTRY *glIsNameAMDFUNC)(GLenum identifier, GLuint name);

extern GLLOADER_API glGenNamesAMDFUNC glGenNamesAMD;
extern GLLOADER_API glDeleteNamesAMDFUNC glDeleteNamesAMD;
extern GLLOADER_API glIsNameAMDFUNC glIsNameAMD;

#endif

#ifdef GL_AMD_occlusion_query_event

typedef void (GLLOADER_APIENTRY *glQueryObjectParameteruiAMDFUNC)(GLenum target, GLuint id, GLenum pname, GLuint param);

extern GLLOADER_API glQueryObjectParameteruiAMDFUNC glQueryObjectParameteruiAMD;

#endif

#ifdef GL_AMD_performance_monitor

typedef void (GLLOADER_APIENTRY *glGetPerfMonitorGroupsAMDFUNC)(GLint* numGroups, GLsizei groupsSize, GLuint* groups);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorCountersAMDFUNC)(GLuint group, GLint* numCounters, GLint* maxActiveCounters, GLsizei counterSize, GLuint* counters);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorGroupStringAMDFUNC)(GLuint group, GLsizei bufSize, GLsizei* length, GLchar* groupString);
typedef void (GLLOADER_APIENTRY *glGetPerfMonitorCounterStringAMDFUNC)(GLuint group, GLuint counter, GLsizei bufSize, GLsizei* length, GLchar* counterString);
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

#ifdef GL_AMD_sample_positions

typedef void (GLLOADER_APIENTRY *glSetMultisamplefvAMDFUNC)(GLenum pname, GLuint index, const GLfloat* val);

extern GLLOADER_API glSetMultisamplefvAMDFUNC glSetMultisamplefvAMD;

#endif

#ifdef GL_AMD_sparse_texture

typedef void (GLLOADER_APIENTRY *glTexStorageSparseAMDFUNC)(GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);
typedef void (GLLOADER_APIENTRY *glTextureStorageSparseAMDFUNC)(GLuint texture, GLenum target, GLenum internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLsizei layers, GLbitfield flags);

extern GLLOADER_API glTexStorageSparseAMDFUNC glTexStorageSparseAMD;
extern GLLOADER_API glTextureStorageSparseAMDFUNC glTextureStorageSparseAMD;

#endif

#ifdef GL_AMD_stencil_operation_extended

typedef void (GLLOADER_APIENTRY *glStencilOpValueAMDFUNC)(GLenum face, GLuint value);

extern GLLOADER_API glStencilOpValueAMDFUNC glStencilOpValueAMD;

#endif

#ifdef GL_AMD_vertex_shader_tessellator

typedef void (GLLOADER_APIENTRY *glTessellationFactorAMDFUNC)(GLfloat factor);
typedef void (GLLOADER_APIENTRY *glTessellationModeAMDFUNC)(GLenum mode);

extern GLLOADER_API glTessellationFactorAMDFUNC glTessellationFactorAMD;
extern GLLOADER_API glTessellationModeAMDFUNC glTessellationModeAMD;

#endif

#ifdef GL_APPLE_element_array

typedef void (GLLOADER_APIENTRY *glElementPointerAPPLEFUNC)(GLenum type, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glDrawElementArrayAPPLEFUNC)(GLenum mode, GLint first, GLsizei count);
typedef void (GLLOADER_APIENTRY *glDrawRangeElementArrayAPPLEFUNC)(GLenum mode, GLuint start, GLuint end, GLint first, GLsizei count);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementArrayAPPLEFUNC)(GLenum mode, const GLint* first, const GLsizei* count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glMultiDrawRangeElementArrayAPPLEFUNC)(GLenum mode, GLuint start, GLuint end, const GLint* first, const GLsizei* count, GLsizei primcount);

extern GLLOADER_API glElementPointerAPPLEFUNC glElementPointerAPPLE;
extern GLLOADER_API glDrawElementArrayAPPLEFUNC glDrawElementArrayAPPLE;
extern GLLOADER_API glDrawRangeElementArrayAPPLEFUNC glDrawRangeElementArrayAPPLE;
extern GLLOADER_API glMultiDrawElementArrayAPPLEFUNC glMultiDrawElementArrayAPPLE;
extern GLLOADER_API glMultiDrawRangeElementArrayAPPLEFUNC glMultiDrawRangeElementArrayAPPLE;

#endif

#ifdef GL_APPLE_fence

typedef void (GLLOADER_APIENTRY *glGenFencesAPPLEFUNC)(GLsizei n, GLuint* fences);
typedef void (GLLOADER_APIENTRY *glDeleteFencesAPPLEFUNC)(GLsizei n, const GLuint* fences);
typedef void (GLLOADER_APIENTRY *glSetFenceAPPLEFUNC)(GLuint fence);
typedef GLboolean (GLLOADER_APIENTRY *glIsFenceAPPLEFUNC)(GLuint fence);
typedef GLboolean (GLLOADER_APIENTRY *glTestFenceAPPLEFUNC)(GLuint fence);
typedef void (GLLOADER_APIENTRY *glFinishFenceAPPLEFUNC)(GLuint fence);
typedef GLboolean (GLLOADER_APIENTRY *glTestObjectAPPLEFUNC)(GLenum object, GLuint name);
typedef void (GLLOADER_APIENTRY *glFinishObjectAPPLEFUNC)(GLenum object, GLint name);

extern GLLOADER_API glGenFencesAPPLEFUNC glGenFencesAPPLE;
extern GLLOADER_API glDeleteFencesAPPLEFUNC glDeleteFencesAPPLE;
extern GLLOADER_API glSetFenceAPPLEFUNC glSetFenceAPPLE;
extern GLLOADER_API glIsFenceAPPLEFUNC glIsFenceAPPLE;
extern GLLOADER_API glTestFenceAPPLEFUNC glTestFenceAPPLE;
extern GLLOADER_API glFinishFenceAPPLEFUNC glFinishFenceAPPLE;
extern GLLOADER_API glTestObjectAPPLEFUNC glTestObjectAPPLE;
extern GLLOADER_API glFinishObjectAPPLEFUNC glFinishObjectAPPLE;

#endif

#ifdef GL_APPLE_flush_buffer_range

typedef void (GLLOADER_APIENTRY *glBufferParameteriAPPLEFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFlushMappedBufferRangeAPPLEFUNC)(GLenum target, GLintptr offset, GLsizeiptr size);

extern GLLOADER_API glBufferParameteriAPPLEFUNC glBufferParameteriAPPLE;
extern GLLOADER_API glFlushMappedBufferRangeAPPLEFUNC glFlushMappedBufferRangeAPPLE;

#endif

#ifdef GL_APPLE_object_purgeable

typedef GLenum (GLLOADER_APIENTRY *glObjectPurgeableAPPLEFUNC)(GLenum objectType, GLuint name, GLenum option);
typedef GLenum (GLLOADER_APIENTRY *glObjectUnpurgeableAPPLEFUNC)(GLenum objectType, GLuint name, GLenum option);
typedef void (GLLOADER_APIENTRY *glGetObjectParameterivAPPLEFUNC)(GLenum objectType, GLuint name, GLenum pname, GLint* params);

extern GLLOADER_API glObjectPurgeableAPPLEFUNC glObjectPurgeableAPPLE;
extern GLLOADER_API glObjectUnpurgeableAPPLEFUNC glObjectUnpurgeableAPPLE;
extern GLLOADER_API glGetObjectParameterivAPPLEFUNC glGetObjectParameterivAPPLE;

#endif

#ifdef GL_APPLE_texture_range

typedef void (GLLOADER_APIENTRY *glTextureRangeAPPLEFUNC)(GLenum target, GLsizei length, GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glGetTexParameterPointervAPPLEFUNC)(GLenum target, GLenum pname, GLvoid** params);

extern GLLOADER_API glTextureRangeAPPLEFUNC glTextureRangeAPPLE;
extern GLLOADER_API glGetTexParameterPointervAPPLEFUNC glGetTexParameterPointervAPPLE;

#endif

#ifdef GL_APPLE_vertex_array_object

typedef void (GLLOADER_APIENTRY *glBindVertexArrayAPPLEFUNC)(GLuint array);
typedef void (GLLOADER_APIENTRY *glDeleteVertexArraysAPPLEFUNC)(GLsizei n, const GLuint* arrays);
typedef void (GLLOADER_APIENTRY *glGenVertexArraysAPPLEFUNC)(GLsizei n, GLuint* arrays);
typedef GLboolean (GLLOADER_APIENTRY *glIsVertexArrayAPPLEFUNC)(GLuint array);

extern GLLOADER_API glBindVertexArrayAPPLEFUNC glBindVertexArrayAPPLE;
extern GLLOADER_API glDeleteVertexArraysAPPLEFUNC glDeleteVertexArraysAPPLE;
extern GLLOADER_API glGenVertexArraysAPPLEFUNC glGenVertexArraysAPPLE;
extern GLLOADER_API glIsVertexArrayAPPLEFUNC glIsVertexArrayAPPLE;

#endif

#ifdef GL_APPLE_vertex_array_range

typedef void (GLLOADER_APIENTRY *glVertexArrayRangeAPPLEFUNC)(GLsizei length, GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glFlushVertexArrayRangeAPPLEFUNC)(GLsizei length, GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glVertexArrayParameteriAPPLEFUNC)(GLenum pname, GLint param);

extern GLLOADER_API glVertexArrayRangeAPPLEFUNC glVertexArrayRangeAPPLE;
extern GLLOADER_API glFlushVertexArrayRangeAPPLEFUNC glFlushVertexArrayRangeAPPLE;
extern GLLOADER_API glVertexArrayParameteriAPPLEFUNC glVertexArrayParameteriAPPLE;

#endif

#ifdef GL_APPLE_vertex_program_evaluators

typedef void (GLLOADER_APIENTRY *glEnableVertexAttribAPPLEFUNC)(GLuint index, GLenum pname);
typedef void (GLLOADER_APIENTRY *glDisableVertexAttribAPPLEFUNC)(GLuint index, GLenum pname);
typedef GLboolean (GLLOADER_APIENTRY *glIsVertexAttribEnabledAPPLEFUNC)(GLuint index, GLenum pname);
typedef void (GLLOADER_APIENTRY *glMapVertexAttrib1dAPPLEFUNC)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
typedef void (GLLOADER_APIENTRY *glMapVertexAttrib1fAPPLEFUNC)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
typedef void (GLLOADER_APIENTRY *glMapVertexAttrib2dAPPLEFUNC)(GLuint index, GLuint size, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
typedef void (GLLOADER_APIENTRY *glMapVertexAttrib2fAPPLEFUNC)(GLuint index, GLuint size, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);

extern GLLOADER_API glEnableVertexAttribAPPLEFUNC glEnableVertexAttribAPPLE;
extern GLLOADER_API glDisableVertexAttribAPPLEFUNC glDisableVertexAttribAPPLE;
extern GLLOADER_API glIsVertexAttribEnabledAPPLEFUNC glIsVertexAttribEnabledAPPLE;
extern GLLOADER_API glMapVertexAttrib1dAPPLEFUNC glMapVertexAttrib1dAPPLE;
extern GLLOADER_API glMapVertexAttrib1fAPPLEFUNC glMapVertexAttrib1fAPPLE;
extern GLLOADER_API glMapVertexAttrib2dAPPLEFUNC glMapVertexAttrib2dAPPLE;
extern GLLOADER_API glMapVertexAttrib2fAPPLEFUNC glMapVertexAttrib2fAPPLE;

#endif

#ifdef GL_ARB_base_instance

typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedBaseInstanceFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedBaseInstanceFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedBaseVertexBaseInstanceFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);

extern GLLOADER_API glDrawArraysInstancedBaseInstanceFUNC glDrawArraysInstancedBaseInstance;
extern GLLOADER_API glDrawElementsInstancedBaseInstanceFUNC glDrawElementsInstancedBaseInstance;
extern GLLOADER_API glDrawElementsInstancedBaseVertexBaseInstanceFUNC glDrawElementsInstancedBaseVertexBaseInstance;

#endif

#ifdef GL_ARB_bindless_texture

typedef GLuint64 (GLLOADER_APIENTRY *glGetTextureHandleARBFUNC)(GLuint texture);
typedef GLuint64 (GLLOADER_APIENTRY *glGetTextureSamplerHandleARBFUNC)(GLuint texture, GLuint sampler);
typedef void (GLLOADER_APIENTRY *glMakeTextureHandleResidentARBFUNC)(GLuint64 handle);
typedef void (GLLOADER_APIENTRY *glMakeTextureHandleNonResidentARBFUNC)(GLuint64 handle);
typedef GLuint64 (GLLOADER_APIENTRY *glGetImageHandleARBFUNC)(GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum format);
typedef void (GLLOADER_APIENTRY *glMakeImageHandleResidentARBFUNC)(GLuint64 handle, GLenum access);
typedef void (GLLOADER_APIENTRY *glMakeImageHandleNonResidentARBFUNC)(GLuint64 handle);
typedef void (GLLOADER_APIENTRY *glUniformHandleui64ARBFUNC)(GLint location, GLuint64 value);
typedef void (GLLOADER_APIENTRY *glUniformHandleui64vARBFUNC)(GLint location, GLsizei count, const GLuint64* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformHandleui64ARBFUNC)(GLuint program, GLint location, GLuint64 value);
typedef void (GLLOADER_APIENTRY *glProgramUniformHandleui64vARBFUNC)(GLuint program, GLint location, GLsizei count, const GLuint64* values);
typedef GLboolean (GLLOADER_APIENTRY *glIsTextureHandleResidentARBFUNC)(GLuint64 handle);
typedef GLboolean (GLLOADER_APIENTRY *glIsImageHandleResidentARBFUNC)(GLuint64 handle);
typedef void (GLLOADER_APIENTRY *glVertexAttribL1ui64ARBFUNC)(GLuint index, GLuint64 x);
typedef void (GLLOADER_APIENTRY *glVertexAttribL1ui64vARBFUNC)(GLuint index, const GLuint64* v);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribLui64vARBFUNC)(GLuint index, GLenum pname, GLuint64* params);

extern GLLOADER_API glGetTextureHandleARBFUNC glGetTextureHandleARB;
extern GLLOADER_API glGetTextureSamplerHandleARBFUNC glGetTextureSamplerHandleARB;
extern GLLOADER_API glMakeTextureHandleResidentARBFUNC glMakeTextureHandleResidentARB;
extern GLLOADER_API glMakeTextureHandleNonResidentARBFUNC glMakeTextureHandleNonResidentARB;
extern GLLOADER_API glGetImageHandleARBFUNC glGetImageHandleARB;
extern GLLOADER_API glMakeImageHandleResidentARBFUNC glMakeImageHandleResidentARB;
extern GLLOADER_API glMakeImageHandleNonResidentARBFUNC glMakeImageHandleNonResidentARB;
extern GLLOADER_API glUniformHandleui64ARBFUNC glUniformHandleui64ARB;
extern GLLOADER_API glUniformHandleui64vARBFUNC glUniformHandleui64vARB;
extern GLLOADER_API glProgramUniformHandleui64ARBFUNC glProgramUniformHandleui64ARB;
extern GLLOADER_API glProgramUniformHandleui64vARBFUNC glProgramUniformHandleui64vARB;
extern GLLOADER_API glIsTextureHandleResidentARBFUNC glIsTextureHandleResidentARB;
extern GLLOADER_API glIsImageHandleResidentARBFUNC glIsImageHandleResidentARB;
extern GLLOADER_API glVertexAttribL1ui64ARBFUNC glVertexAttribL1ui64ARB;
extern GLLOADER_API glVertexAttribL1ui64vARBFUNC glVertexAttribL1ui64vARB;
extern GLLOADER_API glGetVertexAttribLui64vARBFUNC glGetVertexAttribLui64vARB;

#endif

#ifdef GL_ARB_blend_func_extended

typedef void (GLLOADER_APIENTRY *glBindFragDataLocationIndexedFUNC)(GLuint program, GLuint colorNumber, GLuint index, const GLchar* name);
typedef GLint (GLLOADER_APIENTRY *glGetFragDataIndexFUNC)(GLuint program, const GLchar* name);

extern GLLOADER_API glBindFragDataLocationIndexedFUNC glBindFragDataLocationIndexed;
extern GLLOADER_API glGetFragDataIndexFUNC glGetFragDataIndex;

#endif

#ifdef GL_ARB_buffer_storage

typedef void (GLLOADER_APIENTRY *glBufferStorageFUNC)(GLenum target, GLsizeiptr size, void const * data, GLbitfield flags);
typedef void (GLLOADER_APIENTRY *glNamedBufferStorageEXTFUNC)(GLuint buffer, GLsizeiptr size, void const * data, GLbitfield flags);

extern GLLOADER_API glBufferStorageFUNC glBufferStorage;
extern GLLOADER_API glNamedBufferStorageEXTFUNC glNamedBufferStorageEXT;

#endif

#ifdef GL_ARB_clear_buffer_object

typedef void (GLLOADER_APIENTRY *glClearBufferDataFUNC)(GLenum target, GLenum internalformat, GLenum format, GLenum type, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glClearBufferSubDataFUNC)(GLenum target, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glClearNamedBufferDataEXTFUNC)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glClearNamedBufferSubDataEXTFUNC)(GLuint buffer, GLenum internalformat, GLsizeiptr offset, GLsizeiptr size, GLenum format, GLenum type, const GLvoid* data);

extern GLLOADER_API glClearBufferDataFUNC glClearBufferData;
extern GLLOADER_API glClearBufferSubDataFUNC glClearBufferSubData;
extern GLLOADER_API glClearNamedBufferDataEXTFUNC glClearNamedBufferDataEXT;
extern GLLOADER_API glClearNamedBufferSubDataEXTFUNC glClearNamedBufferSubDataEXT;

#endif

#ifdef GL_ARB_clear_texture

typedef void (GLLOADER_APIENTRY *glClearTexImageFUNC)(GLuint texture, GLint level, GLenum format, GLenum type, void const * data);
typedef void (GLLOADER_APIENTRY *glClearTexSubImageFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, void const * data);

extern GLLOADER_API glClearTexImageFUNC glClearTexImage;
extern GLLOADER_API glClearTexSubImageFUNC glClearTexSubImage;

#endif

#ifdef GL_ARB_clip_control

typedef void (GLLOADER_APIENTRY *glClipControlFUNC)(GLenum origin, GLenum depth);

extern GLLOADER_API glClipControlFUNC glClipControl;

#endif

#ifdef GL_ARB_cl_event

#ifdef __OPENCL_CL_H

typedef GLsync (GLLOADER_APIENTRY *glCreateSyncFromCLeventARBFUNC)(cl_context context, cl_event event, GLbitfield flags);

extern GLLOADER_API glCreateSyncFromCLeventARBFUNC glCreateSyncFromCLeventARB;

#endif

#endif

#ifdef GL_ARB_color_buffer_float

typedef void (GLLOADER_APIENTRY *glClampColorARBFUNC)(GLenum target, GLenum clamp);

extern GLLOADER_API glClampColorARBFUNC glClampColorARB;

#endif

#ifdef GL_ARB_compute_shader

typedef void (GLLOADER_APIENTRY *glDispatchComputeFUNC)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z);
typedef void (GLLOADER_APIENTRY *glDispatchComputeIndirectFUNC)(GLintptr indirect);

extern GLLOADER_API glDispatchComputeFUNC glDispatchCompute;
extern GLLOADER_API glDispatchComputeIndirectFUNC glDispatchComputeIndirect;

#endif

#ifdef GL_ARB_compute_variable_group_size

typedef void (GLLOADER_APIENTRY *glDispatchComputeGroupSizeARBFUNC)(GLuint num_groups_x, GLuint num_groups_y, GLuint num_groups_z, GLuint group_size_x, GLuint group_size_y, GLuint group_size_z);

extern GLLOADER_API glDispatchComputeGroupSizeARBFUNC glDispatchComputeGroupSizeARB;

#endif

#ifdef GL_ARB_copy_buffer

typedef void (GLLOADER_APIENTRY *glCopyBufferSubDataFUNC)(GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

extern GLLOADER_API glCopyBufferSubDataFUNC glCopyBufferSubData;

#endif

#ifdef GL_ARB_copy_image

typedef void (GLLOADER_APIENTRY *glCopyImageSubDataFUNC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);

extern GLLOADER_API glCopyImageSubDataFUNC glCopyImageSubData;

#endif

#ifdef GL_ARB_debug_output

typedef void (GLLOADER_APIENTRY *glDebugMessageControlARBFUNC)(GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint* ids, GLboolean enabled);
typedef void (GLLOADER_APIENTRY *glDebugMessageInsertARBFUNC)(GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar* buf);
typedef void (GLLOADER_APIENTRY *glDebugMessageCallbackARBFUNC)(GLDEBUGPROCARB callback, GLvoid* userParam);
typedef GLuint (GLLOADER_APIENTRY *glGetDebugMessageLogARBFUNC)(GLuint count, GLsizei bufsize, GLenum* sources, GLenum* types, GLuint* ids, GLenum* severities, GLsizei* lengths, GLchar* messageLog);

extern GLLOADER_API glDebugMessageControlARBFUNC glDebugMessageControlARB;
extern GLLOADER_API glDebugMessageInsertARBFUNC glDebugMessageInsertARB;
extern GLLOADER_API glDebugMessageCallbackARBFUNC glDebugMessageCallbackARB;
extern GLLOADER_API glGetDebugMessageLogARBFUNC glGetDebugMessageLogARB;

#endif

#ifdef GL_ARB_direct_state_access

typedef void (GLLOADER_APIENTRY *glCreateTransformFeedbacksFUNC)(GLsizei n, GLuint* ids);
typedef void (GLLOADER_APIENTRY *glTransformFeedbackBufferBaseFUNC)(GLuint xfb, GLuint index, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTransformFeedbackBufferRangeFUNC)(GLuint xfb, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glGetTransformFeedbackivFUNC)(GLuint xfb, GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetTransformFeedbacki_vFUNC)(GLuint xfb, GLenum pname, GLuint index, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetTransformFeedbacki64_vFUNC)(GLuint xfb, GLenum pname, GLuint index, GLint64* param);
typedef void (GLLOADER_APIENTRY *glCreateBuffersFUNC)(GLsizei n, GLuint* buffers);
typedef void (GLLOADER_APIENTRY *glNamedBufferStorageFUNC)(GLuint buffer, GLsizeiptr size, const GLvoid* data, GLbitfield flags);
typedef void (GLLOADER_APIENTRY *glNamedBufferDataFUNC)(GLuint buffer, GLsizeiptr size, const GLvoid* data, GLenum usage);
typedef void (GLLOADER_APIENTRY *glNamedBufferSubDataFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCopyNamedBufferSubDataFUNC)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glClearNamedBufferDataFUNC)(GLuint buffer, GLenum internalformat, GLenum format, GLenum type, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glClearNamedBufferSubDataFUNC)(GLuint buffer, GLenum internalformat, GLintptr offset, GLsizeiptr size, GLenum format, GLenum type, const GLvoid* data);
typedef GLvoid* (GLLOADER_APIENTRY *glMapNamedBufferFUNC)(GLuint buffer, GLenum access);
typedef GLvoid* (GLLOADER_APIENTRY *glMapNamedBufferRangeFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef GLboolean (GLLOADER_APIENTRY *glUnmapNamedBufferFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glFlushMappedNamedBufferRangeFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferParameterivFUNC)(GLuint buffer, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferParameteri64vFUNC)(GLuint buffer, GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferPointervFUNC)(GLuint buffer, GLenum pname, GLvoid** params);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferSubDataFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCreateFramebuffersFUNC)(GLsizei n, GLuint* framebuffers);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferRenderbufferFUNC)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferParameteriFUNC)(GLuint framebuffer, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTextureFUNC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTextureLayerFUNC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferDrawBufferFUNC)(GLuint framebuffer, GLenum mode);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferDrawBuffersFUNC)(GLuint framebuffer, GLsizei n, const GLenum* bufs);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferReadBufferFUNC)(GLuint framebuffer, GLenum mode);
typedef void (GLLOADER_APIENTRY *glInvalidateNamedFramebufferDataFUNC)(GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments);
typedef void (GLLOADER_APIENTRY *glInvalidateNamedFramebufferSubDataFUNC)(GLuint framebuffer, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glClearNamedFramebufferivFUNC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLint* value);
typedef void (GLLOADER_APIENTRY *glClearNamedFramebufferuivFUNC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glClearNamedFramebufferfvFUNC)(GLuint framebuffer, GLenum buffer, GLint drawbuffer, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glClearNamedFramebufferfiFUNC)(GLuint framebuffer, GLenum buffer, GLfloat depth, GLint stencil);
typedef void (GLLOADER_APIENTRY *glBlitNamedFramebufferFUNC)(GLuint readFramebuffer, GLuint drawFramebuffer, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef GLenum (GLLOADER_APIENTRY *glCheckNamedFramebufferStatusFUNC)(GLuint framebuffer, GLenum target);
typedef void (GLLOADER_APIENTRY *glGetNamedFramebufferParameterivFUNC)(GLuint framebuffer, GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetNamedFramebufferAttachmentParameterivFUNC)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glCreateRenderbuffersFUNC)(GLsizei n, GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glNamedRenderbufferStorageFUNC)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glNamedRenderbufferStorageMultisampleFUNC)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetNamedRenderbufferParameterivFUNC)(GLuint renderbuffer, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glCreateTexturesFUNC)(GLenum target, GLsizei n, GLuint* textures);
typedef void (GLLOADER_APIENTRY *glTextureBufferFUNC)(GLuint texture, GLenum internalformat, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTextureBufferRangeFUNC)(GLuint texture, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glTextureStorage1DFUNC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLLOADER_APIENTRY *glTextureStorage2DFUNC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTextureStorage3DFUNC)(GLuint texture, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLLOADER_APIENTRY *glTextureStorage2DMultisampleFUNC)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glTextureStorage3DMultisampleFUNC)(GLuint texture, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glTextureSubImage1DEXTFUNC)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTextureSubImage2DEXTFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTextureSubImage3DFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCompressedTextureSubImage1DFUNC)(GLuint texture, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTextureSubImage2DFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTextureSubImage3DFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCopyTextureSubImage1DFUNC)(GLuint texture, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glCopyTextureSubImage2DFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glCopyTextureSubImage3DFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTextureParameterfFUNC)(GLuint texture, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTextureParameterfvFUNC)(GLuint texture, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTextureParameteriFUNC)(GLuint texture, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTextureParameterIivEXTFUNC)(GLuint texture, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glTextureParameterIuivEXTFUNC)(GLuint texture, GLenum pname, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glTextureParameterivFUNC)(GLuint texture, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGenerateTextureMipmapFUNC)(GLuint texture);
typedef void (GLLOADER_APIENTRY *glBindTextureUnitFUNC)(GLuint unit, GLuint texture);
typedef void (GLLOADER_APIENTRY *glGetTextureImageFUNC)(GLuint texture, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetCompressedTextureImageFUNC)(GLuint texture, GLenum level, GLsizei bufSize, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetTextureLevelParameterfvFUNC)(GLuint texture, GLint level, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTextureLevelParameterivFUNC)(GLuint texture, GLint level, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTextureParameterfvFUNC)(GLuint texture, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTextureParameterIivFUNC)(GLuint texture, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTextureParameterIuivFUNC)(GLuint texture, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetTextureParameterivEXTFUNC)(GLuint texture, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glCreateVertexArraysFUNC)(GLsizei n, GLuint* arrays);
typedef void (GLLOADER_APIENTRY *glDisableVertexArrayAttribFUNC)(GLuint vaobj, GLuint index);
typedef void (GLLOADER_APIENTRY *glEnableVertexArrayAttribFUNC)(GLuint vaobj, GLuint index);
typedef void (GLLOADER_APIENTRY *glVertexArrayElementBufferFUNC)(GLuint vaobj, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexBufferFUNC)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexBuffersFUNC)(GLuint vaobj, GLuint first, GLsizei count, const GLuint* buffers, const GLintptr* offsets, const GLsizei* strides);
typedef void (GLLOADER_APIENTRY *glVertexArrayAttribFormatFUNC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexArrayAttribIFormatFUNC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexArrayAttribLFormatFUNC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexArrayAttribBindingFUNC)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (GLLOADER_APIENTRY *glVertexArrayBindingDivisorFUNC)(GLuint vaobj, GLuint bindingindex, GLuint divisor);
typedef void (GLLOADER_APIENTRY *glGetVertexArrayivFUNC)(GLuint vaobj, GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetVertexArrayIndexedivFUNC)(GLuint vaobj, GLuint index, GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetVertexArrayIndexed64ivFUNC)(GLuint vaobj, GLuint index, GLenum pname, GLint64* param);
typedef void (GLLOADER_APIENTRY *glCreateSamplersFUNC)(GLsizei n, GLuint* samplers);
typedef void (GLLOADER_APIENTRY *glCreateProgramPipelinesFUNC)(GLsizei n, GLuint* pipelines);
typedef void (GLLOADER_APIENTRY *glCreateQueriesFUNC)(GLenum target, GLsizei n, GLuint* ids);

extern GLLOADER_API glCreateTransformFeedbacksFUNC glCreateTransformFeedbacks;
extern GLLOADER_API glTransformFeedbackBufferBaseFUNC glTransformFeedbackBufferBase;
extern GLLOADER_API glTransformFeedbackBufferRangeFUNC glTransformFeedbackBufferRange;
extern GLLOADER_API glGetTransformFeedbackivFUNC glGetTransformFeedbackiv;
extern GLLOADER_API glGetTransformFeedbacki_vFUNC glGetTransformFeedbacki_v;
extern GLLOADER_API glGetTransformFeedbacki64_vFUNC glGetTransformFeedbacki64_v;
extern GLLOADER_API glCreateBuffersFUNC glCreateBuffers;
extern GLLOADER_API glNamedBufferStorageFUNC glNamedBufferStorage;
extern GLLOADER_API glNamedBufferDataFUNC glNamedBufferData;
extern GLLOADER_API glNamedBufferSubDataFUNC glNamedBufferSubData;
extern GLLOADER_API glCopyNamedBufferSubDataFUNC glCopyNamedBufferSubData;
extern GLLOADER_API glClearNamedBufferDataFUNC glClearNamedBufferData;
extern GLLOADER_API glClearNamedBufferSubDataFUNC glClearNamedBufferSubData;
extern GLLOADER_API glMapNamedBufferFUNC glMapNamedBuffer;
extern GLLOADER_API glMapNamedBufferRangeFUNC glMapNamedBufferRange;
extern GLLOADER_API glUnmapNamedBufferFUNC glUnmapNamedBuffer;
extern GLLOADER_API glFlushMappedNamedBufferRangeFUNC glFlushMappedNamedBufferRange;
extern GLLOADER_API glGetNamedBufferParameterivFUNC glGetNamedBufferParameteriv;
extern GLLOADER_API glGetNamedBufferParameteri64vFUNC glGetNamedBufferParameteri64v;
extern GLLOADER_API glGetNamedBufferPointervFUNC glGetNamedBufferPointerv;
extern GLLOADER_API glGetNamedBufferSubDataFUNC glGetNamedBufferSubData;
extern GLLOADER_API glCreateFramebuffersFUNC glCreateFramebuffers;
extern GLLOADER_API glNamedFramebufferRenderbufferFUNC glNamedFramebufferRenderbuffer;
extern GLLOADER_API glNamedFramebufferParameteriFUNC glNamedFramebufferParameteri;
extern GLLOADER_API glNamedFramebufferTextureFUNC glNamedFramebufferTexture;
extern GLLOADER_API glNamedFramebufferTextureLayerFUNC glNamedFramebufferTextureLayer;
extern GLLOADER_API glNamedFramebufferDrawBufferFUNC glNamedFramebufferDrawBuffer;
extern GLLOADER_API glNamedFramebufferDrawBuffersFUNC glNamedFramebufferDrawBuffers;
extern GLLOADER_API glNamedFramebufferReadBufferFUNC glNamedFramebufferReadBuffer;
extern GLLOADER_API glInvalidateNamedFramebufferDataFUNC glInvalidateNamedFramebufferData;
extern GLLOADER_API glInvalidateNamedFramebufferSubDataFUNC glInvalidateNamedFramebufferSubData;
extern GLLOADER_API glClearNamedFramebufferivFUNC glClearNamedFramebufferiv;
extern GLLOADER_API glClearNamedFramebufferuivFUNC glClearNamedFramebufferuiv;
extern GLLOADER_API glClearNamedFramebufferfvFUNC glClearNamedFramebufferfv;
extern GLLOADER_API glClearNamedFramebufferfiFUNC glClearNamedFramebufferfi;
extern GLLOADER_API glBlitNamedFramebufferFUNC glBlitNamedFramebuffer;
extern GLLOADER_API glCheckNamedFramebufferStatusFUNC glCheckNamedFramebufferStatus;
extern GLLOADER_API glGetNamedFramebufferParameterivFUNC glGetNamedFramebufferParameteriv;
extern GLLOADER_API glGetNamedFramebufferAttachmentParameterivFUNC glGetNamedFramebufferAttachmentParameteriv;
extern GLLOADER_API glCreateRenderbuffersFUNC glCreateRenderbuffers;
extern GLLOADER_API glNamedRenderbufferStorageFUNC glNamedRenderbufferStorage;
extern GLLOADER_API glNamedRenderbufferStorageMultisampleFUNC glNamedRenderbufferStorageMultisample;
extern GLLOADER_API glGetNamedRenderbufferParameterivFUNC glGetNamedRenderbufferParameteriv;
extern GLLOADER_API glCreateTexturesFUNC glCreateTextures;
extern GLLOADER_API glTextureBufferFUNC glTextureBuffer;
extern GLLOADER_API glTextureBufferRangeFUNC glTextureBufferRange;
extern GLLOADER_API glTextureStorage1DFUNC glTextureStorage1D;
extern GLLOADER_API glTextureStorage2DFUNC glTextureStorage2D;
extern GLLOADER_API glTextureStorage3DFUNC glTextureStorage3D;
extern GLLOADER_API glTextureStorage2DMultisampleFUNC glTextureStorage2DMultisample;
extern GLLOADER_API glTextureStorage3DMultisampleFUNC glTextureStorage3DMultisample;
extern GLLOADER_API glTextureSubImage1DEXTFUNC glTextureSubImage1DEXT;
extern GLLOADER_API glTextureSubImage2DEXTFUNC glTextureSubImage2DEXT;
extern GLLOADER_API glTextureSubImage3DFUNC glTextureSubImage3D;
extern GLLOADER_API glCompressedTextureSubImage1DFUNC glCompressedTextureSubImage1D;
extern GLLOADER_API glCompressedTextureSubImage2DFUNC glCompressedTextureSubImage2D;
extern GLLOADER_API glCompressedTextureSubImage3DFUNC glCompressedTextureSubImage3D;
extern GLLOADER_API glCopyTextureSubImage1DFUNC glCopyTextureSubImage1D;
extern GLLOADER_API glCopyTextureSubImage2DFUNC glCopyTextureSubImage2D;
extern GLLOADER_API glCopyTextureSubImage3DFUNC glCopyTextureSubImage3D;
extern GLLOADER_API glTextureParameterfFUNC glTextureParameterf;
extern GLLOADER_API glTextureParameterfvFUNC glTextureParameterfv;
extern GLLOADER_API glTextureParameteriFUNC glTextureParameteri;
extern GLLOADER_API glTextureParameterIivEXTFUNC glTextureParameterIivEXT;
extern GLLOADER_API glTextureParameterIuivEXTFUNC glTextureParameterIuivEXT;
extern GLLOADER_API glTextureParameterivFUNC glTextureParameteriv;
extern GLLOADER_API glGenerateTextureMipmapFUNC glGenerateTextureMipmap;
extern GLLOADER_API glBindTextureUnitFUNC glBindTextureUnit;
extern GLLOADER_API glGetTextureImageFUNC glGetTextureImage;
extern GLLOADER_API glGetCompressedTextureImageFUNC glGetCompressedTextureImage;
extern GLLOADER_API glGetTextureLevelParameterfvFUNC glGetTextureLevelParameterfv;
extern GLLOADER_API glGetTextureLevelParameterivFUNC glGetTextureLevelParameteriv;
extern GLLOADER_API glGetTextureParameterfvFUNC glGetTextureParameterfv;
extern GLLOADER_API glGetTextureParameterIivFUNC glGetTextureParameterIiv;
extern GLLOADER_API glGetTextureParameterIuivFUNC glGetTextureParameterIuiv;
extern GLLOADER_API glGetTextureParameterivEXTFUNC glGetTextureParameterivEXT;
extern GLLOADER_API glCreateVertexArraysFUNC glCreateVertexArrays;
extern GLLOADER_API glDisableVertexArrayAttribFUNC glDisableVertexArrayAttrib;
extern GLLOADER_API glEnableVertexArrayAttribFUNC glEnableVertexArrayAttrib;
extern GLLOADER_API glVertexArrayElementBufferFUNC glVertexArrayElementBuffer;
extern GLLOADER_API glVertexArrayVertexBufferFUNC glVertexArrayVertexBuffer;
extern GLLOADER_API glVertexArrayVertexBuffersFUNC glVertexArrayVertexBuffers;
extern GLLOADER_API glVertexArrayAttribFormatFUNC glVertexArrayAttribFormat;
extern GLLOADER_API glVertexArrayAttribIFormatFUNC glVertexArrayAttribIFormat;
extern GLLOADER_API glVertexArrayAttribLFormatFUNC glVertexArrayAttribLFormat;
extern GLLOADER_API glVertexArrayAttribBindingFUNC glVertexArrayAttribBinding;
extern GLLOADER_API glVertexArrayBindingDivisorFUNC glVertexArrayBindingDivisor;
extern GLLOADER_API glGetVertexArrayivFUNC glGetVertexArrayiv;
extern GLLOADER_API glGetVertexArrayIndexedivFUNC glGetVertexArrayIndexediv;
extern GLLOADER_API glGetVertexArrayIndexed64ivFUNC glGetVertexArrayIndexed64iv;
extern GLLOADER_API glCreateSamplersFUNC glCreateSamplers;
extern GLLOADER_API glCreateProgramPipelinesFUNC glCreateProgramPipelines;
extern GLLOADER_API glCreateQueriesFUNC glCreateQueries;

#endif

#ifdef GL_ARB_draw_buffers

typedef void (GLLOADER_APIENTRY *glDrawBuffersARBFUNC)(GLsizei n, const GLenum* bufs);

extern GLLOADER_API glDrawBuffersARBFUNC glDrawBuffersARB;

#endif

#ifdef GL_ARB_draw_buffers_blend

typedef void (GLLOADER_APIENTRY *glBlendEquationiARBFUNC)(GLuint buf, GLenum mode);
typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateiARBFUNC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GLLOADER_APIENTRY *glBlendFunciARBFUNC)(GLuint buf, GLenum src, GLenum dst);
typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateiARBFUNC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

extern GLLOADER_API glBlendEquationiARBFUNC glBlendEquationiARB;
extern GLLOADER_API glBlendEquationSeparateiARBFUNC glBlendEquationSeparateiARB;
extern GLLOADER_API glBlendFunciARBFUNC glBlendFunciARB;
extern GLLOADER_API glBlendFuncSeparateiARBFUNC glBlendFuncSeparateiARB;

#endif

#ifdef GL_ARB_draw_elements_base_vertex

typedef void (GLLOADER_APIENTRY *glDrawElementsBaseVertexFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glDrawRangeElementsBaseVertexFUNC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedBaseVertexFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount, GLint basevertex);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsBaseVertexFUNC)(GLenum mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei drawcount, const GLint* basevertex);

extern GLLOADER_API glDrawElementsBaseVertexFUNC glDrawElementsBaseVertex;
extern GLLOADER_API glDrawRangeElementsBaseVertexFUNC glDrawRangeElementsBaseVertex;
extern GLLOADER_API glDrawElementsInstancedBaseVertexFUNC glDrawElementsInstancedBaseVertex;
extern GLLOADER_API glMultiDrawElementsBaseVertexFUNC glMultiDrawElementsBaseVertex;

#endif

#ifdef GL_ARB_draw_indirect

typedef void (GLLOADER_APIENTRY *glDrawArraysIndirectFUNC)(GLenum mode, const GLvoid* indirect);
typedef void (GLLOADER_APIENTRY *glDrawElementsIndirectFUNC)(GLenum mode, GLenum type, const GLvoid* indirect);

extern GLLOADER_API glDrawArraysIndirectFUNC glDrawArraysIndirect;
extern GLLOADER_API glDrawElementsIndirectFUNC glDrawElementsIndirect;

#endif

#ifdef GL_ARB_draw_instanced

typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedARBFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedARBFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount);

extern GLLOADER_API glDrawArraysInstancedARBFUNC glDrawArraysInstancedARB;
extern GLLOADER_API glDrawElementsInstancedARBFUNC glDrawElementsInstancedARB;

#endif

#ifdef GL_ARB_ES2_compatibility

typedef void (GLLOADER_APIENTRY *glReleaseShaderCompilerFUNC)();
typedef void (GLLOADER_APIENTRY *glShaderBinaryFUNC)(GLsizei count, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length);
typedef void (GLLOADER_APIENTRY *glGetShaderPrecisionFormatFUNC)(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision);
typedef void (GLLOADER_APIENTRY *glDepthRangefFUNC)(GLfloat n, GLfloat f);
typedef void (GLLOADER_APIENTRY *glClearDepthfFUNC)(GLfloat d);

extern GLLOADER_API glReleaseShaderCompilerFUNC glReleaseShaderCompiler;
extern GLLOADER_API glShaderBinaryFUNC glShaderBinary;
extern GLLOADER_API glGetShaderPrecisionFormatFUNC glGetShaderPrecisionFormat;
extern GLLOADER_API glDepthRangefFUNC glDepthRangef;
extern GLLOADER_API glClearDepthfFUNC glClearDepthf;

#endif

#ifdef GL_ARB_ES3_1_compatibility

typedef void (GLLOADER_APIENTRY *glMemoryBarrierByRegionFUNC)(GLbitfield barriers);

extern GLLOADER_API glMemoryBarrierByRegionFUNC glMemoryBarrierByRegion;

#endif

#ifdef GL_ARB_framebuffer_no_attachments

typedef void (GLLOADER_APIENTRY *glFramebufferParameteriFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glGetFramebufferParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferParameteriEXTFUNC)(GLuint framebuffer, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glGetNamedFramebufferParameterivEXTFUNC)(GLuint framebuffer, GLenum pname, GLint* params);

extern GLLOADER_API glFramebufferParameteriFUNC glFramebufferParameteri;
extern GLLOADER_API glGetFramebufferParameterivFUNC glGetFramebufferParameteriv;
extern GLLOADER_API glNamedFramebufferParameteriEXTFUNC glNamedFramebufferParameteriEXT;
extern GLLOADER_API glGetNamedFramebufferParameterivEXTFUNC glGetNamedFramebufferParameterivEXT;

#endif

#ifdef GL_ARB_framebuffer_object

typedef GLboolean (GLLOADER_APIENTRY *glIsRenderbufferFUNC)(GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glBindRenderbufferFUNC)(GLenum target, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glDeleteRenderbuffersFUNC)(GLsizei n, const GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glGenRenderbuffersFUNC)(GLsizei n, GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glRenderbufferStorageFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetRenderbufferParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean (GLLOADER_APIENTRY *glIsFramebufferFUNC)(GLuint framebuffer);
typedef void (GLLOADER_APIENTRY *glBindFramebufferFUNC)(GLenum target, GLuint framebuffer);
typedef void (GLLOADER_APIENTRY *glDeleteFramebuffersFUNC)(GLsizei n, const GLuint* framebuffers);
typedef void (GLLOADER_APIENTRY *glGenFramebuffersFUNC)(GLsizei n, GLuint* framebuffers);
typedef GLenum (GLLOADER_APIENTRY *glCheckFramebufferStatusFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture1DFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture2DFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture3DFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GLLOADER_APIENTRY *glFramebufferRenderbufferFUNC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glGetFramebufferAttachmentParameterivFUNC)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGenerateMipmapFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glBlitFramebufferFUNC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureLayerFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);

extern GLLOADER_API glIsRenderbufferFUNC glIsRenderbuffer;
extern GLLOADER_API glBindRenderbufferFUNC glBindRenderbuffer;
extern GLLOADER_API glDeleteRenderbuffersFUNC glDeleteRenderbuffers;
extern GLLOADER_API glGenRenderbuffersFUNC glGenRenderbuffers;
extern GLLOADER_API glRenderbufferStorageFUNC glRenderbufferStorage;
extern GLLOADER_API glGetRenderbufferParameterivFUNC glGetRenderbufferParameteriv;
extern GLLOADER_API glIsFramebufferFUNC glIsFramebuffer;
extern GLLOADER_API glBindFramebufferFUNC glBindFramebuffer;
extern GLLOADER_API glDeleteFramebuffersFUNC glDeleteFramebuffers;
extern GLLOADER_API glGenFramebuffersFUNC glGenFramebuffers;
extern GLLOADER_API glCheckFramebufferStatusFUNC glCheckFramebufferStatus;
extern GLLOADER_API glFramebufferTexture1DFUNC glFramebufferTexture1D;
extern GLLOADER_API glFramebufferTexture2DFUNC glFramebufferTexture2D;
extern GLLOADER_API glFramebufferTexture3DFUNC glFramebufferTexture3D;
extern GLLOADER_API glFramebufferRenderbufferFUNC glFramebufferRenderbuffer;
extern GLLOADER_API glGetFramebufferAttachmentParameterivFUNC glGetFramebufferAttachmentParameteriv;
extern GLLOADER_API glGenerateMipmapFUNC glGenerateMipmap;
extern GLLOADER_API glBlitFramebufferFUNC glBlitFramebuffer;
extern GLLOADER_API glRenderbufferStorageMultisampleFUNC glRenderbufferStorageMultisample;
extern GLLOADER_API glFramebufferTextureLayerFUNC glFramebufferTextureLayer;

#endif

#ifdef GL_ARB_geometry_shader4

typedef void (GLLOADER_APIENTRY *glProgramParameteriARBFUNC)(GLuint program, GLenum pname, GLint value);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureARBFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureLayerARBFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureFaceARBFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);

extern GLLOADER_API glProgramParameteriARBFUNC glProgramParameteriARB;
extern GLLOADER_API glFramebufferTextureARBFUNC glFramebufferTextureARB;
extern GLLOADER_API glFramebufferTextureLayerARBFUNC glFramebufferTextureLayerARB;
extern GLLOADER_API glFramebufferTextureFaceARBFUNC glFramebufferTextureFaceARB;

#endif

#ifdef GL_ARB_get_program_binary

typedef void (GLLOADER_APIENTRY *glGetProgramBinaryFUNC)(GLuint program, GLsizei bufSize, GLsizei* length, GLenum* binaryFormat, GLvoid* binary);
typedef void (GLLOADER_APIENTRY *glProgramBinaryFUNC)(GLuint program, GLenum binaryFormat, const GLvoid* binary, GLsizei length);
typedef void (GLLOADER_APIENTRY *glProgramParameteriFUNC)(GLuint program, GLenum pname, GLint value);

extern GLLOADER_API glGetProgramBinaryFUNC glGetProgramBinary;
extern GLLOADER_API glProgramBinaryFUNC glProgramBinary;
extern GLLOADER_API glProgramParameteriFUNC glProgramParameteri;

#endif

#ifdef GL_ARB_get_texture_sub_image

typedef void (GLLOADER_APIENTRY *glGetTextureSubImageFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, GLsizei bufSize, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetCompressedTextureSubImageFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei bufSize, GLvoid* pixels);

extern GLLOADER_API glGetTextureSubImageFUNC glGetTextureSubImage;
extern GLLOADER_API glGetCompressedTextureSubImageFUNC glGetCompressedTextureSubImage;

#endif

#ifdef GL_ARB_gpu_shader_fp64

typedef void (GLLOADER_APIENTRY *glUniform1dFUNC)(GLint location, GLdouble x);
typedef void (GLLOADER_APIENTRY *glUniform2dFUNC)(GLint location, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glUniform3dFUNC)(GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glUniform4dFUNC)(GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glUniform1dvFUNC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniform2dvFUNC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniform3dvFUNC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniform4dvFUNC)(GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2x3dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2x4dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x2dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x4dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x2dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x3dvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glGetUniformdvFUNC)(GLuint program, GLint location, GLdouble* params);

extern GLLOADER_API glUniform1dFUNC glUniform1d;
extern GLLOADER_API glUniform2dFUNC glUniform2d;
extern GLLOADER_API glUniform3dFUNC glUniform3d;
extern GLLOADER_API glUniform4dFUNC glUniform4d;
extern GLLOADER_API glUniform1dvFUNC glUniform1dv;
extern GLLOADER_API glUniform2dvFUNC glUniform2dv;
extern GLLOADER_API glUniform3dvFUNC glUniform3dv;
extern GLLOADER_API glUniform4dvFUNC glUniform4dv;
extern GLLOADER_API glUniformMatrix2dvFUNC glUniformMatrix2dv;
extern GLLOADER_API glUniformMatrix3dvFUNC glUniformMatrix3dv;
extern GLLOADER_API glUniformMatrix4dvFUNC glUniformMatrix4dv;
extern GLLOADER_API glUniformMatrix2x3dvFUNC glUniformMatrix2x3dv;
extern GLLOADER_API glUniformMatrix2x4dvFUNC glUniformMatrix2x4dv;
extern GLLOADER_API glUniformMatrix3x2dvFUNC glUniformMatrix3x2dv;
extern GLLOADER_API glUniformMatrix3x4dvFUNC glUniformMatrix3x4dv;
extern GLLOADER_API glUniformMatrix4x2dvFUNC glUniformMatrix4x2dv;
extern GLLOADER_API glUniformMatrix4x3dvFUNC glUniformMatrix4x3dv;
extern GLLOADER_API glGetUniformdvFUNC glGetUniformdv;

#endif

#ifdef GL_ARB_indirect_parameters

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysIndirectCountARBFUNC)(GLenum mode, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsIndirectCountARBFUNC)(GLenum mode, GLenum type, const void* indirect, GLintptr drawcount, GLsizei maxdrawcount, GLsizei stride);

extern GLLOADER_API glMultiDrawArraysIndirectCountARBFUNC glMultiDrawArraysIndirectCountARB;
extern GLLOADER_API glMultiDrawElementsIndirectCountARBFUNC glMultiDrawElementsIndirectCountARB;

#endif

#ifdef GL_ARB_instanced_arrays

typedef void (GLLOADER_APIENTRY *glVertexAttribDivisorARBFUNC)(GLuint index, GLuint divisor);

extern GLLOADER_API glVertexAttribDivisorARBFUNC glVertexAttribDivisorARB;

#endif

#ifdef GL_ARB_internalformat_query

typedef void (GLLOADER_APIENTRY *glGetInternalformativFUNC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint* params);

extern GLLOADER_API glGetInternalformativFUNC glGetInternalformativ;

#endif

#ifdef GL_ARB_internalformat_query2

typedef void (GLLOADER_APIENTRY *glGetInternalformati64vFUNC)(GLenum target, GLenum internalformat, GLenum pname, GLsizei bufSize, GLint64* params);

extern GLLOADER_API glGetInternalformati64vFUNC glGetInternalformati64v;

#endif

#ifdef GL_ARB_invalidate_subdata

typedef void (GLLOADER_APIENTRY *glInvalidateTexSubImageFUNC)(GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLLOADER_APIENTRY *glInvalidateTexImageFUNC)(GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glInvalidateBufferSubDataFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (GLLOADER_APIENTRY *glInvalidateBufferDataFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glInvalidateFramebufferFUNC)(GLenum target, GLsizei numAttachments, const GLenum* attachments);
typedef void (GLLOADER_APIENTRY *glInvalidateSubFramebufferFUNC)(GLenum target, GLsizei numAttachments, const GLenum* attachments, GLint x, GLint y, GLsizei width, GLsizei height);

extern GLLOADER_API glInvalidateTexSubImageFUNC glInvalidateTexSubImage;
extern GLLOADER_API glInvalidateTexImageFUNC glInvalidateTexImage;
extern GLLOADER_API glInvalidateBufferSubDataFUNC glInvalidateBufferSubData;
extern GLLOADER_API glInvalidateBufferDataFUNC glInvalidateBufferData;
extern GLLOADER_API glInvalidateFramebufferFUNC glInvalidateFramebuffer;
extern GLLOADER_API glInvalidateSubFramebufferFUNC glInvalidateSubFramebuffer;

#endif

#ifdef GL_ARB_map_buffer_range

typedef GLvoid* (GLLOADER_APIENTRY *glMapBufferRangeFUNC)(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GLLOADER_APIENTRY *glFlushMappedBufferRangeFUNC)(GLenum target, GLintptr offset, GLsizeiptr length);

extern GLLOADER_API glMapBufferRangeFUNC glMapBufferRange;
extern GLLOADER_API glFlushMappedBufferRangeFUNC glFlushMappedBufferRange;

#endif

#ifdef GL_ARB_matrix_palette

typedef void (GLLOADER_APIENTRY *glCurrentPaletteMatrixARBFUNC)(GLint index);
typedef void (GLLOADER_APIENTRY *glMatrixIndexubvARBFUNC)(GLint size, GLubyte* indices);
typedef void (GLLOADER_APIENTRY *glMatrixIndexusvARBFUNC)(GLint size, GLushort* indices);
typedef void (GLLOADER_APIENTRY *glMatrixIndexuivARBFUNC)(GLint size, GLuint* indices);
typedef void (GLLOADER_APIENTRY *glMatrixIndexPointerARBFUNC)(GLint size, GLenum type, GLsizei stride, GLvoid* pointer);

extern GLLOADER_API glCurrentPaletteMatrixARBFUNC glCurrentPaletteMatrixARB;
extern GLLOADER_API glMatrixIndexubvARBFUNC glMatrixIndexubvARB;
extern GLLOADER_API glMatrixIndexusvARBFUNC glMatrixIndexusvARB;
extern GLLOADER_API glMatrixIndexuivARBFUNC glMatrixIndexuivARB;
extern GLLOADER_API glMatrixIndexPointerARBFUNC glMatrixIndexPointerARB;

#endif

#ifdef GL_ARB_multisample

typedef void (GLLOADER_APIENTRY *glSampleCoverageARBFUNC)(GLfloat value, GLboolean invert);

extern GLLOADER_API glSampleCoverageARBFUNC glSampleCoverageARB;

#endif

#ifdef GL_ARB_multitexture

typedef void (GLLOADER_APIENTRY *glActiveTextureARBFUNC)(GLenum texture);
typedef void (GLLOADER_APIENTRY *glClientActiveTextureARBFUNC)(GLenum texture);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1dARBFUNC)(GLenum target, GLdouble s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1dvARBFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1fARBFUNC)(GLenum target, GLfloat s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1fvARBFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1iARBFUNC)(GLenum target, GLint s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1ivARBFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1sARBFUNC)(GLenum target, GLshort s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1svARBFUNC)(GLenum target, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2dARBFUNC)(GLenum target, GLdouble s, GLdouble t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2dvARBFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2fARBFUNC)(GLenum target, GLfloat s, GLfloat t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2fvARBFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2iARBFUNC)(GLenum target, GLint s, GLint t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2ivARBFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2sARBFUNC)(GLenum target, GLshort s, GLshort t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2svARBFUNC)(GLenum target, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3dARBFUNC)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3dvARBFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3fARBFUNC)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3fvARBFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3iARBFUNC)(GLenum target, GLint s, GLint t, GLint r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3ivARBFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3sARBFUNC)(GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3svARBFUNC)(GLenum target, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4dARBFUNC)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4dvARBFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4fARBFUNC)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4fvARBFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4iARBFUNC)(GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4ivARBFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4sARBFUNC)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4svARBFUNC)(GLenum target, const GLshort* v);

extern GLLOADER_API glActiveTextureARBFUNC glActiveTextureARB;
extern GLLOADER_API glClientActiveTextureARBFUNC glClientActiveTextureARB;
extern GLLOADER_API glMultiTexCoord1dARBFUNC glMultiTexCoord1dARB;
extern GLLOADER_API glMultiTexCoord1dvARBFUNC glMultiTexCoord1dvARB;
extern GLLOADER_API glMultiTexCoord1fARBFUNC glMultiTexCoord1fARB;
extern GLLOADER_API glMultiTexCoord1fvARBFUNC glMultiTexCoord1fvARB;
extern GLLOADER_API glMultiTexCoord1iARBFUNC glMultiTexCoord1iARB;
extern GLLOADER_API glMultiTexCoord1ivARBFUNC glMultiTexCoord1ivARB;
extern GLLOADER_API glMultiTexCoord1sARBFUNC glMultiTexCoord1sARB;
extern GLLOADER_API glMultiTexCoord1svARBFUNC glMultiTexCoord1svARB;
extern GLLOADER_API glMultiTexCoord2dARBFUNC glMultiTexCoord2dARB;
extern GLLOADER_API glMultiTexCoord2dvARBFUNC glMultiTexCoord2dvARB;
extern GLLOADER_API glMultiTexCoord2fARBFUNC glMultiTexCoord2fARB;
extern GLLOADER_API glMultiTexCoord2fvARBFUNC glMultiTexCoord2fvARB;
extern GLLOADER_API glMultiTexCoord2iARBFUNC glMultiTexCoord2iARB;
extern GLLOADER_API glMultiTexCoord2ivARBFUNC glMultiTexCoord2ivARB;
extern GLLOADER_API glMultiTexCoord2sARBFUNC glMultiTexCoord2sARB;
extern GLLOADER_API glMultiTexCoord2svARBFUNC glMultiTexCoord2svARB;
extern GLLOADER_API glMultiTexCoord3dARBFUNC glMultiTexCoord3dARB;
extern GLLOADER_API glMultiTexCoord3dvARBFUNC glMultiTexCoord3dvARB;
extern GLLOADER_API glMultiTexCoord3fARBFUNC glMultiTexCoord3fARB;
extern GLLOADER_API glMultiTexCoord3fvARBFUNC glMultiTexCoord3fvARB;
extern GLLOADER_API glMultiTexCoord3iARBFUNC glMultiTexCoord3iARB;
extern GLLOADER_API glMultiTexCoord3ivARBFUNC glMultiTexCoord3ivARB;
extern GLLOADER_API glMultiTexCoord3sARBFUNC glMultiTexCoord3sARB;
extern GLLOADER_API glMultiTexCoord3svARBFUNC glMultiTexCoord3svARB;
extern GLLOADER_API glMultiTexCoord4dARBFUNC glMultiTexCoord4dARB;
extern GLLOADER_API glMultiTexCoord4dvARBFUNC glMultiTexCoord4dvARB;
extern GLLOADER_API glMultiTexCoord4fARBFUNC glMultiTexCoord4fARB;
extern GLLOADER_API glMultiTexCoord4fvARBFUNC glMultiTexCoord4fvARB;
extern GLLOADER_API glMultiTexCoord4iARBFUNC glMultiTexCoord4iARB;
extern GLLOADER_API glMultiTexCoord4ivARBFUNC glMultiTexCoord4ivARB;
extern GLLOADER_API glMultiTexCoord4sARBFUNC glMultiTexCoord4sARB;
extern GLLOADER_API glMultiTexCoord4svARBFUNC glMultiTexCoord4svARB;

#endif

#ifdef GL_ARB_multi_bind

typedef void (GLLOADER_APIENTRY *glBindBuffersBaseFUNC)(GLenum target, GLuint first, GLsizei count, GLuint const * buffers);
typedef void (GLLOADER_APIENTRY *glBindBuffersRangeFUNC)(GLenum target, GLuint first, GLsizei count, GLuint const * buffers, GLintptr const * offsets, GLsizeiptr const * sizes);
typedef void (GLLOADER_APIENTRY *glBindTexturesFUNC)(GLuint first, GLsizei count, GLuint const * textures);
typedef void (GLLOADER_APIENTRY *glBindSamplersFUNC)(GLuint first, GLsizei count, GLuint const * samplers);
typedef void (GLLOADER_APIENTRY *glBindImageTexturesFUNC)(GLuint first, GLsizei count, GLuint const * textures);
typedef void (GLLOADER_APIENTRY *glBindVertexBuffersFUNC)(GLuint first, GLsizei count, GLuint const * buffers, GLintptr const * offsets, GLsizei const * strides);

extern GLLOADER_API glBindBuffersBaseFUNC glBindBuffersBase;
extern GLLOADER_API glBindBuffersRangeFUNC glBindBuffersRange;
extern GLLOADER_API glBindTexturesFUNC glBindTextures;
extern GLLOADER_API glBindSamplersFUNC glBindSamplers;
extern GLLOADER_API glBindImageTexturesFUNC glBindImageTextures;
extern GLLOADER_API glBindVertexBuffersFUNC glBindVertexBuffers;

#endif

#ifdef GL_ARB_multi_draw_indirect

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysIndirectFUNC)(GLenum mode, const GLvoid* indirect, GLsizei drawcount, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsIndirectFUNC)(GLenum mode, GLenum type, const GLvoid* indirect, GLsizei drawcount, GLsizei stride);

extern GLLOADER_API glMultiDrawArraysIndirectFUNC glMultiDrawArraysIndirect;
extern GLLOADER_API glMultiDrawElementsIndirectFUNC glMultiDrawElementsIndirect;

#endif

#ifdef GL_ARB_occlusion_query

typedef void (GLLOADER_APIENTRY *glGenQueriesARBFUNC)(GLsizei n, GLuint* ids);
typedef void (GLLOADER_APIENTRY *glDeleteQueriesARBFUNC)(GLsizei n, const GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsQueryARBFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glBeginQueryARBFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glEndQueryARBFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glGetQueryivARBFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectivARBFUNC)(GLuint id, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectuivARBFUNC)(GLuint id, GLenum pname, GLuint* params);

extern GLLOADER_API glGenQueriesARBFUNC glGenQueriesARB;
extern GLLOADER_API glDeleteQueriesARBFUNC glDeleteQueriesARB;
extern GLLOADER_API glIsQueryARBFUNC glIsQueryARB;
extern GLLOADER_API glBeginQueryARBFUNC glBeginQueryARB;
extern GLLOADER_API glEndQueryARBFUNC glEndQueryARB;
extern GLLOADER_API glGetQueryivARBFUNC glGetQueryivARB;
extern GLLOADER_API glGetQueryObjectivARBFUNC glGetQueryObjectivARB;
extern GLLOADER_API glGetQueryObjectuivARBFUNC glGetQueryObjectuivARB;

#endif

#ifdef GL_ARB_point_parameters

typedef void (GLLOADER_APIENTRY *glPointParameterfARBFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPointParameterfvARBFUNC)(GLenum pname, const GLfloat* params);

extern GLLOADER_API glPointParameterfARBFUNC glPointParameterfARB;
extern GLLOADER_API glPointParameterfvARBFUNC glPointParameterfvARB;

#endif

#ifdef GL_ARB_program_interface_query

typedef void (GLLOADER_APIENTRY *glGetProgramInterfaceivFUNC)(GLuint program, GLenum programInterface, GLenum pname, GLint* params);
typedef GLuint (GLLOADER_APIENTRY *glGetProgramResourceIndexFUNC)(GLuint program, GLenum programInterface, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetProgramResourceNameFUNC)(GLuint program, GLenum programInterface, GLuint index, GLsizei bufSize, GLsizei* length, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetProgramResourceivFUNC)(GLuint program, GLenum programInterface, GLuint index, GLsizei propCount, const GLenum* props, GLsizei bufSize, GLsizei* length, GLint* params);
typedef GLint (GLLOADER_APIENTRY *glGetProgramResourceLocationFUNC)(GLuint program, GLenum programInterface, const GLchar* name);
typedef GLint (GLLOADER_APIENTRY *glGetProgramResourceLocationIndexFUNC)(GLuint program, GLenum programInterface, const GLchar* name);

extern GLLOADER_API glGetProgramInterfaceivFUNC glGetProgramInterfaceiv;
extern GLLOADER_API glGetProgramResourceIndexFUNC glGetProgramResourceIndex;
extern GLLOADER_API glGetProgramResourceNameFUNC glGetProgramResourceName;
extern GLLOADER_API glGetProgramResourceivFUNC glGetProgramResourceiv;
extern GLLOADER_API glGetProgramResourceLocationFUNC glGetProgramResourceLocation;
extern GLLOADER_API glGetProgramResourceLocationIndexFUNC glGetProgramResourceLocationIndex;

#endif

#ifdef GL_ARB_provoking_vertex

typedef void (GLLOADER_APIENTRY *glProvokingVertexFUNC)(GLenum mode);

extern GLLOADER_API glProvokingVertexFUNC glProvokingVertex;

#endif

#ifdef GL_ARB_robustness

typedef GLenum (GLLOADER_APIENTRY *glGetGraphicsResetStatusARBFUNC)();
typedef void (GLLOADER_APIENTRY *glGetnMapdvARBFUNC)(GLenum target, GLenum query, GLsizei bufSize, GLdouble* v);
typedef void (GLLOADER_APIENTRY *glGetnMapfvARBFUNC)(GLenum target, GLenum query, GLsizei bufSize, GLfloat* v);
typedef void (GLLOADER_APIENTRY *glGetnMapivARBFUNC)(GLenum target, GLenum query, GLsizei bufSize, GLint* v);
typedef void (GLLOADER_APIENTRY *glGetnPixelMapfvARBFUNC)(GLenum map, GLsizei bufSize, GLfloat* values);
typedef void (GLLOADER_APIENTRY *glGetnPixelMapuivARBFUNC)(GLenum map, GLsizei bufSize, GLuint* values);
typedef void (GLLOADER_APIENTRY *glGetnPixelMapusvARBFUNC)(GLenum map, GLsizei bufSize, GLushort* values);
typedef void (GLLOADER_APIENTRY *glGetnPolygonStippleARBFUNC)(GLsizei bufSize, GLubyte* pattern);
typedef void (GLLOADER_APIENTRY *glGetnColorTableARBFUNC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* table);
typedef void (GLLOADER_APIENTRY *glGetnConvolutionFilterARBFUNC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* image);
typedef void (GLLOADER_APIENTRY *glGetnSeparableFilterARBFUNC)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid* row, GLsizei columnBufSize, GLvoid* column, GLvoid* span);
typedef void (GLLOADER_APIENTRY *glGetnHistogramARBFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values);
typedef void (GLLOADER_APIENTRY *glGetnMinmaxARBFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values);
typedef void (GLLOADER_APIENTRY *glGetnTexImageARBFUNC)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid* img);
typedef void (GLLOADER_APIENTRY *glReadnPixelsARBFUNC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGetnCompressedTexImageARBFUNC)(GLenum target, GLint lod, GLsizei bufSize, GLvoid* img);
typedef void (GLLOADER_APIENTRY *glGetnUniformfvARBFUNC)(GLuint program, GLint location, GLsizei bufSize, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetnUniformivARBFUNC)(GLuint program, GLint location, GLsizei bufSize, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetnUniformuivARBFUNC)(GLuint program, GLint location, GLsizei bufSize, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetnUniformdvARBFUNC)(GLuint program, GLint location, GLsizei bufSize, GLdouble* params);

extern GLLOADER_API glGetGraphicsResetStatusARBFUNC glGetGraphicsResetStatusARB;
extern GLLOADER_API glGetnMapdvARBFUNC glGetnMapdvARB;
extern GLLOADER_API glGetnMapfvARBFUNC glGetnMapfvARB;
extern GLLOADER_API glGetnMapivARBFUNC glGetnMapivARB;
extern GLLOADER_API glGetnPixelMapfvARBFUNC glGetnPixelMapfvARB;
extern GLLOADER_API glGetnPixelMapuivARBFUNC glGetnPixelMapuivARB;
extern GLLOADER_API glGetnPixelMapusvARBFUNC glGetnPixelMapusvARB;
extern GLLOADER_API glGetnPolygonStippleARBFUNC glGetnPolygonStippleARB;
extern GLLOADER_API glGetnColorTableARBFUNC glGetnColorTableARB;
extern GLLOADER_API glGetnConvolutionFilterARBFUNC glGetnConvolutionFilterARB;
extern GLLOADER_API glGetnSeparableFilterARBFUNC glGetnSeparableFilterARB;
extern GLLOADER_API glGetnHistogramARBFUNC glGetnHistogramARB;
extern GLLOADER_API glGetnMinmaxARBFUNC glGetnMinmaxARB;
extern GLLOADER_API glGetnTexImageARBFUNC glGetnTexImageARB;
extern GLLOADER_API glReadnPixelsARBFUNC glReadnPixelsARB;
extern GLLOADER_API glGetnCompressedTexImageARBFUNC glGetnCompressedTexImageARB;
extern GLLOADER_API glGetnUniformfvARBFUNC glGetnUniformfvARB;
extern GLLOADER_API glGetnUniformivARBFUNC glGetnUniformivARB;
extern GLLOADER_API glGetnUniformuivARBFUNC glGetnUniformuivARB;
extern GLLOADER_API glGetnUniformdvARBFUNC glGetnUniformdvARB;

#endif

#ifdef GL_ARB_sampler_objects

typedef void (GLLOADER_APIENTRY *glGenSamplersFUNC)(GLsizei count, GLuint* samplers);
typedef void (GLLOADER_APIENTRY *glDeleteSamplersFUNC)(GLsizei count, const GLuint* samplers);
typedef GLboolean (GLLOADER_APIENTRY *glIsSamplerFUNC)(GLuint sampler);
typedef void (GLLOADER_APIENTRY *glBindSamplerFUNC)(GLuint unit, GLuint sampler);
typedef void (GLLOADER_APIENTRY *glSamplerParameteriFUNC)(GLuint sampler, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterivFUNC)(GLuint sampler, GLenum pname, const GLint* param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterfFUNC)(GLuint sampler, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterfvFUNC)(GLuint sampler, GLenum pname, const GLfloat* param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterIivFUNC)(GLuint sampler, GLenum pname, const GLint* param);
typedef void (GLLOADER_APIENTRY *glSamplerParameterIuivFUNC)(GLuint sampler, GLenum pname, const GLuint* param);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterivFUNC)(GLuint sampler, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterIivFUNC)(GLuint sampler, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterfvFUNC)(GLuint sampler, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetSamplerParameterIuivFUNC)(GLuint sampler, GLenum pname, GLuint* params);

extern GLLOADER_API glGenSamplersFUNC glGenSamplers;
extern GLLOADER_API glDeleteSamplersFUNC glDeleteSamplers;
extern GLLOADER_API glIsSamplerFUNC glIsSampler;
extern GLLOADER_API glBindSamplerFUNC glBindSampler;
extern GLLOADER_API glSamplerParameteriFUNC glSamplerParameteri;
extern GLLOADER_API glSamplerParameterivFUNC glSamplerParameteriv;
extern GLLOADER_API glSamplerParameterfFUNC glSamplerParameterf;
extern GLLOADER_API glSamplerParameterfvFUNC glSamplerParameterfv;
extern GLLOADER_API glSamplerParameterIivFUNC glSamplerParameterIiv;
extern GLLOADER_API glSamplerParameterIuivFUNC glSamplerParameterIuiv;
extern GLLOADER_API glGetSamplerParameterivFUNC glGetSamplerParameteriv;
extern GLLOADER_API glGetSamplerParameterIivFUNC glGetSamplerParameterIiv;
extern GLLOADER_API glGetSamplerParameterfvFUNC glGetSamplerParameterfv;
extern GLLOADER_API glGetSamplerParameterIuivFUNC glGetSamplerParameterIuiv;

#endif

#ifdef GL_ARB_sample_shading

typedef void (GLLOADER_APIENTRY *glMinSampleShadingARBFUNC)(GLfloat value);

extern GLLOADER_API glMinSampleShadingARBFUNC glMinSampleShadingARB;

#endif

#ifdef GL_ARB_separate_shader_objects

typedef void (GLLOADER_APIENTRY *glUseProgramStagesFUNC)(GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GLLOADER_APIENTRY *glActiveShaderProgramFUNC)(GLuint pipeline, GLuint program);
typedef GLuint (GLLOADER_APIENTRY *glCreateShaderProgramvFUNC)(GLenum type, GLsizei count, const GLchar** strings);
typedef void (GLLOADER_APIENTRY *glBindProgramPipelineFUNC)(GLuint pipeline);
typedef void (GLLOADER_APIENTRY *glDeleteProgramPipelinesFUNC)(GLsizei n, const GLuint* pipelines);
typedef void (GLLOADER_APIENTRY *glGenProgramPipelinesFUNC)(GLsizei n, GLuint* pipelines);
typedef GLboolean (GLLOADER_APIENTRY *glIsProgramPipelineFUNC)(GLuint pipeline);
typedef void (GLLOADER_APIENTRY *glGetProgramPipelineivFUNC)(GLuint pipeline, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glProgramUniform1iFUNC)(GLuint program, GLint location, GLint v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform1ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1fFUNC)(GLuint program, GLint location, GLfloat v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform1fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1dFUNC)(GLuint program, GLint location, GLdouble v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform1dvFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1uiFUNC)(GLuint program, GLint location, GLuint v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform1uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2iFUNC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform2ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2fFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform2fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2dFUNC)(GLuint program, GLint location, GLdouble v0, GLdouble v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform2dvFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2uiFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform2uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3iFUNC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform3ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3fFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform3fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3dFUNC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform3dvFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3uiFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform3uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4iFUNC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform4ivFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4fFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform4fvFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4dFUNC)(GLuint program, GLint location, GLdouble v0, GLdouble v1, GLdouble v2, GLdouble v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform4dvFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4uiFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform4uivFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x3fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x2fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x4fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x2fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x4fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x3fvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x3dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x2dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x4dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x2dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x4dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x3dvFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glValidateProgramPipelineFUNC)(GLuint pipeline);
typedef void (GLLOADER_APIENTRY *glGetProgramPipelineInfoLogFUNC)(GLuint pipeline, GLsizei bufSize, GLsizei* length, GLchar* infoLog);

extern GLLOADER_API glUseProgramStagesFUNC glUseProgramStages;
extern GLLOADER_API glActiveShaderProgramFUNC glActiveShaderProgram;
extern GLLOADER_API glCreateShaderProgramvFUNC glCreateShaderProgramv;
extern GLLOADER_API glBindProgramPipelineFUNC glBindProgramPipeline;
extern GLLOADER_API glDeleteProgramPipelinesFUNC glDeleteProgramPipelines;
extern GLLOADER_API glGenProgramPipelinesFUNC glGenProgramPipelines;
extern GLLOADER_API glIsProgramPipelineFUNC glIsProgramPipeline;
extern GLLOADER_API glGetProgramPipelineivFUNC glGetProgramPipelineiv;
extern GLLOADER_API glProgramUniform1iFUNC glProgramUniform1i;
extern GLLOADER_API glProgramUniform1ivFUNC glProgramUniform1iv;
extern GLLOADER_API glProgramUniform1fFUNC glProgramUniform1f;
extern GLLOADER_API glProgramUniform1fvFUNC glProgramUniform1fv;
extern GLLOADER_API glProgramUniform1dFUNC glProgramUniform1d;
extern GLLOADER_API glProgramUniform1dvFUNC glProgramUniform1dv;
extern GLLOADER_API glProgramUniform1uiFUNC glProgramUniform1ui;
extern GLLOADER_API glProgramUniform1uivFUNC glProgramUniform1uiv;
extern GLLOADER_API glProgramUniform2iFUNC glProgramUniform2i;
extern GLLOADER_API glProgramUniform2ivFUNC glProgramUniform2iv;
extern GLLOADER_API glProgramUniform2fFUNC glProgramUniform2f;
extern GLLOADER_API glProgramUniform2fvFUNC glProgramUniform2fv;
extern GLLOADER_API glProgramUniform2dFUNC glProgramUniform2d;
extern GLLOADER_API glProgramUniform2dvFUNC glProgramUniform2dv;
extern GLLOADER_API glProgramUniform2uiFUNC glProgramUniform2ui;
extern GLLOADER_API glProgramUniform2uivFUNC glProgramUniform2uiv;
extern GLLOADER_API glProgramUniform3iFUNC glProgramUniform3i;
extern GLLOADER_API glProgramUniform3ivFUNC glProgramUniform3iv;
extern GLLOADER_API glProgramUniform3fFUNC glProgramUniform3f;
extern GLLOADER_API glProgramUniform3fvFUNC glProgramUniform3fv;
extern GLLOADER_API glProgramUniform3dFUNC glProgramUniform3d;
extern GLLOADER_API glProgramUniform3dvFUNC glProgramUniform3dv;
extern GLLOADER_API glProgramUniform3uiFUNC glProgramUniform3ui;
extern GLLOADER_API glProgramUniform3uivFUNC glProgramUniform3uiv;
extern GLLOADER_API glProgramUniform4iFUNC glProgramUniform4i;
extern GLLOADER_API glProgramUniform4ivFUNC glProgramUniform4iv;
extern GLLOADER_API glProgramUniform4fFUNC glProgramUniform4f;
extern GLLOADER_API glProgramUniform4fvFUNC glProgramUniform4fv;
extern GLLOADER_API glProgramUniform4dFUNC glProgramUniform4d;
extern GLLOADER_API glProgramUniform4dvFUNC glProgramUniform4dv;
extern GLLOADER_API glProgramUniform4uiFUNC glProgramUniform4ui;
extern GLLOADER_API glProgramUniform4uivFUNC glProgramUniform4uiv;
extern GLLOADER_API glProgramUniformMatrix2fvFUNC glProgramUniformMatrix2fv;
extern GLLOADER_API glProgramUniformMatrix3fvFUNC glProgramUniformMatrix3fv;
extern GLLOADER_API glProgramUniformMatrix4fvFUNC glProgramUniformMatrix4fv;
extern GLLOADER_API glProgramUniformMatrix2dvFUNC glProgramUniformMatrix2dv;
extern GLLOADER_API glProgramUniformMatrix3dvFUNC glProgramUniformMatrix3dv;
extern GLLOADER_API glProgramUniformMatrix4dvFUNC glProgramUniformMatrix4dv;
extern GLLOADER_API glProgramUniformMatrix2x3fvFUNC glProgramUniformMatrix2x3fv;
extern GLLOADER_API glProgramUniformMatrix3x2fvFUNC glProgramUniformMatrix3x2fv;
extern GLLOADER_API glProgramUniformMatrix2x4fvFUNC glProgramUniformMatrix2x4fv;
extern GLLOADER_API glProgramUniformMatrix4x2fvFUNC glProgramUniformMatrix4x2fv;
extern GLLOADER_API glProgramUniformMatrix3x4fvFUNC glProgramUniformMatrix3x4fv;
extern GLLOADER_API glProgramUniformMatrix4x3fvFUNC glProgramUniformMatrix4x3fv;
extern GLLOADER_API glProgramUniformMatrix2x3dvFUNC glProgramUniformMatrix2x3dv;
extern GLLOADER_API glProgramUniformMatrix3x2dvFUNC glProgramUniformMatrix3x2dv;
extern GLLOADER_API glProgramUniformMatrix2x4dvFUNC glProgramUniformMatrix2x4dv;
extern GLLOADER_API glProgramUniformMatrix4x2dvFUNC glProgramUniformMatrix4x2dv;
extern GLLOADER_API glProgramUniformMatrix3x4dvFUNC glProgramUniformMatrix3x4dv;
extern GLLOADER_API glProgramUniformMatrix4x3dvFUNC glProgramUniformMatrix4x3dv;
extern GLLOADER_API glValidateProgramPipelineFUNC glValidateProgramPipeline;
extern GLLOADER_API glGetProgramPipelineInfoLogFUNC glGetProgramPipelineInfoLog;

#endif

#ifdef GL_ARB_shader_atomic_counters

typedef void (GLLOADER_APIENTRY *glGetActiveAtomicCounterBufferivFUNC)(GLuint program, GLuint bufferIndex, GLenum pname, GLint* params);

extern GLLOADER_API glGetActiveAtomicCounterBufferivFUNC glGetActiveAtomicCounterBufferiv;

#endif

#ifdef GL_ARB_shader_image_load_store

typedef void (GLLOADER_APIENTRY *glBindImageTextureFUNC)(GLuint unit, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLenum format);
typedef void (GLLOADER_APIENTRY *glMemoryBarrierFUNC)(GLbitfield barriers);

extern GLLOADER_API glBindImageTextureFUNC glBindImageTexture;
extern GLLOADER_API glMemoryBarrierFUNC glMemoryBarrier;

#endif

#ifdef GL_ARB_shader_objects

typedef void (GLLOADER_APIENTRY *glDeleteObjectARBFUNC)(GLhandleARB obj);
typedef GLhandleARB (GLLOADER_APIENTRY *glGetHandleARBFUNC)(GLenum pname);
typedef void (GLLOADER_APIENTRY *glDetachObjectARBFUNC)(GLhandleARB containerObj, GLhandleARB attachedObj);
typedef GLhandleARB (GLLOADER_APIENTRY *glCreateShaderObjectARBFUNC)(GLenum shaderType);
typedef void (GLLOADER_APIENTRY *glShaderSourceARBFUNC)(GLhandleARB shaderObj, GLsizei count, const GLcharARB** string, const GLint* length);
typedef void (GLLOADER_APIENTRY *glCompileShaderARBFUNC)(GLhandleARB shaderObj);
typedef GLhandleARB (GLLOADER_APIENTRY *glCreateProgramObjectARBFUNC)();
typedef void (GLLOADER_APIENTRY *glAttachObjectARBFUNC)(GLhandleARB containerObj, GLhandleARB obj);
typedef void (GLLOADER_APIENTRY *glLinkProgramARBFUNC)(GLhandleARB programObj);
typedef void (GLLOADER_APIENTRY *glUseProgramObjectARBFUNC)(GLhandleARB programObj);
typedef void (GLLOADER_APIENTRY *glValidateProgramARBFUNC)(GLhandleARB programObj);
typedef void (GLLOADER_APIENTRY *glUniform1fARBFUNC)(GLint location, GLfloat v0);
typedef void (GLLOADER_APIENTRY *glUniform2fARBFUNC)(GLint location, GLfloat v0, GLfloat v1);
typedef void (GLLOADER_APIENTRY *glUniform3fARBFUNC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLLOADER_APIENTRY *glUniform4fARBFUNC)(GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLLOADER_APIENTRY *glUniform1iARBFUNC)(GLint location, GLint v0);
typedef void (GLLOADER_APIENTRY *glUniform2iARBFUNC)(GLint location, GLint v0, GLint v1);
typedef void (GLLOADER_APIENTRY *glUniform3iARBFUNC)(GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLLOADER_APIENTRY *glUniform4iARBFUNC)(GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLLOADER_APIENTRY *glUniform1fvARBFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform2fvARBFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform3fvARBFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform4fvARBFUNC)(GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniform1ivARBFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniform2ivARBFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniform3ivARBFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniform4ivARBFUNC)(GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2fvARBFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3fvARBFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4fvARBFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glGetObjectParameterfvARBFUNC)(GLhandleARB obj, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetObjectParameterivARBFUNC)(GLhandleARB obj, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetInfoLogARBFUNC)(GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* infoLog);
typedef void (GLLOADER_APIENTRY *glGetAttachedObjectsARBFUNC)(GLhandleARB containerObj, GLsizei maxCount, GLsizei* count, GLhandleARB* obj);
typedef GLint (GLLOADER_APIENTRY *glGetUniformLocationARBFUNC)(GLhandleARB programObj, const GLcharARB* name);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformARBFUNC)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLcharARB* name);
typedef void (GLLOADER_APIENTRY *glGetUniformfvARBFUNC)(GLhandleARB programObj, GLint location, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetUniformivARBFUNC)(GLhandleARB programObj, GLint location, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetShaderSourceARBFUNC)(GLhandleARB obj, GLsizei maxLength, GLsizei* length, GLcharARB* source);

extern GLLOADER_API glDeleteObjectARBFUNC glDeleteObjectARB;
extern GLLOADER_API glGetHandleARBFUNC glGetHandleARB;
extern GLLOADER_API glDetachObjectARBFUNC glDetachObjectARB;
extern GLLOADER_API glCreateShaderObjectARBFUNC glCreateShaderObjectARB;
extern GLLOADER_API glShaderSourceARBFUNC glShaderSourceARB;
extern GLLOADER_API glCompileShaderARBFUNC glCompileShaderARB;
extern GLLOADER_API glCreateProgramObjectARBFUNC glCreateProgramObjectARB;
extern GLLOADER_API glAttachObjectARBFUNC glAttachObjectARB;
extern GLLOADER_API glLinkProgramARBFUNC glLinkProgramARB;
extern GLLOADER_API glUseProgramObjectARBFUNC glUseProgramObjectARB;
extern GLLOADER_API glValidateProgramARBFUNC glValidateProgramARB;
extern GLLOADER_API glUniform1fARBFUNC glUniform1fARB;
extern GLLOADER_API glUniform2fARBFUNC glUniform2fARB;
extern GLLOADER_API glUniform3fARBFUNC glUniform3fARB;
extern GLLOADER_API glUniform4fARBFUNC glUniform4fARB;
extern GLLOADER_API glUniform1iARBFUNC glUniform1iARB;
extern GLLOADER_API glUniform2iARBFUNC glUniform2iARB;
extern GLLOADER_API glUniform3iARBFUNC glUniform3iARB;
extern GLLOADER_API glUniform4iARBFUNC glUniform4iARB;
extern GLLOADER_API glUniform1fvARBFUNC glUniform1fvARB;
extern GLLOADER_API glUniform2fvARBFUNC glUniform2fvARB;
extern GLLOADER_API glUniform3fvARBFUNC glUniform3fvARB;
extern GLLOADER_API glUniform4fvARBFUNC glUniform4fvARB;
extern GLLOADER_API glUniform1ivARBFUNC glUniform1ivARB;
extern GLLOADER_API glUniform2ivARBFUNC glUniform2ivARB;
extern GLLOADER_API glUniform3ivARBFUNC glUniform3ivARB;
extern GLLOADER_API glUniform4ivARBFUNC glUniform4ivARB;
extern GLLOADER_API glUniformMatrix2fvARBFUNC glUniformMatrix2fvARB;
extern GLLOADER_API glUniformMatrix3fvARBFUNC glUniformMatrix3fvARB;
extern GLLOADER_API glUniformMatrix4fvARBFUNC glUniformMatrix4fvARB;
extern GLLOADER_API glGetObjectParameterfvARBFUNC glGetObjectParameterfvARB;
extern GLLOADER_API glGetObjectParameterivARBFUNC glGetObjectParameterivARB;
extern GLLOADER_API glGetInfoLogARBFUNC glGetInfoLogARB;
extern GLLOADER_API glGetAttachedObjectsARBFUNC glGetAttachedObjectsARB;
extern GLLOADER_API glGetUniformLocationARBFUNC glGetUniformLocationARB;
extern GLLOADER_API glGetActiveUniformARBFUNC glGetActiveUniformARB;
extern GLLOADER_API glGetUniformfvARBFUNC glGetUniformfvARB;
extern GLLOADER_API glGetUniformivARBFUNC glGetUniformivARB;
extern GLLOADER_API glGetShaderSourceARBFUNC glGetShaderSourceARB;

#endif

#ifdef GL_ARB_shader_storage_buffer_object

typedef void (GLLOADER_APIENTRY *glShaderStorageBlockBindingFUNC)(GLuint program, GLuint storageBlockIndex, GLuint storageBlockBinding);

extern GLLOADER_API glShaderStorageBlockBindingFUNC glShaderStorageBlockBinding;

#endif

#ifdef GL_ARB_shader_subroutine

typedef GLint (GLLOADER_APIENTRY *glGetSubroutineUniformLocationFUNC)(GLuint program, GLenum shadertype, const GLchar* name);
typedef GLuint (GLLOADER_APIENTRY *glGetSubroutineIndexFUNC)(GLuint program, GLenum shadertype, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetActiveSubroutineUniformivFUNC)(GLuint program, GLenum shadertype, GLuint index, GLenum pname, GLint* values);
typedef void (GLLOADER_APIENTRY *glGetActiveSubroutineUniformNameFUNC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetActiveSubroutineNameFUNC)(GLuint program, GLenum shadertype, GLuint index, GLsizei bufsize, GLsizei* length, GLchar* name);
typedef void (GLLOADER_APIENTRY *glUniformSubroutinesuivFUNC)(GLenum shadertype, GLsizei count, const GLuint* indices);
typedef void (GLLOADER_APIENTRY *glGetUniformSubroutineuivFUNC)(GLenum shadertype, GLint location, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramStageivFUNC)(GLuint program, GLenum shadertype, GLenum pname, GLint* values);

extern GLLOADER_API glGetSubroutineUniformLocationFUNC glGetSubroutineUniformLocation;
extern GLLOADER_API glGetSubroutineIndexFUNC glGetSubroutineIndex;
extern GLLOADER_API glGetActiveSubroutineUniformivFUNC glGetActiveSubroutineUniformiv;
extern GLLOADER_API glGetActiveSubroutineUniformNameFUNC glGetActiveSubroutineUniformName;
extern GLLOADER_API glGetActiveSubroutineNameFUNC glGetActiveSubroutineName;
extern GLLOADER_API glUniformSubroutinesuivFUNC glUniformSubroutinesuiv;
extern GLLOADER_API glGetUniformSubroutineuivFUNC glGetUniformSubroutineuiv;
extern GLLOADER_API glGetProgramStageivFUNC glGetProgramStageiv;

#endif

#ifdef GL_ARB_shading_language_include

typedef void (GLLOADER_APIENTRY *glNamedStringARBFUNC)(GLenum type, GLint namelen, const GLchar* name, GLint stringlen, const GLchar* string);
typedef void (GLLOADER_APIENTRY *glDeleteNamedStringARBFUNC)(GLint namelen, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glCompileShaderIncludeARBFUNC)(GLuint shader, GLsizei count, const GLchar** path, const GLint* length);
typedef GLboolean (GLLOADER_APIENTRY *glIsNamedStringARBFUNC)(GLint namelen, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetNamedStringARBFUNC)(GLint namelen, const GLchar* name, GLsizei bufSize, GLint* stringlen, GLchar* string);
typedef void (GLLOADER_APIENTRY *glGetNamedStringivARBFUNC)(GLint namelen, const GLchar* name, GLenum pname, GLint* params);

extern GLLOADER_API glNamedStringARBFUNC glNamedStringARB;
extern GLLOADER_API glDeleteNamedStringARBFUNC glDeleteNamedStringARB;
extern GLLOADER_API glCompileShaderIncludeARBFUNC glCompileShaderIncludeARB;
extern GLLOADER_API glIsNamedStringARBFUNC glIsNamedStringARB;
extern GLLOADER_API glGetNamedStringARBFUNC glGetNamedStringARB;
extern GLLOADER_API glGetNamedStringivARBFUNC glGetNamedStringivARB;

#endif

#ifdef GL_ARB_sparse_buffer

typedef void (GLLOADER_APIENTRY *glBufferPageCommitmentARBFUNC)(GLenum target, GLintptr offset, GLsizeiptr size, GLboolean commit);

extern GLLOADER_API glBufferPageCommitmentARBFUNC glBufferPageCommitmentARB;

#endif

#ifdef GL_ARB_sparse_texture

typedef void (GLLOADER_APIENTRY *glTexPageCommitmentARBFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
typedef void (GLLOADER_APIENTRY *glTexturePageCommitmentEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);

extern GLLOADER_API glTexPageCommitmentARBFUNC glTexPageCommitmentARB;
extern GLLOADER_API glTexturePageCommitmentEXTFUNC glTexturePageCommitmentEXT;

#endif

#ifdef GL_ARB_sync

typedef GLsync (GLLOADER_APIENTRY *glFenceSyncFUNC)(GLenum condition, GLbitfield flags);
typedef GLboolean (GLLOADER_APIENTRY *glIsSyncFUNC)(GLsync sync);
typedef void (GLLOADER_APIENTRY *glDeleteSyncFUNC)(GLsync sync);
typedef GLenum (GLLOADER_APIENTRY *glClientWaitSyncFUNC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLLOADER_APIENTRY *glWaitSyncFUNC)(GLsync sync, GLbitfield flags, GLuint64 timeout);
typedef void (GLLOADER_APIENTRY *glGetInteger64vFUNC)(GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetSyncivFUNC)(GLsync sync, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);

extern GLLOADER_API glFenceSyncFUNC glFenceSync;
extern GLLOADER_API glIsSyncFUNC glIsSync;
extern GLLOADER_API glDeleteSyncFUNC glDeleteSync;
extern GLLOADER_API glClientWaitSyncFUNC glClientWaitSync;
extern GLLOADER_API glWaitSyncFUNC glWaitSync;
extern GLLOADER_API glGetInteger64vFUNC glGetInteger64v;
extern GLLOADER_API glGetSyncivFUNC glGetSynciv;

#endif

#ifdef GL_ARB_tessellation_shader

typedef void (GLLOADER_APIENTRY *glPatchParameteriFUNC)(GLenum pname, GLint value);
typedef void (GLLOADER_APIENTRY *glPatchParameterfvFUNC)(GLenum pname, const GLfloat* values);

extern GLLOADER_API glPatchParameteriFUNC glPatchParameteri;
extern GLLOADER_API glPatchParameterfvFUNC glPatchParameterfv;

#endif

#ifdef GL_ARB_texture_barrier

typedef void (GLLOADER_APIENTRY *glTextureBarrierFUNC)();

extern GLLOADER_API glTextureBarrierFUNC glTextureBarrier;

#endif

#ifdef GL_ARB_texture_buffer_object

typedef void (GLLOADER_APIENTRY *glTexBufferARBFUNC)(GLenum target, GLenum internalformat, GLuint buffer);

extern GLLOADER_API glTexBufferARBFUNC glTexBufferARB;

#endif

#ifdef GL_ARB_texture_buffer_range

typedef void (GLLOADER_APIENTRY *glTexBufferRangeFUNC)(GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glTextureBufferRangeEXTFUNC)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);

extern GLLOADER_API glTexBufferRangeFUNC glTexBufferRange;
extern GLLOADER_API glTextureBufferRangeEXTFUNC glTextureBufferRangeEXT;

#endif

#ifdef GL_ARB_texture_compression

typedef void (GLLOADER_APIENTRY *glCompressedTexImage3DARBFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage2DARBFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage1DARBFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage3DARBFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage2DARBFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage1DARBFUNC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGetCompressedTexImageARBFUNC)(GLenum target, GLint level, GLvoid* img);

extern GLLOADER_API glCompressedTexImage3DARBFUNC glCompressedTexImage3DARB;
extern GLLOADER_API glCompressedTexImage2DARBFUNC glCompressedTexImage2DARB;
extern GLLOADER_API glCompressedTexImage1DARBFUNC glCompressedTexImage1DARB;
extern GLLOADER_API glCompressedTexSubImage3DARBFUNC glCompressedTexSubImage3DARB;
extern GLLOADER_API glCompressedTexSubImage2DARBFUNC glCompressedTexSubImage2DARB;
extern GLLOADER_API glCompressedTexSubImage1DARBFUNC glCompressedTexSubImage1DARB;
extern GLLOADER_API glGetCompressedTexImageARBFUNC glGetCompressedTexImageARB;

#endif

#ifdef GL_ARB_texture_multisample

typedef void (GLLOADER_APIENTRY *glTexImage2DMultisampleFUNC)(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glTexImage3DMultisampleFUNC)(GLenum target, GLsizei samples, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glGetMultisamplefvFUNC)(GLenum pname, GLuint index, GLfloat* val);
typedef void (GLLOADER_APIENTRY *glSampleMaskiFUNC)(GLuint index, GLbitfield mask);

extern GLLOADER_API glTexImage2DMultisampleFUNC glTexImage2DMultisample;
extern GLLOADER_API glTexImage3DMultisampleFUNC glTexImage3DMultisample;
extern GLLOADER_API glGetMultisamplefvFUNC glGetMultisamplefv;
extern GLLOADER_API glSampleMaskiFUNC glSampleMaski;

#endif

#ifdef GL_ARB_texture_storage

typedef void (GLLOADER_APIENTRY *glTexStorage1DFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLLOADER_APIENTRY *glTexStorage2DFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTexStorage3DFUNC)(GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLLOADER_APIENTRY *glTextureStorage1DEXTFUNC)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GLLOADER_APIENTRY *glTextureStorage2DEXTFUNC)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTextureStorage3DEXTFUNC)(GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);

extern GLLOADER_API glTexStorage1DFUNC glTexStorage1D;
extern GLLOADER_API glTexStorage2DFUNC glTexStorage2D;
extern GLLOADER_API glTexStorage3DFUNC glTexStorage3D;
extern GLLOADER_API glTextureStorage1DEXTFUNC glTextureStorage1DEXT;
extern GLLOADER_API glTextureStorage2DEXTFUNC glTextureStorage2DEXT;
extern GLLOADER_API glTextureStorage3DEXTFUNC glTextureStorage3DEXT;

#endif

#ifdef GL_ARB_texture_storage_multisample

typedef void (GLLOADER_APIENTRY *glTexStorage2DMultisampleFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glTexStorage3DMultisampleFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glTextureStorage2DMultisampleEXTFUNC)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLboolean fixedsamplelocations);
typedef void (GLLOADER_APIENTRY *glTextureStorage3DMultisampleEXTFUNC)(GLuint texture, GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);

extern GLLOADER_API glTexStorage2DMultisampleFUNC glTexStorage2DMultisample;
extern GLLOADER_API glTexStorage3DMultisampleFUNC glTexStorage3DMultisample;
extern GLLOADER_API glTextureStorage2DMultisampleEXTFUNC glTextureStorage2DMultisampleEXT;
extern GLLOADER_API glTextureStorage3DMultisampleEXTFUNC glTextureStorage3DMultisampleEXT;

#endif

#ifdef GL_ARB_texture_view

typedef void (GLLOADER_APIENTRY *glTextureViewFUNC)(GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);

extern GLLOADER_API glTextureViewFUNC glTextureView;

#endif

#ifdef GL_ARB_timer_query

typedef void (GLLOADER_APIENTRY *glQueryCounterFUNC)(GLuint id, GLenum target);
typedef void (GLLOADER_APIENTRY *glGetQueryObjecti64vFUNC)(GLuint id, GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectui64vFUNC)(GLuint id, GLenum pname, GLuint64* params);

extern GLLOADER_API glQueryCounterFUNC glQueryCounter;
extern GLLOADER_API glGetQueryObjecti64vFUNC glGetQueryObjecti64v;
extern GLLOADER_API glGetQueryObjectui64vFUNC glGetQueryObjectui64v;

#endif

#ifdef GL_ARB_transform_feedback2

typedef void (GLLOADER_APIENTRY *glBindTransformFeedbackFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glDeleteTransformFeedbacksFUNC)(GLsizei n, const GLuint* ids);
typedef void (GLLOADER_APIENTRY *glGenTransformFeedbacksFUNC)(GLsizei n, GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsTransformFeedbackFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glPauseTransformFeedbackFUNC)();
typedef void (GLLOADER_APIENTRY *glResumeTransformFeedbackFUNC)();
typedef void (GLLOADER_APIENTRY *glDrawTransformFeedbackFUNC)(GLenum mode, GLuint id);

extern GLLOADER_API glBindTransformFeedbackFUNC glBindTransformFeedback;
extern GLLOADER_API glDeleteTransformFeedbacksFUNC glDeleteTransformFeedbacks;
extern GLLOADER_API glGenTransformFeedbacksFUNC glGenTransformFeedbacks;
extern GLLOADER_API glIsTransformFeedbackFUNC glIsTransformFeedback;
extern GLLOADER_API glPauseTransformFeedbackFUNC glPauseTransformFeedback;
extern GLLOADER_API glResumeTransformFeedbackFUNC glResumeTransformFeedback;
extern GLLOADER_API glDrawTransformFeedbackFUNC glDrawTransformFeedback;

#endif

#ifdef GL_ARB_transform_feedback3

typedef void (GLLOADER_APIENTRY *glDrawTransformFeedbackStreamFUNC)(GLenum mode, GLuint id, GLuint stream);
typedef void (GLLOADER_APIENTRY *glBeginQueryIndexedFUNC)(GLenum target, GLuint index, GLuint id);
typedef void (GLLOADER_APIENTRY *glEndQueryIndexedFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glGetQueryIndexedivFUNC)(GLenum target, GLuint index, GLenum pname, GLint* params);

extern GLLOADER_API glDrawTransformFeedbackStreamFUNC glDrawTransformFeedbackStream;
extern GLLOADER_API glBeginQueryIndexedFUNC glBeginQueryIndexed;
extern GLLOADER_API glEndQueryIndexedFUNC glEndQueryIndexed;
extern GLLOADER_API glGetQueryIndexedivFUNC glGetQueryIndexediv;

#endif

#ifdef GL_ARB_transform_feedback_instanced

typedef void (GLLOADER_APIENTRY *glDrawTransformFeedbackInstancedFUNC)(GLenum mode, GLuint id, GLsizei instancecount);
typedef void (GLLOADER_APIENTRY *glDrawTransformFeedbackStreamInstancedFUNC)(GLenum mode, GLuint id, GLuint stream, GLsizei instancecount);

extern GLLOADER_API glDrawTransformFeedbackInstancedFUNC glDrawTransformFeedbackInstanced;
extern GLLOADER_API glDrawTransformFeedbackStreamInstancedFUNC glDrawTransformFeedbackStreamInstanced;

#endif

#ifdef GL_ARB_transpose_matrix

typedef void (GLLOADER_APIENTRY *glLoadTransposeMatrixfARBFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glLoadTransposeMatrixdARBFUNC)(const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glMultTransposeMatrixfARBFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMultTransposeMatrixdARBFUNC)(const GLdouble* m);

extern GLLOADER_API glLoadTransposeMatrixfARBFUNC glLoadTransposeMatrixfARB;
extern GLLOADER_API glLoadTransposeMatrixdARBFUNC glLoadTransposeMatrixdARB;
extern GLLOADER_API glMultTransposeMatrixfARBFUNC glMultTransposeMatrixfARB;
extern GLLOADER_API glMultTransposeMatrixdARBFUNC glMultTransposeMatrixdARB;

#endif

#ifdef GL_ARB_uniform_buffer_object

typedef void (GLLOADER_APIENTRY *glGetUniformIndicesFUNC)(GLuint program, GLsizei uniformCount, const GLchar** uniformNames, GLuint* uniformIndices);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformsivFUNC)(GLuint program, GLsizei uniformCount, const GLuint* uniformIndices, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformNameFUNC)(GLuint program, GLuint uniformIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformName);
typedef GLuint (GLLOADER_APIENTRY *glGetUniformBlockIndexFUNC)(GLuint program, const GLchar* uniformBlockName);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformBlockivFUNC)(GLuint program, GLuint uniformBlockIndex, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformBlockNameFUNC)(GLuint program, GLuint uniformBlockIndex, GLsizei bufSize, GLsizei* length, GLchar* uniformBlockName);
typedef void (GLLOADER_APIENTRY *glUniformBlockBindingFUNC)(GLuint program, GLuint uniformBlockIndex, GLuint uniformBlockBinding);

extern GLLOADER_API glGetUniformIndicesFUNC glGetUniformIndices;
extern GLLOADER_API glGetActiveUniformsivFUNC glGetActiveUniformsiv;
extern GLLOADER_API glGetActiveUniformNameFUNC glGetActiveUniformName;
extern GLLOADER_API glGetUniformBlockIndexFUNC glGetUniformBlockIndex;
extern GLLOADER_API glGetActiveUniformBlockivFUNC glGetActiveUniformBlockiv;
extern GLLOADER_API glGetActiveUniformBlockNameFUNC glGetActiveUniformBlockName;
extern GLLOADER_API glUniformBlockBindingFUNC glUniformBlockBinding;

#endif

#ifdef GL_ARB_vertex_array_object

typedef void (GLLOADER_APIENTRY *glBindVertexArrayFUNC)(GLuint array);
typedef void (GLLOADER_APIENTRY *glDeleteVertexArraysFUNC)(GLsizei n, const GLuint* arrays);
typedef void (GLLOADER_APIENTRY *glGenVertexArraysFUNC)(GLsizei n, GLuint* arrays);
typedef GLboolean (GLLOADER_APIENTRY *glIsVertexArrayFUNC)(GLuint array);

extern GLLOADER_API glBindVertexArrayFUNC glBindVertexArray;
extern GLLOADER_API glDeleteVertexArraysFUNC glDeleteVertexArrays;
extern GLLOADER_API glGenVertexArraysFUNC glGenVertexArrays;
extern GLLOADER_API glIsVertexArrayFUNC glIsVertexArray;

#endif

#ifdef GL_ARB_vertex_attrib_64bit

typedef void (GLLOADER_APIENTRY *glVertexAttribL1dFUNC)(GLuint index, GLdouble x);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2dFUNC)(GLuint index, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3dFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4dFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glVertexAttribL1dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribLPointerFUNC)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribLdvFUNC)(GLuint index, GLenum pname, GLdouble* params);

extern GLLOADER_API glVertexAttribL1dFUNC glVertexAttribL1d;
extern GLLOADER_API glVertexAttribL2dFUNC glVertexAttribL2d;
extern GLLOADER_API glVertexAttribL3dFUNC glVertexAttribL3d;
extern GLLOADER_API glVertexAttribL4dFUNC glVertexAttribL4d;
extern GLLOADER_API glVertexAttribL1dvFUNC glVertexAttribL1dv;
extern GLLOADER_API glVertexAttribL2dvFUNC glVertexAttribL2dv;
extern GLLOADER_API glVertexAttribL3dvFUNC glVertexAttribL3dv;
extern GLLOADER_API glVertexAttribL4dvFUNC glVertexAttribL4dv;
extern GLLOADER_API glVertexAttribLPointerFUNC glVertexAttribLPointer;
extern GLLOADER_API glGetVertexAttribLdvFUNC glGetVertexAttribLdv;

#endif

#ifdef GL_ARB_vertex_attrib_binding

typedef void (GLLOADER_APIENTRY *glBindVertexBufferFUNC)(GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glVertexAttribFormatFUNC)(GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexAttribIFormatFUNC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexAttribLFormatFUNC)(GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexAttribBindingFUNC)(GLuint attribindex, GLuint bindingindex);
typedef void (GLLOADER_APIENTRY *glVertexBindingDivisorFUNC)(GLuint bindingindex, GLuint divisor);
typedef void (GLLOADER_APIENTRY *glVertexArrayBindVertexBufferEXTFUNC)(GLuint vaobj, GLuint bindingindex, GLuint buffer, GLintptr offset, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexAttribFormatEXTFUNC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLboolean normalized, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexAttribIFormatEXTFUNC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexAttribLFormatEXTFUNC)(GLuint vaobj, GLuint attribindex, GLint size, GLenum type, GLuint relativeoffset);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexAttribBindingEXTFUNC)(GLuint vaobj, GLuint attribindex, GLuint bindingindex);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexBindingDivisorEXTFUNC)(GLuint vaobj, GLuint bindingindex, GLuint divisor);

extern GLLOADER_API glBindVertexBufferFUNC glBindVertexBuffer;
extern GLLOADER_API glVertexAttribFormatFUNC glVertexAttribFormat;
extern GLLOADER_API glVertexAttribIFormatFUNC glVertexAttribIFormat;
extern GLLOADER_API glVertexAttribLFormatFUNC glVertexAttribLFormat;
extern GLLOADER_API glVertexAttribBindingFUNC glVertexAttribBinding;
extern GLLOADER_API glVertexBindingDivisorFUNC glVertexBindingDivisor;
extern GLLOADER_API glVertexArrayBindVertexBufferEXTFUNC glVertexArrayBindVertexBufferEXT;
extern GLLOADER_API glVertexArrayVertexAttribFormatEXTFUNC glVertexArrayVertexAttribFormatEXT;
extern GLLOADER_API glVertexArrayVertexAttribIFormatEXTFUNC glVertexArrayVertexAttribIFormatEXT;
extern GLLOADER_API glVertexArrayVertexAttribLFormatEXTFUNC glVertexArrayVertexAttribLFormatEXT;
extern GLLOADER_API glVertexArrayVertexAttribBindingEXTFUNC glVertexArrayVertexAttribBindingEXT;
extern GLLOADER_API glVertexArrayVertexBindingDivisorEXTFUNC glVertexArrayVertexBindingDivisorEXT;

#endif

#ifdef GL_ARB_vertex_blend

typedef void (GLLOADER_APIENTRY *glWeightbvARBFUNC)(GLint size, GLbyte* weights);
typedef void (GLLOADER_APIENTRY *glWeightsvARBFUNC)(GLint size, GLshort* weights);
typedef void (GLLOADER_APIENTRY *glWeightivARBFUNC)(GLint size, GLint* weights);
typedef void (GLLOADER_APIENTRY *glWeightfvARBFUNC)(GLint size, GLfloat* weights);
typedef void (GLLOADER_APIENTRY *glWeightdvARBFUNC)(GLint size, GLdouble* weights);
typedef void (GLLOADER_APIENTRY *glWeightubvARBFUNC)(GLint size, GLubyte* weights);
typedef void (GLLOADER_APIENTRY *glWeightusvARBFUNC)(GLint size, GLushort* weights);
typedef void (GLLOADER_APIENTRY *glWeightuivARBFUNC)(GLint size, GLuint* weights);
typedef void (GLLOADER_APIENTRY *glWeightPointerARBFUNC)(GLint size, GLenum type, GLsizei stride, GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glVertexBlendARBFUNC)(GLint count);

extern GLLOADER_API glWeightbvARBFUNC glWeightbvARB;
extern GLLOADER_API glWeightsvARBFUNC glWeightsvARB;
extern GLLOADER_API glWeightivARBFUNC glWeightivARB;
extern GLLOADER_API glWeightfvARBFUNC glWeightfvARB;
extern GLLOADER_API glWeightdvARBFUNC glWeightdvARB;
extern GLLOADER_API glWeightubvARBFUNC glWeightubvARB;
extern GLLOADER_API glWeightusvARBFUNC glWeightusvARB;
extern GLLOADER_API glWeightuivARBFUNC glWeightuivARB;
extern GLLOADER_API glWeightPointerARBFUNC glWeightPointerARB;
extern GLLOADER_API glVertexBlendARBFUNC glVertexBlendARB;

#endif

#ifdef GL_ARB_vertex_buffer_object

typedef void (GLLOADER_APIENTRY *glBindBufferARBFUNC)(GLenum target, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glDeleteBuffersARBFUNC)(GLsizei n, const GLuint* buffers);
typedef void (GLLOADER_APIENTRY *glGenBuffersARBFUNC)(GLsizei n, GLuint* buffers);
typedef GLboolean (GLLOADER_APIENTRY *glIsBufferARBFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glBufferDataARBFUNC)(GLenum target, GLsizeiptrARB size, const GLvoid* data, GLenum usage);
typedef void (GLLOADER_APIENTRY *glBufferSubDataARBFUNC)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGetBufferSubDataARBFUNC)(GLenum target, GLintptrARB offset, GLsizeiptrARB size, GLvoid* data);
typedef GLvoid* (GLLOADER_APIENTRY *glMapBufferARBFUNC)(GLenum target, GLenum access);
typedef GLboolean (GLLOADER_APIENTRY *glUnmapBufferARBFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glGetBufferParameterivARBFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetBufferPointervARBFUNC)(GLenum target, GLenum pname, GLvoid** params);

extern GLLOADER_API glBindBufferARBFUNC glBindBufferARB;
extern GLLOADER_API glDeleteBuffersARBFUNC glDeleteBuffersARB;
extern GLLOADER_API glGenBuffersARBFUNC glGenBuffersARB;
extern GLLOADER_API glIsBufferARBFUNC glIsBufferARB;
extern GLLOADER_API glBufferDataARBFUNC glBufferDataARB;
extern GLLOADER_API glBufferSubDataARBFUNC glBufferSubDataARB;
extern GLLOADER_API glGetBufferSubDataARBFUNC glGetBufferSubDataARB;
extern GLLOADER_API glMapBufferARBFUNC glMapBufferARB;
extern GLLOADER_API glUnmapBufferARBFUNC glUnmapBufferARB;
extern GLLOADER_API glGetBufferParameterivARBFUNC glGetBufferParameterivARB;
extern GLLOADER_API glGetBufferPointervARBFUNC glGetBufferPointervARB;

#endif

#ifdef GL_ARB_vertex_program

typedef void (GLLOADER_APIENTRY *glVertexAttrib1dARBFUNC)(GLuint index, GLdouble x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1dvARBFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fARBFUNC)(GLuint index, GLfloat x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fvARBFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1sARBFUNC)(GLuint index, GLshort x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1svARBFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2dARBFUNC)(GLuint index, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2dvARBFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fARBFUNC)(GLuint index, GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fvARBFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2sARBFUNC)(GLuint index, GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2svARBFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3dARBFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3dvARBFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fARBFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fvARBFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3sARBFUNC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3svARBFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NbvARBFUNC)(GLuint index, const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NivARBFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NsvARBFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NubARBFUNC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NubvARBFUNC)(GLuint index, const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NuivARBFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NusvARBFUNC)(GLuint index, const GLushort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4bvARBFUNC)(GLuint index, const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4dARBFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4dvARBFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fARBFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fvARBFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4ivARBFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4sARBFUNC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4svARBFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4ubvARBFUNC)(GLuint index, const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4uivARBFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4usvARBFUNC)(GLuint index, const GLushort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribPointerARBFUNC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glEnableVertexAttribArrayARBFUNC)(GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableVertexAttribArrayARBFUNC)(GLuint index);
typedef void (GLLOADER_APIENTRY *glProgramStringARBFUNC)(GLenum target, GLenum format, GLsizei len, const GLvoid* string);
typedef void (GLLOADER_APIENTRY *glBindProgramARBFUNC)(GLenum target, GLuint program);
typedef void (GLLOADER_APIENTRY *glDeleteProgramsARBFUNC)(GLsizei n, const GLuint* programs);
typedef void (GLLOADER_APIENTRY *glGenProgramsARBFUNC)(GLsizei n, GLuint* programs);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameter4dARBFUNC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameter4dvARBFUNC)(GLenum target, GLuint index, const GLdouble* params);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameter4fARBFUNC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameter4fvARBFUNC)(GLenum target, GLuint index, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameter4dARBFUNC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameter4dvARBFUNC)(GLenum target, GLuint index, const GLdouble* params);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameter4fARBFUNC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameter4fvARBFUNC)(GLenum target, GLuint index, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetProgramEnvParameterdvARBFUNC)(GLenum target, GLuint index, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetProgramEnvParameterfvARBFUNC)(GLenum target, GLuint index, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetProgramLocalParameterdvARBFUNC)(GLenum target, GLuint index, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetProgramLocalParameterfvARBFUNC)(GLenum target, GLuint index, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetProgramivARBFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramStringARBFUNC)(GLenum target, GLenum pname, GLvoid* string);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribdvARBFUNC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribfvARBFUNC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribivARBFUNC)(GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribPointervARBFUNC)(GLuint index, GLenum pname, GLvoid** pointer);
typedef GLboolean (GLLOADER_APIENTRY *glIsProgramARBFUNC)(GLuint program);

extern GLLOADER_API glVertexAttrib1dARBFUNC glVertexAttrib1dARB;
extern GLLOADER_API glVertexAttrib1dvARBFUNC glVertexAttrib1dvARB;
extern GLLOADER_API glVertexAttrib1fARBFUNC glVertexAttrib1fARB;
extern GLLOADER_API glVertexAttrib1fvARBFUNC glVertexAttrib1fvARB;
extern GLLOADER_API glVertexAttrib1sARBFUNC glVertexAttrib1sARB;
extern GLLOADER_API glVertexAttrib1svARBFUNC glVertexAttrib1svARB;
extern GLLOADER_API glVertexAttrib2dARBFUNC glVertexAttrib2dARB;
extern GLLOADER_API glVertexAttrib2dvARBFUNC glVertexAttrib2dvARB;
extern GLLOADER_API glVertexAttrib2fARBFUNC glVertexAttrib2fARB;
extern GLLOADER_API glVertexAttrib2fvARBFUNC glVertexAttrib2fvARB;
extern GLLOADER_API glVertexAttrib2sARBFUNC glVertexAttrib2sARB;
extern GLLOADER_API glVertexAttrib2svARBFUNC glVertexAttrib2svARB;
extern GLLOADER_API glVertexAttrib3dARBFUNC glVertexAttrib3dARB;
extern GLLOADER_API glVertexAttrib3dvARBFUNC glVertexAttrib3dvARB;
extern GLLOADER_API glVertexAttrib3fARBFUNC glVertexAttrib3fARB;
extern GLLOADER_API glVertexAttrib3fvARBFUNC glVertexAttrib3fvARB;
extern GLLOADER_API glVertexAttrib3sARBFUNC glVertexAttrib3sARB;
extern GLLOADER_API glVertexAttrib3svARBFUNC glVertexAttrib3svARB;
extern GLLOADER_API glVertexAttrib4NbvARBFUNC glVertexAttrib4NbvARB;
extern GLLOADER_API glVertexAttrib4NivARBFUNC glVertexAttrib4NivARB;
extern GLLOADER_API glVertexAttrib4NsvARBFUNC glVertexAttrib4NsvARB;
extern GLLOADER_API glVertexAttrib4NubARBFUNC glVertexAttrib4NubARB;
extern GLLOADER_API glVertexAttrib4NubvARBFUNC glVertexAttrib4NubvARB;
extern GLLOADER_API glVertexAttrib4NuivARBFUNC glVertexAttrib4NuivARB;
extern GLLOADER_API glVertexAttrib4NusvARBFUNC glVertexAttrib4NusvARB;
extern GLLOADER_API glVertexAttrib4bvARBFUNC glVertexAttrib4bvARB;
extern GLLOADER_API glVertexAttrib4dARBFUNC glVertexAttrib4dARB;
extern GLLOADER_API glVertexAttrib4dvARBFUNC glVertexAttrib4dvARB;
extern GLLOADER_API glVertexAttrib4fARBFUNC glVertexAttrib4fARB;
extern GLLOADER_API glVertexAttrib4fvARBFUNC glVertexAttrib4fvARB;
extern GLLOADER_API glVertexAttrib4ivARBFUNC glVertexAttrib4ivARB;
extern GLLOADER_API glVertexAttrib4sARBFUNC glVertexAttrib4sARB;
extern GLLOADER_API glVertexAttrib4svARBFUNC glVertexAttrib4svARB;
extern GLLOADER_API glVertexAttrib4ubvARBFUNC glVertexAttrib4ubvARB;
extern GLLOADER_API glVertexAttrib4uivARBFUNC glVertexAttrib4uivARB;
extern GLLOADER_API glVertexAttrib4usvARBFUNC glVertexAttrib4usvARB;
extern GLLOADER_API glVertexAttribPointerARBFUNC glVertexAttribPointerARB;
extern GLLOADER_API glEnableVertexAttribArrayARBFUNC glEnableVertexAttribArrayARB;
extern GLLOADER_API glDisableVertexAttribArrayARBFUNC glDisableVertexAttribArrayARB;
extern GLLOADER_API glProgramStringARBFUNC glProgramStringARB;
extern GLLOADER_API glBindProgramARBFUNC glBindProgramARB;
extern GLLOADER_API glDeleteProgramsARBFUNC glDeleteProgramsARB;
extern GLLOADER_API glGenProgramsARBFUNC glGenProgramsARB;
extern GLLOADER_API glProgramEnvParameter4dARBFUNC glProgramEnvParameter4dARB;
extern GLLOADER_API glProgramEnvParameter4dvARBFUNC glProgramEnvParameter4dvARB;
extern GLLOADER_API glProgramEnvParameter4fARBFUNC glProgramEnvParameter4fARB;
extern GLLOADER_API glProgramEnvParameter4fvARBFUNC glProgramEnvParameter4fvARB;
extern GLLOADER_API glProgramLocalParameter4dARBFUNC glProgramLocalParameter4dARB;
extern GLLOADER_API glProgramLocalParameter4dvARBFUNC glProgramLocalParameter4dvARB;
extern GLLOADER_API glProgramLocalParameter4fARBFUNC glProgramLocalParameter4fARB;
extern GLLOADER_API glProgramLocalParameter4fvARBFUNC glProgramLocalParameter4fvARB;
extern GLLOADER_API glGetProgramEnvParameterdvARBFUNC glGetProgramEnvParameterdvARB;
extern GLLOADER_API glGetProgramEnvParameterfvARBFUNC glGetProgramEnvParameterfvARB;
extern GLLOADER_API glGetProgramLocalParameterdvARBFUNC glGetProgramLocalParameterdvARB;
extern GLLOADER_API glGetProgramLocalParameterfvARBFUNC glGetProgramLocalParameterfvARB;
extern GLLOADER_API glGetProgramivARBFUNC glGetProgramivARB;
extern GLLOADER_API glGetProgramStringARBFUNC glGetProgramStringARB;
extern GLLOADER_API glGetVertexAttribdvARBFUNC glGetVertexAttribdvARB;
extern GLLOADER_API glGetVertexAttribfvARBFUNC glGetVertexAttribfvARB;
extern GLLOADER_API glGetVertexAttribivARBFUNC glGetVertexAttribivARB;
extern GLLOADER_API glGetVertexAttribPointervARBFUNC glGetVertexAttribPointervARB;
extern GLLOADER_API glIsProgramARBFUNC glIsProgramARB;

#endif

#ifdef GL_ARB_vertex_shader

typedef void (GLLOADER_APIENTRY *glBindAttribLocationARBFUNC)(GLhandleARB programObj, GLuint index, const GLcharARB* name);
typedef void (GLLOADER_APIENTRY *glGetActiveAttribARBFUNC)(GLhandleARB programObj, GLuint index, GLsizei maxLength, GLsizei* length, GLint* size, GLenum* type, GLcharARB* name);
typedef GLint (GLLOADER_APIENTRY *glGetAttribLocationARBFUNC)(GLhandleARB programObj, const GLcharARB* name);

extern GLLOADER_API glBindAttribLocationARBFUNC glBindAttribLocationARB;
extern GLLOADER_API glGetActiveAttribARBFUNC glGetActiveAttribARB;
extern GLLOADER_API glGetAttribLocationARBFUNC glGetAttribLocationARB;

#endif

#ifdef GL_ARB_vertex_type_2_10_10_10_rev

typedef void (GLLOADER_APIENTRY *glVertexP2uiFUNC)(GLenum type, GLuint value);
typedef void (GLLOADER_APIENTRY *glVertexP2uivFUNC)(GLenum type, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glVertexP3uiFUNC)(GLenum type, GLuint value);
typedef void (GLLOADER_APIENTRY *glVertexP3uivFUNC)(GLenum type, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glVertexP4uiFUNC)(GLenum type, GLuint value);
typedef void (GLLOADER_APIENTRY *glVertexP4uivFUNC)(GLenum type, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glTexCoordP1uiFUNC)(GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glTexCoordP1uivFUNC)(GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glTexCoordP2uiFUNC)(GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glTexCoordP2uivFUNC)(GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glTexCoordP3uiFUNC)(GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glTexCoordP3uivFUNC)(GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glTexCoordP4uiFUNC)(GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glTexCoordP4uivFUNC)(GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP1uiFUNC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP1uivFUNC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP2uiFUNC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP2uivFUNC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP3uiFUNC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP3uivFUNC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP4uiFUNC)(GLenum texture, GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordP4uivFUNC)(GLenum texture, GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glNormalP3uiFUNC)(GLenum type, GLuint coords);
typedef void (GLLOADER_APIENTRY *glNormalP3uivFUNC)(GLenum type, const GLuint* coords);
typedef void (GLLOADER_APIENTRY *glColorP3uiFUNC)(GLenum type, GLuint color);
typedef void (GLLOADER_APIENTRY *glColorP3uivFUNC)(GLenum type, const GLuint* color);
typedef void (GLLOADER_APIENTRY *glColorP4uiFUNC)(GLenum type, GLuint color);
typedef void (GLLOADER_APIENTRY *glColorP4uivFUNC)(GLenum type, const GLuint* color);
typedef void (GLLOADER_APIENTRY *glSecondaryColorP3uiFUNC)(GLenum type, GLuint color);
typedef void (GLLOADER_APIENTRY *glSecondaryColorP3uivFUNC)(GLenum type, const GLuint* color);
typedef void (GLLOADER_APIENTRY *glVertexAttribP1uiFUNC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLLOADER_APIENTRY *glVertexAttribP1uivFUNC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glVertexAttribP2uiFUNC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLLOADER_APIENTRY *glVertexAttribP2uivFUNC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glVertexAttribP3uiFUNC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLLOADER_APIENTRY *glVertexAttribP3uivFUNC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glVertexAttribP4uiFUNC)(GLuint index, GLenum type, GLboolean normalized, GLuint value);
typedef void (GLLOADER_APIENTRY *glVertexAttribP4uivFUNC)(GLuint index, GLenum type, GLboolean normalized, const GLuint* value);

extern GLLOADER_API glVertexP2uiFUNC glVertexP2ui;
extern GLLOADER_API glVertexP2uivFUNC glVertexP2uiv;
extern GLLOADER_API glVertexP3uiFUNC glVertexP3ui;
extern GLLOADER_API glVertexP3uivFUNC glVertexP3uiv;
extern GLLOADER_API glVertexP4uiFUNC glVertexP4ui;
extern GLLOADER_API glVertexP4uivFUNC glVertexP4uiv;
extern GLLOADER_API glTexCoordP1uiFUNC glTexCoordP1ui;
extern GLLOADER_API glTexCoordP1uivFUNC glTexCoordP1uiv;
extern GLLOADER_API glTexCoordP2uiFUNC glTexCoordP2ui;
extern GLLOADER_API glTexCoordP2uivFUNC glTexCoordP2uiv;
extern GLLOADER_API glTexCoordP3uiFUNC glTexCoordP3ui;
extern GLLOADER_API glTexCoordP3uivFUNC glTexCoordP3uiv;
extern GLLOADER_API glTexCoordP4uiFUNC glTexCoordP4ui;
extern GLLOADER_API glTexCoordP4uivFUNC glTexCoordP4uiv;
extern GLLOADER_API glMultiTexCoordP1uiFUNC glMultiTexCoordP1ui;
extern GLLOADER_API glMultiTexCoordP1uivFUNC glMultiTexCoordP1uiv;
extern GLLOADER_API glMultiTexCoordP2uiFUNC glMultiTexCoordP2ui;
extern GLLOADER_API glMultiTexCoordP2uivFUNC glMultiTexCoordP2uiv;
extern GLLOADER_API glMultiTexCoordP3uiFUNC glMultiTexCoordP3ui;
extern GLLOADER_API glMultiTexCoordP3uivFUNC glMultiTexCoordP3uiv;
extern GLLOADER_API glMultiTexCoordP4uiFUNC glMultiTexCoordP4ui;
extern GLLOADER_API glMultiTexCoordP4uivFUNC glMultiTexCoordP4uiv;
extern GLLOADER_API glNormalP3uiFUNC glNormalP3ui;
extern GLLOADER_API glNormalP3uivFUNC glNormalP3uiv;
extern GLLOADER_API glColorP3uiFUNC glColorP3ui;
extern GLLOADER_API glColorP3uivFUNC glColorP3uiv;
extern GLLOADER_API glColorP4uiFUNC glColorP4ui;
extern GLLOADER_API glColorP4uivFUNC glColorP4uiv;
extern GLLOADER_API glSecondaryColorP3uiFUNC glSecondaryColorP3ui;
extern GLLOADER_API glSecondaryColorP3uivFUNC glSecondaryColorP3uiv;
extern GLLOADER_API glVertexAttribP1uiFUNC glVertexAttribP1ui;
extern GLLOADER_API glVertexAttribP1uivFUNC glVertexAttribP1uiv;
extern GLLOADER_API glVertexAttribP2uiFUNC glVertexAttribP2ui;
extern GLLOADER_API glVertexAttribP2uivFUNC glVertexAttribP2uiv;
extern GLLOADER_API glVertexAttribP3uiFUNC glVertexAttribP3ui;
extern GLLOADER_API glVertexAttribP3uivFUNC glVertexAttribP3uiv;
extern GLLOADER_API glVertexAttribP4uiFUNC glVertexAttribP4ui;
extern GLLOADER_API glVertexAttribP4uivFUNC glVertexAttribP4uiv;

#endif

#ifdef GL_ARB_viewport_array

typedef void (GLLOADER_APIENTRY *glViewportArrayvFUNC)(GLuint first, GLsizei count, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glViewportIndexedfFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GLLOADER_APIENTRY *glViewportIndexedfvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glScissorArrayvFUNC)(GLuint first, GLsizei count, const GLint* v);
typedef void (GLLOADER_APIENTRY *glScissorIndexedFUNC)(GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glScissorIndexedvFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glDepthRangeArrayvFUNC)(GLuint first, GLsizei count, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glDepthRangeIndexedFUNC)(GLuint index, GLdouble n, GLdouble f);
typedef void (GLLOADER_APIENTRY *glGetFloati_vFUNC)(GLenum target, GLuint index, GLfloat* data);
typedef void (GLLOADER_APIENTRY *glGetDoublei_vFUNC)(GLenum target, GLuint index, GLdouble* data);

extern GLLOADER_API glViewportArrayvFUNC glViewportArrayv;
extern GLLOADER_API glViewportIndexedfFUNC glViewportIndexedf;
extern GLLOADER_API glViewportIndexedfvFUNC glViewportIndexedfv;
extern GLLOADER_API glScissorArrayvFUNC glScissorArrayv;
extern GLLOADER_API glScissorIndexedFUNC glScissorIndexed;
extern GLLOADER_API glScissorIndexedvFUNC glScissorIndexedv;
extern GLLOADER_API glDepthRangeArrayvFUNC glDepthRangeArrayv;
extern GLLOADER_API glDepthRangeIndexedFUNC glDepthRangeIndexed;
extern GLLOADER_API glGetFloati_vFUNC glGetFloati_v;
extern GLLOADER_API glGetDoublei_vFUNC glGetDoublei_v;

#endif

#ifdef GL_ARB_window_pos

typedef void (GLLOADER_APIENTRY *glWindowPos2dARBFUNC)(GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glWindowPos2dvARBFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2fARBFUNC)(GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glWindowPos2fvARBFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2iARBFUNC)(GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glWindowPos2ivARBFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2sARBFUNC)(GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glWindowPos2svARBFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3dARBFUNC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glWindowPos3dvARBFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3fARBFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glWindowPos3fvARBFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3iARBFUNC)(GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glWindowPos3ivARBFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3sARBFUNC)(GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glWindowPos3svARBFUNC)(const GLshort* v);

extern GLLOADER_API glWindowPos2dARBFUNC glWindowPos2dARB;
extern GLLOADER_API glWindowPos2dvARBFUNC glWindowPos2dvARB;
extern GLLOADER_API glWindowPos2fARBFUNC glWindowPos2fARB;
extern GLLOADER_API glWindowPos2fvARBFUNC glWindowPos2fvARB;
extern GLLOADER_API glWindowPos2iARBFUNC glWindowPos2iARB;
extern GLLOADER_API glWindowPos2ivARBFUNC glWindowPos2ivARB;
extern GLLOADER_API glWindowPos2sARBFUNC glWindowPos2sARB;
extern GLLOADER_API glWindowPos2svARBFUNC glWindowPos2svARB;
extern GLLOADER_API glWindowPos3dARBFUNC glWindowPos3dARB;
extern GLLOADER_API glWindowPos3dvARBFUNC glWindowPos3dvARB;
extern GLLOADER_API glWindowPos3fARBFUNC glWindowPos3fARB;
extern GLLOADER_API glWindowPos3fvARBFUNC glWindowPos3fvARB;
extern GLLOADER_API glWindowPos3iARBFUNC glWindowPos3iARB;
extern GLLOADER_API glWindowPos3ivARBFUNC glWindowPos3ivARB;
extern GLLOADER_API glWindowPos3sARBFUNC glWindowPos3sARB;
extern GLLOADER_API glWindowPos3svARBFUNC glWindowPos3svARB;

#endif

#ifdef GL_ATI_draw_buffers

typedef void (GLLOADER_APIENTRY *glDrawBuffersATIFUNC)(GLsizei n, const GLenum* bufs);

extern GLLOADER_API glDrawBuffersATIFUNC glDrawBuffersATI;

#endif

#ifdef GL_ATI_element_array

typedef void (GLLOADER_APIENTRY *glElementPointerATIFUNC)(GLenum type, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glDrawElementArrayATIFUNC)(GLenum mode, GLsizei count);
typedef void (GLLOADER_APIENTRY *glDrawRangeElementArrayATIFUNC)(GLenum mode, GLuint start, GLuint end, GLsizei count);

extern GLLOADER_API glElementPointerATIFUNC glElementPointerATI;
extern GLLOADER_API glDrawElementArrayATIFUNC glDrawElementArrayATI;
extern GLLOADER_API glDrawRangeElementArrayATIFUNC glDrawRangeElementArrayATI;

#endif

#ifdef GL_ATI_envmap_bumpmap

typedef void (GLLOADER_APIENTRY *glTexBumpParameterivATIFUNC)(GLenum pname, const GLint* param);
typedef void (GLLOADER_APIENTRY *glTexBumpParameterfvATIFUNC)(GLenum pname, const GLfloat* param);
typedef void (GLLOADER_APIENTRY *glGetTexBumpParameterivATIFUNC)(GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetTexBumpParameterfvATIFUNC)(GLenum pname, GLfloat* param);

extern GLLOADER_API glTexBumpParameterivATIFUNC glTexBumpParameterivATI;
extern GLLOADER_API glTexBumpParameterfvATIFUNC glTexBumpParameterfvATI;
extern GLLOADER_API glGetTexBumpParameterivATIFUNC glGetTexBumpParameterivATI;
extern GLLOADER_API glGetTexBumpParameterfvATIFUNC glGetTexBumpParameterfvATI;

#endif

#ifdef GL_ATI_fragment_shader

typedef GLuint (GLLOADER_APIENTRY *glGenFragmentShadersATIFUNC)(GLuint range);
typedef void (GLLOADER_APIENTRY *glBindFragmentShaderATIFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glDeleteFragmentShaderATIFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glBeginFragmentShaderATIFUNC)();
typedef void (GLLOADER_APIENTRY *glEndFragmentShaderATIFUNC)();
typedef void (GLLOADER_APIENTRY *glPassTexCoordATIFUNC)(GLuint dst, GLuint coord, GLenum swizzle);
typedef void (GLLOADER_APIENTRY *glSampleMapATIFUNC)(GLuint dst, GLuint interp, GLenum swizzle);
typedef void (GLLOADER_APIENTRY *glColorFragmentOp1ATIFUNC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void (GLLOADER_APIENTRY *glColorFragmentOp2ATIFUNC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void (GLLOADER_APIENTRY *glColorFragmentOp3ATIFUNC)(GLenum op, GLuint dst, GLuint dstMask, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void (GLLOADER_APIENTRY *glAlphaFragmentOp1ATIFUNC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod);
typedef void (GLLOADER_APIENTRY *glAlphaFragmentOp2ATIFUNC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod);
typedef void (GLLOADER_APIENTRY *glAlphaFragmentOp3ATIFUNC)(GLenum op, GLuint dst, GLuint dstMod, GLuint arg1, GLuint arg1Rep, GLuint arg1Mod, GLuint arg2, GLuint arg2Rep, GLuint arg2Mod, GLuint arg3, GLuint arg3Rep, GLuint arg3Mod);
typedef void (GLLOADER_APIENTRY *glSetFragmentShaderConstantATIFUNC)(GLuint dst, const GLfloat* value);

extern GLLOADER_API glGenFragmentShadersATIFUNC glGenFragmentShadersATI;
extern GLLOADER_API glBindFragmentShaderATIFUNC glBindFragmentShaderATI;
extern GLLOADER_API glDeleteFragmentShaderATIFUNC glDeleteFragmentShaderATI;
extern GLLOADER_API glBeginFragmentShaderATIFUNC glBeginFragmentShaderATI;
extern GLLOADER_API glEndFragmentShaderATIFUNC glEndFragmentShaderATI;
extern GLLOADER_API glPassTexCoordATIFUNC glPassTexCoordATI;
extern GLLOADER_API glSampleMapATIFUNC glSampleMapATI;
extern GLLOADER_API glColorFragmentOp1ATIFUNC glColorFragmentOp1ATI;
extern GLLOADER_API glColorFragmentOp2ATIFUNC glColorFragmentOp2ATI;
extern GLLOADER_API glColorFragmentOp3ATIFUNC glColorFragmentOp3ATI;
extern GLLOADER_API glAlphaFragmentOp1ATIFUNC glAlphaFragmentOp1ATI;
extern GLLOADER_API glAlphaFragmentOp2ATIFUNC glAlphaFragmentOp2ATI;
extern GLLOADER_API glAlphaFragmentOp3ATIFUNC glAlphaFragmentOp3ATI;
extern GLLOADER_API glSetFragmentShaderConstantATIFUNC glSetFragmentShaderConstantATI;

#endif

#ifdef GL_ATI_map_object_buffer

typedef GLvoid* (GLLOADER_APIENTRY *glMapObjectBufferATIFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glUnmapObjectBufferATIFUNC)(GLuint buffer);

extern GLLOADER_API glMapObjectBufferATIFUNC glMapObjectBufferATI;
extern GLLOADER_API glUnmapObjectBufferATIFUNC glUnmapObjectBufferATI;

#endif

#ifdef GL_ATI_pn_triangles

typedef void (GLLOADER_APIENTRY *glPNTrianglesiATIFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glPNTrianglesfATIFUNC)(GLenum pname, GLfloat param);

extern GLLOADER_API glPNTrianglesiATIFUNC glPNTrianglesiATI;
extern GLLOADER_API glPNTrianglesfATIFUNC glPNTrianglesfATI;

#endif

#ifdef GL_ATI_separate_stencil

typedef void (GLLOADER_APIENTRY *glStencilOpSeparateATIFUNC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (GLLOADER_APIENTRY *glStencilFuncSeparateATIFUNC)(GLenum frontfunc, GLenum backfunc, GLint ref, GLuint mask);

extern GLLOADER_API glStencilOpSeparateATIFUNC glStencilOpSeparateATI;
extern GLLOADER_API glStencilFuncSeparateATIFUNC glStencilFuncSeparateATI;

#endif

#ifdef GL_ATI_vertex_array_object

typedef GLuint (GLLOADER_APIENTRY *glNewObjectBufferATIFUNC)(GLsizei size, const GLvoid* pointer, GLenum usage);
typedef GLboolean (GLLOADER_APIENTRY *glIsObjectBufferATIFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glUpdateObjectBufferATIFUNC)(GLuint buffer, GLuint offset, GLsizei size, const GLvoid* pointer, GLenum preserve);
typedef void (GLLOADER_APIENTRY *glGetObjectBufferfvATIFUNC)(GLuint buffer, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetObjectBufferivATIFUNC)(GLuint buffer, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glFreeObjectBufferATIFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glArrayObjectATIFUNC)(GLenum array, GLint size, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
typedef void (GLLOADER_APIENTRY *glGetArrayObjectfvATIFUNC)(GLenum array, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetArrayObjectivATIFUNC)(GLenum array, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glVariantArrayObjectATIFUNC)(GLuint id, GLenum type, GLsizei stride, GLuint buffer, GLuint offset);
typedef void (GLLOADER_APIENTRY *glGetVariantArrayObjectfvATIFUNC)(GLuint id, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetVariantArrayObjectivATIFUNC)(GLuint id, GLenum pname, GLint* params);

extern GLLOADER_API glNewObjectBufferATIFUNC glNewObjectBufferATI;
extern GLLOADER_API glIsObjectBufferATIFUNC glIsObjectBufferATI;
extern GLLOADER_API glUpdateObjectBufferATIFUNC glUpdateObjectBufferATI;
extern GLLOADER_API glGetObjectBufferfvATIFUNC glGetObjectBufferfvATI;
extern GLLOADER_API glGetObjectBufferivATIFUNC glGetObjectBufferivATI;
extern GLLOADER_API glFreeObjectBufferATIFUNC glFreeObjectBufferATI;
extern GLLOADER_API glArrayObjectATIFUNC glArrayObjectATI;
extern GLLOADER_API glGetArrayObjectfvATIFUNC glGetArrayObjectfvATI;
extern GLLOADER_API glGetArrayObjectivATIFUNC glGetArrayObjectivATI;
extern GLLOADER_API glVariantArrayObjectATIFUNC glVariantArrayObjectATI;
extern GLLOADER_API glGetVariantArrayObjectfvATIFUNC glGetVariantArrayObjectfvATI;
extern GLLOADER_API glGetVariantArrayObjectivATIFUNC glGetVariantArrayObjectivATI;

#endif

#ifdef GL_ATI_vertex_attrib_array_object

typedef void (GLLOADER_APIENTRY *glVertexAttribArrayObjectATIFUNC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLuint buffer, GLuint offset);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribArrayObjectfvATIFUNC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribArrayObjectivATIFUNC)(GLuint index, GLenum pname, GLint* params);

extern GLLOADER_API glVertexAttribArrayObjectATIFUNC glVertexAttribArrayObjectATI;
extern GLLOADER_API glGetVertexAttribArrayObjectfvATIFUNC glGetVertexAttribArrayObjectfvATI;
extern GLLOADER_API glGetVertexAttribArrayObjectivATIFUNC glGetVertexAttribArrayObjectivATI;

#endif

#ifdef GL_ATI_vertex_streams

typedef void (GLLOADER_APIENTRY *glVertexStream1sATIFUNC)(GLenum stream, GLshort x);
typedef void (GLLOADER_APIENTRY *glVertexStream1svATIFUNC)(GLenum stream, const GLshort* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream1iATIFUNC)(GLenum stream, GLint x);
typedef void (GLLOADER_APIENTRY *glVertexStream1ivATIFUNC)(GLenum stream, const GLint* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream1fATIFUNC)(GLenum stream, GLfloat x);
typedef void (GLLOADER_APIENTRY *glVertexStream1fvATIFUNC)(GLenum stream, const GLfloat* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream1dATIFUNC)(GLenum stream, GLdouble x);
typedef void (GLLOADER_APIENTRY *glVertexStream1dvATIFUNC)(GLenum stream, const GLdouble* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream2sATIFUNC)(GLenum stream, GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glVertexStream2svATIFUNC)(GLenum stream, const GLshort* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream2iATIFUNC)(GLenum stream, GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glVertexStream2ivATIFUNC)(GLenum stream, const GLint* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream2fATIFUNC)(GLenum stream, GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glVertexStream2fvATIFUNC)(GLenum stream, const GLfloat* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream2dATIFUNC)(GLenum stream, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glVertexStream2dvATIFUNC)(GLenum stream, const GLdouble* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream3sATIFUNC)(GLenum stream, GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glVertexStream3svATIFUNC)(GLenum stream, const GLshort* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream3iATIFUNC)(GLenum stream, GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glVertexStream3ivATIFUNC)(GLenum stream, const GLint* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream3fATIFUNC)(GLenum stream, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glVertexStream3fvATIFUNC)(GLenum stream, const GLfloat* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream3dATIFUNC)(GLenum stream, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glVertexStream3dvATIFUNC)(GLenum stream, const GLdouble* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream4sATIFUNC)(GLenum stream, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLLOADER_APIENTRY *glVertexStream4svATIFUNC)(GLenum stream, const GLshort* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream4iATIFUNC)(GLenum stream, GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glVertexStream4ivATIFUNC)(GLenum stream, const GLint* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream4fATIFUNC)(GLenum stream, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glVertexStream4fvATIFUNC)(GLenum stream, const GLfloat* coords);
typedef void (GLLOADER_APIENTRY *glVertexStream4dATIFUNC)(GLenum stream, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glVertexStream4dvATIFUNC)(GLenum stream, const GLdouble* coords);
typedef void (GLLOADER_APIENTRY *glNormalStream3bATIFUNC)(GLenum stream, GLbyte nx, GLbyte ny, GLbyte nz);
typedef void (GLLOADER_APIENTRY *glNormalStream3bvATIFUNC)(GLenum stream, const GLbyte* coords);
typedef void (GLLOADER_APIENTRY *glNormalStream3sATIFUNC)(GLenum stream, GLshort nx, GLshort ny, GLshort nz);
typedef void (GLLOADER_APIENTRY *glNormalStream3svATIFUNC)(GLenum stream, const GLshort* coords);
typedef void (GLLOADER_APIENTRY *glNormalStream3iATIFUNC)(GLenum stream, GLint nx, GLint ny, GLint nz);
typedef void (GLLOADER_APIENTRY *glNormalStream3ivATIFUNC)(GLenum stream, const GLint* coords);
typedef void (GLLOADER_APIENTRY *glNormalStream3fATIFUNC)(GLenum stream, GLfloat nx, GLfloat ny, GLfloat nz);
typedef void (GLLOADER_APIENTRY *glNormalStream3fvATIFUNC)(GLenum stream, const GLfloat* coords);
typedef void (GLLOADER_APIENTRY *glNormalStream3dATIFUNC)(GLenum stream, GLdouble nx, GLdouble ny, GLdouble nz);
typedef void (GLLOADER_APIENTRY *glNormalStream3dvATIFUNC)(GLenum stream, const GLdouble* coords);
typedef void (GLLOADER_APIENTRY *glClientActiveVertexStreamATIFUNC)(GLenum stream);
typedef void (GLLOADER_APIENTRY *glVertexBlendEnviATIFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glVertexBlendEnvfATIFUNC)(GLenum pname, GLfloat param);

extern GLLOADER_API glVertexStream1sATIFUNC glVertexStream1sATI;
extern GLLOADER_API glVertexStream1svATIFUNC glVertexStream1svATI;
extern GLLOADER_API glVertexStream1iATIFUNC glVertexStream1iATI;
extern GLLOADER_API glVertexStream1ivATIFUNC glVertexStream1ivATI;
extern GLLOADER_API glVertexStream1fATIFUNC glVertexStream1fATI;
extern GLLOADER_API glVertexStream1fvATIFUNC glVertexStream1fvATI;
extern GLLOADER_API glVertexStream1dATIFUNC glVertexStream1dATI;
extern GLLOADER_API glVertexStream1dvATIFUNC glVertexStream1dvATI;
extern GLLOADER_API glVertexStream2sATIFUNC glVertexStream2sATI;
extern GLLOADER_API glVertexStream2svATIFUNC glVertexStream2svATI;
extern GLLOADER_API glVertexStream2iATIFUNC glVertexStream2iATI;
extern GLLOADER_API glVertexStream2ivATIFUNC glVertexStream2ivATI;
extern GLLOADER_API glVertexStream2fATIFUNC glVertexStream2fATI;
extern GLLOADER_API glVertexStream2fvATIFUNC glVertexStream2fvATI;
extern GLLOADER_API glVertexStream2dATIFUNC glVertexStream2dATI;
extern GLLOADER_API glVertexStream2dvATIFUNC glVertexStream2dvATI;
extern GLLOADER_API glVertexStream3sATIFUNC glVertexStream3sATI;
extern GLLOADER_API glVertexStream3svATIFUNC glVertexStream3svATI;
extern GLLOADER_API glVertexStream3iATIFUNC glVertexStream3iATI;
extern GLLOADER_API glVertexStream3ivATIFUNC glVertexStream3ivATI;
extern GLLOADER_API glVertexStream3fATIFUNC glVertexStream3fATI;
extern GLLOADER_API glVertexStream3fvATIFUNC glVertexStream3fvATI;
extern GLLOADER_API glVertexStream3dATIFUNC glVertexStream3dATI;
extern GLLOADER_API glVertexStream3dvATIFUNC glVertexStream3dvATI;
extern GLLOADER_API glVertexStream4sATIFUNC glVertexStream4sATI;
extern GLLOADER_API glVertexStream4svATIFUNC glVertexStream4svATI;
extern GLLOADER_API glVertexStream4iATIFUNC glVertexStream4iATI;
extern GLLOADER_API glVertexStream4ivATIFUNC glVertexStream4ivATI;
extern GLLOADER_API glVertexStream4fATIFUNC glVertexStream4fATI;
extern GLLOADER_API glVertexStream4fvATIFUNC glVertexStream4fvATI;
extern GLLOADER_API glVertexStream4dATIFUNC glVertexStream4dATI;
extern GLLOADER_API glVertexStream4dvATIFUNC glVertexStream4dvATI;
extern GLLOADER_API glNormalStream3bATIFUNC glNormalStream3bATI;
extern GLLOADER_API glNormalStream3bvATIFUNC glNormalStream3bvATI;
extern GLLOADER_API glNormalStream3sATIFUNC glNormalStream3sATI;
extern GLLOADER_API glNormalStream3svATIFUNC glNormalStream3svATI;
extern GLLOADER_API glNormalStream3iATIFUNC glNormalStream3iATI;
extern GLLOADER_API glNormalStream3ivATIFUNC glNormalStream3ivATI;
extern GLLOADER_API glNormalStream3fATIFUNC glNormalStream3fATI;
extern GLLOADER_API glNormalStream3fvATIFUNC glNormalStream3fvATI;
extern GLLOADER_API glNormalStream3dATIFUNC glNormalStream3dATI;
extern GLLOADER_API glNormalStream3dvATIFUNC glNormalStream3dvATI;
extern GLLOADER_API glClientActiveVertexStreamATIFUNC glClientActiveVertexStreamATI;
extern GLLOADER_API glVertexBlendEnviATIFUNC glVertexBlendEnviATI;
extern GLLOADER_API glVertexBlendEnvfATIFUNC glVertexBlendEnvfATI;

#endif

#ifdef GL_EXT_bindable_uniform

typedef void (GLLOADER_APIENTRY *glUniformBufferEXTFUNC)(GLuint program, GLint location, GLuint buffer);
typedef GLint (GLLOADER_APIENTRY *glGetUniformBufferSizeEXTFUNC)(GLuint program, GLint location);
typedef GLintptr (GLLOADER_APIENTRY *glGetUniformOffsetEXTFUNC)(GLuint program, GLint location);

extern GLLOADER_API glUniformBufferEXTFUNC glUniformBufferEXT;
extern GLLOADER_API glGetUniformBufferSizeEXTFUNC glGetUniformBufferSizeEXT;
extern GLLOADER_API glGetUniformOffsetEXTFUNC glGetUniformOffsetEXT;

#endif

#ifdef GL_EXT_blend_color

typedef void (GLLOADER_APIENTRY *glBlendColorEXTFUNC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);

extern GLLOADER_API glBlendColorEXTFUNC glBlendColorEXT;

#endif

#ifdef GL_EXT_blend_equation_separate

typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateEXTFUNC)(GLenum modeRGB, GLenum modeAlpha);

extern GLLOADER_API glBlendEquationSeparateEXTFUNC glBlendEquationSeparateEXT;

#endif

#ifdef GL_EXT_blend_func_separate

typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateEXTFUNC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

extern GLLOADER_API glBlendFuncSeparateEXTFUNC glBlendFuncSeparateEXT;

#endif

#ifdef GL_EXT_blend_minmax

typedef void (GLLOADER_APIENTRY *glBlendEquationEXTFUNC)(GLenum mode);

extern GLLOADER_API glBlendEquationEXTFUNC glBlendEquationEXT;

#endif

#ifdef GL_EXT_color_subtable

typedef void (GLLOADER_APIENTRY *glColorSubTableEXTFUNC)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCopyColorSubTableEXTFUNC)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);

extern GLLOADER_API glColorSubTableEXTFUNC glColorSubTableEXT;
extern GLLOADER_API glCopyColorSubTableEXTFUNC glCopyColorSubTableEXT;

#endif

#ifdef GL_EXT_compiled_vertex_array

typedef void (GLLOADER_APIENTRY *glLockArraysEXTFUNC)(GLint first, GLsizei count);
typedef void (GLLOADER_APIENTRY *glUnlockArraysEXTFUNC)();

extern GLLOADER_API glLockArraysEXTFUNC glLockArraysEXT;
extern GLLOADER_API glUnlockArraysEXTFUNC glUnlockArraysEXT;

#endif

#ifdef GL_EXT_convolution

typedef void (GLLOADER_APIENTRY *glConvolutionFilter1DEXTFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* image);
typedef void (GLLOADER_APIENTRY *glConvolutionFilter2DEXTFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* image);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterfEXTFUNC)(GLenum target, GLenum pname, GLfloat params);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterfvEXTFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glConvolutionParameteriEXTFUNC)(GLenum target, GLenum pname, GLint params);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterivEXTFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glCopyConvolutionFilter1DEXTFUNC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glCopyConvolutionFilter2DEXTFUNC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetConvolutionFilterEXTFUNC)(GLenum target, GLenum format, GLenum type, GLvoid* image);
typedef void (GLLOADER_APIENTRY *glGetConvolutionParameterfvEXTFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetConvolutionParameterivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetSeparableFilterEXTFUNC)(GLenum target, GLenum format, GLenum type, GLvoid* row, GLvoid* column, GLvoid* span);
typedef void (GLLOADER_APIENTRY *glSeparableFilter2DEXTFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* row, const GLvoid* column);

extern GLLOADER_API glConvolutionFilter1DEXTFUNC glConvolutionFilter1DEXT;
extern GLLOADER_API glConvolutionFilter2DEXTFUNC glConvolutionFilter2DEXT;
extern GLLOADER_API glConvolutionParameterfEXTFUNC glConvolutionParameterfEXT;
extern GLLOADER_API glConvolutionParameterfvEXTFUNC glConvolutionParameterfvEXT;
extern GLLOADER_API glConvolutionParameteriEXTFUNC glConvolutionParameteriEXT;
extern GLLOADER_API glConvolutionParameterivEXTFUNC glConvolutionParameterivEXT;
extern GLLOADER_API glCopyConvolutionFilter1DEXTFUNC glCopyConvolutionFilter1DEXT;
extern GLLOADER_API glCopyConvolutionFilter2DEXTFUNC glCopyConvolutionFilter2DEXT;
extern GLLOADER_API glGetConvolutionFilterEXTFUNC glGetConvolutionFilterEXT;
extern GLLOADER_API glGetConvolutionParameterfvEXTFUNC glGetConvolutionParameterfvEXT;
extern GLLOADER_API glGetConvolutionParameterivEXTFUNC glGetConvolutionParameterivEXT;
extern GLLOADER_API glGetSeparableFilterEXTFUNC glGetSeparableFilterEXT;
extern GLLOADER_API glSeparableFilter2DEXTFUNC glSeparableFilter2DEXT;

#endif

#ifdef GL_EXT_coordinate_frame

typedef void (GLLOADER_APIENTRY *glTangent3bEXTFUNC)(GLbyte tx, GLbyte ty, GLbyte tz);
typedef void (GLLOADER_APIENTRY *glTangent3bvEXTFUNC)(const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glTangent3dEXTFUNC)(GLdouble tx, GLdouble ty, GLdouble tz);
typedef void (GLLOADER_APIENTRY *glTangent3dvEXTFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glTangent3fEXTFUNC)(GLfloat tx, GLfloat ty, GLfloat tz);
typedef void (GLLOADER_APIENTRY *glTangent3fvEXTFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTangent3iEXTFUNC)(GLint tx, GLint ty, GLint tz);
typedef void (GLLOADER_APIENTRY *glTangent3ivEXTFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glTangent3sEXTFUNC)(GLshort tx, GLshort ty, GLshort tz);
typedef void (GLLOADER_APIENTRY *glTangent3svEXTFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glBinormal3bEXTFUNC)(GLbyte bx, GLbyte by, GLbyte bz);
typedef void (GLLOADER_APIENTRY *glBinormal3bvEXTFUNC)(const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glBinormal3dEXTFUNC)(GLdouble bx, GLdouble by, GLdouble bz);
typedef void (GLLOADER_APIENTRY *glBinormal3dvEXTFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glBinormal3fEXTFUNC)(GLfloat bx, GLfloat by, GLfloat bz);
typedef void (GLLOADER_APIENTRY *glBinormal3fvEXTFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glBinormal3iEXTFUNC)(GLint bx, GLint by, GLint bz);
typedef void (GLLOADER_APIENTRY *glBinormal3ivEXTFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glBinormal3sEXTFUNC)(GLshort bx, GLshort by, GLshort bz);
typedef void (GLLOADER_APIENTRY *glBinormal3svEXTFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glTangentPointerEXTFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glBinormalPointerEXTFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);

extern GLLOADER_API glTangent3bEXTFUNC glTangent3bEXT;
extern GLLOADER_API glTangent3bvEXTFUNC glTangent3bvEXT;
extern GLLOADER_API glTangent3dEXTFUNC glTangent3dEXT;
extern GLLOADER_API glTangent3dvEXTFUNC glTangent3dvEXT;
extern GLLOADER_API glTangent3fEXTFUNC glTangent3fEXT;
extern GLLOADER_API glTangent3fvEXTFUNC glTangent3fvEXT;
extern GLLOADER_API glTangent3iEXTFUNC glTangent3iEXT;
extern GLLOADER_API glTangent3ivEXTFUNC glTangent3ivEXT;
extern GLLOADER_API glTangent3sEXTFUNC glTangent3sEXT;
extern GLLOADER_API glTangent3svEXTFUNC glTangent3svEXT;
extern GLLOADER_API glBinormal3bEXTFUNC glBinormal3bEXT;
extern GLLOADER_API glBinormal3bvEXTFUNC glBinormal3bvEXT;
extern GLLOADER_API glBinormal3dEXTFUNC glBinormal3dEXT;
extern GLLOADER_API glBinormal3dvEXTFUNC glBinormal3dvEXT;
extern GLLOADER_API glBinormal3fEXTFUNC glBinormal3fEXT;
extern GLLOADER_API glBinormal3fvEXTFUNC glBinormal3fvEXT;
extern GLLOADER_API glBinormal3iEXTFUNC glBinormal3iEXT;
extern GLLOADER_API glBinormal3ivEXTFUNC glBinormal3ivEXT;
extern GLLOADER_API glBinormal3sEXTFUNC glBinormal3sEXT;
extern GLLOADER_API glBinormal3svEXTFUNC glBinormal3svEXT;
extern GLLOADER_API glTangentPointerEXTFUNC glTangentPointerEXT;
extern GLLOADER_API glBinormalPointerEXTFUNC glBinormalPointerEXT;

#endif

#ifdef GL_EXT_copy_buffer

typedef void (GLLOADER_APIENTRY *glCopyBufferSubDataEXTFUNC)(GLenum readtarget, GLenum writetarget, GLintptr readoffset, GLintptr writeoffset, GLsizeiptr size);

extern GLLOADER_API glCopyBufferSubDataEXTFUNC glCopyBufferSubDataEXT;

#endif

#ifdef GL_EXT_copy_texture

typedef void (GLLOADER_APIENTRY *glCopyTexImage1DEXTFUNC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyTexImage2DEXTFUNC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage1DEXTFUNC)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage2DEXTFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage3DEXTFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);

extern GLLOADER_API glCopyTexImage1DEXTFUNC glCopyTexImage1DEXT;
extern GLLOADER_API glCopyTexImage2DEXTFUNC glCopyTexImage2DEXT;
extern GLLOADER_API glCopyTexSubImage1DEXTFUNC glCopyTexSubImage1DEXT;
extern GLLOADER_API glCopyTexSubImage2DEXTFUNC glCopyTexSubImage2DEXT;
extern GLLOADER_API glCopyTexSubImage3DEXTFUNC glCopyTexSubImage3DEXT;

#endif

#ifdef GL_EXT_cull_vertex

typedef void (GLLOADER_APIENTRY *glCullParameterdvEXTFUNC)(GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glCullParameterfvEXTFUNC)(GLenum pname, GLfloat* params);

extern GLLOADER_API glCullParameterdvEXTFUNC glCullParameterdvEXT;
extern GLLOADER_API glCullParameterfvEXTFUNC glCullParameterfvEXT;

#endif

#ifdef GL_EXT_debug_label

typedef void (GLLOADER_APIENTRY *glLabelObjectEXTFUNC)(GLenum type, GLuint object, GLsizei length, const GLchar* label);
typedef void (GLLOADER_APIENTRY *glGetObjectLabelEXTFUNC)(GLenum type, GLuint object, GLsizei bufSize, GLsizei* length, GLchar* label);

extern GLLOADER_API glLabelObjectEXTFUNC glLabelObjectEXT;
extern GLLOADER_API glGetObjectLabelEXTFUNC glGetObjectLabelEXT;

#endif

#ifdef GL_EXT_debug_marker

typedef void (GLLOADER_APIENTRY *glInsertEventMarkerEXTFUNC)(GLsizei length, const GLchar* marker);
typedef void (GLLOADER_APIENTRY *glPushGroupMarkerEXTFUNC)(GLsizei length, const GLchar* marker);
typedef void (GLLOADER_APIENTRY *glPopGroupMarkerEXTFUNC)();

extern GLLOADER_API glInsertEventMarkerEXTFUNC glInsertEventMarkerEXT;
extern GLLOADER_API glPushGroupMarkerEXTFUNC glPushGroupMarkerEXT;
extern GLLOADER_API glPopGroupMarkerEXTFUNC glPopGroupMarkerEXT;

#endif

#ifdef GL_EXT_depth_bounds_test

typedef void (GLLOADER_APIENTRY *glDepthBoundsEXTFUNC)(GLclampd zmin, GLclampd zmax);

extern GLLOADER_API glDepthBoundsEXTFUNC glDepthBoundsEXT;

#endif

#ifdef GL_EXT_direct_state_access

typedef void (GLLOADER_APIENTRY *glClientAttribDefaultEXTFUNC)(GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glPushClientAttribDefaultEXTFUNC)(GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glMatrixLoadfEXTFUNC)(GLenum mode, const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMatrixLoaddEXTFUNC)(GLenum mode, const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glMatrixMultfEXTFUNC)(GLenum mode, const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMatrixMultdEXTFUNC)(GLenum mode, const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glMatrixLoadIdentityEXTFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glMatrixRotatefEXTFUNC)(GLenum mode, GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glMatrixRotatedEXTFUNC)(GLenum mode, GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glMatrixScalefEXTFUNC)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glMatrixScaledEXTFUNC)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glMatrixTranslatefEXTFUNC)(GLenum mode, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glMatrixTranslatedEXTFUNC)(GLenum mode, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glMatrixFrustumEXTFUNC)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GLLOADER_APIENTRY *glMatrixOrthoEXTFUNC)(GLenum mode, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GLLOADER_APIENTRY *glMatrixPopEXTFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glMatrixPushEXTFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glMatrixLoadTransposefEXTFUNC)(GLenum mode, const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMatrixLoadTransposedEXTFUNC)(GLenum mode, const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glMatrixMultTransposefEXTFUNC)(GLenum mode, const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMatrixMultTransposedEXTFUNC)(GLenum mode, const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glTextureParameterfEXTFUNC)(GLuint texture, GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTextureParameterfvEXTFUNC)(GLuint texture, GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTextureParameteriEXTFUNC)(GLuint texture, GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTextureParameterivEXTFUNC)(GLuint texture, GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glTextureImage1DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTextureImage2DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyTextureImage1DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyTextureImage2DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyTextureSubImage1DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glCopyTextureSubImage2DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetTextureImageEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetTextureParameterfvEXTFUNC)(GLuint texture, GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTextureLevelParameterfvEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTextureLevelParameterivEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glTextureImage3DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTextureSubImage3DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyTextureSubImage3DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glMultiTexParameterfEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glMultiTexParameterfvEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glMultiTexParameteriEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glMultiTexParameterivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glMultiTexImage1DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glMultiTexImage2DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glMultiTexSubImage1DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glMultiTexSubImage2DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyMultiTexImage1DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyMultiTexImage2DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyMultiTexSubImage1DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glCopyMultiTexSubImage2DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetMultiTexImageEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetMultiTexParameterfvEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexParameterivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexLevelParameterfvEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexLevelParameterivEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glMultiTexImage3DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glMultiTexSubImage3DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyMultiTexSubImage3DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glBindMultiTextureEXTFUNC)(GLenum texunit, GLenum target, GLuint texture);
typedef void (GLLOADER_APIENTRY *glEnableClientStateIndexedEXTFUNC)(GLenum array, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableClientStateIndexedEXTFUNC)(GLenum array, GLuint index);
typedef void (GLLOADER_APIENTRY *glMultiTexCoordPointerEXTFUNC)(GLenum texunit, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glMultiTexEnvfEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glMultiTexEnvfvEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glMultiTexEnviEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glMultiTexEnvivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glMultiTexGendEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, GLdouble param);
typedef void (GLLOADER_APIENTRY *glMultiTexGendvEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, const GLdouble* params);
typedef void (GLLOADER_APIENTRY *glMultiTexGenfEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glMultiTexGenfvEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glMultiTexGeniEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glMultiTexGenivEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexEnvfvEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexEnvivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexGendvEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexGenfvEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexGenivEXTFUNC)(GLenum texunit, GLenum coord, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetFloatIndexedvEXTFUNC)(GLenum target, GLuint index, GLfloat* data);
typedef void (GLLOADER_APIENTRY *glGetDoubleIndexedvEXTFUNC)(GLenum target, GLuint index, GLdouble* data);
typedef void (GLLOADER_APIENTRY *glGetPointerIndexedvEXTFUNC)(GLenum target, GLuint index, GLvoid** data);
typedef void (GLLOADER_APIENTRY *glCompressedTextureImage3DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedTextureImage2DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedTextureImage1DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedTextureSubImage3DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedTextureSubImage2DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedTextureSubImage1DEXTFUNC)(GLuint texture, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glGetCompressedTextureImageEXTFUNC)(GLuint texture, GLenum target, GLint lod, GLvoid* img);
typedef void (GLLOADER_APIENTRY *glCompressedMultiTexImage3DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedMultiTexImage2DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedMultiTexImage1DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedMultiTexSubImage3DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedMultiTexSubImage2DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glCompressedMultiTexSubImage1DEXTFUNC)(GLenum texunit, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* bits);
typedef void (GLLOADER_APIENTRY *glGetCompressedMultiTexImageEXTFUNC)(GLenum texunit, GLenum target, GLint lod, GLvoid* img);
typedef void (GLLOADER_APIENTRY *glNamedProgramStringEXTFUNC)(GLuint program, GLenum target, GLenum format, GLsizei len, const GLvoid* string);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameter4dEXTFUNC)(GLuint program, GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameter4dvEXTFUNC)(GLuint program, GLenum target, GLuint index, const GLdouble* params);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameter4fEXTFUNC)(GLuint program, GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameter4fvEXTFUNC)(GLuint program, GLenum target, GLuint index, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetNamedProgramLocalParameterdvEXTFUNC)(GLuint program, GLenum target, GLuint index, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetNamedProgramLocalParameterfvEXTFUNC)(GLuint program, GLenum target, GLuint index, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetNamedProgramivEXTFUNC)(GLuint program, GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetNamedProgramStringEXTFUNC)(GLuint program, GLenum target, GLenum pname, GLvoid* string);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameters4fvEXTFUNC)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameterI4iEXTFUNC)(GLuint program, GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameterI4ivEXTFUNC)(GLuint program, GLenum target, GLuint index, const GLint* params);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParametersI4ivEXTFUNC)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLint* params);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameterI4uiEXTFUNC)(GLuint program, GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParameterI4uivEXTFUNC)(GLuint program, GLenum target, GLuint index, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glNamedProgramLocalParametersI4uivEXTFUNC)(GLuint program, GLenum target, GLuint index, GLsizei count, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetNamedProgramLocalParameterIivEXTFUNC)(GLuint program, GLenum target, GLuint index, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetNamedProgramLocalParameterIuivEXTFUNC)(GLuint program, GLenum target, GLuint index, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetTextureParameterIivEXTFUNC)(GLuint texture, GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTextureParameterIuivEXTFUNC)(GLuint texture, GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glMultiTexParameterIivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glMultiTexParameterIuivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexParameterIivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMultiTexParameterIuivEXTFUNC)(GLenum texunit, GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glProgramUniform1fEXTFUNC)(GLuint program, GLint location, GLfloat v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform2fEXTFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform3fEXTFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform4fEXTFUNC)(GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform1iEXTFUNC)(GLuint program, GLint location, GLint v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform2iEXTFUNC)(GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform3iEXTFUNC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform4iEXTFUNC)(GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform1fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4fvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4ivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x3fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x2fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x4fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x2fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x4fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x3fvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform1uiEXTFUNC)(GLuint program, GLint location, GLuint v0);
typedef void (GLLOADER_APIENTRY *glProgramUniform2uiEXTFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GLLOADER_APIENTRY *glProgramUniform3uiEXTFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLLOADER_APIENTRY *glProgramUniform4uiEXTFUNC)(GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLLOADER_APIENTRY *glProgramUniform1uivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2uivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3uivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4uivEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glNamedBufferDataEXTFUNC)(GLuint buffer, GLsizeiptr size, const GLvoid* data, GLenum usage);
typedef void (GLLOADER_APIENTRY *glNamedBufferSubDataEXTFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr size, const GLvoid* data);
typedef GLvoid* (GLLOADER_APIENTRY *glMapNamedBufferEXTFUNC)(GLuint buffer, GLenum access);
typedef GLboolean (GLLOADER_APIENTRY *glUnmapNamedBufferEXTFUNC)(GLuint buffer);
typedef GLvoid* (GLLOADER_APIENTRY *glMapNamedBufferRangeEXTFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GLLOADER_APIENTRY *glFlushMappedNamedBufferRangeEXTFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr length);
typedef void (GLLOADER_APIENTRY *glNamedCopyBufferSubDataEXTFUNC)(GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferParameterivEXTFUNC)(GLuint buffer, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferPointervEXTFUNC)(GLuint buffer, GLenum pname, GLvoid** params);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferSubDataEXTFUNC)(GLuint buffer, GLintptr offset, GLsizeiptr size, GLvoid* data);
typedef void (GLLOADER_APIENTRY *glTextureBufferEXTFUNC)(GLuint texture, GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glMultiTexBufferEXTFUNC)(GLenum texunit, GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glNamedRenderbufferStorageEXTFUNC)(GLuint renderbuffer, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetNamedRenderbufferParameterivEXTFUNC)(GLuint renderbuffer, GLenum pname, GLint* params);
typedef GLenum (GLLOADER_APIENTRY *glCheckNamedFramebufferStatusEXTFUNC)(GLuint framebuffer, GLenum target);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTexture1DEXTFUNC)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTexture2DEXTFUNC)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTexture3DEXTFUNC)(GLuint framebuffer, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferRenderbufferEXTFUNC)(GLuint framebuffer, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glGetNamedFramebufferAttachmentParameterivEXTFUNC)(GLuint framebuffer, GLenum attachment, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGenerateTextureMipmapEXTFUNC)(GLuint texture, GLenum target);
typedef void (GLLOADER_APIENTRY *glGenerateMultiTexMipmapEXTFUNC)(GLenum texunit, GLenum target);
typedef void (GLLOADER_APIENTRY *glFramebufferDrawBufferEXTFUNC)(GLuint framebuffer, GLenum mode);
typedef void (GLLOADER_APIENTRY *glFramebufferDrawBuffersEXTFUNC)(GLuint framebuffer, GLsizei n, const GLenum* bufs);
typedef void (GLLOADER_APIENTRY *glFramebufferReadBufferEXTFUNC)(GLuint framebuffer, GLenum mode);
typedef void (GLLOADER_APIENTRY *glGetFramebufferParameterivEXTFUNC)(GLuint framebuffer, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glNamedRenderbufferStorageMultisampleEXTFUNC)(GLuint renderbuffer, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glNamedRenderbufferStorageMultisampleCoverageEXTFUNC)(GLuint renderbuffer, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTextureEXTFUNC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTextureLayerEXTFUNC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferTextureFaceEXTFUNC)(GLuint framebuffer, GLenum attachment, GLuint texture, GLint level, GLenum face);
typedef void (GLLOADER_APIENTRY *glTextureRenderbufferEXTFUNC)(GLuint texture, GLenum target, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glMultiTexRenderbufferEXTFUNC)(GLenum texunit, GLenum target, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glProgramUniform1dEXTFUNC)(GLuint program, GLint location, GLdouble x);
typedef void (GLLOADER_APIENTRY *glProgramUniform2dEXTFUNC)(GLuint program, GLint location, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glProgramUniform3dEXTFUNC)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glProgramUniform4dEXTFUNC)(GLuint program, GLint location, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glProgramUniform1dvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform2dvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform3dvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniform4dvEXTFUNC)(GLuint program, GLint location, GLsizei count, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x3dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix2x4dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x2dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix3x4dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x2dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformMatrix4x3dvEXTFUNC)(GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLdouble* value);
typedef void (GLLOADER_APIENTRY *glEnableClientStateiEXTFUNC)(GLenum array, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableClientStateiEXTFUNC)(GLenum array, GLuint index);
typedef void (GLLOADER_APIENTRY *glGetFloati_vEXTFUNC)(GLenum pname, GLuint index, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetDoublei_vEXTFUNC)(GLenum pname, GLuint index, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetPointeri_vEXTFUNC)(GLenum pname, GLuint index, GLvoid** params);
typedef void (GLLOADER_APIENTRY *glEnableIndexedEXTFUNC)(GLenum cap, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableIndexedEXTFUNC)(GLenum cap, GLuint index);
typedef void (GLLOADER_APIENTRY *glGetIntegerIndexedvEXTFUNC)(GLenum target, GLuint index, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetBooleanIndexedvEXTFUNC)(GLenum target, GLuint index, GLboolean* params);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayColorOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayEdgeFlagOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayIndexOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayNormalOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayTexCoordOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayMultiTexCoordOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLenum texunit, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayFogCoordOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArraySecondaryColorOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexAttribOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexAttribIOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glEnableVertexArrayEXTFUNC)(GLuint vaobj, GLenum array);
typedef void (GLLOADER_APIENTRY *glDisableVertexArrayEXTFUNC)(GLuint vaobj, GLenum array);
typedef void (GLLOADER_APIENTRY *glEnableVertexArrayAttribEXTFUNC)(GLuint vaobj, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableVertexArrayAttribEXTFUNC)(GLuint vaobj, GLuint index);
typedef void (GLLOADER_APIENTRY *glGetVertexArrayIntegervEXTFUNC)(GLuint vaobj, GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetVertexArrayPointervEXTFUNC)(GLuint vaobj, GLenum pname, GLvoid** param);
typedef void (GLLOADER_APIENTRY *glGetVertexArrayIntegeri_vEXTFUNC)(GLuint vaobj, GLuint index, GLenum pname, GLint* param);
typedef void (GLLOADER_APIENTRY *glGetVertexArrayPointeri_vEXTFUNC)(GLuint vaobj, GLuint index, GLenum pname, GLvoid** param);

extern GLLOADER_API glClientAttribDefaultEXTFUNC glClientAttribDefaultEXT;
extern GLLOADER_API glPushClientAttribDefaultEXTFUNC glPushClientAttribDefaultEXT;
extern GLLOADER_API glMatrixLoadfEXTFUNC glMatrixLoadfEXT;
extern GLLOADER_API glMatrixLoaddEXTFUNC glMatrixLoaddEXT;
extern GLLOADER_API glMatrixMultfEXTFUNC glMatrixMultfEXT;
extern GLLOADER_API glMatrixMultdEXTFUNC glMatrixMultdEXT;
extern GLLOADER_API glMatrixLoadIdentityEXTFUNC glMatrixLoadIdentityEXT;
extern GLLOADER_API glMatrixRotatefEXTFUNC glMatrixRotatefEXT;
extern GLLOADER_API glMatrixRotatedEXTFUNC glMatrixRotatedEXT;
extern GLLOADER_API glMatrixScalefEXTFUNC glMatrixScalefEXT;
extern GLLOADER_API glMatrixScaledEXTFUNC glMatrixScaledEXT;
extern GLLOADER_API glMatrixTranslatefEXTFUNC glMatrixTranslatefEXT;
extern GLLOADER_API glMatrixTranslatedEXTFUNC glMatrixTranslatedEXT;
extern GLLOADER_API glMatrixFrustumEXTFUNC glMatrixFrustumEXT;
extern GLLOADER_API glMatrixOrthoEXTFUNC glMatrixOrthoEXT;
extern GLLOADER_API glMatrixPopEXTFUNC glMatrixPopEXT;
extern GLLOADER_API glMatrixPushEXTFUNC glMatrixPushEXT;
extern GLLOADER_API glMatrixLoadTransposefEXTFUNC glMatrixLoadTransposefEXT;
extern GLLOADER_API glMatrixLoadTransposedEXTFUNC glMatrixLoadTransposedEXT;
extern GLLOADER_API glMatrixMultTransposefEXTFUNC glMatrixMultTransposefEXT;
extern GLLOADER_API glMatrixMultTransposedEXTFUNC glMatrixMultTransposedEXT;
extern GLLOADER_API glTextureParameterfEXTFUNC glTextureParameterfEXT;
extern GLLOADER_API glTextureParameterfvEXTFUNC glTextureParameterfvEXT;
extern GLLOADER_API glTextureParameteriEXTFUNC glTextureParameteriEXT;
extern GLLOADER_API glTextureParameterivEXTFUNC glTextureParameterivEXT;
extern GLLOADER_API glTextureImage1DEXTFUNC glTextureImage1DEXT;
extern GLLOADER_API glTextureImage2DEXTFUNC glTextureImage2DEXT;
extern GLLOADER_API glCopyTextureImage1DEXTFUNC glCopyTextureImage1DEXT;
extern GLLOADER_API glCopyTextureImage2DEXTFUNC glCopyTextureImage2DEXT;
extern GLLOADER_API glCopyTextureSubImage1DEXTFUNC glCopyTextureSubImage1DEXT;
extern GLLOADER_API glCopyTextureSubImage2DEXTFUNC glCopyTextureSubImage2DEXT;
extern GLLOADER_API glGetTextureImageEXTFUNC glGetTextureImageEXT;
extern GLLOADER_API glGetTextureParameterfvEXTFUNC glGetTextureParameterfvEXT;
extern GLLOADER_API glGetTextureLevelParameterfvEXTFUNC glGetTextureLevelParameterfvEXT;
extern GLLOADER_API glGetTextureLevelParameterivEXTFUNC glGetTextureLevelParameterivEXT;
extern GLLOADER_API glTextureImage3DEXTFUNC glTextureImage3DEXT;
extern GLLOADER_API glTextureSubImage3DEXTFUNC glTextureSubImage3DEXT;
extern GLLOADER_API glCopyTextureSubImage3DEXTFUNC glCopyTextureSubImage3DEXT;
extern GLLOADER_API glMultiTexParameterfEXTFUNC glMultiTexParameterfEXT;
extern GLLOADER_API glMultiTexParameterfvEXTFUNC glMultiTexParameterfvEXT;
extern GLLOADER_API glMultiTexParameteriEXTFUNC glMultiTexParameteriEXT;
extern GLLOADER_API glMultiTexParameterivEXTFUNC glMultiTexParameterivEXT;
extern GLLOADER_API glMultiTexImage1DEXTFUNC glMultiTexImage1DEXT;
extern GLLOADER_API glMultiTexImage2DEXTFUNC glMultiTexImage2DEXT;
extern GLLOADER_API glMultiTexSubImage1DEXTFUNC glMultiTexSubImage1DEXT;
extern GLLOADER_API glMultiTexSubImage2DEXTFUNC glMultiTexSubImage2DEXT;
extern GLLOADER_API glCopyMultiTexImage1DEXTFUNC glCopyMultiTexImage1DEXT;
extern GLLOADER_API glCopyMultiTexImage2DEXTFUNC glCopyMultiTexImage2DEXT;
extern GLLOADER_API glCopyMultiTexSubImage1DEXTFUNC glCopyMultiTexSubImage1DEXT;
extern GLLOADER_API glCopyMultiTexSubImage2DEXTFUNC glCopyMultiTexSubImage2DEXT;
extern GLLOADER_API glGetMultiTexImageEXTFUNC glGetMultiTexImageEXT;
extern GLLOADER_API glGetMultiTexParameterfvEXTFUNC glGetMultiTexParameterfvEXT;
extern GLLOADER_API glGetMultiTexParameterivEXTFUNC glGetMultiTexParameterivEXT;
extern GLLOADER_API glGetMultiTexLevelParameterfvEXTFUNC glGetMultiTexLevelParameterfvEXT;
extern GLLOADER_API glGetMultiTexLevelParameterivEXTFUNC glGetMultiTexLevelParameterivEXT;
extern GLLOADER_API glMultiTexImage3DEXTFUNC glMultiTexImage3DEXT;
extern GLLOADER_API glMultiTexSubImage3DEXTFUNC glMultiTexSubImage3DEXT;
extern GLLOADER_API glCopyMultiTexSubImage3DEXTFUNC glCopyMultiTexSubImage3DEXT;
extern GLLOADER_API glBindMultiTextureEXTFUNC glBindMultiTextureEXT;
extern GLLOADER_API glEnableClientStateIndexedEXTFUNC glEnableClientStateIndexedEXT;
extern GLLOADER_API glDisableClientStateIndexedEXTFUNC glDisableClientStateIndexedEXT;
extern GLLOADER_API glMultiTexCoordPointerEXTFUNC glMultiTexCoordPointerEXT;
extern GLLOADER_API glMultiTexEnvfEXTFUNC glMultiTexEnvfEXT;
extern GLLOADER_API glMultiTexEnvfvEXTFUNC glMultiTexEnvfvEXT;
extern GLLOADER_API glMultiTexEnviEXTFUNC glMultiTexEnviEXT;
extern GLLOADER_API glMultiTexEnvivEXTFUNC glMultiTexEnvivEXT;
extern GLLOADER_API glMultiTexGendEXTFUNC glMultiTexGendEXT;
extern GLLOADER_API glMultiTexGendvEXTFUNC glMultiTexGendvEXT;
extern GLLOADER_API glMultiTexGenfEXTFUNC glMultiTexGenfEXT;
extern GLLOADER_API glMultiTexGenfvEXTFUNC glMultiTexGenfvEXT;
extern GLLOADER_API glMultiTexGeniEXTFUNC glMultiTexGeniEXT;
extern GLLOADER_API glMultiTexGenivEXTFUNC glMultiTexGenivEXT;
extern GLLOADER_API glGetMultiTexEnvfvEXTFUNC glGetMultiTexEnvfvEXT;
extern GLLOADER_API glGetMultiTexEnvivEXTFUNC glGetMultiTexEnvivEXT;
extern GLLOADER_API glGetMultiTexGendvEXTFUNC glGetMultiTexGendvEXT;
extern GLLOADER_API glGetMultiTexGenfvEXTFUNC glGetMultiTexGenfvEXT;
extern GLLOADER_API glGetMultiTexGenivEXTFUNC glGetMultiTexGenivEXT;
extern GLLOADER_API glGetFloatIndexedvEXTFUNC glGetFloatIndexedvEXT;
extern GLLOADER_API glGetDoubleIndexedvEXTFUNC glGetDoubleIndexedvEXT;
extern GLLOADER_API glGetPointerIndexedvEXTFUNC glGetPointerIndexedvEXT;
extern GLLOADER_API glCompressedTextureImage3DEXTFUNC glCompressedTextureImage3DEXT;
extern GLLOADER_API glCompressedTextureImage2DEXTFUNC glCompressedTextureImage2DEXT;
extern GLLOADER_API glCompressedTextureImage1DEXTFUNC glCompressedTextureImage1DEXT;
extern GLLOADER_API glCompressedTextureSubImage3DEXTFUNC glCompressedTextureSubImage3DEXT;
extern GLLOADER_API glCompressedTextureSubImage2DEXTFUNC glCompressedTextureSubImage2DEXT;
extern GLLOADER_API glCompressedTextureSubImage1DEXTFUNC glCompressedTextureSubImage1DEXT;
extern GLLOADER_API glGetCompressedTextureImageEXTFUNC glGetCompressedTextureImageEXT;
extern GLLOADER_API glCompressedMultiTexImage3DEXTFUNC glCompressedMultiTexImage3DEXT;
extern GLLOADER_API glCompressedMultiTexImage2DEXTFUNC glCompressedMultiTexImage2DEXT;
extern GLLOADER_API glCompressedMultiTexImage1DEXTFUNC glCompressedMultiTexImage1DEXT;
extern GLLOADER_API glCompressedMultiTexSubImage3DEXTFUNC glCompressedMultiTexSubImage3DEXT;
extern GLLOADER_API glCompressedMultiTexSubImage2DEXTFUNC glCompressedMultiTexSubImage2DEXT;
extern GLLOADER_API glCompressedMultiTexSubImage1DEXTFUNC glCompressedMultiTexSubImage1DEXT;
extern GLLOADER_API glGetCompressedMultiTexImageEXTFUNC glGetCompressedMultiTexImageEXT;
extern GLLOADER_API glNamedProgramStringEXTFUNC glNamedProgramStringEXT;
extern GLLOADER_API glNamedProgramLocalParameter4dEXTFUNC glNamedProgramLocalParameter4dEXT;
extern GLLOADER_API glNamedProgramLocalParameter4dvEXTFUNC glNamedProgramLocalParameter4dvEXT;
extern GLLOADER_API glNamedProgramLocalParameter4fEXTFUNC glNamedProgramLocalParameter4fEXT;
extern GLLOADER_API glNamedProgramLocalParameter4fvEXTFUNC glNamedProgramLocalParameter4fvEXT;
extern GLLOADER_API glGetNamedProgramLocalParameterdvEXTFUNC glGetNamedProgramLocalParameterdvEXT;
extern GLLOADER_API glGetNamedProgramLocalParameterfvEXTFUNC glGetNamedProgramLocalParameterfvEXT;
extern GLLOADER_API glGetNamedProgramivEXTFUNC glGetNamedProgramivEXT;
extern GLLOADER_API glGetNamedProgramStringEXTFUNC glGetNamedProgramStringEXT;
extern GLLOADER_API glNamedProgramLocalParameters4fvEXTFUNC glNamedProgramLocalParameters4fvEXT;
extern GLLOADER_API glNamedProgramLocalParameterI4iEXTFUNC glNamedProgramLocalParameterI4iEXT;
extern GLLOADER_API glNamedProgramLocalParameterI4ivEXTFUNC glNamedProgramLocalParameterI4ivEXT;
extern GLLOADER_API glNamedProgramLocalParametersI4ivEXTFUNC glNamedProgramLocalParametersI4ivEXT;
extern GLLOADER_API glNamedProgramLocalParameterI4uiEXTFUNC glNamedProgramLocalParameterI4uiEXT;
extern GLLOADER_API glNamedProgramLocalParameterI4uivEXTFUNC glNamedProgramLocalParameterI4uivEXT;
extern GLLOADER_API glNamedProgramLocalParametersI4uivEXTFUNC glNamedProgramLocalParametersI4uivEXT;
extern GLLOADER_API glGetNamedProgramLocalParameterIivEXTFUNC glGetNamedProgramLocalParameterIivEXT;
extern GLLOADER_API glGetNamedProgramLocalParameterIuivEXTFUNC glGetNamedProgramLocalParameterIuivEXT;
extern GLLOADER_API glGetTextureParameterIivEXTFUNC glGetTextureParameterIivEXT;
extern GLLOADER_API glGetTextureParameterIuivEXTFUNC glGetTextureParameterIuivEXT;
extern GLLOADER_API glMultiTexParameterIivEXTFUNC glMultiTexParameterIivEXT;
extern GLLOADER_API glMultiTexParameterIuivEXTFUNC glMultiTexParameterIuivEXT;
extern GLLOADER_API glGetMultiTexParameterIivEXTFUNC glGetMultiTexParameterIivEXT;
extern GLLOADER_API glGetMultiTexParameterIuivEXTFUNC glGetMultiTexParameterIuivEXT;
extern GLLOADER_API glProgramUniform1fEXTFUNC glProgramUniform1fEXT;
extern GLLOADER_API glProgramUniform2fEXTFUNC glProgramUniform2fEXT;
extern GLLOADER_API glProgramUniform3fEXTFUNC glProgramUniform3fEXT;
extern GLLOADER_API glProgramUniform4fEXTFUNC glProgramUniform4fEXT;
extern GLLOADER_API glProgramUniform1iEXTFUNC glProgramUniform1iEXT;
extern GLLOADER_API glProgramUniform2iEXTFUNC glProgramUniform2iEXT;
extern GLLOADER_API glProgramUniform3iEXTFUNC glProgramUniform3iEXT;
extern GLLOADER_API glProgramUniform4iEXTFUNC glProgramUniform4iEXT;
extern GLLOADER_API glProgramUniform1fvEXTFUNC glProgramUniform1fvEXT;
extern GLLOADER_API glProgramUniform2fvEXTFUNC glProgramUniform2fvEXT;
extern GLLOADER_API glProgramUniform3fvEXTFUNC glProgramUniform3fvEXT;
extern GLLOADER_API glProgramUniform4fvEXTFUNC glProgramUniform4fvEXT;
extern GLLOADER_API glProgramUniform1ivEXTFUNC glProgramUniform1ivEXT;
extern GLLOADER_API glProgramUniform2ivEXTFUNC glProgramUniform2ivEXT;
extern GLLOADER_API glProgramUniform3ivEXTFUNC glProgramUniform3ivEXT;
extern GLLOADER_API glProgramUniform4ivEXTFUNC glProgramUniform4ivEXT;
extern GLLOADER_API glProgramUniformMatrix2fvEXTFUNC glProgramUniformMatrix2fvEXT;
extern GLLOADER_API glProgramUniformMatrix3fvEXTFUNC glProgramUniformMatrix3fvEXT;
extern GLLOADER_API glProgramUniformMatrix4fvEXTFUNC glProgramUniformMatrix4fvEXT;
extern GLLOADER_API glProgramUniformMatrix2x3fvEXTFUNC glProgramUniformMatrix2x3fvEXT;
extern GLLOADER_API glProgramUniformMatrix3x2fvEXTFUNC glProgramUniformMatrix3x2fvEXT;
extern GLLOADER_API glProgramUniformMatrix2x4fvEXTFUNC glProgramUniformMatrix2x4fvEXT;
extern GLLOADER_API glProgramUniformMatrix4x2fvEXTFUNC glProgramUniformMatrix4x2fvEXT;
extern GLLOADER_API glProgramUniformMatrix3x4fvEXTFUNC glProgramUniformMatrix3x4fvEXT;
extern GLLOADER_API glProgramUniformMatrix4x3fvEXTFUNC glProgramUniformMatrix4x3fvEXT;
extern GLLOADER_API glProgramUniform1uiEXTFUNC glProgramUniform1uiEXT;
extern GLLOADER_API glProgramUniform2uiEXTFUNC glProgramUniform2uiEXT;
extern GLLOADER_API glProgramUniform3uiEXTFUNC glProgramUniform3uiEXT;
extern GLLOADER_API glProgramUniform4uiEXTFUNC glProgramUniform4uiEXT;
extern GLLOADER_API glProgramUniform1uivEXTFUNC glProgramUniform1uivEXT;
extern GLLOADER_API glProgramUniform2uivEXTFUNC glProgramUniform2uivEXT;
extern GLLOADER_API glProgramUniform3uivEXTFUNC glProgramUniform3uivEXT;
extern GLLOADER_API glProgramUniform4uivEXTFUNC glProgramUniform4uivEXT;
extern GLLOADER_API glNamedBufferDataEXTFUNC glNamedBufferDataEXT;
extern GLLOADER_API glNamedBufferSubDataEXTFUNC glNamedBufferSubDataEXT;
extern GLLOADER_API glMapNamedBufferEXTFUNC glMapNamedBufferEXT;
extern GLLOADER_API glUnmapNamedBufferEXTFUNC glUnmapNamedBufferEXT;
extern GLLOADER_API glMapNamedBufferRangeEXTFUNC glMapNamedBufferRangeEXT;
extern GLLOADER_API glFlushMappedNamedBufferRangeEXTFUNC glFlushMappedNamedBufferRangeEXT;
extern GLLOADER_API glNamedCopyBufferSubDataEXTFUNC glNamedCopyBufferSubDataEXT;
extern GLLOADER_API glGetNamedBufferParameterivEXTFUNC glGetNamedBufferParameterivEXT;
extern GLLOADER_API glGetNamedBufferPointervEXTFUNC glGetNamedBufferPointervEXT;
extern GLLOADER_API glGetNamedBufferSubDataEXTFUNC glGetNamedBufferSubDataEXT;
extern GLLOADER_API glTextureBufferEXTFUNC glTextureBufferEXT;
extern GLLOADER_API glMultiTexBufferEXTFUNC glMultiTexBufferEXT;
extern GLLOADER_API glNamedRenderbufferStorageEXTFUNC glNamedRenderbufferStorageEXT;
extern GLLOADER_API glGetNamedRenderbufferParameterivEXTFUNC glGetNamedRenderbufferParameterivEXT;
extern GLLOADER_API glCheckNamedFramebufferStatusEXTFUNC glCheckNamedFramebufferStatusEXT;
extern GLLOADER_API glNamedFramebufferTexture1DEXTFUNC glNamedFramebufferTexture1DEXT;
extern GLLOADER_API glNamedFramebufferTexture2DEXTFUNC glNamedFramebufferTexture2DEXT;
extern GLLOADER_API glNamedFramebufferTexture3DEXTFUNC glNamedFramebufferTexture3DEXT;
extern GLLOADER_API glNamedFramebufferRenderbufferEXTFUNC glNamedFramebufferRenderbufferEXT;
extern GLLOADER_API glGetNamedFramebufferAttachmentParameterivEXTFUNC glGetNamedFramebufferAttachmentParameterivEXT;
extern GLLOADER_API glGenerateTextureMipmapEXTFUNC glGenerateTextureMipmapEXT;
extern GLLOADER_API glGenerateMultiTexMipmapEXTFUNC glGenerateMultiTexMipmapEXT;
extern GLLOADER_API glFramebufferDrawBufferEXTFUNC glFramebufferDrawBufferEXT;
extern GLLOADER_API glFramebufferDrawBuffersEXTFUNC glFramebufferDrawBuffersEXT;
extern GLLOADER_API glFramebufferReadBufferEXTFUNC glFramebufferReadBufferEXT;
extern GLLOADER_API glGetFramebufferParameterivEXTFUNC glGetFramebufferParameterivEXT;
extern GLLOADER_API glNamedRenderbufferStorageMultisampleEXTFUNC glNamedRenderbufferStorageMultisampleEXT;
extern GLLOADER_API glNamedRenderbufferStorageMultisampleCoverageEXTFUNC glNamedRenderbufferStorageMultisampleCoverageEXT;
extern GLLOADER_API glNamedFramebufferTextureEXTFUNC glNamedFramebufferTextureEXT;
extern GLLOADER_API glNamedFramebufferTextureLayerEXTFUNC glNamedFramebufferTextureLayerEXT;
extern GLLOADER_API glNamedFramebufferTextureFaceEXTFUNC glNamedFramebufferTextureFaceEXT;
extern GLLOADER_API glTextureRenderbufferEXTFUNC glTextureRenderbufferEXT;
extern GLLOADER_API glMultiTexRenderbufferEXTFUNC glMultiTexRenderbufferEXT;
extern GLLOADER_API glProgramUniform1dEXTFUNC glProgramUniform1dEXT;
extern GLLOADER_API glProgramUniform2dEXTFUNC glProgramUniform2dEXT;
extern GLLOADER_API glProgramUniform3dEXTFUNC glProgramUniform3dEXT;
extern GLLOADER_API glProgramUniform4dEXTFUNC glProgramUniform4dEXT;
extern GLLOADER_API glProgramUniform1dvEXTFUNC glProgramUniform1dvEXT;
extern GLLOADER_API glProgramUniform2dvEXTFUNC glProgramUniform2dvEXT;
extern GLLOADER_API glProgramUniform3dvEXTFUNC glProgramUniform3dvEXT;
extern GLLOADER_API glProgramUniform4dvEXTFUNC glProgramUniform4dvEXT;
extern GLLOADER_API glProgramUniformMatrix2dvEXTFUNC glProgramUniformMatrix2dvEXT;
extern GLLOADER_API glProgramUniformMatrix3dvEXTFUNC glProgramUniformMatrix3dvEXT;
extern GLLOADER_API glProgramUniformMatrix4dvEXTFUNC glProgramUniformMatrix4dvEXT;
extern GLLOADER_API glProgramUniformMatrix2x3dvEXTFUNC glProgramUniformMatrix2x3dvEXT;
extern GLLOADER_API glProgramUniformMatrix2x4dvEXTFUNC glProgramUniformMatrix2x4dvEXT;
extern GLLOADER_API glProgramUniformMatrix3x2dvEXTFUNC glProgramUniformMatrix3x2dvEXT;
extern GLLOADER_API glProgramUniformMatrix3x4dvEXTFUNC glProgramUniformMatrix3x4dvEXT;
extern GLLOADER_API glProgramUniformMatrix4x2dvEXTFUNC glProgramUniformMatrix4x2dvEXT;
extern GLLOADER_API glProgramUniformMatrix4x3dvEXTFUNC glProgramUniformMatrix4x3dvEXT;
extern GLLOADER_API glEnableClientStateiEXTFUNC glEnableClientStateiEXT;
extern GLLOADER_API glDisableClientStateiEXTFUNC glDisableClientStateiEXT;
extern GLLOADER_API glGetFloati_vEXTFUNC glGetFloati_vEXT;
extern GLLOADER_API glGetDoublei_vEXTFUNC glGetDoublei_vEXT;
extern GLLOADER_API glGetPointeri_vEXTFUNC glGetPointeri_vEXT;
extern GLLOADER_API glEnableIndexedEXTFUNC glEnableIndexedEXT;
extern GLLOADER_API glDisableIndexedEXTFUNC glDisableIndexedEXT;
extern GLLOADER_API glGetIntegerIndexedvEXTFUNC glGetIntegerIndexedvEXT;
extern GLLOADER_API glGetBooleanIndexedvEXTFUNC glGetBooleanIndexedvEXT;
extern GLLOADER_API glVertexArrayVertexOffsetEXTFUNC glVertexArrayVertexOffsetEXT;
extern GLLOADER_API glVertexArrayColorOffsetEXTFUNC glVertexArrayColorOffsetEXT;
extern GLLOADER_API glVertexArrayEdgeFlagOffsetEXTFUNC glVertexArrayEdgeFlagOffsetEXT;
extern GLLOADER_API glVertexArrayIndexOffsetEXTFUNC glVertexArrayIndexOffsetEXT;
extern GLLOADER_API glVertexArrayNormalOffsetEXTFUNC glVertexArrayNormalOffsetEXT;
extern GLLOADER_API glVertexArrayTexCoordOffsetEXTFUNC glVertexArrayTexCoordOffsetEXT;
extern GLLOADER_API glVertexArrayMultiTexCoordOffsetEXTFUNC glVertexArrayMultiTexCoordOffsetEXT;
extern GLLOADER_API glVertexArrayFogCoordOffsetEXTFUNC glVertexArrayFogCoordOffsetEXT;
extern GLLOADER_API glVertexArraySecondaryColorOffsetEXTFUNC glVertexArraySecondaryColorOffsetEXT;
extern GLLOADER_API glVertexArrayVertexAttribOffsetEXTFUNC glVertexArrayVertexAttribOffsetEXT;
extern GLLOADER_API glVertexArrayVertexAttribIOffsetEXTFUNC glVertexArrayVertexAttribIOffsetEXT;
extern GLLOADER_API glEnableVertexArrayEXTFUNC glEnableVertexArrayEXT;
extern GLLOADER_API glDisableVertexArrayEXTFUNC glDisableVertexArrayEXT;
extern GLLOADER_API glEnableVertexArrayAttribEXTFUNC glEnableVertexArrayAttribEXT;
extern GLLOADER_API glDisableVertexArrayAttribEXTFUNC glDisableVertexArrayAttribEXT;
extern GLLOADER_API glGetVertexArrayIntegervEXTFUNC glGetVertexArrayIntegervEXT;
extern GLLOADER_API glGetVertexArrayPointervEXTFUNC glGetVertexArrayPointervEXT;
extern GLLOADER_API glGetVertexArrayIntegeri_vEXTFUNC glGetVertexArrayIntegeri_vEXT;
extern GLLOADER_API glGetVertexArrayPointeri_vEXTFUNC glGetVertexArrayPointeri_vEXT;

#endif

#ifdef GL_EXT_draw_buffers2

typedef void (GLLOADER_APIENTRY *glColorMaskIndexedEXTFUNC)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GLLOADER_APIENTRY *glIsEnabledIndexedEXTFUNC)(GLenum target, GLuint index);

extern GLLOADER_API glColorMaskIndexedEXTFUNC glColorMaskIndexedEXT;
extern GLLOADER_API glIsEnabledIndexedEXTFUNC glIsEnabledIndexedEXT;

#endif

#ifdef GL_EXT_draw_instanced

typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedEXTFUNC)(GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedEXTFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei primcount);

extern GLLOADER_API glDrawArraysInstancedEXTFUNC glDrawArraysInstancedEXT;
extern GLLOADER_API glDrawElementsInstancedEXTFUNC glDrawElementsInstancedEXT;

#endif

#ifdef GL_EXT_draw_range_elements

typedef void (GLLOADER_APIENTRY *glDrawRangeElementsEXTFUNC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices);

extern GLLOADER_API glDrawRangeElementsEXTFUNC glDrawRangeElementsEXT;

#endif

#ifdef GL_EXT_fog_coord

typedef void (GLLOADER_APIENTRY *glFogCoordfEXTFUNC)(GLfloat coord);
typedef void (GLLOADER_APIENTRY *glFogCoordfvEXTFUNC)(const GLfloat* coord);
typedef void (GLLOADER_APIENTRY *glFogCoorddEXTFUNC)(GLdouble coord);
typedef void (GLLOADER_APIENTRY *glFogCoorddvEXTFUNC)(const GLdouble* coord);
typedef void (GLLOADER_APIENTRY *glFogCoordPointerEXTFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);

extern GLLOADER_API glFogCoordfEXTFUNC glFogCoordfEXT;
extern GLLOADER_API glFogCoordfvEXTFUNC glFogCoordfvEXT;
extern GLLOADER_API glFogCoorddEXTFUNC glFogCoorddEXT;
extern GLLOADER_API glFogCoorddvEXTFUNC glFogCoorddvEXT;
extern GLLOADER_API glFogCoordPointerEXTFUNC glFogCoordPointerEXT;

#endif

#ifdef GL_EXT_fragment_lighting

typedef void (GLLOADER_APIENTRY *glFragmentColorMaterialEXTFUNC)(GLenum face, GLenum mode);
typedef void (GLLOADER_APIENTRY *glFragmentLightfEXTFUNC)(GLenum light, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFragmentLightfvEXTFUNC)(GLenum light, GLenum pname, const GLfloat* param);
typedef void (GLLOADER_APIENTRY *glFragmentLightiEXTFUNC)(GLenum light, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFragmentLightivEXTFUNC)(GLenum light, GLenum pname, const GLint* param);
typedef void (GLLOADER_APIENTRY *glFragmentLightModelfEXTFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFragmentLightModelfvEXTFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glFragmentLightModeliEXTFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFragmentLightModelivEXTFUNC)(GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialfEXTFUNC)(GLenum face, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialfvEXTFUNC)(GLenum face, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialiEXTFUNC)(GLenum face, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialivEXTFUNC)(GLenum face, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentLightfvEXTFUNC)(GLenum light, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentLightivEXTFUNC)(GLenum light, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentMaterialfvEXTFUNC)(GLenum face, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentMaterialivEXTFUNC)(GLenum face, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glLightEnviEXTFUNC)(GLenum pname, GLint param);

extern GLLOADER_API glFragmentColorMaterialEXTFUNC glFragmentColorMaterialEXT;
extern GLLOADER_API glFragmentLightfEXTFUNC glFragmentLightfEXT;
extern GLLOADER_API glFragmentLightfvEXTFUNC glFragmentLightfvEXT;
extern GLLOADER_API glFragmentLightiEXTFUNC glFragmentLightiEXT;
extern GLLOADER_API glFragmentLightivEXTFUNC glFragmentLightivEXT;
extern GLLOADER_API glFragmentLightModelfEXTFUNC glFragmentLightModelfEXT;
extern GLLOADER_API glFragmentLightModelfvEXTFUNC glFragmentLightModelfvEXT;
extern GLLOADER_API glFragmentLightModeliEXTFUNC glFragmentLightModeliEXT;
extern GLLOADER_API glFragmentLightModelivEXTFUNC glFragmentLightModelivEXT;
extern GLLOADER_API glFragmentMaterialfEXTFUNC glFragmentMaterialfEXT;
extern GLLOADER_API glFragmentMaterialfvEXTFUNC glFragmentMaterialfvEXT;
extern GLLOADER_API glFragmentMaterialiEXTFUNC glFragmentMaterialiEXT;
extern GLLOADER_API glFragmentMaterialivEXTFUNC glFragmentMaterialivEXT;
extern GLLOADER_API glGetFragmentLightfvEXTFUNC glGetFragmentLightfvEXT;
extern GLLOADER_API glGetFragmentLightivEXTFUNC glGetFragmentLightivEXT;
extern GLLOADER_API glGetFragmentMaterialfvEXTFUNC glGetFragmentMaterialfvEXT;
extern GLLOADER_API glGetFragmentMaterialivEXTFUNC glGetFragmentMaterialivEXT;
extern GLLOADER_API glLightEnviEXTFUNC glLightEnviEXT;

#endif

#ifdef GL_EXT_framebuffer_blit

typedef void (GLLOADER_APIENTRY *glBlitFramebufferEXTFUNC)(GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

extern GLLOADER_API glBlitFramebufferEXTFUNC glBlitFramebufferEXT;

#endif

#ifdef GL_EXT_framebuffer_multisample

typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleEXTFUNC)(GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);

extern GLLOADER_API glRenderbufferStorageMultisampleEXTFUNC glRenderbufferStorageMultisampleEXT;

#endif

#ifdef GL_EXT_framebuffer_object

typedef GLboolean (GLLOADER_APIENTRY *glIsRenderbufferEXTFUNC)(GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glBindRenderbufferEXTFUNC)(GLenum target, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glDeleteRenderbuffersEXTFUNC)(GLsizei n, const GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glGenRenderbuffersEXTFUNC)(GLsizei n, GLuint* renderbuffers);
typedef void (GLLOADER_APIENTRY *glRenderbufferStorageEXTFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetRenderbufferParameterivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef GLboolean (GLLOADER_APIENTRY *glIsFramebufferEXTFUNC)(GLuint framebuffer);
typedef void (GLLOADER_APIENTRY *glBindFramebufferEXTFUNC)(GLenum target, GLuint framebuffer);
typedef void (GLLOADER_APIENTRY *glDeleteFramebuffersEXTFUNC)(GLsizei n, const GLuint* framebuffers);
typedef void (GLLOADER_APIENTRY *glGenFramebuffersEXTFUNC)(GLsizei n, GLuint* framebuffers);
typedef GLenum (GLLOADER_APIENTRY *glCheckFramebufferStatusEXTFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture1DEXTFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture2DEXTFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glFramebufferTexture3DEXTFUNC)(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GLLOADER_APIENTRY *glFramebufferRenderbufferEXTFUNC)(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer);
typedef void (GLLOADER_APIENTRY *glGetFramebufferAttachmentParameterivEXTFUNC)(GLenum target, GLenum attachment, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGenerateMipmapEXTFUNC)(GLenum target);

extern GLLOADER_API glIsRenderbufferEXTFUNC glIsRenderbufferEXT;
extern GLLOADER_API glBindRenderbufferEXTFUNC glBindRenderbufferEXT;
extern GLLOADER_API glDeleteRenderbuffersEXTFUNC glDeleteRenderbuffersEXT;
extern GLLOADER_API glGenRenderbuffersEXTFUNC glGenRenderbuffersEXT;
extern GLLOADER_API glRenderbufferStorageEXTFUNC glRenderbufferStorageEXT;
extern GLLOADER_API glGetRenderbufferParameterivEXTFUNC glGetRenderbufferParameterivEXT;
extern GLLOADER_API glIsFramebufferEXTFUNC glIsFramebufferEXT;
extern GLLOADER_API glBindFramebufferEXTFUNC glBindFramebufferEXT;
extern GLLOADER_API glDeleteFramebuffersEXTFUNC glDeleteFramebuffersEXT;
extern GLLOADER_API glGenFramebuffersEXTFUNC glGenFramebuffersEXT;
extern GLLOADER_API glCheckFramebufferStatusEXTFUNC glCheckFramebufferStatusEXT;
extern GLLOADER_API glFramebufferTexture1DEXTFUNC glFramebufferTexture1DEXT;
extern GLLOADER_API glFramebufferTexture2DEXTFUNC glFramebufferTexture2DEXT;
extern GLLOADER_API glFramebufferTexture3DEXTFUNC glFramebufferTexture3DEXT;
extern GLLOADER_API glFramebufferRenderbufferEXTFUNC glFramebufferRenderbufferEXT;
extern GLLOADER_API glGetFramebufferAttachmentParameterivEXTFUNC glGetFramebufferAttachmentParameterivEXT;
extern GLLOADER_API glGenerateMipmapEXTFUNC glGenerateMipmapEXT;

#endif

#ifdef GL_EXT_geometry_shader4

typedef void (GLLOADER_APIENTRY *glProgramParameteriEXTFUNC)(GLuint program, GLenum pname, GLint value);

extern GLLOADER_API glProgramParameteriEXTFUNC glProgramParameteriEXT;

#endif

#ifdef GL_EXT_gpu_program_parameters

typedef void (GLLOADER_APIENTRY *glProgramEnvParameters4fvEXTFUNC)(GLenum target, GLuint index, GLsizei count, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameters4fvEXTFUNC)(GLenum target, GLuint index, GLsizei count, const GLfloat* params);

extern GLLOADER_API glProgramEnvParameters4fvEXTFUNC glProgramEnvParameters4fvEXT;
extern GLLOADER_API glProgramLocalParameters4fvEXTFUNC glProgramLocalParameters4fvEXT;

#endif

#ifdef GL_EXT_gpu_shader4

typedef void (GLLOADER_APIENTRY *glGetUniformuivEXTFUNC)(GLuint program, GLint location, GLuint* params);
typedef void (GLLOADER_APIENTRY *glBindFragDataLocationEXTFUNC)(GLuint program, GLuint color, const GLchar* name);
typedef GLint (GLLOADER_APIENTRY *glGetFragDataLocationEXTFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glUniform1uiEXTFUNC)(GLint location, GLuint v0);
typedef void (GLLOADER_APIENTRY *glUniform2uiEXTFUNC)(GLint location, GLuint v0, GLuint v1);
typedef void (GLLOADER_APIENTRY *glUniform3uiEXTFUNC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLLOADER_APIENTRY *glUniform4uiEXTFUNC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLLOADER_APIENTRY *glUniform1uivEXTFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform2uivEXTFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform3uivEXTFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform4uivEXTFUNC)(GLint location, GLsizei count, const GLuint* value);

extern GLLOADER_API glGetUniformuivEXTFUNC glGetUniformuivEXT;
extern GLLOADER_API glBindFragDataLocationEXTFUNC glBindFragDataLocationEXT;
extern GLLOADER_API glGetFragDataLocationEXTFUNC glGetFragDataLocationEXT;
extern GLLOADER_API glUniform1uiEXTFUNC glUniform1uiEXT;
extern GLLOADER_API glUniform2uiEXTFUNC glUniform2uiEXT;
extern GLLOADER_API glUniform3uiEXTFUNC glUniform3uiEXT;
extern GLLOADER_API glUniform4uiEXTFUNC glUniform4uiEXT;
extern GLLOADER_API glUniform1uivEXTFUNC glUniform1uivEXT;
extern GLLOADER_API glUniform2uivEXTFUNC glUniform2uivEXT;
extern GLLOADER_API glUniform3uivEXTFUNC glUniform3uivEXT;
extern GLLOADER_API glUniform4uivEXTFUNC glUniform4uivEXT;

#endif

#ifdef GL_EXT_histogram

typedef void (GLLOADER_APIENTRY *glGetHistogramEXTFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values);
typedef void (GLLOADER_APIENTRY *glGetHistogramParameterfvEXTFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetHistogramParameterivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMinmaxEXTFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values);
typedef void (GLLOADER_APIENTRY *glGetMinmaxParameterfvEXTFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMinmaxParameterivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glHistogramEXTFUNC)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void (GLLOADER_APIENTRY *glMinmaxEXTFUNC)(GLenum target, GLenum internalformat, GLboolean sink);
typedef void (GLLOADER_APIENTRY *glResetHistogramEXTFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glResetMinmaxEXTFUNC)(GLenum target);

extern GLLOADER_API glGetHistogramEXTFUNC glGetHistogramEXT;
extern GLLOADER_API glGetHistogramParameterfvEXTFUNC glGetHistogramParameterfvEXT;
extern GLLOADER_API glGetHistogramParameterivEXTFUNC glGetHistogramParameterivEXT;
extern GLLOADER_API glGetMinmaxEXTFUNC glGetMinmaxEXT;
extern GLLOADER_API glGetMinmaxParameterfvEXTFUNC glGetMinmaxParameterfvEXT;
extern GLLOADER_API glGetMinmaxParameterivEXTFUNC glGetMinmaxParameterivEXT;
extern GLLOADER_API glHistogramEXTFUNC glHistogramEXT;
extern GLLOADER_API glMinmaxEXTFUNC glMinmaxEXT;
extern GLLOADER_API glResetHistogramEXTFUNC glResetHistogramEXT;
extern GLLOADER_API glResetMinmaxEXTFUNC glResetMinmaxEXT;

#endif

#ifdef GL_EXT_index_func

typedef void (GLLOADER_APIENTRY *glIndexFuncEXTFUNC)(GLenum func, GLclampf ref);

extern GLLOADER_API glIndexFuncEXTFUNC glIndexFuncEXT;

#endif

#ifdef GL_EXT_index_material

typedef void (GLLOADER_APIENTRY *glIndexMaterialEXTFUNC)(GLenum face, GLenum mode);

extern GLLOADER_API glIndexMaterialEXTFUNC glIndexMaterialEXT;

#endif

#ifdef GL_EXT_light_texture

typedef void (GLLOADER_APIENTRY *glApplyTextureEXTFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glTextureLightEXTFUNC)(GLenum pname);
typedef void (GLLOADER_APIENTRY *glTextureMaterialEXTFUNC)(GLenum face, GLenum mode);

extern GLLOADER_API glApplyTextureEXTFUNC glApplyTextureEXT;
extern GLLOADER_API glTextureLightEXTFUNC glTextureLightEXT;
extern GLLOADER_API glTextureMaterialEXTFUNC glTextureMaterialEXT;

#endif

#ifdef GL_EXT_multisample

typedef void (GLLOADER_APIENTRY *glSampleMaskEXTFUNC)(GLclampf value, GLboolean invert);
typedef void (GLLOADER_APIENTRY *glSamplePatternEXTFUNC)(GLenum pattern);

extern GLLOADER_API glSampleMaskEXTFUNC glSampleMaskEXT;
extern GLLOADER_API glSamplePatternEXTFUNC glSamplePatternEXT;

#endif

#ifdef GL_EXT_multi_draw_arrays

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysEXTFUNC)(GLenum mode, GLint* first, GLsizei* count, GLsizei primcount);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsEXTFUNC)(GLenum mode, GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount);

extern GLLOADER_API glMultiDrawArraysEXTFUNC glMultiDrawArraysEXT;
extern GLLOADER_API glMultiDrawElementsEXTFUNC glMultiDrawElementsEXT;

#endif

#ifdef GL_EXT_paletted_texture

typedef void (GLLOADER_APIENTRY *glColorTableEXTFUNC)(GLenum target, GLenum internalFormat, GLsizei width, GLenum format, GLenum type, const GLvoid* table);
typedef void (GLLOADER_APIENTRY *glGetColorTableEXTFUNC)(GLenum target, GLenum format, GLenum type, GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGetColorTableParameterivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetColorTableParameterfvEXTFUNC)(GLenum target, GLenum pname, GLfloat* params);

extern GLLOADER_API glColorTableEXTFUNC glColorTableEXT;
extern GLLOADER_API glGetColorTableEXTFUNC glGetColorTableEXT;
extern GLLOADER_API glGetColorTableParameterivEXTFUNC glGetColorTableParameterivEXT;
extern GLLOADER_API glGetColorTableParameterfvEXTFUNC glGetColorTableParameterfvEXT;

#endif

#ifdef GL_EXT_pixel_transform

typedef void (GLLOADER_APIENTRY *glPixelTransformParameteriEXTFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glPixelTransformParameterfEXTFUNC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPixelTransformParameterivEXTFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glPixelTransformParameterfvEXTFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetPixelTransformParameterivEXTFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGetPixelTransformParameterfvEXTFUNC)(GLenum target, GLenum pname, const GLfloat* params);

extern GLLOADER_API glPixelTransformParameteriEXTFUNC glPixelTransformParameteriEXT;
extern GLLOADER_API glPixelTransformParameterfEXTFUNC glPixelTransformParameterfEXT;
extern GLLOADER_API glPixelTransformParameterivEXTFUNC glPixelTransformParameterivEXT;
extern GLLOADER_API glPixelTransformParameterfvEXTFUNC glPixelTransformParameterfvEXT;
extern GLLOADER_API glGetPixelTransformParameterivEXTFUNC glGetPixelTransformParameterivEXT;
extern GLLOADER_API glGetPixelTransformParameterfvEXTFUNC glGetPixelTransformParameterfvEXT;

#endif

#ifdef GL_EXT_point_parameters

typedef void (GLLOADER_APIENTRY *glPointParameterfEXTFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPointParameterfvEXTFUNC)(GLenum pname, const GLfloat* params);

extern GLLOADER_API glPointParameterfEXTFUNC glPointParameterfEXT;
extern GLLOADER_API glPointParameterfvEXTFUNC glPointParameterfvEXT;

#endif

#ifdef GL_EXT_polygon_offset

typedef void (GLLOADER_APIENTRY *glPolygonOffsetEXTFUNC)(GLfloat factor, GLfloat bias);

extern GLLOADER_API glPolygonOffsetEXTFUNC glPolygonOffsetEXT;

#endif

#ifdef GL_EXT_polygon_offset_clamp

typedef void (GLLOADER_APIENTRY *glPolygonOffsetClampEXTFUNC)(GLfloat factor, GLfloat units, GLfloat clamp);

extern GLLOADER_API glPolygonOffsetClampEXTFUNC glPolygonOffsetClampEXT;

#endif

#ifdef GL_EXT_provoking_vertex

typedef void (GLLOADER_APIENTRY *glProvokingVertexEXTFUNC)(GLenum mode);

extern GLLOADER_API glProvokingVertexEXTFUNC glProvokingVertexEXT;

#endif

#ifdef GL_EXT_raster_multisample

typedef void (GLLOADER_APIENTRY *glRasterSamplesEXTFUNC)(GLuint samples, GLboolean fixedsamplelocations);

extern GLLOADER_API glRasterSamplesEXTFUNC glRasterSamplesEXT;

#endif

#ifdef GL_EXT_secondary_color

typedef void (GLLOADER_APIENTRY *glSecondaryColor3bEXTFUNC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3bvEXTFUNC)(const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3dEXTFUNC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3dvEXTFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3fEXTFUNC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3fvEXTFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3iEXTFUNC)(GLint red, GLint green, GLint blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3ivEXTFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3sEXTFUNC)(GLshort red, GLshort green, GLshort blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3svEXTFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3ubEXTFUNC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3ubvEXTFUNC)(const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3uiEXTFUNC)(GLuint red, GLuint green, GLuint blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3uivEXTFUNC)(const GLuint* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3usEXTFUNC)(GLushort red, GLushort green, GLushort blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3usvEXTFUNC)(const GLushort* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColorPointerEXTFUNC)(GLint size, GLenum type, GLsizei stride, GLvoid* pointer);

extern GLLOADER_API glSecondaryColor3bEXTFUNC glSecondaryColor3bEXT;
extern GLLOADER_API glSecondaryColor3bvEXTFUNC glSecondaryColor3bvEXT;
extern GLLOADER_API glSecondaryColor3dEXTFUNC glSecondaryColor3dEXT;
extern GLLOADER_API glSecondaryColor3dvEXTFUNC glSecondaryColor3dvEXT;
extern GLLOADER_API glSecondaryColor3fEXTFUNC glSecondaryColor3fEXT;
extern GLLOADER_API glSecondaryColor3fvEXTFUNC glSecondaryColor3fvEXT;
extern GLLOADER_API glSecondaryColor3iEXTFUNC glSecondaryColor3iEXT;
extern GLLOADER_API glSecondaryColor3ivEXTFUNC glSecondaryColor3ivEXT;
extern GLLOADER_API glSecondaryColor3sEXTFUNC glSecondaryColor3sEXT;
extern GLLOADER_API glSecondaryColor3svEXTFUNC glSecondaryColor3svEXT;
extern GLLOADER_API glSecondaryColor3ubEXTFUNC glSecondaryColor3ubEXT;
extern GLLOADER_API glSecondaryColor3ubvEXTFUNC glSecondaryColor3ubvEXT;
extern GLLOADER_API glSecondaryColor3uiEXTFUNC glSecondaryColor3uiEXT;
extern GLLOADER_API glSecondaryColor3uivEXTFUNC glSecondaryColor3uivEXT;
extern GLLOADER_API glSecondaryColor3usEXTFUNC glSecondaryColor3usEXT;
extern GLLOADER_API glSecondaryColor3usvEXTFUNC glSecondaryColor3usvEXT;
extern GLLOADER_API glSecondaryColorPointerEXTFUNC glSecondaryColorPointerEXT;

#endif

#ifdef GL_EXT_separate_shader_objects

typedef void (GLLOADER_APIENTRY *glUseShaderProgramEXTFUNC)(GLenum type, GLuint program);
typedef void (GLLOADER_APIENTRY *glActiveProgramEXTFUNC)(GLuint program);
typedef GLuint (GLLOADER_APIENTRY *glCreateShaderProgramEXTFUNC)(GLenum type, const GLchar* string);

extern GLLOADER_API glUseShaderProgramEXTFUNC glUseShaderProgramEXT;
extern GLLOADER_API glActiveProgramEXTFUNC glActiveProgramEXT;
extern GLLOADER_API glCreateShaderProgramEXTFUNC glCreateShaderProgramEXT;

#endif

#ifdef GL_EXT_shader_image_load_store

typedef void (GLLOADER_APIENTRY *glBindImageTextureEXTFUNC)(GLuint index, GLuint texture, GLint level, GLboolean layered, GLint layer, GLenum access, GLint format);
typedef void (GLLOADER_APIENTRY *glMemoryBarrierEXTFUNC)(GLbitfield barriers);

extern GLLOADER_API glBindImageTextureEXTFUNC glBindImageTextureEXT;
extern GLLOADER_API glMemoryBarrierEXTFUNC glMemoryBarrierEXT;

#endif

#ifdef GL_EXT_stencil_clear_tag

typedef void (GLLOADER_APIENTRY *glStencilClearTagEXTFUNC)(GLsizei stencilTagBits, GLuint stencilClearTag);

extern GLLOADER_API glStencilClearTagEXTFUNC glStencilClearTagEXT;

#endif

#ifdef GL_EXT_stencil_two_side

typedef void (GLLOADER_APIENTRY *glActiveStencilFaceEXTFUNC)(GLenum face);

extern GLLOADER_API glActiveStencilFaceEXTFUNC glActiveStencilFaceEXT;

#endif

#ifdef GL_EXT_subtexture

typedef void (GLLOADER_APIENTRY *glTexSubImage1DEXTFUNC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage2DEXTFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);

extern GLLOADER_API glTexSubImage1DEXTFUNC glTexSubImage1DEXT;
extern GLLOADER_API glTexSubImage2DEXTFUNC glTexSubImage2DEXT;

#endif

#ifdef GL_EXT_texture3D

typedef void (GLLOADER_APIENTRY *glTexImage3DEXTFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage3DEXTFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);

extern GLLOADER_API glTexImage3DEXTFUNC glTexImage3DEXT;
extern GLLOADER_API glTexSubImage3DEXTFUNC glTexSubImage3DEXT;

#endif

#ifdef GL_EXT_texture_buffer_object

typedef void (GLLOADER_APIENTRY *glTexBufferEXTFUNC)(GLenum target, GLenum internalformat, GLuint buffer);

extern GLLOADER_API glTexBufferEXTFUNC glTexBufferEXT;

#endif

#ifdef GL_EXT_texture_integer

typedef void (GLLOADER_APIENTRY *glTexParameterIivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glTexParameterIuivEXTFUNC)(GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIivEXTFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIuivEXTFUNC)(GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glClearColorIiEXTFUNC)(GLint red, GLint green, GLint blue, GLint alpha);
typedef void (GLLOADER_APIENTRY *glClearColorIuiEXTFUNC)(GLuint red, GLuint green, GLuint blue, GLuint alpha);

extern GLLOADER_API glTexParameterIivEXTFUNC glTexParameterIivEXT;
extern GLLOADER_API glTexParameterIuivEXTFUNC glTexParameterIuivEXT;
extern GLLOADER_API glGetTexParameterIivEXTFUNC glGetTexParameterIivEXT;
extern GLLOADER_API glGetTexParameterIuivEXTFUNC glGetTexParameterIuivEXT;
extern GLLOADER_API glClearColorIiEXTFUNC glClearColorIiEXT;
extern GLLOADER_API glClearColorIuiEXTFUNC glClearColorIuiEXT;

#endif

#ifdef GL_EXT_texture_object

typedef GLboolean (GLLOADER_APIENTRY *glAreTexturesResidentEXTFUNC)(GLsizei n, const GLuint* textures, GLboolean* residences);
typedef void (GLLOADER_APIENTRY *glBindTextureEXTFUNC)(GLenum target, GLuint texture);
typedef void (GLLOADER_APIENTRY *glDeleteTexturesEXTFUNC)(GLsizei n, const GLuint* textures);
typedef void (GLLOADER_APIENTRY *glGenTexturesEXTFUNC)(GLsizei n, GLuint* textures);
typedef GLboolean (GLLOADER_APIENTRY *glIsTextureEXTFUNC)(GLuint texture);
typedef void (GLLOADER_APIENTRY *glPrioritizeTexturesEXTFUNC)(GLsizei n, const GLuint* textures, const GLclampf* priorities);

extern GLLOADER_API glAreTexturesResidentEXTFUNC glAreTexturesResidentEXT;
extern GLLOADER_API glBindTextureEXTFUNC glBindTextureEXT;
extern GLLOADER_API glDeleteTexturesEXTFUNC glDeleteTexturesEXT;
extern GLLOADER_API glGenTexturesEXTFUNC glGenTexturesEXT;
extern GLLOADER_API glIsTextureEXTFUNC glIsTextureEXT;
extern GLLOADER_API glPrioritizeTexturesEXTFUNC glPrioritizeTexturesEXT;

#endif

#ifdef GL_EXT_texture_perturb_normal

typedef void (GLLOADER_APIENTRY *glTextureNormalEXTFUNC)(GLenum mode);

extern GLLOADER_API glTextureNormalEXTFUNC glTextureNormalEXT;

#endif

#ifdef GL_EXT_timer_query

typedef void (GLLOADER_APIENTRY *glGetQueryObjecti64vEXTFUNC)(GLuint id, GLenum pname, GLint64EXT* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectui64vEXTFUNC)(GLuint id, GLenum pname, GLuint64EXT* params);

extern GLLOADER_API glGetQueryObjecti64vEXTFUNC glGetQueryObjecti64vEXT;
extern GLLOADER_API glGetQueryObjectui64vEXTFUNC glGetQueryObjectui64vEXT;

#endif

#ifdef GL_EXT_transform_feedback

typedef void (GLLOADER_APIENTRY *glBeginTransformFeedbackEXTFUNC)(GLenum primitiveMode);
typedef void (GLLOADER_APIENTRY *glEndTransformFeedbackEXTFUNC)();
typedef void (GLLOADER_APIENTRY *glBindBufferRangeEXTFUNC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glBindBufferOffsetEXTFUNC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glBindBufferBaseEXTFUNC)(GLenum target, GLuint index, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTransformFeedbackVaryingsEXTFUNC)(GLuint program, GLsizei count, const GLchar** varyings, GLenum bufferMode);
typedef void (GLLOADER_APIENTRY *glGetTransformFeedbackVaryingEXTFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);

extern GLLOADER_API glBeginTransformFeedbackEXTFUNC glBeginTransformFeedbackEXT;
extern GLLOADER_API glEndTransformFeedbackEXTFUNC glEndTransformFeedbackEXT;
extern GLLOADER_API glBindBufferRangeEXTFUNC glBindBufferRangeEXT;
extern GLLOADER_API glBindBufferOffsetEXTFUNC glBindBufferOffsetEXT;
extern GLLOADER_API glBindBufferBaseEXTFUNC glBindBufferBaseEXT;
extern GLLOADER_API glTransformFeedbackVaryingsEXTFUNC glTransformFeedbackVaryingsEXT;
extern GLLOADER_API glGetTransformFeedbackVaryingEXTFUNC glGetTransformFeedbackVaryingEXT;

#endif

#ifdef GL_EXT_transform_feedback2

typedef void (GLLOADER_APIENTRY *glBindTransformFeedbackEXTFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glDeleteTransformFeedbacksEXTFUNC)(GLsizei n, GLuint const * ids);
typedef void (GLLOADER_APIENTRY *glGenTransformFeedbacksEXTFUNC)(GLsizei n, GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsTransformFeedbackEXTFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glPauseTransformFeedbackEXTFUNC)();
typedef void (GLLOADER_APIENTRY *glResumeTransformFeedbackEXTFUNC)();
typedef void (GLLOADER_APIENTRY *glDrawTransformFeedbackEXTFUNC)(GLenum mode, GLuint id);

extern GLLOADER_API glBindTransformFeedbackEXTFUNC glBindTransformFeedbackEXT;
extern GLLOADER_API glDeleteTransformFeedbacksEXTFUNC glDeleteTransformFeedbacksEXT;
extern GLLOADER_API glGenTransformFeedbacksEXTFUNC glGenTransformFeedbacksEXT;
extern GLLOADER_API glIsTransformFeedbackEXTFUNC glIsTransformFeedbackEXT;
extern GLLOADER_API glPauseTransformFeedbackEXTFUNC glPauseTransformFeedbackEXT;
extern GLLOADER_API glResumeTransformFeedbackEXTFUNC glResumeTransformFeedbackEXT;
extern GLLOADER_API glDrawTransformFeedbackEXTFUNC glDrawTransformFeedbackEXT;

#endif

#ifdef GL_EXT_vertex_array

typedef void (GLLOADER_APIENTRY *glArrayElementEXTFUNC)(GLint i);
typedef void (GLLOADER_APIENTRY *glColorPointerEXTFUNC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glDrawArraysEXTFUNC)(GLenum mode, GLint first, GLsizei count);
typedef void (GLLOADER_APIENTRY *glEdgeFlagPointerEXTFUNC)(GLsizei stride, GLsizei count, const GLboolean* pointer);
typedef void (GLLOADER_APIENTRY *glGetPointervEXTFUNC)(GLenum pname, GLvoid** params);
typedef void (GLLOADER_APIENTRY *glIndexPointerEXTFUNC)(GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glNormalPointerEXTFUNC)(GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glTexCoordPointerEXTFUNC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glVertexPointerEXTFUNC)(GLint size, GLenum type, GLsizei stride, GLsizei count, const GLvoid* pointer);

extern GLLOADER_API glArrayElementEXTFUNC glArrayElementEXT;
extern GLLOADER_API glColorPointerEXTFUNC glColorPointerEXT;
extern GLLOADER_API glDrawArraysEXTFUNC glDrawArraysEXT;
extern GLLOADER_API glEdgeFlagPointerEXTFUNC glEdgeFlagPointerEXT;
extern GLLOADER_API glGetPointervEXTFUNC glGetPointervEXT;
extern GLLOADER_API glIndexPointerEXTFUNC glIndexPointerEXT;
extern GLLOADER_API glNormalPointerEXTFUNC glNormalPointerEXT;
extern GLLOADER_API glTexCoordPointerEXTFUNC glTexCoordPointerEXT;
extern GLLOADER_API glVertexPointerEXTFUNC glVertexPointerEXT;

#endif

#ifdef GL_EXT_vertex_attrib_64bit

typedef void (GLLOADER_APIENTRY *glVertexAttribL1dEXTFUNC)(GLuint index, GLdouble x);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2dEXTFUNC)(GLuint index, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3dEXTFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4dEXTFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glVertexAttribL1dvEXTFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2dvEXTFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3dvEXTFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4dvEXTFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribLPointerEXTFUNC)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribLdvEXTFUNC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glVertexArrayVertexAttribLOffsetEXTFUNC)(GLuint vaobj, GLuint buffer, GLuint index, GLint size, GLenum type, GLsizei stride, GLintptr offset);

extern GLLOADER_API glVertexAttribL1dEXTFUNC glVertexAttribL1dEXT;
extern GLLOADER_API glVertexAttribL2dEXTFUNC glVertexAttribL2dEXT;
extern GLLOADER_API glVertexAttribL3dEXTFUNC glVertexAttribL3dEXT;
extern GLLOADER_API glVertexAttribL4dEXTFUNC glVertexAttribL4dEXT;
extern GLLOADER_API glVertexAttribL1dvEXTFUNC glVertexAttribL1dvEXT;
extern GLLOADER_API glVertexAttribL2dvEXTFUNC glVertexAttribL2dvEXT;
extern GLLOADER_API glVertexAttribL3dvEXTFUNC glVertexAttribL3dvEXT;
extern GLLOADER_API glVertexAttribL4dvEXTFUNC glVertexAttribL4dvEXT;
extern GLLOADER_API glVertexAttribLPointerEXTFUNC glVertexAttribLPointerEXT;
extern GLLOADER_API glGetVertexAttribLdvEXTFUNC glGetVertexAttribLdvEXT;
extern GLLOADER_API glVertexArrayVertexAttribLOffsetEXTFUNC glVertexArrayVertexAttribLOffsetEXT;

#endif

#ifdef GL_EXT_vertex_shader

typedef void (GLLOADER_APIENTRY *glBeginVertexShaderEXTFUNC)();
typedef void (GLLOADER_APIENTRY *glEndVertexShaderEXTFUNC)();
typedef void (GLLOADER_APIENTRY *glBindVertexShaderEXTFUNC)(GLuint id);
typedef GLuint (GLLOADER_APIENTRY *glGenVertexShadersEXTFUNC)(GLuint range);
typedef void (GLLOADER_APIENTRY *glDeleteVertexShaderEXTFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glShaderOp1EXTFUNC)(GLenum op, GLuint res, GLuint arg1);
typedef void (GLLOADER_APIENTRY *glShaderOp2EXTFUNC)(GLenum op, GLuint res, GLuint arg1, GLuint arg2);
typedef void (GLLOADER_APIENTRY *glShaderOp3EXTFUNC)(GLenum op, GLuint res, GLuint arg1, GLuint arg2, GLuint arg3);
typedef void (GLLOADER_APIENTRY *glSwizzleEXTFUNC)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
typedef void (GLLOADER_APIENTRY *glWriteMaskEXTFUNC)(GLuint res, GLuint in, GLenum outX, GLenum outY, GLenum outZ, GLenum outW);
typedef void (GLLOADER_APIENTRY *glInsertComponentEXTFUNC)(GLuint res, GLuint src, GLuint num);
typedef void (GLLOADER_APIENTRY *glExtractComponentEXTFUNC)(GLuint res, GLuint src, GLuint num);
typedef GLuint (GLLOADER_APIENTRY *glGenSymbolsEXTFUNC)(GLenum datatype, GLenum storagetype, GLenum range, GLuint components);
typedef void (GLLOADER_APIENTRY *glSetInvariantEXTFUNC)(GLuint id, GLenum type, GLvoid* addr);
typedef void (GLLOADER_APIENTRY *glSetLocalConstantEXTFUNC)(GLuint id, GLenum type, GLvoid* addr);
typedef void (GLLOADER_APIENTRY *glVariantbvEXTFUNC)(GLuint id, GLbyte* addr);
typedef void (GLLOADER_APIENTRY *glVariantsvEXTFUNC)(GLuint id, GLshort* addr);
typedef void (GLLOADER_APIENTRY *glVariantivEXTFUNC)(GLuint id, GLint* addr);
typedef void (GLLOADER_APIENTRY *glVariantfvEXTFUNC)(GLuint id, GLfloat* addr);
typedef void (GLLOADER_APIENTRY *glVariantdvEXTFUNC)(GLuint id, GLdouble* addr);
typedef void (GLLOADER_APIENTRY *glVariantubvEXTFUNC)(GLuint id, GLubyte* addr);
typedef void (GLLOADER_APIENTRY *glVariantusvEXTFUNC)(GLuint id, GLushort* addr);
typedef void (GLLOADER_APIENTRY *glVariantuivEXTFUNC)(GLuint id, GLuint* addr);
typedef void (GLLOADER_APIENTRY *glVariantPointerEXTFUNC)(GLuint id, GLenum type, GLuint stride, GLvoid* addr);
typedef void (GLLOADER_APIENTRY *glEnableVariantClientStateEXTFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glDisableVariantClientStateEXTFUNC)(GLuint id);
typedef GLuint (GLLOADER_APIENTRY *glBindLightParameterEXTFUNC)(GLenum light, GLenum value);
typedef GLuint (GLLOADER_APIENTRY *glBindMaterialParameterEXTFUNC)(GLenum face, GLenum value);
typedef GLuint (GLLOADER_APIENTRY *glBindTexGenParameterEXTFUNC)(GLenum unit, GLenum coord, GLenum value);
typedef GLuint (GLLOADER_APIENTRY *glBindTextureUnitParameterEXTFUNC)(GLenum unit, GLenum value);
typedef GLuint (GLLOADER_APIENTRY *glBindParameterEXTFUNC)(GLenum value);
typedef GLboolean (GLLOADER_APIENTRY *glIsVariantEnabledEXTFUNC)(GLuint id, GLenum cap);
typedef void (GLLOADER_APIENTRY *glGetVariantBooleanvEXTFUNC)(GLuint id, GLenum value, GLboolean* data);
typedef void (GLLOADER_APIENTRY *glGetVariantIntegervEXTFUNC)(GLuint id, GLenum value, GLint* data);
typedef void (GLLOADER_APIENTRY *glGetVariantFloatvEXTFUNC)(GLuint id, GLenum value, GLfloat* data);
typedef void (GLLOADER_APIENTRY *glGetVariantPointervEXTFUNC)(GLuint id, GLenum value, GLvoid** data);
typedef void (GLLOADER_APIENTRY *glGetInvariantBooleanvEXTFUNC)(GLuint id, GLenum value, GLboolean* data);
typedef void (GLLOADER_APIENTRY *glGetInvariantIntegervEXTFUNC)(GLuint id, GLenum value, GLint* data);
typedef void (GLLOADER_APIENTRY *glGetInvariantFloatvEXTFUNC)(GLuint id, GLenum value, GLfloat* data);
typedef void (GLLOADER_APIENTRY *glGetLocalConstantBooleanvEXTFUNC)(GLuint id, GLenum value, GLboolean* data);
typedef void (GLLOADER_APIENTRY *glGetLocalConstantIntegervEXTFUNC)(GLuint id, GLenum value, GLint* data);
typedef void (GLLOADER_APIENTRY *glGetLocalConstantFloatvEXTFUNC)(GLuint id, GLenum value, GLfloat* data);

extern GLLOADER_API glBeginVertexShaderEXTFUNC glBeginVertexShaderEXT;
extern GLLOADER_API glEndVertexShaderEXTFUNC glEndVertexShaderEXT;
extern GLLOADER_API glBindVertexShaderEXTFUNC glBindVertexShaderEXT;
extern GLLOADER_API glGenVertexShadersEXTFUNC glGenVertexShadersEXT;
extern GLLOADER_API glDeleteVertexShaderEXTFUNC glDeleteVertexShaderEXT;
extern GLLOADER_API glShaderOp1EXTFUNC glShaderOp1EXT;
extern GLLOADER_API glShaderOp2EXTFUNC glShaderOp2EXT;
extern GLLOADER_API glShaderOp3EXTFUNC glShaderOp3EXT;
extern GLLOADER_API glSwizzleEXTFUNC glSwizzleEXT;
extern GLLOADER_API glWriteMaskEXTFUNC glWriteMaskEXT;
extern GLLOADER_API glInsertComponentEXTFUNC glInsertComponentEXT;
extern GLLOADER_API glExtractComponentEXTFUNC glExtractComponentEXT;
extern GLLOADER_API glGenSymbolsEXTFUNC glGenSymbolsEXT;
extern GLLOADER_API glSetInvariantEXTFUNC glSetInvariantEXT;
extern GLLOADER_API glSetLocalConstantEXTFUNC glSetLocalConstantEXT;
extern GLLOADER_API glVariantbvEXTFUNC glVariantbvEXT;
extern GLLOADER_API glVariantsvEXTFUNC glVariantsvEXT;
extern GLLOADER_API glVariantivEXTFUNC glVariantivEXT;
extern GLLOADER_API glVariantfvEXTFUNC glVariantfvEXT;
extern GLLOADER_API glVariantdvEXTFUNC glVariantdvEXT;
extern GLLOADER_API glVariantubvEXTFUNC glVariantubvEXT;
extern GLLOADER_API glVariantusvEXTFUNC glVariantusvEXT;
extern GLLOADER_API glVariantuivEXTFUNC glVariantuivEXT;
extern GLLOADER_API glVariantPointerEXTFUNC glVariantPointerEXT;
extern GLLOADER_API glEnableVariantClientStateEXTFUNC glEnableVariantClientStateEXT;
extern GLLOADER_API glDisableVariantClientStateEXTFUNC glDisableVariantClientStateEXT;
extern GLLOADER_API glBindLightParameterEXTFUNC glBindLightParameterEXT;
extern GLLOADER_API glBindMaterialParameterEXTFUNC glBindMaterialParameterEXT;
extern GLLOADER_API glBindTexGenParameterEXTFUNC glBindTexGenParameterEXT;
extern GLLOADER_API glBindTextureUnitParameterEXTFUNC glBindTextureUnitParameterEXT;
extern GLLOADER_API glBindParameterEXTFUNC glBindParameterEXT;
extern GLLOADER_API glIsVariantEnabledEXTFUNC glIsVariantEnabledEXT;
extern GLLOADER_API glGetVariantBooleanvEXTFUNC glGetVariantBooleanvEXT;
extern GLLOADER_API glGetVariantIntegervEXTFUNC glGetVariantIntegervEXT;
extern GLLOADER_API glGetVariantFloatvEXTFUNC glGetVariantFloatvEXT;
extern GLLOADER_API glGetVariantPointervEXTFUNC glGetVariantPointervEXT;
extern GLLOADER_API glGetInvariantBooleanvEXTFUNC glGetInvariantBooleanvEXT;
extern GLLOADER_API glGetInvariantIntegervEXTFUNC glGetInvariantIntegervEXT;
extern GLLOADER_API glGetInvariantFloatvEXTFUNC glGetInvariantFloatvEXT;
extern GLLOADER_API glGetLocalConstantBooleanvEXTFUNC glGetLocalConstantBooleanvEXT;
extern GLLOADER_API glGetLocalConstantIntegervEXTFUNC glGetLocalConstantIntegervEXT;
extern GLLOADER_API glGetLocalConstantFloatvEXTFUNC glGetLocalConstantFloatvEXT;

#endif

#ifdef GL_EXT_vertex_weighting

typedef void (GLLOADER_APIENTRY *glVertexWeightfEXTFUNC)(GLfloat weight);
typedef void (GLLOADER_APIENTRY *glVertexWeightfvEXTFUNC)(const GLfloat* weight);
typedef void (GLLOADER_APIENTRY *glVertexWeightPointerEXTFUNC)(GLsizei size, GLenum type, GLsizei stride, const GLvoid* pointer);

extern GLLOADER_API glVertexWeightfEXTFUNC glVertexWeightfEXT;
extern GLLOADER_API glVertexWeightfvEXTFUNC glVertexWeightfvEXT;
extern GLLOADER_API glVertexWeightPointerEXTFUNC glVertexWeightPointerEXT;

#endif

#ifdef GL_EXT_x11_sync_object

typedef GLsync (GLLOADER_APIENTRY *glImportSyncEXTFUNC)(GLenum external_sync_type, GLintptr external_sync, GLbitfield flags);

extern GLLOADER_API glImportSyncEXTFUNC glImportSyncEXT;

#endif

#ifdef GL_GREMEDY_frame_terminator

typedef void (GLLOADER_APIENTRY *glFrameTerminatorGREMEDYFUNC)();

extern GLLOADER_API glFrameTerminatorGREMEDYFUNC glFrameTerminatorGREMEDY;

#endif

#ifdef GL_GREMEDY_string_marker

typedef void (GLLOADER_APIENTRY *glStringMarkerGREMEDYFUNC)(GLsizei len, const GLvoid* string);

extern GLLOADER_API glStringMarkerGREMEDYFUNC glStringMarkerGREMEDY;

#endif

#ifdef GL_HP_image_transform

typedef void (GLLOADER_APIENTRY *glImageTransformParameteriHPFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glImageTransformParameterfHPFUNC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glImageTransformParameterivHPFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glImageTransformParameterfvHPFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetImageTransformParameterivHPFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetImageTransformParameterfvHPFUNC)(GLenum target, GLenum pname, GLfloat* params);

extern GLLOADER_API glImageTransformParameteriHPFUNC glImageTransformParameteriHP;
extern GLLOADER_API glImageTransformParameterfHPFUNC glImageTransformParameterfHP;
extern GLLOADER_API glImageTransformParameterivHPFUNC glImageTransformParameterivHP;
extern GLLOADER_API glImageTransformParameterfvHPFUNC glImageTransformParameterfvHP;
extern GLLOADER_API glGetImageTransformParameterivHPFUNC glGetImageTransformParameterivHP;
extern GLLOADER_API glGetImageTransformParameterfvHPFUNC glGetImageTransformParameterfvHP;

#endif

#ifdef GL_IBM_multimode_draw_arrays

typedef void (GLLOADER_APIENTRY *glMultiModeDrawArraysIBMFUNC)(const GLenum* mode, const GLint* first, const GLsizei* count, GLsizei primcount, GLint modestride);
typedef void (GLLOADER_APIENTRY *glMultiModeDrawElementsIBMFUNC)(const GLenum* mode, const GLsizei* count, GLenum type, const GLvoid** indices, GLsizei primcount, GLint modestride);

extern GLLOADER_API glMultiModeDrawArraysIBMFUNC glMultiModeDrawArraysIBM;
extern GLLOADER_API glMultiModeDrawElementsIBMFUNC glMultiModeDrawElementsIBM;

#endif

#ifdef GL_IBM_static_data

typedef void (GLLOADER_APIENTRY *glFlushStaticDataIBMFUNC)(GLenum target);

extern GLLOADER_API glFlushStaticDataIBMFUNC glFlushStaticDataIBM;

#endif

#ifdef GL_IBM_vertex_array_lists

typedef void (GLLOADER_APIENTRY *glColorPointerListIBMFUNC)(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride);
typedef void (GLLOADER_APIENTRY *glSecondaryColorPointerListIBMFUNC)(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride);
typedef void (GLLOADER_APIENTRY *glEdgeFlagPointerListIBMFUNC)(GLint stride, const GLboolean** pointer, GLint ptrstride);
typedef void (GLLOADER_APIENTRY *glFogCoordPointerListIBMFUNC)(GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride);
typedef void (GLLOADER_APIENTRY *glIndexPointerListIBMFUNC)(GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride);
typedef void (GLLOADER_APIENTRY *glNormalPointerListIBMFUNC)(GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride);
typedef void (GLLOADER_APIENTRY *glTexCoordPointerListIBMFUNC)(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride);
typedef void (GLLOADER_APIENTRY *glVertexPointerListIBMFUNC)(GLint size, GLenum type, GLint stride, const GLvoid** pointer, GLint ptrstride);

extern GLLOADER_API glColorPointerListIBMFUNC glColorPointerListIBM;
extern GLLOADER_API glSecondaryColorPointerListIBMFUNC glSecondaryColorPointerListIBM;
extern GLLOADER_API glEdgeFlagPointerListIBMFUNC glEdgeFlagPointerListIBM;
extern GLLOADER_API glFogCoordPointerListIBMFUNC glFogCoordPointerListIBM;
extern GLLOADER_API glIndexPointerListIBMFUNC glIndexPointerListIBM;
extern GLLOADER_API glNormalPointerListIBMFUNC glNormalPointerListIBM;
extern GLLOADER_API glTexCoordPointerListIBMFUNC glTexCoordPointerListIBM;
extern GLLOADER_API glVertexPointerListIBMFUNC glVertexPointerListIBM;

#endif

#ifdef GL_INGR_blend_func_separate

typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateINGRFUNC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);

extern GLLOADER_API glBlendFuncSeparateINGRFUNC glBlendFuncSeparateINGR;

#endif

#ifdef GL_INTEL_map_texture

typedef void* (GLLOADER_APIENTRY *glMapTexture2DINTELFUNC)(GLuint texture, GLint level, GLbitfield access, GLint* stride, GLenum* layout);
typedef void (GLLOADER_APIENTRY *glUnmapTexture2DINTELFUNC)(GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glSyncTextureINTELFUNC)(GLuint texture);

extern GLLOADER_API glMapTexture2DINTELFUNC glMapTexture2DINTEL;
extern GLLOADER_API glUnmapTexture2DINTELFUNC glUnmapTexture2DINTEL;
extern GLLOADER_API glSyncTextureINTELFUNC glSyncTextureINTEL;

#endif

#ifdef GL_INTEL_parallel_arrays

typedef void (GLLOADER_APIENTRY *glVertexPointervINTELFUNC)(GLint size, GLenum type, const GLvoid** pointer);
typedef void (GLLOADER_APIENTRY *glNormalPointervINTELFUNC)(GLenum type, const GLvoid** pointer);
typedef void (GLLOADER_APIENTRY *glColorPointervINTELFUNC)(GLint size, GLenum type, const GLvoid** pointer);
typedef void (GLLOADER_APIENTRY *glTexCoordPointervINTELFUNC)(GLint size, GLenum type, const GLvoid** pointer);

extern GLLOADER_API glVertexPointervINTELFUNC glVertexPointervINTEL;
extern GLLOADER_API glNormalPointervINTELFUNC glNormalPointervINTEL;
extern GLLOADER_API glColorPointervINTELFUNC glColorPointervINTEL;
extern GLLOADER_API glTexCoordPointervINTELFUNC glTexCoordPointervINTEL;

#endif

#ifdef GL_INTEL_performance_query

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

#ifdef GL_KHR_blend_equation_advanced

typedef void (GLLOADER_APIENTRY *glBlendBarrierKHRFUNC)();

extern GLLOADER_API glBlendBarrierKHRFUNC glBlendBarrierKHR;

#endif

#ifdef GL_KHR_debug

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

#ifdef GL_KHR_robustness

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

#ifdef GL_MESA_resize_buffers

typedef void (GLLOADER_APIENTRY *glResizeBuffersMESAFUNC)();

extern GLLOADER_API glResizeBuffersMESAFUNC glResizeBuffersMESA;

#endif

#ifdef GL_MESA_window_pos

typedef void (GLLOADER_APIENTRY *glWindowPos2dMESAFUNC)(GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glWindowPos2dvMESAFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2fMESAFUNC)(GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glWindowPos2fvMESAFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2iMESAFUNC)(GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glWindowPos2ivMESAFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2sMESAFUNC)(GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glWindowPos2svMESAFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3dMESAFUNC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glWindowPos3dvMESAFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3fMESAFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glWindowPos3fvMESAFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3iMESAFUNC)(GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glWindowPos3ivMESAFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3sMESAFUNC)(GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glWindowPos3svMESAFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glWindowPos4dMESAFUNC)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glWindowPos4dvMESAFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glWindowPos4fMESAFUNC)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glWindowPos4fvMESAFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glWindowPos4iMESAFUNC)(GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glWindowPos4ivMESAFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glWindowPos4sMESAFUNC)(GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLLOADER_APIENTRY *glWindowPos4svMESAFUNC)(const GLshort* v);

extern GLLOADER_API glWindowPos2dMESAFUNC glWindowPos2dMESA;
extern GLLOADER_API glWindowPos2dvMESAFUNC glWindowPos2dvMESA;
extern GLLOADER_API glWindowPos2fMESAFUNC glWindowPos2fMESA;
extern GLLOADER_API glWindowPos2fvMESAFUNC glWindowPos2fvMESA;
extern GLLOADER_API glWindowPos2iMESAFUNC glWindowPos2iMESA;
extern GLLOADER_API glWindowPos2ivMESAFUNC glWindowPos2ivMESA;
extern GLLOADER_API glWindowPos2sMESAFUNC glWindowPos2sMESA;
extern GLLOADER_API glWindowPos2svMESAFUNC glWindowPos2svMESA;
extern GLLOADER_API glWindowPos3dMESAFUNC glWindowPos3dMESA;
extern GLLOADER_API glWindowPos3dvMESAFUNC glWindowPos3dvMESA;
extern GLLOADER_API glWindowPos3fMESAFUNC glWindowPos3fMESA;
extern GLLOADER_API glWindowPos3fvMESAFUNC glWindowPos3fvMESA;
extern GLLOADER_API glWindowPos3iMESAFUNC glWindowPos3iMESA;
extern GLLOADER_API glWindowPos3ivMESAFUNC glWindowPos3ivMESA;
extern GLLOADER_API glWindowPos3sMESAFUNC glWindowPos3sMESA;
extern GLLOADER_API glWindowPos3svMESAFUNC glWindowPos3svMESA;
extern GLLOADER_API glWindowPos4dMESAFUNC glWindowPos4dMESA;
extern GLLOADER_API glWindowPos4dvMESAFUNC glWindowPos4dvMESA;
extern GLLOADER_API glWindowPos4fMESAFUNC glWindowPos4fMESA;
extern GLLOADER_API glWindowPos4fvMESAFUNC glWindowPos4fvMESA;
extern GLLOADER_API glWindowPos4iMESAFUNC glWindowPos4iMESA;
extern GLLOADER_API glWindowPos4ivMESAFUNC glWindowPos4ivMESA;
extern GLLOADER_API glWindowPos4sMESAFUNC glWindowPos4sMESA;
extern GLLOADER_API glWindowPos4svMESAFUNC glWindowPos4svMESA;

#endif

#ifdef GL_NVX_conditional_render

typedef void (GLLOADER_APIENTRY *glBeginConditionalRenderNVXFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glEndConditionalRenderNVXFUNC)();

extern GLLOADER_API glBeginConditionalRenderNVXFUNC glBeginConditionalRenderNVX;
extern GLLOADER_API glEndConditionalRenderNVXFUNC glEndConditionalRenderNVX;

#endif

#ifdef GL_NV_bindless_multi_draw_indirect

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysIndirectBindlessNVFUNC)(GLenum mode, const void* indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsIndirectBindlessNVFUNC)(GLenum mode, GLenum type, const void* indirect, GLsizei drawCount, GLsizei stride, GLint vertexBufferCount);

extern GLLOADER_API glMultiDrawArraysIndirectBindlessNVFUNC glMultiDrawArraysIndirectBindlessNV;
extern GLLOADER_API glMultiDrawElementsIndirectBindlessNVFUNC glMultiDrawElementsIndirectBindlessNV;

#endif

#ifdef GL_NV_bindless_multi_draw_indirect_count

typedef void (GLLOADER_APIENTRY *glMultiDrawArraysIndirectBindlessCountNVFUNC)(GLenum mode, const GLvoid* indirect, GLintptr drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsIndirectBindlessCountNVFUNC)(GLenum mode, GLenum type, const GLvoid* indirect, GLintptr drawCount, GLsizei maxDrawCount, GLsizei stride, GLint vertexBufferCount);

extern GLLOADER_API glMultiDrawArraysIndirectBindlessCountNVFUNC glMultiDrawArraysIndirectBindlessCountNV;
extern GLLOADER_API glMultiDrawElementsIndirectBindlessCountNVFUNC glMultiDrawElementsIndirectBindlessCountNV;

#endif

#ifdef GL_NV_bindless_texture

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

#ifdef GL_NV_blend_equation_advanced

typedef void (GLLOADER_APIENTRY *glBlendParameteriNVFUNC)(GLenum pname, GLint value);
typedef void (GLLOADER_APIENTRY *glBlendBarrierNVFUNC)();

extern GLLOADER_API glBlendParameteriNVFUNC glBlendParameteriNV;
extern GLLOADER_API glBlendBarrierNVFUNC glBlendBarrierNV;

#endif

#ifdef GL_NV_conditional_render

typedef void (GLLOADER_APIENTRY *glBeginConditionalRenderNVFUNC)(GLuint id, GLenum mode);
typedef void (GLLOADER_APIENTRY *glEndConditionalRenderNVFUNC)();

extern GLLOADER_API glBeginConditionalRenderNVFUNC glBeginConditionalRenderNV;
extern GLLOADER_API glEndConditionalRenderNVFUNC glEndConditionalRenderNV;

#endif

#ifdef GL_NV_conservative_raster

typedef void (GLLOADER_APIENTRY *glSubpixelPrecisionBiasNVFUNC)(GLuint xbits, GLuint ybits);

extern GLLOADER_API glSubpixelPrecisionBiasNVFUNC glSubpixelPrecisionBiasNV;

#endif

#ifdef GL_NV_copy_image

typedef void (GLLOADER_APIENTRY *glCopyImageSubDataNVFUNC)(GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

extern GLLOADER_API glCopyImageSubDataNVFUNC glCopyImageSubDataNV;

#endif

#ifdef GL_NV_depth_buffer_float

typedef void (GLLOADER_APIENTRY *glDepthRangedNVFUNC)(GLdouble zNear, GLdouble zFar);
typedef void (GLLOADER_APIENTRY *glClearDepthdNVFUNC)(GLdouble depth);
typedef void (GLLOADER_APIENTRY *glDepthBoundsdNVFUNC)(GLdouble zmin, GLdouble zmax);

extern GLLOADER_API glDepthRangedNVFUNC glDepthRangedNV;
extern GLLOADER_API glClearDepthdNVFUNC glClearDepthdNV;
extern GLLOADER_API glDepthBoundsdNVFUNC glDepthBoundsdNV;

#endif

#ifdef GL_NV_draw_texture

typedef void (GLLOADER_APIENTRY *glDrawTextureNVFUNC)(GLuint texture, GLuint sampler, GLfloat x0, GLfloat y0, GLfloat x1, GLfloat y1, GLfloat z, GLfloat s0, GLfloat t0, GLfloat s1, GLfloat t1);

extern GLLOADER_API glDrawTextureNVFUNC glDrawTextureNV;

#endif

#ifdef GL_NV_evaluators

typedef void (GLLOADER_APIENTRY *glMapControlPointsNVFUNC)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLint uorder, GLint vorder, GLboolean packed, const GLvoid* points);
typedef void (GLLOADER_APIENTRY *glMapParameterivNVFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glMapParameterfvNVFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMapControlPointsNVFUNC)(GLenum target, GLuint index, GLenum type, GLsizei ustride, GLsizei vstride, GLboolean packed, GLvoid* points);
typedef void (GLLOADER_APIENTRY *glGetMapParameterivNVFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMapParameterfvNVFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMapAttribParameterivNVFUNC)(GLenum target, GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMapAttribParameterfvNVFUNC)(GLenum target, GLuint index, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glEvalMapsNVFUNC)(GLenum target, GLenum mode);

extern GLLOADER_API glMapControlPointsNVFUNC glMapControlPointsNV;
extern GLLOADER_API glMapParameterivNVFUNC glMapParameterivNV;
extern GLLOADER_API glMapParameterfvNVFUNC glMapParameterfvNV;
extern GLLOADER_API glGetMapControlPointsNVFUNC glGetMapControlPointsNV;
extern GLLOADER_API glGetMapParameterivNVFUNC glGetMapParameterivNV;
extern GLLOADER_API glGetMapParameterfvNVFUNC glGetMapParameterfvNV;
extern GLLOADER_API glGetMapAttribParameterivNVFUNC glGetMapAttribParameterivNV;
extern GLLOADER_API glGetMapAttribParameterfvNVFUNC glGetMapAttribParameterfvNV;
extern GLLOADER_API glEvalMapsNVFUNC glEvalMapsNV;

#endif

#ifdef GL_NV_explicit_multisample

typedef void (GLLOADER_APIENTRY *glGetMultisamplefvNVFUNC)(GLenum pname, GLuint index, GLfloat* val);
typedef void (GLLOADER_APIENTRY *glSampleMaskIndexedNVFUNC)(GLuint index, GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glTexRenderbufferNVFUNC)(GLenum target, GLuint renderbuffer);

extern GLLOADER_API glGetMultisamplefvNVFUNC glGetMultisamplefvNV;
extern GLLOADER_API glSampleMaskIndexedNVFUNC glSampleMaskIndexedNV;
extern GLLOADER_API glTexRenderbufferNVFUNC glTexRenderbufferNV;

#endif

#ifdef GL_NV_fence

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

#ifdef GL_NV_fragment_coverage_to_color

typedef void (GLLOADER_APIENTRY *glFragmentCoverageColorNVFUNC)(GLuint color);

extern GLLOADER_API glFragmentCoverageColorNVFUNC glFragmentCoverageColorNV;

#endif

#ifdef GL_NV_fragment_program

typedef void (GLLOADER_APIENTRY *glProgramNamedParameter4fNVFUNC)(GLuint id, GLsizei len, const GLubyte* name, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glProgramNamedParameter4dNVFUNC)(GLuint id, GLsizei len, const GLubyte* name, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glProgramNamedParameter4fvNVFUNC)(GLuint id, GLsizei len, const GLubyte* name, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glProgramNamedParameter4dvNVFUNC)(GLuint id, GLsizei len, const GLubyte* name, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glGetProgramNamedParameterfvNVFUNC)(GLuint id, GLsizei len, const GLubyte* name, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetProgramNamedParameterdvNVFUNC)(GLuint id, GLsizei len, const GLubyte* name, GLdouble* params);

extern GLLOADER_API glProgramNamedParameter4fNVFUNC glProgramNamedParameter4fNV;
extern GLLOADER_API glProgramNamedParameter4dNVFUNC glProgramNamedParameter4dNV;
extern GLLOADER_API glProgramNamedParameter4fvNVFUNC glProgramNamedParameter4fvNV;
extern GLLOADER_API glProgramNamedParameter4dvNVFUNC glProgramNamedParameter4dvNV;
extern GLLOADER_API glGetProgramNamedParameterfvNVFUNC glGetProgramNamedParameterfvNV;
extern GLLOADER_API glGetProgramNamedParameterdvNVFUNC glGetProgramNamedParameterdvNV;

#endif

#ifdef GL_NV_framebuffer_mixed_samples

typedef void (GLLOADER_APIENTRY *glCoverageModulationTableNVFUNC)(GLsizei n, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glGetCoverageModulationTableNVFUNC)(GLsizei bufsize, GLfloat* v);
typedef void (GLLOADER_APIENTRY *glCoverageModulationNVFUNC)(GLenum components);

extern GLLOADER_API glCoverageModulationTableNVFUNC glCoverageModulationTableNV;
extern GLLOADER_API glGetCoverageModulationTableNVFUNC glGetCoverageModulationTableNV;
extern GLLOADER_API glCoverageModulationNVFUNC glCoverageModulationNV;

#endif

#ifdef GL_NV_framebuffer_multisample_coverage

typedef void (GLLOADER_APIENTRY *glRenderbufferStorageMultisampleCoverageNVFUNC)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLenum internalformat, GLsizei width, GLsizei height);

extern GLLOADER_API glRenderbufferStorageMultisampleCoverageNVFUNC glRenderbufferStorageMultisampleCoverageNV;

#endif

#ifdef GL_NV_geometry_program4

typedef void (GLLOADER_APIENTRY *glProgramVertexLimitNVFUNC)(GLenum target, GLint limit);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureEXTFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureLayerEXTFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint layer);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureFaceEXTFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLenum face);

extern GLLOADER_API glProgramVertexLimitNVFUNC glProgramVertexLimitNV;
extern GLLOADER_API glFramebufferTextureEXTFUNC glFramebufferTextureEXT;
extern GLLOADER_API glFramebufferTextureLayerEXTFUNC glFramebufferTextureLayerEXT;
extern GLLOADER_API glFramebufferTextureFaceEXTFUNC glFramebufferTextureFaceEXT;

#endif

#ifdef GL_NV_gpu_program4

typedef void (GLLOADER_APIENTRY *glProgramLocalParameterI4iNVFUNC)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameterI4ivNVFUNC)(GLenum target, GLuint index, const GLint* params);
typedef void (GLLOADER_APIENTRY *glProgramLocalParametersI4ivNVFUNC)(GLenum target, GLuint index, GLsizei count, const GLint* params);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameterI4uiNVFUNC)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLLOADER_APIENTRY *glProgramLocalParameterI4uivNVFUNC)(GLenum target, GLuint index, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glProgramLocalParametersI4uivNVFUNC)(GLenum target, GLuint index, GLsizei count, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameterI4iNVFUNC)(GLenum target, GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameterI4ivNVFUNC)(GLenum target, GLuint index, const GLint* params);
typedef void (GLLOADER_APIENTRY *glProgramEnvParametersI4ivNVFUNC)(GLenum target, GLuint index, GLsizei count, const GLint* params);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameterI4uiNVFUNC)(GLenum target, GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLLOADER_APIENTRY *glProgramEnvParameterI4uivNVFUNC)(GLenum target, GLuint index, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glProgramEnvParametersI4uivNVFUNC)(GLenum target, GLuint index, GLsizei count, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramLocalParameterIivNVFUNC)(GLenum target, GLuint index, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramLocalParameterIuivNVFUNC)(GLenum target, GLuint index, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramEnvParameterIivNVFUNC)(GLenum target, GLuint index, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramEnvParameterIuivNVFUNC)(GLenum target, GLuint index, GLuint* params);

extern GLLOADER_API glProgramLocalParameterI4iNVFUNC glProgramLocalParameterI4iNV;
extern GLLOADER_API glProgramLocalParameterI4ivNVFUNC glProgramLocalParameterI4ivNV;
extern GLLOADER_API glProgramLocalParametersI4ivNVFUNC glProgramLocalParametersI4ivNV;
extern GLLOADER_API glProgramLocalParameterI4uiNVFUNC glProgramLocalParameterI4uiNV;
extern GLLOADER_API glProgramLocalParameterI4uivNVFUNC glProgramLocalParameterI4uivNV;
extern GLLOADER_API glProgramLocalParametersI4uivNVFUNC glProgramLocalParametersI4uivNV;
extern GLLOADER_API glProgramEnvParameterI4iNVFUNC glProgramEnvParameterI4iNV;
extern GLLOADER_API glProgramEnvParameterI4ivNVFUNC glProgramEnvParameterI4ivNV;
extern GLLOADER_API glProgramEnvParametersI4ivNVFUNC glProgramEnvParametersI4ivNV;
extern GLLOADER_API glProgramEnvParameterI4uiNVFUNC glProgramEnvParameterI4uiNV;
extern GLLOADER_API glProgramEnvParameterI4uivNVFUNC glProgramEnvParameterI4uivNV;
extern GLLOADER_API glProgramEnvParametersI4uivNVFUNC glProgramEnvParametersI4uivNV;
extern GLLOADER_API glGetProgramLocalParameterIivNVFUNC glGetProgramLocalParameterIivNV;
extern GLLOADER_API glGetProgramLocalParameterIuivNVFUNC glGetProgramLocalParameterIuivNV;
extern GLLOADER_API glGetProgramEnvParameterIivNVFUNC glGetProgramEnvParameterIivNV;
extern GLLOADER_API glGetProgramEnvParameterIuivNVFUNC glGetProgramEnvParameterIuivNV;

#endif

#ifdef GL_NV_gpu_program5

typedef void (GLLOADER_APIENTRY *glProgramSubroutineParametersuivNVFUNC)(GLenum target, GLsizei count, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramSubroutineParameteruivNVFUNC)(GLenum target, GLuint index, GLuint* param);

extern GLLOADER_API glProgramSubroutineParametersuivNVFUNC glProgramSubroutineParametersuivNV;
extern GLLOADER_API glGetProgramSubroutineParameteruivNVFUNC glGetProgramSubroutineParameteruivNV;

#endif

#ifdef GL_NV_gpu_shader5



#endif

#ifdef GL_NV_half_float

typedef void (GLLOADER_APIENTRY *glVertex2hNVFUNC)(GLhalfNV x, GLhalfNV y);
typedef void (GLLOADER_APIENTRY *glVertex2hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertex3hNVFUNC)(GLhalfNV x, GLhalfNV y, GLhalfNV z);
typedef void (GLLOADER_APIENTRY *glVertex3hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertex4hNVFUNC)(GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
typedef void (GLLOADER_APIENTRY *glVertex4hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glNormal3hNVFUNC)(GLhalfNV nx, GLhalfNV ny, GLhalfNV nz);
typedef void (GLLOADER_APIENTRY *glNormal3hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glColor3hNVFUNC)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
typedef void (GLLOADER_APIENTRY *glColor3hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glColor4hNVFUNC)(GLhalfNV red, GLhalfNV green, GLhalfNV blue, GLhalfNV alpha);
typedef void (GLLOADER_APIENTRY *glColor4hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glTexCoord1hNVFUNC)(GLhalfNV s);
typedef void (GLLOADER_APIENTRY *glTexCoord1hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2hNVFUNC)(GLhalfNV s, GLhalfNV t);
typedef void (GLLOADER_APIENTRY *glTexCoord2hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glTexCoord3hNVFUNC)(GLhalfNV s, GLhalfNV t, GLhalfNV r);
typedef void (GLLOADER_APIENTRY *glTexCoord3hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4hNVFUNC)(GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
typedef void (GLLOADER_APIENTRY *glTexCoord4hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1hNVFUNC)(GLenum target, GLhalfNV s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1hvNVFUNC)(GLenum target, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2hNVFUNC)(GLenum target, GLhalfNV s, GLhalfNV t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2hvNVFUNC)(GLenum target, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3hNVFUNC)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3hvNVFUNC)(GLenum target, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4hNVFUNC)(GLenum target, GLhalfNV s, GLhalfNV t, GLhalfNV r, GLhalfNV q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4hvNVFUNC)(GLenum target, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glFogCoordhNVFUNC)(GLhalfNV fog);
typedef void (GLLOADER_APIENTRY *glFogCoordhvNVFUNC)(const GLhalfNV* fog);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3hNVFUNC)(GLhalfNV red, GLhalfNV green, GLhalfNV blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3hvNVFUNC)(const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexWeighthNVFUNC)(GLhalfNV weight);
typedef void (GLLOADER_APIENTRY *glVertexWeighthvNVFUNC)(const GLhalfNV* weight);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1hNVFUNC)(GLuint index, GLhalfNV x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1hvNVFUNC)(GLuint index, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2hNVFUNC)(GLuint index, GLhalfNV x, GLhalfNV y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2hvNVFUNC)(GLuint index, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3hNVFUNC)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3hvNVFUNC)(GLuint index, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4hNVFUNC)(GLuint index, GLhalfNV x, GLhalfNV y, GLhalfNV z, GLhalfNV w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4hvNVFUNC)(GLuint index, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs1hvNVFUNC)(GLuint index, GLsizei n, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs2hvNVFUNC)(GLuint index, GLsizei n, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs3hvNVFUNC)(GLuint index, GLsizei n, const GLhalfNV* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs4hvNVFUNC)(GLuint index, GLsizei n, const GLhalfNV* v);

extern GLLOADER_API glVertex2hNVFUNC glVertex2hNV;
extern GLLOADER_API glVertex2hvNVFUNC glVertex2hvNV;
extern GLLOADER_API glVertex3hNVFUNC glVertex3hNV;
extern GLLOADER_API glVertex3hvNVFUNC glVertex3hvNV;
extern GLLOADER_API glVertex4hNVFUNC glVertex4hNV;
extern GLLOADER_API glVertex4hvNVFUNC glVertex4hvNV;
extern GLLOADER_API glNormal3hNVFUNC glNormal3hNV;
extern GLLOADER_API glNormal3hvNVFUNC glNormal3hvNV;
extern GLLOADER_API glColor3hNVFUNC glColor3hNV;
extern GLLOADER_API glColor3hvNVFUNC glColor3hvNV;
extern GLLOADER_API glColor4hNVFUNC glColor4hNV;
extern GLLOADER_API glColor4hvNVFUNC glColor4hvNV;
extern GLLOADER_API glTexCoord1hNVFUNC glTexCoord1hNV;
extern GLLOADER_API glTexCoord1hvNVFUNC glTexCoord1hvNV;
extern GLLOADER_API glTexCoord2hNVFUNC glTexCoord2hNV;
extern GLLOADER_API glTexCoord2hvNVFUNC glTexCoord2hvNV;
extern GLLOADER_API glTexCoord3hNVFUNC glTexCoord3hNV;
extern GLLOADER_API glTexCoord3hvNVFUNC glTexCoord3hvNV;
extern GLLOADER_API glTexCoord4hNVFUNC glTexCoord4hNV;
extern GLLOADER_API glTexCoord4hvNVFUNC glTexCoord4hvNV;
extern GLLOADER_API glMultiTexCoord1hNVFUNC glMultiTexCoord1hNV;
extern GLLOADER_API glMultiTexCoord1hvNVFUNC glMultiTexCoord1hvNV;
extern GLLOADER_API glMultiTexCoord2hNVFUNC glMultiTexCoord2hNV;
extern GLLOADER_API glMultiTexCoord2hvNVFUNC glMultiTexCoord2hvNV;
extern GLLOADER_API glMultiTexCoord3hNVFUNC glMultiTexCoord3hNV;
extern GLLOADER_API glMultiTexCoord3hvNVFUNC glMultiTexCoord3hvNV;
extern GLLOADER_API glMultiTexCoord4hNVFUNC glMultiTexCoord4hNV;
extern GLLOADER_API glMultiTexCoord4hvNVFUNC glMultiTexCoord4hvNV;
extern GLLOADER_API glFogCoordhNVFUNC glFogCoordhNV;
extern GLLOADER_API glFogCoordhvNVFUNC glFogCoordhvNV;
extern GLLOADER_API glSecondaryColor3hNVFUNC glSecondaryColor3hNV;
extern GLLOADER_API glSecondaryColor3hvNVFUNC glSecondaryColor3hvNV;
extern GLLOADER_API glVertexWeighthNVFUNC glVertexWeighthNV;
extern GLLOADER_API glVertexWeighthvNVFUNC glVertexWeighthvNV;
extern GLLOADER_API glVertexAttrib1hNVFUNC glVertexAttrib1hNV;
extern GLLOADER_API glVertexAttrib1hvNVFUNC glVertexAttrib1hvNV;
extern GLLOADER_API glVertexAttrib2hNVFUNC glVertexAttrib2hNV;
extern GLLOADER_API glVertexAttrib2hvNVFUNC glVertexAttrib2hvNV;
extern GLLOADER_API glVertexAttrib3hNVFUNC glVertexAttrib3hNV;
extern GLLOADER_API glVertexAttrib3hvNVFUNC glVertexAttrib3hvNV;
extern GLLOADER_API glVertexAttrib4hNVFUNC glVertexAttrib4hNV;
extern GLLOADER_API glVertexAttrib4hvNVFUNC glVertexAttrib4hvNV;
extern GLLOADER_API glVertexAttribs1hvNVFUNC glVertexAttribs1hvNV;
extern GLLOADER_API glVertexAttribs2hvNVFUNC glVertexAttribs2hvNV;
extern GLLOADER_API glVertexAttribs3hvNVFUNC glVertexAttribs3hvNV;
extern GLLOADER_API glVertexAttribs4hvNVFUNC glVertexAttribs4hvNV;

#endif

#ifdef GL_NV_internalformat_sample_query

typedef void (GLLOADER_APIENTRY *glGetInternalformatSampleivNVFUNC)(GLenum target, GLenum internalformat, GLsizei samples, GLenum pname, GLsizei bufSize, GLint* params);

extern GLLOADER_API glGetInternalformatSampleivNVFUNC glGetInternalformatSampleivNV;

#endif

#ifdef GL_NV_occlusion_query

typedef void (GLLOADER_APIENTRY *glGenOcclusionQueriesNVFUNC)(GLsizei n, GLuint* ids);
typedef void (GLLOADER_APIENTRY *glDeleteOcclusionQueriesNVFUNC)(GLsizei n, const GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsOcclusionQueryNVFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glBeginOcclusionQueryNVFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glEndOcclusionQueryNVFUNC)();
typedef void (GLLOADER_APIENTRY *glGetOcclusionQueryivNVFUNC)(GLuint id, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetOcclusionQueryuivNVFUNC)(GLuint id, GLenum pname, GLuint* params);

extern GLLOADER_API glGenOcclusionQueriesNVFUNC glGenOcclusionQueriesNV;
extern GLLOADER_API glDeleteOcclusionQueriesNVFUNC glDeleteOcclusionQueriesNV;
extern GLLOADER_API glIsOcclusionQueryNVFUNC glIsOcclusionQueryNV;
extern GLLOADER_API glBeginOcclusionQueryNVFUNC glBeginOcclusionQueryNV;
extern GLLOADER_API glEndOcclusionQueryNVFUNC glEndOcclusionQueryNV;
extern GLLOADER_API glGetOcclusionQueryivNVFUNC glGetOcclusionQueryivNV;
extern GLLOADER_API glGetOcclusionQueryuivNVFUNC glGetOcclusionQueryuivNV;

#endif

#ifdef GL_NV_parameter_buffer_object

typedef void (GLLOADER_APIENTRY *glProgramBufferParametersfvNVFUNC)(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glProgramBufferParametersIivNVFUNC)(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLint* params);
typedef void (GLLOADER_APIENTRY *glProgramBufferParametersIuivNVFUNC)(GLenum target, GLuint buffer, GLuint index, GLsizei count, const GLuint* params);

extern GLLOADER_API glProgramBufferParametersfvNVFUNC glProgramBufferParametersfvNV;
extern GLLOADER_API glProgramBufferParametersIivNVFUNC glProgramBufferParametersIivNV;
extern GLLOADER_API glProgramBufferParametersIuivNVFUNC glProgramBufferParametersIuivNV;

#endif

#ifdef GL_NV_path_rendering

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

#ifdef GL_NV_pixel_data_range

typedef void (GLLOADER_APIENTRY *glPixelDataRangeNVFUNC)(GLenum target, GLsizei length, GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glFlushPixelDataRangeNVFUNC)(GLenum target);

extern GLLOADER_API glPixelDataRangeNVFUNC glPixelDataRangeNV;
extern GLLOADER_API glFlushPixelDataRangeNVFUNC glFlushPixelDataRangeNV;

#endif

#ifdef GL_NV_point_sprite

typedef void (GLLOADER_APIENTRY *glPointParameteriNVFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glPointParameterivNVFUNC)(GLenum pname, const GLint* params);

extern GLLOADER_API glPointParameteriNVFUNC glPointParameteriNV;
extern GLLOADER_API glPointParameterivNVFUNC glPointParameterivNV;

#endif

#ifdef GL_NV_present_video

typedef void (GLLOADER_APIENTRY *glPresentFrameKeyedNVFUNC)(GLuint video_slot, GLuint64 minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLuint key0, GLenum target1, GLuint fill1, GLuint key1);
typedef void (GLLOADER_APIENTRY *glPresentFrameDualFillNVFUNC)(GLuint video_slot, GLuint64 minPresentTime, GLuint beginPresentTimeId, GLuint presentDurationId, GLenum type, GLenum target0, GLuint fill0, GLenum target1, GLuint fill1, GLenum target2, GLuint fill2, GLenum target3, GLuint fill3);
typedef void (GLLOADER_APIENTRY *glGetVideoivNVFUNC)(GLuint video_slot, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVideouivNVFUNC)(GLuint video_slot, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetVideoi64vNVFUNC)(GLuint video_slot, GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glGetVideoui64vNVFUNC)(GLuint video_slot, GLenum pname, GLuint64* params);

extern GLLOADER_API glPresentFrameKeyedNVFUNC glPresentFrameKeyedNV;
extern GLLOADER_API glPresentFrameDualFillNVFUNC glPresentFrameDualFillNV;
extern GLLOADER_API glGetVideoivNVFUNC glGetVideoivNV;
extern GLLOADER_API glGetVideouivNVFUNC glGetVideouivNV;
extern GLLOADER_API glGetVideoi64vNVFUNC glGetVideoi64vNV;
extern GLLOADER_API glGetVideoui64vNVFUNC glGetVideoui64vNV;

#endif

#ifdef GL_NV_primitive_restart

typedef void (GLLOADER_APIENTRY *glPrimitiveRestartNVFUNC)();
typedef void (GLLOADER_APIENTRY *glPrimitiveRestartIndexNVFUNC)(GLuint index);

extern GLLOADER_API glPrimitiveRestartNVFUNC glPrimitiveRestartNV;
extern GLLOADER_API glPrimitiveRestartIndexNVFUNC glPrimitiveRestartIndexNV;

#endif

#ifdef GL_NV_register_combiners

typedef void (GLLOADER_APIENTRY *glCombinerParameterfvNVFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glCombinerParameterfNVFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glCombinerParameterivNVFUNC)(GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glCombinerParameteriNVFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glCombinerInputNVFUNC)(GLenum stage, GLenum portion, GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
typedef void (GLLOADER_APIENTRY *glCombinerOutputNVFUNC)(GLenum stage, GLenum portion, GLenum abOutput, GLenum cdOutput, GLenum sumOutput, GLenum scale, GLenum bias, GLboolean abDotProduct, GLboolean cdDotProduct, GLboolean muxSum);
typedef void (GLLOADER_APIENTRY *glFinalCombinerInputNVFUNC)(GLenum variable, GLenum input, GLenum mapping, GLenum componentUsage);
typedef void (GLLOADER_APIENTRY *glGetCombinerInputParameterfvNVFUNC)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetCombinerInputParameterivNVFUNC)(GLenum stage, GLenum portion, GLenum variable, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetCombinerOutputParameterfvNVFUNC)(GLenum stage, GLenum portion, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetCombinerOutputParameterivNVFUNC)(GLenum stage, GLenum portion, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetFinalCombinerInputParameterfvNVFUNC)(GLenum variable, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetFinalCombinerInputParameterivNVFUNC)(GLenum variable, GLenum pname, GLint* params);

extern GLLOADER_API glCombinerParameterfvNVFUNC glCombinerParameterfvNV;
extern GLLOADER_API glCombinerParameterfNVFUNC glCombinerParameterfNV;
extern GLLOADER_API glCombinerParameterivNVFUNC glCombinerParameterivNV;
extern GLLOADER_API glCombinerParameteriNVFUNC glCombinerParameteriNV;
extern GLLOADER_API glCombinerInputNVFUNC glCombinerInputNV;
extern GLLOADER_API glCombinerOutputNVFUNC glCombinerOutputNV;
extern GLLOADER_API glFinalCombinerInputNVFUNC glFinalCombinerInputNV;
extern GLLOADER_API glGetCombinerInputParameterfvNVFUNC glGetCombinerInputParameterfvNV;
extern GLLOADER_API glGetCombinerInputParameterivNVFUNC glGetCombinerInputParameterivNV;
extern GLLOADER_API glGetCombinerOutputParameterfvNVFUNC glGetCombinerOutputParameterfvNV;
extern GLLOADER_API glGetCombinerOutputParameterivNVFUNC glGetCombinerOutputParameterivNV;
extern GLLOADER_API glGetFinalCombinerInputParameterfvNVFUNC glGetFinalCombinerInputParameterfvNV;
extern GLLOADER_API glGetFinalCombinerInputParameterivNVFUNC glGetFinalCombinerInputParameterivNV;

#endif

#ifdef GL_NV_register_combiners2

typedef void (GLLOADER_APIENTRY *glCombinerStageParameterfvNVFUNC)(GLenum stage, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetCombinerStageParameterfvNVFUNC)(GLenum stage, GLenum pname, GLfloat* params);

extern GLLOADER_API glCombinerStageParameterfvNVFUNC glCombinerStageParameterfvNV;
extern GLLOADER_API glGetCombinerStageParameterfvNVFUNC glGetCombinerStageParameterfvNV;

#endif

#ifdef GL_NV_sample_locations

typedef void (GLLOADER_APIENTRY *glFramebufferSampleLocationsfvNVFUNC)(GLenum target, GLuint start, GLsizei count, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glNamedFramebufferSampleLocationsfvNVFUNC)(GLuint framebuffer, GLuint start, GLsizei count, GLfloat const * v);
typedef void (GLLOADER_APIENTRY *glResolveDepthValuesNVFUNC)();

extern GLLOADER_API glFramebufferSampleLocationsfvNVFUNC glFramebufferSampleLocationsfvNV;
extern GLLOADER_API glNamedFramebufferSampleLocationsfvNVFUNC glNamedFramebufferSampleLocationsfvNV;
extern GLLOADER_API glResolveDepthValuesNVFUNC glResolveDepthValuesNV;

#endif

#ifdef GL_NV_shader_buffer_load

typedef void (GLLOADER_APIENTRY *glMakeBufferResidentNVFUNC)(GLenum target, GLenum access);
typedef void (GLLOADER_APIENTRY *glMakeBufferNonResidentNVFUNC)(GLenum target);
typedef GLboolean (GLLOADER_APIENTRY *glIsBufferResidentNVFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glMakeNamedBufferResidentNVFUNC)(GLuint buffer, GLenum access);
typedef void (GLLOADER_APIENTRY *glMakeNamedBufferNonResidentNVFUNC)(GLuint buffer);
typedef GLboolean (GLLOADER_APIENTRY *glIsNamedBufferResidentNVFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glGetBufferParameterui64vNVFUNC)(GLenum target, GLenum pname, GLuint64EXT* params);
typedef void (GLLOADER_APIENTRY *glGetNamedBufferParameterui64vNVFUNC)(GLuint buffer, GLenum pname, GLuint64EXT* params);
typedef void (GLLOADER_APIENTRY *glGetIntegerui64vNVFUNC)(GLenum value, GLuint64EXT* result);
typedef void (GLLOADER_APIENTRY *glUniformui64NVFUNC)(GLint location, GLuint64EXT value);
typedef void (GLLOADER_APIENTRY *glUniformui64vNVFUNC)(GLint location, GLsizei count, GLuint64EXT* value);
typedef void (GLLOADER_APIENTRY *glProgramUniformui64NVFUNC)(GLuint program, GLint location, GLuint64EXT value);
typedef void (GLLOADER_APIENTRY *glProgramUniformui64vNVFUNC)(GLuint program, GLint location, GLsizei count, GLuint64EXT* value);

extern GLLOADER_API glMakeBufferResidentNVFUNC glMakeBufferResidentNV;
extern GLLOADER_API glMakeBufferNonResidentNVFUNC glMakeBufferNonResidentNV;
extern GLLOADER_API glIsBufferResidentNVFUNC glIsBufferResidentNV;
extern GLLOADER_API glMakeNamedBufferResidentNVFUNC glMakeNamedBufferResidentNV;
extern GLLOADER_API glMakeNamedBufferNonResidentNVFUNC glMakeNamedBufferNonResidentNV;
extern GLLOADER_API glIsNamedBufferResidentNVFUNC glIsNamedBufferResidentNV;
extern GLLOADER_API glGetBufferParameterui64vNVFUNC glGetBufferParameterui64vNV;
extern GLLOADER_API glGetNamedBufferParameterui64vNVFUNC glGetNamedBufferParameterui64vNV;
extern GLLOADER_API glGetIntegerui64vNVFUNC glGetIntegerui64vNV;
extern GLLOADER_API glUniformui64NVFUNC glUniformui64NV;
extern GLLOADER_API glUniformui64vNVFUNC glUniformui64vNV;
extern GLLOADER_API glProgramUniformui64NVFUNC glProgramUniformui64NV;
extern GLLOADER_API glProgramUniformui64vNVFUNC glProgramUniformui64vNV;

#endif

#ifdef GL_NV_texture_barrier

typedef void (GLLOADER_APIENTRY *glTextureBarrierNVFUNC)();

extern GLLOADER_API glTextureBarrierNVFUNC glTextureBarrierNV;

#endif

#ifdef GL_NV_texture_multisample

typedef void (GLLOADER_APIENTRY *glTexImage2DMultisampleCoverageNVFUNC)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
typedef void (GLLOADER_APIENTRY *glTexImage3DMultisampleCoverageNVFUNC)(GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
typedef void (GLLOADER_APIENTRY *glTextureImage2DMultisampleNVFUNC)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
typedef void (GLLOADER_APIENTRY *glTextureImage3DMultisampleNVFUNC)(GLuint texture, GLenum target, GLsizei samples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);
typedef void (GLLOADER_APIENTRY *glTextureImage2DMultisampleCoverageNVFUNC)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLboolean fixedSampleLocations);
typedef void (GLLOADER_APIENTRY *glTextureImage3DMultisampleCoverageNVFUNC)(GLuint texture, GLenum target, GLsizei coverageSamples, GLsizei colorSamples, GLint internalFormat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedSampleLocations);

extern GLLOADER_API glTexImage2DMultisampleCoverageNVFUNC glTexImage2DMultisampleCoverageNV;
extern GLLOADER_API glTexImage3DMultisampleCoverageNVFUNC glTexImage3DMultisampleCoverageNV;
extern GLLOADER_API glTextureImage2DMultisampleNVFUNC glTextureImage2DMultisampleNV;
extern GLLOADER_API glTextureImage3DMultisampleNVFUNC glTextureImage3DMultisampleNV;
extern GLLOADER_API glTextureImage2DMultisampleCoverageNVFUNC glTextureImage2DMultisampleCoverageNV;
extern GLLOADER_API glTextureImage3DMultisampleCoverageNVFUNC glTextureImage3DMultisampleCoverageNV;

#endif

#ifdef GL_NV_transform_feedback

typedef void (GLLOADER_APIENTRY *glBeginTransformFeedbackNVFUNC)(GLenum primitiveMode);
typedef void (GLLOADER_APIENTRY *glEndTransformFeedbackNVFUNC)();
typedef void (GLLOADER_APIENTRY *glTransformFeedbackAttribsNVFUNC)(GLuint count, const GLint* attribs, GLenum bufferMode);
typedef void (GLLOADER_APIENTRY *glBindBufferRangeNVFUNC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glBindBufferOffsetNVFUNC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset);
typedef void (GLLOADER_APIENTRY *glBindBufferBaseNVFUNC)(GLenum target, GLuint index, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTransformFeedbackVaryingsNVFUNC)(GLuint program, GLsizei count, const GLint* locations, GLenum bufferMode);
typedef void (GLLOADER_APIENTRY *glActiveVaryingNVFUNC)(GLuint program, const GLchar* name);
typedef GLint (GLLOADER_APIENTRY *glGetVaryingLocationNVFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetActiveVaryingNVFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetTransformFeedbackVaryingNVFUNC)(GLuint program, GLuint index, GLint* location);
typedef void (GLLOADER_APIENTRY *glTransformFeedbackStreamAttribsNVFUNC)(GLsizei count, const GLint* attribs, GLsizei nbuffers, const GLint* bufstreams, GLenum bufferMode);

extern GLLOADER_API glBeginTransformFeedbackNVFUNC glBeginTransformFeedbackNV;
extern GLLOADER_API glEndTransformFeedbackNVFUNC glEndTransformFeedbackNV;
extern GLLOADER_API glTransformFeedbackAttribsNVFUNC glTransformFeedbackAttribsNV;
extern GLLOADER_API glBindBufferRangeNVFUNC glBindBufferRangeNV;
extern GLLOADER_API glBindBufferOffsetNVFUNC glBindBufferOffsetNV;
extern GLLOADER_API glBindBufferBaseNVFUNC glBindBufferBaseNV;
extern GLLOADER_API glTransformFeedbackVaryingsNVFUNC glTransformFeedbackVaryingsNV;
extern GLLOADER_API glActiveVaryingNVFUNC glActiveVaryingNV;
extern GLLOADER_API glGetVaryingLocationNVFUNC glGetVaryingLocationNV;
extern GLLOADER_API glGetActiveVaryingNVFUNC glGetActiveVaryingNV;
extern GLLOADER_API glGetTransformFeedbackVaryingNVFUNC glGetTransformFeedbackVaryingNV;
extern GLLOADER_API glTransformFeedbackStreamAttribsNVFUNC glTransformFeedbackStreamAttribsNV;

#endif

#ifdef GL_NV_transform_feedback2

typedef void (GLLOADER_APIENTRY *glBindTransformFeedbackNVFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glDeleteTransformFeedbacksNVFUNC)(GLsizei n, const GLuint* ids);
typedef void (GLLOADER_APIENTRY *glGenTransformFeedbacksNVFUNC)(GLsizei n, GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsTransformFeedbackNVFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glPauseTransformFeedbackNVFUNC)();
typedef void (GLLOADER_APIENTRY *glResumeTransformFeedbackNVFUNC)();
typedef void (GLLOADER_APIENTRY *glDrawTransformFeedbackNVFUNC)(GLenum mode, GLuint id);

extern GLLOADER_API glBindTransformFeedbackNVFUNC glBindTransformFeedbackNV;
extern GLLOADER_API glDeleteTransformFeedbacksNVFUNC glDeleteTransformFeedbacksNV;
extern GLLOADER_API glGenTransformFeedbacksNVFUNC glGenTransformFeedbacksNV;
extern GLLOADER_API glIsTransformFeedbackNVFUNC glIsTransformFeedbackNV;
extern GLLOADER_API glPauseTransformFeedbackNVFUNC glPauseTransformFeedbackNV;
extern GLLOADER_API glResumeTransformFeedbackNVFUNC glResumeTransformFeedbackNV;
extern GLLOADER_API glDrawTransformFeedbackNVFUNC glDrawTransformFeedbackNV;

#endif

#ifdef GL_NV_vdpau_interop

typedef void (GLLOADER_APIENTRY *glVDPAUInitNVFUNC)(const GLvoid* vdpDevice, const GLvoid* getProcAddress);
typedef void (GLLOADER_APIENTRY *glVDPAUFiniNVFUNC)();
typedef GLvdpauSurfaceNV (GLLOADER_APIENTRY *glVDPAURegisterVideoSurfaceNVFUNC)(GLvoid* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint* textureNames);
typedef GLvdpauSurfaceNV (GLLOADER_APIENTRY *glVDPAURegisterOutputSurfaceNVFUNC)(GLvoid* vdpSurface, GLenum target, GLsizei numTextureNames, const GLuint* textureNames);
typedef void (GLLOADER_APIENTRY *glVDPAUIsSurfaceNVFUNC)(GLvdpauSurfaceNV surface);
typedef void (GLLOADER_APIENTRY *glVDPAUUnregisterSurfaceNVFUNC)(GLvdpauSurfaceNV surface);
typedef void (GLLOADER_APIENTRY *glVDPAUGetSurfaceivNVFUNC)(GLvdpauSurfaceNV surface, GLenum pname, GLsizei bufSize, GLsizei* length, GLint* values);
typedef void (GLLOADER_APIENTRY *glVDPAUSurfaceAccessNVFUNC)(GLvdpauSurfaceNV surface, GLenum access);
typedef void (GLLOADER_APIENTRY *glVDPAUMapSurfacesNVFUNC)(GLsizei numSurfaces, const GLvdpauSurfaceNV* surfaces);
typedef void (GLLOADER_APIENTRY *glVDPAUUnmapSurfacesNVFUNC)(GLsizei numSurface, const GLvdpauSurfaceNV* surfaces);

extern GLLOADER_API glVDPAUInitNVFUNC glVDPAUInitNV;
extern GLLOADER_API glVDPAUFiniNVFUNC glVDPAUFiniNV;
extern GLLOADER_API glVDPAURegisterVideoSurfaceNVFUNC glVDPAURegisterVideoSurfaceNV;
extern GLLOADER_API glVDPAURegisterOutputSurfaceNVFUNC glVDPAURegisterOutputSurfaceNV;
extern GLLOADER_API glVDPAUIsSurfaceNVFUNC glVDPAUIsSurfaceNV;
extern GLLOADER_API glVDPAUUnregisterSurfaceNVFUNC glVDPAUUnregisterSurfaceNV;
extern GLLOADER_API glVDPAUGetSurfaceivNVFUNC glVDPAUGetSurfaceivNV;
extern GLLOADER_API glVDPAUSurfaceAccessNVFUNC glVDPAUSurfaceAccessNV;
extern GLLOADER_API glVDPAUMapSurfacesNVFUNC glVDPAUMapSurfacesNV;
extern GLLOADER_API glVDPAUUnmapSurfacesNVFUNC glVDPAUUnmapSurfacesNV;

#endif

#ifdef GL_NV_vertex_array_range

typedef void (GLLOADER_APIENTRY *glFlushVertexArrayRangeNVFUNC)();
typedef void (GLLOADER_APIENTRY *glVertexArrayRangeNVFUNC)(GLsizei length, GLvoid* pointer);

extern GLLOADER_API glFlushVertexArrayRangeNVFUNC glFlushVertexArrayRangeNV;
extern GLLOADER_API glVertexArrayRangeNVFUNC glVertexArrayRangeNV;

#endif

#ifdef GL_NV_vertex_attrib_integer_64bit

typedef void (GLLOADER_APIENTRY *glVertexAttribL1i64NVFUNC)(GLuint index, GLint64EXT x);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2i64NVFUNC)(GLuint index, GLint64EXT x, GLint64EXT y);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3i64NVFUNC)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4i64NVFUNC)(GLuint index, GLint64EXT x, GLint64EXT y, GLint64EXT z, GLint64EXT w);
typedef void (GLLOADER_APIENTRY *glVertexAttribL1i64vNVFUNC)(GLuint index, const GLint64EXT* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2i64vNVFUNC)(GLuint index, const GLint64EXT* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3i64vNVFUNC)(GLuint index, const GLint64EXT* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4i64vNVFUNC)(GLuint index, const GLint64EXT* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL1ui64NVFUNC)(GLuint index, GLuint64EXT x);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2ui64NVFUNC)(GLuint index, GLuint64EXT x, GLuint64EXT y);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3ui64NVFUNC)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4ui64NVFUNC)(GLuint index, GLuint64EXT x, GLuint64EXT y, GLuint64EXT z, GLuint64EXT w);
typedef void (GLLOADER_APIENTRY *glVertexAttribL1ui64vNVFUNC)(GLuint index, const GLuint64EXT* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL2ui64vNVFUNC)(GLuint index, const GLuint64EXT* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL3ui64vNVFUNC)(GLuint index, const GLuint64EXT* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribL4ui64vNVFUNC)(GLuint index, const GLuint64EXT* v);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribLi64vNVFUNC)(GLuint index, GLenum pname, GLint64EXT* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribLui64vNVFUNC)(GLuint index, GLenum pname, GLuint64EXT* params);
typedef void (GLLOADER_APIENTRY *glVertexAttribLFormatNVFUNC)(GLuint index, GLint size, GLenum type, GLsizei stride);

extern GLLOADER_API glVertexAttribL1i64NVFUNC glVertexAttribL1i64NV;
extern GLLOADER_API glVertexAttribL2i64NVFUNC glVertexAttribL2i64NV;
extern GLLOADER_API glVertexAttribL3i64NVFUNC glVertexAttribL3i64NV;
extern GLLOADER_API glVertexAttribL4i64NVFUNC glVertexAttribL4i64NV;
extern GLLOADER_API glVertexAttribL1i64vNVFUNC glVertexAttribL1i64vNV;
extern GLLOADER_API glVertexAttribL2i64vNVFUNC glVertexAttribL2i64vNV;
extern GLLOADER_API glVertexAttribL3i64vNVFUNC glVertexAttribL3i64vNV;
extern GLLOADER_API glVertexAttribL4i64vNVFUNC glVertexAttribL4i64vNV;
extern GLLOADER_API glVertexAttribL1ui64NVFUNC glVertexAttribL1ui64NV;
extern GLLOADER_API glVertexAttribL2ui64NVFUNC glVertexAttribL2ui64NV;
extern GLLOADER_API glVertexAttribL3ui64NVFUNC glVertexAttribL3ui64NV;
extern GLLOADER_API glVertexAttribL4ui64NVFUNC glVertexAttribL4ui64NV;
extern GLLOADER_API glVertexAttribL1ui64vNVFUNC glVertexAttribL1ui64vNV;
extern GLLOADER_API glVertexAttribL2ui64vNVFUNC glVertexAttribL2ui64vNV;
extern GLLOADER_API glVertexAttribL3ui64vNVFUNC glVertexAttribL3ui64vNV;
extern GLLOADER_API glVertexAttribL4ui64vNVFUNC glVertexAttribL4ui64vNV;
extern GLLOADER_API glGetVertexAttribLi64vNVFUNC glGetVertexAttribLi64vNV;
extern GLLOADER_API glGetVertexAttribLui64vNVFUNC glGetVertexAttribLui64vNV;
extern GLLOADER_API glVertexAttribLFormatNVFUNC glVertexAttribLFormatNV;

#endif

#ifdef GL_NV_vertex_buffer_unified_memory

typedef void (GLLOADER_APIENTRY *glBufferAddressRangeNVFUNC)(GLenum pname, GLuint index, GLuint64EXT address, GLsizeiptr length);
typedef void (GLLOADER_APIENTRY *glVertexFormatNVFUNC)(GLint size, GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glNormalFormatNVFUNC)(GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glColorFormatNVFUNC)(GLint size, GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glIndexFormatNVFUNC)(GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glTexCoordFormatNVFUNC)(GLint size, GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glEdgeFlagFormatNVFUNC)(GLsizei stride);
typedef void (GLLOADER_APIENTRY *glSecondaryColorFormatNVFUNC)(GLint size, GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glFogCoordFormatNVFUNC)(GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glVertexAttribFormatNVFUNC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glVertexAttribIFormatNVFUNC)(GLuint index, GLint size, GLenum type, GLsizei stride);
typedef void (GLLOADER_APIENTRY *glGetIntegerui64i_vNVFUNC)(GLenum value, GLuint index, GLuint64EXT* result);

extern GLLOADER_API glBufferAddressRangeNVFUNC glBufferAddressRangeNV;
extern GLLOADER_API glVertexFormatNVFUNC glVertexFormatNV;
extern GLLOADER_API glNormalFormatNVFUNC glNormalFormatNV;
extern GLLOADER_API glColorFormatNVFUNC glColorFormatNV;
extern GLLOADER_API glIndexFormatNVFUNC glIndexFormatNV;
extern GLLOADER_API glTexCoordFormatNVFUNC glTexCoordFormatNV;
extern GLLOADER_API glEdgeFlagFormatNVFUNC glEdgeFlagFormatNV;
extern GLLOADER_API glSecondaryColorFormatNVFUNC glSecondaryColorFormatNV;
extern GLLOADER_API glFogCoordFormatNVFUNC glFogCoordFormatNV;
extern GLLOADER_API glVertexAttribFormatNVFUNC glVertexAttribFormatNV;
extern GLLOADER_API glVertexAttribIFormatNVFUNC glVertexAttribIFormatNV;
extern GLLOADER_API glGetIntegerui64i_vNVFUNC glGetIntegerui64i_vNV;

#endif

#ifdef GL_NV_vertex_program

typedef GLboolean (GLLOADER_APIENTRY *glAreProgramsResidentNVFUNC)(GLsizei n, const GLuint* programs, GLboolean* residences);
typedef void (GLLOADER_APIENTRY *glBindProgramNVFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glDeleteProgramsNVFUNC)(GLsizei n, const GLuint* programs);
typedef void (GLLOADER_APIENTRY *glExecuteProgramNVFUNC)(GLenum target, GLuint id, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGenProgramsNVFUNC)(GLsizei n, GLuint* programs);
typedef void (GLLOADER_APIENTRY *glGetProgramParameterdvNVFUNC)(GLenum target, GLuint index, GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetProgramParameterfvNVFUNC)(GLenum target, GLuint index, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetProgramivNVFUNC)(GLuint id, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramStringNVFUNC)(GLuint id, GLenum pname, GLubyte* program);
typedef void (GLLOADER_APIENTRY *glGetTrackMatrixivNVFUNC)(GLenum target, GLuint address, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribdvNVFUNC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribfvNVFUNC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribivNVFUNC)(GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribPointervNVFUNC)(GLuint index, GLenum pname, GLvoid** pointer);
typedef GLboolean (GLLOADER_APIENTRY *glIsProgramNVFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glLoadProgramNVFUNC)(GLenum target, GLuint id, GLsizei len, const GLubyte* program);
typedef void (GLLOADER_APIENTRY *glProgramParameter4dNVFUNC)(GLenum target, GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glProgramParameter4dvNVFUNC)(GLenum target, GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glProgramParameter4fNVFUNC)(GLenum target, GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glProgramParameter4fvNVFUNC)(GLenum target, GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glProgramParameters4dvNVFUNC)(GLenum target, GLuint index, GLsizei count, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glProgramParameters4fvNVFUNC)(GLenum target, GLuint index, GLsizei count, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glRequestResidentProgramsNVFUNC)(GLsizei n, const GLuint* programs);
typedef void (GLLOADER_APIENTRY *glTrackMatrixNVFUNC)(GLenum target, GLuint address, GLenum matrix, GLenum transform);
typedef void (GLLOADER_APIENTRY *glVertexAttribPointerNVFUNC)(GLuint index, GLint fsize, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1dNVFUNC)(GLuint index, GLdouble x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1dvNVFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fNVFUNC)(GLuint index, GLfloat x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fvNVFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1sNVFUNC)(GLuint index, GLshort x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1svNVFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2dNVFUNC)(GLuint index, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2dvNVFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fNVFUNC)(GLuint index, GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fvNVFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2sNVFUNC)(GLuint index, GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2svNVFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3dNVFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3dvNVFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fNVFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fvNVFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3sNVFUNC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3svNVFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4dNVFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4dvNVFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fNVFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fvNVFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4sNVFUNC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4svNVFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4ubNVFUNC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4ubvNVFUNC)(GLuint index, const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs1dvNVFUNC)(GLuint index, GLsizei count, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs1fvNVFUNC)(GLuint index, GLsizei count, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs1svNVFUNC)(GLuint index, GLsizei count, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs2dvNVFUNC)(GLuint index, GLsizei count, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs2fvNVFUNC)(GLuint index, GLsizei count, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs2svNVFUNC)(GLuint index, GLsizei count, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs3dvNVFUNC)(GLuint index, GLsizei count, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs3fvNVFUNC)(GLuint index, GLsizei count, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs3svNVFUNC)(GLuint index, GLsizei count, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs4dvNVFUNC)(GLuint index, GLsizei count, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs4fvNVFUNC)(GLuint index, GLsizei count, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs4svNVFUNC)(GLuint index, GLsizei count, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribs4ubvNVFUNC)(GLuint index, GLsizei count, const GLubyte* v);

extern GLLOADER_API glAreProgramsResidentNVFUNC glAreProgramsResidentNV;
extern GLLOADER_API glBindProgramNVFUNC glBindProgramNV;
extern GLLOADER_API glDeleteProgramsNVFUNC glDeleteProgramsNV;
extern GLLOADER_API glExecuteProgramNVFUNC glExecuteProgramNV;
extern GLLOADER_API glGenProgramsNVFUNC glGenProgramsNV;
extern GLLOADER_API glGetProgramParameterdvNVFUNC glGetProgramParameterdvNV;
extern GLLOADER_API glGetProgramParameterfvNVFUNC glGetProgramParameterfvNV;
extern GLLOADER_API glGetProgramivNVFUNC glGetProgramivNV;
extern GLLOADER_API glGetProgramStringNVFUNC glGetProgramStringNV;
extern GLLOADER_API glGetTrackMatrixivNVFUNC glGetTrackMatrixivNV;
extern GLLOADER_API glGetVertexAttribdvNVFUNC glGetVertexAttribdvNV;
extern GLLOADER_API glGetVertexAttribfvNVFUNC glGetVertexAttribfvNV;
extern GLLOADER_API glGetVertexAttribivNVFUNC glGetVertexAttribivNV;
extern GLLOADER_API glGetVertexAttribPointervNVFUNC glGetVertexAttribPointervNV;
extern GLLOADER_API glIsProgramNVFUNC glIsProgramNV;
extern GLLOADER_API glLoadProgramNVFUNC glLoadProgramNV;
extern GLLOADER_API glProgramParameter4dNVFUNC glProgramParameter4dNV;
extern GLLOADER_API glProgramParameter4dvNVFUNC glProgramParameter4dvNV;
extern GLLOADER_API glProgramParameter4fNVFUNC glProgramParameter4fNV;
extern GLLOADER_API glProgramParameter4fvNVFUNC glProgramParameter4fvNV;
extern GLLOADER_API glProgramParameters4dvNVFUNC glProgramParameters4dvNV;
extern GLLOADER_API glProgramParameters4fvNVFUNC glProgramParameters4fvNV;
extern GLLOADER_API glRequestResidentProgramsNVFUNC glRequestResidentProgramsNV;
extern GLLOADER_API glTrackMatrixNVFUNC glTrackMatrixNV;
extern GLLOADER_API glVertexAttribPointerNVFUNC glVertexAttribPointerNV;
extern GLLOADER_API glVertexAttrib1dNVFUNC glVertexAttrib1dNV;
extern GLLOADER_API glVertexAttrib1dvNVFUNC glVertexAttrib1dvNV;
extern GLLOADER_API glVertexAttrib1fNVFUNC glVertexAttrib1fNV;
extern GLLOADER_API glVertexAttrib1fvNVFUNC glVertexAttrib1fvNV;
extern GLLOADER_API glVertexAttrib1sNVFUNC glVertexAttrib1sNV;
extern GLLOADER_API glVertexAttrib1svNVFUNC glVertexAttrib1svNV;
extern GLLOADER_API glVertexAttrib2dNVFUNC glVertexAttrib2dNV;
extern GLLOADER_API glVertexAttrib2dvNVFUNC glVertexAttrib2dvNV;
extern GLLOADER_API glVertexAttrib2fNVFUNC glVertexAttrib2fNV;
extern GLLOADER_API glVertexAttrib2fvNVFUNC glVertexAttrib2fvNV;
extern GLLOADER_API glVertexAttrib2sNVFUNC glVertexAttrib2sNV;
extern GLLOADER_API glVertexAttrib2svNVFUNC glVertexAttrib2svNV;
extern GLLOADER_API glVertexAttrib3dNVFUNC glVertexAttrib3dNV;
extern GLLOADER_API glVertexAttrib3dvNVFUNC glVertexAttrib3dvNV;
extern GLLOADER_API glVertexAttrib3fNVFUNC glVertexAttrib3fNV;
extern GLLOADER_API glVertexAttrib3fvNVFUNC glVertexAttrib3fvNV;
extern GLLOADER_API glVertexAttrib3sNVFUNC glVertexAttrib3sNV;
extern GLLOADER_API glVertexAttrib3svNVFUNC glVertexAttrib3svNV;
extern GLLOADER_API glVertexAttrib4dNVFUNC glVertexAttrib4dNV;
extern GLLOADER_API glVertexAttrib4dvNVFUNC glVertexAttrib4dvNV;
extern GLLOADER_API glVertexAttrib4fNVFUNC glVertexAttrib4fNV;
extern GLLOADER_API glVertexAttrib4fvNVFUNC glVertexAttrib4fvNV;
extern GLLOADER_API glVertexAttrib4sNVFUNC glVertexAttrib4sNV;
extern GLLOADER_API glVertexAttrib4svNVFUNC glVertexAttrib4svNV;
extern GLLOADER_API glVertexAttrib4ubNVFUNC glVertexAttrib4ubNV;
extern GLLOADER_API glVertexAttrib4ubvNVFUNC glVertexAttrib4ubvNV;
extern GLLOADER_API glVertexAttribs1dvNVFUNC glVertexAttribs1dvNV;
extern GLLOADER_API glVertexAttribs1fvNVFUNC glVertexAttribs1fvNV;
extern GLLOADER_API glVertexAttribs1svNVFUNC glVertexAttribs1svNV;
extern GLLOADER_API glVertexAttribs2dvNVFUNC glVertexAttribs2dvNV;
extern GLLOADER_API glVertexAttribs2fvNVFUNC glVertexAttribs2fvNV;
extern GLLOADER_API glVertexAttribs2svNVFUNC glVertexAttribs2svNV;
extern GLLOADER_API glVertexAttribs3dvNVFUNC glVertexAttribs3dvNV;
extern GLLOADER_API glVertexAttribs3fvNVFUNC glVertexAttribs3fvNV;
extern GLLOADER_API glVertexAttribs3svNVFUNC glVertexAttribs3svNV;
extern GLLOADER_API glVertexAttribs4dvNVFUNC glVertexAttribs4dvNV;
extern GLLOADER_API glVertexAttribs4fvNVFUNC glVertexAttribs4fvNV;
extern GLLOADER_API glVertexAttribs4svNVFUNC glVertexAttribs4svNV;
extern GLLOADER_API glVertexAttribs4ubvNVFUNC glVertexAttribs4ubvNV;

#endif

#ifdef GL_NV_vertex_program4

typedef void (GLLOADER_APIENTRY *glVertexAttribI1iEXTFUNC)(GLuint index, GLint x);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2iEXTFUNC)(GLuint index, GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3iEXTFUNC)(GLuint index, GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4iEXTFUNC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glVertexAttribI1uiEXTFUNC)(GLuint index, GLuint x);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2uiEXTFUNC)(GLuint index, GLuint x, GLuint y);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3uiEXTFUNC)(GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4uiEXTFUNC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLLOADER_APIENTRY *glVertexAttribI1ivEXTFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2ivEXTFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3ivEXTFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4ivEXTFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI1uivEXTFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2uivEXTFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3uivEXTFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4uivEXTFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4bvEXTFUNC)(GLuint index, const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4svEXTFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4ubvEXTFUNC)(GLuint index, const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4usvEXTFUNC)(GLuint index, const GLushort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribIPointerEXTFUNC)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribIivEXTFUNC)(GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribIuivEXTFUNC)(GLuint index, GLenum pname, GLuint* params);

extern GLLOADER_API glVertexAttribI1iEXTFUNC glVertexAttribI1iEXT;
extern GLLOADER_API glVertexAttribI2iEXTFUNC glVertexAttribI2iEXT;
extern GLLOADER_API glVertexAttribI3iEXTFUNC glVertexAttribI3iEXT;
extern GLLOADER_API glVertexAttribI4iEXTFUNC glVertexAttribI4iEXT;
extern GLLOADER_API glVertexAttribI1uiEXTFUNC glVertexAttribI1uiEXT;
extern GLLOADER_API glVertexAttribI2uiEXTFUNC glVertexAttribI2uiEXT;
extern GLLOADER_API glVertexAttribI3uiEXTFUNC glVertexAttribI3uiEXT;
extern GLLOADER_API glVertexAttribI4uiEXTFUNC glVertexAttribI4uiEXT;
extern GLLOADER_API glVertexAttribI1ivEXTFUNC glVertexAttribI1ivEXT;
extern GLLOADER_API glVertexAttribI2ivEXTFUNC glVertexAttribI2ivEXT;
extern GLLOADER_API glVertexAttribI3ivEXTFUNC glVertexAttribI3ivEXT;
extern GLLOADER_API glVertexAttribI4ivEXTFUNC glVertexAttribI4ivEXT;
extern GLLOADER_API glVertexAttribI1uivEXTFUNC glVertexAttribI1uivEXT;
extern GLLOADER_API glVertexAttribI2uivEXTFUNC glVertexAttribI2uivEXT;
extern GLLOADER_API glVertexAttribI3uivEXTFUNC glVertexAttribI3uivEXT;
extern GLLOADER_API glVertexAttribI4uivEXTFUNC glVertexAttribI4uivEXT;
extern GLLOADER_API glVertexAttribI4bvEXTFUNC glVertexAttribI4bvEXT;
extern GLLOADER_API glVertexAttribI4svEXTFUNC glVertexAttribI4svEXT;
extern GLLOADER_API glVertexAttribI4ubvEXTFUNC glVertexAttribI4ubvEXT;
extern GLLOADER_API glVertexAttribI4usvEXTFUNC glVertexAttribI4usvEXT;
extern GLLOADER_API glVertexAttribIPointerEXTFUNC glVertexAttribIPointerEXT;
extern GLLOADER_API glGetVertexAttribIivEXTFUNC glGetVertexAttribIivEXT;
extern GLLOADER_API glGetVertexAttribIuivEXTFUNC glGetVertexAttribIuivEXT;

#endif

#ifdef GL_NV_video_capture

typedef void (GLLOADER_APIENTRY *glBeginVideoCaptureNVFUNC)(GLuint video_capture_slot);
typedef void (GLLOADER_APIENTRY *glBindVideoCaptureStreamBufferNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLintptrARB offset);
typedef void (GLLOADER_APIENTRY *glBindVideoCaptureStreamTextureNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum frame_region, GLenum target, GLuint texture);
typedef void (GLLOADER_APIENTRY *glEndVideoCaptureNVFUNC)(GLuint video_capture_slot);
typedef void (GLLOADER_APIENTRY *glGetVideoCaptureivNVFUNC)(GLuint video_capture_slot, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVideoCaptureStreamivNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVideoCaptureStreamfvNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetVideoCaptureStreamdvNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum pname, GLdouble* params);
typedef GLenum (GLLOADER_APIENTRY *glVideoCaptureNVFUNC)(GLuint video_capture_slot, GLuint* sequence_num, GLuint64EXT* capture_time);
typedef void (GLLOADER_APIENTRY *glVideoCaptureStreamParameterivNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glVideoCaptureStreamParameterfvNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glVideoCaptureStreamParameterdvNVFUNC)(GLuint video_capture_slot, GLuint stream, GLenum pname, const GLdouble* params);

extern GLLOADER_API glBeginVideoCaptureNVFUNC glBeginVideoCaptureNV;
extern GLLOADER_API glBindVideoCaptureStreamBufferNVFUNC glBindVideoCaptureStreamBufferNV;
extern GLLOADER_API glBindVideoCaptureStreamTextureNVFUNC glBindVideoCaptureStreamTextureNV;
extern GLLOADER_API glEndVideoCaptureNVFUNC glEndVideoCaptureNV;
extern GLLOADER_API glGetVideoCaptureivNVFUNC glGetVideoCaptureivNV;
extern GLLOADER_API glGetVideoCaptureStreamivNVFUNC glGetVideoCaptureStreamivNV;
extern GLLOADER_API glGetVideoCaptureStreamfvNVFUNC glGetVideoCaptureStreamfvNV;
extern GLLOADER_API glGetVideoCaptureStreamdvNVFUNC glGetVideoCaptureStreamdvNV;
extern GLLOADER_API glVideoCaptureNVFUNC glVideoCaptureNV;
extern GLLOADER_API glVideoCaptureStreamParameterivNVFUNC glVideoCaptureStreamParameterivNV;
extern GLLOADER_API glVideoCaptureStreamParameterfvNVFUNC glVideoCaptureStreamParameterfvNV;
extern GLLOADER_API glVideoCaptureStreamParameterdvNVFUNC glVideoCaptureStreamParameterdvNV;

#endif

#ifdef GL_OVR_multiview

typedef void (GLLOADER_APIENTRY *glFramebufferTextureMultiviewOVRFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);

extern GLLOADER_API glFramebufferTextureMultiviewOVRFUNC glFramebufferTextureMultiviewOVR;

#endif

#ifdef GL_PGI_misc_hints

typedef void (GLLOADER_APIENTRY *glHintPGIFUNC)(GLenum target, GLint mode);

extern GLLOADER_API glHintPGIFUNC glHintPGI;

#endif

#ifdef GL_SGIS_detail_texture

typedef void (GLLOADER_APIENTRY *glDetailTexFuncSGISFUNC)(GLenum target, GLsizei n, const GLfloat* points);
typedef void (GLLOADER_APIENTRY *glGetDetailTexFuncSGISFUNC)(GLenum target, GLfloat* points);

extern GLLOADER_API glDetailTexFuncSGISFUNC glDetailTexFuncSGIS;
extern GLLOADER_API glGetDetailTexFuncSGISFUNC glGetDetailTexFuncSGIS;

#endif

#ifdef GL_SGIS_fog_function

typedef void (GLLOADER_APIENTRY *glFogFuncSGISFUNC)(GLsizei n, const GLfloat* points);
typedef void (GLLOADER_APIENTRY *glGetFogFuncSGISFUNC)(GLfloat* points);

extern GLLOADER_API glFogFuncSGISFUNC glFogFuncSGIS;
extern GLLOADER_API glGetFogFuncSGISFUNC glGetFogFuncSGIS;

#endif

#ifdef GL_SGIS_multisample

typedef void (GLLOADER_APIENTRY *glSampleMaskSGISFUNC)(GLclampf value, GLboolean invert);
typedef void (GLLOADER_APIENTRY *glSamplePatternSGISFUNC)(GLenum pattern);

extern GLLOADER_API glSampleMaskSGISFUNC glSampleMaskSGIS;
extern GLLOADER_API glSamplePatternSGISFUNC glSamplePatternSGIS;

#endif

#ifdef GL_SGIS_pixel_texture

typedef void (GLLOADER_APIENTRY *glPixelTexGenParameteriSGISFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glPixelTexGenParameterivSGISFUNC)(GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glPixelTexGenParameterfSGISFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPixelTexGenParameterfvSGISFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetPixelTexGenParameterivSGISFUNC)(GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetPixelTexGenParameterfvSGISFUNC)(GLenum pname, GLfloat* params);

extern GLLOADER_API glPixelTexGenParameteriSGISFUNC glPixelTexGenParameteriSGIS;
extern GLLOADER_API glPixelTexGenParameterivSGISFUNC glPixelTexGenParameterivSGIS;
extern GLLOADER_API glPixelTexGenParameterfSGISFUNC glPixelTexGenParameterfSGIS;
extern GLLOADER_API glPixelTexGenParameterfvSGISFUNC glPixelTexGenParameterfvSGIS;
extern GLLOADER_API glGetPixelTexGenParameterivSGISFUNC glGetPixelTexGenParameterivSGIS;
extern GLLOADER_API glGetPixelTexGenParameterfvSGISFUNC glGetPixelTexGenParameterfvSGIS;

#endif

#ifdef GL_SGIS_point_parameters

typedef void (GLLOADER_APIENTRY *glPointParameterfSGISFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPointParameterfvSGISFUNC)(GLenum pname, const GLfloat* params);

extern GLLOADER_API glPointParameterfSGISFUNC glPointParameterfSGIS;
extern GLLOADER_API glPointParameterfvSGISFUNC glPointParameterfvSGIS;

#endif

#ifdef GL_SGIS_sharpen_texture

typedef void (GLLOADER_APIENTRY *glSharpenTexFuncSGISFUNC)(GLenum target, GLsizei n, const GLfloat* points);
typedef void (GLLOADER_APIENTRY *glGetSharpenTexFuncSGISFUNC)(GLenum target, GLfloat* points);

extern GLLOADER_API glSharpenTexFuncSGISFUNC glSharpenTexFuncSGIS;
extern GLLOADER_API glGetSharpenTexFuncSGISFUNC glGetSharpenTexFuncSGIS;

#endif

#ifdef GL_SGIS_texture4D

typedef void (GLLOADER_APIENTRY *glTexImage4DSGISFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage4DSGISFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint woffset, GLsizei width, GLsizei height, GLsizei depth, GLsizei size4d, GLenum format, GLenum type, const GLvoid* pixels);

extern GLLOADER_API glTexImage4DSGISFUNC glTexImage4DSGIS;
extern GLLOADER_API glTexSubImage4DSGISFUNC glTexSubImage4DSGIS;

#endif

#ifdef GL_SGIS_texture_color_mask

typedef void (GLLOADER_APIENTRY *glTextureColorMaskSGISFUNC)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);

extern GLLOADER_API glTextureColorMaskSGISFUNC glTextureColorMaskSGIS;

#endif

#ifdef GL_SGIS_texture_filter4

typedef void (GLLOADER_APIENTRY *glGetTexFilterFuncSGISFUNC)(GLenum target, GLenum filter, GLfloat* weights);
typedef void (GLLOADER_APIENTRY *glTexFilterFuncSGISFUNC)(GLenum target, GLenum filter, GLsizei n, const GLfloat* weights);

extern GLLOADER_API glGetTexFilterFuncSGISFUNC glGetTexFilterFuncSGIS;
extern GLLOADER_API glTexFilterFuncSGISFUNC glTexFilterFuncSGIS;

#endif

#ifdef GL_SGIX_async

typedef void (GLLOADER_APIENTRY *glAsyncMarkerSGIXFUNC)(GLuint marker);
typedef GLint (GLLOADER_APIENTRY *glFinishAsyncSGIXFUNC)(GLuint* markerp);
typedef GLint (GLLOADER_APIENTRY *glPollAsyncSGIXFUNC)(GLuint* markerp);
typedef GLuint (GLLOADER_APIENTRY *glGenAsyncMarkersSGIXFUNC)(GLsizei range);
typedef void (GLLOADER_APIENTRY *glDeleteAsyncMarkersSGIXFUNC)(GLuint marker, GLsizei range);
typedef GLboolean (GLLOADER_APIENTRY *glIsAsyncMarkerSGIXFUNC)(GLuint marker);

extern GLLOADER_API glAsyncMarkerSGIXFUNC glAsyncMarkerSGIX;
extern GLLOADER_API glFinishAsyncSGIXFUNC glFinishAsyncSGIX;
extern GLLOADER_API glPollAsyncSGIXFUNC glPollAsyncSGIX;
extern GLLOADER_API glGenAsyncMarkersSGIXFUNC glGenAsyncMarkersSGIX;
extern GLLOADER_API glDeleteAsyncMarkersSGIXFUNC glDeleteAsyncMarkersSGIX;
extern GLLOADER_API glIsAsyncMarkerSGIXFUNC glIsAsyncMarkerSGIX;

#endif

#ifdef GL_SGIX_flush_raster

typedef void (GLLOADER_APIENTRY *glFlushRasterSGIXFUNC)();

extern GLLOADER_API glFlushRasterSGIXFUNC glFlushRasterSGIX;

#endif

#ifdef GL_SGIX_fragment_lighting

typedef void (GLLOADER_APIENTRY *glFragmentColorMaterialSGIXFUNC)(GLenum face, GLenum mode);
typedef void (GLLOADER_APIENTRY *glFragmentLightfSGIXFUNC)(GLenum light, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFragmentLightfvSGIXFUNC)(GLenum light, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glFragmentLightiSGIXFUNC)(GLenum light, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFragmentLightivSGIXFUNC)(GLenum light, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glFragmentLightModelfSGIXFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFragmentLightModelfvSGIXFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glFragmentLightModeliSGIXFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFragmentLightModelivSGIXFUNC)(GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialfSGIXFUNC)(GLenum face, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialfvSGIXFUNC)(GLenum face, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialiSGIXFUNC)(GLenum face, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFragmentMaterialivSGIXFUNC)(GLenum face, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentLightfvSGIXFUNC)(GLenum light, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentLightivSGIXFUNC)(GLenum light, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentMaterialfvSGIXFUNC)(GLenum face, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetFragmentMaterialivSGIXFUNC)(GLenum face, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glLightEnviSGIXFUNC)(GLenum pname, GLint param);

extern GLLOADER_API glFragmentColorMaterialSGIXFUNC glFragmentColorMaterialSGIX;
extern GLLOADER_API glFragmentLightfSGIXFUNC glFragmentLightfSGIX;
extern GLLOADER_API glFragmentLightfvSGIXFUNC glFragmentLightfvSGIX;
extern GLLOADER_API glFragmentLightiSGIXFUNC glFragmentLightiSGIX;
extern GLLOADER_API glFragmentLightivSGIXFUNC glFragmentLightivSGIX;
extern GLLOADER_API glFragmentLightModelfSGIXFUNC glFragmentLightModelfSGIX;
extern GLLOADER_API glFragmentLightModelfvSGIXFUNC glFragmentLightModelfvSGIX;
extern GLLOADER_API glFragmentLightModeliSGIXFUNC glFragmentLightModeliSGIX;
extern GLLOADER_API glFragmentLightModelivSGIXFUNC glFragmentLightModelivSGIX;
extern GLLOADER_API glFragmentMaterialfSGIXFUNC glFragmentMaterialfSGIX;
extern GLLOADER_API glFragmentMaterialfvSGIXFUNC glFragmentMaterialfvSGIX;
extern GLLOADER_API glFragmentMaterialiSGIXFUNC glFragmentMaterialiSGIX;
extern GLLOADER_API glFragmentMaterialivSGIXFUNC glFragmentMaterialivSGIX;
extern GLLOADER_API glGetFragmentLightfvSGIXFUNC glGetFragmentLightfvSGIX;
extern GLLOADER_API glGetFragmentLightivSGIXFUNC glGetFragmentLightivSGIX;
extern GLLOADER_API glGetFragmentMaterialfvSGIXFUNC glGetFragmentMaterialfvSGIX;
extern GLLOADER_API glGetFragmentMaterialivSGIXFUNC glGetFragmentMaterialivSGIX;
extern GLLOADER_API glLightEnviSGIXFUNC glLightEnviSGIX;

#endif

#ifdef GL_SGIX_framezoom

typedef void (GLLOADER_APIENTRY *glFrameZoomSGIXFUNC)(GLint factor);

extern GLLOADER_API glFrameZoomSGIXFUNC glFrameZoomSGIX;

#endif

#ifdef GL_SGIX_igloo_interface

typedef void (GLLOADER_APIENTRY *glIglooInterfaceSGIXFUNC)(GLenum pname, const GLvoid* params);

extern GLLOADER_API glIglooInterfaceSGIXFUNC glIglooInterfaceSGIX;

#endif

#ifdef GL_SGIX_instruments

typedef GLint (GLLOADER_APIENTRY *glGetInstrumentsSGIXFUNC)();
typedef void (GLLOADER_APIENTRY *glInstrumentsBufferSGIXFUNC)(GLsizei size, GLint* buffer);
typedef GLint (GLLOADER_APIENTRY *glPollInstrumentsSGIXFUNC)(GLint* marker_p);
typedef void (GLLOADER_APIENTRY *glReadInstrumentsSGIXFUNC)(GLint marker);
typedef void (GLLOADER_APIENTRY *glStartInstrumentsSGIXFUNC)();
typedef void (GLLOADER_APIENTRY *glStopInstrumentsSGIXFUNC)(GLint marker);

extern GLLOADER_API glGetInstrumentsSGIXFUNC glGetInstrumentsSGIX;
extern GLLOADER_API glInstrumentsBufferSGIXFUNC glInstrumentsBufferSGIX;
extern GLLOADER_API glPollInstrumentsSGIXFUNC glPollInstrumentsSGIX;
extern GLLOADER_API glReadInstrumentsSGIXFUNC glReadInstrumentsSGIX;
extern GLLOADER_API glStartInstrumentsSGIXFUNC glStartInstrumentsSGIX;
extern GLLOADER_API glStopInstrumentsSGIXFUNC glStopInstrumentsSGIX;

#endif

#ifdef GL_SGIX_list_priority

typedef void (GLLOADER_APIENTRY *glGetListParameterfvSGIXFUNC)(GLuint list, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetListParameterivSGIXFUNC)(GLuint list, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glListParameterfSGIXFUNC)(GLuint list, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glListParameterfvSGIXFUNC)(GLuint list, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glListParameteriSGIXFUNC)(GLuint list, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glListParameterivSGIXFUNC)(GLuint list, GLenum pname, const GLint* params);

extern GLLOADER_API glGetListParameterfvSGIXFUNC glGetListParameterfvSGIX;
extern GLLOADER_API glGetListParameterivSGIXFUNC glGetListParameterivSGIX;
extern GLLOADER_API glListParameterfSGIXFUNC glListParameterfSGIX;
extern GLLOADER_API glListParameterfvSGIXFUNC glListParameterfvSGIX;
extern GLLOADER_API glListParameteriSGIXFUNC glListParameteriSGIX;
extern GLLOADER_API glListParameterivSGIXFUNC glListParameterivSGIX;

#endif

#ifdef GL_SGIX_pixel_texture

typedef void (GLLOADER_APIENTRY *glPixelTexGenSGIXFUNC)(GLenum mode);

extern GLLOADER_API glPixelTexGenSGIXFUNC glPixelTexGenSGIX;

#endif

#ifdef GL_SGIX_polynomial_ffd

typedef void (GLLOADER_APIENTRY *glDeformationMap3dSGIXFUNC)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, GLdouble w1, GLdouble w2, GLint wstride, GLint worder, const GLdouble* points);
typedef void (GLLOADER_APIENTRY *glDeformationMap3fSGIXFUNC)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, GLfloat w1, GLfloat w2, GLint wstride, GLint worder, const GLfloat* points);
typedef void (GLLOADER_APIENTRY *glDeformSGIXFUNC)(GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glLoadIdentityDeformationMapSGIXFUNC)(GLbitfield mask);

extern GLLOADER_API glDeformationMap3dSGIXFUNC glDeformationMap3dSGIX;
extern GLLOADER_API glDeformationMap3fSGIXFUNC glDeformationMap3fSGIX;
extern GLLOADER_API glDeformSGIXFUNC glDeformSGIX;
extern GLLOADER_API glLoadIdentityDeformationMapSGIXFUNC glLoadIdentityDeformationMapSGIX;

#endif

#ifdef GL_SGIX_reference_plane

typedef void (GLLOADER_APIENTRY *glReferencePlaneSGIXFUNC)(const GLdouble* equation);

extern GLLOADER_API glReferencePlaneSGIXFUNC glReferencePlaneSGIX;

#endif

#ifdef GL_SGIX_sprite

typedef void (GLLOADER_APIENTRY *glSpriteParameterfSGIXFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glSpriteParameterfvSGIXFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glSpriteParameteriSGIXFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glSpriteParameterivSGIXFUNC)(GLenum pname, const GLint* params);

extern GLLOADER_API glSpriteParameterfSGIXFUNC glSpriteParameterfSGIX;
extern GLLOADER_API glSpriteParameterfvSGIXFUNC glSpriteParameterfvSGIX;
extern GLLOADER_API glSpriteParameteriSGIXFUNC glSpriteParameteriSGIX;
extern GLLOADER_API glSpriteParameterivSGIXFUNC glSpriteParameterivSGIX;

#endif

#ifdef GL_SGIX_tag_sample_buffer

typedef void (GLLOADER_APIENTRY *glTagSampleBufferSGIXFUNC)();

extern GLLOADER_API glTagSampleBufferSGIXFUNC glTagSampleBufferSGIX;

#endif

#ifdef GL_SGI_color_table

typedef void (GLLOADER_APIENTRY *glColorTableSGIFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* table);
typedef void (GLLOADER_APIENTRY *glColorTableParameterfvSGIFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glColorTableParameterivSGIFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glCopyColorTableSGIFUNC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glGetColorTableSGIFUNC)(GLenum target, GLenum format, GLenum type, GLvoid* table);
typedef void (GLLOADER_APIENTRY *glGetColorTableParameterfvSGIFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetColorTableParameterivSGIFUNC)(GLenum target, GLenum pname, GLint* params);

extern GLLOADER_API glColorTableSGIFUNC glColorTableSGI;
extern GLLOADER_API glColorTableParameterfvSGIFUNC glColorTableParameterfvSGI;
extern GLLOADER_API glColorTableParameterivSGIFUNC glColorTableParameterivSGI;
extern GLLOADER_API glCopyColorTableSGIFUNC glCopyColorTableSGI;
extern GLLOADER_API glGetColorTableSGIFUNC glGetColorTableSGI;
extern GLLOADER_API glGetColorTableParameterfvSGIFUNC glGetColorTableParameterfvSGI;
extern GLLOADER_API glGetColorTableParameterivSGIFUNC glGetColorTableParameterivSGI;

#endif

#ifdef GL_SUNX_constant_data

typedef void (GLLOADER_APIENTRY *glFinishTextureSUNXFUNC)();

extern GLLOADER_API glFinishTextureSUNXFUNC glFinishTextureSUNX;

#endif

#ifdef GL_SUN_global_alpha

typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactorbSUNFUNC)(GLbyte factor);
typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactorsSUNFUNC)(GLshort factor);
typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactoriSUNFUNC)(GLint factor);
typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactorfSUNFUNC)(GLfloat factor);
typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactordSUNFUNC)(GLdouble factor);
typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactorubSUNFUNC)(GLubyte factor);
typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactorusSUNFUNC)(GLushort factor);
typedef void (GLLOADER_APIENTRY *glGlobalAlphaFactoruiSUNFUNC)(GLuint factor);

extern GLLOADER_API glGlobalAlphaFactorbSUNFUNC glGlobalAlphaFactorbSUN;
extern GLLOADER_API glGlobalAlphaFactorsSUNFUNC glGlobalAlphaFactorsSUN;
extern GLLOADER_API glGlobalAlphaFactoriSUNFUNC glGlobalAlphaFactoriSUN;
extern GLLOADER_API glGlobalAlphaFactorfSUNFUNC glGlobalAlphaFactorfSUN;
extern GLLOADER_API glGlobalAlphaFactordSUNFUNC glGlobalAlphaFactordSUN;
extern GLLOADER_API glGlobalAlphaFactorubSUNFUNC glGlobalAlphaFactorubSUN;
extern GLLOADER_API glGlobalAlphaFactorusSUNFUNC glGlobalAlphaFactorusSUN;
extern GLLOADER_API glGlobalAlphaFactoruiSUNFUNC glGlobalAlphaFactoruiSUN;

#endif

#ifdef GL_SUN_mesh_array

typedef void (GLLOADER_APIENTRY *glDrawMeshArraysSUNFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei width);

extern GLLOADER_API glDrawMeshArraysSUNFUNC glDrawMeshArraysSUN;

#endif

#ifdef GL_SUN_triangle_list

typedef void (GLLOADER_APIENTRY *glReplacementCodeuiSUNFUNC)(GLuint code);
typedef void (GLLOADER_APIENTRY *glReplacementCodeusSUNFUNC)(GLushort code);
typedef void (GLLOADER_APIENTRY *glReplacementCodeubSUNFUNC)(GLubyte code);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuivSUNFUNC)(const GLuint* code);
typedef void (GLLOADER_APIENTRY *glReplacementCodeusvSUNFUNC)(const GLushort* code);
typedef void (GLLOADER_APIENTRY *glReplacementCodeubvSUNFUNC)(const GLubyte* code);
typedef void (GLLOADER_APIENTRY *glReplacementCodePointerSUNFUNC)(GLenum type, GLsizei stride, const GLvoid** pointer);

extern GLLOADER_API glReplacementCodeuiSUNFUNC glReplacementCodeuiSUN;
extern GLLOADER_API glReplacementCodeusSUNFUNC glReplacementCodeusSUN;
extern GLLOADER_API glReplacementCodeubSUNFUNC glReplacementCodeubSUN;
extern GLLOADER_API glReplacementCodeuivSUNFUNC glReplacementCodeuivSUN;
extern GLLOADER_API glReplacementCodeusvSUNFUNC glReplacementCodeusvSUN;
extern GLLOADER_API glReplacementCodeubvSUNFUNC glReplacementCodeubvSUN;
extern GLLOADER_API glReplacementCodePointerSUNFUNC glReplacementCodePointerSUN;

#endif

#ifdef GL_SUN_vertex

typedef void (GLLOADER_APIENTRY *glColor4ubVertex2fSUNFUNC)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glColor4ubVertex2fvSUNFUNC)(const GLubyte* c, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glColor4ubVertex3fSUNFUNC)(GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glColor4ubVertex3fvSUNFUNC)(const GLubyte* c, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glColor3fVertex3fSUNFUNC)(GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glColor3fVertex3fvSUNFUNC)(const GLfloat* c, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glNormal3fVertex3fSUNFUNC)(GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glNormal3fVertex3fvSUNFUNC)(const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glColor4fNormal3fVertex3fSUNFUNC)(GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glColor4fNormal3fVertex3fvSUNFUNC)(const GLfloat* c, const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2fVertex3fSUNFUNC)(GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glTexCoord2fVertex3fvSUNFUNC)(const GLfloat* tc, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4fVertex4fSUNFUNC)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glTexCoord4fVertex4fvSUNFUNC)(const GLfloat* tc, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2fColor4ubVertex3fSUNFUNC)(GLfloat s, GLfloat t, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glTexCoord2fColor4ubVertex3fvSUNFUNC)(const GLfloat* tc, const GLubyte* c, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2fColor3fVertex3fSUNFUNC)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glTexCoord2fColor3fVertex3fvSUNFUNC)(const GLfloat* tc, const GLfloat* c, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2fNormal3fVertex3fSUNFUNC)(GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glTexCoord2fNormal3fVertex3fvSUNFUNC)(const GLfloat* tc, const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2fColor4fNormal3fVertex3fSUNFUNC)(GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glTexCoord2fColor4fNormal3fVertex3fvSUNFUNC)(const GLfloat* tc, const GLfloat* c, const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4fColor4fNormal3fVertex4fSUNFUNC)(GLfloat s, GLfloat t, GLfloat p, GLfloat q, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glTexCoord4fColor4fNormal3fVertex4fvSUNFUNC)(const GLfloat* tc, const GLfloat* c, const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiVertex3fSUNFUNC)(GLuint rc, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiVertex3fvSUNFUNC)(const GLuint* rc, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiColor4ubVertex3fSUNFUNC)(GLuint rc, GLubyte r, GLubyte g, GLubyte b, GLubyte a, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiColor4ubVertex3fvSUNFUNC)(const GLuint* rc, const GLubyte* c, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiColor3fVertex3fSUNFUNC)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiColor3fVertex3fvSUNFUNC)(const GLuint* rc, const GLfloat* c, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiNormal3fVertex3fSUNFUNC)(GLuint rc, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiNormal3fVertex3fvSUNFUNC)(const GLuint* rc, const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiColor4fNormal3fVertex3fSUNFUNC)(GLuint rc, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiColor4fNormal3fVertex3fvSUNFUNC)(const GLuint* rc, const GLfloat* c, const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiTexCoord2fVertex3fSUNFUNC)(GLuint rc, GLfloat s, GLfloat t, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiTexCoord2fVertex3fvSUNFUNC)(const GLuint* rc, const GLfloat* tc, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiTexCoord2fNormal3fVertex3fSUNFUNC)(GLuint rc, GLfloat s, GLfloat t, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUNFUNC)(const GLuint* rc, const GLfloat* tc, const GLfloat* n, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUNFUNC)(GLuint rc, GLfloat s, GLfloat t, GLfloat r, GLfloat g, GLfloat b, GLfloat a, GLfloat nx, GLfloat ny, GLfloat nz, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUNFUNC)(const GLuint* rc, const GLfloat* tc, const GLfloat* c, const GLfloat* n, const GLfloat* v);

extern GLLOADER_API glColor4ubVertex2fSUNFUNC glColor4ubVertex2fSUN;
extern GLLOADER_API glColor4ubVertex2fvSUNFUNC glColor4ubVertex2fvSUN;
extern GLLOADER_API glColor4ubVertex3fSUNFUNC glColor4ubVertex3fSUN;
extern GLLOADER_API glColor4ubVertex3fvSUNFUNC glColor4ubVertex3fvSUN;
extern GLLOADER_API glColor3fVertex3fSUNFUNC glColor3fVertex3fSUN;
extern GLLOADER_API glColor3fVertex3fvSUNFUNC glColor3fVertex3fvSUN;
extern GLLOADER_API glNormal3fVertex3fSUNFUNC glNormal3fVertex3fSUN;
extern GLLOADER_API glNormal3fVertex3fvSUNFUNC glNormal3fVertex3fvSUN;
extern GLLOADER_API glColor4fNormal3fVertex3fSUNFUNC glColor4fNormal3fVertex3fSUN;
extern GLLOADER_API glColor4fNormal3fVertex3fvSUNFUNC glColor4fNormal3fVertex3fvSUN;
extern GLLOADER_API glTexCoord2fVertex3fSUNFUNC glTexCoord2fVertex3fSUN;
extern GLLOADER_API glTexCoord2fVertex3fvSUNFUNC glTexCoord2fVertex3fvSUN;
extern GLLOADER_API glTexCoord4fVertex4fSUNFUNC glTexCoord4fVertex4fSUN;
extern GLLOADER_API glTexCoord4fVertex4fvSUNFUNC glTexCoord4fVertex4fvSUN;
extern GLLOADER_API glTexCoord2fColor4ubVertex3fSUNFUNC glTexCoord2fColor4ubVertex3fSUN;
extern GLLOADER_API glTexCoord2fColor4ubVertex3fvSUNFUNC glTexCoord2fColor4ubVertex3fvSUN;
extern GLLOADER_API glTexCoord2fColor3fVertex3fSUNFUNC glTexCoord2fColor3fVertex3fSUN;
extern GLLOADER_API glTexCoord2fColor3fVertex3fvSUNFUNC glTexCoord2fColor3fVertex3fvSUN;
extern GLLOADER_API glTexCoord2fNormal3fVertex3fSUNFUNC glTexCoord2fNormal3fVertex3fSUN;
extern GLLOADER_API glTexCoord2fNormal3fVertex3fvSUNFUNC glTexCoord2fNormal3fVertex3fvSUN;
extern GLLOADER_API glTexCoord2fColor4fNormal3fVertex3fSUNFUNC glTexCoord2fColor4fNormal3fVertex3fSUN;
extern GLLOADER_API glTexCoord2fColor4fNormal3fVertex3fvSUNFUNC glTexCoord2fColor4fNormal3fVertex3fvSUN;
extern GLLOADER_API glTexCoord4fColor4fNormal3fVertex4fSUNFUNC glTexCoord4fColor4fNormal3fVertex4fSUN;
extern GLLOADER_API glTexCoord4fColor4fNormal3fVertex4fvSUNFUNC glTexCoord4fColor4fNormal3fVertex4fvSUN;
extern GLLOADER_API glReplacementCodeuiVertex3fSUNFUNC glReplacementCodeuiVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiVertex3fvSUNFUNC glReplacementCodeuiVertex3fvSUN;
extern GLLOADER_API glReplacementCodeuiColor4ubVertex3fSUNFUNC glReplacementCodeuiColor4ubVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiColor4ubVertex3fvSUNFUNC glReplacementCodeuiColor4ubVertex3fvSUN;
extern GLLOADER_API glReplacementCodeuiColor3fVertex3fSUNFUNC glReplacementCodeuiColor3fVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiColor3fVertex3fvSUNFUNC glReplacementCodeuiColor3fVertex3fvSUN;
extern GLLOADER_API glReplacementCodeuiNormal3fVertex3fSUNFUNC glReplacementCodeuiNormal3fVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiNormal3fVertex3fvSUNFUNC glReplacementCodeuiNormal3fVertex3fvSUN;
extern GLLOADER_API glReplacementCodeuiColor4fNormal3fVertex3fSUNFUNC glReplacementCodeuiColor4fNormal3fVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiColor4fNormal3fVertex3fvSUNFUNC glReplacementCodeuiColor4fNormal3fVertex3fvSUN;
extern GLLOADER_API glReplacementCodeuiTexCoord2fVertex3fSUNFUNC glReplacementCodeuiTexCoord2fVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiTexCoord2fVertex3fvSUNFUNC glReplacementCodeuiTexCoord2fVertex3fvSUN;
extern GLLOADER_API glReplacementCodeuiTexCoord2fNormal3fVertex3fSUNFUNC glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUNFUNC glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN;
extern GLLOADER_API glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUNFUNC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN;
extern GLLOADER_API glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUNFUNC glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN;

#endif

#ifdef GL_VERSION_1_0

typedef void (GLLOADER_APIENTRY *glCullFaceFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glFrontFaceFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glHintFUNC)(GLenum target, GLenum mode);
typedef void (GLLOADER_APIENTRY *glLineWidthFUNC)(GLfloat width);
typedef void (GLLOADER_APIENTRY *glPointSizeFUNC)(GLfloat size);
typedef void (GLLOADER_APIENTRY *glPolygonModeFUNC)(GLenum face, GLenum mode);
typedef void (GLLOADER_APIENTRY *glScissorFUNC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTexParameterfFUNC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTexParameterfvFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTexParameteriFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTexParameterivFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glTexImage1DFUNC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexImage2DFUNC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glDrawBufferFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glClearFUNC)(GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glClearColorFUNC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLLOADER_APIENTRY *glClearStencilFUNC)(GLint s);
typedef void (GLLOADER_APIENTRY *glClearDepthFUNC)(GLdouble depth);
typedef void (GLLOADER_APIENTRY *glStencilMaskFUNC)(GLuint mask);
typedef void (GLLOADER_APIENTRY *glColorMaskFUNC)(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha);
typedef void (GLLOADER_APIENTRY *glDepthMaskFUNC)(GLboolean flag);
typedef void (GLLOADER_APIENTRY *glDisableFUNC)(GLenum cap);
typedef void (GLLOADER_APIENTRY *glEnableFUNC)(GLenum cap);
typedef void (GLLOADER_APIENTRY *glFinishFUNC)();
typedef void (GLLOADER_APIENTRY *glFlushFUNC)();
typedef void (GLLOADER_APIENTRY *glBlendFuncFUNC)(GLenum sfactor, GLenum dfactor);
typedef void (GLLOADER_APIENTRY *glLogicOpFUNC)(GLenum opcode);
typedef void (GLLOADER_APIENTRY *glStencilFuncFUNC)(GLenum func, GLint ref, GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilOpFUNC)(GLenum fail, GLenum zfail, GLenum zpass);
typedef void (GLLOADER_APIENTRY *glDepthFuncFUNC)(GLenum func);
typedef void (GLLOADER_APIENTRY *glPixelStorefFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPixelStoreiFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glReadBufferFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glReadPixelsFUNC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetBooleanvFUNC)(GLenum pname, GLboolean* params);
typedef void (GLLOADER_APIENTRY *glGetDoublevFUNC)(GLenum pname, GLdouble* params);
typedef GLenum (GLLOADER_APIENTRY *glGetErrorFUNC)();
typedef void (GLLOADER_APIENTRY *glGetFloatvFUNC)(GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetIntegervFUNC)(GLenum pname, GLint* params);
typedef const GLubyte* (GLLOADER_APIENTRY *glGetStringFUNC)(GLenum name);
typedef void (GLLOADER_APIENTRY *glGetTexImageFUNC)(GLenum target, GLint level, GLenum format, GLenum type, GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetTexParameterfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexLevelParameterfvFUNC)(GLenum target, GLint level, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTexLevelParameterivFUNC)(GLenum target, GLint level, GLenum pname, GLint* params);
typedef GLboolean (GLLOADER_APIENTRY *glIsEnabledFUNC)(GLenum cap);
typedef void (GLLOADER_APIENTRY *glDepthRangeFUNC)(GLdouble zNear, GLdouble zFar);
typedef void (GLLOADER_APIENTRY *glViewportFUNC)(GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glNewListFUNC)(GLuint list, GLenum mode);
typedef void (GLLOADER_APIENTRY *glEndListFUNC)();
typedef void (GLLOADER_APIENTRY *glCallListFUNC)(GLuint list);
typedef void (GLLOADER_APIENTRY *glCallListsFUNC)(GLsizei n, GLenum type, const GLvoid* lists);
typedef void (GLLOADER_APIENTRY *glDeleteListsFUNC)(GLuint list, GLsizei range);
typedef GLuint (GLLOADER_APIENTRY *glGenListsFUNC)(GLsizei range);
typedef void (GLLOADER_APIENTRY *glListBaseFUNC)(GLuint base);
typedef void (GLLOADER_APIENTRY *glBeginFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glBitmapFUNC)(GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte* bitmap);
typedef void (GLLOADER_APIENTRY *glColor3bFUNC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (GLLOADER_APIENTRY *glColor3bvFUNC)(const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glColor3dFUNC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (GLLOADER_APIENTRY *glColor3dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glColor3fFUNC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (GLLOADER_APIENTRY *glColor3fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glColor3iFUNC)(GLint red, GLint green, GLint blue);
typedef void (GLLOADER_APIENTRY *glColor3ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glColor3sFUNC)(GLshort red, GLshort green, GLshort blue);
typedef void (GLLOADER_APIENTRY *glColor3svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glColor3ubFUNC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (GLLOADER_APIENTRY *glColor3ubvFUNC)(const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glColor3uiFUNC)(GLuint red, GLuint green, GLuint blue);
typedef void (GLLOADER_APIENTRY *glColor3uivFUNC)(const GLuint* v);
typedef void (GLLOADER_APIENTRY *glColor3usFUNC)(GLushort red, GLushort green, GLushort blue);
typedef void (GLLOADER_APIENTRY *glColor3usvFUNC)(const GLushort* v);
typedef void (GLLOADER_APIENTRY *glColor4bFUNC)(GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha);
typedef void (GLLOADER_APIENTRY *glColor4bvFUNC)(const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glColor4dFUNC)(GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha);
typedef void (GLLOADER_APIENTRY *glColor4dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glColor4fFUNC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLLOADER_APIENTRY *glColor4fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glColor4iFUNC)(GLint red, GLint green, GLint blue, GLint alpha);
typedef void (GLLOADER_APIENTRY *glColor4ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glColor4sFUNC)(GLshort red, GLshort green, GLshort blue, GLshort alpha);
typedef void (GLLOADER_APIENTRY *glColor4svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glColor4ubFUNC)(GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha);
typedef void (GLLOADER_APIENTRY *glColor4ubvFUNC)(const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glColor4uiFUNC)(GLuint red, GLuint green, GLuint blue, GLuint alpha);
typedef void (GLLOADER_APIENTRY *glColor4uivFUNC)(const GLuint* v);
typedef void (GLLOADER_APIENTRY *glColor4usFUNC)(GLushort red, GLushort green, GLushort blue, GLushort alpha);
typedef void (GLLOADER_APIENTRY *glColor4usvFUNC)(const GLushort* v);
typedef void (GLLOADER_APIENTRY *glEdgeFlagFUNC)(GLboolean flag);
typedef void (GLLOADER_APIENTRY *glEdgeFlagvFUNC)(const GLboolean* flag);
typedef void (GLLOADER_APIENTRY *glEndFUNC)();
typedef void (GLLOADER_APIENTRY *glIndexdFUNC)(GLdouble c);
typedef void (GLLOADER_APIENTRY *glIndexdvFUNC)(const GLdouble* c);
typedef void (GLLOADER_APIENTRY *glIndexfFUNC)(GLfloat c);
typedef void (GLLOADER_APIENTRY *glIndexfvFUNC)(const GLfloat* c);
typedef void (GLLOADER_APIENTRY *glIndexiFUNC)(GLint c);
typedef void (GLLOADER_APIENTRY *glIndexivFUNC)(const GLint* c);
typedef void (GLLOADER_APIENTRY *glIndexsFUNC)(GLshort c);
typedef void (GLLOADER_APIENTRY *glIndexsvFUNC)(const GLshort* c);
typedef void (GLLOADER_APIENTRY *glNormal3bFUNC)(GLbyte nx, GLbyte ny, GLbyte nz);
typedef void (GLLOADER_APIENTRY *glNormal3bvFUNC)(const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glNormal3dFUNC)(GLdouble nx, GLdouble ny, GLdouble nz);
typedef void (GLLOADER_APIENTRY *glNormal3dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glNormal3fFUNC)(GLfloat nx, GLfloat ny, GLfloat nz);
typedef void (GLLOADER_APIENTRY *glNormal3fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glNormal3iFUNC)(GLint nx, GLint ny, GLint nz);
typedef void (GLLOADER_APIENTRY *glNormal3ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glNormal3sFUNC)(GLshort nx, GLshort ny, GLshort nz);
typedef void (GLLOADER_APIENTRY *glNormal3svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glRasterPos2dFUNC)(GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glRasterPos2dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glRasterPos2fFUNC)(GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glRasterPos2fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glRasterPos2iFUNC)(GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glRasterPos2ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glRasterPos2sFUNC)(GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glRasterPos2svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glRasterPos3dFUNC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glRasterPos3dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glRasterPos3fFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glRasterPos3fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glRasterPos3iFUNC)(GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glRasterPos3ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glRasterPos3sFUNC)(GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glRasterPos3svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glRasterPos4dFUNC)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glRasterPos4dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glRasterPos4fFUNC)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glRasterPos4fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glRasterPos4iFUNC)(GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glRasterPos4ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glRasterPos4sFUNC)(GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLLOADER_APIENTRY *glRasterPos4svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glRectdFUNC)(GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2);
typedef void (GLLOADER_APIENTRY *glRectdvFUNC)(const GLdouble* v1, const GLdouble* v2);
typedef void (GLLOADER_APIENTRY *glRectfFUNC)(GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2);
typedef void (GLLOADER_APIENTRY *glRectfvFUNC)(const GLfloat* v1, const GLfloat* v2);
typedef void (GLLOADER_APIENTRY *glRectiFUNC)(GLint x1, GLint y1, GLint x2, GLint y2);
typedef void (GLLOADER_APIENTRY *glRectivFUNC)(const GLint* v1, const GLint* v2);
typedef void (GLLOADER_APIENTRY *glRectsFUNC)(GLshort x1, GLshort y1, GLshort x2, GLshort y2);
typedef void (GLLOADER_APIENTRY *glRectsvFUNC)(const GLshort* v1, const GLshort* v2);
typedef void (GLLOADER_APIENTRY *glTexCoord1dFUNC)(GLdouble s);
typedef void (GLLOADER_APIENTRY *glTexCoord1dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glTexCoord1fFUNC)(GLfloat s);
typedef void (GLLOADER_APIENTRY *glTexCoord1fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord1iFUNC)(GLint s);
typedef void (GLLOADER_APIENTRY *glTexCoord1ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glTexCoord1sFUNC)(GLshort s);
typedef void (GLLOADER_APIENTRY *glTexCoord1svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2dFUNC)(GLdouble s, GLdouble t);
typedef void (GLLOADER_APIENTRY *glTexCoord2dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2fFUNC)(GLfloat s, GLfloat t);
typedef void (GLLOADER_APIENTRY *glTexCoord2fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2iFUNC)(GLint s, GLint t);
typedef void (GLLOADER_APIENTRY *glTexCoord2ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glTexCoord2sFUNC)(GLshort s, GLshort t);
typedef void (GLLOADER_APIENTRY *glTexCoord2svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glTexCoord3dFUNC)(GLdouble s, GLdouble t, GLdouble r);
typedef void (GLLOADER_APIENTRY *glTexCoord3dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glTexCoord3fFUNC)(GLfloat s, GLfloat t, GLfloat r);
typedef void (GLLOADER_APIENTRY *glTexCoord3fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord3iFUNC)(GLint s, GLint t, GLint r);
typedef void (GLLOADER_APIENTRY *glTexCoord3ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glTexCoord3sFUNC)(GLshort s, GLshort t, GLshort r);
typedef void (GLLOADER_APIENTRY *glTexCoord3svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4dFUNC)(GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (GLLOADER_APIENTRY *glTexCoord4dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4fFUNC)(GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (GLLOADER_APIENTRY *glTexCoord4fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4iFUNC)(GLint s, GLint t, GLint r, GLint q);
typedef void (GLLOADER_APIENTRY *glTexCoord4ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glTexCoord4sFUNC)(GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (GLLOADER_APIENTRY *glTexCoord4svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertex2dFUNC)(GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glVertex2dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertex2fFUNC)(GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glVertex2fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertex2iFUNC)(GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glVertex2ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertex2sFUNC)(GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glVertex2svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertex3dFUNC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glVertex3dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertex3fFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glVertex3fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertex3iFUNC)(GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glVertex3ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertex3sFUNC)(GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glVertex3svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertex4dFUNC)(GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glVertex4dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertex4fFUNC)(GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glVertex4fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertex4iFUNC)(GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glVertex4ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertex4sFUNC)(GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLLOADER_APIENTRY *glVertex4svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glClipPlaneFUNC)(GLenum plane, const GLdouble* equation);
typedef void (GLLOADER_APIENTRY *glColorMaterialFUNC)(GLenum face, GLenum mode);
typedef void (GLLOADER_APIENTRY *glFogfFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glFogfvFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glFogiFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glFogivFUNC)(GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glLightfFUNC)(GLenum light, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glLightfvFUNC)(GLenum light, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glLightiFUNC)(GLenum light, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glLightivFUNC)(GLenum light, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glLightModelfFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glLightModelfvFUNC)(GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glLightModeliFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glLightModelivFUNC)(GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glLineStippleFUNC)(GLint factor, GLushort pattern);
typedef void (GLLOADER_APIENTRY *glMaterialfFUNC)(GLenum face, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glMaterialfvFUNC)(GLenum face, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glMaterialiFUNC)(GLenum face, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glMaterialivFUNC)(GLenum face, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glPolygonStippleFUNC)(const GLubyte* mask);
typedef void (GLLOADER_APIENTRY *glShadeModelFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glTexEnvfFUNC)(GLenum target, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTexEnvfvFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTexEnviFUNC)(GLenum target, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTexEnvivFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glTexGendFUNC)(GLenum coord, GLenum pname, GLdouble param);
typedef void (GLLOADER_APIENTRY *glTexGendvFUNC)(GLenum coord, GLenum pname, const GLdouble* params);
typedef void (GLLOADER_APIENTRY *glTexGenfFUNC)(GLenum coord, GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glTexGenfvFUNC)(GLenum coord, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glTexGeniFUNC)(GLenum coord, GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glTexGenivFUNC)(GLenum coord, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glFeedbackBufferFUNC)(GLsizei size, GLenum type, GLfloat* buffer);
typedef void (GLLOADER_APIENTRY *glSelectBufferFUNC)(GLsizei size, GLuint* buffer);
typedef GLint (GLLOADER_APIENTRY *glRenderModeFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glInitNamesFUNC)();
typedef void (GLLOADER_APIENTRY *glLoadNameFUNC)(GLuint name);
typedef void (GLLOADER_APIENTRY *glPassThroughFUNC)(GLfloat token);
typedef void (GLLOADER_APIENTRY *glPopNameFUNC)();
typedef void (GLLOADER_APIENTRY *glPushNameFUNC)(GLuint name);
typedef void (GLLOADER_APIENTRY *glClearAccumFUNC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLLOADER_APIENTRY *glClearIndexFUNC)(GLfloat c);
typedef void (GLLOADER_APIENTRY *glIndexMaskFUNC)(GLuint mask);
typedef void (GLLOADER_APIENTRY *glAccumFUNC)(GLenum op, GLfloat value);
typedef void (GLLOADER_APIENTRY *glPopAttribFUNC)();
typedef void (GLLOADER_APIENTRY *glPushAttribFUNC)(GLbitfield mask);
typedef void (GLLOADER_APIENTRY *glMap1dFUNC)(GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble* points);
typedef void (GLLOADER_APIENTRY *glMap1fFUNC)(GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat* points);
typedef void (GLLOADER_APIENTRY *glMap2dFUNC)(GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble* points);
typedef void (GLLOADER_APIENTRY *glMap2fFUNC)(GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat* points);
typedef void (GLLOADER_APIENTRY *glMapGrid1dFUNC)(GLint un, GLdouble u1, GLdouble u2);
typedef void (GLLOADER_APIENTRY *glMapGrid1fFUNC)(GLint un, GLfloat u1, GLfloat u2);
typedef void (GLLOADER_APIENTRY *glMapGrid2dFUNC)(GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2);
typedef void (GLLOADER_APIENTRY *glMapGrid2fFUNC)(GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2);
typedef void (GLLOADER_APIENTRY *glEvalCoord1dFUNC)(GLdouble u);
typedef void (GLLOADER_APIENTRY *glEvalCoord1dvFUNC)(const GLdouble* u);
typedef void (GLLOADER_APIENTRY *glEvalCoord1fFUNC)(GLfloat u);
typedef void (GLLOADER_APIENTRY *glEvalCoord1fvFUNC)(const GLfloat* u);
typedef void (GLLOADER_APIENTRY *glEvalCoord2dFUNC)(GLdouble u, GLdouble v);
typedef void (GLLOADER_APIENTRY *glEvalCoord2dvFUNC)(const GLdouble* u);
typedef void (GLLOADER_APIENTRY *glEvalCoord2fFUNC)(GLfloat u, GLfloat v);
typedef void (GLLOADER_APIENTRY *glEvalCoord2fvFUNC)(const GLfloat* u);
typedef void (GLLOADER_APIENTRY *glEvalMesh1FUNC)(GLenum mode, GLint i1, GLint i2);
typedef void (GLLOADER_APIENTRY *glEvalPoint1FUNC)(GLint i);
typedef void (GLLOADER_APIENTRY *glEvalMesh2FUNC)(GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2);
typedef void (GLLOADER_APIENTRY *glEvalPoint2FUNC)(GLint i, GLint j);
typedef void (GLLOADER_APIENTRY *glAlphaFuncFUNC)(GLenum func, GLfloat ref);
typedef void (GLLOADER_APIENTRY *glPixelZoomFUNC)(GLfloat xfactor, GLfloat yfactor);
typedef void (GLLOADER_APIENTRY *glPixelTransferfFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPixelTransferiFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glPixelMapfvFUNC)(GLenum map, GLint mapsize, const GLfloat* values);
typedef void (GLLOADER_APIENTRY *glPixelMapuivFUNC)(GLenum map, GLint mapsize, const GLuint* values);
typedef void (GLLOADER_APIENTRY *glPixelMapusvFUNC)(GLenum map, GLint mapsize, const GLushort* values);
typedef void (GLLOADER_APIENTRY *glCopyPixelsFUNC)(GLint x, GLint y, GLsizei width, GLsizei height, GLenum type);
typedef void (GLLOADER_APIENTRY *glDrawPixelsFUNC)(GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glGetClipPlaneFUNC)(GLenum plane, GLdouble* equation);
typedef void (GLLOADER_APIENTRY *glGetLightfvFUNC)(GLenum light, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetLightivFUNC)(GLenum light, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMapdvFUNC)(GLenum target, GLenum query, GLdouble* v);
typedef void (GLLOADER_APIENTRY *glGetMapfvFUNC)(GLenum target, GLenum query, GLfloat* v);
typedef void (GLLOADER_APIENTRY *glGetMapivFUNC)(GLenum target, GLenum query, GLint* v);
typedef void (GLLOADER_APIENTRY *glGetMaterialfvFUNC)(GLenum face, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMaterialivFUNC)(GLenum face, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetPixelMapfvFUNC)(GLenum map, GLfloat* values);
typedef void (GLLOADER_APIENTRY *glGetPixelMapuivFUNC)(GLenum map, GLuint* values);
typedef void (GLLOADER_APIENTRY *glGetPixelMapusvFUNC)(GLenum map, GLushort* values);
typedef void (GLLOADER_APIENTRY *glGetPolygonStippleFUNC)(GLubyte* mask);
typedef void (GLLOADER_APIENTRY *glGetTexEnvfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTexEnvivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexGendvFUNC)(GLenum coord, GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetTexGenfvFUNC)(GLenum coord, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetTexGenivFUNC)(GLenum coord, GLenum pname, GLint* params);
typedef GLboolean (GLLOADER_APIENTRY *glIsListFUNC)(GLuint list);
typedef void (GLLOADER_APIENTRY *glFrustumFUNC)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GLLOADER_APIENTRY *glLoadIdentityFUNC)();
typedef void (GLLOADER_APIENTRY *glLoadMatrixfFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glLoadMatrixdFUNC)(const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glMatrixModeFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glMultMatrixfFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMultMatrixdFUNC)(const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glOrthoFUNC)(GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar);
typedef void (GLLOADER_APIENTRY *glPopMatrixFUNC)();
typedef void (GLLOADER_APIENTRY *glPushMatrixFUNC)();
typedef void (GLLOADER_APIENTRY *glRotatedFUNC)(GLdouble angle, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glRotatefFUNC)(GLfloat angle, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glScaledFUNC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glScalefFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glTranslatedFUNC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glTranslatefFUNC)(GLfloat x, GLfloat y, GLfloat z);

extern GLLOADER_API glCullFaceFUNC glCullFace;
extern GLLOADER_API glFrontFaceFUNC glFrontFace;
extern GLLOADER_API glHintFUNC glHint;
extern GLLOADER_API glLineWidthFUNC glLineWidth;
extern GLLOADER_API glPointSizeFUNC glPointSize;
extern GLLOADER_API glPolygonModeFUNC glPolygonMode;
extern GLLOADER_API glScissorFUNC glScissor;
extern GLLOADER_API glTexParameterfFUNC glTexParameterf;
extern GLLOADER_API glTexParameterfvFUNC glTexParameterfv;
extern GLLOADER_API glTexParameteriFUNC glTexParameteri;
extern GLLOADER_API glTexParameterivFUNC glTexParameteriv;
extern GLLOADER_API glTexImage1DFUNC glTexImage1D;
extern GLLOADER_API glTexImage2DFUNC glTexImage2D;
extern GLLOADER_API glDrawBufferFUNC glDrawBuffer;
extern GLLOADER_API glClearFUNC glClear;
extern GLLOADER_API glClearColorFUNC glClearColor;
extern GLLOADER_API glClearStencilFUNC glClearStencil;
extern GLLOADER_API glClearDepthFUNC glClearDepth;
extern GLLOADER_API glStencilMaskFUNC glStencilMask;
extern GLLOADER_API glColorMaskFUNC glColorMask;
extern GLLOADER_API glDepthMaskFUNC glDepthMask;
extern GLLOADER_API glDisableFUNC glDisable;
extern GLLOADER_API glEnableFUNC glEnable;
extern GLLOADER_API glFinishFUNC glFinish;
extern GLLOADER_API glFlushFUNC glFlush;
extern GLLOADER_API glBlendFuncFUNC glBlendFunc;
extern GLLOADER_API glLogicOpFUNC glLogicOp;
extern GLLOADER_API glStencilFuncFUNC glStencilFunc;
extern GLLOADER_API glStencilOpFUNC glStencilOp;
extern GLLOADER_API glDepthFuncFUNC glDepthFunc;
extern GLLOADER_API glPixelStorefFUNC glPixelStoref;
extern GLLOADER_API glPixelStoreiFUNC glPixelStorei;
extern GLLOADER_API glReadBufferFUNC glReadBuffer;
extern GLLOADER_API glReadPixelsFUNC glReadPixels;
extern GLLOADER_API glGetBooleanvFUNC glGetBooleanv;
extern GLLOADER_API glGetDoublevFUNC glGetDoublev;
extern GLLOADER_API glGetErrorFUNC glGetError;
extern GLLOADER_API glGetFloatvFUNC glGetFloatv;
extern GLLOADER_API glGetIntegervFUNC glGetIntegerv;
extern GLLOADER_API glGetStringFUNC glGetString;
extern GLLOADER_API glGetTexImageFUNC glGetTexImage;
extern GLLOADER_API glGetTexParameterfvFUNC glGetTexParameterfv;
extern GLLOADER_API glGetTexParameterivFUNC glGetTexParameteriv;
extern GLLOADER_API glGetTexLevelParameterfvFUNC glGetTexLevelParameterfv;
extern GLLOADER_API glGetTexLevelParameterivFUNC glGetTexLevelParameteriv;
extern GLLOADER_API glIsEnabledFUNC glIsEnabled;
extern GLLOADER_API glDepthRangeFUNC glDepthRange;
extern GLLOADER_API glViewportFUNC glViewport;
extern GLLOADER_API glNewListFUNC glNewList;
extern GLLOADER_API glEndListFUNC glEndList;
extern GLLOADER_API glCallListFUNC glCallList;
extern GLLOADER_API glCallListsFUNC glCallLists;
extern GLLOADER_API glDeleteListsFUNC glDeleteLists;
extern GLLOADER_API glGenListsFUNC glGenLists;
extern GLLOADER_API glListBaseFUNC glListBase;
extern GLLOADER_API glBeginFUNC glBegin;
extern GLLOADER_API glBitmapFUNC glBitmap;
extern GLLOADER_API glColor3bFUNC glColor3b;
extern GLLOADER_API glColor3bvFUNC glColor3bv;
extern GLLOADER_API glColor3dFUNC glColor3d;
extern GLLOADER_API glColor3dvFUNC glColor3dv;
extern GLLOADER_API glColor3fFUNC glColor3f;
extern GLLOADER_API glColor3fvFUNC glColor3fv;
extern GLLOADER_API glColor3iFUNC glColor3i;
extern GLLOADER_API glColor3ivFUNC glColor3iv;
extern GLLOADER_API glColor3sFUNC glColor3s;
extern GLLOADER_API glColor3svFUNC glColor3sv;
extern GLLOADER_API glColor3ubFUNC glColor3ub;
extern GLLOADER_API glColor3ubvFUNC glColor3ubv;
extern GLLOADER_API glColor3uiFUNC glColor3ui;
extern GLLOADER_API glColor3uivFUNC glColor3uiv;
extern GLLOADER_API glColor3usFUNC glColor3us;
extern GLLOADER_API glColor3usvFUNC glColor3usv;
extern GLLOADER_API glColor4bFUNC glColor4b;
extern GLLOADER_API glColor4bvFUNC glColor4bv;
extern GLLOADER_API glColor4dFUNC glColor4d;
extern GLLOADER_API glColor4dvFUNC glColor4dv;
extern GLLOADER_API glColor4fFUNC glColor4f;
extern GLLOADER_API glColor4fvFUNC glColor4fv;
extern GLLOADER_API glColor4iFUNC glColor4i;
extern GLLOADER_API glColor4ivFUNC glColor4iv;
extern GLLOADER_API glColor4sFUNC glColor4s;
extern GLLOADER_API glColor4svFUNC glColor4sv;
extern GLLOADER_API glColor4ubFUNC glColor4ub;
extern GLLOADER_API glColor4ubvFUNC glColor4ubv;
extern GLLOADER_API glColor4uiFUNC glColor4ui;
extern GLLOADER_API glColor4uivFUNC glColor4uiv;
extern GLLOADER_API glColor4usFUNC glColor4us;
extern GLLOADER_API glColor4usvFUNC glColor4usv;
extern GLLOADER_API glEdgeFlagFUNC glEdgeFlag;
extern GLLOADER_API glEdgeFlagvFUNC glEdgeFlagv;
extern GLLOADER_API glEndFUNC glEnd;
extern GLLOADER_API glIndexdFUNC glIndexd;
extern GLLOADER_API glIndexdvFUNC glIndexdv;
extern GLLOADER_API glIndexfFUNC glIndexf;
extern GLLOADER_API glIndexfvFUNC glIndexfv;
extern GLLOADER_API glIndexiFUNC glIndexi;
extern GLLOADER_API glIndexivFUNC glIndexiv;
extern GLLOADER_API glIndexsFUNC glIndexs;
extern GLLOADER_API glIndexsvFUNC glIndexsv;
extern GLLOADER_API glNormal3bFUNC glNormal3b;
extern GLLOADER_API glNormal3bvFUNC glNormal3bv;
extern GLLOADER_API glNormal3dFUNC glNormal3d;
extern GLLOADER_API glNormal3dvFUNC glNormal3dv;
extern GLLOADER_API glNormal3fFUNC glNormal3f;
extern GLLOADER_API glNormal3fvFUNC glNormal3fv;
extern GLLOADER_API glNormal3iFUNC glNormal3i;
extern GLLOADER_API glNormal3ivFUNC glNormal3iv;
extern GLLOADER_API glNormal3sFUNC glNormal3s;
extern GLLOADER_API glNormal3svFUNC glNormal3sv;
extern GLLOADER_API glRasterPos2dFUNC glRasterPos2d;
extern GLLOADER_API glRasterPos2dvFUNC glRasterPos2dv;
extern GLLOADER_API glRasterPos2fFUNC glRasterPos2f;
extern GLLOADER_API glRasterPos2fvFUNC glRasterPos2fv;
extern GLLOADER_API glRasterPos2iFUNC glRasterPos2i;
extern GLLOADER_API glRasterPos2ivFUNC glRasterPos2iv;
extern GLLOADER_API glRasterPos2sFUNC glRasterPos2s;
extern GLLOADER_API glRasterPos2svFUNC glRasterPos2sv;
extern GLLOADER_API glRasterPos3dFUNC glRasterPos3d;
extern GLLOADER_API glRasterPos3dvFUNC glRasterPos3dv;
extern GLLOADER_API glRasterPos3fFUNC glRasterPos3f;
extern GLLOADER_API glRasterPos3fvFUNC glRasterPos3fv;
extern GLLOADER_API glRasterPos3iFUNC glRasterPos3i;
extern GLLOADER_API glRasterPos3ivFUNC glRasterPos3iv;
extern GLLOADER_API glRasterPos3sFUNC glRasterPos3s;
extern GLLOADER_API glRasterPos3svFUNC glRasterPos3sv;
extern GLLOADER_API glRasterPos4dFUNC glRasterPos4d;
extern GLLOADER_API glRasterPos4dvFUNC glRasterPos4dv;
extern GLLOADER_API glRasterPos4fFUNC glRasterPos4f;
extern GLLOADER_API glRasterPos4fvFUNC glRasterPos4fv;
extern GLLOADER_API glRasterPos4iFUNC glRasterPos4i;
extern GLLOADER_API glRasterPos4ivFUNC glRasterPos4iv;
extern GLLOADER_API glRasterPos4sFUNC glRasterPos4s;
extern GLLOADER_API glRasterPos4svFUNC glRasterPos4sv;
extern GLLOADER_API glRectdFUNC glRectd;
extern GLLOADER_API glRectdvFUNC glRectdv;
extern GLLOADER_API glRectfFUNC glRectf;
extern GLLOADER_API glRectfvFUNC glRectfv;
extern GLLOADER_API glRectiFUNC glRecti;
extern GLLOADER_API glRectivFUNC glRectiv;
extern GLLOADER_API glRectsFUNC glRects;
extern GLLOADER_API glRectsvFUNC glRectsv;
extern GLLOADER_API glTexCoord1dFUNC glTexCoord1d;
extern GLLOADER_API glTexCoord1dvFUNC glTexCoord1dv;
extern GLLOADER_API glTexCoord1fFUNC glTexCoord1f;
extern GLLOADER_API glTexCoord1fvFUNC glTexCoord1fv;
extern GLLOADER_API glTexCoord1iFUNC glTexCoord1i;
extern GLLOADER_API glTexCoord1ivFUNC glTexCoord1iv;
extern GLLOADER_API glTexCoord1sFUNC glTexCoord1s;
extern GLLOADER_API glTexCoord1svFUNC glTexCoord1sv;
extern GLLOADER_API glTexCoord2dFUNC glTexCoord2d;
extern GLLOADER_API glTexCoord2dvFUNC glTexCoord2dv;
extern GLLOADER_API glTexCoord2fFUNC glTexCoord2f;
extern GLLOADER_API glTexCoord2fvFUNC glTexCoord2fv;
extern GLLOADER_API glTexCoord2iFUNC glTexCoord2i;
extern GLLOADER_API glTexCoord2ivFUNC glTexCoord2iv;
extern GLLOADER_API glTexCoord2sFUNC glTexCoord2s;
extern GLLOADER_API glTexCoord2svFUNC glTexCoord2sv;
extern GLLOADER_API glTexCoord3dFUNC glTexCoord3d;
extern GLLOADER_API glTexCoord3dvFUNC glTexCoord3dv;
extern GLLOADER_API glTexCoord3fFUNC glTexCoord3f;
extern GLLOADER_API glTexCoord3fvFUNC glTexCoord3fv;
extern GLLOADER_API glTexCoord3iFUNC glTexCoord3i;
extern GLLOADER_API glTexCoord3ivFUNC glTexCoord3iv;
extern GLLOADER_API glTexCoord3sFUNC glTexCoord3s;
extern GLLOADER_API glTexCoord3svFUNC glTexCoord3sv;
extern GLLOADER_API glTexCoord4dFUNC glTexCoord4d;
extern GLLOADER_API glTexCoord4dvFUNC glTexCoord4dv;
extern GLLOADER_API glTexCoord4fFUNC glTexCoord4f;
extern GLLOADER_API glTexCoord4fvFUNC glTexCoord4fv;
extern GLLOADER_API glTexCoord4iFUNC glTexCoord4i;
extern GLLOADER_API glTexCoord4ivFUNC glTexCoord4iv;
extern GLLOADER_API glTexCoord4sFUNC glTexCoord4s;
extern GLLOADER_API glTexCoord4svFUNC glTexCoord4sv;
extern GLLOADER_API glVertex2dFUNC glVertex2d;
extern GLLOADER_API glVertex2dvFUNC glVertex2dv;
extern GLLOADER_API glVertex2fFUNC glVertex2f;
extern GLLOADER_API glVertex2fvFUNC glVertex2fv;
extern GLLOADER_API glVertex2iFUNC glVertex2i;
extern GLLOADER_API glVertex2ivFUNC glVertex2iv;
extern GLLOADER_API glVertex2sFUNC glVertex2s;
extern GLLOADER_API glVertex2svFUNC glVertex2sv;
extern GLLOADER_API glVertex3dFUNC glVertex3d;
extern GLLOADER_API glVertex3dvFUNC glVertex3dv;
extern GLLOADER_API glVertex3fFUNC glVertex3f;
extern GLLOADER_API glVertex3fvFUNC glVertex3fv;
extern GLLOADER_API glVertex3iFUNC glVertex3i;
extern GLLOADER_API glVertex3ivFUNC glVertex3iv;
extern GLLOADER_API glVertex3sFUNC glVertex3s;
extern GLLOADER_API glVertex3svFUNC glVertex3sv;
extern GLLOADER_API glVertex4dFUNC glVertex4d;
extern GLLOADER_API glVertex4dvFUNC glVertex4dv;
extern GLLOADER_API glVertex4fFUNC glVertex4f;
extern GLLOADER_API glVertex4fvFUNC glVertex4fv;
extern GLLOADER_API glVertex4iFUNC glVertex4i;
extern GLLOADER_API glVertex4ivFUNC glVertex4iv;
extern GLLOADER_API glVertex4sFUNC glVertex4s;
extern GLLOADER_API glVertex4svFUNC glVertex4sv;
extern GLLOADER_API glClipPlaneFUNC glClipPlane;
extern GLLOADER_API glColorMaterialFUNC glColorMaterial;
extern GLLOADER_API glFogfFUNC glFogf;
extern GLLOADER_API glFogfvFUNC glFogfv;
extern GLLOADER_API glFogiFUNC glFogi;
extern GLLOADER_API glFogivFUNC glFogiv;
extern GLLOADER_API glLightfFUNC glLightf;
extern GLLOADER_API glLightfvFUNC glLightfv;
extern GLLOADER_API glLightiFUNC glLighti;
extern GLLOADER_API glLightivFUNC glLightiv;
extern GLLOADER_API glLightModelfFUNC glLightModelf;
extern GLLOADER_API glLightModelfvFUNC glLightModelfv;
extern GLLOADER_API glLightModeliFUNC glLightModeli;
extern GLLOADER_API glLightModelivFUNC glLightModeliv;
extern GLLOADER_API glLineStippleFUNC glLineStipple;
extern GLLOADER_API glMaterialfFUNC glMaterialf;
extern GLLOADER_API glMaterialfvFUNC glMaterialfv;
extern GLLOADER_API glMaterialiFUNC glMateriali;
extern GLLOADER_API glMaterialivFUNC glMaterialiv;
extern GLLOADER_API glPolygonStippleFUNC glPolygonStipple;
extern GLLOADER_API glShadeModelFUNC glShadeModel;
extern GLLOADER_API glTexEnvfFUNC glTexEnvf;
extern GLLOADER_API glTexEnvfvFUNC glTexEnvfv;
extern GLLOADER_API glTexEnviFUNC glTexEnvi;
extern GLLOADER_API glTexEnvivFUNC glTexEnviv;
extern GLLOADER_API glTexGendFUNC glTexGend;
extern GLLOADER_API glTexGendvFUNC glTexGendv;
extern GLLOADER_API glTexGenfFUNC glTexGenf;
extern GLLOADER_API glTexGenfvFUNC glTexGenfv;
extern GLLOADER_API glTexGeniFUNC glTexGeni;
extern GLLOADER_API glTexGenivFUNC glTexGeniv;
extern GLLOADER_API glFeedbackBufferFUNC glFeedbackBuffer;
extern GLLOADER_API glSelectBufferFUNC glSelectBuffer;
extern GLLOADER_API glRenderModeFUNC glRenderMode;
extern GLLOADER_API glInitNamesFUNC glInitNames;
extern GLLOADER_API glLoadNameFUNC glLoadName;
extern GLLOADER_API glPassThroughFUNC glPassThrough;
extern GLLOADER_API glPopNameFUNC glPopName;
extern GLLOADER_API glPushNameFUNC glPushName;
extern GLLOADER_API glClearAccumFUNC glClearAccum;
extern GLLOADER_API glClearIndexFUNC glClearIndex;
extern GLLOADER_API glIndexMaskFUNC glIndexMask;
extern GLLOADER_API glAccumFUNC glAccum;
extern GLLOADER_API glPopAttribFUNC glPopAttrib;
extern GLLOADER_API glPushAttribFUNC glPushAttrib;
extern GLLOADER_API glMap1dFUNC glMap1d;
extern GLLOADER_API glMap1fFUNC glMap1f;
extern GLLOADER_API glMap2dFUNC glMap2d;
extern GLLOADER_API glMap2fFUNC glMap2f;
extern GLLOADER_API glMapGrid1dFUNC glMapGrid1d;
extern GLLOADER_API glMapGrid1fFUNC glMapGrid1f;
extern GLLOADER_API glMapGrid2dFUNC glMapGrid2d;
extern GLLOADER_API glMapGrid2fFUNC glMapGrid2f;
extern GLLOADER_API glEvalCoord1dFUNC glEvalCoord1d;
extern GLLOADER_API glEvalCoord1dvFUNC glEvalCoord1dv;
extern GLLOADER_API glEvalCoord1fFUNC glEvalCoord1f;
extern GLLOADER_API glEvalCoord1fvFUNC glEvalCoord1fv;
extern GLLOADER_API glEvalCoord2dFUNC glEvalCoord2d;
extern GLLOADER_API glEvalCoord2dvFUNC glEvalCoord2dv;
extern GLLOADER_API glEvalCoord2fFUNC glEvalCoord2f;
extern GLLOADER_API glEvalCoord2fvFUNC glEvalCoord2fv;
extern GLLOADER_API glEvalMesh1FUNC glEvalMesh1;
extern GLLOADER_API glEvalPoint1FUNC glEvalPoint1;
extern GLLOADER_API glEvalMesh2FUNC glEvalMesh2;
extern GLLOADER_API glEvalPoint2FUNC glEvalPoint2;
extern GLLOADER_API glAlphaFuncFUNC glAlphaFunc;
extern GLLOADER_API glPixelZoomFUNC glPixelZoom;
extern GLLOADER_API glPixelTransferfFUNC glPixelTransferf;
extern GLLOADER_API glPixelTransferiFUNC glPixelTransferi;
extern GLLOADER_API glPixelMapfvFUNC glPixelMapfv;
extern GLLOADER_API glPixelMapuivFUNC glPixelMapuiv;
extern GLLOADER_API glPixelMapusvFUNC glPixelMapusv;
extern GLLOADER_API glCopyPixelsFUNC glCopyPixels;
extern GLLOADER_API glDrawPixelsFUNC glDrawPixels;
extern GLLOADER_API glGetClipPlaneFUNC glGetClipPlane;
extern GLLOADER_API glGetLightfvFUNC glGetLightfv;
extern GLLOADER_API glGetLightivFUNC glGetLightiv;
extern GLLOADER_API glGetMapdvFUNC glGetMapdv;
extern GLLOADER_API glGetMapfvFUNC glGetMapfv;
extern GLLOADER_API glGetMapivFUNC glGetMapiv;
extern GLLOADER_API glGetMaterialfvFUNC glGetMaterialfv;
extern GLLOADER_API glGetMaterialivFUNC glGetMaterialiv;
extern GLLOADER_API glGetPixelMapfvFUNC glGetPixelMapfv;
extern GLLOADER_API glGetPixelMapuivFUNC glGetPixelMapuiv;
extern GLLOADER_API glGetPixelMapusvFUNC glGetPixelMapusv;
extern GLLOADER_API glGetPolygonStippleFUNC glGetPolygonStipple;
extern GLLOADER_API glGetTexEnvfvFUNC glGetTexEnvfv;
extern GLLOADER_API glGetTexEnvivFUNC glGetTexEnviv;
extern GLLOADER_API glGetTexGendvFUNC glGetTexGendv;
extern GLLOADER_API glGetTexGenfvFUNC glGetTexGenfv;
extern GLLOADER_API glGetTexGenivFUNC glGetTexGeniv;
extern GLLOADER_API glIsListFUNC glIsList;
extern GLLOADER_API glFrustumFUNC glFrustum;
extern GLLOADER_API glLoadIdentityFUNC glLoadIdentity;
extern GLLOADER_API glLoadMatrixfFUNC glLoadMatrixf;
extern GLLOADER_API glLoadMatrixdFUNC glLoadMatrixd;
extern GLLOADER_API glMatrixModeFUNC glMatrixMode;
extern GLLOADER_API glMultMatrixfFUNC glMultMatrixf;
extern GLLOADER_API glMultMatrixdFUNC glMultMatrixd;
extern GLLOADER_API glOrthoFUNC glOrtho;
extern GLLOADER_API glPopMatrixFUNC glPopMatrix;
extern GLLOADER_API glPushMatrixFUNC glPushMatrix;
extern GLLOADER_API glRotatedFUNC glRotated;
extern GLLOADER_API glRotatefFUNC glRotatef;
extern GLLOADER_API glScaledFUNC glScaled;
extern GLLOADER_API glScalefFUNC glScalef;
extern GLLOADER_API glTranslatedFUNC glTranslated;
extern GLLOADER_API glTranslatefFUNC glTranslatef;

#endif

#ifdef GL_VERSION_1_1

typedef void (GLLOADER_APIENTRY *glDrawArraysFUNC)(GLenum mode, GLint first, GLsizei count);
typedef void (GLLOADER_APIENTRY *glDrawElementsFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices);
typedef void (GLLOADER_APIENTRY *glPolygonOffsetFUNC)(GLfloat factor, GLfloat units);
typedef void (GLLOADER_APIENTRY *glCopyTexImage1DFUNC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyTexImage2DFUNC)(GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage1DFUNC)(GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage2DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glTexSubImage1DFUNC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage2DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glBindTextureFUNC)(GLenum target, GLuint texture);
typedef void (GLLOADER_APIENTRY *glDeleteTexturesFUNC)(GLsizei n, const GLuint* textures);
typedef void (GLLOADER_APIENTRY *glGenTexturesFUNC)(GLsizei n, GLuint* textures);
typedef GLboolean (GLLOADER_APIENTRY *glIsTextureFUNC)(GLuint texture);
typedef void (GLLOADER_APIENTRY *glArrayElementFUNC)(GLint i);
typedef void (GLLOADER_APIENTRY *glColorPointerFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glDisableClientStateFUNC)(GLenum array);
typedef void (GLLOADER_APIENTRY *glEdgeFlagPointerFUNC)(GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glEnableClientStateFUNC)(GLenum array);
typedef void (GLLOADER_APIENTRY *glIndexPointerFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glInterleavedArraysFUNC)(GLenum format, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glNormalPointerFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glTexCoordPointerFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glVertexPointerFUNC)(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef GLboolean (GLLOADER_APIENTRY *glAreTexturesResidentFUNC)(GLsizei n, const GLuint* textures, GLboolean* residences);
typedef void (GLLOADER_APIENTRY *glPrioritizeTexturesFUNC)(GLsizei n, const GLuint* textures, const GLfloat* priorities);
typedef void (GLLOADER_APIENTRY *glIndexubFUNC)(GLubyte c);
typedef void (GLLOADER_APIENTRY *glIndexubvFUNC)(const GLubyte* c);
typedef void (GLLOADER_APIENTRY *glPopClientAttribFUNC)();
typedef void (GLLOADER_APIENTRY *glPushClientAttribFUNC)(GLbitfield mask);

extern GLLOADER_API glDrawArraysFUNC glDrawArrays;
extern GLLOADER_API glDrawElementsFUNC glDrawElements;
extern GLLOADER_API glPolygonOffsetFUNC glPolygonOffset;
extern GLLOADER_API glCopyTexImage1DFUNC glCopyTexImage1D;
extern GLLOADER_API glCopyTexImage2DFUNC glCopyTexImage2D;
extern GLLOADER_API glCopyTexSubImage1DFUNC glCopyTexSubImage1D;
extern GLLOADER_API glCopyTexSubImage2DFUNC glCopyTexSubImage2D;
extern GLLOADER_API glTexSubImage1DFUNC glTexSubImage1D;
extern GLLOADER_API glTexSubImage2DFUNC glTexSubImage2D;
extern GLLOADER_API glBindTextureFUNC glBindTexture;
extern GLLOADER_API glDeleteTexturesFUNC glDeleteTextures;
extern GLLOADER_API glGenTexturesFUNC glGenTextures;
extern GLLOADER_API glIsTextureFUNC glIsTexture;
extern GLLOADER_API glArrayElementFUNC glArrayElement;
extern GLLOADER_API glColorPointerFUNC glColorPointer;
extern GLLOADER_API glDisableClientStateFUNC glDisableClientState;
extern GLLOADER_API glEdgeFlagPointerFUNC glEdgeFlagPointer;
extern GLLOADER_API glEnableClientStateFUNC glEnableClientState;
extern GLLOADER_API glIndexPointerFUNC glIndexPointer;
extern GLLOADER_API glInterleavedArraysFUNC glInterleavedArrays;
extern GLLOADER_API glNormalPointerFUNC glNormalPointer;
extern GLLOADER_API glTexCoordPointerFUNC glTexCoordPointer;
extern GLLOADER_API glVertexPointerFUNC glVertexPointer;
extern GLLOADER_API glAreTexturesResidentFUNC glAreTexturesResident;
extern GLLOADER_API glPrioritizeTexturesFUNC glPrioritizeTextures;
extern GLLOADER_API glIndexubFUNC glIndexub;
extern GLLOADER_API glIndexubvFUNC glIndexubv;
extern GLLOADER_API glPopClientAttribFUNC glPopClientAttrib;
extern GLLOADER_API glPushClientAttribFUNC glPushClientAttrib;

#endif

#ifdef GL_VERSION_1_2

typedef void (GLLOADER_APIENTRY *glBlendColorFUNC)(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha);
typedef void (GLLOADER_APIENTRY *glBlendEquationFUNC)(GLenum mode);
typedef void (GLLOADER_APIENTRY *glDrawRangeElementsFUNC)(GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const GLvoid* indices);
typedef void (GLLOADER_APIENTRY *glTexImage3DFUNC)(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glTexSubImage3DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const GLvoid* pixels);
typedef void (GLLOADER_APIENTRY *glCopyTexSubImage3DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glColorTableFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* table);
typedef void (GLLOADER_APIENTRY *glColorTableParameterfvFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glColorTableParameterivFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glCopyColorTableFUNC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glGetColorTableFUNC)(GLenum target, GLenum format, GLenum type, GLvoid* table);
typedef void (GLLOADER_APIENTRY *glGetColorTableParameterfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetColorTableParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glColorSubTableFUNC)(GLenum target, GLsizei start, GLsizei count, GLenum format, GLenum type, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCopyColorSubTableFUNC)(GLenum target, GLsizei start, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glConvolutionFilter1DFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLenum format, GLenum type, const GLvoid* image);
typedef void (GLLOADER_APIENTRY *glConvolutionFilter2DFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* image);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterfFUNC)(GLenum target, GLenum pname, GLfloat params);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterfvFUNC)(GLenum target, GLenum pname, const GLfloat* params);
typedef void (GLLOADER_APIENTRY *glConvolutionParameteriFUNC)(GLenum target, GLenum pname, GLint params);
typedef void (GLLOADER_APIENTRY *glConvolutionParameterivFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glCopyConvolutionFilter1DFUNC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width);
typedef void (GLLOADER_APIENTRY *glCopyConvolutionFilter2DFUNC)(GLenum target, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GLLOADER_APIENTRY *glGetConvolutionFilterFUNC)(GLenum target, GLenum format, GLenum type, GLvoid* image);
typedef void (GLLOADER_APIENTRY *glGetConvolutionParameterfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetConvolutionParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetSeparableFilterFUNC)(GLenum target, GLenum format, GLenum type, GLvoid* row, GLvoid* column, GLvoid* span);
typedef void (GLLOADER_APIENTRY *glSeparableFilter2DFUNC)(GLenum target, GLenum internalformat, GLsizei width, GLsizei height, GLenum format, GLenum type, const GLvoid* row, const GLvoid* column);
typedef void (GLLOADER_APIENTRY *glGetHistogramFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values);
typedef void (GLLOADER_APIENTRY *glGetHistogramParameterfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetHistogramParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetMinmaxFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLvoid* values);
typedef void (GLLOADER_APIENTRY *glGetMinmaxParameterfvFUNC)(GLenum target, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetMinmaxParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glHistogramFUNC)(GLenum target, GLsizei width, GLenum internalformat, GLboolean sink);
typedef void (GLLOADER_APIENTRY *glMinmaxFUNC)(GLenum target, GLenum internalformat, GLboolean sink);
typedef void (GLLOADER_APIENTRY *glResetHistogramFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glResetMinmaxFUNC)(GLenum target);

extern GLLOADER_API glBlendColorFUNC glBlendColor;
extern GLLOADER_API glBlendEquationFUNC glBlendEquation;
extern GLLOADER_API glDrawRangeElementsFUNC glDrawRangeElements;
extern GLLOADER_API glTexImage3DFUNC glTexImage3D;
extern GLLOADER_API glTexSubImage3DFUNC glTexSubImage3D;
extern GLLOADER_API glCopyTexSubImage3DFUNC glCopyTexSubImage3D;
extern GLLOADER_API glColorTableFUNC glColorTable;
extern GLLOADER_API glColorTableParameterfvFUNC glColorTableParameterfv;
extern GLLOADER_API glColorTableParameterivFUNC glColorTableParameteriv;
extern GLLOADER_API glCopyColorTableFUNC glCopyColorTable;
extern GLLOADER_API glGetColorTableFUNC glGetColorTable;
extern GLLOADER_API glGetColorTableParameterfvFUNC glGetColorTableParameterfv;
extern GLLOADER_API glGetColorTableParameterivFUNC glGetColorTableParameteriv;
extern GLLOADER_API glColorSubTableFUNC glColorSubTable;
extern GLLOADER_API glCopyColorSubTableFUNC glCopyColorSubTable;
extern GLLOADER_API glConvolutionFilter1DFUNC glConvolutionFilter1D;
extern GLLOADER_API glConvolutionFilter2DFUNC glConvolutionFilter2D;
extern GLLOADER_API glConvolutionParameterfFUNC glConvolutionParameterf;
extern GLLOADER_API glConvolutionParameterfvFUNC glConvolutionParameterfv;
extern GLLOADER_API glConvolutionParameteriFUNC glConvolutionParameteri;
extern GLLOADER_API glConvolutionParameterivFUNC glConvolutionParameteriv;
extern GLLOADER_API glCopyConvolutionFilter1DFUNC glCopyConvolutionFilter1D;
extern GLLOADER_API glCopyConvolutionFilter2DFUNC glCopyConvolutionFilter2D;
extern GLLOADER_API glGetConvolutionFilterFUNC glGetConvolutionFilter;
extern GLLOADER_API glGetConvolutionParameterfvFUNC glGetConvolutionParameterfv;
extern GLLOADER_API glGetConvolutionParameterivFUNC glGetConvolutionParameteriv;
extern GLLOADER_API glGetSeparableFilterFUNC glGetSeparableFilter;
extern GLLOADER_API glSeparableFilter2DFUNC glSeparableFilter2D;
extern GLLOADER_API glGetHistogramFUNC glGetHistogram;
extern GLLOADER_API glGetHistogramParameterfvFUNC glGetHistogramParameterfv;
extern GLLOADER_API glGetHistogramParameterivFUNC glGetHistogramParameteriv;
extern GLLOADER_API glGetMinmaxFUNC glGetMinmax;
extern GLLOADER_API glGetMinmaxParameterfvFUNC glGetMinmaxParameterfv;
extern GLLOADER_API glGetMinmaxParameterivFUNC glGetMinmaxParameteriv;
extern GLLOADER_API glHistogramFUNC glHistogram;
extern GLLOADER_API glMinmaxFUNC glMinmax;
extern GLLOADER_API glResetHistogramFUNC glResetHistogram;
extern GLLOADER_API glResetMinmaxFUNC glResetMinmax;

#endif

#ifdef GL_VERSION_1_3

typedef void (GLLOADER_APIENTRY *glActiveTextureFUNC)(GLenum texture);
typedef void (GLLOADER_APIENTRY *glSampleCoverageFUNC)(GLfloat value, GLboolean invert);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage3DFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage2DFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexImage1DFUNC)(GLenum target, GLint level, GLenum internalformat, GLsizei width, GLint border, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage3DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage2DFUNC)(GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glCompressedTexSubImage1DFUNC)(GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLsizei imageSize, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGetCompressedTexImageFUNC)(GLenum target, GLint level, GLvoid* img);
typedef void (GLLOADER_APIENTRY *glClientActiveTextureFUNC)(GLenum texture);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1dFUNC)(GLenum target, GLdouble s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1dvFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1fFUNC)(GLenum target, GLfloat s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1fvFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1iFUNC)(GLenum target, GLint s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1ivFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1sFUNC)(GLenum target, GLshort s);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord1svFUNC)(GLenum target, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2dFUNC)(GLenum target, GLdouble s, GLdouble t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2dvFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2fFUNC)(GLenum target, GLfloat s, GLfloat t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2fvFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2iFUNC)(GLenum target, GLint s, GLint t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2ivFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2sFUNC)(GLenum target, GLshort s, GLshort t);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord2svFUNC)(GLenum target, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3dFUNC)(GLenum target, GLdouble s, GLdouble t, GLdouble r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3dvFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3fFUNC)(GLenum target, GLfloat s, GLfloat t, GLfloat r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3fvFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3iFUNC)(GLenum target, GLint s, GLint t, GLint r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3ivFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3sFUNC)(GLenum target, GLshort s, GLshort t, GLshort r);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord3svFUNC)(GLenum target, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4dFUNC)(GLenum target, GLdouble s, GLdouble t, GLdouble r, GLdouble q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4dvFUNC)(GLenum target, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4fFUNC)(GLenum target, GLfloat s, GLfloat t, GLfloat r, GLfloat q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4fvFUNC)(GLenum target, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4iFUNC)(GLenum target, GLint s, GLint t, GLint r, GLint q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4ivFUNC)(GLenum target, const GLint* v);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4sFUNC)(GLenum target, GLshort s, GLshort t, GLshort r, GLshort q);
typedef void (GLLOADER_APIENTRY *glMultiTexCoord4svFUNC)(GLenum target, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glLoadTransposeMatrixfFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glLoadTransposeMatrixdFUNC)(const GLdouble* m);
typedef void (GLLOADER_APIENTRY *glMultTransposeMatrixfFUNC)(const GLfloat* m);
typedef void (GLLOADER_APIENTRY *glMultTransposeMatrixdFUNC)(const GLdouble* m);

extern GLLOADER_API glActiveTextureFUNC glActiveTexture;
extern GLLOADER_API glSampleCoverageFUNC glSampleCoverage;
extern GLLOADER_API glCompressedTexImage3DFUNC glCompressedTexImage3D;
extern GLLOADER_API glCompressedTexImage2DFUNC glCompressedTexImage2D;
extern GLLOADER_API glCompressedTexImage1DFUNC glCompressedTexImage1D;
extern GLLOADER_API glCompressedTexSubImage3DFUNC glCompressedTexSubImage3D;
extern GLLOADER_API glCompressedTexSubImage2DFUNC glCompressedTexSubImage2D;
extern GLLOADER_API glCompressedTexSubImage1DFUNC glCompressedTexSubImage1D;
extern GLLOADER_API glGetCompressedTexImageFUNC glGetCompressedTexImage;
extern GLLOADER_API glClientActiveTextureFUNC glClientActiveTexture;
extern GLLOADER_API glMultiTexCoord1dFUNC glMultiTexCoord1d;
extern GLLOADER_API glMultiTexCoord1dvFUNC glMultiTexCoord1dv;
extern GLLOADER_API glMultiTexCoord1fFUNC glMultiTexCoord1f;
extern GLLOADER_API glMultiTexCoord1fvFUNC glMultiTexCoord1fv;
extern GLLOADER_API glMultiTexCoord1iFUNC glMultiTexCoord1i;
extern GLLOADER_API glMultiTexCoord1ivFUNC glMultiTexCoord1iv;
extern GLLOADER_API glMultiTexCoord1sFUNC glMultiTexCoord1s;
extern GLLOADER_API glMultiTexCoord1svFUNC glMultiTexCoord1sv;
extern GLLOADER_API glMultiTexCoord2dFUNC glMultiTexCoord2d;
extern GLLOADER_API glMultiTexCoord2dvFUNC glMultiTexCoord2dv;
extern GLLOADER_API glMultiTexCoord2fFUNC glMultiTexCoord2f;
extern GLLOADER_API glMultiTexCoord2fvFUNC glMultiTexCoord2fv;
extern GLLOADER_API glMultiTexCoord2iFUNC glMultiTexCoord2i;
extern GLLOADER_API glMultiTexCoord2ivFUNC glMultiTexCoord2iv;
extern GLLOADER_API glMultiTexCoord2sFUNC glMultiTexCoord2s;
extern GLLOADER_API glMultiTexCoord2svFUNC glMultiTexCoord2sv;
extern GLLOADER_API glMultiTexCoord3dFUNC glMultiTexCoord3d;
extern GLLOADER_API glMultiTexCoord3dvFUNC glMultiTexCoord3dv;
extern GLLOADER_API glMultiTexCoord3fFUNC glMultiTexCoord3f;
extern GLLOADER_API glMultiTexCoord3fvFUNC glMultiTexCoord3fv;
extern GLLOADER_API glMultiTexCoord3iFUNC glMultiTexCoord3i;
extern GLLOADER_API glMultiTexCoord3ivFUNC glMultiTexCoord3iv;
extern GLLOADER_API glMultiTexCoord3sFUNC glMultiTexCoord3s;
extern GLLOADER_API glMultiTexCoord3svFUNC glMultiTexCoord3sv;
extern GLLOADER_API glMultiTexCoord4dFUNC glMultiTexCoord4d;
extern GLLOADER_API glMultiTexCoord4dvFUNC glMultiTexCoord4dv;
extern GLLOADER_API glMultiTexCoord4fFUNC glMultiTexCoord4f;
extern GLLOADER_API glMultiTexCoord4fvFUNC glMultiTexCoord4fv;
extern GLLOADER_API glMultiTexCoord4iFUNC glMultiTexCoord4i;
extern GLLOADER_API glMultiTexCoord4ivFUNC glMultiTexCoord4iv;
extern GLLOADER_API glMultiTexCoord4sFUNC glMultiTexCoord4s;
extern GLLOADER_API glMultiTexCoord4svFUNC glMultiTexCoord4sv;
extern GLLOADER_API glLoadTransposeMatrixfFUNC glLoadTransposeMatrixf;
extern GLLOADER_API glLoadTransposeMatrixdFUNC glLoadTransposeMatrixd;
extern GLLOADER_API glMultTransposeMatrixfFUNC glMultTransposeMatrixf;
extern GLLOADER_API glMultTransposeMatrixdFUNC glMultTransposeMatrixd;

#endif

#ifdef GL_VERSION_1_4

typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateFUNC)(GLenum sfactorRGB, GLenum dfactorRGB, GLenum sfactorAlpha, GLenum dfactorAlpha);
typedef void (GLLOADER_APIENTRY *glMultiDrawArraysFUNC)(GLenum mode, GLint* first, GLsizei* count, GLsizei drawcount);
typedef void (GLLOADER_APIENTRY *glMultiDrawElementsFUNC)(GLenum mode, GLsizei* count, GLenum type, const GLvoid** indices, GLsizei drawcount);
typedef void (GLLOADER_APIENTRY *glPointParameterfFUNC)(GLenum pname, GLfloat param);
typedef void (GLLOADER_APIENTRY *glPointParameterfvFUNC)(GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glPointParameteriFUNC)(GLenum pname, GLint param);
typedef void (GLLOADER_APIENTRY *glPointParameterivFUNC)(GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glFogCoordfFUNC)(GLfloat coord);
typedef void (GLLOADER_APIENTRY *glFogCoordfvFUNC)(const GLfloat* coord);
typedef void (GLLOADER_APIENTRY *glFogCoorddFUNC)(GLdouble coord);
typedef void (GLLOADER_APIENTRY *glFogCoorddvFUNC)(const GLdouble* coord);
typedef void (GLLOADER_APIENTRY *glFogCoordPointerFUNC)(GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3bFUNC)(GLbyte red, GLbyte green, GLbyte blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3bvFUNC)(const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3dFUNC)(GLdouble red, GLdouble green, GLdouble blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3fFUNC)(GLfloat red, GLfloat green, GLfloat blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3iFUNC)(GLint red, GLint green, GLint blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3sFUNC)(GLshort red, GLshort green, GLshort blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3ubFUNC)(GLubyte red, GLubyte green, GLubyte blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3ubvFUNC)(const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3uiFUNC)(GLuint red, GLuint green, GLuint blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3uivFUNC)(const GLuint* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3usFUNC)(GLushort red, GLushort green, GLushort blue);
typedef void (GLLOADER_APIENTRY *glSecondaryColor3usvFUNC)(const GLushort* v);
typedef void (GLLOADER_APIENTRY *glSecondaryColorPointerFUNC)(GLint size, GLenum type, GLsizei stride, GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glWindowPos2dFUNC)(GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glWindowPos2dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2fFUNC)(GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glWindowPos2fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2iFUNC)(GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glWindowPos2ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glWindowPos2sFUNC)(GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glWindowPos2svFUNC)(const GLshort* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3dFUNC)(GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glWindowPos3dvFUNC)(const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3fFUNC)(GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glWindowPos3fvFUNC)(const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3iFUNC)(GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glWindowPos3ivFUNC)(const GLint* v);
typedef void (GLLOADER_APIENTRY *glWindowPos3sFUNC)(GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glWindowPos3svFUNC)(const GLshort* v);

extern GLLOADER_API glBlendFuncSeparateFUNC glBlendFuncSeparate;
extern GLLOADER_API glMultiDrawArraysFUNC glMultiDrawArrays;
extern GLLOADER_API glMultiDrawElementsFUNC glMultiDrawElements;
extern GLLOADER_API glPointParameterfFUNC glPointParameterf;
extern GLLOADER_API glPointParameterfvFUNC glPointParameterfv;
extern GLLOADER_API glPointParameteriFUNC glPointParameteri;
extern GLLOADER_API glPointParameterivFUNC glPointParameteriv;
extern GLLOADER_API glFogCoordfFUNC glFogCoordf;
extern GLLOADER_API glFogCoordfvFUNC glFogCoordfv;
extern GLLOADER_API glFogCoorddFUNC glFogCoordd;
extern GLLOADER_API glFogCoorddvFUNC glFogCoorddv;
extern GLLOADER_API glFogCoordPointerFUNC glFogCoordPointer;
extern GLLOADER_API glSecondaryColor3bFUNC glSecondaryColor3b;
extern GLLOADER_API glSecondaryColor3bvFUNC glSecondaryColor3bv;
extern GLLOADER_API glSecondaryColor3dFUNC glSecondaryColor3d;
extern GLLOADER_API glSecondaryColor3dvFUNC glSecondaryColor3dv;
extern GLLOADER_API glSecondaryColor3fFUNC glSecondaryColor3f;
extern GLLOADER_API glSecondaryColor3fvFUNC glSecondaryColor3fv;
extern GLLOADER_API glSecondaryColor3iFUNC glSecondaryColor3i;
extern GLLOADER_API glSecondaryColor3ivFUNC glSecondaryColor3iv;
extern GLLOADER_API glSecondaryColor3sFUNC glSecondaryColor3s;
extern GLLOADER_API glSecondaryColor3svFUNC glSecondaryColor3sv;
extern GLLOADER_API glSecondaryColor3ubFUNC glSecondaryColor3ub;
extern GLLOADER_API glSecondaryColor3ubvFUNC glSecondaryColor3ubv;
extern GLLOADER_API glSecondaryColor3uiFUNC glSecondaryColor3ui;
extern GLLOADER_API glSecondaryColor3uivFUNC glSecondaryColor3uiv;
extern GLLOADER_API glSecondaryColor3usFUNC glSecondaryColor3us;
extern GLLOADER_API glSecondaryColor3usvFUNC glSecondaryColor3usv;
extern GLLOADER_API glSecondaryColorPointerFUNC glSecondaryColorPointer;
extern GLLOADER_API glWindowPos2dFUNC glWindowPos2d;
extern GLLOADER_API glWindowPos2dvFUNC glWindowPos2dv;
extern GLLOADER_API glWindowPos2fFUNC glWindowPos2f;
extern GLLOADER_API glWindowPos2fvFUNC glWindowPos2fv;
extern GLLOADER_API glWindowPos2iFUNC glWindowPos2i;
extern GLLOADER_API glWindowPos2ivFUNC glWindowPos2iv;
extern GLLOADER_API glWindowPos2sFUNC glWindowPos2s;
extern GLLOADER_API glWindowPos2svFUNC glWindowPos2sv;
extern GLLOADER_API glWindowPos3dFUNC glWindowPos3d;
extern GLLOADER_API glWindowPos3dvFUNC glWindowPos3dv;
extern GLLOADER_API glWindowPos3fFUNC glWindowPos3f;
extern GLLOADER_API glWindowPos3fvFUNC glWindowPos3fv;
extern GLLOADER_API glWindowPos3iFUNC glWindowPos3i;
extern GLLOADER_API glWindowPos3ivFUNC glWindowPos3iv;
extern GLLOADER_API glWindowPos3sFUNC glWindowPos3s;
extern GLLOADER_API glWindowPos3svFUNC glWindowPos3sv;

#endif

#ifdef GL_VERSION_1_5

typedef void (GLLOADER_APIENTRY *glGenQueriesFUNC)(GLsizei n, GLuint* ids);
typedef void (GLLOADER_APIENTRY *glDeleteQueriesFUNC)(GLsizei n, const GLuint* ids);
typedef GLboolean (GLLOADER_APIENTRY *glIsQueryFUNC)(GLuint id);
typedef void (GLLOADER_APIENTRY *glBeginQueryFUNC)(GLenum target, GLuint id);
typedef void (GLLOADER_APIENTRY *glEndQueryFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glGetQueryivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectivFUNC)(GLuint id, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetQueryObjectuivFUNC)(GLuint id, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glBindBufferFUNC)(GLenum target, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glDeleteBuffersFUNC)(GLsizei n, const GLuint* buffers);
typedef void (GLLOADER_APIENTRY *glGenBuffersFUNC)(GLsizei n, GLuint* buffers);
typedef GLboolean (GLLOADER_APIENTRY *glIsBufferFUNC)(GLuint buffer);
typedef void (GLLOADER_APIENTRY *glBufferDataFUNC)(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage);
typedef void (GLLOADER_APIENTRY *glBufferSubDataFUNC)(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data);
typedef void (GLLOADER_APIENTRY *glGetBufferSubDataFUNC)(GLenum target, GLintptr offset, GLsizeiptr size, GLvoid* data);
typedef GLvoid* (GLLOADER_APIENTRY *glMapBufferFUNC)(GLenum target, GLenum access);
typedef GLboolean (GLLOADER_APIENTRY *glUnmapBufferFUNC)(GLenum target);
typedef void (GLLOADER_APIENTRY *glGetBufferParameterivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetBufferPointervFUNC)(GLenum target, GLenum pname, GLvoid** params);

extern GLLOADER_API glGenQueriesFUNC glGenQueries;
extern GLLOADER_API glDeleteQueriesFUNC glDeleteQueries;
extern GLLOADER_API glIsQueryFUNC glIsQuery;
extern GLLOADER_API glBeginQueryFUNC glBeginQuery;
extern GLLOADER_API glEndQueryFUNC glEndQuery;
extern GLLOADER_API glGetQueryivFUNC glGetQueryiv;
extern GLLOADER_API glGetQueryObjectivFUNC glGetQueryObjectiv;
extern GLLOADER_API glGetQueryObjectuivFUNC glGetQueryObjectuiv;
extern GLLOADER_API glBindBufferFUNC glBindBuffer;
extern GLLOADER_API glDeleteBuffersFUNC glDeleteBuffers;
extern GLLOADER_API glGenBuffersFUNC glGenBuffers;
extern GLLOADER_API glIsBufferFUNC glIsBuffer;
extern GLLOADER_API glBufferDataFUNC glBufferData;
extern GLLOADER_API glBufferSubDataFUNC glBufferSubData;
extern GLLOADER_API glGetBufferSubDataFUNC glGetBufferSubData;
extern GLLOADER_API glMapBufferFUNC glMapBuffer;
extern GLLOADER_API glUnmapBufferFUNC glUnmapBuffer;
extern GLLOADER_API glGetBufferParameterivFUNC glGetBufferParameteriv;
extern GLLOADER_API glGetBufferPointervFUNC glGetBufferPointerv;

#endif

#ifdef GL_VERSION_2_0

typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateFUNC)(GLenum modeRGB, GLenum modeAlpha);
typedef void (GLLOADER_APIENTRY *glDrawBuffersFUNC)(GLsizei n, const GLenum* bufs);
typedef void (GLLOADER_APIENTRY *glStencilOpSeparateFUNC)(GLenum face, GLenum sfail, GLenum dpfail, GLenum dppass);
typedef void (GLLOADER_APIENTRY *glStencilFuncSeparateFUNC)(GLenum face, GLenum func, GLint ref, GLuint mask);
typedef void (GLLOADER_APIENTRY *glStencilMaskSeparateFUNC)(GLenum face, GLuint mask);
typedef void (GLLOADER_APIENTRY *glAttachShaderFUNC)(GLuint program, GLuint shader);
typedef void (GLLOADER_APIENTRY *glBindAttribLocationFUNC)(GLuint program, GLuint index, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glCompileShaderFUNC)(GLuint shader);
typedef GLuint (GLLOADER_APIENTRY *glCreateProgramFUNC)();
typedef GLuint (GLLOADER_APIENTRY *glCreateShaderFUNC)(GLenum type);
typedef void (GLLOADER_APIENTRY *glDeleteProgramFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glDeleteShaderFUNC)(GLuint shader);
typedef void (GLLOADER_APIENTRY *glDetachShaderFUNC)(GLuint program, GLuint shader);
typedef void (GLLOADER_APIENTRY *glDisableVertexAttribArrayFUNC)(GLuint index);
typedef void (GLLOADER_APIENTRY *glEnableVertexAttribArrayFUNC)(GLuint index);
typedef void (GLLOADER_APIENTRY *glGetActiveAttribFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetActiveUniformFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLint* size, GLenum* type, GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetAttachedShadersFUNC)(GLuint program, GLsizei maxCount, GLsizei* count, GLuint* obj);
typedef GLint (GLLOADER_APIENTRY *glGetAttribLocationFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetProgramivFUNC)(GLuint program, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetProgramInfoLogFUNC)(GLuint program, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (GLLOADER_APIENTRY *glGetShaderivFUNC)(GLuint shader, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetShaderInfoLogFUNC)(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* infoLog);
typedef void (GLLOADER_APIENTRY *glGetShaderSourceFUNC)(GLuint shader, GLsizei bufSize, GLsizei* length, GLchar* source);
typedef GLint (GLLOADER_APIENTRY *glGetUniformLocationFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glGetUniformfvFUNC)(GLuint program, GLint location, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetUniformivFUNC)(GLuint program, GLint location, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribdvFUNC)(GLuint index, GLenum pname, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribfvFUNC)(GLuint index, GLenum pname, GLfloat* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribivFUNC)(GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribPointervFUNC)(GLuint index, GLenum pname, GLvoid** pointer);
typedef GLboolean (GLLOADER_APIENTRY *glIsProgramFUNC)(GLuint program);
typedef GLboolean (GLLOADER_APIENTRY *glIsShaderFUNC)(GLuint shader);
typedef void (GLLOADER_APIENTRY *glLinkProgramFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glShaderSourceFUNC)(GLuint shader, GLsizei count, const GLchar** string, const GLint* length);
typedef void (GLLOADER_APIENTRY *glUseProgramFUNC)(GLuint program);
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
typedef void (GLLOADER_APIENTRY *glValidateProgramFUNC)(GLuint program);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1dFUNC)(GLuint index, GLdouble x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fFUNC)(GLuint index, GLfloat x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1sFUNC)(GLuint index, GLshort x);
typedef void (GLLOADER_APIENTRY *glVertexAttrib1svFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2dFUNC)(GLuint index, GLdouble x, GLdouble y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fFUNC)(GLuint index, GLfloat x, GLfloat y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2sFUNC)(GLuint index, GLshort x, GLshort y);
typedef void (GLLOADER_APIENTRY *glVertexAttrib2svFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3dFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3sFUNC)(GLuint index, GLshort x, GLshort y, GLshort z);
typedef void (GLLOADER_APIENTRY *glVertexAttrib3svFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NbvFUNC)(GLuint index, const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NivFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NsvFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NubFUNC)(GLuint index, GLubyte x, GLubyte y, GLubyte z, GLubyte w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NubvFUNC)(GLuint index, const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NuivFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4NusvFUNC)(GLuint index, const GLushort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4bvFUNC)(GLuint index, const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4dFUNC)(GLuint index, GLdouble x, GLdouble y, GLdouble z, GLdouble w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4dvFUNC)(GLuint index, const GLdouble* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fFUNC)(GLuint index, GLfloat x, GLfloat y, GLfloat z, GLfloat w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4fvFUNC)(GLuint index, const GLfloat* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4ivFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4sFUNC)(GLuint index, GLshort x, GLshort y, GLshort z, GLshort w);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4svFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4ubvFUNC)(GLuint index, const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4uivFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttrib4usvFUNC)(GLuint index, const GLushort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribPointerFUNC)(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* pointer);

extern GLLOADER_API glBlendEquationSeparateFUNC glBlendEquationSeparate;
extern GLLOADER_API glDrawBuffersFUNC glDrawBuffers;
extern GLLOADER_API glStencilOpSeparateFUNC glStencilOpSeparate;
extern GLLOADER_API glStencilFuncSeparateFUNC glStencilFuncSeparate;
extern GLLOADER_API glStencilMaskSeparateFUNC glStencilMaskSeparate;
extern GLLOADER_API glAttachShaderFUNC glAttachShader;
extern GLLOADER_API glBindAttribLocationFUNC glBindAttribLocation;
extern GLLOADER_API glCompileShaderFUNC glCompileShader;
extern GLLOADER_API glCreateProgramFUNC glCreateProgram;
extern GLLOADER_API glCreateShaderFUNC glCreateShader;
extern GLLOADER_API glDeleteProgramFUNC glDeleteProgram;
extern GLLOADER_API glDeleteShaderFUNC glDeleteShader;
extern GLLOADER_API glDetachShaderFUNC glDetachShader;
extern GLLOADER_API glDisableVertexAttribArrayFUNC glDisableVertexAttribArray;
extern GLLOADER_API glEnableVertexAttribArrayFUNC glEnableVertexAttribArray;
extern GLLOADER_API glGetActiveAttribFUNC glGetActiveAttrib;
extern GLLOADER_API glGetActiveUniformFUNC glGetActiveUniform;
extern GLLOADER_API glGetAttachedShadersFUNC glGetAttachedShaders;
extern GLLOADER_API glGetAttribLocationFUNC glGetAttribLocation;
extern GLLOADER_API glGetProgramivFUNC glGetProgramiv;
extern GLLOADER_API glGetProgramInfoLogFUNC glGetProgramInfoLog;
extern GLLOADER_API glGetShaderivFUNC glGetShaderiv;
extern GLLOADER_API glGetShaderInfoLogFUNC glGetShaderInfoLog;
extern GLLOADER_API glGetShaderSourceFUNC glGetShaderSource;
extern GLLOADER_API glGetUniformLocationFUNC glGetUniformLocation;
extern GLLOADER_API glGetUniformfvFUNC glGetUniformfv;
extern GLLOADER_API glGetUniformivFUNC glGetUniformiv;
extern GLLOADER_API glGetVertexAttribdvFUNC glGetVertexAttribdv;
extern GLLOADER_API glGetVertexAttribfvFUNC glGetVertexAttribfv;
extern GLLOADER_API glGetVertexAttribivFUNC glGetVertexAttribiv;
extern GLLOADER_API glGetVertexAttribPointervFUNC glGetVertexAttribPointerv;
extern GLLOADER_API glIsProgramFUNC glIsProgram;
extern GLLOADER_API glIsShaderFUNC glIsShader;
extern GLLOADER_API glLinkProgramFUNC glLinkProgram;
extern GLLOADER_API glShaderSourceFUNC glShaderSource;
extern GLLOADER_API glUseProgramFUNC glUseProgram;
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
extern GLLOADER_API glValidateProgramFUNC glValidateProgram;
extern GLLOADER_API glVertexAttrib1dFUNC glVertexAttrib1d;
extern GLLOADER_API glVertexAttrib1dvFUNC glVertexAttrib1dv;
extern GLLOADER_API glVertexAttrib1fFUNC glVertexAttrib1f;
extern GLLOADER_API glVertexAttrib1fvFUNC glVertexAttrib1fv;
extern GLLOADER_API glVertexAttrib1sFUNC glVertexAttrib1s;
extern GLLOADER_API glVertexAttrib1svFUNC glVertexAttrib1sv;
extern GLLOADER_API glVertexAttrib2dFUNC glVertexAttrib2d;
extern GLLOADER_API glVertexAttrib2dvFUNC glVertexAttrib2dv;
extern GLLOADER_API glVertexAttrib2fFUNC glVertexAttrib2f;
extern GLLOADER_API glVertexAttrib2fvFUNC glVertexAttrib2fv;
extern GLLOADER_API glVertexAttrib2sFUNC glVertexAttrib2s;
extern GLLOADER_API glVertexAttrib2svFUNC glVertexAttrib2sv;
extern GLLOADER_API glVertexAttrib3dFUNC glVertexAttrib3d;
extern GLLOADER_API glVertexAttrib3dvFUNC glVertexAttrib3dv;
extern GLLOADER_API glVertexAttrib3fFUNC glVertexAttrib3f;
extern GLLOADER_API glVertexAttrib3fvFUNC glVertexAttrib3fv;
extern GLLOADER_API glVertexAttrib3sFUNC glVertexAttrib3s;
extern GLLOADER_API glVertexAttrib3svFUNC glVertexAttrib3sv;
extern GLLOADER_API glVertexAttrib4NbvFUNC glVertexAttrib4Nbv;
extern GLLOADER_API glVertexAttrib4NivFUNC glVertexAttrib4Niv;
extern GLLOADER_API glVertexAttrib4NsvFUNC glVertexAttrib4Nsv;
extern GLLOADER_API glVertexAttrib4NubFUNC glVertexAttrib4Nub;
extern GLLOADER_API glVertexAttrib4NubvFUNC glVertexAttrib4Nubv;
extern GLLOADER_API glVertexAttrib4NuivFUNC glVertexAttrib4Nuiv;
extern GLLOADER_API glVertexAttrib4NusvFUNC glVertexAttrib4Nusv;
extern GLLOADER_API glVertexAttrib4bvFUNC glVertexAttrib4bv;
extern GLLOADER_API glVertexAttrib4dFUNC glVertexAttrib4d;
extern GLLOADER_API glVertexAttrib4dvFUNC glVertexAttrib4dv;
extern GLLOADER_API glVertexAttrib4fFUNC glVertexAttrib4f;
extern GLLOADER_API glVertexAttrib4fvFUNC glVertexAttrib4fv;
extern GLLOADER_API glVertexAttrib4ivFUNC glVertexAttrib4iv;
extern GLLOADER_API glVertexAttrib4sFUNC glVertexAttrib4s;
extern GLLOADER_API glVertexAttrib4svFUNC glVertexAttrib4sv;
extern GLLOADER_API glVertexAttrib4ubvFUNC glVertexAttrib4ubv;
extern GLLOADER_API glVertexAttrib4uivFUNC glVertexAttrib4uiv;
extern GLLOADER_API glVertexAttrib4usvFUNC glVertexAttrib4usv;
extern GLLOADER_API glVertexAttribPointerFUNC glVertexAttribPointer;

#endif

#ifdef GL_VERSION_2_1

typedef void (GLLOADER_APIENTRY *glUniformMatrix2x3fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x2fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix2x4fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x2fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix3x4fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glUniformMatrix4x3fvFUNC)(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value);

extern GLLOADER_API glUniformMatrix2x3fvFUNC glUniformMatrix2x3fv;
extern GLLOADER_API glUniformMatrix3x2fvFUNC glUniformMatrix3x2fv;
extern GLLOADER_API glUniformMatrix2x4fvFUNC glUniformMatrix2x4fv;
extern GLLOADER_API glUniformMatrix4x2fvFUNC glUniformMatrix4x2fv;
extern GLLOADER_API glUniformMatrix3x4fvFUNC glUniformMatrix3x4fv;
extern GLLOADER_API glUniformMatrix4x3fvFUNC glUniformMatrix4x3fv;

#endif

#ifdef GL_VERSION_3_0

typedef void (GLLOADER_APIENTRY *glColorMaskiFUNC)(GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef void (GLLOADER_APIENTRY *glGetBooleani_vFUNC)(GLenum target, GLuint index, GLboolean* data);
typedef void (GLLOADER_APIENTRY *glGetIntegeri_vFUNC)(GLenum target, GLuint index, GLint* data);
typedef void (GLLOADER_APIENTRY *glEnableiFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glDisableiFUNC)(GLenum target, GLuint index);
typedef GLboolean (GLLOADER_APIENTRY *glIsEnablediFUNC)(GLenum target, GLuint index);
typedef void (GLLOADER_APIENTRY *glBeginTransformFeedbackFUNC)(GLenum primitiveMode);
typedef void (GLLOADER_APIENTRY *glEndTransformFeedbackFUNC)();
typedef void (GLLOADER_APIENTRY *glBindBufferRangeFUNC)(GLenum target, GLuint index, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glBindBufferBaseFUNC)(GLenum target, GLuint index, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glTransformFeedbackVaryingsFUNC)(GLuint program, GLsizei count, const GLchar** varyings, GLenum bufferMode);
typedef void (GLLOADER_APIENTRY *glGetTransformFeedbackVaryingFUNC)(GLuint program, GLuint index, GLsizei bufSize, GLsizei* length, GLsizei* size, GLenum* type, GLchar* name);
typedef void (GLLOADER_APIENTRY *glClampColorFUNC)(GLenum target, GLenum clamp);
typedef void (GLLOADER_APIENTRY *glBeginConditionalRenderFUNC)(GLuint id, GLenum mode);
typedef void (GLLOADER_APIENTRY *glEndConditionalRenderFUNC)();
typedef void (GLLOADER_APIENTRY *glVertexAttribIPointerFUNC)(GLuint index, GLint size, GLenum type, GLsizei stride, const GLvoid* pointer);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribIivFUNC)(GLuint index, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetVertexAttribIuivFUNC)(GLuint index, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glVertexAttribI1iFUNC)(GLuint index, GLint x);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2iFUNC)(GLuint index, GLint x, GLint y);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3iFUNC)(GLuint index, GLint x, GLint y, GLint z);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4iFUNC)(GLuint index, GLint x, GLint y, GLint z, GLint w);
typedef void (GLLOADER_APIENTRY *glVertexAttribI1uiFUNC)(GLuint index, GLuint x);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2uiFUNC)(GLuint index, GLuint x, GLuint y);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3uiFUNC)(GLuint index, GLuint x, GLuint y, GLuint z);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4uiFUNC)(GLuint index, GLuint x, GLuint y, GLuint z, GLuint w);
typedef void (GLLOADER_APIENTRY *glVertexAttribI1ivFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2ivFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3ivFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4ivFUNC)(GLuint index, const GLint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI1uivFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI2uivFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI3uivFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4uivFUNC)(GLuint index, const GLuint* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4bvFUNC)(GLuint index, const GLbyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4svFUNC)(GLuint index, const GLshort* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4ubvFUNC)(GLuint index, const GLubyte* v);
typedef void (GLLOADER_APIENTRY *glVertexAttribI4usvFUNC)(GLuint index, const GLushort* v);
typedef void (GLLOADER_APIENTRY *glGetUniformuivFUNC)(GLuint program, GLint location, GLuint* params);
typedef void (GLLOADER_APIENTRY *glBindFragDataLocationFUNC)(GLuint program, GLuint color, const GLchar* name);
typedef GLint (GLLOADER_APIENTRY *glGetFragDataLocationFUNC)(GLuint program, const GLchar* name);
typedef void (GLLOADER_APIENTRY *glUniform1uiFUNC)(GLint location, GLuint v0);
typedef void (GLLOADER_APIENTRY *glUniform2uiFUNC)(GLint location, GLuint v0, GLuint v1);
typedef void (GLLOADER_APIENTRY *glUniform3uiFUNC)(GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GLLOADER_APIENTRY *glUniform4uiFUNC)(GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GLLOADER_APIENTRY *glUniform1uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform2uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform3uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glUniform4uivFUNC)(GLint location, GLsizei count, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glTexParameterIivFUNC)(GLenum target, GLenum pname, const GLint* params);
typedef void (GLLOADER_APIENTRY *glTexParameterIuivFUNC)(GLenum target, GLenum pname, const GLuint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIivFUNC)(GLenum target, GLenum pname, GLint* params);
typedef void (GLLOADER_APIENTRY *glGetTexParameterIuivFUNC)(GLenum target, GLenum pname, GLuint* params);
typedef void (GLLOADER_APIENTRY *glClearBufferivFUNC)(GLenum buffer, GLint drawbuffer, const GLint* value);
typedef void (GLLOADER_APIENTRY *glClearBufferuivFUNC)(GLenum buffer, GLint drawbuffer, const GLuint* value);
typedef void (GLLOADER_APIENTRY *glClearBufferfvFUNC)(GLenum buffer, GLint drawbuffer, const GLfloat* value);
typedef void (GLLOADER_APIENTRY *glClearBufferfiFUNC)(GLenum buffer, GLint drawbuffer, GLfloat depth, GLint stencil);
typedef const GLubyte* (GLLOADER_APIENTRY *glGetStringiFUNC)(GLenum name, GLuint index);

extern GLLOADER_API glColorMaskiFUNC glColorMaski;
extern GLLOADER_API glGetBooleani_vFUNC glGetBooleani_v;
extern GLLOADER_API glGetIntegeri_vFUNC glGetIntegeri_v;
extern GLLOADER_API glEnableiFUNC glEnablei;
extern GLLOADER_API glDisableiFUNC glDisablei;
extern GLLOADER_API glIsEnablediFUNC glIsEnabledi;
extern GLLOADER_API glBeginTransformFeedbackFUNC glBeginTransformFeedback;
extern GLLOADER_API glEndTransformFeedbackFUNC glEndTransformFeedback;
extern GLLOADER_API glBindBufferRangeFUNC glBindBufferRange;
extern GLLOADER_API glBindBufferBaseFUNC glBindBufferBase;
extern GLLOADER_API glTransformFeedbackVaryingsFUNC glTransformFeedbackVaryings;
extern GLLOADER_API glGetTransformFeedbackVaryingFUNC glGetTransformFeedbackVarying;
extern GLLOADER_API glClampColorFUNC glClampColor;
extern GLLOADER_API glBeginConditionalRenderFUNC glBeginConditionalRender;
extern GLLOADER_API glEndConditionalRenderFUNC glEndConditionalRender;
extern GLLOADER_API glVertexAttribIPointerFUNC glVertexAttribIPointer;
extern GLLOADER_API glGetVertexAttribIivFUNC glGetVertexAttribIiv;
extern GLLOADER_API glGetVertexAttribIuivFUNC glGetVertexAttribIuiv;
extern GLLOADER_API glVertexAttribI1iFUNC glVertexAttribI1i;
extern GLLOADER_API glVertexAttribI2iFUNC glVertexAttribI2i;
extern GLLOADER_API glVertexAttribI3iFUNC glVertexAttribI3i;
extern GLLOADER_API glVertexAttribI4iFUNC glVertexAttribI4i;
extern GLLOADER_API glVertexAttribI1uiFUNC glVertexAttribI1ui;
extern GLLOADER_API glVertexAttribI2uiFUNC glVertexAttribI2ui;
extern GLLOADER_API glVertexAttribI3uiFUNC glVertexAttribI3ui;
extern GLLOADER_API glVertexAttribI4uiFUNC glVertexAttribI4ui;
extern GLLOADER_API glVertexAttribI1ivFUNC glVertexAttribI1iv;
extern GLLOADER_API glVertexAttribI2ivFUNC glVertexAttribI2iv;
extern GLLOADER_API glVertexAttribI3ivFUNC glVertexAttribI3iv;
extern GLLOADER_API glVertexAttribI4ivFUNC glVertexAttribI4iv;
extern GLLOADER_API glVertexAttribI1uivFUNC glVertexAttribI1uiv;
extern GLLOADER_API glVertexAttribI2uivFUNC glVertexAttribI2uiv;
extern GLLOADER_API glVertexAttribI3uivFUNC glVertexAttribI3uiv;
extern GLLOADER_API glVertexAttribI4uivFUNC glVertexAttribI4uiv;
extern GLLOADER_API glVertexAttribI4bvFUNC glVertexAttribI4bv;
extern GLLOADER_API glVertexAttribI4svFUNC glVertexAttribI4sv;
extern GLLOADER_API glVertexAttribI4ubvFUNC glVertexAttribI4ubv;
extern GLLOADER_API glVertexAttribI4usvFUNC glVertexAttribI4usv;
extern GLLOADER_API glGetUniformuivFUNC glGetUniformuiv;
extern GLLOADER_API glBindFragDataLocationFUNC glBindFragDataLocation;
extern GLLOADER_API glGetFragDataLocationFUNC glGetFragDataLocation;
extern GLLOADER_API glUniform1uiFUNC glUniform1ui;
extern GLLOADER_API glUniform2uiFUNC glUniform2ui;
extern GLLOADER_API glUniform3uiFUNC glUniform3ui;
extern GLLOADER_API glUniform4uiFUNC glUniform4ui;
extern GLLOADER_API glUniform1uivFUNC glUniform1uiv;
extern GLLOADER_API glUniform2uivFUNC glUniform2uiv;
extern GLLOADER_API glUniform3uivFUNC glUniform3uiv;
extern GLLOADER_API glUniform4uivFUNC glUniform4uiv;
extern GLLOADER_API glTexParameterIivFUNC glTexParameterIiv;
extern GLLOADER_API glTexParameterIuivFUNC glTexParameterIuiv;
extern GLLOADER_API glGetTexParameterIivFUNC glGetTexParameterIiv;
extern GLLOADER_API glGetTexParameterIuivFUNC glGetTexParameterIuiv;
extern GLLOADER_API glClearBufferivFUNC glClearBufferiv;
extern GLLOADER_API glClearBufferuivFUNC glClearBufferuiv;
extern GLLOADER_API glClearBufferfvFUNC glClearBufferfv;
extern GLLOADER_API glClearBufferfiFUNC glClearBufferfi;
extern GLLOADER_API glGetStringiFUNC glGetStringi;

#endif

#ifdef GL_VERSION_3_1

typedef void (GLLOADER_APIENTRY *glDrawArraysInstancedFUNC)(GLenum mode, GLint first, GLsizei count, GLsizei instancecount);
typedef void (GLLOADER_APIENTRY *glDrawElementsInstancedFUNC)(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices, GLsizei instancecount);
typedef void (GLLOADER_APIENTRY *glTexBufferFUNC)(GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GLLOADER_APIENTRY *glPrimitiveRestartIndexFUNC)(GLuint index);

extern GLLOADER_API glDrawArraysInstancedFUNC glDrawArraysInstanced;
extern GLLOADER_API glDrawElementsInstancedFUNC glDrawElementsInstanced;
extern GLLOADER_API glTexBufferFUNC glTexBuffer;
extern GLLOADER_API glPrimitiveRestartIndexFUNC glPrimitiveRestartIndex;

#endif

#ifdef GL_VERSION_3_2

typedef void (GLLOADER_APIENTRY *glGetInteger64i_vFUNC)(GLenum target, GLuint index, GLint64* data);
typedef void (GLLOADER_APIENTRY *glGetBufferParameteri64vFUNC)(GLenum target, GLenum pname, GLint64* params);
typedef void (GLLOADER_APIENTRY *glFramebufferTextureFUNC)(GLenum target, GLenum attachment, GLuint texture, GLint level);

extern GLLOADER_API glGetInteger64i_vFUNC glGetInteger64i_v;
extern GLLOADER_API glGetBufferParameteri64vFUNC glGetBufferParameteri64v;
extern GLLOADER_API glFramebufferTextureFUNC glFramebufferTexture;

#endif

#ifdef GL_VERSION_3_3

typedef void (GLLOADER_APIENTRY *glVertexAttribDivisorFUNC)(GLuint index, GLuint divisor);

extern GLLOADER_API glVertexAttribDivisorFUNC glVertexAttribDivisor;

#endif

#ifdef GL_VERSION_4_0

typedef void (GLLOADER_APIENTRY *glMinSampleShadingFUNC)(GLfloat value);
typedef void (GLLOADER_APIENTRY *glBlendEquationiFUNC)(GLuint buf, GLenum mode);
typedef void (GLLOADER_APIENTRY *glBlendEquationSeparateiFUNC)(GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GLLOADER_APIENTRY *glBlendFunciFUNC)(GLuint buf, GLenum src, GLenum dst);
typedef void (GLLOADER_APIENTRY *glBlendFuncSeparateiFUNC)(GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);

extern GLLOADER_API glMinSampleShadingFUNC glMinSampleShading;
extern GLLOADER_API glBlendEquationiFUNC glBlendEquationi;
extern GLLOADER_API glBlendEquationSeparateiFUNC glBlendEquationSeparatei;
extern GLLOADER_API glBlendFunciFUNC glBlendFunci;
extern GLLOADER_API glBlendFuncSeparateiFUNC glBlendFuncSeparatei;

#endif

#ifdef GL_VERSION_4_5

typedef void (GLLOADER_APIENTRY *glGetnTexImageFUNC)(GLenum target, GLint level, GLenum format, GLenum type, GLsizei bufSize, GLvoid* img);
typedef void (GLLOADER_APIENTRY *glGetnUniformdvFUNC)(GLuint program, GLint location, GLsizei bufSize, GLdouble* params);
typedef void (GLLOADER_APIENTRY *glGetnMapdvFUNC)(GLenum target, GLenum query, GLsizei bufSize, GLdouble* v);
typedef void (GLLOADER_APIENTRY *glGetnMapfvFUNC)(GLenum target, GLenum query, GLsizei bufSize, GLfloat* v);
typedef void (GLLOADER_APIENTRY *glGetnMapivFUNC)(GLenum target, GLenum query, GLsizei bufSize, GLint* v);
typedef void (GLLOADER_APIENTRY *glGetnPixelMapfvFUNC)(GLenum map, GLsizei bufSize, GLfloat* values);
typedef void (GLLOADER_APIENTRY *glGetnPixelMapuivFUNC)(GLenum map, GLsizei bufSize, GLuint* values);
typedef void (GLLOADER_APIENTRY *glGetnPixelMapusvFUNC)(GLenum map, GLsizei bufSize, GLushort* values);
typedef void (GLLOADER_APIENTRY *glGetnPolygonStippleFUNC)(GLsizei bufSize, GLubyte* pattern);
typedef void (GLLOADER_APIENTRY *glGetnColorTableFUNC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* table);
typedef void (GLLOADER_APIENTRY *glGetnConvolutionFilterFUNC)(GLenum target, GLenum format, GLenum type, GLsizei bufSize, GLvoid* image);
typedef void (GLLOADER_APIENTRY *glGetnSeparableFilterFUNC)(GLenum target, GLenum format, GLenum type, GLsizei rowBufSize, GLvoid* row, GLsizei columnBufSize, GLvoid* column, GLvoid* span);
typedef void (GLLOADER_APIENTRY *glGetnHistogramFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values);
typedef void (GLLOADER_APIENTRY *glGetnMinmaxFUNC)(GLenum target, GLboolean reset, GLenum format, GLenum type, GLsizei bufSize, GLvoid* values);

extern GLLOADER_API glGetnTexImageFUNC glGetnTexImage;
extern GLLOADER_API glGetnUniformdvFUNC glGetnUniformdv;
extern GLLOADER_API glGetnMapdvFUNC glGetnMapdv;
extern GLLOADER_API glGetnMapfvFUNC glGetnMapfv;
extern GLLOADER_API glGetnMapivFUNC glGetnMapiv;
extern GLLOADER_API glGetnPixelMapfvFUNC glGetnPixelMapfv;
extern GLLOADER_API glGetnPixelMapuivFUNC glGetnPixelMapuiv;
extern GLLOADER_API glGetnPixelMapusvFUNC glGetnPixelMapusv;
extern GLLOADER_API glGetnPolygonStippleFUNC glGetnPolygonStipple;
extern GLLOADER_API glGetnColorTableFUNC glGetnColorTable;
extern GLLOADER_API glGetnConvolutionFilterFUNC glGetnConvolutionFilter;
extern GLLOADER_API glGetnSeparableFilterFUNC glGetnSeparableFilter;
extern GLLOADER_API glGetnHistogramFUNC glGetnHistogram;
extern GLLOADER_API glGetnMinmaxFUNC glGetnMinmax;

#endif

typedef char (GLLOADER_APIENTRY *glloader_GL_3DFX_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_3DFX_tbufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_3DFX_texture_compression_FXT1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_blend_minmax_factorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_conservative_depthFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_debug_outputFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_depth_clamp_separateFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_draw_buffers_blendFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_gcn_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_gpu_shader_int64FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_interleaved_elementsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_multi_draw_indirectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_name_gen_deleteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_occlusion_query_eventFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_performance_monitorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_pinned_memoryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_query_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_sample_positionsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_seamless_cubemap_per_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_shader_atomic_counter_opsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_shader_stencil_exportFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_shader_stencil_value_exportFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_shader_trinary_minmaxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_sparse_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_stencil_operation_extendedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_texture_texture4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_transform_feedback3_lines_trianglesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_transform_feedback4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_vertex_shader_layerFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_vertex_shader_tessellatorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_AMD_vertex_shader_viewport_indexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_aux_depth_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_client_storageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_element_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_fenceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_float_pixelsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_flush_buffer_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_object_purgeableFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_rgb_422FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_row_bytesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_specular_vectorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_texture_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_transform_hintFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_vertex_array_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_vertex_array_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_vertex_program_evaluatorsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_APPLE_ycbcr_422FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_arrays_of_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_base_instanceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_bindless_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_blend_func_extendedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_buffer_storageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_clear_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_clear_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_clip_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_cl_eventFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_color_buffer_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_compatibilityFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_compressed_texture_pixel_storageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_compute_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_compute_variable_group_sizeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_conditional_render_invertedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_conservative_depthFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_copy_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_copy_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_cull_distanceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_debug_outputFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_depth_buffer_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_depth_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_depth_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_derivative_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_direct_state_accessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_draw_buffersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_draw_buffers_blendFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_draw_elements_base_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_draw_indirectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_draw_instancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_enhanced_layoutsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_ES2_compatibilityFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_ES3_1_compatibilityFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_ES3_compatibilityFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_explicit_attrib_locationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_explicit_uniform_locationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_fragment_coord_conventionsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_fragment_layer_viewportFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_fragment_programFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_fragment_program_shadowFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_fragment_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_framebuffer_no_attachmentsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_framebuffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_framebuffer_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_geometry_shader4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_get_program_binaryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_get_texture_sub_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_gpu_shader5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_gpu_shader_fp64FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_half_float_pixelFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_half_float_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_imagingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_indirect_parametersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_instanced_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_internalformat_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_internalformat_query2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_invalidate_subdataFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_map_buffer_alignmentFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_map_buffer_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_matrix_paletteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_multitextureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_multi_bindFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_multi_draw_indirectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_occlusion_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_occlusion_query2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_pipeline_statistics_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_pixel_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_point_parametersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_point_spriteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_program_interface_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_provoking_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_query_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_robustnessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_robustness_isolationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_robust_buffer_access_behaviorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_sampler_objectsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_sample_shadingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_seamless_cubemap_per_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_seamless_cube_mapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_separate_shader_objectsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_atomic_countersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_bit_encodingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_draw_parametersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_group_voteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_image_load_storeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_image_sizeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_objectsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_precisionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_stencil_exportFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_storage_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_subroutineFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_texture_image_samplesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shader_texture_lodFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shading_language_100FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shading_language_420packFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shading_language_includeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shading_language_packingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shadowFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_shadow_ambientFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_sparse_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_sparse_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_stencil_texturingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_syncFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_tessellation_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_barrierFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_border_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_buffer_object_rgb32FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_buffer_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_compressionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_compression_bptcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_compression_rgtcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_cube_mapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_cube_map_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_env_addFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_env_combineFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_env_crossbarFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_env_dot3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_gatherFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_mirrored_repeatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_mirror_clamp_to_edgeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_non_power_of_twoFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_query_levelsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_query_lodFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_rectangleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_rgFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_rgb10_a2uiFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_stencil8FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_storageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_storage_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_swizzleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_texture_viewFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_timer_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_transform_feedback2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_transform_feedback3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_transform_feedback_instancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_transform_feedback_overflow_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_transpose_matrixFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_uniform_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_array_bgraFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_array_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_attrib_64bitFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_attrib_bindingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_blendFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_programFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_type_10f_11f_11f_revFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_vertex_type_2_10_10_10_revFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_viewport_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ARB_window_posFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_draw_buffersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_element_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_envmap_bumpmapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_fragment_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_map_object_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_meminfoFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_pixel_format_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_pn_trianglesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_separate_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_shader_texture_lodFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_texture_compression_3dcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_texture_env_combine3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_texture_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_texture_mirror_onceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_text_fragment_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_vertex_array_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_vertex_attrib_array_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_ATI_vertex_streamsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_422_pixelsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_abgrFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_bgraFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_bindable_uniformFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_blend_colorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_blend_equation_separateFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_blend_func_separateFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_blend_logic_opFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_blend_minmaxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_blend_subtractFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_clip_volume_hintFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_cmykaFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_color_subtableFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_compiled_vertex_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_convolutionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_coordinate_frameFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_copy_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_copy_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_cull_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_debug_labelFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_debug_markerFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_depth_bounds_testFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_direct_state_accessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_draw_buffers2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_draw_instancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_draw_range_elementsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_fog_coordFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_fragment_lightingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_framebuffer_blitFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_framebuffer_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_framebuffer_multisample_blit_scaledFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_framebuffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_framebuffer_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_geometry_shader4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_gpu_program_parametersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_gpu_shader4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_histogramFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_index_array_formatsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_index_funcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_index_materialFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_index_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_light_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_misc_attributeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_multi_draw_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_packed_depth_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_packed_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_packed_pixelsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_paletted_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_pixel_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_pixel_transformFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_pixel_transform_color_tableFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_point_parametersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_polygon_offsetFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_polygon_offset_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_post_depth_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_provoking_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_raster_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_rescale_normalFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_secondary_colorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_separate_shader_objectsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_separate_specular_colorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_shader_image_load_formattedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_shader_image_load_storeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_shader_integer_mixFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_shadow_funcsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_shared_texture_paletteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_sparse_texture2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_stencil_clear_tagFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_stencil_two_sideFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_stencil_wrapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_subtextureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture3DFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_compression_dxt1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_compression_latcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_compression_rgtcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_compression_s3tcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_env_addFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_env_combineFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_env_dot3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_filter_anisotropicFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_filter_minmaxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_integerFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_lod_biasFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_mirror_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_perturb_normalFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_shared_exponentFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_snormFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_sRGB_decodeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_texture_swizzleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_timer_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_transform_feedbackFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_transform_feedback2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_vertex_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_vertex_array_bgraFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_vertex_attrib_64bitFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_vertex_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_vertex_weightingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_EXT_x11_sync_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_FfdMaskSGIXFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_GREMEDY_frame_terminatorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_GREMEDY_string_markerFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_HP_convolution_border_modesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_HP_image_transformFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_HP_occlusion_testFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_HP_texture_lightingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_IBM_cull_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_IBM_multimode_draw_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_IBM_rasterpos_clipFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_IBM_static_dataFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_IBM_texture_mirrored_repeatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_IBM_vertex_array_listsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INGR_blend_func_separateFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INGR_color_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INGR_interlace_readFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INGR_palette_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INTEL_fragment_shader_orderingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INTEL_map_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INTEL_parallel_arraysFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INTEL_performance_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_INTEL_texture_scissorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_KHR_blend_equation_advancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_KHR_context_flush_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_KHR_debugFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_KHR_no_errorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_KHR_robustnessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_KHR_robust_buffer_access_behaviorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_KHR_texture_compression_astc_ldrFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_MESAX_texture_stackFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_MESA_pack_invertFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_MESA_resize_buffersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_MESA_window_posFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_MESA_ycbcr_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NVX_conditional_renderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NVX_gpu_memory_infoFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_bindless_multi_draw_indirectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_bindless_multi_draw_indirect_countFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_bindless_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_blend_equation_advancedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_blend_squareFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_compute_program5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_conditional_renderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_conservative_rasterFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_copy_depth_to_colorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_copy_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_deep_texture3DFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_depth_buffer_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_depth_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_draw_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_evaluatorsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_explicit_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fenceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fill_rectangleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_float_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fog_distanceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fragment_coverage_to_colorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fragment_programFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fragment_program2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fragment_program4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fragment_program_optionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_fragment_shader_interlockFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_framebuffer_mixed_samplesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_framebuffer_multisample_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_geometry_program4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_geometry_shader4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_geometry_shader_passthroughFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_gpu_program4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_gpu_program5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_gpu_program5_mem_extendedFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_gpu_shader5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_half_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_internalformat_sample_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_light_max_exponentFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_multisample_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_multisample_filter_hintFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_occlusion_queryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_packed_depth_stencilFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_parameter_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_parameter_buffer_object2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_path_renderingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_path_rendering_shared_edgeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_pixel_data_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_point_spriteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_present_videoFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_primitive_restartFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_register_combinersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_register_combiners2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_sample_locationsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_sample_mask_override_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_atomic_countersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_atomic_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_atomic_fp16_vectorFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_atomic_int64FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_buffer_loadFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_buffer_storeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_storage_buffer_objectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_thread_groupFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_shader_thread_shuffleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_tessellation_program5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texgen_embossFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texgen_reflectionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_barrierFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_compression_vtcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_env_combine4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_expand_normalFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_rectangleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_shaderFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_shader2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_texture_shader3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_transform_feedbackFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_transform_feedback2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_uniform_buffer_unified_memoryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vdpau_interopFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_array_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_array_range2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_attrib_integer_64bitFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_buffer_unified_memoryFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_programFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_program1_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_program2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_program2_optionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_program3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_vertex_program4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_video_captureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_NV_viewport_array2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OES_read_formatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OML_interlaceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OML_resampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OML_subsampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OVR_multiviewFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_OVR_multiview2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_PGI_misc_hintsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_PGI_vertex_hintsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_REND_screen_coordinatesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_S3_s3tcFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_detail_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_fog_functionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_generate_mipmapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_pixel_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_point_line_texgenFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_point_parametersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_sharpen_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_texture4DFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_texture_border_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_texture_color_maskFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_texture_edge_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_texture_filter4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_texture_lodFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIS_texture_selectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_asyncFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_async_histogramFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_async_pixelFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_blend_alpha_minmaxFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_calligraphic_fragmentFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_clipmapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_convolution_accuracyFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_depth_pass_instrumentFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_depth_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_flush_rasterFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_fog_offsetFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_fog_scaleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_fragment_lightingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_framezoomFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_igloo_interfaceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_impact_pixel_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_instrumentsFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_interlaceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_ir_instrument1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_list_priorityFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_pixel_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_pixel_tilesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_polynomial_ffdFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_reference_planeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_resampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_scalebias_hintFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_shadowFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_shadow_ambientFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_spriteFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_subsampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_tag_sample_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_texture_add_envFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_texture_coordinate_clampFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_texture_lod_biasFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_texture_multi_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_texture_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_texture_scale_biasFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_texture_selectFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_vertex_preclipFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_ycrcbFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_ycrcbaFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGIX_ycrcb_subsampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGI_color_matrixFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGI_color_tableFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGI_depth_pass_instrumentFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SGI_texture_color_tableFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SUNX_constant_dataFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SUN_convolution_border_modesFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SUN_global_alphaFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SUN_mesh_arrayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SUN_slice_accumFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SUN_triangle_listFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_SUN_vertexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_1_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_1_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_1_2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_1_3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_1_4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_1_5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_2_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_2_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_3_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_3_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_3_2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_3_3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_4_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_4_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_4_2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_4_3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_4_4FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_VERSION_4_5FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_WIN_phong_shadingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GL_WIN_specular_fogFUNC)();

extern GLLOADER_API glloader_GL_3DFX_multisampleFUNC glloader_GL_3DFX_multisample;
extern GLLOADER_API glloader_GL_3DFX_tbufferFUNC glloader_GL_3DFX_tbuffer;
extern GLLOADER_API glloader_GL_3DFX_texture_compression_FXT1FUNC glloader_GL_3DFX_texture_compression_FXT1;
extern GLLOADER_API glloader_GL_AMD_blend_minmax_factorFUNC glloader_GL_AMD_blend_minmax_factor;
extern GLLOADER_API glloader_GL_AMD_conservative_depthFUNC glloader_GL_AMD_conservative_depth;
extern GLLOADER_API glloader_GL_AMD_debug_outputFUNC glloader_GL_AMD_debug_output;
extern GLLOADER_API glloader_GL_AMD_depth_clamp_separateFUNC glloader_GL_AMD_depth_clamp_separate;
extern GLLOADER_API glloader_GL_AMD_draw_buffers_blendFUNC glloader_GL_AMD_draw_buffers_blend;
extern GLLOADER_API glloader_GL_AMD_gcn_shaderFUNC glloader_GL_AMD_gcn_shader;
extern GLLOADER_API glloader_GL_AMD_gpu_shader_int64FUNC glloader_GL_AMD_gpu_shader_int64;
extern GLLOADER_API glloader_GL_AMD_interleaved_elementsFUNC glloader_GL_AMD_interleaved_elements;
extern GLLOADER_API glloader_GL_AMD_multi_draw_indirectFUNC glloader_GL_AMD_multi_draw_indirect;
extern GLLOADER_API glloader_GL_AMD_name_gen_deleteFUNC glloader_GL_AMD_name_gen_delete;
extern GLLOADER_API glloader_GL_AMD_occlusion_query_eventFUNC glloader_GL_AMD_occlusion_query_event;
extern GLLOADER_API glloader_GL_AMD_performance_monitorFUNC glloader_GL_AMD_performance_monitor;
extern GLLOADER_API glloader_GL_AMD_pinned_memoryFUNC glloader_GL_AMD_pinned_memory;
extern GLLOADER_API glloader_GL_AMD_query_buffer_objectFUNC glloader_GL_AMD_query_buffer_object;
extern GLLOADER_API glloader_GL_AMD_sample_positionsFUNC glloader_GL_AMD_sample_positions;
extern GLLOADER_API glloader_GL_AMD_seamless_cubemap_per_textureFUNC glloader_GL_AMD_seamless_cubemap_per_texture;
extern GLLOADER_API glloader_GL_AMD_shader_atomic_counter_opsFUNC glloader_GL_AMD_shader_atomic_counter_ops;
extern GLLOADER_API glloader_GL_AMD_shader_stencil_exportFUNC glloader_GL_AMD_shader_stencil_export;
extern GLLOADER_API glloader_GL_AMD_shader_stencil_value_exportFUNC glloader_GL_AMD_shader_stencil_value_export;
extern GLLOADER_API glloader_GL_AMD_shader_trinary_minmaxFUNC glloader_GL_AMD_shader_trinary_minmax;
extern GLLOADER_API glloader_GL_AMD_sparse_textureFUNC glloader_GL_AMD_sparse_texture;
extern GLLOADER_API glloader_GL_AMD_stencil_operation_extendedFUNC glloader_GL_AMD_stencil_operation_extended;
extern GLLOADER_API glloader_GL_AMD_texture_texture4FUNC glloader_GL_AMD_texture_texture4;
extern GLLOADER_API glloader_GL_AMD_transform_feedback3_lines_trianglesFUNC glloader_GL_AMD_transform_feedback3_lines_triangles;
extern GLLOADER_API glloader_GL_AMD_transform_feedback4FUNC glloader_GL_AMD_transform_feedback4;
extern GLLOADER_API glloader_GL_AMD_vertex_shader_layerFUNC glloader_GL_AMD_vertex_shader_layer;
extern GLLOADER_API glloader_GL_AMD_vertex_shader_tessellatorFUNC glloader_GL_AMD_vertex_shader_tessellator;
extern GLLOADER_API glloader_GL_AMD_vertex_shader_viewport_indexFUNC glloader_GL_AMD_vertex_shader_viewport_index;
extern GLLOADER_API glloader_GL_APPLE_aux_depth_stencilFUNC glloader_GL_APPLE_aux_depth_stencil;
extern GLLOADER_API glloader_GL_APPLE_client_storageFUNC glloader_GL_APPLE_client_storage;
extern GLLOADER_API glloader_GL_APPLE_element_arrayFUNC glloader_GL_APPLE_element_array;
extern GLLOADER_API glloader_GL_APPLE_fenceFUNC glloader_GL_APPLE_fence;
extern GLLOADER_API glloader_GL_APPLE_float_pixelsFUNC glloader_GL_APPLE_float_pixels;
extern GLLOADER_API glloader_GL_APPLE_flush_buffer_rangeFUNC glloader_GL_APPLE_flush_buffer_range;
extern GLLOADER_API glloader_GL_APPLE_object_purgeableFUNC glloader_GL_APPLE_object_purgeable;
extern GLLOADER_API glloader_GL_APPLE_rgb_422FUNC glloader_GL_APPLE_rgb_422;
extern GLLOADER_API glloader_GL_APPLE_row_bytesFUNC glloader_GL_APPLE_row_bytes;
extern GLLOADER_API glloader_GL_APPLE_specular_vectorFUNC glloader_GL_APPLE_specular_vector;
extern GLLOADER_API glloader_GL_APPLE_texture_rangeFUNC glloader_GL_APPLE_texture_range;
extern GLLOADER_API glloader_GL_APPLE_transform_hintFUNC glloader_GL_APPLE_transform_hint;
extern GLLOADER_API glloader_GL_APPLE_vertex_array_objectFUNC glloader_GL_APPLE_vertex_array_object;
extern GLLOADER_API glloader_GL_APPLE_vertex_array_rangeFUNC glloader_GL_APPLE_vertex_array_range;
extern GLLOADER_API glloader_GL_APPLE_vertex_program_evaluatorsFUNC glloader_GL_APPLE_vertex_program_evaluators;
extern GLLOADER_API glloader_GL_APPLE_ycbcr_422FUNC glloader_GL_APPLE_ycbcr_422;
extern GLLOADER_API glloader_GL_ARB_arrays_of_arraysFUNC glloader_GL_ARB_arrays_of_arrays;
extern GLLOADER_API glloader_GL_ARB_base_instanceFUNC glloader_GL_ARB_base_instance;
extern GLLOADER_API glloader_GL_ARB_bindless_textureFUNC glloader_GL_ARB_bindless_texture;
extern GLLOADER_API glloader_GL_ARB_blend_func_extendedFUNC glloader_GL_ARB_blend_func_extended;
extern GLLOADER_API glloader_GL_ARB_buffer_storageFUNC glloader_GL_ARB_buffer_storage;
extern GLLOADER_API glloader_GL_ARB_clear_buffer_objectFUNC glloader_GL_ARB_clear_buffer_object;
extern GLLOADER_API glloader_GL_ARB_clear_textureFUNC glloader_GL_ARB_clear_texture;
extern GLLOADER_API glloader_GL_ARB_clip_controlFUNC glloader_GL_ARB_clip_control;
extern GLLOADER_API glloader_GL_ARB_cl_eventFUNC glloader_GL_ARB_cl_event;
extern GLLOADER_API glloader_GL_ARB_color_buffer_floatFUNC glloader_GL_ARB_color_buffer_float;
extern GLLOADER_API glloader_GL_ARB_compatibilityFUNC glloader_GL_ARB_compatibility;
extern GLLOADER_API glloader_GL_ARB_compressed_texture_pixel_storageFUNC glloader_GL_ARB_compressed_texture_pixel_storage;
extern GLLOADER_API glloader_GL_ARB_compute_shaderFUNC glloader_GL_ARB_compute_shader;
extern GLLOADER_API glloader_GL_ARB_compute_variable_group_sizeFUNC glloader_GL_ARB_compute_variable_group_size;
extern GLLOADER_API glloader_GL_ARB_conditional_render_invertedFUNC glloader_GL_ARB_conditional_render_inverted;
extern GLLOADER_API glloader_GL_ARB_conservative_depthFUNC glloader_GL_ARB_conservative_depth;
extern GLLOADER_API glloader_GL_ARB_copy_bufferFUNC glloader_GL_ARB_copy_buffer;
extern GLLOADER_API glloader_GL_ARB_copy_imageFUNC glloader_GL_ARB_copy_image;
extern GLLOADER_API glloader_GL_ARB_cull_distanceFUNC glloader_GL_ARB_cull_distance;
extern GLLOADER_API glloader_GL_ARB_debug_outputFUNC glloader_GL_ARB_debug_output;
extern GLLOADER_API glloader_GL_ARB_depth_buffer_floatFUNC glloader_GL_ARB_depth_buffer_float;
extern GLLOADER_API glloader_GL_ARB_depth_clampFUNC glloader_GL_ARB_depth_clamp;
extern GLLOADER_API glloader_GL_ARB_depth_textureFUNC glloader_GL_ARB_depth_texture;
extern GLLOADER_API glloader_GL_ARB_derivative_controlFUNC glloader_GL_ARB_derivative_control;
extern GLLOADER_API glloader_GL_ARB_direct_state_accessFUNC glloader_GL_ARB_direct_state_access;
extern GLLOADER_API glloader_GL_ARB_draw_buffersFUNC glloader_GL_ARB_draw_buffers;
extern GLLOADER_API glloader_GL_ARB_draw_buffers_blendFUNC glloader_GL_ARB_draw_buffers_blend;
extern GLLOADER_API glloader_GL_ARB_draw_elements_base_vertexFUNC glloader_GL_ARB_draw_elements_base_vertex;
extern GLLOADER_API glloader_GL_ARB_draw_indirectFUNC glloader_GL_ARB_draw_indirect;
extern GLLOADER_API glloader_GL_ARB_draw_instancedFUNC glloader_GL_ARB_draw_instanced;
extern GLLOADER_API glloader_GL_ARB_enhanced_layoutsFUNC glloader_GL_ARB_enhanced_layouts;
extern GLLOADER_API glloader_GL_ARB_ES2_compatibilityFUNC glloader_GL_ARB_ES2_compatibility;
extern GLLOADER_API glloader_GL_ARB_ES3_1_compatibilityFUNC glloader_GL_ARB_ES3_1_compatibility;
extern GLLOADER_API glloader_GL_ARB_ES3_compatibilityFUNC glloader_GL_ARB_ES3_compatibility;
extern GLLOADER_API glloader_GL_ARB_explicit_attrib_locationFUNC glloader_GL_ARB_explicit_attrib_location;
extern GLLOADER_API glloader_GL_ARB_explicit_uniform_locationFUNC glloader_GL_ARB_explicit_uniform_location;
extern GLLOADER_API glloader_GL_ARB_fragment_coord_conventionsFUNC glloader_GL_ARB_fragment_coord_conventions;
extern GLLOADER_API glloader_GL_ARB_fragment_layer_viewportFUNC glloader_GL_ARB_fragment_layer_viewport;
extern GLLOADER_API glloader_GL_ARB_fragment_programFUNC glloader_GL_ARB_fragment_program;
extern GLLOADER_API glloader_GL_ARB_fragment_program_shadowFUNC glloader_GL_ARB_fragment_program_shadow;
extern GLLOADER_API glloader_GL_ARB_fragment_shaderFUNC glloader_GL_ARB_fragment_shader;
extern GLLOADER_API glloader_GL_ARB_framebuffer_no_attachmentsFUNC glloader_GL_ARB_framebuffer_no_attachments;
extern GLLOADER_API glloader_GL_ARB_framebuffer_objectFUNC glloader_GL_ARB_framebuffer_object;
extern GLLOADER_API glloader_GL_ARB_framebuffer_sRGBFUNC glloader_GL_ARB_framebuffer_sRGB;
extern GLLOADER_API glloader_GL_ARB_geometry_shader4FUNC glloader_GL_ARB_geometry_shader4;
extern GLLOADER_API glloader_GL_ARB_get_program_binaryFUNC glloader_GL_ARB_get_program_binary;
extern GLLOADER_API glloader_GL_ARB_get_texture_sub_imageFUNC glloader_GL_ARB_get_texture_sub_image;
extern GLLOADER_API glloader_GL_ARB_gpu_shader5FUNC glloader_GL_ARB_gpu_shader5;
extern GLLOADER_API glloader_GL_ARB_gpu_shader_fp64FUNC glloader_GL_ARB_gpu_shader_fp64;
extern GLLOADER_API glloader_GL_ARB_half_float_pixelFUNC glloader_GL_ARB_half_float_pixel;
extern GLLOADER_API glloader_GL_ARB_half_float_vertexFUNC glloader_GL_ARB_half_float_vertex;
extern GLLOADER_API glloader_GL_ARB_imagingFUNC glloader_GL_ARB_imaging;
extern GLLOADER_API glloader_GL_ARB_indirect_parametersFUNC glloader_GL_ARB_indirect_parameters;
extern GLLOADER_API glloader_GL_ARB_instanced_arraysFUNC glloader_GL_ARB_instanced_arrays;
extern GLLOADER_API glloader_GL_ARB_internalformat_queryFUNC glloader_GL_ARB_internalformat_query;
extern GLLOADER_API glloader_GL_ARB_internalformat_query2FUNC glloader_GL_ARB_internalformat_query2;
extern GLLOADER_API glloader_GL_ARB_invalidate_subdataFUNC glloader_GL_ARB_invalidate_subdata;
extern GLLOADER_API glloader_GL_ARB_map_buffer_alignmentFUNC glloader_GL_ARB_map_buffer_alignment;
extern GLLOADER_API glloader_GL_ARB_map_buffer_rangeFUNC glloader_GL_ARB_map_buffer_range;
extern GLLOADER_API glloader_GL_ARB_matrix_paletteFUNC glloader_GL_ARB_matrix_palette;
extern GLLOADER_API glloader_GL_ARB_multisampleFUNC glloader_GL_ARB_multisample;
extern GLLOADER_API glloader_GL_ARB_multitextureFUNC glloader_GL_ARB_multitexture;
extern GLLOADER_API glloader_GL_ARB_multi_bindFUNC glloader_GL_ARB_multi_bind;
extern GLLOADER_API glloader_GL_ARB_multi_draw_indirectFUNC glloader_GL_ARB_multi_draw_indirect;
extern GLLOADER_API glloader_GL_ARB_occlusion_queryFUNC glloader_GL_ARB_occlusion_query;
extern GLLOADER_API glloader_GL_ARB_occlusion_query2FUNC glloader_GL_ARB_occlusion_query2;
extern GLLOADER_API glloader_GL_ARB_pipeline_statistics_queryFUNC glloader_GL_ARB_pipeline_statistics_query;
extern GLLOADER_API glloader_GL_ARB_pixel_buffer_objectFUNC glloader_GL_ARB_pixel_buffer_object;
extern GLLOADER_API glloader_GL_ARB_point_parametersFUNC glloader_GL_ARB_point_parameters;
extern GLLOADER_API glloader_GL_ARB_point_spriteFUNC glloader_GL_ARB_point_sprite;
extern GLLOADER_API glloader_GL_ARB_program_interface_queryFUNC glloader_GL_ARB_program_interface_query;
extern GLLOADER_API glloader_GL_ARB_provoking_vertexFUNC glloader_GL_ARB_provoking_vertex;
extern GLLOADER_API glloader_GL_ARB_query_buffer_objectFUNC glloader_GL_ARB_query_buffer_object;
extern GLLOADER_API glloader_GL_ARB_robustnessFUNC glloader_GL_ARB_robustness;
extern GLLOADER_API glloader_GL_ARB_robustness_isolationFUNC glloader_GL_ARB_robustness_isolation;
extern GLLOADER_API glloader_GL_ARB_robust_buffer_access_behaviorFUNC glloader_GL_ARB_robust_buffer_access_behavior;
extern GLLOADER_API glloader_GL_ARB_sampler_objectsFUNC glloader_GL_ARB_sampler_objects;
extern GLLOADER_API glloader_GL_ARB_sample_shadingFUNC glloader_GL_ARB_sample_shading;
extern GLLOADER_API glloader_GL_ARB_seamless_cubemap_per_textureFUNC glloader_GL_ARB_seamless_cubemap_per_texture;
extern GLLOADER_API glloader_GL_ARB_seamless_cube_mapFUNC glloader_GL_ARB_seamless_cube_map;
extern GLLOADER_API glloader_GL_ARB_separate_shader_objectsFUNC glloader_GL_ARB_separate_shader_objects;
extern GLLOADER_API glloader_GL_ARB_shader_atomic_countersFUNC glloader_GL_ARB_shader_atomic_counters;
extern GLLOADER_API glloader_GL_ARB_shader_bit_encodingFUNC glloader_GL_ARB_shader_bit_encoding;
extern GLLOADER_API glloader_GL_ARB_shader_draw_parametersFUNC glloader_GL_ARB_shader_draw_parameters;
extern GLLOADER_API glloader_GL_ARB_shader_group_voteFUNC glloader_GL_ARB_shader_group_vote;
extern GLLOADER_API glloader_GL_ARB_shader_image_load_storeFUNC glloader_GL_ARB_shader_image_load_store;
extern GLLOADER_API glloader_GL_ARB_shader_image_sizeFUNC glloader_GL_ARB_shader_image_size;
extern GLLOADER_API glloader_GL_ARB_shader_objectsFUNC glloader_GL_ARB_shader_objects;
extern GLLOADER_API glloader_GL_ARB_shader_precisionFUNC glloader_GL_ARB_shader_precision;
extern GLLOADER_API glloader_GL_ARB_shader_stencil_exportFUNC glloader_GL_ARB_shader_stencil_export;
extern GLLOADER_API glloader_GL_ARB_shader_storage_buffer_objectFUNC glloader_GL_ARB_shader_storage_buffer_object;
extern GLLOADER_API glloader_GL_ARB_shader_subroutineFUNC glloader_GL_ARB_shader_subroutine;
extern GLLOADER_API glloader_GL_ARB_shader_texture_image_samplesFUNC glloader_GL_ARB_shader_texture_image_samples;
extern GLLOADER_API glloader_GL_ARB_shader_texture_lodFUNC glloader_GL_ARB_shader_texture_lod;
extern GLLOADER_API glloader_GL_ARB_shading_language_100FUNC glloader_GL_ARB_shading_language_100;
extern GLLOADER_API glloader_GL_ARB_shading_language_420packFUNC glloader_GL_ARB_shading_language_420pack;
extern GLLOADER_API glloader_GL_ARB_shading_language_includeFUNC glloader_GL_ARB_shading_language_include;
extern GLLOADER_API glloader_GL_ARB_shading_language_packingFUNC glloader_GL_ARB_shading_language_packing;
extern GLLOADER_API glloader_GL_ARB_shadowFUNC glloader_GL_ARB_shadow;
extern GLLOADER_API glloader_GL_ARB_shadow_ambientFUNC glloader_GL_ARB_shadow_ambient;
extern GLLOADER_API glloader_GL_ARB_sparse_bufferFUNC glloader_GL_ARB_sparse_buffer;
extern GLLOADER_API glloader_GL_ARB_sparse_textureFUNC glloader_GL_ARB_sparse_texture;
extern GLLOADER_API glloader_GL_ARB_stencil_texturingFUNC glloader_GL_ARB_stencil_texturing;
extern GLLOADER_API glloader_GL_ARB_syncFUNC glloader_GL_ARB_sync;
extern GLLOADER_API glloader_GL_ARB_tessellation_shaderFUNC glloader_GL_ARB_tessellation_shader;
extern GLLOADER_API glloader_GL_ARB_texture_barrierFUNC glloader_GL_ARB_texture_barrier;
extern GLLOADER_API glloader_GL_ARB_texture_border_clampFUNC glloader_GL_ARB_texture_border_clamp;
extern GLLOADER_API glloader_GL_ARB_texture_buffer_objectFUNC glloader_GL_ARB_texture_buffer_object;
extern GLLOADER_API glloader_GL_ARB_texture_buffer_object_rgb32FUNC glloader_GL_ARB_texture_buffer_object_rgb32;
extern GLLOADER_API glloader_GL_ARB_texture_buffer_rangeFUNC glloader_GL_ARB_texture_buffer_range;
extern GLLOADER_API glloader_GL_ARB_texture_compressionFUNC glloader_GL_ARB_texture_compression;
extern GLLOADER_API glloader_GL_ARB_texture_compression_bptcFUNC glloader_GL_ARB_texture_compression_bptc;
extern GLLOADER_API glloader_GL_ARB_texture_compression_rgtcFUNC glloader_GL_ARB_texture_compression_rgtc;
extern GLLOADER_API glloader_GL_ARB_texture_cube_mapFUNC glloader_GL_ARB_texture_cube_map;
extern GLLOADER_API glloader_GL_ARB_texture_cube_map_arrayFUNC glloader_GL_ARB_texture_cube_map_array;
extern GLLOADER_API glloader_GL_ARB_texture_env_addFUNC glloader_GL_ARB_texture_env_add;
extern GLLOADER_API glloader_GL_ARB_texture_env_combineFUNC glloader_GL_ARB_texture_env_combine;
extern GLLOADER_API glloader_GL_ARB_texture_env_crossbarFUNC glloader_GL_ARB_texture_env_crossbar;
extern GLLOADER_API glloader_GL_ARB_texture_env_dot3FUNC glloader_GL_ARB_texture_env_dot3;
extern GLLOADER_API glloader_GL_ARB_texture_floatFUNC glloader_GL_ARB_texture_float;
extern GLLOADER_API glloader_GL_ARB_texture_gatherFUNC glloader_GL_ARB_texture_gather;
extern GLLOADER_API glloader_GL_ARB_texture_mirrored_repeatFUNC glloader_GL_ARB_texture_mirrored_repeat;
extern GLLOADER_API glloader_GL_ARB_texture_mirror_clamp_to_edgeFUNC glloader_GL_ARB_texture_mirror_clamp_to_edge;
extern GLLOADER_API glloader_GL_ARB_texture_multisampleFUNC glloader_GL_ARB_texture_multisample;
extern GLLOADER_API glloader_GL_ARB_texture_non_power_of_twoFUNC glloader_GL_ARB_texture_non_power_of_two;
extern GLLOADER_API glloader_GL_ARB_texture_query_levelsFUNC glloader_GL_ARB_texture_query_levels;
extern GLLOADER_API glloader_GL_ARB_texture_query_lodFUNC glloader_GL_ARB_texture_query_lod;
extern GLLOADER_API glloader_GL_ARB_texture_rectangleFUNC glloader_GL_ARB_texture_rectangle;
extern GLLOADER_API glloader_GL_ARB_texture_rgFUNC glloader_GL_ARB_texture_rg;
extern GLLOADER_API glloader_GL_ARB_texture_rgb10_a2uiFUNC glloader_GL_ARB_texture_rgb10_a2ui;
extern GLLOADER_API glloader_GL_ARB_texture_stencil8FUNC glloader_GL_ARB_texture_stencil8;
extern GLLOADER_API glloader_GL_ARB_texture_storageFUNC glloader_GL_ARB_texture_storage;
extern GLLOADER_API glloader_GL_ARB_texture_storage_multisampleFUNC glloader_GL_ARB_texture_storage_multisample;
extern GLLOADER_API glloader_GL_ARB_texture_swizzleFUNC glloader_GL_ARB_texture_swizzle;
extern GLLOADER_API glloader_GL_ARB_texture_viewFUNC glloader_GL_ARB_texture_view;
extern GLLOADER_API glloader_GL_ARB_timer_queryFUNC glloader_GL_ARB_timer_query;
extern GLLOADER_API glloader_GL_ARB_transform_feedback2FUNC glloader_GL_ARB_transform_feedback2;
extern GLLOADER_API glloader_GL_ARB_transform_feedback3FUNC glloader_GL_ARB_transform_feedback3;
extern GLLOADER_API glloader_GL_ARB_transform_feedback_instancedFUNC glloader_GL_ARB_transform_feedback_instanced;
extern GLLOADER_API glloader_GL_ARB_transform_feedback_overflow_queryFUNC glloader_GL_ARB_transform_feedback_overflow_query;
extern GLLOADER_API glloader_GL_ARB_transpose_matrixFUNC glloader_GL_ARB_transpose_matrix;
extern GLLOADER_API glloader_GL_ARB_uniform_buffer_objectFUNC glloader_GL_ARB_uniform_buffer_object;
extern GLLOADER_API glloader_GL_ARB_vertex_array_bgraFUNC glloader_GL_ARB_vertex_array_bgra;
extern GLLOADER_API glloader_GL_ARB_vertex_array_objectFUNC glloader_GL_ARB_vertex_array_object;
extern GLLOADER_API glloader_GL_ARB_vertex_attrib_64bitFUNC glloader_GL_ARB_vertex_attrib_64bit;
extern GLLOADER_API glloader_GL_ARB_vertex_attrib_bindingFUNC glloader_GL_ARB_vertex_attrib_binding;
extern GLLOADER_API glloader_GL_ARB_vertex_blendFUNC glloader_GL_ARB_vertex_blend;
extern GLLOADER_API glloader_GL_ARB_vertex_buffer_objectFUNC glloader_GL_ARB_vertex_buffer_object;
extern GLLOADER_API glloader_GL_ARB_vertex_programFUNC glloader_GL_ARB_vertex_program;
extern GLLOADER_API glloader_GL_ARB_vertex_shaderFUNC glloader_GL_ARB_vertex_shader;
extern GLLOADER_API glloader_GL_ARB_vertex_type_10f_11f_11f_revFUNC glloader_GL_ARB_vertex_type_10f_11f_11f_rev;
extern GLLOADER_API glloader_GL_ARB_vertex_type_2_10_10_10_revFUNC glloader_GL_ARB_vertex_type_2_10_10_10_rev;
extern GLLOADER_API glloader_GL_ARB_viewport_arrayFUNC glloader_GL_ARB_viewport_array;
extern GLLOADER_API glloader_GL_ARB_window_posFUNC glloader_GL_ARB_window_pos;
extern GLLOADER_API glloader_GL_ATI_draw_buffersFUNC glloader_GL_ATI_draw_buffers;
extern GLLOADER_API glloader_GL_ATI_element_arrayFUNC glloader_GL_ATI_element_array;
extern GLLOADER_API glloader_GL_ATI_envmap_bumpmapFUNC glloader_GL_ATI_envmap_bumpmap;
extern GLLOADER_API glloader_GL_ATI_fragment_shaderFUNC glloader_GL_ATI_fragment_shader;
extern GLLOADER_API glloader_GL_ATI_map_object_bufferFUNC glloader_GL_ATI_map_object_buffer;
extern GLLOADER_API glloader_GL_ATI_meminfoFUNC glloader_GL_ATI_meminfo;
extern GLLOADER_API glloader_GL_ATI_pixel_format_floatFUNC glloader_GL_ATI_pixel_format_float;
extern GLLOADER_API glloader_GL_ATI_pn_trianglesFUNC glloader_GL_ATI_pn_triangles;
extern GLLOADER_API glloader_GL_ATI_separate_stencilFUNC glloader_GL_ATI_separate_stencil;
extern GLLOADER_API glloader_GL_ATI_shader_texture_lodFUNC glloader_GL_ATI_shader_texture_lod;
extern GLLOADER_API glloader_GL_ATI_texture_compression_3dcFUNC glloader_GL_ATI_texture_compression_3dc;
extern GLLOADER_API glloader_GL_ATI_texture_env_combine3FUNC glloader_GL_ATI_texture_env_combine3;
extern GLLOADER_API glloader_GL_ATI_texture_floatFUNC glloader_GL_ATI_texture_float;
extern GLLOADER_API glloader_GL_ATI_texture_mirror_onceFUNC glloader_GL_ATI_texture_mirror_once;
extern GLLOADER_API glloader_GL_ATI_text_fragment_shaderFUNC glloader_GL_ATI_text_fragment_shader;
extern GLLOADER_API glloader_GL_ATI_vertex_array_objectFUNC glloader_GL_ATI_vertex_array_object;
extern GLLOADER_API glloader_GL_ATI_vertex_attrib_array_objectFUNC glloader_GL_ATI_vertex_attrib_array_object;
extern GLLOADER_API glloader_GL_ATI_vertex_streamsFUNC glloader_GL_ATI_vertex_streams;
extern GLLOADER_API glloader_GL_EXT_422_pixelsFUNC glloader_GL_EXT_422_pixels;
extern GLLOADER_API glloader_GL_EXT_abgrFUNC glloader_GL_EXT_abgr;
extern GLLOADER_API glloader_GL_EXT_bgraFUNC glloader_GL_EXT_bgra;
extern GLLOADER_API glloader_GL_EXT_bindable_uniformFUNC glloader_GL_EXT_bindable_uniform;
extern GLLOADER_API glloader_GL_EXT_blend_colorFUNC glloader_GL_EXT_blend_color;
extern GLLOADER_API glloader_GL_EXT_blend_equation_separateFUNC glloader_GL_EXT_blend_equation_separate;
extern GLLOADER_API glloader_GL_EXT_blend_func_separateFUNC glloader_GL_EXT_blend_func_separate;
extern GLLOADER_API glloader_GL_EXT_blend_logic_opFUNC glloader_GL_EXT_blend_logic_op;
extern GLLOADER_API glloader_GL_EXT_blend_minmaxFUNC glloader_GL_EXT_blend_minmax;
extern GLLOADER_API glloader_GL_EXT_blend_subtractFUNC glloader_GL_EXT_blend_subtract;
extern GLLOADER_API glloader_GL_EXT_clip_volume_hintFUNC glloader_GL_EXT_clip_volume_hint;
extern GLLOADER_API glloader_GL_EXT_cmykaFUNC glloader_GL_EXT_cmyka;
extern GLLOADER_API glloader_GL_EXT_color_subtableFUNC glloader_GL_EXT_color_subtable;
extern GLLOADER_API glloader_GL_EXT_compiled_vertex_arrayFUNC glloader_GL_EXT_compiled_vertex_array;
extern GLLOADER_API glloader_GL_EXT_convolutionFUNC glloader_GL_EXT_convolution;
extern GLLOADER_API glloader_GL_EXT_coordinate_frameFUNC glloader_GL_EXT_coordinate_frame;
extern GLLOADER_API glloader_GL_EXT_copy_bufferFUNC glloader_GL_EXT_copy_buffer;
extern GLLOADER_API glloader_GL_EXT_copy_textureFUNC glloader_GL_EXT_copy_texture;
extern GLLOADER_API glloader_GL_EXT_cull_vertexFUNC glloader_GL_EXT_cull_vertex;
extern GLLOADER_API glloader_GL_EXT_debug_labelFUNC glloader_GL_EXT_debug_label;
extern GLLOADER_API glloader_GL_EXT_debug_markerFUNC glloader_GL_EXT_debug_marker;
extern GLLOADER_API glloader_GL_EXT_depth_bounds_testFUNC glloader_GL_EXT_depth_bounds_test;
extern GLLOADER_API glloader_GL_EXT_direct_state_accessFUNC glloader_GL_EXT_direct_state_access;
extern GLLOADER_API glloader_GL_EXT_draw_buffers2FUNC glloader_GL_EXT_draw_buffers2;
extern GLLOADER_API glloader_GL_EXT_draw_instancedFUNC glloader_GL_EXT_draw_instanced;
extern GLLOADER_API glloader_GL_EXT_draw_range_elementsFUNC glloader_GL_EXT_draw_range_elements;
extern GLLOADER_API glloader_GL_EXT_fog_coordFUNC glloader_GL_EXT_fog_coord;
extern GLLOADER_API glloader_GL_EXT_fragment_lightingFUNC glloader_GL_EXT_fragment_lighting;
extern GLLOADER_API glloader_GL_EXT_framebuffer_blitFUNC glloader_GL_EXT_framebuffer_blit;
extern GLLOADER_API glloader_GL_EXT_framebuffer_multisampleFUNC glloader_GL_EXT_framebuffer_multisample;
extern GLLOADER_API glloader_GL_EXT_framebuffer_multisample_blit_scaledFUNC glloader_GL_EXT_framebuffer_multisample_blit_scaled;
extern GLLOADER_API glloader_GL_EXT_framebuffer_objectFUNC glloader_GL_EXT_framebuffer_object;
extern GLLOADER_API glloader_GL_EXT_framebuffer_sRGBFUNC glloader_GL_EXT_framebuffer_sRGB;
extern GLLOADER_API glloader_GL_EXT_geometry_shader4FUNC glloader_GL_EXT_geometry_shader4;
extern GLLOADER_API glloader_GL_EXT_gpu_program_parametersFUNC glloader_GL_EXT_gpu_program_parameters;
extern GLLOADER_API glloader_GL_EXT_gpu_shader4FUNC glloader_GL_EXT_gpu_shader4;
extern GLLOADER_API glloader_GL_EXT_histogramFUNC glloader_GL_EXT_histogram;
extern GLLOADER_API glloader_GL_EXT_index_array_formatsFUNC glloader_GL_EXT_index_array_formats;
extern GLLOADER_API glloader_GL_EXT_index_funcFUNC glloader_GL_EXT_index_func;
extern GLLOADER_API glloader_GL_EXT_index_materialFUNC glloader_GL_EXT_index_material;
extern GLLOADER_API glloader_GL_EXT_index_textureFUNC glloader_GL_EXT_index_texture;
extern GLLOADER_API glloader_GL_EXT_light_textureFUNC glloader_GL_EXT_light_texture;
extern GLLOADER_API glloader_GL_EXT_misc_attributeFUNC glloader_GL_EXT_misc_attribute;
extern GLLOADER_API glloader_GL_EXT_multisampleFUNC glloader_GL_EXT_multisample;
extern GLLOADER_API glloader_GL_EXT_multi_draw_arraysFUNC glloader_GL_EXT_multi_draw_arrays;
extern GLLOADER_API glloader_GL_EXT_packed_depth_stencilFUNC glloader_GL_EXT_packed_depth_stencil;
extern GLLOADER_API glloader_GL_EXT_packed_floatFUNC glloader_GL_EXT_packed_float;
extern GLLOADER_API glloader_GL_EXT_packed_pixelsFUNC glloader_GL_EXT_packed_pixels;
extern GLLOADER_API glloader_GL_EXT_paletted_textureFUNC glloader_GL_EXT_paletted_texture;
extern GLLOADER_API glloader_GL_EXT_pixel_buffer_objectFUNC glloader_GL_EXT_pixel_buffer_object;
extern GLLOADER_API glloader_GL_EXT_pixel_transformFUNC glloader_GL_EXT_pixel_transform;
extern GLLOADER_API glloader_GL_EXT_pixel_transform_color_tableFUNC glloader_GL_EXT_pixel_transform_color_table;
extern GLLOADER_API glloader_GL_EXT_point_parametersFUNC glloader_GL_EXT_point_parameters;
extern GLLOADER_API glloader_GL_EXT_polygon_offsetFUNC glloader_GL_EXT_polygon_offset;
extern GLLOADER_API glloader_GL_EXT_polygon_offset_clampFUNC glloader_GL_EXT_polygon_offset_clamp;
extern GLLOADER_API glloader_GL_EXT_post_depth_coverageFUNC glloader_GL_EXT_post_depth_coverage;
extern GLLOADER_API glloader_GL_EXT_provoking_vertexFUNC glloader_GL_EXT_provoking_vertex;
extern GLLOADER_API glloader_GL_EXT_raster_multisampleFUNC glloader_GL_EXT_raster_multisample;
extern GLLOADER_API glloader_GL_EXT_rescale_normalFUNC glloader_GL_EXT_rescale_normal;
extern GLLOADER_API glloader_GL_EXT_secondary_colorFUNC glloader_GL_EXT_secondary_color;
extern GLLOADER_API glloader_GL_EXT_separate_shader_objectsFUNC glloader_GL_EXT_separate_shader_objects;
extern GLLOADER_API glloader_GL_EXT_separate_specular_colorFUNC glloader_GL_EXT_separate_specular_color;
extern GLLOADER_API glloader_GL_EXT_shader_image_load_formattedFUNC glloader_GL_EXT_shader_image_load_formatted;
extern GLLOADER_API glloader_GL_EXT_shader_image_load_storeFUNC glloader_GL_EXT_shader_image_load_store;
extern GLLOADER_API glloader_GL_EXT_shader_integer_mixFUNC glloader_GL_EXT_shader_integer_mix;
extern GLLOADER_API glloader_GL_EXT_shadow_funcsFUNC glloader_GL_EXT_shadow_funcs;
extern GLLOADER_API glloader_GL_EXT_shared_texture_paletteFUNC glloader_GL_EXT_shared_texture_palette;
extern GLLOADER_API glloader_GL_EXT_sparse_texture2FUNC glloader_GL_EXT_sparse_texture2;
extern GLLOADER_API glloader_GL_EXT_stencil_clear_tagFUNC glloader_GL_EXT_stencil_clear_tag;
extern GLLOADER_API glloader_GL_EXT_stencil_two_sideFUNC glloader_GL_EXT_stencil_two_side;
extern GLLOADER_API glloader_GL_EXT_stencil_wrapFUNC glloader_GL_EXT_stencil_wrap;
extern GLLOADER_API glloader_GL_EXT_subtextureFUNC glloader_GL_EXT_subtexture;
extern GLLOADER_API glloader_GL_EXT_textureFUNC glloader_GL_EXT_texture;
extern GLLOADER_API glloader_GL_EXT_texture3DFUNC glloader_GL_EXT_texture3D;
extern GLLOADER_API glloader_GL_EXT_texture_arrayFUNC glloader_GL_EXT_texture_array;
extern GLLOADER_API glloader_GL_EXT_texture_buffer_objectFUNC glloader_GL_EXT_texture_buffer_object;
extern GLLOADER_API glloader_GL_EXT_texture_compression_dxt1FUNC glloader_GL_EXT_texture_compression_dxt1;
extern GLLOADER_API glloader_GL_EXT_texture_compression_latcFUNC glloader_GL_EXT_texture_compression_latc;
extern GLLOADER_API glloader_GL_EXT_texture_compression_rgtcFUNC glloader_GL_EXT_texture_compression_rgtc;
extern GLLOADER_API glloader_GL_EXT_texture_compression_s3tcFUNC glloader_GL_EXT_texture_compression_s3tc;
extern GLLOADER_API glloader_GL_EXT_texture_env_addFUNC glloader_GL_EXT_texture_env_add;
extern GLLOADER_API glloader_GL_EXT_texture_env_combineFUNC glloader_GL_EXT_texture_env_combine;
extern GLLOADER_API glloader_GL_EXT_texture_env_dot3FUNC glloader_GL_EXT_texture_env_dot3;
extern GLLOADER_API glloader_GL_EXT_texture_filter_anisotropicFUNC glloader_GL_EXT_texture_filter_anisotropic;
extern GLLOADER_API glloader_GL_EXT_texture_filter_minmaxFUNC glloader_GL_EXT_texture_filter_minmax;
extern GLLOADER_API glloader_GL_EXT_texture_integerFUNC glloader_GL_EXT_texture_integer;
extern GLLOADER_API glloader_GL_EXT_texture_lod_biasFUNC glloader_GL_EXT_texture_lod_bias;
extern GLLOADER_API glloader_GL_EXT_texture_mirror_clampFUNC glloader_GL_EXT_texture_mirror_clamp;
extern GLLOADER_API glloader_GL_EXT_texture_objectFUNC glloader_GL_EXT_texture_object;
extern GLLOADER_API glloader_GL_EXT_texture_perturb_normalFUNC glloader_GL_EXT_texture_perturb_normal;
extern GLLOADER_API glloader_GL_EXT_texture_shared_exponentFUNC glloader_GL_EXT_texture_shared_exponent;
extern GLLOADER_API glloader_GL_EXT_texture_snormFUNC glloader_GL_EXT_texture_snorm;
extern GLLOADER_API glloader_GL_EXT_texture_sRGBFUNC glloader_GL_EXT_texture_sRGB;
extern GLLOADER_API glloader_GL_EXT_texture_sRGB_decodeFUNC glloader_GL_EXT_texture_sRGB_decode;
extern GLLOADER_API glloader_GL_EXT_texture_swizzleFUNC glloader_GL_EXT_texture_swizzle;
extern GLLOADER_API glloader_GL_EXT_timer_queryFUNC glloader_GL_EXT_timer_query;
extern GLLOADER_API glloader_GL_EXT_transform_feedbackFUNC glloader_GL_EXT_transform_feedback;
extern GLLOADER_API glloader_GL_EXT_transform_feedback2FUNC glloader_GL_EXT_transform_feedback2;
extern GLLOADER_API glloader_GL_EXT_vertex_arrayFUNC glloader_GL_EXT_vertex_array;
extern GLLOADER_API glloader_GL_EXT_vertex_array_bgraFUNC glloader_GL_EXT_vertex_array_bgra;
extern GLLOADER_API glloader_GL_EXT_vertex_attrib_64bitFUNC glloader_GL_EXT_vertex_attrib_64bit;
extern GLLOADER_API glloader_GL_EXT_vertex_shaderFUNC glloader_GL_EXT_vertex_shader;
extern GLLOADER_API glloader_GL_EXT_vertex_weightingFUNC glloader_GL_EXT_vertex_weighting;
extern GLLOADER_API glloader_GL_EXT_x11_sync_objectFUNC glloader_GL_EXT_x11_sync_object;
extern GLLOADER_API glloader_GL_FfdMaskSGIXFUNC glloader_GL_FfdMaskSGIX;
extern GLLOADER_API glloader_GL_GREMEDY_frame_terminatorFUNC glloader_GL_GREMEDY_frame_terminator;
extern GLLOADER_API glloader_GL_GREMEDY_string_markerFUNC glloader_GL_GREMEDY_string_marker;
extern GLLOADER_API glloader_GL_HP_convolution_border_modesFUNC glloader_GL_HP_convolution_border_modes;
extern GLLOADER_API glloader_GL_HP_image_transformFUNC glloader_GL_HP_image_transform;
extern GLLOADER_API glloader_GL_HP_occlusion_testFUNC glloader_GL_HP_occlusion_test;
extern GLLOADER_API glloader_GL_HP_texture_lightingFUNC glloader_GL_HP_texture_lighting;
extern GLLOADER_API glloader_GL_IBM_cull_vertexFUNC glloader_GL_IBM_cull_vertex;
extern GLLOADER_API glloader_GL_IBM_multimode_draw_arraysFUNC glloader_GL_IBM_multimode_draw_arrays;
extern GLLOADER_API glloader_GL_IBM_rasterpos_clipFUNC glloader_GL_IBM_rasterpos_clip;
extern GLLOADER_API glloader_GL_IBM_static_dataFUNC glloader_GL_IBM_static_data;
extern GLLOADER_API glloader_GL_IBM_texture_mirrored_repeatFUNC glloader_GL_IBM_texture_mirrored_repeat;
extern GLLOADER_API glloader_GL_IBM_vertex_array_listsFUNC glloader_GL_IBM_vertex_array_lists;
extern GLLOADER_API glloader_GL_INGR_blend_func_separateFUNC glloader_GL_INGR_blend_func_separate;
extern GLLOADER_API glloader_GL_INGR_color_clampFUNC glloader_GL_INGR_color_clamp;
extern GLLOADER_API glloader_GL_INGR_interlace_readFUNC glloader_GL_INGR_interlace_read;
extern GLLOADER_API glloader_GL_INGR_palette_bufferFUNC glloader_GL_INGR_palette_buffer;
extern GLLOADER_API glloader_GL_INTEL_fragment_shader_orderingFUNC glloader_GL_INTEL_fragment_shader_ordering;
extern GLLOADER_API glloader_GL_INTEL_map_textureFUNC glloader_GL_INTEL_map_texture;
extern GLLOADER_API glloader_GL_INTEL_parallel_arraysFUNC glloader_GL_INTEL_parallel_arrays;
extern GLLOADER_API glloader_GL_INTEL_performance_queryFUNC glloader_GL_INTEL_performance_query;
extern GLLOADER_API glloader_GL_INTEL_texture_scissorFUNC glloader_GL_INTEL_texture_scissor;
extern GLLOADER_API glloader_GL_KHR_blend_equation_advancedFUNC glloader_GL_KHR_blend_equation_advanced;
extern GLLOADER_API glloader_GL_KHR_context_flush_controlFUNC glloader_GL_KHR_context_flush_control;
extern GLLOADER_API glloader_GL_KHR_debugFUNC glloader_GL_KHR_debug;
extern GLLOADER_API glloader_GL_KHR_no_errorFUNC glloader_GL_KHR_no_error;
extern GLLOADER_API glloader_GL_KHR_robustnessFUNC glloader_GL_KHR_robustness;
extern GLLOADER_API glloader_GL_KHR_robust_buffer_access_behaviorFUNC glloader_GL_KHR_robust_buffer_access_behavior;
extern GLLOADER_API glloader_GL_KHR_texture_compression_astc_ldrFUNC glloader_GL_KHR_texture_compression_astc_ldr;
extern GLLOADER_API glloader_GL_MESAX_texture_stackFUNC glloader_GL_MESAX_texture_stack;
extern GLLOADER_API glloader_GL_MESA_pack_invertFUNC glloader_GL_MESA_pack_invert;
extern GLLOADER_API glloader_GL_MESA_resize_buffersFUNC glloader_GL_MESA_resize_buffers;
extern GLLOADER_API glloader_GL_MESA_window_posFUNC glloader_GL_MESA_window_pos;
extern GLLOADER_API glloader_GL_MESA_ycbcr_textureFUNC glloader_GL_MESA_ycbcr_texture;
extern GLLOADER_API glloader_GL_NVX_conditional_renderFUNC glloader_GL_NVX_conditional_render;
extern GLLOADER_API glloader_GL_NVX_gpu_memory_infoFUNC glloader_GL_NVX_gpu_memory_info;
extern GLLOADER_API glloader_GL_NV_bindless_multi_draw_indirectFUNC glloader_GL_NV_bindless_multi_draw_indirect;
extern GLLOADER_API glloader_GL_NV_bindless_multi_draw_indirect_countFUNC glloader_GL_NV_bindless_multi_draw_indirect_count;
extern GLLOADER_API glloader_GL_NV_bindless_textureFUNC glloader_GL_NV_bindless_texture;
extern GLLOADER_API glloader_GL_NV_blend_equation_advancedFUNC glloader_GL_NV_blend_equation_advanced;
extern GLLOADER_API glloader_GL_NV_blend_squareFUNC glloader_GL_NV_blend_square;
extern GLLOADER_API glloader_GL_NV_compute_program5FUNC glloader_GL_NV_compute_program5;
extern GLLOADER_API glloader_GL_NV_conditional_renderFUNC glloader_GL_NV_conditional_render;
extern GLLOADER_API glloader_GL_NV_conservative_rasterFUNC glloader_GL_NV_conservative_raster;
extern GLLOADER_API glloader_GL_NV_copy_depth_to_colorFUNC glloader_GL_NV_copy_depth_to_color;
extern GLLOADER_API glloader_GL_NV_copy_imageFUNC glloader_GL_NV_copy_image;
extern GLLOADER_API glloader_GL_NV_deep_texture3DFUNC glloader_GL_NV_deep_texture3D;
extern GLLOADER_API glloader_GL_NV_depth_buffer_floatFUNC glloader_GL_NV_depth_buffer_float;
extern GLLOADER_API glloader_GL_NV_depth_clampFUNC glloader_GL_NV_depth_clamp;
extern GLLOADER_API glloader_GL_NV_draw_textureFUNC glloader_GL_NV_draw_texture;
extern GLLOADER_API glloader_GL_NV_evaluatorsFUNC glloader_GL_NV_evaluators;
extern GLLOADER_API glloader_GL_NV_explicit_multisampleFUNC glloader_GL_NV_explicit_multisample;
extern GLLOADER_API glloader_GL_NV_fenceFUNC glloader_GL_NV_fence;
extern GLLOADER_API glloader_GL_NV_fill_rectangleFUNC glloader_GL_NV_fill_rectangle;
extern GLLOADER_API glloader_GL_NV_float_bufferFUNC glloader_GL_NV_float_buffer;
extern GLLOADER_API glloader_GL_NV_fog_distanceFUNC glloader_GL_NV_fog_distance;
extern GLLOADER_API glloader_GL_NV_fragment_coverage_to_colorFUNC glloader_GL_NV_fragment_coverage_to_color;
extern GLLOADER_API glloader_GL_NV_fragment_programFUNC glloader_GL_NV_fragment_program;
extern GLLOADER_API glloader_GL_NV_fragment_program2FUNC glloader_GL_NV_fragment_program2;
extern GLLOADER_API glloader_GL_NV_fragment_program4FUNC glloader_GL_NV_fragment_program4;
extern GLLOADER_API glloader_GL_NV_fragment_program_optionFUNC glloader_GL_NV_fragment_program_option;
extern GLLOADER_API glloader_GL_NV_fragment_shader_interlockFUNC glloader_GL_NV_fragment_shader_interlock;
extern GLLOADER_API glloader_GL_NV_framebuffer_mixed_samplesFUNC glloader_GL_NV_framebuffer_mixed_samples;
extern GLLOADER_API glloader_GL_NV_framebuffer_multisample_coverageFUNC glloader_GL_NV_framebuffer_multisample_coverage;
extern GLLOADER_API glloader_GL_NV_geometry_program4FUNC glloader_GL_NV_geometry_program4;
extern GLLOADER_API glloader_GL_NV_geometry_shader4FUNC glloader_GL_NV_geometry_shader4;
extern GLLOADER_API glloader_GL_NV_geometry_shader_passthroughFUNC glloader_GL_NV_geometry_shader_passthrough;
extern GLLOADER_API glloader_GL_NV_gpu_program4FUNC glloader_GL_NV_gpu_program4;
extern GLLOADER_API glloader_GL_NV_gpu_program5FUNC glloader_GL_NV_gpu_program5;
extern GLLOADER_API glloader_GL_NV_gpu_program5_mem_extendedFUNC glloader_GL_NV_gpu_program5_mem_extended;
extern GLLOADER_API glloader_GL_NV_gpu_shader5FUNC glloader_GL_NV_gpu_shader5;
extern GLLOADER_API glloader_GL_NV_half_floatFUNC glloader_GL_NV_half_float;
extern GLLOADER_API glloader_GL_NV_internalformat_sample_queryFUNC glloader_GL_NV_internalformat_sample_query;
extern GLLOADER_API glloader_GL_NV_light_max_exponentFUNC glloader_GL_NV_light_max_exponent;
extern GLLOADER_API glloader_GL_NV_multisample_coverageFUNC glloader_GL_NV_multisample_coverage;
extern GLLOADER_API glloader_GL_NV_multisample_filter_hintFUNC glloader_GL_NV_multisample_filter_hint;
extern GLLOADER_API glloader_GL_NV_occlusion_queryFUNC glloader_GL_NV_occlusion_query;
extern GLLOADER_API glloader_GL_NV_packed_depth_stencilFUNC glloader_GL_NV_packed_depth_stencil;
extern GLLOADER_API glloader_GL_NV_parameter_buffer_objectFUNC glloader_GL_NV_parameter_buffer_object;
extern GLLOADER_API glloader_GL_NV_parameter_buffer_object2FUNC glloader_GL_NV_parameter_buffer_object2;
extern GLLOADER_API glloader_GL_NV_path_renderingFUNC glloader_GL_NV_path_rendering;
extern GLLOADER_API glloader_GL_NV_path_rendering_shared_edgeFUNC glloader_GL_NV_path_rendering_shared_edge;
extern GLLOADER_API glloader_GL_NV_pixel_data_rangeFUNC glloader_GL_NV_pixel_data_range;
extern GLLOADER_API glloader_GL_NV_point_spriteFUNC glloader_GL_NV_point_sprite;
extern GLLOADER_API glloader_GL_NV_present_videoFUNC glloader_GL_NV_present_video;
extern GLLOADER_API glloader_GL_NV_primitive_restartFUNC glloader_GL_NV_primitive_restart;
extern GLLOADER_API glloader_GL_NV_register_combinersFUNC glloader_GL_NV_register_combiners;
extern GLLOADER_API glloader_GL_NV_register_combiners2FUNC glloader_GL_NV_register_combiners2;
extern GLLOADER_API glloader_GL_NV_sample_locationsFUNC glloader_GL_NV_sample_locations;
extern GLLOADER_API glloader_GL_NV_sample_mask_override_coverageFUNC glloader_GL_NV_sample_mask_override_coverage;
extern GLLOADER_API glloader_GL_NV_shader_atomic_countersFUNC glloader_GL_NV_shader_atomic_counters;
extern GLLOADER_API glloader_GL_NV_shader_atomic_floatFUNC glloader_GL_NV_shader_atomic_float;
extern GLLOADER_API glloader_GL_NV_shader_atomic_fp16_vectorFUNC glloader_GL_NV_shader_atomic_fp16_vector;
extern GLLOADER_API glloader_GL_NV_shader_atomic_int64FUNC glloader_GL_NV_shader_atomic_int64;
extern GLLOADER_API glloader_GL_NV_shader_buffer_loadFUNC glloader_GL_NV_shader_buffer_load;
extern GLLOADER_API glloader_GL_NV_shader_buffer_storeFUNC glloader_GL_NV_shader_buffer_store;
extern GLLOADER_API glloader_GL_NV_shader_storage_buffer_objectFUNC glloader_GL_NV_shader_storage_buffer_object;
extern GLLOADER_API glloader_GL_NV_shader_thread_groupFUNC glloader_GL_NV_shader_thread_group;
extern GLLOADER_API glloader_GL_NV_shader_thread_shuffleFUNC glloader_GL_NV_shader_thread_shuffle;
extern GLLOADER_API glloader_GL_NV_tessellation_program5FUNC glloader_GL_NV_tessellation_program5;
extern GLLOADER_API glloader_GL_NV_texgen_embossFUNC glloader_GL_NV_texgen_emboss;
extern GLLOADER_API glloader_GL_NV_texgen_reflectionFUNC glloader_GL_NV_texgen_reflection;
extern GLLOADER_API glloader_GL_NV_texture_barrierFUNC glloader_GL_NV_texture_barrier;
extern GLLOADER_API glloader_GL_NV_texture_compression_vtcFUNC glloader_GL_NV_texture_compression_vtc;
extern GLLOADER_API glloader_GL_NV_texture_env_combine4FUNC glloader_GL_NV_texture_env_combine4;
extern GLLOADER_API glloader_GL_NV_texture_expand_normalFUNC glloader_GL_NV_texture_expand_normal;
extern GLLOADER_API glloader_GL_NV_texture_multisampleFUNC glloader_GL_NV_texture_multisample;
extern GLLOADER_API glloader_GL_NV_texture_rectangleFUNC glloader_GL_NV_texture_rectangle;
extern GLLOADER_API glloader_GL_NV_texture_shaderFUNC glloader_GL_NV_texture_shader;
extern GLLOADER_API glloader_GL_NV_texture_shader2FUNC glloader_GL_NV_texture_shader2;
extern GLLOADER_API glloader_GL_NV_texture_shader3FUNC glloader_GL_NV_texture_shader3;
extern GLLOADER_API glloader_GL_NV_transform_feedbackFUNC glloader_GL_NV_transform_feedback;
extern GLLOADER_API glloader_GL_NV_transform_feedback2FUNC glloader_GL_NV_transform_feedback2;
extern GLLOADER_API glloader_GL_NV_uniform_buffer_unified_memoryFUNC glloader_GL_NV_uniform_buffer_unified_memory;
extern GLLOADER_API glloader_GL_NV_vdpau_interopFUNC glloader_GL_NV_vdpau_interop;
extern GLLOADER_API glloader_GL_NV_vertex_array_rangeFUNC glloader_GL_NV_vertex_array_range;
extern GLLOADER_API glloader_GL_NV_vertex_array_range2FUNC glloader_GL_NV_vertex_array_range2;
extern GLLOADER_API glloader_GL_NV_vertex_attrib_integer_64bitFUNC glloader_GL_NV_vertex_attrib_integer_64bit;
extern GLLOADER_API glloader_GL_NV_vertex_buffer_unified_memoryFUNC glloader_GL_NV_vertex_buffer_unified_memory;
extern GLLOADER_API glloader_GL_NV_vertex_programFUNC glloader_GL_NV_vertex_program;
extern GLLOADER_API glloader_GL_NV_vertex_program1_1FUNC glloader_GL_NV_vertex_program1_1;
extern GLLOADER_API glloader_GL_NV_vertex_program2FUNC glloader_GL_NV_vertex_program2;
extern GLLOADER_API glloader_GL_NV_vertex_program2_optionFUNC glloader_GL_NV_vertex_program2_option;
extern GLLOADER_API glloader_GL_NV_vertex_program3FUNC glloader_GL_NV_vertex_program3;
extern GLLOADER_API glloader_GL_NV_vertex_program4FUNC glloader_GL_NV_vertex_program4;
extern GLLOADER_API glloader_GL_NV_video_captureFUNC glloader_GL_NV_video_capture;
extern GLLOADER_API glloader_GL_NV_viewport_array2FUNC glloader_GL_NV_viewport_array2;
extern GLLOADER_API glloader_GL_OES_read_formatFUNC glloader_GL_OES_read_format;
extern GLLOADER_API glloader_GL_OML_interlaceFUNC glloader_GL_OML_interlace;
extern GLLOADER_API glloader_GL_OML_resampleFUNC glloader_GL_OML_resample;
extern GLLOADER_API glloader_GL_OML_subsampleFUNC glloader_GL_OML_subsample;
extern GLLOADER_API glloader_GL_OVR_multiviewFUNC glloader_GL_OVR_multiview;
extern GLLOADER_API glloader_GL_OVR_multiview2FUNC glloader_GL_OVR_multiview2;
extern GLLOADER_API glloader_GL_PGI_misc_hintsFUNC glloader_GL_PGI_misc_hints;
extern GLLOADER_API glloader_GL_PGI_vertex_hintsFUNC glloader_GL_PGI_vertex_hints;
extern GLLOADER_API glloader_GL_REND_screen_coordinatesFUNC glloader_GL_REND_screen_coordinates;
extern GLLOADER_API glloader_GL_S3_s3tcFUNC glloader_GL_S3_s3tc;
extern GLLOADER_API glloader_GL_SGIS_detail_textureFUNC glloader_GL_SGIS_detail_texture;
extern GLLOADER_API glloader_GL_SGIS_fog_functionFUNC glloader_GL_SGIS_fog_function;
extern GLLOADER_API glloader_GL_SGIS_generate_mipmapFUNC glloader_GL_SGIS_generate_mipmap;
extern GLLOADER_API glloader_GL_SGIS_multisampleFUNC glloader_GL_SGIS_multisample;
extern GLLOADER_API glloader_GL_SGIS_pixel_textureFUNC glloader_GL_SGIS_pixel_texture;
extern GLLOADER_API glloader_GL_SGIS_point_line_texgenFUNC glloader_GL_SGIS_point_line_texgen;
extern GLLOADER_API glloader_GL_SGIS_point_parametersFUNC glloader_GL_SGIS_point_parameters;
extern GLLOADER_API glloader_GL_SGIS_sharpen_textureFUNC glloader_GL_SGIS_sharpen_texture;
extern GLLOADER_API glloader_GL_SGIS_texture4DFUNC glloader_GL_SGIS_texture4D;
extern GLLOADER_API glloader_GL_SGIS_texture_border_clampFUNC glloader_GL_SGIS_texture_border_clamp;
extern GLLOADER_API glloader_GL_SGIS_texture_color_maskFUNC glloader_GL_SGIS_texture_color_mask;
extern GLLOADER_API glloader_GL_SGIS_texture_edge_clampFUNC glloader_GL_SGIS_texture_edge_clamp;
extern GLLOADER_API glloader_GL_SGIS_texture_filter4FUNC glloader_GL_SGIS_texture_filter4;
extern GLLOADER_API glloader_GL_SGIS_texture_lodFUNC glloader_GL_SGIS_texture_lod;
extern GLLOADER_API glloader_GL_SGIS_texture_selectFUNC glloader_GL_SGIS_texture_select;
extern GLLOADER_API glloader_GL_SGIX_asyncFUNC glloader_GL_SGIX_async;
extern GLLOADER_API glloader_GL_SGIX_async_histogramFUNC glloader_GL_SGIX_async_histogram;
extern GLLOADER_API glloader_GL_SGIX_async_pixelFUNC glloader_GL_SGIX_async_pixel;
extern GLLOADER_API glloader_GL_SGIX_blend_alpha_minmaxFUNC glloader_GL_SGIX_blend_alpha_minmax;
extern GLLOADER_API glloader_GL_SGIX_calligraphic_fragmentFUNC glloader_GL_SGIX_calligraphic_fragment;
extern GLLOADER_API glloader_GL_SGIX_clipmapFUNC glloader_GL_SGIX_clipmap;
extern GLLOADER_API glloader_GL_SGIX_convolution_accuracyFUNC glloader_GL_SGIX_convolution_accuracy;
extern GLLOADER_API glloader_GL_SGIX_depth_pass_instrumentFUNC glloader_GL_SGIX_depth_pass_instrument;
extern GLLOADER_API glloader_GL_SGIX_depth_textureFUNC glloader_GL_SGIX_depth_texture;
extern GLLOADER_API glloader_GL_SGIX_flush_rasterFUNC glloader_GL_SGIX_flush_raster;
extern GLLOADER_API glloader_GL_SGIX_fog_offsetFUNC glloader_GL_SGIX_fog_offset;
extern GLLOADER_API glloader_GL_SGIX_fog_scaleFUNC glloader_GL_SGIX_fog_scale;
extern GLLOADER_API glloader_GL_SGIX_fragment_lightingFUNC glloader_GL_SGIX_fragment_lighting;
extern GLLOADER_API glloader_GL_SGIX_framezoomFUNC glloader_GL_SGIX_framezoom;
extern GLLOADER_API glloader_GL_SGIX_igloo_interfaceFUNC glloader_GL_SGIX_igloo_interface;
extern GLLOADER_API glloader_GL_SGIX_impact_pixel_textureFUNC glloader_GL_SGIX_impact_pixel_texture;
extern GLLOADER_API glloader_GL_SGIX_instrumentsFUNC glloader_GL_SGIX_instruments;
extern GLLOADER_API glloader_GL_SGIX_interlaceFUNC glloader_GL_SGIX_interlace;
extern GLLOADER_API glloader_GL_SGIX_ir_instrument1FUNC glloader_GL_SGIX_ir_instrument1;
extern GLLOADER_API glloader_GL_SGIX_list_priorityFUNC glloader_GL_SGIX_list_priority;
extern GLLOADER_API glloader_GL_SGIX_pixel_textureFUNC glloader_GL_SGIX_pixel_texture;
extern GLLOADER_API glloader_GL_SGIX_pixel_tilesFUNC glloader_GL_SGIX_pixel_tiles;
extern GLLOADER_API glloader_GL_SGIX_polynomial_ffdFUNC glloader_GL_SGIX_polynomial_ffd;
extern GLLOADER_API glloader_GL_SGIX_reference_planeFUNC glloader_GL_SGIX_reference_plane;
extern GLLOADER_API glloader_GL_SGIX_resampleFUNC glloader_GL_SGIX_resample;
extern GLLOADER_API glloader_GL_SGIX_scalebias_hintFUNC glloader_GL_SGIX_scalebias_hint;
extern GLLOADER_API glloader_GL_SGIX_shadowFUNC glloader_GL_SGIX_shadow;
extern GLLOADER_API glloader_GL_SGIX_shadow_ambientFUNC glloader_GL_SGIX_shadow_ambient;
extern GLLOADER_API glloader_GL_SGIX_spriteFUNC glloader_GL_SGIX_sprite;
extern GLLOADER_API glloader_GL_SGIX_subsampleFUNC glloader_GL_SGIX_subsample;
extern GLLOADER_API glloader_GL_SGIX_tag_sample_bufferFUNC glloader_GL_SGIX_tag_sample_buffer;
extern GLLOADER_API glloader_GL_SGIX_texture_add_envFUNC glloader_GL_SGIX_texture_add_env;
extern GLLOADER_API glloader_GL_SGIX_texture_coordinate_clampFUNC glloader_GL_SGIX_texture_coordinate_clamp;
extern GLLOADER_API glloader_GL_SGIX_texture_lod_biasFUNC glloader_GL_SGIX_texture_lod_bias;
extern GLLOADER_API glloader_GL_SGIX_texture_multi_bufferFUNC glloader_GL_SGIX_texture_multi_buffer;
extern GLLOADER_API glloader_GL_SGIX_texture_rangeFUNC glloader_GL_SGIX_texture_range;
extern GLLOADER_API glloader_GL_SGIX_texture_scale_biasFUNC glloader_GL_SGIX_texture_scale_bias;
extern GLLOADER_API glloader_GL_SGIX_texture_selectFUNC glloader_GL_SGIX_texture_select;
extern GLLOADER_API glloader_GL_SGIX_vertex_preclipFUNC glloader_GL_SGIX_vertex_preclip;
extern GLLOADER_API glloader_GL_SGIX_ycrcbFUNC glloader_GL_SGIX_ycrcb;
extern GLLOADER_API glloader_GL_SGIX_ycrcbaFUNC glloader_GL_SGIX_ycrcba;
extern GLLOADER_API glloader_GL_SGIX_ycrcb_subsampleFUNC glloader_GL_SGIX_ycrcb_subsample;
extern GLLOADER_API glloader_GL_SGI_color_matrixFUNC glloader_GL_SGI_color_matrix;
extern GLLOADER_API glloader_GL_SGI_color_tableFUNC glloader_GL_SGI_color_table;
extern GLLOADER_API glloader_GL_SGI_depth_pass_instrumentFUNC glloader_GL_SGI_depth_pass_instrument;
extern GLLOADER_API glloader_GL_SGI_texture_color_tableFUNC glloader_GL_SGI_texture_color_table;
extern GLLOADER_API glloader_GL_SUNX_constant_dataFUNC glloader_GL_SUNX_constant_data;
extern GLLOADER_API glloader_GL_SUN_convolution_border_modesFUNC glloader_GL_SUN_convolution_border_modes;
extern GLLOADER_API glloader_GL_SUN_global_alphaFUNC glloader_GL_SUN_global_alpha;
extern GLLOADER_API glloader_GL_SUN_mesh_arrayFUNC glloader_GL_SUN_mesh_array;
extern GLLOADER_API glloader_GL_SUN_slice_accumFUNC glloader_GL_SUN_slice_accum;
extern GLLOADER_API glloader_GL_SUN_triangle_listFUNC glloader_GL_SUN_triangle_list;
extern GLLOADER_API glloader_GL_SUN_vertexFUNC glloader_GL_SUN_vertex;
extern GLLOADER_API glloader_GL_VERSION_1_0FUNC glloader_GL_VERSION_1_0;
extern GLLOADER_API glloader_GL_VERSION_1_1FUNC glloader_GL_VERSION_1_1;
extern GLLOADER_API glloader_GL_VERSION_1_2FUNC glloader_GL_VERSION_1_2;
extern GLLOADER_API glloader_GL_VERSION_1_3FUNC glloader_GL_VERSION_1_3;
extern GLLOADER_API glloader_GL_VERSION_1_4FUNC glloader_GL_VERSION_1_4;
extern GLLOADER_API glloader_GL_VERSION_1_5FUNC glloader_GL_VERSION_1_5;
extern GLLOADER_API glloader_GL_VERSION_2_0FUNC glloader_GL_VERSION_2_0;
extern GLLOADER_API glloader_GL_VERSION_2_1FUNC glloader_GL_VERSION_2_1;
extern GLLOADER_API glloader_GL_VERSION_3_0FUNC glloader_GL_VERSION_3_0;
extern GLLOADER_API glloader_GL_VERSION_3_1FUNC glloader_GL_VERSION_3_1;
extern GLLOADER_API glloader_GL_VERSION_3_2FUNC glloader_GL_VERSION_3_2;
extern GLLOADER_API glloader_GL_VERSION_3_3FUNC glloader_GL_VERSION_3_3;
extern GLLOADER_API glloader_GL_VERSION_4_0FUNC glloader_GL_VERSION_4_0;
extern GLLOADER_API glloader_GL_VERSION_4_1FUNC glloader_GL_VERSION_4_1;
extern GLLOADER_API glloader_GL_VERSION_4_2FUNC glloader_GL_VERSION_4_2;
extern GLLOADER_API glloader_GL_VERSION_4_3FUNC glloader_GL_VERSION_4_3;
extern GLLOADER_API glloader_GL_VERSION_4_4FUNC glloader_GL_VERSION_4_4;
extern GLLOADER_API glloader_GL_VERSION_4_5FUNC glloader_GL_VERSION_4_5;
extern GLLOADER_API glloader_GL_WIN_phong_shadingFUNC glloader_GL_WIN_phong_shading;
extern GLLOADER_API glloader_GL_WIN_specular_fogFUNC glloader_GL_WIN_specular_fog;

#ifdef __cplusplus
}
#endif

#endif		/* _GLLOADER_GL_H */
