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

#ifndef _GLLOADER_WGL_H
#define _GLLOADER_WGL_H

#ifdef __cplusplus
extern "C"
{
#endif

#ifndef WGL_3DFX_multisample
#define WGL_3DFX_multisample 1
#endif

#ifndef WGL_3DL_stereo_control
#define WGL_3DL_stereo_control 1
#endif

#ifndef WGL_AMD_gpu_association
#define WGL_AMD_gpu_association 1
#endif

#ifndef WGL_ARB_buffer_region
#define WGL_ARB_buffer_region 1
#endif

#ifndef WGL_ARB_create_context
#define WGL_ARB_create_context 1
#endif

#ifndef WGL_ARB_create_context_profile
#define WGL_ARB_create_context_profile 1
#endif

#ifndef WGL_ARB_create_context_robustness
#define WGL_ARB_create_context_robustness 1
#endif

#ifndef WGL_ARB_extensions_string
#define WGL_ARB_extensions_string 1
#endif

#ifndef WGL_ARB_framebuffer_sRGB
#define WGL_ARB_framebuffer_sRGB 1
#endif

#ifndef WGL_ARB_make_current_read
#define WGL_ARB_make_current_read 1
#endif

#ifndef WGL_ARB_multisample
#define WGL_ARB_multisample 1
#endif

#ifndef WGL_ARB_pbuffer
#define WGL_ARB_pbuffer 1
#endif

#ifndef WGL_ARB_pixel_format
#define WGL_ARB_pixel_format 1
#endif

#ifndef WGL_ARB_pixel_format_float
#define WGL_ARB_pixel_format_float 1
#endif

#ifndef WGL_ARB_render_texture
#define WGL_ARB_render_texture 1
#endif

#ifndef WGL_ARB_robustness_isolation
#define WGL_ARB_robustness_isolation 1
#endif

#ifndef WGL_ATI_pixel_format_float
#define WGL_ATI_pixel_format_float 1
#endif

#ifndef WGL_EXT_create_context_es2_profile
#define WGL_EXT_create_context_es2_profile 1
#endif

#ifndef WGL_EXT_depth_float
#define WGL_EXT_depth_float 1
#endif

#ifndef WGL_EXT_display_color_table
#define WGL_EXT_display_color_table 1
#endif

#ifndef WGL_EXT_extensions_string
#define WGL_EXT_extensions_string 1
#endif

#ifndef WGL_EXT_framebuffer_sRGB
#define WGL_EXT_framebuffer_sRGB 1
#endif

#ifndef WGL_EXT_make_current_read
#define WGL_EXT_make_current_read 1
#endif

#ifndef WGL_EXT_multisample
#define WGL_EXT_multisample 1
#endif

#ifndef WGL_EXT_pbuffer
#define WGL_EXT_pbuffer 1
#endif

#ifndef WGL_EXT_pixel_format
#define WGL_EXT_pixel_format 1
#endif

#ifndef WGL_EXT_pixel_format_packed_float
#define WGL_EXT_pixel_format_packed_float 1
#endif

#ifndef WGL_EXT_swap_control
#define WGL_EXT_swap_control 1
#endif

#ifndef WGL_EXT_swap_control_tear
#define WGL_EXT_swap_control_tear 1
#endif

#ifndef WGL_I3D_digital_video_control
#define WGL_I3D_digital_video_control 1
#endif

#ifndef WGL_I3D_gamma
#define WGL_I3D_gamma 1
#endif

#ifndef WGL_I3D_genlock
#define WGL_I3D_genlock 1
#endif

#ifndef WGL_I3D_image_buffer
#define WGL_I3D_image_buffer 1
#endif

#ifndef WGL_I3D_swap_frame_lock
#define WGL_I3D_swap_frame_lock 1
#endif

#ifndef WGL_I3D_swap_frame_usage
#define WGL_I3D_swap_frame_usage 1
#endif

#ifndef WGL_NV_copy_image
#define WGL_NV_copy_image 1
#endif

#ifndef WGL_NV_delay_before_swap
#define WGL_NV_delay_before_swap 1
#endif

#ifndef WGL_NV_DX_interop
#define WGL_NV_DX_interop 1
#endif

#ifndef WGL_NV_float_buffer
#define WGL_NV_float_buffer 1
#endif

#ifndef WGL_NV_gpu_affinity
#define WGL_NV_gpu_affinity 1
#endif

#ifndef WGL_NV_multisample_coverage
#define WGL_NV_multisample_coverage 1
#endif

#ifndef WGL_NV_present_video
#define WGL_NV_present_video 1
#endif

#ifndef WGL_NV_render_depth_texture
#define WGL_NV_render_depth_texture 1
#endif

#ifndef WGL_NV_render_texture_rectangle
#define WGL_NV_render_texture_rectangle 1
#endif

#ifndef WGL_NV_swap_group
#define WGL_NV_swap_group 1
#endif

#ifndef WGL_NV_vertex_array_range
#define WGL_NV_vertex_array_range 1
#endif

#ifndef WGL_NV_video_capture
#define WGL_NV_video_capture 1
#endif

#ifndef WGL_NV_video_output
#define WGL_NV_video_output 1
#endif

#ifndef WGL_OML_sync_control
#define WGL_OML_sync_control 1
#endif

#ifdef WGL_3DFX_multisample

#define WGL_SAMPLE_BUFFERS_3DFX 0x2060
#define WGL_SAMPLES_3DFX 0x2061

#endif

#ifdef WGL_3DL_stereo_control

#define WGL_STEREO_EMITTER_ENABLE_3DL 0x2055
#define WGL_STEREO_EMITTER_DISABLE_3DL 0x2056
#define WGL_STEREO_POLARITY_NORMAL_3DL 0x2057
#define WGL_STEREO_POLARITY_INVERT_3DL 0x2058

#endif

#ifdef WGL_AMD_gpu_association

#define WGL_GPU_VENDOR_AMD 0x1F00
#define WGL_GPU_RENDERER_STRING_AMD 0x1F01
#define WGL_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define WGL_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define WGL_GPU_RAM_AMD 0x21A3
#define WGL_GPU_CLOCK_AMD 0x21A4
#define WGL_GPU_NUM_PIPES_AMD 0x21A5
#define WGL_GPU_NUM_SIMD_AMD 0x21A6
#define WGL_GPU_NUM_RB_AMD 0x21A7
#define WGL_GPU_NUM_SPI_AMD 0x21A8

#endif

#ifdef WGL_ARB_buffer_region

#define WGL_FRONT_COLOR_BUFFER_BIT_ARB 0x00000001
#define WGL_BACK_COLOR_BUFFER_BIT_ARB 0x00000002
#define WGL_DEPTH_BUFFER_BIT_ARB 0x00000004
#define WGL_STENCIL_BUFFER_BIT_ARB 0x00000008

#endif

#ifdef WGL_ARB_create_context

#define WGL_CONTEXT_DEBUG_BIT_ARB 0x00000001
#define WGL_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define WGL_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define WGL_CONTEXT_MINOR_VERSION_ARB 0x2092
#define WGL_CONTEXT_LAYER_PLANE_ARB 0x2093
#define WGL_CONTEXT_FLAGS_ARB 0x2094
#define ERROR_INVALID_VERSION_ARB 0x2095

#endif

#ifdef WGL_ARB_create_context_profile

#define WGL_CONTEXT_PROFILE_MASK_ARB 0x9126
#define WGL_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define WGL_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define ERROR_INVALID_PROFILE_ARB 0x2096

#endif

#ifdef WGL_ARB_create_context_robustness

#define WGL_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define WGL_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define WGL_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define WGL_NO_RESET_NOTIFICATION_ARB 0x8261

#endif

#ifdef WGL_ARB_framebuffer_sRGB

#define WGL_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20A9

#endif

#ifdef WGL_ARB_make_current_read

#define ERROR_INVALID_PIXEL_TYPE_ARB 0x2043
#define ERROR_INCOMPATIBLE_DEVICE_CONTEXTS_ARB 0x2054

#endif

#ifdef WGL_ARB_multisample

#define WGL_SAMPLE_BUFFERS_ARB 0x2041
#define WGL_SAMPLES_ARB 0x2042

#endif

#ifdef WGL_ARB_pbuffer

#define WGL_DRAW_TO_PBUFFER_ARB 0x202D
#define WGL_MAX_PBUFFER_PIXELS_ARB 0x202E
#define WGL_MAX_PBUFFER_WIDTH_ARB 0x202F
#define WGL_MAX_PBUFFER_HEIGHT_ARB 0x2030
#define WGL_PBUFFER_LARGEST_ARB 0x2033
#define WGL_PBUFFER_WIDTH_ARB 0x2034
#define WGL_PBUFFER_HEIGHT_ARB 0x2035
#define WGL_PBUFFER_LOST_ARB 0x2036
#define WGL_TRANSPARENT_RED_VALUE_ARB 0x2037
#define WGL_TRANSPARENT_GREEN_VALUE_ARB 0x2038
#define WGL_TRANSPARENT_BLUE_VALUE_ARB 0x2039
#define WGL_TRANSPARENT_ALPHA_VALUE_ARB 0x203A
#define WGL_TRANSPARENT_INDEX_VALUE_ARB 0x203B

#endif

#ifdef WGL_ARB_pixel_format

#define WGL_NUMBER_PIXEL_FORMATS_ARB 0x2000
#define WGL_DRAW_TO_WINDOW_ARB 0x2001
#define WGL_DRAW_TO_BITMAP_ARB 0x2002
#define WGL_ACCELERATION_ARB 0x2003
#define WGL_NEED_PALETTE_ARB 0x2004
#define WGL_NEED_SYSTEM_PALETTE_ARB 0x2005
#define WGL_SWAP_LAYER_BUFFERS_ARB 0x2006
#define WGL_SWAP_METHOD_ARB 0x2007
#define WGL_NUMBER_OVERLAYS_ARB 0x2008
#define WGL_NUMBER_UNDERLAYS_ARB 0x2009
#define WGL_TRANSPARENT_ARB 0x200A
#define WGL_SHARE_DEPTH_ARB 0x200C
#define WGL_SHARE_STENCIL_ARB 0x200D
#define WGL_SHARE_ACCUM_ARB 0x200E
#define WGL_SUPPORT_GDI_ARB 0x200F
#define WGL_SUPPORT_OPENGL_ARB 0x2010
#define WGL_DOUBLE_BUFFER_ARB 0x2011
#define WGL_STEREO_ARB 0x2012
#define WGL_PIXEL_TYPE_ARB 0x2013
#define WGL_COLOR_BITS_ARB 0x2014
#define WGL_RED_BITS_ARB 0x2015
#define WGL_RED_SHIFT_ARB 0x2016
#define WGL_GREEN_BITS_ARB 0x2017
#define WGL_GREEN_SHIFT_ARB 0x2018
#define WGL_BLUE_BITS_ARB 0x2019
#define WGL_BLUE_SHIFT_ARB 0x201A
#define WGL_ALPHA_BITS_ARB 0x201B
#define WGL_ALPHA_SHIFT_ARB 0x201C
#define WGL_ACCUM_BITS_ARB 0x201D
#define WGL_ACCUM_RED_BITS_ARB 0x201E
#define WGL_ACCUM_GREEN_BITS_ARB 0x201F
#define WGL_ACCUM_BLUE_BITS_ARB 0x2020
#define WGL_ACCUM_ALPHA_BITS_ARB 0x2021
#define WGL_DEPTH_BITS_ARB 0x2022
#define WGL_STENCIL_BITS_ARB 0x2023
#define WGL_AUX_BUFFERS_ARB 0x2024
#define WGL_NO_ACCELERATION_ARB 0x2025
#define WGL_GENERIC_ACCELERATION_ARB 0x2026
#define WGL_FULL_ACCELERATION_ARB 0x2027
#define WGL_SWAP_EXCHANGE_ARB 0x2028
#define WGL_SWAP_COPY_ARB 0x2029
#define WGL_SWAP_UNDEFINED_ARB 0x202A
#define WGL_TYPE_RGBA_ARB 0x202B
#define WGL_TYPE_COLORINDEX_ARB 0x202C

#endif

#ifdef WGL_ARB_pixel_format_float

#define WGL_TYPE_RGBA_FLOAT_ARB 0x21A0

#endif

#ifdef WGL_ARB_render_texture

#define WGL_BIND_TO_TEXTURE_RGB_ARB 0x2070
#define WGL_BIND_TO_TEXTURE_RGBA_ARB 0x2071
#define WGL_TEXTURE_FORMAT_ARB 0x2072
#define WGL_TEXTURE_TARGET_ARB 0x2073
#define WGL_MIPMAP_TEXTURE_ARB 0x2074
#define WGL_TEXTURE_RGB_ARB 0x2075
#define WGL_TEXTURE_RGBA_ARB 0x2076
#define WGL_NO_TEXTURE_ARB 0x2077
#define WGL_TEXTURE_CUBE_MAP_ARB 0x2078
#define WGL_TEXTURE_1D_ARB 0x2079
#define WGL_TEXTURE_2D_ARB 0x207A
#define WGL_MIPMAP_LEVEL_ARB 0x207B
#define WGL_CUBE_MAP_FACE_ARB 0x207C
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_X_ARB 0x207D
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_X_ARB 0x207E
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Y_ARB 0x207F
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Y_ARB 0x2080
#define WGL_TEXTURE_CUBE_MAP_POSITIVE_Z_ARB 0x2081
#define WGL_TEXTURE_CUBE_MAP_NEGATIVE_Z_ARB 0x2082
#define WGL_FRONT_LEFT_ARB 0x2083
#define WGL_FRONT_RIGHT_ARB 0x2084
#define WGL_BACK_LEFT_ARB 0x2085
#define WGL_BACK_RIGHT_ARB 0x2086
#define WGL_AUX0_ARB 0x2087
#define WGL_AUX1_ARB 0x2088
#define WGL_AUX2_ARB 0x2089
#define WGL_AUX3_ARB 0x208A
#define WGL_AUX4_ARB 0x208B
#define WGL_AUX5_ARB 0x208C
#define WGL_AUX6_ARB 0x208D
#define WGL_AUX7_ARB 0x208E
#define WGL_AUX8_ARB 0x208F
#define WGL_AUX9_ARB 0x2090

#endif

#ifdef WGL_ARB_robustness_isolation

#define WGL_CONTEXT_RESET_ISOLATION_BIT_ARB 0x00000008

#endif

#ifdef WGL_ATI_pixel_format_float

#define WGL_TYPE_RGBA_FLOAT_ATI 0x21A0

#endif

#ifdef WGL_EXT_create_context_es2_profile

#define WGL_CONTEXT_ES2_PROFILE_BIT_EXT 0x00000004

#endif

#ifdef WGL_EXT_depth_float

#define WGL_DEPTH_FLOAT_EXT 0x2040

#endif

#ifdef WGL_EXT_framebuffer_sRGB

#define WGL_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20A9

#endif

#ifdef WGL_EXT_make_current_read

#define ERROR_INVALID_PIXEL_TYPE_EXT 0x2043

#endif

#ifdef WGL_EXT_multisample

#define WGL_SAMPLE_BUFFERS_EXT 0x2041
#define WGL_SAMPLES_EXT 0x2042

#endif

#ifdef WGL_EXT_pbuffer

#define WGL_DRAW_TO_PBUFFER_EXT 0x202D
#define WGL_MAX_PBUFFER_PIXELS_EXT 0x202E
#define WGL_MAX_PBUFFER_WIDTH_EXT 0x202F
#define WGL_MAX_PBUFFER_HEIGHT_EXT 0x2030
#define WGL_OPTIMAL_PBUFFER_WIDTH_EXT 0x2031
#define WGL_OPTIMAL_PBUFFER_HEIGHT_EXT 0x2032
#define WGL_PBUFFER_LARGEST_EXT 0x2033
#define WGL_PBUFFER_WIDTH_EXT 0x2034
#define WGL_PBUFFER_HEIGHT_EXT 0x2035

#endif

#ifdef WGL_EXT_pixel_format

#define WGL_NUMBER_PIXEL_FORMATS_EXT 0x2000
#define WGL_DRAW_TO_WINDOW_EXT 0x2001
#define WGL_DRAW_TO_BITMAP_EXT 0x2002
#define WGL_ACCELERATION_EXT 0x2003
#define WGL_NEED_PALETTE_EXT 0x2004
#define WGL_NEED_SYSTEM_PALETTE_EXT 0x2005
#define WGL_SWAP_LAYER_BUFFERS_EXT 0x2006
#define WGL_SWAP_METHOD_EXT 0x2007
#define WGL_NUMBER_OVERLAYS_EXT 0x2008
#define WGL_NUMBER_UNDERLAYS_EXT 0x2009
#define WGL_TRANSPARENT_EXT 0x200A
#define WGL_TRANSPARENT_VALUE_EXT 0x200B
#define WGL_SHARE_DEPTH_EXT 0x200C
#define WGL_SHARE_STENCIL_EXT 0x200D
#define WGL_SHARE_ACCUM_EXT 0x200E
#define WGL_SUPPORT_GDI_EXT 0x200F
#define WGL_SUPPORT_OPENGL_EXT 0x2010
#define WGL_DOUBLE_BUFFER_EXT 0x2011
#define WGL_STEREO_EXT 0x2012
#define WGL_PIXEL_TYPE_EXT 0x2013
#define WGL_COLOR_BITS_EXT 0x2014
#define WGL_RED_BITS_EXT 0x2015
#define WGL_RED_SHIFT_EXT 0x2016
#define WGL_GREEN_BITS_EXT 0x2017
#define WGL_GREEN_SHIFT_EXT 0x2018
#define WGL_BLUE_BITS_EXT 0x2019
#define WGL_BLUE_SHIFT_EXT 0x201A
#define WGL_ALPHA_BITS_EXT 0x201B
#define WGL_ALPHA_SHIFT_EXT 0x201C
#define WGL_ACCUM_BITS_EXT 0x201D
#define WGL_ACCUM_RED_BITS_EXT 0x201E
#define WGL_ACCUM_GREEN_BITS_EXT 0x201F
#define WGL_ACCUM_BLUE_BITS_EXT 0x2020
#define WGL_ACCUM_ALPHA_BITS_EXT 0x2021
#define WGL_DEPTH_BITS_EXT 0x2022
#define WGL_STENCIL_BITS_EXT 0x2023
#define WGL_AUX_BUFFERS_EXT 0x2024
#define WGL_NO_ACCELERATION_EXT 0x2025
#define WGL_GENERIC_ACCELERATION_EXT 0x2026
#define WGL_FULL_ACCELERATION_EXT 0x2027
#define WGL_SWAP_EXCHANGE_EXT 0x2028
#define WGL_SWAP_COPY_EXT 0x2029
#define WGL_SWAP_UNDEFINED_EXT 0x202A
#define WGL_TYPE_RGBA_EXT 0x202B
#define WGL_TYPE_COLORINDEX_EXT 0x202C

#endif

#ifdef WGL_EXT_pixel_format_packed_float

#define WGL_TYPE_RGBA_UNSIGNED_FLOAT_EXT 0x20A8

#endif

#ifdef WGL_I3D_digital_video_control

#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_FRAMEBUFFER_I3D 0x2050
#define WGL_DIGITAL_VIDEO_CURSOR_ALPHA_VALUE_I3D 0x2051
#define WGL_DIGITAL_VIDEO_CURSOR_INCLUDED_I3D 0x2052
#define WGL_DIGITAL_VIDEO_GAMMA_CORRECTED_I3D 0x2053

#endif

#ifdef WGL_I3D_gamma

#define WGL_GAMMA_TABLE_SIZE_I3D 0x204E
#define WGL_GAMMA_EXCLUDE_DESKTOP_I3D 0x204F

#endif

#ifdef WGL_I3D_genlock

#define WGL_GENLOCK_SOURCE_MULTIVIEW_I3D 0x2044
#define WGL_GENLOCK_SOURCE_EXTENAL_SYNC_I3D 0x2045
#define WGL_GENLOCK_SOURCE_EXTENAL_FIELD_I3D 0x2046
#define WGL_GENLOCK_SOURCE_EXTENAL_TTL_I3D 0x2047
#define WGL_GENLOCK_SOURCE_DIGITAL_SYNC_I3D 0x2048
#define WGL_GENLOCK_SOURCE_DIGITAL_FIELD_I3D 0x2049
#define WGL_GENLOCK_SOURCE_EDGE_FALLING_I3D 0x204A
#define WGL_GENLOCK_SOURCE_EDGE_RISING_I3D 0x204B
#define WGL_GENLOCK_SOURCE_EDGE_BOTH_I3D 0x204C

#endif

#ifdef WGL_I3D_image_buffer

#define WGL_IMAGE_BUFFER_MIN_ACCESS_I3D 0x00000001
#define WGL_IMAGE_BUFFER_LOCK_I3D 0x00000002

#endif

#ifdef WGL_NV_DX_interop

#define WGL_ACCESS_READ_ONLY_NV 0x00000000
#define WGL_ACCESS_READ_WRITE_NV 0x00000001
#define WGL_ACCESS_WRITE_DISCARD_NV 0x00000002

#endif

#ifdef WGL_NV_float_buffer

#define WGL_FLOAT_COMPONENTS_NV 0x20B0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_R_NV 0x20B1
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RG_NV 0x20B2
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGB_NV 0x20B3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_FLOAT_RGBA_NV 0x20B4
#define WGL_TEXTURE_FLOAT_R_NV 0x20B5
#define WGL_TEXTURE_FLOAT_RG_NV 0x20B6
#define WGL_TEXTURE_FLOAT_RGB_NV 0x20B7
#define WGL_TEXTURE_FLOAT_RGBA_NV 0x20B8

#endif

#ifdef WGL_NV_gpu_affinity

#define WGL_ERROR_INCOMPATIBLE_AFFINITY_MASKS_NV 0x20D0
#define WGL_ERROR_MISSING_AFFINITY_MASK_NV 0x20D1

#endif

#ifdef WGL_NV_multisample_coverage

#define WGL_COVERAGE_SAMPLES_NV 0x2042
#define WGL_COLOR_SAMPLES_NV 0x20B9

#endif

#ifdef WGL_NV_present_video

#define WGL_NUM_VIDEO_SLOTS_NV 0x20F0

#endif

#ifdef WGL_NV_render_depth_texture

#define WGL_BIND_TO_TEXTURE_DEPTH_NV 0x20A3
#define WGL_BIND_TO_TEXTURE_RECTANGLE_DEPTH_NV 0x20A4
#define WGL_DEPTH_TEXTURE_FORMAT_NV 0x20A5
#define WGL_TEXTURE_DEPTH_COMPONENT_NV 0x20A6
#define WGL_DEPTH_COMPONENT_NV 0x20A7

#endif

#ifdef WGL_NV_render_texture_rectangle

#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGB_NV 0x20A0
#define WGL_BIND_TO_TEXTURE_RECTANGLE_RGBA_NV 0x20A1
#define WGL_TEXTURE_RECTANGLE_NV 0x20A2

#endif

#ifdef WGL_NV_video_capture

#define WGL_UNIQUE_ID_NV 0x20CE
#define WGL_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF

#endif

#ifdef WGL_NV_video_output

#define WGL_BIND_TO_VIDEO_RGB_NV 0x20C0
#define WGL_BIND_TO_VIDEO_RGBA_NV 0x20C1
#define WGL_BIND_TO_VIDEO_RGB_AND_DEPTH_NV 0x20C2
#define WGL_VIDEO_OUT_COLOR_NV 0x20C3
#define WGL_VIDEO_OUT_ALPHA_NV 0x20C4
#define WGL_VIDEO_OUT_DEPTH_NV 0x20C5
#define WGL_VIDEO_OUT_COLOR_AND_ALPHA_NV 0x20C6
#define WGL_VIDEO_OUT_COLOR_AND_DEPTH_NV 0x20C7
#define WGL_VIDEO_OUT_FRAME 0x20C8
#define WGL_VIDEO_OUT_FIELD_1 0x20C9
#define WGL_VIDEO_OUT_FIELD_2 0x20CA
#define WGL_VIDEO_OUT_STACKED_FIELDS_1_2 0x20CB
#define WGL_VIDEO_OUT_STACKED_FIELDS_2_1 0x20CC

#endif

#ifdef WGL_ARB_pbuffer

typedef void* HPBUFFERARB;

#endif

#ifdef WGL_EXT_pbuffer

typedef void* HPBUFFEREXT;

#endif

#ifdef WGL_NV_gpu_affinity

typedef struct HGPUNV__ { int unused; } *HGPUNV;
typedef struct { DWORD cb; CHAR DeviceName[32]; CHAR DeviceString[128]; DWORD Flags; RECT rcVirtualScreen; } GPU_DEVICE;
typedef GPU_DEVICE* PGPU_DEVICE;

#endif

#ifdef WGL_NV_present_video

typedef void* HVIDEOOUTPUTDEVICENV;

#endif

#ifdef WGL_NV_video_capture

typedef void* HVIDEOINPUTDEVICENV;

#endif

#ifdef WGL_NV_video_output

typedef void* HPVIDEODEV;

#endif

#ifdef WGL_3DL_stereo_control

typedef BOOL (GLLOADER_APIENTRY *wglSetStereoEmitterState3DLFUNC)(HDC hDC, UINT uState);

extern GLLOADER_API wglSetStereoEmitterState3DLFUNC wglSetStereoEmitterState3DL;

#endif

#ifdef WGL_AMD_gpu_association

typedef UINT (GLLOADER_APIENTRY *wglGetGPUIDsAMDFUNC)(UINT maxCount, UINT* ids);
typedef INT (GLLOADER_APIENTRY *wglGetGPUInfoAMDFUNC)(UINT id, int property, GLenum dataType, UINT size, void* data);
typedef UINT (GLLOADER_APIENTRY *wglGetContextGPUIDAMDFUNC)(HGLRC hglrc);
typedef HGLRC (GLLOADER_APIENTRY *wglCreateAssociatedContextAMDFUNC)(UINT id);
typedef HGLRC (GLLOADER_APIENTRY *wglCreateAssociatedContextAttribsAMDFUNC)(UINT id, HGLRC hShareContext, const int* attribList);
typedef BOOL (GLLOADER_APIENTRY *wglDeleteAssociatedContextAMDFUNC)(HGLRC hglrc);
typedef BOOL (GLLOADER_APIENTRY *wglMakeAssociatedContextCurrentAMDFUNC)(HGLRC hglrc);
typedef HGLRC (GLLOADER_APIENTRY *wglGetCurrentAssociatedContextAMDFUNC)();
typedef VOID (GLLOADER_APIENTRY *wglBlitContextFramebufferAMDFUNC)(HGLRC dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);

extern GLLOADER_API wglGetGPUIDsAMDFUNC wglGetGPUIDsAMD;
extern GLLOADER_API wglGetGPUInfoAMDFUNC wglGetGPUInfoAMD;
extern GLLOADER_API wglGetContextGPUIDAMDFUNC wglGetContextGPUIDAMD;
extern GLLOADER_API wglCreateAssociatedContextAMDFUNC wglCreateAssociatedContextAMD;
extern GLLOADER_API wglCreateAssociatedContextAttribsAMDFUNC wglCreateAssociatedContextAttribsAMD;
extern GLLOADER_API wglDeleteAssociatedContextAMDFUNC wglDeleteAssociatedContextAMD;
extern GLLOADER_API wglMakeAssociatedContextCurrentAMDFUNC wglMakeAssociatedContextCurrentAMD;
extern GLLOADER_API wglGetCurrentAssociatedContextAMDFUNC wglGetCurrentAssociatedContextAMD;
extern GLLOADER_API wglBlitContextFramebufferAMDFUNC wglBlitContextFramebufferAMD;

#endif

#ifdef WGL_ARB_buffer_region

typedef HANDLE (GLLOADER_APIENTRY *wglCreateBufferRegionARBFUNC)(HDC hDC, int iLayerPlane, UINT uType);
typedef VOID (GLLOADER_APIENTRY *wglDeleteBufferRegionARBFUNC)(HANDLE hRegion);
typedef BOOL (GLLOADER_APIENTRY *wglSaveBufferRegionARBFUNC)(HANDLE hRegion, int x, int y, int width, int height);
typedef BOOL (GLLOADER_APIENTRY *wglRestoreBufferRegionARBFUNC)(HANDLE hRegion, int x, int y, int width, int height, int xSrc, int ySrc);

extern GLLOADER_API wglCreateBufferRegionARBFUNC wglCreateBufferRegionARB;
extern GLLOADER_API wglDeleteBufferRegionARBFUNC wglDeleteBufferRegionARB;
extern GLLOADER_API wglSaveBufferRegionARBFUNC wglSaveBufferRegionARB;
extern GLLOADER_API wglRestoreBufferRegionARBFUNC wglRestoreBufferRegionARB;

#endif

#ifdef WGL_ARB_create_context

typedef HGLRC (GLLOADER_APIENTRY *wglCreateContextAttribsARBFUNC)(HDC hDC, HGLRC hShareContext, const int* attribList);

extern GLLOADER_API wglCreateContextAttribsARBFUNC wglCreateContextAttribsARB;

#endif

#ifdef WGL_ARB_extensions_string

typedef const char* (GLLOADER_APIENTRY *wglGetExtensionsStringARBFUNC)(HDC hdc);

extern GLLOADER_API wglGetExtensionsStringARBFUNC wglGetExtensionsStringARB;

#endif

#ifdef WGL_ARB_make_current_read

typedef BOOL (GLLOADER_APIENTRY *wglMakeContextCurrentARBFUNC)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef HDC (GLLOADER_APIENTRY *wglGetCurrentReadDCARBFUNC)();

extern GLLOADER_API wglMakeContextCurrentARBFUNC wglMakeContextCurrentARB;
extern GLLOADER_API wglGetCurrentReadDCARBFUNC wglGetCurrentReadDCARB;

#endif

#ifdef WGL_ARB_pbuffer

typedef HPBUFFERARB (GLLOADER_APIENTRY *wglCreatePbufferARBFUNC)(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList);
typedef HDC (GLLOADER_APIENTRY *wglGetPbufferDCARBFUNC)(HPBUFFERARB hPbuffer);
typedef int (GLLOADER_APIENTRY *wglReleasePbufferDCARBFUNC)(HPBUFFERARB hPbuffer, HDC hDC);
typedef BOOL (GLLOADER_APIENTRY *wglDestroyPbufferARBFUNC)(HPBUFFERARB hPbuffer);
typedef BOOL (GLLOADER_APIENTRY *wglQueryPbufferARBFUNC)(HPBUFFERARB hPbuffer, int iAttribute, int* piValue);

extern GLLOADER_API wglCreatePbufferARBFUNC wglCreatePbufferARB;
extern GLLOADER_API wglGetPbufferDCARBFUNC wglGetPbufferDCARB;
extern GLLOADER_API wglReleasePbufferDCARBFUNC wglReleasePbufferDCARB;
extern GLLOADER_API wglDestroyPbufferARBFUNC wglDestroyPbufferARB;
extern GLLOADER_API wglQueryPbufferARBFUNC wglQueryPbufferARB;

#endif

#ifdef WGL_ARB_pixel_format

typedef BOOL (GLLOADER_APIENTRY *wglGetPixelFormatAttribivARBFUNC)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int* piAttributes, int* piValues);
typedef BOOL (GLLOADER_APIENTRY *wglGetPixelFormatAttribfvARBFUNC)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, const int* piAttributes, FLOAT* pfValues);
typedef BOOL (GLLOADER_APIENTRY *wglChoosePixelFormatARBFUNC)(HDC hdc, const int* piAttribIList, const FLOAT* pfAttribFList, UINT nMaxFormats, int* piFormats, UINT* nNumFormats);

extern GLLOADER_API wglGetPixelFormatAttribivARBFUNC wglGetPixelFormatAttribivARB;
extern GLLOADER_API wglGetPixelFormatAttribfvARBFUNC wglGetPixelFormatAttribfvARB;
extern GLLOADER_API wglChoosePixelFormatARBFUNC wglChoosePixelFormatARB;

#endif

#ifdef WGL_ARB_render_texture

typedef BOOL (GLLOADER_APIENTRY *wglBindTexImageARBFUNC)(HPBUFFERARB hPbuffer, int iBuffer);
typedef BOOL (GLLOADER_APIENTRY *wglReleaseTexImageARBFUNC)(HPBUFFERARB hPbuffer, int iBuffer);
typedef BOOL (GLLOADER_APIENTRY *wglSetPbufferAttribARBFUNC)(HPBUFFERARB hPbuffer, const int* piAttribList);

extern GLLOADER_API wglBindTexImageARBFUNC wglBindTexImageARB;
extern GLLOADER_API wglReleaseTexImageARBFUNC wglReleaseTexImageARB;
extern GLLOADER_API wglSetPbufferAttribARBFUNC wglSetPbufferAttribARB;

#endif

#ifdef WGL_EXT_display_color_table

typedef GLboolean (GLLOADER_APIENTRY *wglCreateDisplayColorTableEXTFUNC)(GLushort id);
typedef GLboolean (GLLOADER_APIENTRY *wglLoadDisplayColorTableEXTFUNC)(const GLushort* table, GLuint length);
typedef GLboolean (GLLOADER_APIENTRY *wglBindDisplayColorTableEXTFUNC)(GLushort id);
typedef VOID (GLLOADER_APIENTRY *wglDestroyDisplayColorTableEXTFUNC)(GLushort id);

extern GLLOADER_API wglCreateDisplayColorTableEXTFUNC wglCreateDisplayColorTableEXT;
extern GLLOADER_API wglLoadDisplayColorTableEXTFUNC wglLoadDisplayColorTableEXT;
extern GLLOADER_API wglBindDisplayColorTableEXTFUNC wglBindDisplayColorTableEXT;
extern GLLOADER_API wglDestroyDisplayColorTableEXTFUNC wglDestroyDisplayColorTableEXT;

#endif

#ifdef WGL_EXT_extensions_string

typedef const char* (GLLOADER_APIENTRY *wglGetExtensionsStringEXTFUNC)();

extern GLLOADER_API wglGetExtensionsStringEXTFUNC wglGetExtensionsStringEXT;

#endif

#ifdef WGL_EXT_make_current_read

typedef BOOL (GLLOADER_APIENTRY *wglMakeContextCurrentEXTFUNC)(HDC hDrawDC, HDC hReadDC, HGLRC hglrc);
typedef HDC (GLLOADER_APIENTRY *wglGetCurrentReadDCEXTFUNC)();

extern GLLOADER_API wglMakeContextCurrentEXTFUNC wglMakeContextCurrentEXT;
extern GLLOADER_API wglGetCurrentReadDCEXTFUNC wglGetCurrentReadDCEXT;

#endif

#ifdef WGL_EXT_pbuffer

typedef HPBUFFEREXT (GLLOADER_APIENTRY *wglCreatePbufferEXTFUNC)(HDC hDC, int iPixelFormat, int iWidth, int iHeight, const int* piAttribList);
typedef HDC (GLLOADER_APIENTRY *wglGetPbufferDCEXTFUNC)(HPBUFFEREXT hPbuffer);
typedef int (GLLOADER_APIENTRY *wglReleasePbufferDCEXTFUNC)(HPBUFFEREXT hPbuffer, HDC hDC);
typedef BOOL (GLLOADER_APIENTRY *wglDestroyPbufferEXTFUNC)(HPBUFFEREXT hPbuffer);
typedef BOOL (GLLOADER_APIENTRY *wglQueryPbufferEXTFUNC)(HPBUFFEREXT hPbuffer, int iAttribute, int* piValue);

extern GLLOADER_API wglCreatePbufferEXTFUNC wglCreatePbufferEXT;
extern GLLOADER_API wglGetPbufferDCEXTFUNC wglGetPbufferDCEXT;
extern GLLOADER_API wglReleasePbufferDCEXTFUNC wglReleasePbufferDCEXT;
extern GLLOADER_API wglDestroyPbufferEXTFUNC wglDestroyPbufferEXT;
extern GLLOADER_API wglQueryPbufferEXTFUNC wglQueryPbufferEXT;

#endif

#ifdef WGL_EXT_pixel_format

typedef BOOL (GLLOADER_APIENTRY *wglGetPixelFormatAttribivEXTFUNC)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int* piAttributes, int* piValues);
typedef BOOL (GLLOADER_APIENTRY *wglGetPixelFormatAttribfvEXTFUNC)(HDC hdc, int iPixelFormat, int iLayerPlane, UINT nAttributes, int* piAttributes, FLOAT* pfValues);
typedef BOOL (GLLOADER_APIENTRY *wglChoosePixelFormatEXTFUNC)(HDC hdc, const int* piAttribIList, const FLOAT* pfAttribFList, UINT nMaxFormats, int* piFormats, UINT* nNumFormats);

extern GLLOADER_API wglGetPixelFormatAttribivEXTFUNC wglGetPixelFormatAttribivEXT;
extern GLLOADER_API wglGetPixelFormatAttribfvEXTFUNC wglGetPixelFormatAttribfvEXT;
extern GLLOADER_API wglChoosePixelFormatEXTFUNC wglChoosePixelFormatEXT;

#endif

#ifdef WGL_EXT_swap_control

typedef BOOL (GLLOADER_APIENTRY *wglSwapIntervalEXTFUNC)(int interval);
typedef int (GLLOADER_APIENTRY *wglGetSwapIntervalEXTFUNC)();

extern GLLOADER_API wglSwapIntervalEXTFUNC wglSwapIntervalEXT;
extern GLLOADER_API wglGetSwapIntervalEXTFUNC wglGetSwapIntervalEXT;

#endif

#ifdef WGL_I3D_digital_video_control

typedef BOOL (GLLOADER_APIENTRY *wglGetDigitalVideoParametersI3DFUNC)(HDC hDC, int iAttribute, int* piValue);
typedef BOOL (GLLOADER_APIENTRY *wglSetDigitalVideoParametersI3DFUNC)(HDC hDC, int iAttribute, const int* piValue);

extern GLLOADER_API wglGetDigitalVideoParametersI3DFUNC wglGetDigitalVideoParametersI3D;
extern GLLOADER_API wglSetDigitalVideoParametersI3DFUNC wglSetDigitalVideoParametersI3D;

#endif

#ifdef WGL_I3D_gamma

typedef BOOL (GLLOADER_APIENTRY *wglGetGammaTableParametersI3DFUNC)(HDC hDC, int iAttribute, int* piValue);
typedef BOOL (GLLOADER_APIENTRY *wglSetGammaTableParametersI3DFUNC)(HDC hDC, int iAttribute, const int* piValue);
typedef BOOL (GLLOADER_APIENTRY *wglGetGammaTableI3DFUNC)(HDC hDC, int iEntries, USHORT* puRed, USHORT* puGreen, USHORT* puBlue);
typedef BOOL (GLLOADER_APIENTRY *wglSetGammaTableI3DFUNC)(HDC hDC, int iEntries, const USHORT* puRed, const USHORT* puGreen, const USHORT* puBlue);

extern GLLOADER_API wglGetGammaTableParametersI3DFUNC wglGetGammaTableParametersI3D;
extern GLLOADER_API wglSetGammaTableParametersI3DFUNC wglSetGammaTableParametersI3D;
extern GLLOADER_API wglGetGammaTableI3DFUNC wglGetGammaTableI3D;
extern GLLOADER_API wglSetGammaTableI3DFUNC wglSetGammaTableI3D;

#endif

#ifdef WGL_I3D_genlock

typedef BOOL (GLLOADER_APIENTRY *wglEnableGenlockI3DFUNC)(HDC hDC);
typedef BOOL (GLLOADER_APIENTRY *wglDisableGenlockI3DFUNC)(HDC hDC);
typedef BOOL (GLLOADER_APIENTRY *wglIsEnabledGenlockI3DFUNC)(HDC hDC, BOOL* pFlag);
typedef BOOL (GLLOADER_APIENTRY *wglGenlockSourceI3DFUNC)(HDC hDC, UINT uSource);
typedef BOOL (GLLOADER_APIENTRY *wglGetGenlockSourceI3DFUNC)(HDC hDC, UINT* uSource);
typedef BOOL (GLLOADER_APIENTRY *wglGenlockSourceEdgeI3DFUNC)(HDC hDC, UINT uEdge);
typedef BOOL (GLLOADER_APIENTRY *wglGetGenlockSourceEdgeI3DFUNC)(HDC hDC, UINT* uEdge);
typedef BOOL (GLLOADER_APIENTRY *wglGenlockSampleRateI3DFUNC)(HDC hDC, UINT uRate);
typedef BOOL (GLLOADER_APIENTRY *wglGetGenlockSampleRateI3DFUNC)(HDC hDC, UINT* uRate);
typedef BOOL (GLLOADER_APIENTRY *wglGenlockSourceDelayI3DFUNC)(HDC hDC, UINT uDelay);
typedef BOOL (GLLOADER_APIENTRY *wglGetGenlockSourceDelayI3DFUNC)(HDC hDC, UINT* uDelay);
typedef BOOL (GLLOADER_APIENTRY *wglQueryGenlockMaxSourceDelayI3DFUNC)(HDC hDC, UINT* uMaxLineDelay, UINT* uMaxPixelDelay);

extern GLLOADER_API wglEnableGenlockI3DFUNC wglEnableGenlockI3D;
extern GLLOADER_API wglDisableGenlockI3DFUNC wglDisableGenlockI3D;
extern GLLOADER_API wglIsEnabledGenlockI3DFUNC wglIsEnabledGenlockI3D;
extern GLLOADER_API wglGenlockSourceI3DFUNC wglGenlockSourceI3D;
extern GLLOADER_API wglGetGenlockSourceI3DFUNC wglGetGenlockSourceI3D;
extern GLLOADER_API wglGenlockSourceEdgeI3DFUNC wglGenlockSourceEdgeI3D;
extern GLLOADER_API wglGetGenlockSourceEdgeI3DFUNC wglGetGenlockSourceEdgeI3D;
extern GLLOADER_API wglGenlockSampleRateI3DFUNC wglGenlockSampleRateI3D;
extern GLLOADER_API wglGetGenlockSampleRateI3DFUNC wglGetGenlockSampleRateI3D;
extern GLLOADER_API wglGenlockSourceDelayI3DFUNC wglGenlockSourceDelayI3D;
extern GLLOADER_API wglGetGenlockSourceDelayI3DFUNC wglGetGenlockSourceDelayI3D;
extern GLLOADER_API wglQueryGenlockMaxSourceDelayI3DFUNC wglQueryGenlockMaxSourceDelayI3D;

#endif

#ifdef WGL_I3D_image_buffer

typedef LPVOID (GLLOADER_APIENTRY *wglCreateImageBufferI3DFUNC)(HDC hDC, DWORD dwSize, UINT uFlags);
typedef BOOL (GLLOADER_APIENTRY *wglDestroyImageBufferI3DFUNC)(HDC hDC, LPVOID pAddress);
typedef BOOL (GLLOADER_APIENTRY *wglAssociateImageBufferEventsI3DFUNC)(HDC hDC, const HANDLE* pEvent, const LPVOID* pAddress, const DWORD* pSize, UINT count);
typedef BOOL (GLLOADER_APIENTRY *wglReleaseImageBufferEventsI3DFUNC)(HDC hDC, const LPVOID* pAddress, UINT count);

extern GLLOADER_API wglCreateImageBufferI3DFUNC wglCreateImageBufferI3D;
extern GLLOADER_API wglDestroyImageBufferI3DFUNC wglDestroyImageBufferI3D;
extern GLLOADER_API wglAssociateImageBufferEventsI3DFUNC wglAssociateImageBufferEventsI3D;
extern GLLOADER_API wglReleaseImageBufferEventsI3DFUNC wglReleaseImageBufferEventsI3D;

#endif

#ifdef WGL_I3D_swap_frame_lock

typedef BOOL (GLLOADER_APIENTRY *wglEnableFrameLockI3DFUNC)();
typedef BOOL (GLLOADER_APIENTRY *wglDisableFrameLockI3DFUNC)();
typedef BOOL (GLLOADER_APIENTRY *wglIsEnabledFrameLockI3DFUNC)(BOOL* pFlag);
typedef BOOL (GLLOADER_APIENTRY *wglQueryFrameLockMasterI3DFUNC)(BOOL* pFlag);

extern GLLOADER_API wglEnableFrameLockI3DFUNC wglEnableFrameLockI3D;
extern GLLOADER_API wglDisableFrameLockI3DFUNC wglDisableFrameLockI3D;
extern GLLOADER_API wglIsEnabledFrameLockI3DFUNC wglIsEnabledFrameLockI3D;
extern GLLOADER_API wglQueryFrameLockMasterI3DFUNC wglQueryFrameLockMasterI3D;

#endif

#ifdef WGL_I3D_swap_frame_usage

typedef BOOL (GLLOADER_APIENTRY *wglGetFrameUsageI3DFUNC)(float* pUsage);
typedef BOOL (GLLOADER_APIENTRY *wglBeginFrameTrackingI3DFUNC)();
typedef BOOL (GLLOADER_APIENTRY *wglEndFrameTrackingI3DFUNC)();
typedef BOOL (GLLOADER_APIENTRY *wglQueryFrameTrackingI3DFUNC)(DWORD* pFrameCount, DWORD* pMissedFrames, float* pLastMissedUsage);

extern GLLOADER_API wglGetFrameUsageI3DFUNC wglGetFrameUsageI3D;
extern GLLOADER_API wglBeginFrameTrackingI3DFUNC wglBeginFrameTrackingI3D;
extern GLLOADER_API wglEndFrameTrackingI3DFUNC wglEndFrameTrackingI3D;
extern GLLOADER_API wglQueryFrameTrackingI3DFUNC wglQueryFrameTrackingI3D;

#endif

#ifdef WGL_NV_copy_image

typedef BOOL (GLLOADER_APIENTRY *wglCopyImageSubDataNVFUNC)(HGLRC hSrcRC, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, HGLRC hDstRC, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);

extern GLLOADER_API wglCopyImageSubDataNVFUNC wglCopyImageSubDataNV;

#endif

#ifdef WGL_NV_delay_before_swap

typedef BOOL (GLLOADER_APIENTRY *wglDelayBeforeSwapNVFUNC)(HDC hDC, GLfloat seconds);

extern GLLOADER_API wglDelayBeforeSwapNVFUNC wglDelayBeforeSwapNV;

#endif

#ifdef WGL_NV_DX_interop

typedef BOOL (GLLOADER_APIENTRY *wglDXSetResourceShareHandleNVFUNC)(void* dxObject, HANDLE shareHandle);
typedef HANDLE (GLLOADER_APIENTRY *wglDXOpenDeviceNVFUNC)(void* dxDevice);
typedef BOOL (GLLOADER_APIENTRY *wglDXCloseDeviceNVFUNC)(HANDLE hDevice);
typedef HANDLE (GLLOADER_APIENTRY *wglDXRegisterObjectNVFUNC)(HANDLE hDevice, void* dxObject, GLuint name, GLenum type, GLenum access);
typedef BOOL (GLLOADER_APIENTRY *wglDXUnregisterObjectNVFUNC)(HANDLE hDevice, HANDLE hObject);
typedef BOOL (GLLOADER_APIENTRY *wglDXObjectAccessNVFUNC)(HANDLE hObject, GLenum access);
typedef BOOL (GLLOADER_APIENTRY *wglDXLockObjectsNVFUNC)(HANDLE hDevice, GLint count, HANDLE* hObjects);
typedef BOOL (GLLOADER_APIENTRY *wglDXUnlockObjectsNVFUNC)(HANDLE hDevice, GLint count, HANDLE* hObjects);

extern GLLOADER_API wglDXSetResourceShareHandleNVFUNC wglDXSetResourceShareHandleNV;
extern GLLOADER_API wglDXOpenDeviceNVFUNC wglDXOpenDeviceNV;
extern GLLOADER_API wglDXCloseDeviceNVFUNC wglDXCloseDeviceNV;
extern GLLOADER_API wglDXRegisterObjectNVFUNC wglDXRegisterObjectNV;
extern GLLOADER_API wglDXUnregisterObjectNVFUNC wglDXUnregisterObjectNV;
extern GLLOADER_API wglDXObjectAccessNVFUNC wglDXObjectAccessNV;
extern GLLOADER_API wglDXLockObjectsNVFUNC wglDXLockObjectsNV;
extern GLLOADER_API wglDXUnlockObjectsNVFUNC wglDXUnlockObjectsNV;

#endif

#ifdef WGL_NV_gpu_affinity

typedef BOOL (GLLOADER_APIENTRY *wglEnumGpusNVFUNC)(UINT iGpuIndex, HGPUNV* phGpu);
typedef BOOL (GLLOADER_APIENTRY *wglEnumGpuDevicesNVFUNC)(HGPUNV hGpu, UINT iDeviceIndex, PGPU_DEVICE lpGpuDevice);
typedef HDC (GLLOADER_APIENTRY *wglCreateAffinityDCNVFUNC)(const HGPUNV* phGpuList);
typedef BOOL (GLLOADER_APIENTRY *wglEnumGpusFromAffinityDCNVFUNC)(HDC hAffinityDC, UINT iGpuIndex, HGPUNV* hGpu);
typedef BOOL (GLLOADER_APIENTRY *wglDeleteDCNVFUNC)(HDC hdc);

extern GLLOADER_API wglEnumGpusNVFUNC wglEnumGpusNV;
extern GLLOADER_API wglEnumGpuDevicesNVFUNC wglEnumGpuDevicesNV;
extern GLLOADER_API wglCreateAffinityDCNVFUNC wglCreateAffinityDCNV;
extern GLLOADER_API wglEnumGpusFromAffinityDCNVFUNC wglEnumGpusFromAffinityDCNV;
extern GLLOADER_API wglDeleteDCNVFUNC wglDeleteDCNV;

#endif

#ifdef WGL_NV_present_video

typedef int (GLLOADER_APIENTRY *wglEnumerateVideoDevicesNVFUNC)(HDC hDC, HVIDEOOUTPUTDEVICENV* phDeviceList);
typedef BOOL (GLLOADER_APIENTRY *wglBindVideoDeviceNVFUNC)(HDC hDC, unsigned int uVideoSlot, HVIDEOOUTPUTDEVICENV hVideoDevice, const int* piAttribList);
typedef BOOL (GLLOADER_APIENTRY *wglQueryCurrentContextNVFUNC)(int iAttribute, int* piValue);

extern GLLOADER_API wglEnumerateVideoDevicesNVFUNC wglEnumerateVideoDevicesNV;
extern GLLOADER_API wglBindVideoDeviceNVFUNC wglBindVideoDeviceNV;
extern GLLOADER_API wglQueryCurrentContextNVFUNC wglQueryCurrentContextNV;

#endif

#ifdef WGL_NV_swap_group

typedef BOOL (GLLOADER_APIENTRY *wglJoinSwapGroupNVFUNC)(HDC hDC, GLuint group);
typedef BOOL (GLLOADER_APIENTRY *wglBindSwapBarrierNVFUNC)(GLuint group, GLuint barrier);
typedef BOOL (GLLOADER_APIENTRY *wglQuerySwapGroupNVFUNC)(HDC hDC, GLuint* group, GLuint* barrier);
typedef BOOL (GLLOADER_APIENTRY *wglQueryMaxSwapGroupsNVFUNC)(HDC hDC, GLuint* maxGroups, GLuint* maxBarriers);
typedef BOOL (GLLOADER_APIENTRY *wglQueryFrameCountNVFUNC)(HDC hDC, GLuint* count);
typedef BOOL (GLLOADER_APIENTRY *wglResetFrameCountNVFUNC)(HDC hDC);

extern GLLOADER_API wglJoinSwapGroupNVFUNC wglJoinSwapGroupNV;
extern GLLOADER_API wglBindSwapBarrierNVFUNC wglBindSwapBarrierNV;
extern GLLOADER_API wglQuerySwapGroupNVFUNC wglQuerySwapGroupNV;
extern GLLOADER_API wglQueryMaxSwapGroupsNVFUNC wglQueryMaxSwapGroupsNV;
extern GLLOADER_API wglQueryFrameCountNVFUNC wglQueryFrameCountNV;
extern GLLOADER_API wglResetFrameCountNVFUNC wglResetFrameCountNV;

#endif

#ifdef WGL_NV_vertex_array_range

typedef void* (GLLOADER_APIENTRY *wglAllocateMemoryNVFUNC)(GLsizei size, GLfloat readfreq, GLfloat writefreq, GLfloat priority);
typedef void (GLLOADER_APIENTRY *wglFreeMemoryNVFUNC)(void* pointer);

extern GLLOADER_API wglAllocateMemoryNVFUNC wglAllocateMemoryNV;
extern GLLOADER_API wglFreeMemoryNVFUNC wglFreeMemoryNV;

#endif

#ifdef WGL_NV_video_capture

typedef BOOL (GLLOADER_APIENTRY *wglBindVideoCaptureDeviceNVFUNC)(UINT uVideoSlot, HVIDEOINPUTDEVICENV hDevice);
typedef UINT (GLLOADER_APIENTRY *wglEnumerateVideoCaptureDevicesNVFUNC)(HDC hDc, HVIDEOINPUTDEVICENV* phDeviceList);
typedef BOOL (GLLOADER_APIENTRY *wglLockVideoCaptureDeviceNVFUNC)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);
typedef BOOL (GLLOADER_APIENTRY *wglQueryVideoCaptureDeviceNVFUNC)(HDC hDc, HVIDEOINPUTDEVICENV hDevice, int iAttribute, int* piValue);
typedef BOOL (GLLOADER_APIENTRY *wglReleaseVideoCaptureDeviceNVFUNC)(HDC hDc, HVIDEOINPUTDEVICENV hDevice);

extern GLLOADER_API wglBindVideoCaptureDeviceNVFUNC wglBindVideoCaptureDeviceNV;
extern GLLOADER_API wglEnumerateVideoCaptureDevicesNVFUNC wglEnumerateVideoCaptureDevicesNV;
extern GLLOADER_API wglLockVideoCaptureDeviceNVFUNC wglLockVideoCaptureDeviceNV;
extern GLLOADER_API wglQueryVideoCaptureDeviceNVFUNC wglQueryVideoCaptureDeviceNV;
extern GLLOADER_API wglReleaseVideoCaptureDeviceNVFUNC wglReleaseVideoCaptureDeviceNV;

#endif

#ifdef WGL_NV_video_output

typedef BOOL (GLLOADER_APIENTRY *wglGetVideoDeviceNVFUNC)(HDC hDC, int numDevices, HPVIDEODEV* hVideoDevice);
typedef BOOL (GLLOADER_APIENTRY *wglReleaseVideoDeviceNVFUNC)(HPVIDEODEV hVideoDevice);
typedef BOOL (GLLOADER_APIENTRY *wglBindVideoImageNVFUNC)(HPVIDEODEV hVideoDevice, HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef BOOL (GLLOADER_APIENTRY *wglReleaseVideoImageNVFUNC)(HPBUFFERARB hPbuffer, int iVideoBuffer);
typedef BOOL (GLLOADER_APIENTRY *wglSendPbufferToVideoNVFUNC)(HPBUFFERARB hPbuffer, int iBufferType, unsigned long* pulCounterPbuffer, BOOL bBlock);
typedef BOOL (GLLOADER_APIENTRY *wglGetVideoInfoNVFUNC)(HPVIDEODEV hpVideoDevice, unsigned long* pulCounterOutputPbuffer, unsigned long* pulCounterOutputVideo);

extern GLLOADER_API wglGetVideoDeviceNVFUNC wglGetVideoDeviceNV;
extern GLLOADER_API wglReleaseVideoDeviceNVFUNC wglReleaseVideoDeviceNV;
extern GLLOADER_API wglBindVideoImageNVFUNC wglBindVideoImageNV;
extern GLLOADER_API wglReleaseVideoImageNVFUNC wglReleaseVideoImageNV;
extern GLLOADER_API wglSendPbufferToVideoNVFUNC wglSendPbufferToVideoNV;
extern GLLOADER_API wglGetVideoInfoNVFUNC wglGetVideoInfoNV;

#endif

#ifdef WGL_OML_sync_control

typedef BOOL (GLLOADER_APIENTRY *wglGetSyncValuesOMLFUNC)(HDC hdc, INT64* ust, INT64* msc, INT64* sbc);
typedef BOOL (GLLOADER_APIENTRY *wglGetMscRateOMLFUNC)(HDC hdc, INT32* numerator, INT32* denominator);
typedef INT64 (GLLOADER_APIENTRY *wglSwapBuffersMscOMLFUNC)(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef INT64 (GLLOADER_APIENTRY *wglSwapLayerBuffersMscOMLFUNC)(HDC hdc, int fuPlanes, INT64 target_msc, INT64 divisor, INT64 remainder);
typedef BOOL (GLLOADER_APIENTRY *wglWaitForMscOMLFUNC)(HDC hdc, INT64 target_msc, INT64 divisor, INT64 remainder, INT64* ust, INT64* msc, INT64* sbc);
typedef BOOL (GLLOADER_APIENTRY *wglWaitForSbcOMLFUNC)(HDC hdc, INT64 target_sbc, INT64* ust, INT64* msc, INT64* sbc);

extern GLLOADER_API wglGetSyncValuesOMLFUNC wglGetSyncValuesOML;
extern GLLOADER_API wglGetMscRateOMLFUNC wglGetMscRateOML;
extern GLLOADER_API wglSwapBuffersMscOMLFUNC wglSwapBuffersMscOML;
extern GLLOADER_API wglSwapLayerBuffersMscOMLFUNC wglSwapLayerBuffersMscOML;
extern GLLOADER_API wglWaitForMscOMLFUNC wglWaitForMscOML;
extern GLLOADER_API wglWaitForSbcOMLFUNC wglWaitForSbcOML;

#endif

typedef char (GLLOADER_APIENTRY *glloader_WGL_3DFX_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_3DL_stereo_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_AMD_gpu_associationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_buffer_regionFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_create_contextFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_create_context_profileFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_create_context_robustnessFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_extensions_stringFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_framebuffer_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_make_current_readFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_pbufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_pixel_formatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_pixel_format_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_render_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ARB_robustness_isolationFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_ATI_pixel_format_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_create_context_es2_profileFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_depth_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_display_color_tableFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_extensions_stringFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_framebuffer_sRGBFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_make_current_readFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_multisampleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_pbufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_pixel_formatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_pixel_format_packed_floatFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_swap_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_EXT_swap_control_tearFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_I3D_digital_video_controlFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_I3D_gammaFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_I3D_genlockFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_I3D_image_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_I3D_swap_frame_lockFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_I3D_swap_frame_usageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_copy_imageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_delay_before_swapFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_DX_interopFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_float_bufferFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_gpu_affinityFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_multisample_coverageFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_present_videoFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_render_depth_textureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_render_texture_rectangleFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_swap_groupFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_vertex_array_rangeFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_video_captureFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_NV_video_outputFUNC)();
typedef char (GLLOADER_APIENTRY *glloader_WGL_OML_sync_controlFUNC)();

extern GLLOADER_API glloader_WGL_3DFX_multisampleFUNC glloader_WGL_3DFX_multisample;
extern GLLOADER_API glloader_WGL_3DL_stereo_controlFUNC glloader_WGL_3DL_stereo_control;
extern GLLOADER_API glloader_WGL_AMD_gpu_associationFUNC glloader_WGL_AMD_gpu_association;
extern GLLOADER_API glloader_WGL_ARB_buffer_regionFUNC glloader_WGL_ARB_buffer_region;
extern GLLOADER_API glloader_WGL_ARB_create_contextFUNC glloader_WGL_ARB_create_context;
extern GLLOADER_API glloader_WGL_ARB_create_context_profileFUNC glloader_WGL_ARB_create_context_profile;
extern GLLOADER_API glloader_WGL_ARB_create_context_robustnessFUNC glloader_WGL_ARB_create_context_robustness;
extern GLLOADER_API glloader_WGL_ARB_extensions_stringFUNC glloader_WGL_ARB_extensions_string;
extern GLLOADER_API glloader_WGL_ARB_framebuffer_sRGBFUNC glloader_WGL_ARB_framebuffer_sRGB;
extern GLLOADER_API glloader_WGL_ARB_make_current_readFUNC glloader_WGL_ARB_make_current_read;
extern GLLOADER_API glloader_WGL_ARB_multisampleFUNC glloader_WGL_ARB_multisample;
extern GLLOADER_API glloader_WGL_ARB_pbufferFUNC glloader_WGL_ARB_pbuffer;
extern GLLOADER_API glloader_WGL_ARB_pixel_formatFUNC glloader_WGL_ARB_pixel_format;
extern GLLOADER_API glloader_WGL_ARB_pixel_format_floatFUNC glloader_WGL_ARB_pixel_format_float;
extern GLLOADER_API glloader_WGL_ARB_render_textureFUNC glloader_WGL_ARB_render_texture;
extern GLLOADER_API glloader_WGL_ARB_robustness_isolationFUNC glloader_WGL_ARB_robustness_isolation;
extern GLLOADER_API glloader_WGL_ATI_pixel_format_floatFUNC glloader_WGL_ATI_pixel_format_float;
extern GLLOADER_API glloader_WGL_EXT_create_context_es2_profileFUNC glloader_WGL_EXT_create_context_es2_profile;
extern GLLOADER_API glloader_WGL_EXT_depth_floatFUNC glloader_WGL_EXT_depth_float;
extern GLLOADER_API glloader_WGL_EXT_display_color_tableFUNC glloader_WGL_EXT_display_color_table;
extern GLLOADER_API glloader_WGL_EXT_extensions_stringFUNC glloader_WGL_EXT_extensions_string;
extern GLLOADER_API glloader_WGL_EXT_framebuffer_sRGBFUNC glloader_WGL_EXT_framebuffer_sRGB;
extern GLLOADER_API glloader_WGL_EXT_make_current_readFUNC glloader_WGL_EXT_make_current_read;
extern GLLOADER_API glloader_WGL_EXT_multisampleFUNC glloader_WGL_EXT_multisample;
extern GLLOADER_API glloader_WGL_EXT_pbufferFUNC glloader_WGL_EXT_pbuffer;
extern GLLOADER_API glloader_WGL_EXT_pixel_formatFUNC glloader_WGL_EXT_pixel_format;
extern GLLOADER_API glloader_WGL_EXT_pixel_format_packed_floatFUNC glloader_WGL_EXT_pixel_format_packed_float;
extern GLLOADER_API glloader_WGL_EXT_swap_controlFUNC glloader_WGL_EXT_swap_control;
extern GLLOADER_API glloader_WGL_EXT_swap_control_tearFUNC glloader_WGL_EXT_swap_control_tear;
extern GLLOADER_API glloader_WGL_I3D_digital_video_controlFUNC glloader_WGL_I3D_digital_video_control;
extern GLLOADER_API glloader_WGL_I3D_gammaFUNC glloader_WGL_I3D_gamma;
extern GLLOADER_API glloader_WGL_I3D_genlockFUNC glloader_WGL_I3D_genlock;
extern GLLOADER_API glloader_WGL_I3D_image_bufferFUNC glloader_WGL_I3D_image_buffer;
extern GLLOADER_API glloader_WGL_I3D_swap_frame_lockFUNC glloader_WGL_I3D_swap_frame_lock;
extern GLLOADER_API glloader_WGL_I3D_swap_frame_usageFUNC glloader_WGL_I3D_swap_frame_usage;
extern GLLOADER_API glloader_WGL_NV_copy_imageFUNC glloader_WGL_NV_copy_image;
extern GLLOADER_API glloader_WGL_NV_delay_before_swapFUNC glloader_WGL_NV_delay_before_swap;
extern GLLOADER_API glloader_WGL_NV_DX_interopFUNC glloader_WGL_NV_DX_interop;
extern GLLOADER_API glloader_WGL_NV_float_bufferFUNC glloader_WGL_NV_float_buffer;
extern GLLOADER_API glloader_WGL_NV_gpu_affinityFUNC glloader_WGL_NV_gpu_affinity;
extern GLLOADER_API glloader_WGL_NV_multisample_coverageFUNC glloader_WGL_NV_multisample_coverage;
extern GLLOADER_API glloader_WGL_NV_present_videoFUNC glloader_WGL_NV_present_video;
extern GLLOADER_API glloader_WGL_NV_render_depth_textureFUNC glloader_WGL_NV_render_depth_texture;
extern GLLOADER_API glloader_WGL_NV_render_texture_rectangleFUNC glloader_WGL_NV_render_texture_rectangle;
extern GLLOADER_API glloader_WGL_NV_swap_groupFUNC glloader_WGL_NV_swap_group;
extern GLLOADER_API glloader_WGL_NV_vertex_array_rangeFUNC glloader_WGL_NV_vertex_array_range;
extern GLLOADER_API glloader_WGL_NV_video_captureFUNC glloader_WGL_NV_video_capture;
extern GLLOADER_API glloader_WGL_NV_video_outputFUNC glloader_WGL_NV_video_output;
extern GLLOADER_API glloader_WGL_OML_sync_controlFUNC glloader_WGL_OML_sync_control;

#ifdef __cplusplus
}
#endif

#endif		/* _GLLOADER_WGL_H */
