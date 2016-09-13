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

#ifndef _GLLOADER_GLX_H
#define _GLLOADER_GLX_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef GLX_3DFX_multisample
#define GLX_3DFX_multisample 1
#endif

#ifndef GLX_AMD_gpu_association
#define GLX_AMD_gpu_association 1
#endif

#ifndef GLX_ARB_create_context
#define GLX_ARB_create_context 1
#endif

#ifndef GLX_ARB_create_context_profile
#define GLX_ARB_create_context_profile 1
#endif

#ifndef GLX_ARB_create_context_robustness
#define GLX_ARB_create_context_robustness 1
#endif

#ifndef GLX_ARB_fbconfig_float
#define GLX_ARB_fbconfig_float 1
#endif

#ifndef GLX_ARB_framebuffer_sRGB
#define GLX_ARB_framebuffer_sRGB 1
#endif

#ifndef GLX_ARB_get_proc_address
#define GLX_ARB_get_proc_address 1
#endif

#ifndef GLX_ARB_multisample
#define GLX_ARB_multisample 1
#endif

#ifndef GLX_ARB_robustness_isolation
#define GLX_ARB_robustness_isolation 1
#endif

#ifndef GLX_EXT_buffer_age
#define GLX_EXT_buffer_age 1
#endif

#ifndef GLX_EXT_create_context_es2_profile
#define GLX_EXT_create_context_es2_profile 1
#endif

#ifndef GLX_EXT_fbconfig_packed_float
#define GLX_EXT_fbconfig_packed_float 1
#endif

#ifndef GLX_EXT_framebuffer_sRGB
#define GLX_EXT_framebuffer_sRGB 1
#endif

#ifndef GLX_EXT_import_context
#define GLX_EXT_import_context 1
#endif

#ifndef GLX_EXT_stereo_tree
#define GLX_EXT_stereo_tree 1
#endif

#ifndef GLX_EXT_swap_control
#define GLX_EXT_swap_control 1
#endif

#ifndef GLX_EXT_swap_control_tear
#define GLX_EXT_swap_control_tear 1
#endif

#ifndef GLX_EXT_texture_from_pixmap
#define GLX_EXT_texture_from_pixmap 1
#endif

#ifndef GLX_EXT_visual_info
#define GLX_EXT_visual_info 1
#endif

#ifndef GLX_EXT_visual_rating
#define GLX_EXT_visual_rating 1
#endif

#ifndef GLX_INTEL_swap_event
#define GLX_INTEL_swap_event 1
#endif

#ifndef GLX_MESA_agp_offset
#define GLX_MESA_agp_offset 1
#endif

#ifndef GLX_MESA_copy_sub_buffer
#define GLX_MESA_copy_sub_buffer 1
#endif

#ifndef GLX_MESA_pixmap_colormap
#define GLX_MESA_pixmap_colormap 1
#endif

#ifndef GLX_MESA_query_renderer
#define GLX_MESA_query_renderer 1
#endif

#ifndef GLX_MESA_release_buffers
#define GLX_MESA_release_buffers 1
#endif

#ifndef GLX_MESA_set_3dfx_mode
#define GLX_MESA_set_3dfx_mode 1
#endif

#ifndef GLX_NV_copy_buffer
#define GLX_NV_copy_buffer 1
#endif

#ifndef GLX_NV_copy_image
#define GLX_NV_copy_image 1
#endif

#ifndef GLX_NV_delay_before_swap
#define GLX_NV_delay_before_swap 1
#endif

#ifndef GLX_NV_float_buffer
#define GLX_NV_float_buffer 1
#endif

#ifndef GLX_NV_multisample_coverage
#define GLX_NV_multisample_coverage 1
#endif

#ifndef GLX_NV_present_video
#define GLX_NV_present_video 1
#endif

#ifndef GLX_NV_swap_group
#define GLX_NV_swap_group 1
#endif

#ifndef GLX_NV_video_capture
#define GLX_NV_video_capture 1
#endif

#ifndef GLX_NV_video_output
#define GLX_NV_video_output 1
#endif

#ifndef GLX_OML_swap_method
#define GLX_OML_swap_method 1
#endif

#ifndef GLX_OML_sync_control
#define GLX_OML_sync_control 1
#endif

#ifndef GLX_SGIS_blended_overlay
#define GLX_SGIS_blended_overlay 1
#endif

#ifndef GLX_SGIS_multisample
#define GLX_SGIS_multisample 1
#endif

#ifndef GLX_SGIS_shared_multisample
#define GLX_SGIS_shared_multisample 1
#endif

#ifndef GLX_SGIX_dmbuffer
#define GLX_SGIX_dmbuffer 1
#endif

#ifndef GLX_SGIX_fbconfig
#define GLX_SGIX_fbconfig 1
#endif

#ifndef GLX_SGIX_hyperpipe
#define GLX_SGIX_hyperpipe 1
#endif

#ifndef GLX_SGIX_pbuffer
#define GLX_SGIX_pbuffer 1
#endif

#ifndef GLX_SGIX_swap_barrier
#define GLX_SGIX_swap_barrier 1
#endif

#ifndef GLX_SGIX_swap_group
#define GLX_SGIX_swap_group 1
#endif

#ifndef GLX_SGIX_video_resize
#define GLX_SGIX_video_resize 1
#endif

#ifndef GLX_SGIX_video_source
#define GLX_SGIX_video_source 1
#endif

#ifndef GLX_SGIX_visual_select_group
#define GLX_SGIX_visual_select_group 1
#endif

#ifndef GLX_SGI_cushion
#define GLX_SGI_cushion 1
#endif

#ifndef GLX_SGI_make_current_read
#define GLX_SGI_make_current_read 1
#endif

#ifndef GLX_SGI_swap_control
#define GLX_SGI_swap_control 1
#endif

#ifndef GLX_SGI_video_sync
#define GLX_SGI_video_sync 1
#endif

#ifndef GLX_SUN_get_transparent_index
#define GLX_SUN_get_transparent_index 1
#endif

#ifndef GLX_VERSION_1_0
#define GLX_VERSION_1_0 1
#endif

#ifndef GLX_VERSION_1_1
#define GLX_VERSION_1_1 1
#endif

#ifndef GLX_VERSION_1_2
#define GLX_VERSION_1_2 1
#endif

#ifndef GLX_VERSION_1_3
#define GLX_VERSION_1_3 1
#endif

#ifndef GLX_VERSION_1_4
#define GLX_VERSION_1_4 1
#endif

#ifdef GLX_3DFX_multisample

#define GLX_SAMPLE_BUFFERS_3DFX 0x8050
#define GLX_SAMPLES_3DFX 0x8051

#endif

#ifdef GLX_AMD_gpu_association

#define GLX_GPU_VENDOR_AMD 0x1F00
#define GLX_GPU_RENDERER_STRING_AMD 0x1F01
#define GLX_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define GLX_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define GLX_GPU_RAM_AMD 0x21A3
#define GLX_GPU_CLOCK_AMD 0x21A4
#define GLX_GPU_NUM_PIPES_AMD 0x21A5
#define GLX_GPU_NUM_SIMD_AMD 0x21A6
#define GLX_GPU_NUM_RB_AMD 0x21A7
#define GLX_GPU_NUM_SPI_AMD 0x21A8

#endif

#ifdef GLX_ARB_create_context

#define GLX_CONTEXT_DEBUG_BIT_ARB 0x00000001
#define GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define GLX_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define GLX_CONTEXT_MINOR_VERSION_ARB 0x2092
#define GLX_CONTEXT_FLAGS_ARB 0x2094

#endif

#ifdef GLX_ARB_create_context_profile

#define GLX_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define GLX_CONTEXT_PROFILE_MASK_ARB 0x9126

#endif

#ifdef GLX_ARB_create_context_robustness

#define GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GLX_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GLX_NO_RESET_NOTIFICATION_ARB 0x8261

#endif

#ifdef GLX_ARB_fbconfig_float

#define GLX_RGBA_FLOAT_TYPE_ARB 0x20B9
#define GLX_RGBA_FLOAT_BIT_ARB 0x00000004

#endif

#ifdef GLX_ARB_framebuffer_sRGB

#define GLX_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20B2

#endif

#ifdef GLX_ARB_multisample

#define GLX_SAMPLE_BUFFERS_ARB 100000
#define GLX_SAMPLES_ARB 100001

#endif

#ifdef GLX_ARB_robustness_isolation

#define GLX_CONTEXT_RESET_ISOLATION_BIT_ARB 0x00000008

#endif

#ifdef GLX_EXT_buffer_age

#define GLX_BACK_BUFFER_AGE_EXT 0x20F4

#endif

#ifdef GLX_EXT_create_context_es2_profile

#define GLX_CONTEXT_ES2_PROFILE_BIT_EXT 0x00000004

#endif

#ifdef GLX_EXT_fbconfig_packed_float

#define GLX_RGBA_UNSIGNED_FLOAT_TYPE_EXT 0x20B1
#define GLX_RGBA_UNSIGNED_FLOAT_BIT_EXT 0x00000008

#endif

#ifdef GLX_EXT_framebuffer_sRGB

#define GLX_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20B2

#endif

#ifdef GLX_EXT_import_context

#define GLX_SHARE_CONTEXT_EXT 0x800A
#define GLX_VISUAL_ID_EXT 0x800B
#define GLX_SCREEN_EXT 0x800C

#endif

#ifdef GLX_EXT_stereo_tree

#define GLX_STEREO_TREE_EXT 0x20F5
#define GLX_STEREO_NOTIFY_MASK_EXT 0x00000001
#define GLX_STEREO_NOTIFY_EXT 0x00000000

#endif

#ifdef GLX_EXT_swap_control

#define GLX_SWAP_INTERVAL_EXT 0x20F1
#define GLX_MAX_SWAP_INTERVAL_EXT 0x20F2

#endif

#ifdef GLX_EXT_swap_control_tear

#define GLX_LATE_SWAPS_TEAR_EXT 0x20F3

#endif

#ifdef GLX_EXT_texture_from_pixmap

#define GLX_TEXTURE_1D_BIT_EXT 0x00000001
#define GLX_TEXTURE_2D_BIT_EXT 0x00000002
#define GLX_TEXTURE_RECTANGLE_BIT_EXT 0x00000004
#define GLX_BIND_TO_TEXTURE_RGB_EXT 0x20D0
#define GLX_BIND_TO_TEXTURE_RGBA_EXT 0x20D1
#define GLX_BIND_TO_MIPMAP_TEXTURE_EXT 0x20D2
#define GLX_BIND_TO_TEXTURE_TARGETS_EXT 0x20D3
#define GLX_Y_INVERTED_EXT 0x20D4
#define GLX_TEXTURE_FORMAT_EXT 0x20D5
#define GLX_TEXTURE_TARGET_EXT 0x20D6
#define GLX_MIPMAP_TEXTURE_EXT 0x20D7
#define GLX_TEXTURE_FORMAT_NONE_EXT 0x20D8
#define GLX_TEXTURE_FORMAT_RGB_EXT 0x20D9
#define GLX_TEXTURE_FORMAT_RGBA_EXT 0x20DA
#define GLX_TEXTURE_1D_EXT 0x20DB
#define GLX_TEXTURE_2D_EXT 0x20DC
#define GLX_TEXTURE_RECTANGLE_EXT 0x20DD
#define GLX_FRONT_LEFT_EXT 0x20DE
#define GLX_FRONT_RIGHT_EXT 0x20DF
#define GLX_BACK_LEFT_EXT 0x20E0
#define GLX_BACK_RIGHT_EXT 0x20E1
#define GLX_FRONT_EXT GLX_FRONT_LEFT_EXT
#define GLX_BACK_EXT GLX_BACK_LEFT_EXT
#define GLX_AUX0_EXT 0x20E2
#define GLX_AUX1_EXT 0x20E3
#define GLX_AUX2_EXT 0x20E4
#define GLX_AUX3_EXT 0x20E5
#define GLX_AUX4_EXT 0x20E6
#define GLX_AUX5_EXT 0x20E7
#define GLX_AUX6_EXT 0x20E8
#define GLX_AUX7_EXT 0x20E9
#define GLX_AUX8_EXT 0x20EA
#define GLX_AUX9_EXT 0x20EB

#endif

#ifdef GLX_EXT_visual_info

#define GLX_X_VISUAL_TYPE_EXT 0x22
#define GLX_TRANSPARENT_TYPE_EXT 0x23
#define GLX_TRANSPARENT_INDEX_VALUE_EXT 0x24
#define GLX_TRANSPARENT_RED_VALUE_EXT 0x25
#define GLX_TRANSPARENT_GREEN_VALUE_EXT 0x26
#define GLX_TRANSPARENT_BLUE_VALUE_EXT 0x27
#define GLX_TRANSPARENT_ALPHA_VALUE_EXT 0x28
#define GLX_NONE_EXT 0x8000
#define GLX_TRUE_COLOR_EXT 0x8002
#define GLX_DIRECT_COLOR_EXT 0x8003
#define GLX_PSEUDO_COLOR_EXT 0x8004
#define GLX_STATIC_COLOR_EXT 0x8005
#define GLX_GRAY_SCALE_EXT 0x8006
#define GLX_STATIC_GRAY_EXT 0x8007
#define GLX_TRANSPARENT_RGB_EXT 0x8008
#define GLX_TRANSPARENT_INDEX_EXT 0x8009

#endif

#ifdef GLX_EXT_visual_rating

#define GLX_VISUAL_CAVEAT_EXT 0x20
#define GLX_SLOW_VISUAL_EXT 0x8001
#define GLX_NON_CONFORMANT_VISUAL_EXT 0x800D

#endif

#ifdef GLX_INTEL_swap_event

#define GLX_BUFFER_SWAP_COMPLETE_INTEL_MASK 0x04000000
#define GLX_EXCHANGE_COMPLETE_INTEL 0x8180
#define GLX_COPY_COMPLETE_INTEL 0x8181
#define GLX_FLIP_COMPLETE_INTEL 0x8182

#endif

#ifdef GLX_MESA_query_renderer

#define GLX_RENDERER_VENDOR_ID_MESA 0x8183
#define GLX_RENDERER_DEVICE_ID_MESA 0x8184
#define GLX_RENDERER_VERSION_MESA 0x8185
#define GLX_RENDERER_ACCELERATED_MESA 0x8186
#define GLX_RENDERER_VIDEO_MEMORY_MESA 0x8187
#define GLX_RENDERER_UNIFIED_MEMORY_ARCHITECTURE_MESA 0x8188
#define GLX_RENDERER_PREFERRED_PROFILE_MESA 0x8189
#define GLX_RENDERER_OPENGL_CORE_PROFILE_VERSION_MESA 0x818A
#define GLX_RENDERER_OPENGL_COMPATIBILITY_PROFILE_VERSION_MESA 0x818B
#define GLX_RENDERER_OPENGL_ES_PROFILE_VERSION_MESA 0x818C
#define GLX_RENDERER_OPENGL_ES2_PROFILE_VERSION_MESA 0x818D
#define GLX_RENDERER_ID_MESA 0x818E

#endif

#ifdef GLX_MESA_set_3dfx_mode

#define GLX_3DFX_WINDOW_MODE_MESA 0x1
#define GLX_3DFX_FULLSCREEN_MODE_MESA 0x2

#endif

#ifdef GLX_NV_float_buffer

#define GLX_FLOAT_COMPONENTS_NV 0x20B0

#endif

#ifdef GLX_NV_multisample_coverage

#define GLX_COVERAGE_SAMPLES_NV 100001
#define GLX_COLOR_SAMPLES_NV 0x20B3

#endif

#ifdef GLX_NV_present_video

#define GLX_NUM_VIDEO_SLOTS_NV 0x20F0

#endif

#ifdef GLX_NV_video_capture

#define GLX_DEVICE_ID_NV 0x20CD
#define GLX_UNIQUE_ID_NV 0x20CE
#define GLX_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF

#endif

#ifdef GLX_NV_video_output

#define GLX_VIDEO_OUT_COLOR_NV 0x20C3
#define GLX_VIDEO_OUT_ALPHA_NV 0x20C4
#define GLX_VIDEO_OUT_DEPTH_NV 0x20C5
#define GLX_VIDEO_OUT_COLOR_AND_ALPHA_NV 0x20C6
#define GLX_VIDEO_OUT_COLOR_AND_DEPTH_NV 0x20C7
#define GLX_VIDEO_OUT_FRAME_NV 0x20C8
#define GLX_VIDEO_OUT_FIELD_1_NV 0x20C9
#define GLX_VIDEO_OUT_FIELD_2_NV 0x20CA
#define GLX_VIDEO_OUT_STACKED_FIELDS_1_2_NV 0x20CB
#define GLX_VIDEO_OUT_STACKED_FIELDS_2_1_NV 0x20CC

#endif

#ifdef GLX_OML_swap_method

#define GLX_SWAP_METHOD_OML 0x8060
#define GLX_SWAP_EXCHANGE_OML 0x8061
#define GLX_SWAP_COPY_OML 0x8062
#define GLX_SWAP_UNDEFINED_OML 0x8063

#endif

#ifdef GLX_SGIS_blended_overlay

#define GLX_BLENDED_RGBA_SGIS 0x8025

#endif

#ifdef GLX_SGIS_multisample

#define GLX_SAMPLE_BUFFERS_SGIS 100000
#define GLX_SAMPLES_SGIS 100001

#endif

#ifdef GLX_SGIS_shared_multisample

#define GLX_MULTISAMPLE_SUB_RECT_WIDTH_SGIS 0x8026
#define GLX_MULTISAMPLE_SUB_RECT_HEIGHT_SGIS 0x8027

#endif

#ifdef GLX_SGIX_dmbuffer

#ifdef _DM_BUFFER_H_

#define GLX_DIGITAL_MEDIA_PBUFFER_SGIX 0x8024

#endif

#endif

#ifdef GLX_SGIX_fbconfig

#define GLX_WINDOW_BIT_SGIX 0x00000001
#define GLX_PIXMAP_BIT_SGIX 0x00000002
#define GLX_RGBA_BIT_SGIX 0x00000001
#define GLX_COLOR_INDEX_BIT_SGIX 0x00000002
#define GLX_DRAWABLE_TYPE_SGIX 0x8010
#define GLX_RENDER_TYPE_SGIX 0x8011
#define GLX_X_RENDERABLE_SGIX 0x8012
#define GLX_FBCONFIG_ID_SGIX 0x8013
#define GLX_RGBA_TYPE_SGIX 0x8014
#define GLX_COLOR_INDEX_TYPE_SGIX 0x8015

#endif

#ifdef GLX_SGIX_hyperpipe

#define GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX 80
#define GLX_BAD_HYPERPIPE_CONFIG_SGIX 91
#define GLX_BAD_HYPERPIPE_SGIX 92
#define GLX_HYPERPIPE_DISPLAY_PIPE_SGIX 0x00000001
#define GLX_HYPERPIPE_RENDER_PIPE_SGIX 0x00000002
#define GLX_PIPE_RECT_SGIX 0x00000001
#define GLX_PIPE_RECT_LIMITS_SGIX 0x00000002
#define GLX_HYPERPIPE_STEREO_SGIX 0x00000003
#define GLX_HYPERPIPE_PIXEL_AVERAGE_SGIX 0x00000004
#define GLX_HYPERPIPE_ID_SGIX 0x8030

#endif

#ifdef GLX_SGIX_pbuffer

#define GLX_PBUFFER_BIT_SGIX 0x00000004
#define GLX_BUFFER_CLOBBER_MASK_SGIX 0x08000000
#define GLX_FRONT_LEFT_BUFFER_BIT_SGIX 0x00000001
#define GLX_FRONT_RIGHT_BUFFER_BIT_SGIX 0x00000002
#define GLX_BACK_LEFT_BUFFER_BIT_SGIX 0x00000004
#define GLX_BACK_RIGHT_BUFFER_BIT_SGIX 0x00000008
#define GLX_AUX_BUFFERS_BIT_SGIX 0x00000010
#define GLX_DEPTH_BUFFER_BIT_SGIX 0x00000020
#define GLX_STENCIL_BUFFER_BIT_SGIX 0x00000040
#define GLX_ACCUM_BUFFER_BIT_SGIX 0x00000080
#define GLX_SAMPLE_BUFFERS_BIT_SGIX 0x00000100
#define GLX_MAX_PBUFFER_WIDTH_SGIX 0x8016
#define GLX_MAX_PBUFFER_HEIGHT_SGIX 0x8017
#define GLX_MAX_PBUFFER_PIXELS_SGIX 0x8018
#define GLX_OPTIMAL_PBUFFER_WIDTH_SGIX 0x8019
#define GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX 0x801A
#define GLX_PRESERVED_CONTENTS_SGIX 0x801B
#define GLX_LARGEST_PBUFFER_SGIX 0x801C
#define GLX_WIDTH_SGIX 0x801D
#define GLX_HEIGHT_SGIX 0x801E
#define GLX_EVENT_MASK_SGIX 0x801F
#define GLX_DAMAGED_SGIX 0x8020
#define GLX_SAVED_SGIX 0x8021
#define GLX_WINDOW_SGIX 0x8022
#define GLX_PBUFFER_SGIX 0x8023

#endif

#ifdef GLX_SGIX_video_resize

#define GLX_SYNC_FRAME_SGIX 0x00000000
#define GLX_SYNC_SWAP_SGIX 0x00000001

#endif

#ifdef GLX_SGIX_visual_select_group

#define GLX_VISUAL_SELECT_GROUP_SGIX 0x8028

#endif

#ifdef GLX_VERSION_1_0

#define GLX_USE_GL 1
#define GLX_BUFFER_SIZE 2
#define GLX_LEVEL 3
#define GLX_RGBA 4
#define GLX_DOUBLEBUFFER 5
#define GLX_STEREO 6
#define GLX_AUX_BUFFERS 7
#define GLX_RED_SIZE 8
#define GLX_GREEN_SIZE 9
#define GLX_BLUE_SIZE 10
#define GLX_ALPHA_SIZE 11
#define GLX_DEPTH_SIZE 12
#define GLX_STENCIL_SIZE 13
#define GLX_ACCUM_RED_SIZE 14
#define GLX_ACCUM_GREEN_SIZE 15
#define GLX_ACCUM_BLUE_SIZE 16
#define GLX_ACCUM_ALPHA_SIZE 17
#define GLX_BAD_SCREEN 1
#define GLX_BAD_ATTRIBUTE 2
#define GLX_NO_EXTENSION 3
#define GLX_BAD_VISUAL 4
#define GLX_BAD_CONTEXT 5
#define GLX_BAD_VALUE 6
#define GLX_BAD_ENUM 7

#endif

#ifdef GLX_VERSION_1_1

#define GLX_VENDOR 0x1
#define GLX_VERSION 0x2
#define GLX_EXTENSIONS 0x3

#endif

#ifdef GLX_VERSION_1_3

#define GLX_WINDOW_BIT 0x00000001
#define GLX_PIXMAP_BIT 0x00000002
#define GLX_PBUFFER_BIT 0x00000004
#define GLX_RGBA_BIT 0x00000001
#define GLX_COLOR_INDEX_BIT 0x00000002
#define GLX_PBUFFER_CLOBBER_MASK 0x08000000
#define GLX_FRONT_LEFT_BUFFER_BIT 0x00000001
#define GLX_FRONT_RIGHT_BUFFER_BIT 0x00000002
#define GLX_BACK_LEFT_BUFFER_BIT 0x00000004
#define GLX_BACK_RIGHT_BUFFER_BIT 0x00000008
#define GLX_AUX_BUFFERS_BIT 0x00000010
#define GLX_DEPTH_BUFFER_BIT 0x00000020
#define GLX_STENCIL_BUFFER_BIT 0x00000040
#define GLX_ACCUM_BUFFER_BIT 0x00000080
#define GLX_CONFIG_CAVEAT 0x20
#define GLX_X_VISUAL_TYPE 0x22
#define GLX_TRANSPARENT_TYPE 0x23
#define GLX_TRANSPARENT_INDEX_VALUE 0x24
#define GLX_TRANSPARENT_RED_VALUE 0x25
#define GLX_TRANSPARENT_GREEN_VALUE 0x26
#define GLX_TRANSPARENT_BLUE_VALUE 0x27
#define GLX_TRANSPARENT_ALPHA_VALUE 0x28
#define GLX_DONT_CARE 0xFFFFFFFF
#define GLX_NONE 0x8000
#define GLX_SLOW_CONFIG 0x8001
#define GLX_TRUE_COLOR 0x8002
#define GLX_DIRECT_COLOR 0x8003
#define GLX_PSEUDO_COLOR 0x8004
#define GLX_STATIC_COLOR 0x8005
#define GLX_GRAY_SCALE 0x8006
#define GLX_STATIC_GRAY 0x8007
#define GLX_TRANSPARENT_RGB 0x8008
#define GLX_TRANSPARENT_INDEX 0x8009
#define GLX_VISUAL_ID 0x800B
#define GLX_SCREEN 0x800C
#define GLX_NON_CONFORMANT_CONFIG 0x800D
#define GLX_DRAWABLE_TYPE 0x8010
#define GLX_RENDER_TYPE 0x8011
#define GLX_X_RENDERABLE 0x8012
#define GLX_FBCONFIG_ID 0x8013
#define GLX_RGBA_TYPE 0x8014
#define GLX_COLOR_INDEX_TYPE 0x8015
#define GLX_MAX_PBUFFER_WIDTH 0x8016
#define GLX_MAX_PBUFFER_HEIGHT 0x8017
#define GLX_MAX_PBUFFER_PIXELS 0x8018
#define GLX_PRESERVED_CONTENTS 0x801B
#define GLX_LARGEST_PBUFFER 0x801C
#define GLX_WIDTH 0x801D
#define GLX_HEIGHT 0x801E
#define GLX_EVENT_MASK 0x801F
#define GLX_DAMAGED 0x8020
#define GLX_SAVED 0x8021
#define GLX_WINDOW 0x8022
#define GLX_PBUFFER 0x8023
#define GLX_PBUFFER_HEIGHT 0x8040
#define GLX_PBUFFER_WIDTH 0x8041

#endif

#ifdef GLX_VERSION_1_4

#define GLX_SAMPLE_BUFFERS 100000
#define GLX_SAMPLES 100001

#endif

#ifdef GLX_ARB_get_proc_address

typedef void (*__GLXextFuncPtr)(void);

#endif

#ifdef GLX_EXT_stereo_tree

typedef struct { int type; unsigned long serial; Bool send_event; Display* display; int extension; int evtype; GLXDrawable window; Bool stereo_tree; } GLXStereoNotifyEventEXT;

#endif

#ifdef GLX_NV_video_capture

typedef XID GLXVideoCaptureDeviceNV;

#endif

#ifdef GLX_NV_video_output

typedef unsigned int GLXVideoDeviceNV;

#endif

#ifdef GLX_SGIX_fbconfig

typedef XID GLXFBConfigIDSGIX;
typedef struct __GLXFBConfigRec* GLXFBConfigSGIX;

#endif

#ifdef GLX_SGIX_hyperpipe

typedef struct { char pipeName[GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX]; int networkId; } GLXHyperpipeNetworkSGIX;
typedef struct { char pipeName[GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX]; int channel; unsigned int participationType; int timeSlice; } GLXHyperpipeConfigSGIX;
typedef struct { char pipeName[GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX]; int srcXOrigin, srcYOrigin, srcWidth, srcHeight; int destXOrigin, destYOrigin, destWidth, destHeight; } GLXPipeRect;
typedef struct { char pipeName[GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX]; int XOrigin, YOrigin, maxHeight, maxWidth; } GLXPipeRectLimits;

#endif

#ifdef GLX_SGIX_pbuffer

typedef XID GLXPbufferSGIX;
typedef struct { int event_type; int draw_type; unsigned long serial; Bool send_event; Display* display; GLXDrawable drawable; unsigned int buffer_mask; unsigned int aux_buffer; int x, y; int width, height; int count; } GLXPbufferClobberEventSGIX;

#endif

#ifdef GLX_SGIX_video_source

#ifdef _VL_H

typedef XID GLXVideoSourceSGIX;

#endif

#endif

#ifdef GLX_VERSION_1_0

typedef XID GLXPixmap;
typedef struct __GLXcontextRec* GLXContext;

#endif

#ifdef GLX_VERSION_1_3

typedef XID GLXWindow;
typedef XID GLXPbuffer;
typedef XID GLXFBConfigID;
typedef struct __GLXFBConfigRec* GLXFBConfig;
typedef struct { int event_type; int draw_type; unsigned long serial; Bool send_event; Display* display; GLXDrawable drawable; unsigned int buffer_mask; unsigned int aux_buffer; int x, y; int width, height; int count; } GLXPbufferClobberEvent;

#endif

#ifdef GLX_ARB_create_context

typedef GLXContext (GLLOADER_APIENTRY *glXCreateContextAttribsARBFUNC)(Display* dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int* attrib_list);

extern GLLOADER_API glXCreateContextAttribsARBFUNC glXCreateContextAttribsARB;

#endif

#ifdef GLX_ARB_get_proc_address

typedef __GLXextFuncPtr (GLLOADER_APIENTRY *glXGetProcAddressARBFUNC)(const GLubyte* procName);

extern GLLOADER_API glXGetProcAddressARBFUNC glXGetProcAddressARB;

#endif

#ifdef GLX_EXT_import_context

typedef Display* (GLLOADER_APIENTRY *glXGetCurrentDisplayEXTFUNC)();
typedef int (GLLOADER_APIENTRY *glXQueryContextInfoEXTFUNC)(Display* dpy, GLXContext context, int attribute, int* value);
typedef GLXContextID (GLLOADER_APIENTRY *glXGetContextIDEXTFUNC)(const GLXContext context);
typedef GLXContext (GLLOADER_APIENTRY *glXImportContextEXTFUNC)(Display* dpy, GLXContextID contextID);
typedef void (GLLOADER_APIENTRY *glXFreeContextEXTFUNC)(Display* dpy, GLXContext context);

extern GLLOADER_API glXGetCurrentDisplayEXTFUNC glXGetCurrentDisplayEXT;
extern GLLOADER_API glXQueryContextInfoEXTFUNC glXQueryContextInfoEXT;
extern GLLOADER_API glXGetContextIDEXTFUNC glXGetContextIDEXT;
extern GLLOADER_API glXImportContextEXTFUNC glXImportContextEXT;
extern GLLOADER_API glXFreeContextEXTFUNC glXFreeContextEXT;

#endif

#ifdef GLX_EXT_swap_control

typedef void (GLLOADER_APIENTRY *glXSwapIntervalEXTFUNC)(Display* dpy, GLXDrawable drawable, int interval);

extern GLLOADER_API glXSwapIntervalEXTFUNC glXSwapIntervalEXT;

#endif

#ifdef GLX_EXT_texture_from_pixmap

typedef void (GLLOADER_APIENTRY *glXBindTexImageEXTFUNC)(Display* dpy, GLXDrawable drawable, int buffer, const int* attrib_list);
typedef void (GLLOADER_APIENTRY *glXReleaseTexImageEXTFUNC)(Display* dpy, GLXDrawable drawable, int buffer);

extern GLLOADER_API glXBindTexImageEXTFUNC glXBindTexImageEXT;
extern GLLOADER_API glXReleaseTexImageEXTFUNC glXReleaseTexImageEXT;

#endif

#ifdef GLX_MESA_agp_offset

typedef unsigned int (GLLOADER_APIENTRY *glXGetAGPOffsetMESAFUNC)(const void* pointer);

extern GLLOADER_API glXGetAGPOffsetMESAFUNC glXGetAGPOffsetMESA;

#endif

#ifdef GLX_MESA_copy_sub_buffer

typedef void (GLLOADER_APIENTRY *glXCopySubBufferMESAFUNC)(Display* dpy, GLXDrawable drawable, int x, int y, int width, int height);

extern GLLOADER_API glXCopySubBufferMESAFUNC glXCopySubBufferMESA;

#endif

#ifdef GLX_MESA_pixmap_colormap

typedef GLXPixmap (GLLOADER_APIENTRY *glXCreateGLXPixmapMESAFUNC)(Display* dpy, XVisualInfo* visual, Pixmap pixmap, Colormap cmap);

extern GLLOADER_API glXCreateGLXPixmapMESAFUNC glXCreateGLXPixmapMESA;

#endif

#ifdef GLX_MESA_query_renderer

typedef Bool (GLLOADER_APIENTRY *glXQueryRendererIntegerMESAFUNC)(Display* dpy, int screen, int renderer, int attribute, unsigned int* value);
typedef Bool (GLLOADER_APIENTRY *glXQueryCurrentRendererIntegerMESAFUNC)(int attribute, unsigned int* value);
typedef const char* (GLLOADER_APIENTRY *glXQueryRendererStringMESAFUNC)(Display* dpy, int screen, int renderer, int attribute);
typedef const char* (GLLOADER_APIENTRY *glXQueryCurrentRendererStringMESAFUNC)(int attribute);

extern GLLOADER_API glXQueryRendererIntegerMESAFUNC glXQueryRendererIntegerMESA;
extern GLLOADER_API glXQueryCurrentRendererIntegerMESAFUNC glXQueryCurrentRendererIntegerMESA;
extern GLLOADER_API glXQueryRendererStringMESAFUNC glXQueryRendererStringMESA;
extern GLLOADER_API glXQueryCurrentRendererStringMESAFUNC glXQueryCurrentRendererStringMESA;

#endif

#ifdef GLX_MESA_release_buffers

typedef Bool (GLLOADER_APIENTRY *glXReleaseBuffersMESAFUNC)(Display* dpy, GLXDrawable drawable);

extern GLLOADER_API glXReleaseBuffersMESAFUNC glXReleaseBuffersMESA;

#endif

#ifdef GLX_MESA_set_3dfx_mode

typedef Bool (GLLOADER_APIENTRY *glXSet3DfxModeMESAFUNC)(int mode);

extern GLLOADER_API glXSet3DfxModeMESAFUNC glXSet3DfxModeMESA;

#endif

#ifdef GLX_NV_copy_buffer

typedef void (GLLOADER_APIENTRY *glXCopyBufferSubDataNVFUNC)(Display* dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLLOADER_APIENTRY *glXNamedCopyBufferSubDataNVFUNC)(Display* dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);

extern GLLOADER_API glXCopyBufferSubDataNVFUNC glXCopyBufferSubDataNV;
extern GLLOADER_API glXNamedCopyBufferSubDataNVFUNC glXNamedCopyBufferSubDataNV;

#endif

#ifdef GLX_NV_copy_image

typedef void (GLLOADER_APIENTRY *glXCopyImageSubDataNVFUNC)(Display* dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

extern GLLOADER_API glXCopyImageSubDataNVFUNC glXCopyImageSubDataNV;

#endif

#ifdef GLX_NV_delay_before_swap

typedef Bool (GLLOADER_APIENTRY *glXDelayBeforeSwapNVFUNC)(Display* dpy, GLXDrawable drawable, GLfloat seconds);

extern GLLOADER_API glXDelayBeforeSwapNVFUNC glXDelayBeforeSwapNV;

#endif

#ifdef GLX_NV_present_video

typedef unsigned int* (GLLOADER_APIENTRY *glXEnumerateVideoDevicesNVFUNC)(Display* dpy, int screen, int* nelements);
typedef int (GLLOADER_APIENTRY *glXBindVideoDeviceNVFUNC)(Display* dpy, unsigned int video_slot, unsigned int video_device, const int* attrib_list);

extern GLLOADER_API glXEnumerateVideoDevicesNVFUNC glXEnumerateVideoDevicesNV;
extern GLLOADER_API glXBindVideoDeviceNVFUNC glXBindVideoDeviceNV;

#endif

#ifdef GLX_NV_swap_group

typedef Bool (GLLOADER_APIENTRY *glXJoinSwapGroupNVFUNC)(Display* dpy, GLXDrawable drawable, GLuint group);
typedef Bool (GLLOADER_APIENTRY *glXBindSwapBarrierNVFUNC)(Display* dpy, GLuint group, GLuint barrier);
typedef Bool (GLLOADER_APIENTRY *glXQuerySwapGroupNVFUNC)(Display* dpy, GLXDrawable drawable, GLuint* group, GLuint* barrier);
typedef Bool (GLLOADER_APIENTRY *glXQueryMaxSwapGroupsNVFUNC)(Display* dpy, int screen, GLuint* maxGroups, GLuint* maxBarriers);
typedef Bool (GLLOADER_APIENTRY *glXQueryFrameCountNVFUNC)(Display* dpy, int screen, GLuint* count);
typedef Bool (GLLOADER_APIENTRY *glXResetFrameCountNVFUNC)(Display* dpy, int screen);

extern GLLOADER_API glXJoinSwapGroupNVFUNC glXJoinSwapGroupNV;
extern GLLOADER_API glXBindSwapBarrierNVFUNC glXBindSwapBarrierNV;
extern GLLOADER_API glXQuerySwapGroupNVFUNC glXQuerySwapGroupNV;
extern GLLOADER_API glXQueryMaxSwapGroupsNVFUNC glXQueryMaxSwapGroupsNV;
extern GLLOADER_API glXQueryFrameCountNVFUNC glXQueryFrameCountNV;
extern GLLOADER_API glXResetFrameCountNVFUNC glXResetFrameCountNV;

#endif

#ifdef GLX_NV_video_capture

typedef int (GLLOADER_APIENTRY *glXBindVideoCaptureDeviceNVFUNC)(Display* dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
typedef GLXVideoCaptureDeviceNV* (GLLOADER_APIENTRY *glXEnumerateVideoCaptureDevicesNVFUNC)(Display* dpy, int screen, int* nelements);
typedef void (GLLOADER_APIENTRY *glXLockVideoCaptureDeviceNVFUNC)(Display* dpy, GLXVideoCaptureDeviceNV device);
typedef int (GLLOADER_APIENTRY *glXQueryVideoCaptureDeviceNVFUNC)(Display* dpy, GLXVideoCaptureDeviceNV device, int attribute, int* value);
typedef void (GLLOADER_APIENTRY *glXReleaseVideoCaptureDeviceNVFUNC)(Display* dpy, GLXVideoCaptureDeviceNV device);

extern GLLOADER_API glXBindVideoCaptureDeviceNVFUNC glXBindVideoCaptureDeviceNV;
extern GLLOADER_API glXEnumerateVideoCaptureDevicesNVFUNC glXEnumerateVideoCaptureDevicesNV;
extern GLLOADER_API glXLockVideoCaptureDeviceNVFUNC glXLockVideoCaptureDeviceNV;
extern GLLOADER_API glXQueryVideoCaptureDeviceNVFUNC glXQueryVideoCaptureDeviceNV;
extern GLLOADER_API glXReleaseVideoCaptureDeviceNVFUNC glXReleaseVideoCaptureDeviceNV;

#endif

#ifdef GLX_NV_video_output

typedef int (GLLOADER_APIENTRY *glXGetVideoDeviceNVFUNC)(Display* dpy, int screen, int numVideoDevices, GLXVideoDeviceNV* pVideoDevice);
typedef int (GLLOADER_APIENTRY *glXReleaseVideoDeviceNVFUNC)(Display* dpy, int screen, GLXVideoDeviceNV VideoDevice);
typedef int (GLLOADER_APIENTRY *glXBindVideoImageNVFUNC)(Display* dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
typedef int (GLLOADER_APIENTRY *glXReleaseVideoImageNVFUNC)(Display* dpy, GLXPbuffer pbuf);
typedef int (GLLOADER_APIENTRY *glXSendPbufferToVideoNVFUNC)(Display* dpy, GLXPbuffer pbuf, int iBufferType, unsigned long* pulCounterPbuffer, GLboolean bBlock);
typedef int (GLLOADER_APIENTRY *glXGetVideoInfoNVFUNC)(Display* dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long* pulCounterOutputPbuffer, unsigned long* pulCounterOutputVideo);

extern GLLOADER_API glXGetVideoDeviceNVFUNC glXGetVideoDeviceNV;
extern GLLOADER_API glXReleaseVideoDeviceNVFUNC glXReleaseVideoDeviceNV;
extern GLLOADER_API glXBindVideoImageNVFUNC glXBindVideoImageNV;
extern GLLOADER_API glXReleaseVideoImageNVFUNC glXReleaseVideoImageNV;
extern GLLOADER_API glXSendPbufferToVideoNVFUNC glXSendPbufferToVideoNV;
extern GLLOADER_API glXGetVideoInfoNVFUNC glXGetVideoInfoNV;

#endif

#ifdef GLX_OML_sync_control

typedef Bool (GLLOADER_APIENTRY *glXGetSyncValuesOMLFUNC)(Display* dpy, GLXDrawable drawable, int64_t* ust, int64_t* msc, int64_t* sbc);
typedef Bool (GLLOADER_APIENTRY *glXGetMscRateOMLFUNC)(Display* dpy, GLXDrawable drawable, int32_t* numerator, int32_t* denominator);
typedef int64_t (GLLOADER_APIENTRY *glXSwapBuffersMscOMLFUNC)(Display* dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
typedef Bool (GLLOADER_APIENTRY *glXWaitForMscOMLFUNC)(Display* dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t* ust, int64_t* msc, int64_t* sbc);
typedef Bool (GLLOADER_APIENTRY *glXWaitForSbcOMLFUNC)(Display* dpy, GLXDrawable drawable, int64_t target_sbc, int64_t* ust, int64_t* msc, int64_t* sbc);

extern GLLOADER_API glXGetSyncValuesOMLFUNC glXGetSyncValuesOML;
extern GLLOADER_API glXGetMscRateOMLFUNC glXGetMscRateOML;
extern GLLOADER_API glXSwapBuffersMscOMLFUNC glXSwapBuffersMscOML;
extern GLLOADER_API glXWaitForMscOMLFUNC glXWaitForMscOML;
extern GLLOADER_API glXWaitForSbcOMLFUNC glXWaitForSbcOML;

#endif

#ifdef GLX_SGIX_dmbuffer

#ifdef _DM_BUFFER_H_

typedef Bool (GLLOADER_APIENTRY *glXAssociateDMPbufferSGIXFUNC)(Display* dpy, GLXPbufferSGIX pbuffer, DMparams* params, DMbuffer dmbuffer);

extern GLLOADER_API glXAssociateDMPbufferSGIXFUNC glXAssociateDMPbufferSGIX;

#endif

#endif

#ifdef GLX_SGIX_fbconfig

typedef int (GLLOADER_APIENTRY *glXGetFBConfigAttribSGIXFUNC)(Display* dpy, GLXFBConfigSGIX config, int attribute, int* value);
typedef GLXFBConfigSGIX* (GLLOADER_APIENTRY *glXChooseFBConfigSGIXFUNC)(Display* dpy, int screen, int* attrib_list, int* nelements);
typedef GLXPixmap (GLLOADER_APIENTRY *glXCreateGLXPixmapWithConfigSGIXFUNC)(Display* dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef GLXContext (GLLOADER_APIENTRY *glXCreateContextWithConfigSGIXFUNC)(Display* dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
typedef XVisualInfo* (GLLOADER_APIENTRY *glXGetVisualFromFBConfigSGIXFUNC)(Display* dpy, GLXFBConfigSGIX config);
typedef GLXFBConfigSGIX (GLLOADER_APIENTRY *glXGetFBConfigFromVisualSGIXFUNC)(Display* dpy, XVisualInfo* vis);

extern GLLOADER_API glXGetFBConfigAttribSGIXFUNC glXGetFBConfigAttribSGIX;
extern GLLOADER_API glXChooseFBConfigSGIXFUNC glXChooseFBConfigSGIX;
extern GLLOADER_API glXCreateGLXPixmapWithConfigSGIXFUNC glXCreateGLXPixmapWithConfigSGIX;
extern GLLOADER_API glXCreateContextWithConfigSGIXFUNC glXCreateContextWithConfigSGIX;
extern GLLOADER_API glXGetVisualFromFBConfigSGIXFUNC glXGetVisualFromFBConfigSGIX;
extern GLLOADER_API glXGetFBConfigFromVisualSGIXFUNC glXGetFBConfigFromVisualSGIX;

#endif

#ifdef GLX_SGIX_hyperpipe

typedef GLXHyperpipeNetworkSGIX* (GLLOADER_APIENTRY *glXQueryHyperpipeNetworkSGIXFUNC)(Display* dpy, int* npipes);
typedef int (GLLOADER_APIENTRY *glXHyperpipeConfigSGIXFUNC)(Display* dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX* cfg, int* hpId);
typedef GLXHyperpipeConfigSGIX* (GLLOADER_APIENTRY *glXQueryHyperpipeConfigSGIXFUNC)(Display* dpy, int hpId, int* npipes);
typedef int (GLLOADER_APIENTRY *glXDestroyHyperpipeConfigSGIXFUNC)(Display* dpy, int hpId);
typedef int (GLLOADER_APIENTRY *glXBindHyperpipeSGIXFUNC)(Display* dpy, int hpId);
typedef int (GLLOADER_APIENTRY *glXQueryHyperpipeBestAttribSGIXFUNC)(Display* dpy, int timeSlice, int attrib, int size, void* attribList, void* returnAttribList);
typedef int (GLLOADER_APIENTRY *glXHyperpipeAttribSGIXFUNC)(Display* dpy, int timeSlice, int attrib, int size, void* attribList);
typedef int (GLLOADER_APIENTRY *glXQueryHyperpipeAttribSGIXFUNC)(Display* dpy, int timeSlice, int attrib, int size, void* returnAttribList);

extern GLLOADER_API glXQueryHyperpipeNetworkSGIXFUNC glXQueryHyperpipeNetworkSGIX;
extern GLLOADER_API glXHyperpipeConfigSGIXFUNC glXHyperpipeConfigSGIX;
extern GLLOADER_API glXQueryHyperpipeConfigSGIXFUNC glXQueryHyperpipeConfigSGIX;
extern GLLOADER_API glXDestroyHyperpipeConfigSGIXFUNC glXDestroyHyperpipeConfigSGIX;
extern GLLOADER_API glXBindHyperpipeSGIXFUNC glXBindHyperpipeSGIX;
extern GLLOADER_API glXQueryHyperpipeBestAttribSGIXFUNC glXQueryHyperpipeBestAttribSGIX;
extern GLLOADER_API glXHyperpipeAttribSGIXFUNC glXHyperpipeAttribSGIX;
extern GLLOADER_API glXQueryHyperpipeAttribSGIXFUNC glXQueryHyperpipeAttribSGIX;

#endif

#ifdef GLX_SGIX_pbuffer

typedef GLXPbufferSGIX (GLLOADER_APIENTRY *glXCreateGLXPbufferSGIXFUNC)(Display* dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int* attrib_list);
typedef void (GLLOADER_APIENTRY *glXDestroyGLXPbufferSGIXFUNC)(Display* dpy, GLXPbufferSGIX pbuf);
typedef int (GLLOADER_APIENTRY *glXQueryGLXPbufferSGIXFUNC)(Display* dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int* value);
typedef void (GLLOADER_APIENTRY *glXSelectEventSGIXFUNC)(Display* dpy, GLXDrawable drawable, unsigned long mask);
typedef void (GLLOADER_APIENTRY *glXGetSelectedEventSGIXFUNC)(Display* dpy, GLXDrawable drawable, unsigned long* mask);

extern GLLOADER_API glXCreateGLXPbufferSGIXFUNC glXCreateGLXPbufferSGIX;
extern GLLOADER_API glXDestroyGLXPbufferSGIXFUNC glXDestroyGLXPbufferSGIX;
extern GLLOADER_API glXQueryGLXPbufferSGIXFUNC glXQueryGLXPbufferSGIX;
extern GLLOADER_API glXSelectEventSGIXFUNC glXSelectEventSGIX;
extern GLLOADER_API glXGetSelectedEventSGIXFUNC glXGetSelectedEventSGIX;

#endif

#ifdef GLX_SGIX_swap_barrier

typedef void (GLLOADER_APIENTRY *glXBindSwapBarrierSGIXFUNC)(Display* dpy, GLXDrawable drawable, int barrier);
typedef Bool (GLLOADER_APIENTRY *glXQueryMaxSwapBarriersSGIXFUNC)(Display* dpy, int screen, int* max);

extern GLLOADER_API glXBindSwapBarrierSGIXFUNC glXBindSwapBarrierSGIX;
extern GLLOADER_API glXQueryMaxSwapBarriersSGIXFUNC glXQueryMaxSwapBarriersSGIX;

#endif

#ifdef GLX_SGIX_swap_group

typedef void (GLLOADER_APIENTRY *glXJoinSwapGroupSGIXFUNC)(Display* dpy, GLXDrawable drawable, GLXDrawable member);

extern GLLOADER_API glXJoinSwapGroupSGIXFUNC glXJoinSwapGroupSGIX;

#endif

#ifdef GLX_SGIX_video_resize

typedef int (GLLOADER_APIENTRY *glXBindChannelToWindowSGIXFUNC)(Display* display, int screen, int channel, Window window);
typedef int (GLLOADER_APIENTRY *glXChannelRectSGIXFUNC)(Display* display, int screen, int channel, int x, int y, int w, int h);
typedef int (GLLOADER_APIENTRY *glXQueryChannelRectSGIXFUNC)(Display* display, int screen, int channel, int* dx, int* dy, int* dw, int* dh);
typedef int (GLLOADER_APIENTRY *glXQueryChannelDeltasSGIXFUNC)(Display* display, int screen, int channel, int* x, int* y, int* w, int* h);
typedef int (GLLOADER_APIENTRY *glXChannelRectSyncSGIXFUNC)(Display* display, int screen, int channel, GLenum synctype);

extern GLLOADER_API glXBindChannelToWindowSGIXFUNC glXBindChannelToWindowSGIX;
extern GLLOADER_API glXChannelRectSGIXFUNC glXChannelRectSGIX;
extern GLLOADER_API glXQueryChannelRectSGIXFUNC glXQueryChannelRectSGIX;
extern GLLOADER_API glXQueryChannelDeltasSGIXFUNC glXQueryChannelDeltasSGIX;
extern GLLOADER_API glXChannelRectSyncSGIXFUNC glXChannelRectSyncSGIX;

#endif

#ifdef GLX_SGIX_video_source

#ifdef _VL_H

typedef GLXVideoSourceSGIX (GLLOADER_APIENTRY *glXCreateGLXVideoSourceSGIXFUNC)(Display* display, int screen, VLServer server, VLPath path, int nodeClass, VLNode drainNode);
typedef void (GLLOADER_APIENTRY *glXDestroyGLXVideoSourceSGIXFUNC)(Display* dpy, GLXVideoSourceSGIX glxvideosource);

extern GLLOADER_API glXCreateGLXVideoSourceSGIXFUNC glXCreateGLXVideoSourceSGIX;
extern GLLOADER_API glXDestroyGLXVideoSourceSGIXFUNC glXDestroyGLXVideoSourceSGIX;

#endif

#endif

#ifdef GLX_SGI_cushion

typedef void (GLLOADER_APIENTRY *glXCushionSGIFUNC)(Display* dpy, Window window, float cushion);

extern GLLOADER_API glXCushionSGIFUNC glXCushionSGI;

#endif

#ifdef GLX_SGI_make_current_read

typedef Bool (GLLOADER_APIENTRY *glXMakeCurrentReadSGIFUNC)(Display* dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable (GLLOADER_APIENTRY *glXGetCurrentReadDrawableSGIFUNC)();

extern GLLOADER_API glXMakeCurrentReadSGIFUNC glXMakeCurrentReadSGI;
extern GLLOADER_API glXGetCurrentReadDrawableSGIFUNC glXGetCurrentReadDrawableSGI;

#endif

#ifdef GLX_SGI_swap_control

typedef int (GLLOADER_APIENTRY *glXSwapIntervalSGIFUNC)(int interval);

extern GLLOADER_API glXSwapIntervalSGIFUNC glXSwapIntervalSGI;

#endif

#ifdef GLX_SGI_video_sync

typedef int (GLLOADER_APIENTRY *glXGetVideoSyncSGIFUNC)(unsigned int* count);
typedef int (GLLOADER_APIENTRY *glXWaitVideoSyncSGIFUNC)(int divisor, int remainder, unsigned int* count);

extern GLLOADER_API glXGetVideoSyncSGIFUNC glXGetVideoSyncSGI;
extern GLLOADER_API glXWaitVideoSyncSGIFUNC glXWaitVideoSyncSGI;

#endif

#ifdef GLX_SUN_get_transparent_index

typedef Status (GLLOADER_APIENTRY *glXGetTransparentIndexSUNFUNC)(Display* dpy, Window overlay, Window underlay, long* pTransparentIndex);

extern GLLOADER_API glXGetTransparentIndexSUNFUNC glXGetTransparentIndexSUN;

#endif

#ifdef GLX_VERSION_1_0

typedef Bool (GLLOADER_APIENTRY *glXQueryExtensionFUNC)(Display* dpy, int* errorBase, int* eventBase);
typedef Bool (GLLOADER_APIENTRY *glXQueryVersionFUNC)(Display* dpy, int* major, int* minor);
typedef int (GLLOADER_APIENTRY *glXGetConfigFUNC)(Display* dpy, XVisualInfo* vis, int attrib, int* value);
typedef XVisualInfo* (GLLOADER_APIENTRY *glXChooseVisualFUNC)(Display* dpy, int screen, int* attribList);
typedef GLXPixmap (GLLOADER_APIENTRY *glXCreateGLXPixmapFUNC)(Display* dpy, XVisualInfo* vis, Pixmap pixmap);
typedef void (GLLOADER_APIENTRY *glXDestroyGLXPixmapFUNC)(Display* dpy, GLXPixmap pix);
typedef GLXContext (GLLOADER_APIENTRY *glXCreateContextFUNC)(Display* dpy, XVisualInfo* vis, GLXContext shareList, Bool direct);
typedef void (GLLOADER_APIENTRY *glXDestroyContextFUNC)(Display* dpy, GLXContext ctx);
typedef Bool (GLLOADER_APIENTRY *glXIsDirectFUNC)(Display* dpy, GLXContext ctx);
typedef void (GLLOADER_APIENTRY *glXCopyContextFUNC)(Display* dpy, GLXContext src, GLXContext dst, GLuint mask);
typedef Bool (GLLOADER_APIENTRY *glXMakeCurrentFUNC)(Display* dpy, GLXDrawable drawable, GLXContext ctx);
typedef GLXContext (GLLOADER_APIENTRY *glXGetCurrentContextFUNC)();
typedef GLXDrawable (GLLOADER_APIENTRY *glXGetCurrentDrawableFUNC)();
typedef void (GLLOADER_APIENTRY *glXWaitGLFUNC)();
typedef void (GLLOADER_APIENTRY *glXWaitXFUNC)();
typedef void (GLLOADER_APIENTRY *glXSwapBuffersFUNC)(Display* dpy, GLXDrawable drawable);
typedef void (GLLOADER_APIENTRY *glXUseXFontFUNC)(Font font, int first, int count, int listBase);

extern GLLOADER_API glXQueryExtensionFUNC glXQueryExtension;
extern GLLOADER_API glXQueryVersionFUNC glXQueryVersion;
extern GLLOADER_API glXGetConfigFUNC glXGetConfig;
extern GLLOADER_API glXChooseVisualFUNC glXChooseVisual;
extern GLLOADER_API glXCreateGLXPixmapFUNC glXCreateGLXPixmap;
extern GLLOADER_API glXDestroyGLXPixmapFUNC glXDestroyGLXPixmap;
extern GLLOADER_API glXCreateContextFUNC glXCreateContext;
extern GLLOADER_API glXDestroyContextFUNC glXDestroyContext;
extern GLLOADER_API glXIsDirectFUNC glXIsDirect;
extern GLLOADER_API glXCopyContextFUNC glXCopyContext;
extern GLLOADER_API glXMakeCurrentFUNC glXMakeCurrent;
extern GLLOADER_API glXGetCurrentContextFUNC glXGetCurrentContext;
extern GLLOADER_API glXGetCurrentDrawableFUNC glXGetCurrentDrawable;
extern GLLOADER_API glXWaitGLFUNC glXWaitGL;
extern GLLOADER_API glXWaitXFUNC glXWaitX;
extern GLLOADER_API glXSwapBuffersFUNC glXSwapBuffers;
extern GLLOADER_API glXUseXFontFUNC glXUseXFont;

#endif

#ifdef GLX_VERSION_1_1

typedef const char* (GLLOADER_APIENTRY *glXQueryExtensionsStringFUNC)(Display* dpy, int screen);
typedef const char* (GLLOADER_APIENTRY *glXGetClientStringFUNC)(Display* dpy, int name);
typedef const char* (GLLOADER_APIENTRY *glXQueryServerStringFUNC)(Display* dpy, int screen, int name);

extern GLLOADER_API glXQueryExtensionsStringFUNC glXQueryExtensionsString;
extern GLLOADER_API glXGetClientStringFUNC glXGetClientString;
extern GLLOADER_API glXQueryServerStringFUNC glXQueryServerString;

#endif

#ifdef GLX_VERSION_1_2

typedef Display* (GLLOADER_APIENTRY *glXGetCurrentDisplayFUNC)();

extern GLLOADER_API glXGetCurrentDisplayFUNC glXGetCurrentDisplay;

#endif

#ifdef GLX_VERSION_1_3

typedef GLXFBConfig* (GLLOADER_APIENTRY *glXGetFBConfigsFUNC)(Display* dpy, int screen, int* nelements);
typedef GLXFBConfig* (GLLOADER_APIENTRY *glXChooseFBConfigFUNC)(Display* dpy, int screen, const int* attrib_list, int* nelements);
typedef int (GLLOADER_APIENTRY *glXGetFBConfigAttribFUNC)(Display* dpy, GLXFBConfig config, int attribute, int* value);
typedef XVisualInfo* (GLLOADER_APIENTRY *glXGetVisualFromFBConfigFUNC)(Display* dpy, GLXFBConfig config);
typedef GLXWindow (GLLOADER_APIENTRY *glXCreateWindowFUNC)(Display* dpy, GLXFBConfig config, Window win, const int* attrib_list);
typedef void (GLLOADER_APIENTRY *glXDestroyWindowFUNC)(Display* dpy, GLXWindow win);
typedef GLXPixmap (GLLOADER_APIENTRY *glXCreatePixmapFUNC)(Display* dpy, GLXFBConfig config, Pixmap pixmap, const int* attrib_list);
typedef void (GLLOADER_APIENTRY *glXDestroyPixmapFUNC)(Display* dpy, GLXPixmap pixmap);
typedef GLXPbuffer (GLLOADER_APIENTRY *glXCreatePbufferFUNC)(Display* dpy, GLXFBConfig config, const int* attrib_list);
typedef void (GLLOADER_APIENTRY *glXDestroyPbufferFUNC)(Display* dpy, GLXPbuffer pbuf);
typedef void (GLLOADER_APIENTRY *glXQueryDrawableFUNC)(Display* dpy, GLXDrawable draw, int attribute, unsigned int* value);
typedef GLXContext (GLLOADER_APIENTRY *glXCreateNewContextFUNC)(Display* dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef Bool (GLLOADER_APIENTRY *glXMakeContextCurrentFUNC)(Display* dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef GLXDrawable (GLLOADER_APIENTRY *glXGetCurrentReadDrawableFUNC)();
typedef int (GLLOADER_APIENTRY *glXQueryContextFUNC)(Display* dpy, GLXContext ctx, int attribute, int* value);
typedef void (GLLOADER_APIENTRY *glXSelectEventFUNC)(Display* dpy, GLXDrawable draw, unsigned long event_mask);
typedef void (GLLOADER_APIENTRY *glXGetSelectedEventFUNC)(Display* dpy, GLXDrawable draw, unsigned long* event_mask);

extern GLLOADER_API glXGetFBConfigsFUNC glXGetFBConfigs;
extern GLLOADER_API glXChooseFBConfigFUNC glXChooseFBConfig;
extern GLLOADER_API glXGetFBConfigAttribFUNC glXGetFBConfigAttrib;
extern GLLOADER_API glXGetVisualFromFBConfigFUNC glXGetVisualFromFBConfig;
extern GLLOADER_API glXCreateWindowFUNC glXCreateWindow;
extern GLLOADER_API glXDestroyWindowFUNC glXDestroyWindow;
extern GLLOADER_API glXCreatePixmapFUNC glXCreatePixmap;
extern GLLOADER_API glXDestroyPixmapFUNC glXDestroyPixmap;
extern GLLOADER_API glXCreatePbufferFUNC glXCreatePbuffer;
extern GLLOADER_API glXDestroyPbufferFUNC glXDestroyPbuffer;
extern GLLOADER_API glXQueryDrawableFUNC glXQueryDrawable;
extern GLLOADER_API glXCreateNewContextFUNC glXCreateNewContext;
extern GLLOADER_API glXMakeContextCurrentFUNC glXMakeContextCurrent;
extern GLLOADER_API glXGetCurrentReadDrawableFUNC glXGetCurrentReadDrawable;
extern GLLOADER_API glXQueryContextFUNC glXQueryContext;
extern GLLOADER_API glXSelectEventFUNC glXSelectEvent;
extern GLLOADER_API glXGetSelectedEventFUNC glXGetSelectedEvent;

#endif

#ifdef GLX_VERSION_1_4

typedef __GLXextFuncPtr (GLLOADER_APIENTRY *glXGetProcAddressFUNC)(const GLubyte* procName);

extern GLLOADER_API glXGetProcAddressFUNC glXGetProcAddress;

#endif

typedef char (GLLOADER_APIENTRY *glloader_GLX_3DFX_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_AMD_gpu_associationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_create_contextFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_create_context_profileFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_create_context_robustnessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_fbconfig_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_framebuffer_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_get_proc_addressFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_ARB_robustness_isolationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_buffer_ageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_create_context_es2_profileFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_fbconfig_packed_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_framebuffer_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_import_contextFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_stereo_treeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_swap_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_swap_control_tearFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_texture_from_pixmapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_visual_infoFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_EXT_visual_ratingFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_INTEL_swap_eventFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_MESA_agp_offsetFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_MESA_copy_sub_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_MESA_pixmap_colormapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_MESA_query_rendererFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_MESA_release_buffersFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_MESA_set_3dfx_modeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_copy_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_copy_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_delay_before_swapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_float_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_multisample_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_present_videoFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_swap_groupFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_video_captureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_NV_video_outputFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_OML_swap_methodFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_OML_sync_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIS_blended_overlayFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIS_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIS_shared_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_dmbufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_fbconfigFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_hyperpipeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_pbufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_swap_barrierFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_swap_groupFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_video_resizeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_video_sourceFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGIX_visual_select_groupFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGI_cushionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGI_make_current_readFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGI_swap_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SGI_video_syncFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_SUN_get_transparent_indexFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_VERSION_1_0FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_VERSION_1_1FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_VERSION_1_2FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_VERSION_1_3FUNC)();
typedef char (GLLOADER_APIENTRY *glloader_GLX_VERSION_1_4FUNC)();

extern GLLOADER_API glloader_GLX_3DFX_multisampleFUNC glloader_GLX_3DFX_multisample;
extern GLLOADER_API glloader_GLX_AMD_gpu_associationFUNC glloader_GLX_AMD_gpu_association;
extern GLLOADER_API glloader_GLX_ARB_create_contextFUNC glloader_GLX_ARB_create_context;
extern GLLOADER_API glloader_GLX_ARB_create_context_profileFUNC glloader_GLX_ARB_create_context_profile;
extern GLLOADER_API glloader_GLX_ARB_create_context_robustnessFUNC glloader_GLX_ARB_create_context_robustness;
extern GLLOADER_API glloader_GLX_ARB_fbconfig_floatFUNC glloader_GLX_ARB_fbconfig_float;
extern GLLOADER_API glloader_GLX_ARB_framebuffer_sRGBFUNC glloader_GLX_ARB_framebuffer_sRGB;
extern GLLOADER_API glloader_GLX_ARB_get_proc_addressFUNC glloader_GLX_ARB_get_proc_address;
extern GLLOADER_API glloader_GLX_ARB_multisampleFUNC glloader_GLX_ARB_multisample;
extern GLLOADER_API glloader_GLX_ARB_robustness_isolationFUNC glloader_GLX_ARB_robustness_isolation;
extern GLLOADER_API glloader_GLX_EXT_buffer_ageFUNC glloader_GLX_EXT_buffer_age;
extern GLLOADER_API glloader_GLX_EXT_create_context_es2_profileFUNC glloader_GLX_EXT_create_context_es2_profile;
extern GLLOADER_API glloader_GLX_EXT_fbconfig_packed_floatFUNC glloader_GLX_EXT_fbconfig_packed_float;
extern GLLOADER_API glloader_GLX_EXT_framebuffer_sRGBFUNC glloader_GLX_EXT_framebuffer_sRGB;
extern GLLOADER_API glloader_GLX_EXT_import_contextFUNC glloader_GLX_EXT_import_context;
extern GLLOADER_API glloader_GLX_EXT_stereo_treeFUNC glloader_GLX_EXT_stereo_tree;
extern GLLOADER_API glloader_GLX_EXT_swap_controlFUNC glloader_GLX_EXT_swap_control;
extern GLLOADER_API glloader_GLX_EXT_swap_control_tearFUNC glloader_GLX_EXT_swap_control_tear;
extern GLLOADER_API glloader_GLX_EXT_texture_from_pixmapFUNC glloader_GLX_EXT_texture_from_pixmap;
extern GLLOADER_API glloader_GLX_EXT_visual_infoFUNC glloader_GLX_EXT_visual_info;
extern GLLOADER_API glloader_GLX_EXT_visual_ratingFUNC glloader_GLX_EXT_visual_rating;
extern GLLOADER_API glloader_GLX_INTEL_swap_eventFUNC glloader_GLX_INTEL_swap_event;
extern GLLOADER_API glloader_GLX_MESA_agp_offsetFUNC glloader_GLX_MESA_agp_offset;
extern GLLOADER_API glloader_GLX_MESA_copy_sub_bufferFUNC glloader_GLX_MESA_copy_sub_buffer;
extern GLLOADER_API glloader_GLX_MESA_pixmap_colormapFUNC glloader_GLX_MESA_pixmap_colormap;
extern GLLOADER_API glloader_GLX_MESA_query_rendererFUNC glloader_GLX_MESA_query_renderer;
extern GLLOADER_API glloader_GLX_MESA_release_buffersFUNC glloader_GLX_MESA_release_buffers;
extern GLLOADER_API glloader_GLX_MESA_set_3dfx_modeFUNC glloader_GLX_MESA_set_3dfx_mode;
extern GLLOADER_API glloader_GLX_NV_copy_bufferFUNC glloader_GLX_NV_copy_buffer;
extern GLLOADER_API glloader_GLX_NV_copy_imageFUNC glloader_GLX_NV_copy_image;
extern GLLOADER_API glloader_GLX_NV_delay_before_swapFUNC glloader_GLX_NV_delay_before_swap;
extern GLLOADER_API glloader_GLX_NV_float_bufferFUNC glloader_GLX_NV_float_buffer;
extern GLLOADER_API glloader_GLX_NV_multisample_coverageFUNC glloader_GLX_NV_multisample_coverage;
extern GLLOADER_API glloader_GLX_NV_present_videoFUNC glloader_GLX_NV_present_video;
extern GLLOADER_API glloader_GLX_NV_swap_groupFUNC glloader_GLX_NV_swap_group;
extern GLLOADER_API glloader_GLX_NV_video_captureFUNC glloader_GLX_NV_video_capture;
extern GLLOADER_API glloader_GLX_NV_video_outputFUNC glloader_GLX_NV_video_output;
extern GLLOADER_API glloader_GLX_OML_swap_methodFUNC glloader_GLX_OML_swap_method;
extern GLLOADER_API glloader_GLX_OML_sync_controlFUNC glloader_GLX_OML_sync_control;
extern GLLOADER_API glloader_GLX_SGIS_blended_overlayFUNC glloader_GLX_SGIS_blended_overlay;
extern GLLOADER_API glloader_GLX_SGIS_multisampleFUNC glloader_GLX_SGIS_multisample;
extern GLLOADER_API glloader_GLX_SGIS_shared_multisampleFUNC glloader_GLX_SGIS_shared_multisample;
extern GLLOADER_API glloader_GLX_SGIX_dmbufferFUNC glloader_GLX_SGIX_dmbuffer;
extern GLLOADER_API glloader_GLX_SGIX_fbconfigFUNC glloader_GLX_SGIX_fbconfig;
extern GLLOADER_API glloader_GLX_SGIX_hyperpipeFUNC glloader_GLX_SGIX_hyperpipe;
extern GLLOADER_API glloader_GLX_SGIX_pbufferFUNC glloader_GLX_SGIX_pbuffer;
extern GLLOADER_API glloader_GLX_SGIX_swap_barrierFUNC glloader_GLX_SGIX_swap_barrier;
extern GLLOADER_API glloader_GLX_SGIX_swap_groupFUNC glloader_GLX_SGIX_swap_group;
extern GLLOADER_API glloader_GLX_SGIX_video_resizeFUNC glloader_GLX_SGIX_video_resize;
extern GLLOADER_API glloader_GLX_SGIX_video_sourceFUNC glloader_GLX_SGIX_video_source;
extern GLLOADER_API glloader_GLX_SGIX_visual_select_groupFUNC glloader_GLX_SGIX_visual_select_group;
extern GLLOADER_API glloader_GLX_SGI_cushionFUNC glloader_GLX_SGI_cushion;
extern GLLOADER_API glloader_GLX_SGI_make_current_readFUNC glloader_GLX_SGI_make_current_read;
extern GLLOADER_API glloader_GLX_SGI_swap_controlFUNC glloader_GLX_SGI_swap_control;
extern GLLOADER_API glloader_GLX_SGI_video_syncFUNC glloader_GLX_SGI_video_sync;
extern GLLOADER_API glloader_GLX_SUN_get_transparent_indexFUNC glloader_GLX_SUN_get_transparent_index;
extern GLLOADER_API glloader_GLX_VERSION_1_0FUNC glloader_GLX_VERSION_1_0;
extern GLLOADER_API glloader_GLX_VERSION_1_1FUNC glloader_GLX_VERSION_1_1;
extern GLLOADER_API glloader_GLX_VERSION_1_2FUNC glloader_GLX_VERSION_1_2;
extern GLLOADER_API glloader_GLX_VERSION_1_3FUNC glloader_GLX_VERSION_1_3;
extern GLLOADER_API glloader_GLX_VERSION_1_4FUNC glloader_GLX_VERSION_1_4;

#ifdef __cplusplus
}
#endif

#endif		/* _GLLOADER_GLX_H */
