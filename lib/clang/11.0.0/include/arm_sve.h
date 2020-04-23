/*===---- arm_sve.h - ARM SVE intrinsics -----------------------------------===
 *
 *
 * Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
 * See https://llvm.org/LICENSE.txt for license information.
 * SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
 *
 *===-----------------------------------------------------------------------===
 */

#ifndef __ARM_SVE_H
#define __ARM_SVE_H

#if !defined(__ARM_FEATURE_SVE)
#error "SVE support not enabled"
#else

#include <stdint.h>

#ifdef  __cplusplus
extern "C" {
#else
#include <stdbool.h>
#endif

typedef __fp16 float16_t;
typedef float float32_t;
typedef double float64_t;
typedef bool bool_t;

typedef __SVInt8_t svint8_t;
typedef __SVInt16_t svint16_t;
typedef __SVInt32_t svint32_t;
typedef __SVInt64_t svint64_t;
typedef __SVUint8_t svuint8_t;
typedef __SVUint16_t svuint16_t;
typedef __SVUint32_t svuint32_t;
typedef __SVUint64_t svuint64_t;
typedef __SVFloat16_t svfloat16_t;
typedef __SVFloat32_t svfloat32_t;
typedef __SVFloat64_t svfloat64_t;
typedef __SVBool_t  svbool_t;

typedef enum
{
  SV_POW2 = 0,
  SV_VL1 = 1,
  SV_VL2 = 2,
  SV_VL3 = 3,
  SV_VL4 = 4,
  SV_VL5 = 5,
  SV_VL6 = 6,
  SV_VL7 = 7,
  SV_VL8 = 8,
  SV_VL16 = 9,
  SV_VL32 = 10,
  SV_VL64 = 11,
  SV_VL128 = 12,
  SV_VL256 = 13,
  SV_MUL4 = 29,
  SV_MUL3 = 30,
  SV_ALL = 31
} sv_pattern;

/* Function attributes */
#define __aio static inline __attribute__((__always_inline__, __nodebug__, __overloadable__))

#define svabd_n_s8_m(...) __builtin_sve_svabd_n_s8_m(__VA_ARGS__)
#define svabd_n_s32_m(...) __builtin_sve_svabd_n_s32_m(__VA_ARGS__)
#define svabd_n_s64_m(...) __builtin_sve_svabd_n_s64_m(__VA_ARGS__)
#define svabd_n_s16_m(...) __builtin_sve_svabd_n_s16_m(__VA_ARGS__)
#define svabd_n_s8_x(...) __builtin_sve_svabd_n_s8_x(__VA_ARGS__)
#define svabd_n_s32_x(...) __builtin_sve_svabd_n_s32_x(__VA_ARGS__)
#define svabd_n_s64_x(...) __builtin_sve_svabd_n_s64_x(__VA_ARGS__)
#define svabd_n_s16_x(...) __builtin_sve_svabd_n_s16_x(__VA_ARGS__)
#define svabd_n_s8_z(...) __builtin_sve_svabd_n_s8_z(__VA_ARGS__)
#define svabd_n_s32_z(...) __builtin_sve_svabd_n_s32_z(__VA_ARGS__)
#define svabd_n_s64_z(...) __builtin_sve_svabd_n_s64_z(__VA_ARGS__)
#define svabd_n_s16_z(...) __builtin_sve_svabd_n_s16_z(__VA_ARGS__)
#define svabd_n_u8_m(...) __builtin_sve_svabd_n_u8_m(__VA_ARGS__)
#define svabd_n_u32_m(...) __builtin_sve_svabd_n_u32_m(__VA_ARGS__)
#define svabd_n_u64_m(...) __builtin_sve_svabd_n_u64_m(__VA_ARGS__)
#define svabd_n_u16_m(...) __builtin_sve_svabd_n_u16_m(__VA_ARGS__)
#define svabd_n_u8_x(...) __builtin_sve_svabd_n_u8_x(__VA_ARGS__)
#define svabd_n_u32_x(...) __builtin_sve_svabd_n_u32_x(__VA_ARGS__)
#define svabd_n_u64_x(...) __builtin_sve_svabd_n_u64_x(__VA_ARGS__)
#define svabd_n_u16_x(...) __builtin_sve_svabd_n_u16_x(__VA_ARGS__)
#define svabd_n_u8_z(...) __builtin_sve_svabd_n_u8_z(__VA_ARGS__)
#define svabd_n_u32_z(...) __builtin_sve_svabd_n_u32_z(__VA_ARGS__)
#define svabd_n_u64_z(...) __builtin_sve_svabd_n_u64_z(__VA_ARGS__)
#define svabd_n_u16_z(...) __builtin_sve_svabd_n_u16_z(__VA_ARGS__)
#define svabd_s8_m(...) __builtin_sve_svabd_s8_m(__VA_ARGS__)
#define svabd_s32_m(...) __builtin_sve_svabd_s32_m(__VA_ARGS__)
#define svabd_s64_m(...) __builtin_sve_svabd_s64_m(__VA_ARGS__)
#define svabd_s16_m(...) __builtin_sve_svabd_s16_m(__VA_ARGS__)
#define svabd_s8_x(...) __builtin_sve_svabd_s8_x(__VA_ARGS__)
#define svabd_s32_x(...) __builtin_sve_svabd_s32_x(__VA_ARGS__)
#define svabd_s64_x(...) __builtin_sve_svabd_s64_x(__VA_ARGS__)
#define svabd_s16_x(...) __builtin_sve_svabd_s16_x(__VA_ARGS__)
#define svabd_s8_z(...) __builtin_sve_svabd_s8_z(__VA_ARGS__)
#define svabd_s32_z(...) __builtin_sve_svabd_s32_z(__VA_ARGS__)
#define svabd_s64_z(...) __builtin_sve_svabd_s64_z(__VA_ARGS__)
#define svabd_s16_z(...) __builtin_sve_svabd_s16_z(__VA_ARGS__)
#define svabd_u8_m(...) __builtin_sve_svabd_u8_m(__VA_ARGS__)
#define svabd_u32_m(...) __builtin_sve_svabd_u32_m(__VA_ARGS__)
#define svabd_u64_m(...) __builtin_sve_svabd_u64_m(__VA_ARGS__)
#define svabd_u16_m(...) __builtin_sve_svabd_u16_m(__VA_ARGS__)
#define svabd_u8_x(...) __builtin_sve_svabd_u8_x(__VA_ARGS__)
#define svabd_u32_x(...) __builtin_sve_svabd_u32_x(__VA_ARGS__)
#define svabd_u64_x(...) __builtin_sve_svabd_u64_x(__VA_ARGS__)
#define svabd_u16_x(...) __builtin_sve_svabd_u16_x(__VA_ARGS__)
#define svabd_u8_z(...) __builtin_sve_svabd_u8_z(__VA_ARGS__)
#define svabd_u32_z(...) __builtin_sve_svabd_u32_z(__VA_ARGS__)
#define svabd_u64_z(...) __builtin_sve_svabd_u64_z(__VA_ARGS__)
#define svabd_u16_z(...) __builtin_sve_svabd_u16_z(__VA_ARGS__)
#define svabs_f64_m(...) __builtin_sve_svabs_f64_m(__VA_ARGS__)
#define svabs_f32_m(...) __builtin_sve_svabs_f32_m(__VA_ARGS__)
#define svabs_f16_m(...) __builtin_sve_svabs_f16_m(__VA_ARGS__)
#define svabs_f64_x(...) __builtin_sve_svabs_f64_x(__VA_ARGS__)
#define svabs_f32_x(...) __builtin_sve_svabs_f32_x(__VA_ARGS__)
#define svabs_f16_x(...) __builtin_sve_svabs_f16_x(__VA_ARGS__)
#define svabs_f64_z(...) __builtin_sve_svabs_f64_z(__VA_ARGS__)
#define svabs_f32_z(...) __builtin_sve_svabs_f32_z(__VA_ARGS__)
#define svabs_f16_z(...) __builtin_sve_svabs_f16_z(__VA_ARGS__)
#define svabs_s8_m(...) __builtin_sve_svabs_s8_m(__VA_ARGS__)
#define svabs_s32_m(...) __builtin_sve_svabs_s32_m(__VA_ARGS__)
#define svabs_s64_m(...) __builtin_sve_svabs_s64_m(__VA_ARGS__)
#define svabs_s16_m(...) __builtin_sve_svabs_s16_m(__VA_ARGS__)
#define svabs_s8_x(...) __builtin_sve_svabs_s8_x(__VA_ARGS__)
#define svabs_s32_x(...) __builtin_sve_svabs_s32_x(__VA_ARGS__)
#define svabs_s64_x(...) __builtin_sve_svabs_s64_x(__VA_ARGS__)
#define svabs_s16_x(...) __builtin_sve_svabs_s16_x(__VA_ARGS__)
#define svabs_s8_z(...) __builtin_sve_svabs_s8_z(__VA_ARGS__)
#define svabs_s32_z(...) __builtin_sve_svabs_s32_z(__VA_ARGS__)
#define svabs_s64_z(...) __builtin_sve_svabs_s64_z(__VA_ARGS__)
#define svabs_s16_z(...) __builtin_sve_svabs_s16_z(__VA_ARGS__)
#define svadd_n_u8_m(...) __builtin_sve_svadd_n_u8_m(__VA_ARGS__)
#define svadd_n_u32_m(...) __builtin_sve_svadd_n_u32_m(__VA_ARGS__)
#define svadd_n_u64_m(...) __builtin_sve_svadd_n_u64_m(__VA_ARGS__)
#define svadd_n_u16_m(...) __builtin_sve_svadd_n_u16_m(__VA_ARGS__)
#define svadd_n_s8_m(...) __builtin_sve_svadd_n_s8_m(__VA_ARGS__)
#define svadd_n_s32_m(...) __builtin_sve_svadd_n_s32_m(__VA_ARGS__)
#define svadd_n_s64_m(...) __builtin_sve_svadd_n_s64_m(__VA_ARGS__)
#define svadd_n_s16_m(...) __builtin_sve_svadd_n_s16_m(__VA_ARGS__)
#define svadd_n_u8_x(...) __builtin_sve_svadd_n_u8_x(__VA_ARGS__)
#define svadd_n_u32_x(...) __builtin_sve_svadd_n_u32_x(__VA_ARGS__)
#define svadd_n_u64_x(...) __builtin_sve_svadd_n_u64_x(__VA_ARGS__)
#define svadd_n_u16_x(...) __builtin_sve_svadd_n_u16_x(__VA_ARGS__)
#define svadd_n_s8_x(...) __builtin_sve_svadd_n_s8_x(__VA_ARGS__)
#define svadd_n_s32_x(...) __builtin_sve_svadd_n_s32_x(__VA_ARGS__)
#define svadd_n_s64_x(...) __builtin_sve_svadd_n_s64_x(__VA_ARGS__)
#define svadd_n_s16_x(...) __builtin_sve_svadd_n_s16_x(__VA_ARGS__)
#define svadd_n_u8_z(...) __builtin_sve_svadd_n_u8_z(__VA_ARGS__)
#define svadd_n_u32_z(...) __builtin_sve_svadd_n_u32_z(__VA_ARGS__)
#define svadd_n_u64_z(...) __builtin_sve_svadd_n_u64_z(__VA_ARGS__)
#define svadd_n_u16_z(...) __builtin_sve_svadd_n_u16_z(__VA_ARGS__)
#define svadd_n_s8_z(...) __builtin_sve_svadd_n_s8_z(__VA_ARGS__)
#define svadd_n_s32_z(...) __builtin_sve_svadd_n_s32_z(__VA_ARGS__)
#define svadd_n_s64_z(...) __builtin_sve_svadd_n_s64_z(__VA_ARGS__)
#define svadd_n_s16_z(...) __builtin_sve_svadd_n_s16_z(__VA_ARGS__)
#define svadd_u8_m(...) __builtin_sve_svadd_u8_m(__VA_ARGS__)
#define svadd_u32_m(...) __builtin_sve_svadd_u32_m(__VA_ARGS__)
#define svadd_u64_m(...) __builtin_sve_svadd_u64_m(__VA_ARGS__)
#define svadd_u16_m(...) __builtin_sve_svadd_u16_m(__VA_ARGS__)
#define svadd_s8_m(...) __builtin_sve_svadd_s8_m(__VA_ARGS__)
#define svadd_s32_m(...) __builtin_sve_svadd_s32_m(__VA_ARGS__)
#define svadd_s64_m(...) __builtin_sve_svadd_s64_m(__VA_ARGS__)
#define svadd_s16_m(...) __builtin_sve_svadd_s16_m(__VA_ARGS__)
#define svadd_u8_x(...) __builtin_sve_svadd_u8_x(__VA_ARGS__)
#define svadd_u32_x(...) __builtin_sve_svadd_u32_x(__VA_ARGS__)
#define svadd_u64_x(...) __builtin_sve_svadd_u64_x(__VA_ARGS__)
#define svadd_u16_x(...) __builtin_sve_svadd_u16_x(__VA_ARGS__)
#define svadd_s8_x(...) __builtin_sve_svadd_s8_x(__VA_ARGS__)
#define svadd_s32_x(...) __builtin_sve_svadd_s32_x(__VA_ARGS__)
#define svadd_s64_x(...) __builtin_sve_svadd_s64_x(__VA_ARGS__)
#define svadd_s16_x(...) __builtin_sve_svadd_s16_x(__VA_ARGS__)
#define svadd_u8_z(...) __builtin_sve_svadd_u8_z(__VA_ARGS__)
#define svadd_u32_z(...) __builtin_sve_svadd_u32_z(__VA_ARGS__)
#define svadd_u64_z(...) __builtin_sve_svadd_u64_z(__VA_ARGS__)
#define svadd_u16_z(...) __builtin_sve_svadd_u16_z(__VA_ARGS__)
#define svadd_s8_z(...) __builtin_sve_svadd_s8_z(__VA_ARGS__)
#define svadd_s32_z(...) __builtin_sve_svadd_s32_z(__VA_ARGS__)
#define svadd_s64_z(...) __builtin_sve_svadd_s64_z(__VA_ARGS__)
#define svadd_s16_z(...) __builtin_sve_svadd_s16_z(__VA_ARGS__)
#define svasrd_n_s8_m(...) __builtin_sve_svasrd_n_s8_m(__VA_ARGS__)
#define svasrd_n_s32_m(...) __builtin_sve_svasrd_n_s32_m(__VA_ARGS__)
#define svasrd_n_s64_m(...) __builtin_sve_svasrd_n_s64_m(__VA_ARGS__)
#define svasrd_n_s16_m(...) __builtin_sve_svasrd_n_s16_m(__VA_ARGS__)
#define svcadd_f64_m(...) __builtin_sve_svcadd_f64_m(__VA_ARGS__)
#define svcadd_f32_m(...) __builtin_sve_svcadd_f32_m(__VA_ARGS__)
#define svcadd_f16_m(...) __builtin_sve_svcadd_f16_m(__VA_ARGS__)
#define svcmla_f64_m(...) __builtin_sve_svcmla_f64_m(__VA_ARGS__)
#define svcmla_f32_m(...) __builtin_sve_svcmla_f32_m(__VA_ARGS__)
#define svcmla_f16_m(...) __builtin_sve_svcmla_f16_m(__VA_ARGS__)
#define svcmla_lane_f32(...) __builtin_sve_svcmla_lane_f32(__VA_ARGS__)
#define svcmla_lane_f16(...) __builtin_sve_svcmla_lane_f16(__VA_ARGS__)
#define svcntb_pat(...) __builtin_sve_svcntb_pat(__VA_ARGS__)
#define svcntd_pat(...) __builtin_sve_svcntd_pat(__VA_ARGS__)
#define svcnth_pat(...) __builtin_sve_svcnth_pat(__VA_ARGS__)
#define svcntw_pat(...) __builtin_sve_svcntw_pat(__VA_ARGS__)
#define svdiv_n_s32_m(...) __builtin_sve_svdiv_n_s32_m(__VA_ARGS__)
#define svdiv_n_s64_m(...) __builtin_sve_svdiv_n_s64_m(__VA_ARGS__)
#define svdiv_n_s32_x(...) __builtin_sve_svdiv_n_s32_x(__VA_ARGS__)
#define svdiv_n_s64_x(...) __builtin_sve_svdiv_n_s64_x(__VA_ARGS__)
#define svdiv_n_s32_z(...) __builtin_sve_svdiv_n_s32_z(__VA_ARGS__)
#define svdiv_n_s64_z(...) __builtin_sve_svdiv_n_s64_z(__VA_ARGS__)
#define svdiv_n_u32_m(...) __builtin_sve_svdiv_n_u32_m(__VA_ARGS__)
#define svdiv_n_u64_m(...) __builtin_sve_svdiv_n_u64_m(__VA_ARGS__)
#define svdiv_n_u32_x(...) __builtin_sve_svdiv_n_u32_x(__VA_ARGS__)
#define svdiv_n_u64_x(...) __builtin_sve_svdiv_n_u64_x(__VA_ARGS__)
#define svdiv_n_u32_z(...) __builtin_sve_svdiv_n_u32_z(__VA_ARGS__)
#define svdiv_n_u64_z(...) __builtin_sve_svdiv_n_u64_z(__VA_ARGS__)
#define svdiv_s32_m(...) __builtin_sve_svdiv_s32_m(__VA_ARGS__)
#define svdiv_s64_m(...) __builtin_sve_svdiv_s64_m(__VA_ARGS__)
#define svdiv_s32_x(...) __builtin_sve_svdiv_s32_x(__VA_ARGS__)
#define svdiv_s64_x(...) __builtin_sve_svdiv_s64_x(__VA_ARGS__)
#define svdiv_s32_z(...) __builtin_sve_svdiv_s32_z(__VA_ARGS__)
#define svdiv_s64_z(...) __builtin_sve_svdiv_s64_z(__VA_ARGS__)
#define svdiv_u32_m(...) __builtin_sve_svdiv_u32_m(__VA_ARGS__)
#define svdiv_u64_m(...) __builtin_sve_svdiv_u64_m(__VA_ARGS__)
#define svdiv_u32_x(...) __builtin_sve_svdiv_u32_x(__VA_ARGS__)
#define svdiv_u64_x(...) __builtin_sve_svdiv_u64_x(__VA_ARGS__)
#define svdiv_u32_z(...) __builtin_sve_svdiv_u32_z(__VA_ARGS__)
#define svdiv_u64_z(...) __builtin_sve_svdiv_u64_z(__VA_ARGS__)
#define svdivr_n_s32_m(...) __builtin_sve_svdivr_n_s32_m(__VA_ARGS__)
#define svdivr_n_s64_m(...) __builtin_sve_svdivr_n_s64_m(__VA_ARGS__)
#define svdivr_n_s32_x(...) __builtin_sve_svdivr_n_s32_x(__VA_ARGS__)
#define svdivr_n_s64_x(...) __builtin_sve_svdivr_n_s64_x(__VA_ARGS__)
#define svdivr_n_s32_z(...) __builtin_sve_svdivr_n_s32_z(__VA_ARGS__)
#define svdivr_n_s64_z(...) __builtin_sve_svdivr_n_s64_z(__VA_ARGS__)
#define svdivr_n_u32_m(...) __builtin_sve_svdivr_n_u32_m(__VA_ARGS__)
#define svdivr_n_u64_m(...) __builtin_sve_svdivr_n_u64_m(__VA_ARGS__)
#define svdivr_n_u32_x(...) __builtin_sve_svdivr_n_u32_x(__VA_ARGS__)
#define svdivr_n_u64_x(...) __builtin_sve_svdivr_n_u64_x(__VA_ARGS__)
#define svdivr_n_u32_z(...) __builtin_sve_svdivr_n_u32_z(__VA_ARGS__)
#define svdivr_n_u64_z(...) __builtin_sve_svdivr_n_u64_z(__VA_ARGS__)
#define svdivr_s32_m(...) __builtin_sve_svdivr_s32_m(__VA_ARGS__)
#define svdivr_s64_m(...) __builtin_sve_svdivr_s64_m(__VA_ARGS__)
#define svdivr_s32_x(...) __builtin_sve_svdivr_s32_x(__VA_ARGS__)
#define svdivr_s64_x(...) __builtin_sve_svdivr_s64_x(__VA_ARGS__)
#define svdivr_s32_z(...) __builtin_sve_svdivr_s32_z(__VA_ARGS__)
#define svdivr_s64_z(...) __builtin_sve_svdivr_s64_z(__VA_ARGS__)
#define svdivr_u32_m(...) __builtin_sve_svdivr_u32_m(__VA_ARGS__)
#define svdivr_u64_m(...) __builtin_sve_svdivr_u64_m(__VA_ARGS__)
#define svdivr_u32_x(...) __builtin_sve_svdivr_u32_x(__VA_ARGS__)
#define svdivr_u64_x(...) __builtin_sve_svdivr_u64_x(__VA_ARGS__)
#define svdivr_u32_z(...) __builtin_sve_svdivr_u32_z(__VA_ARGS__)
#define svdivr_u64_z(...) __builtin_sve_svdivr_u64_z(__VA_ARGS__)
#define svdot_lane_s32(...) __builtin_sve_svdot_lane_s32(__VA_ARGS__)
#define svdot_lane_s64(...) __builtin_sve_svdot_lane_s64(__VA_ARGS__)
#define svdot_lane_u32(...) __builtin_sve_svdot_lane_u32(__VA_ARGS__)
#define svdot_lane_u64(...) __builtin_sve_svdot_lane_u64(__VA_ARGS__)
#define svext_u8(...) __builtin_sve_svext_u8(__VA_ARGS__)
#define svext_u32(...) __builtin_sve_svext_u32(__VA_ARGS__)
#define svext_u64(...) __builtin_sve_svext_u64(__VA_ARGS__)
#define svext_u16(...) __builtin_sve_svext_u16(__VA_ARGS__)
#define svext_s8(...) __builtin_sve_svext_s8(__VA_ARGS__)
#define svext_f64(...) __builtin_sve_svext_f64(__VA_ARGS__)
#define svext_f32(...) __builtin_sve_svext_f32(__VA_ARGS__)
#define svext_f16(...) __builtin_sve_svext_f16(__VA_ARGS__)
#define svext_s32(...) __builtin_sve_svext_s32(__VA_ARGS__)
#define svext_s64(...) __builtin_sve_svext_s64(__VA_ARGS__)
#define svext_s16(...) __builtin_sve_svext_s16(__VA_ARGS__)
#define svld1_u8(...) __builtin_sve_svld1_u8(__VA_ARGS__)
#define svld1_u32(...) __builtin_sve_svld1_u32(__VA_ARGS__)
#define svld1_u64(...) __builtin_sve_svld1_u64(__VA_ARGS__)
#define svld1_u16(...) __builtin_sve_svld1_u16(__VA_ARGS__)
#define svld1_s8(...) __builtin_sve_svld1_s8(__VA_ARGS__)
#define svld1_f64(...) __builtin_sve_svld1_f64(__VA_ARGS__)
#define svld1_f32(...) __builtin_sve_svld1_f32(__VA_ARGS__)
#define svld1_f16(...) __builtin_sve_svld1_f16(__VA_ARGS__)
#define svld1_s32(...) __builtin_sve_svld1_s32(__VA_ARGS__)
#define svld1_s64(...) __builtin_sve_svld1_s64(__VA_ARGS__)
#define svld1_s16(...) __builtin_sve_svld1_s16(__VA_ARGS__)
#define svld1_gather_u32base_index_u32(...) __builtin_sve_svld1_gather_u32base_index_u32(__VA_ARGS__)
#define svld1_gather_u64base_index_u64(...) __builtin_sve_svld1_gather_u64base_index_u64(__VA_ARGS__)
#define svld1_gather_u64base_index_f64(...) __builtin_sve_svld1_gather_u64base_index_f64(__VA_ARGS__)
#define svld1_gather_u32base_index_f32(...) __builtin_sve_svld1_gather_u32base_index_f32(__VA_ARGS__)
#define svld1_gather_u32base_index_s32(...) __builtin_sve_svld1_gather_u32base_index_s32(__VA_ARGS__)
#define svld1_gather_u64base_index_s64(...) __builtin_sve_svld1_gather_u64base_index_s64(__VA_ARGS__)
#define svld1_gather_u32base_offset_u32(...) __builtin_sve_svld1_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1_gather_u64base_offset_u64(...) __builtin_sve_svld1_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1_gather_u64base_offset_f64(...) __builtin_sve_svld1_gather_u64base_offset_f64(__VA_ARGS__)
#define svld1_gather_u32base_offset_f32(...) __builtin_sve_svld1_gather_u32base_offset_f32(__VA_ARGS__)
#define svld1_gather_u32base_offset_s32(...) __builtin_sve_svld1_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1_gather_u64base_offset_s64(...) __builtin_sve_svld1_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1_gather_u32base_u32(...) __builtin_sve_svld1_gather_u32base_u32(__VA_ARGS__)
#define svld1_gather_u64base_u64(...) __builtin_sve_svld1_gather_u64base_u64(__VA_ARGS__)
#define svld1_gather_u64base_f64(...) __builtin_sve_svld1_gather_u64base_f64(__VA_ARGS__)
#define svld1_gather_u32base_f32(...) __builtin_sve_svld1_gather_u32base_f32(__VA_ARGS__)
#define svld1_gather_u32base_s32(...) __builtin_sve_svld1_gather_u32base_s32(__VA_ARGS__)
#define svld1_gather_u64base_s64(...) __builtin_sve_svld1_gather_u64base_s64(__VA_ARGS__)
#define svld1_gather_s32index_u32(...) __builtin_sve_svld1_gather_s32index_u32(__VA_ARGS__)
#define svld1_gather_s32index_f32(...) __builtin_sve_svld1_gather_s32index_f32(__VA_ARGS__)
#define svld1_gather_s32index_s32(...) __builtin_sve_svld1_gather_s32index_s32(__VA_ARGS__)
#define svld1_gather_u32index_u32(...) __builtin_sve_svld1_gather_u32index_u32(__VA_ARGS__)
#define svld1_gather_u32index_f32(...) __builtin_sve_svld1_gather_u32index_f32(__VA_ARGS__)
#define svld1_gather_u32index_s32(...) __builtin_sve_svld1_gather_u32index_s32(__VA_ARGS__)
#define svld1_gather_s64index_u64(...) __builtin_sve_svld1_gather_s64index_u64(__VA_ARGS__)
#define svld1_gather_s64index_f64(...) __builtin_sve_svld1_gather_s64index_f64(__VA_ARGS__)
#define svld1_gather_s64index_s64(...) __builtin_sve_svld1_gather_s64index_s64(__VA_ARGS__)
#define svld1_gather_u64index_u64(...) __builtin_sve_svld1_gather_u64index_u64(__VA_ARGS__)
#define svld1_gather_u64index_f64(...) __builtin_sve_svld1_gather_u64index_f64(__VA_ARGS__)
#define svld1_gather_u64index_s64(...) __builtin_sve_svld1_gather_u64index_s64(__VA_ARGS__)
#define svld1_gather_s32offset_u32(...) __builtin_sve_svld1_gather_s32offset_u32(__VA_ARGS__)
#define svld1_gather_s32offset_f32(...) __builtin_sve_svld1_gather_s32offset_f32(__VA_ARGS__)
#define svld1_gather_s32offset_s32(...) __builtin_sve_svld1_gather_s32offset_s32(__VA_ARGS__)
#define svld1_gather_u32offset_u32(...) __builtin_sve_svld1_gather_u32offset_u32(__VA_ARGS__)
#define svld1_gather_u32offset_f32(...) __builtin_sve_svld1_gather_u32offset_f32(__VA_ARGS__)
#define svld1_gather_u32offset_s32(...) __builtin_sve_svld1_gather_u32offset_s32(__VA_ARGS__)
#define svld1_gather_s64offset_u64(...) __builtin_sve_svld1_gather_s64offset_u64(__VA_ARGS__)
#define svld1_gather_s64offset_f64(...) __builtin_sve_svld1_gather_s64offset_f64(__VA_ARGS__)
#define svld1_gather_s64offset_s64(...) __builtin_sve_svld1_gather_s64offset_s64(__VA_ARGS__)
#define svld1_gather_u64offset_u64(...) __builtin_sve_svld1_gather_u64offset_u64(__VA_ARGS__)
#define svld1_gather_u64offset_f64(...) __builtin_sve_svld1_gather_u64offset_f64(__VA_ARGS__)
#define svld1_gather_u64offset_s64(...) __builtin_sve_svld1_gather_u64offset_s64(__VA_ARGS__)
#define svld1_vnum_u8(...) __builtin_sve_svld1_vnum_u8(__VA_ARGS__)
#define svld1_vnum_u32(...) __builtin_sve_svld1_vnum_u32(__VA_ARGS__)
#define svld1_vnum_u64(...) __builtin_sve_svld1_vnum_u64(__VA_ARGS__)
#define svld1_vnum_u16(...) __builtin_sve_svld1_vnum_u16(__VA_ARGS__)
#define svld1_vnum_s8(...) __builtin_sve_svld1_vnum_s8(__VA_ARGS__)
#define svld1_vnum_f64(...) __builtin_sve_svld1_vnum_f64(__VA_ARGS__)
#define svld1_vnum_f32(...) __builtin_sve_svld1_vnum_f32(__VA_ARGS__)
#define svld1_vnum_f16(...) __builtin_sve_svld1_vnum_f16(__VA_ARGS__)
#define svld1_vnum_s32(...) __builtin_sve_svld1_vnum_s32(__VA_ARGS__)
#define svld1_vnum_s64(...) __builtin_sve_svld1_vnum_s64(__VA_ARGS__)
#define svld1_vnum_s16(...) __builtin_sve_svld1_vnum_s16(__VA_ARGS__)
#define svld1sb_gather_u32base_offset_u32(...) __builtin_sve_svld1sb_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1sb_gather_u64base_offset_u64(...) __builtin_sve_svld1sb_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1sb_gather_u32base_offset_s32(...) __builtin_sve_svld1sb_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1sb_gather_u64base_offset_s64(...) __builtin_sve_svld1sb_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1sb_gather_u32base_u32(...) __builtin_sve_svld1sb_gather_u32base_u32(__VA_ARGS__)
#define svld1sb_gather_u64base_u64(...) __builtin_sve_svld1sb_gather_u64base_u64(__VA_ARGS__)
#define svld1sb_gather_u32base_s32(...) __builtin_sve_svld1sb_gather_u32base_s32(__VA_ARGS__)
#define svld1sb_gather_u64base_s64(...) __builtin_sve_svld1sb_gather_u64base_s64(__VA_ARGS__)
#define svld1sb_gather_s32offset_u32(...) __builtin_sve_svld1sb_gather_s32offset_u32(__VA_ARGS__)
#define svld1sb_gather_s32offset_s32(...) __builtin_sve_svld1sb_gather_s32offset_s32(__VA_ARGS__)
#define svld1sb_gather_u32offset_u32(...) __builtin_sve_svld1sb_gather_u32offset_u32(__VA_ARGS__)
#define svld1sb_gather_u32offset_s32(...) __builtin_sve_svld1sb_gather_u32offset_s32(__VA_ARGS__)
#define svld1sb_gather_s64offset_u64(...) __builtin_sve_svld1sb_gather_s64offset_u64(__VA_ARGS__)
#define svld1sb_gather_s64offset_s64(...) __builtin_sve_svld1sb_gather_s64offset_s64(__VA_ARGS__)
#define svld1sb_gather_u64offset_u64(...) __builtin_sve_svld1sb_gather_u64offset_u64(__VA_ARGS__)
#define svld1sb_gather_u64offset_s64(...) __builtin_sve_svld1sb_gather_u64offset_s64(__VA_ARGS__)
#define svld1sb_vnum_u32(...) __builtin_sve_svld1sb_vnum_u32(__VA_ARGS__)
#define svld1sb_vnum_u64(...) __builtin_sve_svld1sb_vnum_u64(__VA_ARGS__)
#define svld1sb_vnum_u16(...) __builtin_sve_svld1sb_vnum_u16(__VA_ARGS__)
#define svld1sb_vnum_s32(...) __builtin_sve_svld1sb_vnum_s32(__VA_ARGS__)
#define svld1sb_vnum_s64(...) __builtin_sve_svld1sb_vnum_s64(__VA_ARGS__)
#define svld1sb_vnum_s16(...) __builtin_sve_svld1sb_vnum_s16(__VA_ARGS__)
#define svld1sb_u32(...) __builtin_sve_svld1sb_u32(__VA_ARGS__)
#define svld1sb_u64(...) __builtin_sve_svld1sb_u64(__VA_ARGS__)
#define svld1sb_u16(...) __builtin_sve_svld1sb_u16(__VA_ARGS__)
#define svld1sb_s32(...) __builtin_sve_svld1sb_s32(__VA_ARGS__)
#define svld1sb_s64(...) __builtin_sve_svld1sb_s64(__VA_ARGS__)
#define svld1sb_s16(...) __builtin_sve_svld1sb_s16(__VA_ARGS__)
#define svld1sh_gather_u32base_index_u32(...) __builtin_sve_svld1sh_gather_u32base_index_u32(__VA_ARGS__)
#define svld1sh_gather_u64base_index_u64(...) __builtin_sve_svld1sh_gather_u64base_index_u64(__VA_ARGS__)
#define svld1sh_gather_u32base_index_s32(...) __builtin_sve_svld1sh_gather_u32base_index_s32(__VA_ARGS__)
#define svld1sh_gather_u64base_index_s64(...) __builtin_sve_svld1sh_gather_u64base_index_s64(__VA_ARGS__)
#define svld1sh_gather_u32base_offset_u32(...) __builtin_sve_svld1sh_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1sh_gather_u64base_offset_u64(...) __builtin_sve_svld1sh_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1sh_gather_u32base_offset_s32(...) __builtin_sve_svld1sh_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1sh_gather_u64base_offset_s64(...) __builtin_sve_svld1sh_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1sh_gather_u32base_u32(...) __builtin_sve_svld1sh_gather_u32base_u32(__VA_ARGS__)
#define svld1sh_gather_u64base_u64(...) __builtin_sve_svld1sh_gather_u64base_u64(__VA_ARGS__)
#define svld1sh_gather_u32base_s32(...) __builtin_sve_svld1sh_gather_u32base_s32(__VA_ARGS__)
#define svld1sh_gather_u64base_s64(...) __builtin_sve_svld1sh_gather_u64base_s64(__VA_ARGS__)
#define svld1sh_gather_s32index_u32(...) __builtin_sve_svld1sh_gather_s32index_u32(__VA_ARGS__)
#define svld1sh_gather_s32index_s32(...) __builtin_sve_svld1sh_gather_s32index_s32(__VA_ARGS__)
#define svld1sh_gather_u32index_u32(...) __builtin_sve_svld1sh_gather_u32index_u32(__VA_ARGS__)
#define svld1sh_gather_u32index_s32(...) __builtin_sve_svld1sh_gather_u32index_s32(__VA_ARGS__)
#define svld1sh_gather_s64index_u64(...) __builtin_sve_svld1sh_gather_s64index_u64(__VA_ARGS__)
#define svld1sh_gather_s64index_s64(...) __builtin_sve_svld1sh_gather_s64index_s64(__VA_ARGS__)
#define svld1sh_gather_u64index_u64(...) __builtin_sve_svld1sh_gather_u64index_u64(__VA_ARGS__)
#define svld1sh_gather_u64index_s64(...) __builtin_sve_svld1sh_gather_u64index_s64(__VA_ARGS__)
#define svld1sh_gather_s32offset_u32(...) __builtin_sve_svld1sh_gather_s32offset_u32(__VA_ARGS__)
#define svld1sh_gather_s32offset_s32(...) __builtin_sve_svld1sh_gather_s32offset_s32(__VA_ARGS__)
#define svld1sh_gather_u32offset_u32(...) __builtin_sve_svld1sh_gather_u32offset_u32(__VA_ARGS__)
#define svld1sh_gather_u32offset_s32(...) __builtin_sve_svld1sh_gather_u32offset_s32(__VA_ARGS__)
#define svld1sh_gather_s64offset_u64(...) __builtin_sve_svld1sh_gather_s64offset_u64(__VA_ARGS__)
#define svld1sh_gather_s64offset_s64(...) __builtin_sve_svld1sh_gather_s64offset_s64(__VA_ARGS__)
#define svld1sh_gather_u64offset_u64(...) __builtin_sve_svld1sh_gather_u64offset_u64(__VA_ARGS__)
#define svld1sh_gather_u64offset_s64(...) __builtin_sve_svld1sh_gather_u64offset_s64(__VA_ARGS__)
#define svld1sh_vnum_u32(...) __builtin_sve_svld1sh_vnum_u32(__VA_ARGS__)
#define svld1sh_vnum_u64(...) __builtin_sve_svld1sh_vnum_u64(__VA_ARGS__)
#define svld1sh_vnum_s32(...) __builtin_sve_svld1sh_vnum_s32(__VA_ARGS__)
#define svld1sh_vnum_s64(...) __builtin_sve_svld1sh_vnum_s64(__VA_ARGS__)
#define svld1sh_u32(...) __builtin_sve_svld1sh_u32(__VA_ARGS__)
#define svld1sh_u64(...) __builtin_sve_svld1sh_u64(__VA_ARGS__)
#define svld1sh_s32(...) __builtin_sve_svld1sh_s32(__VA_ARGS__)
#define svld1sh_s64(...) __builtin_sve_svld1sh_s64(__VA_ARGS__)
#define svld1sw_gather_u64base_index_u64(...) __builtin_sve_svld1sw_gather_u64base_index_u64(__VA_ARGS__)
#define svld1sw_gather_u64base_index_s64(...) __builtin_sve_svld1sw_gather_u64base_index_s64(__VA_ARGS__)
#define svld1sw_gather_u64base_offset_u64(...) __builtin_sve_svld1sw_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1sw_gather_u64base_offset_s64(...) __builtin_sve_svld1sw_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1sw_gather_u64base_u64(...) __builtin_sve_svld1sw_gather_u64base_u64(__VA_ARGS__)
#define svld1sw_gather_u64base_s64(...) __builtin_sve_svld1sw_gather_u64base_s64(__VA_ARGS__)
#define svld1sw_gather_s64index_u64(...) __builtin_sve_svld1sw_gather_s64index_u64(__VA_ARGS__)
#define svld1sw_gather_s64index_s64(...) __builtin_sve_svld1sw_gather_s64index_s64(__VA_ARGS__)
#define svld1sw_gather_u64index_u64(...) __builtin_sve_svld1sw_gather_u64index_u64(__VA_ARGS__)
#define svld1sw_gather_u64index_s64(...) __builtin_sve_svld1sw_gather_u64index_s64(__VA_ARGS__)
#define svld1sw_gather_s64offset_u64(...) __builtin_sve_svld1sw_gather_s64offset_u64(__VA_ARGS__)
#define svld1sw_gather_s64offset_s64(...) __builtin_sve_svld1sw_gather_s64offset_s64(__VA_ARGS__)
#define svld1sw_gather_u64offset_u64(...) __builtin_sve_svld1sw_gather_u64offset_u64(__VA_ARGS__)
#define svld1sw_gather_u64offset_s64(...) __builtin_sve_svld1sw_gather_u64offset_s64(__VA_ARGS__)
#define svld1sw_vnum_u64(...) __builtin_sve_svld1sw_vnum_u64(__VA_ARGS__)
#define svld1sw_vnum_s64(...) __builtin_sve_svld1sw_vnum_s64(__VA_ARGS__)
#define svld1sw_u64(...) __builtin_sve_svld1sw_u64(__VA_ARGS__)
#define svld1sw_s64(...) __builtin_sve_svld1sw_s64(__VA_ARGS__)
#define svld1ub_gather_u32base_offset_u32(...) __builtin_sve_svld1ub_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1ub_gather_u64base_offset_u64(...) __builtin_sve_svld1ub_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1ub_gather_u32base_offset_s32(...) __builtin_sve_svld1ub_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1ub_gather_u64base_offset_s64(...) __builtin_sve_svld1ub_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1ub_gather_u32base_u32(...) __builtin_sve_svld1ub_gather_u32base_u32(__VA_ARGS__)
#define svld1ub_gather_u64base_u64(...) __builtin_sve_svld1ub_gather_u64base_u64(__VA_ARGS__)
#define svld1ub_gather_u32base_s32(...) __builtin_sve_svld1ub_gather_u32base_s32(__VA_ARGS__)
#define svld1ub_gather_u64base_s64(...) __builtin_sve_svld1ub_gather_u64base_s64(__VA_ARGS__)
#define svld1ub_gather_s32offset_u32(...) __builtin_sve_svld1ub_gather_s32offset_u32(__VA_ARGS__)
#define svld1ub_gather_s32offset_s32(...) __builtin_sve_svld1ub_gather_s32offset_s32(__VA_ARGS__)
#define svld1ub_gather_u32offset_u32(...) __builtin_sve_svld1ub_gather_u32offset_u32(__VA_ARGS__)
#define svld1ub_gather_u32offset_s32(...) __builtin_sve_svld1ub_gather_u32offset_s32(__VA_ARGS__)
#define svld1ub_gather_s64offset_u64(...) __builtin_sve_svld1ub_gather_s64offset_u64(__VA_ARGS__)
#define svld1ub_gather_s64offset_s64(...) __builtin_sve_svld1ub_gather_s64offset_s64(__VA_ARGS__)
#define svld1ub_gather_u64offset_u64(...) __builtin_sve_svld1ub_gather_u64offset_u64(__VA_ARGS__)
#define svld1ub_gather_u64offset_s64(...) __builtin_sve_svld1ub_gather_u64offset_s64(__VA_ARGS__)
#define svld1ub_vnum_u32(...) __builtin_sve_svld1ub_vnum_u32(__VA_ARGS__)
#define svld1ub_vnum_u64(...) __builtin_sve_svld1ub_vnum_u64(__VA_ARGS__)
#define svld1ub_vnum_u16(...) __builtin_sve_svld1ub_vnum_u16(__VA_ARGS__)
#define svld1ub_vnum_s32(...) __builtin_sve_svld1ub_vnum_s32(__VA_ARGS__)
#define svld1ub_vnum_s64(...) __builtin_sve_svld1ub_vnum_s64(__VA_ARGS__)
#define svld1ub_vnum_s16(...) __builtin_sve_svld1ub_vnum_s16(__VA_ARGS__)
#define svld1ub_u32(...) __builtin_sve_svld1ub_u32(__VA_ARGS__)
#define svld1ub_u64(...) __builtin_sve_svld1ub_u64(__VA_ARGS__)
#define svld1ub_u16(...) __builtin_sve_svld1ub_u16(__VA_ARGS__)
#define svld1ub_s32(...) __builtin_sve_svld1ub_s32(__VA_ARGS__)
#define svld1ub_s64(...) __builtin_sve_svld1ub_s64(__VA_ARGS__)
#define svld1ub_s16(...) __builtin_sve_svld1ub_s16(__VA_ARGS__)
#define svld1uh_gather_u32base_index_u32(...) __builtin_sve_svld1uh_gather_u32base_index_u32(__VA_ARGS__)
#define svld1uh_gather_u64base_index_u64(...) __builtin_sve_svld1uh_gather_u64base_index_u64(__VA_ARGS__)
#define svld1uh_gather_u32base_index_s32(...) __builtin_sve_svld1uh_gather_u32base_index_s32(__VA_ARGS__)
#define svld1uh_gather_u64base_index_s64(...) __builtin_sve_svld1uh_gather_u64base_index_s64(__VA_ARGS__)
#define svld1uh_gather_u32base_offset_u32(...) __builtin_sve_svld1uh_gather_u32base_offset_u32(__VA_ARGS__)
#define svld1uh_gather_u64base_offset_u64(...) __builtin_sve_svld1uh_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1uh_gather_u32base_offset_s32(...) __builtin_sve_svld1uh_gather_u32base_offset_s32(__VA_ARGS__)
#define svld1uh_gather_u64base_offset_s64(...) __builtin_sve_svld1uh_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1uh_gather_u32base_u32(...) __builtin_sve_svld1uh_gather_u32base_u32(__VA_ARGS__)
#define svld1uh_gather_u64base_u64(...) __builtin_sve_svld1uh_gather_u64base_u64(__VA_ARGS__)
#define svld1uh_gather_u32base_s32(...) __builtin_sve_svld1uh_gather_u32base_s32(__VA_ARGS__)
#define svld1uh_gather_u64base_s64(...) __builtin_sve_svld1uh_gather_u64base_s64(__VA_ARGS__)
#define svld1uh_gather_s32index_u32(...) __builtin_sve_svld1uh_gather_s32index_u32(__VA_ARGS__)
#define svld1uh_gather_s32index_s32(...) __builtin_sve_svld1uh_gather_s32index_s32(__VA_ARGS__)
#define svld1uh_gather_u32index_u32(...) __builtin_sve_svld1uh_gather_u32index_u32(__VA_ARGS__)
#define svld1uh_gather_u32index_s32(...) __builtin_sve_svld1uh_gather_u32index_s32(__VA_ARGS__)
#define svld1uh_gather_s64index_u64(...) __builtin_sve_svld1uh_gather_s64index_u64(__VA_ARGS__)
#define svld1uh_gather_s64index_s64(...) __builtin_sve_svld1uh_gather_s64index_s64(__VA_ARGS__)
#define svld1uh_gather_u64index_u64(...) __builtin_sve_svld1uh_gather_u64index_u64(__VA_ARGS__)
#define svld1uh_gather_u64index_s64(...) __builtin_sve_svld1uh_gather_u64index_s64(__VA_ARGS__)
#define svld1uh_gather_s32offset_u32(...) __builtin_sve_svld1uh_gather_s32offset_u32(__VA_ARGS__)
#define svld1uh_gather_s32offset_s32(...) __builtin_sve_svld1uh_gather_s32offset_s32(__VA_ARGS__)
#define svld1uh_gather_u32offset_u32(...) __builtin_sve_svld1uh_gather_u32offset_u32(__VA_ARGS__)
#define svld1uh_gather_u32offset_s32(...) __builtin_sve_svld1uh_gather_u32offset_s32(__VA_ARGS__)
#define svld1uh_gather_s64offset_u64(...) __builtin_sve_svld1uh_gather_s64offset_u64(__VA_ARGS__)
#define svld1uh_gather_s64offset_s64(...) __builtin_sve_svld1uh_gather_s64offset_s64(__VA_ARGS__)
#define svld1uh_gather_u64offset_u64(...) __builtin_sve_svld1uh_gather_u64offset_u64(__VA_ARGS__)
#define svld1uh_gather_u64offset_s64(...) __builtin_sve_svld1uh_gather_u64offset_s64(__VA_ARGS__)
#define svld1uh_vnum_u32(...) __builtin_sve_svld1uh_vnum_u32(__VA_ARGS__)
#define svld1uh_vnum_u64(...) __builtin_sve_svld1uh_vnum_u64(__VA_ARGS__)
#define svld1uh_vnum_s32(...) __builtin_sve_svld1uh_vnum_s32(__VA_ARGS__)
#define svld1uh_vnum_s64(...) __builtin_sve_svld1uh_vnum_s64(__VA_ARGS__)
#define svld1uh_u32(...) __builtin_sve_svld1uh_u32(__VA_ARGS__)
#define svld1uh_u64(...) __builtin_sve_svld1uh_u64(__VA_ARGS__)
#define svld1uh_s32(...) __builtin_sve_svld1uh_s32(__VA_ARGS__)
#define svld1uh_s64(...) __builtin_sve_svld1uh_s64(__VA_ARGS__)
#define svld1uw_gather_u64base_index_u64(...) __builtin_sve_svld1uw_gather_u64base_index_u64(__VA_ARGS__)
#define svld1uw_gather_u64base_index_s64(...) __builtin_sve_svld1uw_gather_u64base_index_s64(__VA_ARGS__)
#define svld1uw_gather_u64base_offset_u64(...) __builtin_sve_svld1uw_gather_u64base_offset_u64(__VA_ARGS__)
#define svld1uw_gather_u64base_offset_s64(...) __builtin_sve_svld1uw_gather_u64base_offset_s64(__VA_ARGS__)
#define svld1uw_gather_u64base_u64(...) __builtin_sve_svld1uw_gather_u64base_u64(__VA_ARGS__)
#define svld1uw_gather_u64base_s64(...) __builtin_sve_svld1uw_gather_u64base_s64(__VA_ARGS__)
#define svld1uw_gather_s64index_u64(...) __builtin_sve_svld1uw_gather_s64index_u64(__VA_ARGS__)
#define svld1uw_gather_s64index_s64(...) __builtin_sve_svld1uw_gather_s64index_s64(__VA_ARGS__)
#define svld1uw_gather_u64index_u64(...) __builtin_sve_svld1uw_gather_u64index_u64(__VA_ARGS__)
#define svld1uw_gather_u64index_s64(...) __builtin_sve_svld1uw_gather_u64index_s64(__VA_ARGS__)
#define svld1uw_gather_s64offset_u64(...) __builtin_sve_svld1uw_gather_s64offset_u64(__VA_ARGS__)
#define svld1uw_gather_s64offset_s64(...) __builtin_sve_svld1uw_gather_s64offset_s64(__VA_ARGS__)
#define svld1uw_gather_u64offset_u64(...) __builtin_sve_svld1uw_gather_u64offset_u64(__VA_ARGS__)
#define svld1uw_gather_u64offset_s64(...) __builtin_sve_svld1uw_gather_u64offset_s64(__VA_ARGS__)
#define svld1uw_vnum_u64(...) __builtin_sve_svld1uw_vnum_u64(__VA_ARGS__)
#define svld1uw_vnum_s64(...) __builtin_sve_svld1uw_vnum_s64(__VA_ARGS__)
#define svld1uw_u64(...) __builtin_sve_svld1uw_u64(__VA_ARGS__)
#define svld1uw_s64(...) __builtin_sve_svld1uw_s64(__VA_ARGS__)
#define svldff1_u8(...) __builtin_sve_svldff1_u8(__VA_ARGS__)
#define svldff1_u32(...) __builtin_sve_svldff1_u32(__VA_ARGS__)
#define svldff1_u64(...) __builtin_sve_svldff1_u64(__VA_ARGS__)
#define svldff1_u16(...) __builtin_sve_svldff1_u16(__VA_ARGS__)
#define svldff1_s8(...) __builtin_sve_svldff1_s8(__VA_ARGS__)
#define svldff1_f64(...) __builtin_sve_svldff1_f64(__VA_ARGS__)
#define svldff1_f32(...) __builtin_sve_svldff1_f32(__VA_ARGS__)
#define svldff1_f16(...) __builtin_sve_svldff1_f16(__VA_ARGS__)
#define svldff1_s32(...) __builtin_sve_svldff1_s32(__VA_ARGS__)
#define svldff1_s64(...) __builtin_sve_svldff1_s64(__VA_ARGS__)
#define svldff1_s16(...) __builtin_sve_svldff1_s16(__VA_ARGS__)
#define svldff1_gather_u32base_index_u32(...) __builtin_sve_svldff1_gather_u32base_index_u32(__VA_ARGS__)
#define svldff1_gather_u64base_index_u64(...) __builtin_sve_svldff1_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1_gather_u64base_index_f64(...) __builtin_sve_svldff1_gather_u64base_index_f64(__VA_ARGS__)
#define svldff1_gather_u32base_index_f32(...) __builtin_sve_svldff1_gather_u32base_index_f32(__VA_ARGS__)
#define svldff1_gather_u32base_index_s32(...) __builtin_sve_svldff1_gather_u32base_index_s32(__VA_ARGS__)
#define svldff1_gather_u64base_index_s64(...) __builtin_sve_svldff1_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1_gather_u32base_offset_u32(...) __builtin_sve_svldff1_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1_gather_u64base_offset_u64(...) __builtin_sve_svldff1_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1_gather_u64base_offset_f64(...) __builtin_sve_svldff1_gather_u64base_offset_f64(__VA_ARGS__)
#define svldff1_gather_u32base_offset_f32(...) __builtin_sve_svldff1_gather_u32base_offset_f32(__VA_ARGS__)
#define svldff1_gather_u32base_offset_s32(...) __builtin_sve_svldff1_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1_gather_u64base_offset_s64(...) __builtin_sve_svldff1_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1_gather_u32base_u32(...) __builtin_sve_svldff1_gather_u32base_u32(__VA_ARGS__)
#define svldff1_gather_u64base_u64(...) __builtin_sve_svldff1_gather_u64base_u64(__VA_ARGS__)
#define svldff1_gather_u64base_f64(...) __builtin_sve_svldff1_gather_u64base_f64(__VA_ARGS__)
#define svldff1_gather_u32base_f32(...) __builtin_sve_svldff1_gather_u32base_f32(__VA_ARGS__)
#define svldff1_gather_u32base_s32(...) __builtin_sve_svldff1_gather_u32base_s32(__VA_ARGS__)
#define svldff1_gather_u64base_s64(...) __builtin_sve_svldff1_gather_u64base_s64(__VA_ARGS__)
#define svldff1_gather_s32index_u32(...) __builtin_sve_svldff1_gather_s32index_u32(__VA_ARGS__)
#define svldff1_gather_s32index_f32(...) __builtin_sve_svldff1_gather_s32index_f32(__VA_ARGS__)
#define svldff1_gather_s32index_s32(...) __builtin_sve_svldff1_gather_s32index_s32(__VA_ARGS__)
#define svldff1_gather_u32index_u32(...) __builtin_sve_svldff1_gather_u32index_u32(__VA_ARGS__)
#define svldff1_gather_u32index_f32(...) __builtin_sve_svldff1_gather_u32index_f32(__VA_ARGS__)
#define svldff1_gather_u32index_s32(...) __builtin_sve_svldff1_gather_u32index_s32(__VA_ARGS__)
#define svldff1_gather_s64index_u64(...) __builtin_sve_svldff1_gather_s64index_u64(__VA_ARGS__)
#define svldff1_gather_s64index_f64(...) __builtin_sve_svldff1_gather_s64index_f64(__VA_ARGS__)
#define svldff1_gather_s64index_s64(...) __builtin_sve_svldff1_gather_s64index_s64(__VA_ARGS__)
#define svldff1_gather_u64index_u64(...) __builtin_sve_svldff1_gather_u64index_u64(__VA_ARGS__)
#define svldff1_gather_u64index_f64(...) __builtin_sve_svldff1_gather_u64index_f64(__VA_ARGS__)
#define svldff1_gather_u64index_s64(...) __builtin_sve_svldff1_gather_u64index_s64(__VA_ARGS__)
#define svldff1_gather_s32offset_u32(...) __builtin_sve_svldff1_gather_s32offset_u32(__VA_ARGS__)
#define svldff1_gather_s32offset_f32(...) __builtin_sve_svldff1_gather_s32offset_f32(__VA_ARGS__)
#define svldff1_gather_s32offset_s32(...) __builtin_sve_svldff1_gather_s32offset_s32(__VA_ARGS__)
#define svldff1_gather_u32offset_u32(...) __builtin_sve_svldff1_gather_u32offset_u32(__VA_ARGS__)
#define svldff1_gather_u32offset_f32(...) __builtin_sve_svldff1_gather_u32offset_f32(__VA_ARGS__)
#define svldff1_gather_u32offset_s32(...) __builtin_sve_svldff1_gather_u32offset_s32(__VA_ARGS__)
#define svldff1_gather_s64offset_u64(...) __builtin_sve_svldff1_gather_s64offset_u64(__VA_ARGS__)
#define svldff1_gather_s64offset_f64(...) __builtin_sve_svldff1_gather_s64offset_f64(__VA_ARGS__)
#define svldff1_gather_s64offset_s64(...) __builtin_sve_svldff1_gather_s64offset_s64(__VA_ARGS__)
#define svldff1_gather_u64offset_u64(...) __builtin_sve_svldff1_gather_u64offset_u64(__VA_ARGS__)
#define svldff1_gather_u64offset_f64(...) __builtin_sve_svldff1_gather_u64offset_f64(__VA_ARGS__)
#define svldff1_gather_u64offset_s64(...) __builtin_sve_svldff1_gather_u64offset_s64(__VA_ARGS__)
#define svldff1_vnum_u8(...) __builtin_sve_svldff1_vnum_u8(__VA_ARGS__)
#define svldff1_vnum_u32(...) __builtin_sve_svldff1_vnum_u32(__VA_ARGS__)
#define svldff1_vnum_u64(...) __builtin_sve_svldff1_vnum_u64(__VA_ARGS__)
#define svldff1_vnum_u16(...) __builtin_sve_svldff1_vnum_u16(__VA_ARGS__)
#define svldff1_vnum_s8(...) __builtin_sve_svldff1_vnum_s8(__VA_ARGS__)
#define svldff1_vnum_f64(...) __builtin_sve_svldff1_vnum_f64(__VA_ARGS__)
#define svldff1_vnum_f32(...) __builtin_sve_svldff1_vnum_f32(__VA_ARGS__)
#define svldff1_vnum_f16(...) __builtin_sve_svldff1_vnum_f16(__VA_ARGS__)
#define svldff1_vnum_s32(...) __builtin_sve_svldff1_vnum_s32(__VA_ARGS__)
#define svldff1_vnum_s64(...) __builtin_sve_svldff1_vnum_s64(__VA_ARGS__)
#define svldff1_vnum_s16(...) __builtin_sve_svldff1_vnum_s16(__VA_ARGS__)
#define svldff1sb_gather_u32base_offset_u32(...) __builtin_sve_svldff1sb_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1sb_gather_u64base_offset_u64(...) __builtin_sve_svldff1sb_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1sb_gather_u32base_offset_s32(...) __builtin_sve_svldff1sb_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1sb_gather_u64base_offset_s64(...) __builtin_sve_svldff1sb_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1sb_gather_u32base_u32(...) __builtin_sve_svldff1sb_gather_u32base_u32(__VA_ARGS__)
#define svldff1sb_gather_u64base_u64(...) __builtin_sve_svldff1sb_gather_u64base_u64(__VA_ARGS__)
#define svldff1sb_gather_u32base_s32(...) __builtin_sve_svldff1sb_gather_u32base_s32(__VA_ARGS__)
#define svldff1sb_gather_u64base_s64(...) __builtin_sve_svldff1sb_gather_u64base_s64(__VA_ARGS__)
#define svldff1sb_gather_s32offset_u32(...) __builtin_sve_svldff1sb_gather_s32offset_u32(__VA_ARGS__)
#define svldff1sb_gather_s32offset_s32(...) __builtin_sve_svldff1sb_gather_s32offset_s32(__VA_ARGS__)
#define svldff1sb_gather_u32offset_u32(...) __builtin_sve_svldff1sb_gather_u32offset_u32(__VA_ARGS__)
#define svldff1sb_gather_u32offset_s32(...) __builtin_sve_svldff1sb_gather_u32offset_s32(__VA_ARGS__)
#define svldff1sb_gather_s64offset_u64(...) __builtin_sve_svldff1sb_gather_s64offset_u64(__VA_ARGS__)
#define svldff1sb_gather_s64offset_s64(...) __builtin_sve_svldff1sb_gather_s64offset_s64(__VA_ARGS__)
#define svldff1sb_gather_u64offset_u64(...) __builtin_sve_svldff1sb_gather_u64offset_u64(__VA_ARGS__)
#define svldff1sb_gather_u64offset_s64(...) __builtin_sve_svldff1sb_gather_u64offset_s64(__VA_ARGS__)
#define svldff1sb_vnum_u32(...) __builtin_sve_svldff1sb_vnum_u32(__VA_ARGS__)
#define svldff1sb_vnum_u64(...) __builtin_sve_svldff1sb_vnum_u64(__VA_ARGS__)
#define svldff1sb_vnum_u16(...) __builtin_sve_svldff1sb_vnum_u16(__VA_ARGS__)
#define svldff1sb_vnum_s32(...) __builtin_sve_svldff1sb_vnum_s32(__VA_ARGS__)
#define svldff1sb_vnum_s64(...) __builtin_sve_svldff1sb_vnum_s64(__VA_ARGS__)
#define svldff1sb_vnum_s16(...) __builtin_sve_svldff1sb_vnum_s16(__VA_ARGS__)
#define svldff1sb_u32(...) __builtin_sve_svldff1sb_u32(__VA_ARGS__)
#define svldff1sb_u64(...) __builtin_sve_svldff1sb_u64(__VA_ARGS__)
#define svldff1sb_u16(...) __builtin_sve_svldff1sb_u16(__VA_ARGS__)
#define svldff1sb_s32(...) __builtin_sve_svldff1sb_s32(__VA_ARGS__)
#define svldff1sb_s64(...) __builtin_sve_svldff1sb_s64(__VA_ARGS__)
#define svldff1sb_s16(...) __builtin_sve_svldff1sb_s16(__VA_ARGS__)
#define svldff1sh_gather_u32base_index_u32(...) __builtin_sve_svldff1sh_gather_u32base_index_u32(__VA_ARGS__)
#define svldff1sh_gather_u64base_index_u64(...) __builtin_sve_svldff1sh_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1sh_gather_u32base_index_s32(...) __builtin_sve_svldff1sh_gather_u32base_index_s32(__VA_ARGS__)
#define svldff1sh_gather_u64base_index_s64(...) __builtin_sve_svldff1sh_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1sh_gather_u32base_offset_u32(...) __builtin_sve_svldff1sh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1sh_gather_u64base_offset_u64(...) __builtin_sve_svldff1sh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1sh_gather_u32base_offset_s32(...) __builtin_sve_svldff1sh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1sh_gather_u64base_offset_s64(...) __builtin_sve_svldff1sh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1sh_gather_u32base_u32(...) __builtin_sve_svldff1sh_gather_u32base_u32(__VA_ARGS__)
#define svldff1sh_gather_u64base_u64(...) __builtin_sve_svldff1sh_gather_u64base_u64(__VA_ARGS__)
#define svldff1sh_gather_u32base_s32(...) __builtin_sve_svldff1sh_gather_u32base_s32(__VA_ARGS__)
#define svldff1sh_gather_u64base_s64(...) __builtin_sve_svldff1sh_gather_u64base_s64(__VA_ARGS__)
#define svldff1sh_gather_s32index_u32(...) __builtin_sve_svldff1sh_gather_s32index_u32(__VA_ARGS__)
#define svldff1sh_gather_s32index_s32(...) __builtin_sve_svldff1sh_gather_s32index_s32(__VA_ARGS__)
#define svldff1sh_gather_u32index_u32(...) __builtin_sve_svldff1sh_gather_u32index_u32(__VA_ARGS__)
#define svldff1sh_gather_u32index_s32(...) __builtin_sve_svldff1sh_gather_u32index_s32(__VA_ARGS__)
#define svldff1sh_gather_s64index_u64(...) __builtin_sve_svldff1sh_gather_s64index_u64(__VA_ARGS__)
#define svldff1sh_gather_s64index_s64(...) __builtin_sve_svldff1sh_gather_s64index_s64(__VA_ARGS__)
#define svldff1sh_gather_u64index_u64(...) __builtin_sve_svldff1sh_gather_u64index_u64(__VA_ARGS__)
#define svldff1sh_gather_u64index_s64(...) __builtin_sve_svldff1sh_gather_u64index_s64(__VA_ARGS__)
#define svldff1sh_gather_s32offset_u32(...) __builtin_sve_svldff1sh_gather_s32offset_u32(__VA_ARGS__)
#define svldff1sh_gather_s32offset_s32(...) __builtin_sve_svldff1sh_gather_s32offset_s32(__VA_ARGS__)
#define svldff1sh_gather_u32offset_u32(...) __builtin_sve_svldff1sh_gather_u32offset_u32(__VA_ARGS__)
#define svldff1sh_gather_u32offset_s32(...) __builtin_sve_svldff1sh_gather_u32offset_s32(__VA_ARGS__)
#define svldff1sh_gather_s64offset_u64(...) __builtin_sve_svldff1sh_gather_s64offset_u64(__VA_ARGS__)
#define svldff1sh_gather_s64offset_s64(...) __builtin_sve_svldff1sh_gather_s64offset_s64(__VA_ARGS__)
#define svldff1sh_gather_u64offset_u64(...) __builtin_sve_svldff1sh_gather_u64offset_u64(__VA_ARGS__)
#define svldff1sh_gather_u64offset_s64(...) __builtin_sve_svldff1sh_gather_u64offset_s64(__VA_ARGS__)
#define svldff1sh_vnum_u32(...) __builtin_sve_svldff1sh_vnum_u32(__VA_ARGS__)
#define svldff1sh_vnum_u64(...) __builtin_sve_svldff1sh_vnum_u64(__VA_ARGS__)
#define svldff1sh_vnum_s32(...) __builtin_sve_svldff1sh_vnum_s32(__VA_ARGS__)
#define svldff1sh_vnum_s64(...) __builtin_sve_svldff1sh_vnum_s64(__VA_ARGS__)
#define svldff1sh_u32(...) __builtin_sve_svldff1sh_u32(__VA_ARGS__)
#define svldff1sh_u64(...) __builtin_sve_svldff1sh_u64(__VA_ARGS__)
#define svldff1sh_s32(...) __builtin_sve_svldff1sh_s32(__VA_ARGS__)
#define svldff1sh_s64(...) __builtin_sve_svldff1sh_s64(__VA_ARGS__)
#define svldff1sw_gather_u64base_index_u64(...) __builtin_sve_svldff1sw_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1sw_gather_u64base_index_s64(...) __builtin_sve_svldff1sw_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1sw_gather_u64base_offset_u64(...) __builtin_sve_svldff1sw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1sw_gather_u64base_offset_s64(...) __builtin_sve_svldff1sw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1sw_gather_u64base_u64(...) __builtin_sve_svldff1sw_gather_u64base_u64(__VA_ARGS__)
#define svldff1sw_gather_u64base_s64(...) __builtin_sve_svldff1sw_gather_u64base_s64(__VA_ARGS__)
#define svldff1sw_gather_s64index_u64(...) __builtin_sve_svldff1sw_gather_s64index_u64(__VA_ARGS__)
#define svldff1sw_gather_s64index_s64(...) __builtin_sve_svldff1sw_gather_s64index_s64(__VA_ARGS__)
#define svldff1sw_gather_u64index_u64(...) __builtin_sve_svldff1sw_gather_u64index_u64(__VA_ARGS__)
#define svldff1sw_gather_u64index_s64(...) __builtin_sve_svldff1sw_gather_u64index_s64(__VA_ARGS__)
#define svldff1sw_gather_s64offset_u64(...) __builtin_sve_svldff1sw_gather_s64offset_u64(__VA_ARGS__)
#define svldff1sw_gather_s64offset_s64(...) __builtin_sve_svldff1sw_gather_s64offset_s64(__VA_ARGS__)
#define svldff1sw_gather_u64offset_u64(...) __builtin_sve_svldff1sw_gather_u64offset_u64(__VA_ARGS__)
#define svldff1sw_gather_u64offset_s64(...) __builtin_sve_svldff1sw_gather_u64offset_s64(__VA_ARGS__)
#define svldff1sw_vnum_u64(...) __builtin_sve_svldff1sw_vnum_u64(__VA_ARGS__)
#define svldff1sw_vnum_s64(...) __builtin_sve_svldff1sw_vnum_s64(__VA_ARGS__)
#define svldff1sw_u64(...) __builtin_sve_svldff1sw_u64(__VA_ARGS__)
#define svldff1sw_s64(...) __builtin_sve_svldff1sw_s64(__VA_ARGS__)
#define svldff1ub_gather_u32base_offset_u32(...) __builtin_sve_svldff1ub_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1ub_gather_u64base_offset_u64(...) __builtin_sve_svldff1ub_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1ub_gather_u32base_offset_s32(...) __builtin_sve_svldff1ub_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1ub_gather_u64base_offset_s64(...) __builtin_sve_svldff1ub_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1ub_gather_u32base_u32(...) __builtin_sve_svldff1ub_gather_u32base_u32(__VA_ARGS__)
#define svldff1ub_gather_u64base_u64(...) __builtin_sve_svldff1ub_gather_u64base_u64(__VA_ARGS__)
#define svldff1ub_gather_u32base_s32(...) __builtin_sve_svldff1ub_gather_u32base_s32(__VA_ARGS__)
#define svldff1ub_gather_u64base_s64(...) __builtin_sve_svldff1ub_gather_u64base_s64(__VA_ARGS__)
#define svldff1ub_gather_s32offset_u32(...) __builtin_sve_svldff1ub_gather_s32offset_u32(__VA_ARGS__)
#define svldff1ub_gather_s32offset_s32(...) __builtin_sve_svldff1ub_gather_s32offset_s32(__VA_ARGS__)
#define svldff1ub_gather_u32offset_u32(...) __builtin_sve_svldff1ub_gather_u32offset_u32(__VA_ARGS__)
#define svldff1ub_gather_u32offset_s32(...) __builtin_sve_svldff1ub_gather_u32offset_s32(__VA_ARGS__)
#define svldff1ub_gather_s64offset_u64(...) __builtin_sve_svldff1ub_gather_s64offset_u64(__VA_ARGS__)
#define svldff1ub_gather_s64offset_s64(...) __builtin_sve_svldff1ub_gather_s64offset_s64(__VA_ARGS__)
#define svldff1ub_gather_u64offset_u64(...) __builtin_sve_svldff1ub_gather_u64offset_u64(__VA_ARGS__)
#define svldff1ub_gather_u64offset_s64(...) __builtin_sve_svldff1ub_gather_u64offset_s64(__VA_ARGS__)
#define svldff1ub_vnum_u32(...) __builtin_sve_svldff1ub_vnum_u32(__VA_ARGS__)
#define svldff1ub_vnum_u64(...) __builtin_sve_svldff1ub_vnum_u64(__VA_ARGS__)
#define svldff1ub_vnum_u16(...) __builtin_sve_svldff1ub_vnum_u16(__VA_ARGS__)
#define svldff1ub_vnum_s32(...) __builtin_sve_svldff1ub_vnum_s32(__VA_ARGS__)
#define svldff1ub_vnum_s64(...) __builtin_sve_svldff1ub_vnum_s64(__VA_ARGS__)
#define svldff1ub_vnum_s16(...) __builtin_sve_svldff1ub_vnum_s16(__VA_ARGS__)
#define svldff1ub_u32(...) __builtin_sve_svldff1ub_u32(__VA_ARGS__)
#define svldff1ub_u64(...) __builtin_sve_svldff1ub_u64(__VA_ARGS__)
#define svldff1ub_u16(...) __builtin_sve_svldff1ub_u16(__VA_ARGS__)
#define svldff1ub_s32(...) __builtin_sve_svldff1ub_s32(__VA_ARGS__)
#define svldff1ub_s64(...) __builtin_sve_svldff1ub_s64(__VA_ARGS__)
#define svldff1ub_s16(...) __builtin_sve_svldff1ub_s16(__VA_ARGS__)
#define svldff1uh_gather_u32base_index_u32(...) __builtin_sve_svldff1uh_gather_u32base_index_u32(__VA_ARGS__)
#define svldff1uh_gather_u64base_index_u64(...) __builtin_sve_svldff1uh_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1uh_gather_u32base_index_s32(...) __builtin_sve_svldff1uh_gather_u32base_index_s32(__VA_ARGS__)
#define svldff1uh_gather_u64base_index_s64(...) __builtin_sve_svldff1uh_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1uh_gather_u32base_offset_u32(...) __builtin_sve_svldff1uh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldff1uh_gather_u64base_offset_u64(...) __builtin_sve_svldff1uh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1uh_gather_u32base_offset_s32(...) __builtin_sve_svldff1uh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldff1uh_gather_u64base_offset_s64(...) __builtin_sve_svldff1uh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1uh_gather_u32base_u32(...) __builtin_sve_svldff1uh_gather_u32base_u32(__VA_ARGS__)
#define svldff1uh_gather_u64base_u64(...) __builtin_sve_svldff1uh_gather_u64base_u64(__VA_ARGS__)
#define svldff1uh_gather_u32base_s32(...) __builtin_sve_svldff1uh_gather_u32base_s32(__VA_ARGS__)
#define svldff1uh_gather_u64base_s64(...) __builtin_sve_svldff1uh_gather_u64base_s64(__VA_ARGS__)
#define svldff1uh_gather_s32index_u32(...) __builtin_sve_svldff1uh_gather_s32index_u32(__VA_ARGS__)
#define svldff1uh_gather_s32index_s32(...) __builtin_sve_svldff1uh_gather_s32index_s32(__VA_ARGS__)
#define svldff1uh_gather_u32index_u32(...) __builtin_sve_svldff1uh_gather_u32index_u32(__VA_ARGS__)
#define svldff1uh_gather_u32index_s32(...) __builtin_sve_svldff1uh_gather_u32index_s32(__VA_ARGS__)
#define svldff1uh_gather_s64index_u64(...) __builtin_sve_svldff1uh_gather_s64index_u64(__VA_ARGS__)
#define svldff1uh_gather_s64index_s64(...) __builtin_sve_svldff1uh_gather_s64index_s64(__VA_ARGS__)
#define svldff1uh_gather_u64index_u64(...) __builtin_sve_svldff1uh_gather_u64index_u64(__VA_ARGS__)
#define svldff1uh_gather_u64index_s64(...) __builtin_sve_svldff1uh_gather_u64index_s64(__VA_ARGS__)
#define svldff1uh_gather_s32offset_u32(...) __builtin_sve_svldff1uh_gather_s32offset_u32(__VA_ARGS__)
#define svldff1uh_gather_s32offset_s32(...) __builtin_sve_svldff1uh_gather_s32offset_s32(__VA_ARGS__)
#define svldff1uh_gather_u32offset_u32(...) __builtin_sve_svldff1uh_gather_u32offset_u32(__VA_ARGS__)
#define svldff1uh_gather_u32offset_s32(...) __builtin_sve_svldff1uh_gather_u32offset_s32(__VA_ARGS__)
#define svldff1uh_gather_s64offset_u64(...) __builtin_sve_svldff1uh_gather_s64offset_u64(__VA_ARGS__)
#define svldff1uh_gather_s64offset_s64(...) __builtin_sve_svldff1uh_gather_s64offset_s64(__VA_ARGS__)
#define svldff1uh_gather_u64offset_u64(...) __builtin_sve_svldff1uh_gather_u64offset_u64(__VA_ARGS__)
#define svldff1uh_gather_u64offset_s64(...) __builtin_sve_svldff1uh_gather_u64offset_s64(__VA_ARGS__)
#define svldff1uh_vnum_u32(...) __builtin_sve_svldff1uh_vnum_u32(__VA_ARGS__)
#define svldff1uh_vnum_u64(...) __builtin_sve_svldff1uh_vnum_u64(__VA_ARGS__)
#define svldff1uh_vnum_s32(...) __builtin_sve_svldff1uh_vnum_s32(__VA_ARGS__)
#define svldff1uh_vnum_s64(...) __builtin_sve_svldff1uh_vnum_s64(__VA_ARGS__)
#define svldff1uh_u32(...) __builtin_sve_svldff1uh_u32(__VA_ARGS__)
#define svldff1uh_u64(...) __builtin_sve_svldff1uh_u64(__VA_ARGS__)
#define svldff1uh_s32(...) __builtin_sve_svldff1uh_s32(__VA_ARGS__)
#define svldff1uh_s64(...) __builtin_sve_svldff1uh_s64(__VA_ARGS__)
#define svldff1uw_gather_u64base_index_u64(...) __builtin_sve_svldff1uw_gather_u64base_index_u64(__VA_ARGS__)
#define svldff1uw_gather_u64base_index_s64(...) __builtin_sve_svldff1uw_gather_u64base_index_s64(__VA_ARGS__)
#define svldff1uw_gather_u64base_offset_u64(...) __builtin_sve_svldff1uw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldff1uw_gather_u64base_offset_s64(...) __builtin_sve_svldff1uw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldff1uw_gather_u64base_u64(...) __builtin_sve_svldff1uw_gather_u64base_u64(__VA_ARGS__)
#define svldff1uw_gather_u64base_s64(...) __builtin_sve_svldff1uw_gather_u64base_s64(__VA_ARGS__)
#define svldff1uw_gather_s64index_u64(...) __builtin_sve_svldff1uw_gather_s64index_u64(__VA_ARGS__)
#define svldff1uw_gather_s64index_s64(...) __builtin_sve_svldff1uw_gather_s64index_s64(__VA_ARGS__)
#define svldff1uw_gather_u64index_u64(...) __builtin_sve_svldff1uw_gather_u64index_u64(__VA_ARGS__)
#define svldff1uw_gather_u64index_s64(...) __builtin_sve_svldff1uw_gather_u64index_s64(__VA_ARGS__)
#define svldff1uw_gather_s64offset_u64(...) __builtin_sve_svldff1uw_gather_s64offset_u64(__VA_ARGS__)
#define svldff1uw_gather_s64offset_s64(...) __builtin_sve_svldff1uw_gather_s64offset_s64(__VA_ARGS__)
#define svldff1uw_gather_u64offset_u64(...) __builtin_sve_svldff1uw_gather_u64offset_u64(__VA_ARGS__)
#define svldff1uw_gather_u64offset_s64(...) __builtin_sve_svldff1uw_gather_u64offset_s64(__VA_ARGS__)
#define svldff1uw_vnum_u64(...) __builtin_sve_svldff1uw_vnum_u64(__VA_ARGS__)
#define svldff1uw_vnum_s64(...) __builtin_sve_svldff1uw_vnum_s64(__VA_ARGS__)
#define svldff1uw_u64(...) __builtin_sve_svldff1uw_u64(__VA_ARGS__)
#define svldff1uw_s64(...) __builtin_sve_svldff1uw_s64(__VA_ARGS__)
#define svldnf1_u8(...) __builtin_sve_svldnf1_u8(__VA_ARGS__)
#define svldnf1_u32(...) __builtin_sve_svldnf1_u32(__VA_ARGS__)
#define svldnf1_u64(...) __builtin_sve_svldnf1_u64(__VA_ARGS__)
#define svldnf1_u16(...) __builtin_sve_svldnf1_u16(__VA_ARGS__)
#define svldnf1_s8(...) __builtin_sve_svldnf1_s8(__VA_ARGS__)
#define svldnf1_f64(...) __builtin_sve_svldnf1_f64(__VA_ARGS__)
#define svldnf1_f32(...) __builtin_sve_svldnf1_f32(__VA_ARGS__)
#define svldnf1_f16(...) __builtin_sve_svldnf1_f16(__VA_ARGS__)
#define svldnf1_s32(...) __builtin_sve_svldnf1_s32(__VA_ARGS__)
#define svldnf1_s64(...) __builtin_sve_svldnf1_s64(__VA_ARGS__)
#define svldnf1_s16(...) __builtin_sve_svldnf1_s16(__VA_ARGS__)
#define svldnf1_vnum_u8(...) __builtin_sve_svldnf1_vnum_u8(__VA_ARGS__)
#define svldnf1_vnum_u32(...) __builtin_sve_svldnf1_vnum_u32(__VA_ARGS__)
#define svldnf1_vnum_u64(...) __builtin_sve_svldnf1_vnum_u64(__VA_ARGS__)
#define svldnf1_vnum_u16(...) __builtin_sve_svldnf1_vnum_u16(__VA_ARGS__)
#define svldnf1_vnum_s8(...) __builtin_sve_svldnf1_vnum_s8(__VA_ARGS__)
#define svldnf1_vnum_f64(...) __builtin_sve_svldnf1_vnum_f64(__VA_ARGS__)
#define svldnf1_vnum_f32(...) __builtin_sve_svldnf1_vnum_f32(__VA_ARGS__)
#define svldnf1_vnum_f16(...) __builtin_sve_svldnf1_vnum_f16(__VA_ARGS__)
#define svldnf1_vnum_s32(...) __builtin_sve_svldnf1_vnum_s32(__VA_ARGS__)
#define svldnf1_vnum_s64(...) __builtin_sve_svldnf1_vnum_s64(__VA_ARGS__)
#define svldnf1_vnum_s16(...) __builtin_sve_svldnf1_vnum_s16(__VA_ARGS__)
#define svldnf1sb_vnum_u32(...) __builtin_sve_svldnf1sb_vnum_u32(__VA_ARGS__)
#define svldnf1sb_vnum_u64(...) __builtin_sve_svldnf1sb_vnum_u64(__VA_ARGS__)
#define svldnf1sb_vnum_u16(...) __builtin_sve_svldnf1sb_vnum_u16(__VA_ARGS__)
#define svldnf1sb_vnum_s32(...) __builtin_sve_svldnf1sb_vnum_s32(__VA_ARGS__)
#define svldnf1sb_vnum_s64(...) __builtin_sve_svldnf1sb_vnum_s64(__VA_ARGS__)
#define svldnf1sb_vnum_s16(...) __builtin_sve_svldnf1sb_vnum_s16(__VA_ARGS__)
#define svldnf1sb_u32(...) __builtin_sve_svldnf1sb_u32(__VA_ARGS__)
#define svldnf1sb_u64(...) __builtin_sve_svldnf1sb_u64(__VA_ARGS__)
#define svldnf1sb_u16(...) __builtin_sve_svldnf1sb_u16(__VA_ARGS__)
#define svldnf1sb_s32(...) __builtin_sve_svldnf1sb_s32(__VA_ARGS__)
#define svldnf1sb_s64(...) __builtin_sve_svldnf1sb_s64(__VA_ARGS__)
#define svldnf1sb_s16(...) __builtin_sve_svldnf1sb_s16(__VA_ARGS__)
#define svldnf1sh_vnum_u32(...) __builtin_sve_svldnf1sh_vnum_u32(__VA_ARGS__)
#define svldnf1sh_vnum_u64(...) __builtin_sve_svldnf1sh_vnum_u64(__VA_ARGS__)
#define svldnf1sh_vnum_s32(...) __builtin_sve_svldnf1sh_vnum_s32(__VA_ARGS__)
#define svldnf1sh_vnum_s64(...) __builtin_sve_svldnf1sh_vnum_s64(__VA_ARGS__)
#define svldnf1sh_u32(...) __builtin_sve_svldnf1sh_u32(__VA_ARGS__)
#define svldnf1sh_u64(...) __builtin_sve_svldnf1sh_u64(__VA_ARGS__)
#define svldnf1sh_s32(...) __builtin_sve_svldnf1sh_s32(__VA_ARGS__)
#define svldnf1sh_s64(...) __builtin_sve_svldnf1sh_s64(__VA_ARGS__)
#define svldnf1sw_vnum_u64(...) __builtin_sve_svldnf1sw_vnum_u64(__VA_ARGS__)
#define svldnf1sw_vnum_s64(...) __builtin_sve_svldnf1sw_vnum_s64(__VA_ARGS__)
#define svldnf1sw_u64(...) __builtin_sve_svldnf1sw_u64(__VA_ARGS__)
#define svldnf1sw_s64(...) __builtin_sve_svldnf1sw_s64(__VA_ARGS__)
#define svldnf1ub_vnum_u32(...) __builtin_sve_svldnf1ub_vnum_u32(__VA_ARGS__)
#define svldnf1ub_vnum_u64(...) __builtin_sve_svldnf1ub_vnum_u64(__VA_ARGS__)
#define svldnf1ub_vnum_u16(...) __builtin_sve_svldnf1ub_vnum_u16(__VA_ARGS__)
#define svldnf1ub_vnum_s32(...) __builtin_sve_svldnf1ub_vnum_s32(__VA_ARGS__)
#define svldnf1ub_vnum_s64(...) __builtin_sve_svldnf1ub_vnum_s64(__VA_ARGS__)
#define svldnf1ub_vnum_s16(...) __builtin_sve_svldnf1ub_vnum_s16(__VA_ARGS__)
#define svldnf1ub_u32(...) __builtin_sve_svldnf1ub_u32(__VA_ARGS__)
#define svldnf1ub_u64(...) __builtin_sve_svldnf1ub_u64(__VA_ARGS__)
#define svldnf1ub_u16(...) __builtin_sve_svldnf1ub_u16(__VA_ARGS__)
#define svldnf1ub_s32(...) __builtin_sve_svldnf1ub_s32(__VA_ARGS__)
#define svldnf1ub_s64(...) __builtin_sve_svldnf1ub_s64(__VA_ARGS__)
#define svldnf1ub_s16(...) __builtin_sve_svldnf1ub_s16(__VA_ARGS__)
#define svldnf1uh_vnum_u32(...) __builtin_sve_svldnf1uh_vnum_u32(__VA_ARGS__)
#define svldnf1uh_vnum_u64(...) __builtin_sve_svldnf1uh_vnum_u64(__VA_ARGS__)
#define svldnf1uh_vnum_s32(...) __builtin_sve_svldnf1uh_vnum_s32(__VA_ARGS__)
#define svldnf1uh_vnum_s64(...) __builtin_sve_svldnf1uh_vnum_s64(__VA_ARGS__)
#define svldnf1uh_u32(...) __builtin_sve_svldnf1uh_u32(__VA_ARGS__)
#define svldnf1uh_u64(...) __builtin_sve_svldnf1uh_u64(__VA_ARGS__)
#define svldnf1uh_s32(...) __builtin_sve_svldnf1uh_s32(__VA_ARGS__)
#define svldnf1uh_s64(...) __builtin_sve_svldnf1uh_s64(__VA_ARGS__)
#define svldnf1uw_vnum_u64(...) __builtin_sve_svldnf1uw_vnum_u64(__VA_ARGS__)
#define svldnf1uw_vnum_s64(...) __builtin_sve_svldnf1uw_vnum_s64(__VA_ARGS__)
#define svldnf1uw_u64(...) __builtin_sve_svldnf1uw_u64(__VA_ARGS__)
#define svldnf1uw_s64(...) __builtin_sve_svldnf1uw_s64(__VA_ARGS__)
#define svldnt1_u8(...) __builtin_sve_svldnt1_u8(__VA_ARGS__)
#define svldnt1_u32(...) __builtin_sve_svldnt1_u32(__VA_ARGS__)
#define svldnt1_u64(...) __builtin_sve_svldnt1_u64(__VA_ARGS__)
#define svldnt1_u16(...) __builtin_sve_svldnt1_u16(__VA_ARGS__)
#define svldnt1_s8(...) __builtin_sve_svldnt1_s8(__VA_ARGS__)
#define svldnt1_f64(...) __builtin_sve_svldnt1_f64(__VA_ARGS__)
#define svldnt1_f32(...) __builtin_sve_svldnt1_f32(__VA_ARGS__)
#define svldnt1_f16(...) __builtin_sve_svldnt1_f16(__VA_ARGS__)
#define svldnt1_s32(...) __builtin_sve_svldnt1_s32(__VA_ARGS__)
#define svldnt1_s64(...) __builtin_sve_svldnt1_s64(__VA_ARGS__)
#define svldnt1_s16(...) __builtin_sve_svldnt1_s16(__VA_ARGS__)
#define svldnt1_vnum_u8(...) __builtin_sve_svldnt1_vnum_u8(__VA_ARGS__)
#define svldnt1_vnum_u32(...) __builtin_sve_svldnt1_vnum_u32(__VA_ARGS__)
#define svldnt1_vnum_u64(...) __builtin_sve_svldnt1_vnum_u64(__VA_ARGS__)
#define svldnt1_vnum_u16(...) __builtin_sve_svldnt1_vnum_u16(__VA_ARGS__)
#define svldnt1_vnum_s8(...) __builtin_sve_svldnt1_vnum_s8(__VA_ARGS__)
#define svldnt1_vnum_f64(...) __builtin_sve_svldnt1_vnum_f64(__VA_ARGS__)
#define svldnt1_vnum_f32(...) __builtin_sve_svldnt1_vnum_f32(__VA_ARGS__)
#define svldnt1_vnum_f16(...) __builtin_sve_svldnt1_vnum_f16(__VA_ARGS__)
#define svldnt1_vnum_s32(...) __builtin_sve_svldnt1_vnum_s32(__VA_ARGS__)
#define svldnt1_vnum_s64(...) __builtin_sve_svldnt1_vnum_s64(__VA_ARGS__)
#define svldnt1_vnum_s16(...) __builtin_sve_svldnt1_vnum_s16(__VA_ARGS__)
#define svmax_n_s8_m(...) __builtin_sve_svmax_n_s8_m(__VA_ARGS__)
#define svmax_n_s32_m(...) __builtin_sve_svmax_n_s32_m(__VA_ARGS__)
#define svmax_n_s64_m(...) __builtin_sve_svmax_n_s64_m(__VA_ARGS__)
#define svmax_n_s16_m(...) __builtin_sve_svmax_n_s16_m(__VA_ARGS__)
#define svmax_n_s8_x(...) __builtin_sve_svmax_n_s8_x(__VA_ARGS__)
#define svmax_n_s32_x(...) __builtin_sve_svmax_n_s32_x(__VA_ARGS__)
#define svmax_n_s64_x(...) __builtin_sve_svmax_n_s64_x(__VA_ARGS__)
#define svmax_n_s16_x(...) __builtin_sve_svmax_n_s16_x(__VA_ARGS__)
#define svmax_n_s8_z(...) __builtin_sve_svmax_n_s8_z(__VA_ARGS__)
#define svmax_n_s32_z(...) __builtin_sve_svmax_n_s32_z(__VA_ARGS__)
#define svmax_n_s64_z(...) __builtin_sve_svmax_n_s64_z(__VA_ARGS__)
#define svmax_n_s16_z(...) __builtin_sve_svmax_n_s16_z(__VA_ARGS__)
#define svmax_n_u8_m(...) __builtin_sve_svmax_n_u8_m(__VA_ARGS__)
#define svmax_n_u32_m(...) __builtin_sve_svmax_n_u32_m(__VA_ARGS__)
#define svmax_n_u64_m(...) __builtin_sve_svmax_n_u64_m(__VA_ARGS__)
#define svmax_n_u16_m(...) __builtin_sve_svmax_n_u16_m(__VA_ARGS__)
#define svmax_n_u8_x(...) __builtin_sve_svmax_n_u8_x(__VA_ARGS__)
#define svmax_n_u32_x(...) __builtin_sve_svmax_n_u32_x(__VA_ARGS__)
#define svmax_n_u64_x(...) __builtin_sve_svmax_n_u64_x(__VA_ARGS__)
#define svmax_n_u16_x(...) __builtin_sve_svmax_n_u16_x(__VA_ARGS__)
#define svmax_n_u8_z(...) __builtin_sve_svmax_n_u8_z(__VA_ARGS__)
#define svmax_n_u32_z(...) __builtin_sve_svmax_n_u32_z(__VA_ARGS__)
#define svmax_n_u64_z(...) __builtin_sve_svmax_n_u64_z(__VA_ARGS__)
#define svmax_n_u16_z(...) __builtin_sve_svmax_n_u16_z(__VA_ARGS__)
#define svmax_s8_m(...) __builtin_sve_svmax_s8_m(__VA_ARGS__)
#define svmax_s32_m(...) __builtin_sve_svmax_s32_m(__VA_ARGS__)
#define svmax_s64_m(...) __builtin_sve_svmax_s64_m(__VA_ARGS__)
#define svmax_s16_m(...) __builtin_sve_svmax_s16_m(__VA_ARGS__)
#define svmax_s8_x(...) __builtin_sve_svmax_s8_x(__VA_ARGS__)
#define svmax_s32_x(...) __builtin_sve_svmax_s32_x(__VA_ARGS__)
#define svmax_s64_x(...) __builtin_sve_svmax_s64_x(__VA_ARGS__)
#define svmax_s16_x(...) __builtin_sve_svmax_s16_x(__VA_ARGS__)
#define svmax_s8_z(...) __builtin_sve_svmax_s8_z(__VA_ARGS__)
#define svmax_s32_z(...) __builtin_sve_svmax_s32_z(__VA_ARGS__)
#define svmax_s64_z(...) __builtin_sve_svmax_s64_z(__VA_ARGS__)
#define svmax_s16_z(...) __builtin_sve_svmax_s16_z(__VA_ARGS__)
#define svmax_u8_m(...) __builtin_sve_svmax_u8_m(__VA_ARGS__)
#define svmax_u32_m(...) __builtin_sve_svmax_u32_m(__VA_ARGS__)
#define svmax_u64_m(...) __builtin_sve_svmax_u64_m(__VA_ARGS__)
#define svmax_u16_m(...) __builtin_sve_svmax_u16_m(__VA_ARGS__)
#define svmax_u8_x(...) __builtin_sve_svmax_u8_x(__VA_ARGS__)
#define svmax_u32_x(...) __builtin_sve_svmax_u32_x(__VA_ARGS__)
#define svmax_u64_x(...) __builtin_sve_svmax_u64_x(__VA_ARGS__)
#define svmax_u16_x(...) __builtin_sve_svmax_u16_x(__VA_ARGS__)
#define svmax_u8_z(...) __builtin_sve_svmax_u8_z(__VA_ARGS__)
#define svmax_u32_z(...) __builtin_sve_svmax_u32_z(__VA_ARGS__)
#define svmax_u64_z(...) __builtin_sve_svmax_u64_z(__VA_ARGS__)
#define svmax_u16_z(...) __builtin_sve_svmax_u16_z(__VA_ARGS__)
#define svmin_n_s8_m(...) __builtin_sve_svmin_n_s8_m(__VA_ARGS__)
#define svmin_n_s32_m(...) __builtin_sve_svmin_n_s32_m(__VA_ARGS__)
#define svmin_n_s64_m(...) __builtin_sve_svmin_n_s64_m(__VA_ARGS__)
#define svmin_n_s16_m(...) __builtin_sve_svmin_n_s16_m(__VA_ARGS__)
#define svmin_n_s8_x(...) __builtin_sve_svmin_n_s8_x(__VA_ARGS__)
#define svmin_n_s32_x(...) __builtin_sve_svmin_n_s32_x(__VA_ARGS__)
#define svmin_n_s64_x(...) __builtin_sve_svmin_n_s64_x(__VA_ARGS__)
#define svmin_n_s16_x(...) __builtin_sve_svmin_n_s16_x(__VA_ARGS__)
#define svmin_n_s8_z(...) __builtin_sve_svmin_n_s8_z(__VA_ARGS__)
#define svmin_n_s32_z(...) __builtin_sve_svmin_n_s32_z(__VA_ARGS__)
#define svmin_n_s64_z(...) __builtin_sve_svmin_n_s64_z(__VA_ARGS__)
#define svmin_n_s16_z(...) __builtin_sve_svmin_n_s16_z(__VA_ARGS__)
#define svmin_n_u8_m(...) __builtin_sve_svmin_n_u8_m(__VA_ARGS__)
#define svmin_n_u32_m(...) __builtin_sve_svmin_n_u32_m(__VA_ARGS__)
#define svmin_n_u64_m(...) __builtin_sve_svmin_n_u64_m(__VA_ARGS__)
#define svmin_n_u16_m(...) __builtin_sve_svmin_n_u16_m(__VA_ARGS__)
#define svmin_n_u8_x(...) __builtin_sve_svmin_n_u8_x(__VA_ARGS__)
#define svmin_n_u32_x(...) __builtin_sve_svmin_n_u32_x(__VA_ARGS__)
#define svmin_n_u64_x(...) __builtin_sve_svmin_n_u64_x(__VA_ARGS__)
#define svmin_n_u16_x(...) __builtin_sve_svmin_n_u16_x(__VA_ARGS__)
#define svmin_n_u8_z(...) __builtin_sve_svmin_n_u8_z(__VA_ARGS__)
#define svmin_n_u32_z(...) __builtin_sve_svmin_n_u32_z(__VA_ARGS__)
#define svmin_n_u64_z(...) __builtin_sve_svmin_n_u64_z(__VA_ARGS__)
#define svmin_n_u16_z(...) __builtin_sve_svmin_n_u16_z(__VA_ARGS__)
#define svmin_s8_m(...) __builtin_sve_svmin_s8_m(__VA_ARGS__)
#define svmin_s32_m(...) __builtin_sve_svmin_s32_m(__VA_ARGS__)
#define svmin_s64_m(...) __builtin_sve_svmin_s64_m(__VA_ARGS__)
#define svmin_s16_m(...) __builtin_sve_svmin_s16_m(__VA_ARGS__)
#define svmin_s8_x(...) __builtin_sve_svmin_s8_x(__VA_ARGS__)
#define svmin_s32_x(...) __builtin_sve_svmin_s32_x(__VA_ARGS__)
#define svmin_s64_x(...) __builtin_sve_svmin_s64_x(__VA_ARGS__)
#define svmin_s16_x(...) __builtin_sve_svmin_s16_x(__VA_ARGS__)
#define svmin_s8_z(...) __builtin_sve_svmin_s8_z(__VA_ARGS__)
#define svmin_s32_z(...) __builtin_sve_svmin_s32_z(__VA_ARGS__)
#define svmin_s64_z(...) __builtin_sve_svmin_s64_z(__VA_ARGS__)
#define svmin_s16_z(...) __builtin_sve_svmin_s16_z(__VA_ARGS__)
#define svmin_u8_m(...) __builtin_sve_svmin_u8_m(__VA_ARGS__)
#define svmin_u32_m(...) __builtin_sve_svmin_u32_m(__VA_ARGS__)
#define svmin_u64_m(...) __builtin_sve_svmin_u64_m(__VA_ARGS__)
#define svmin_u16_m(...) __builtin_sve_svmin_u16_m(__VA_ARGS__)
#define svmin_u8_x(...) __builtin_sve_svmin_u8_x(__VA_ARGS__)
#define svmin_u32_x(...) __builtin_sve_svmin_u32_x(__VA_ARGS__)
#define svmin_u64_x(...) __builtin_sve_svmin_u64_x(__VA_ARGS__)
#define svmin_u16_x(...) __builtin_sve_svmin_u16_x(__VA_ARGS__)
#define svmin_u8_z(...) __builtin_sve_svmin_u8_z(__VA_ARGS__)
#define svmin_u32_z(...) __builtin_sve_svmin_u32_z(__VA_ARGS__)
#define svmin_u64_z(...) __builtin_sve_svmin_u64_z(__VA_ARGS__)
#define svmin_u16_z(...) __builtin_sve_svmin_u16_z(__VA_ARGS__)
#define svmla_lane_f64(...) __builtin_sve_svmla_lane_f64(__VA_ARGS__)
#define svmla_lane_f32(...) __builtin_sve_svmla_lane_f32(__VA_ARGS__)
#define svmla_lane_f16(...) __builtin_sve_svmla_lane_f16(__VA_ARGS__)
#define svmul_n_u8_m(...) __builtin_sve_svmul_n_u8_m(__VA_ARGS__)
#define svmul_n_u32_m(...) __builtin_sve_svmul_n_u32_m(__VA_ARGS__)
#define svmul_n_u64_m(...) __builtin_sve_svmul_n_u64_m(__VA_ARGS__)
#define svmul_n_u16_m(...) __builtin_sve_svmul_n_u16_m(__VA_ARGS__)
#define svmul_n_s8_m(...) __builtin_sve_svmul_n_s8_m(__VA_ARGS__)
#define svmul_n_s32_m(...) __builtin_sve_svmul_n_s32_m(__VA_ARGS__)
#define svmul_n_s64_m(...) __builtin_sve_svmul_n_s64_m(__VA_ARGS__)
#define svmul_n_s16_m(...) __builtin_sve_svmul_n_s16_m(__VA_ARGS__)
#define svmul_n_u8_x(...) __builtin_sve_svmul_n_u8_x(__VA_ARGS__)
#define svmul_n_u32_x(...) __builtin_sve_svmul_n_u32_x(__VA_ARGS__)
#define svmul_n_u64_x(...) __builtin_sve_svmul_n_u64_x(__VA_ARGS__)
#define svmul_n_u16_x(...) __builtin_sve_svmul_n_u16_x(__VA_ARGS__)
#define svmul_n_s8_x(...) __builtin_sve_svmul_n_s8_x(__VA_ARGS__)
#define svmul_n_s32_x(...) __builtin_sve_svmul_n_s32_x(__VA_ARGS__)
#define svmul_n_s64_x(...) __builtin_sve_svmul_n_s64_x(__VA_ARGS__)
#define svmul_n_s16_x(...) __builtin_sve_svmul_n_s16_x(__VA_ARGS__)
#define svmul_n_u8_z(...) __builtin_sve_svmul_n_u8_z(__VA_ARGS__)
#define svmul_n_u32_z(...) __builtin_sve_svmul_n_u32_z(__VA_ARGS__)
#define svmul_n_u64_z(...) __builtin_sve_svmul_n_u64_z(__VA_ARGS__)
#define svmul_n_u16_z(...) __builtin_sve_svmul_n_u16_z(__VA_ARGS__)
#define svmul_n_s8_z(...) __builtin_sve_svmul_n_s8_z(__VA_ARGS__)
#define svmul_n_s32_z(...) __builtin_sve_svmul_n_s32_z(__VA_ARGS__)
#define svmul_n_s64_z(...) __builtin_sve_svmul_n_s64_z(__VA_ARGS__)
#define svmul_n_s16_z(...) __builtin_sve_svmul_n_s16_z(__VA_ARGS__)
#define svmul_u8_m(...) __builtin_sve_svmul_u8_m(__VA_ARGS__)
#define svmul_u32_m(...) __builtin_sve_svmul_u32_m(__VA_ARGS__)
#define svmul_u64_m(...) __builtin_sve_svmul_u64_m(__VA_ARGS__)
#define svmul_u16_m(...) __builtin_sve_svmul_u16_m(__VA_ARGS__)
#define svmul_s8_m(...) __builtin_sve_svmul_s8_m(__VA_ARGS__)
#define svmul_s32_m(...) __builtin_sve_svmul_s32_m(__VA_ARGS__)
#define svmul_s64_m(...) __builtin_sve_svmul_s64_m(__VA_ARGS__)
#define svmul_s16_m(...) __builtin_sve_svmul_s16_m(__VA_ARGS__)
#define svmul_u8_x(...) __builtin_sve_svmul_u8_x(__VA_ARGS__)
#define svmul_u32_x(...) __builtin_sve_svmul_u32_x(__VA_ARGS__)
#define svmul_u64_x(...) __builtin_sve_svmul_u64_x(__VA_ARGS__)
#define svmul_u16_x(...) __builtin_sve_svmul_u16_x(__VA_ARGS__)
#define svmul_s8_x(...) __builtin_sve_svmul_s8_x(__VA_ARGS__)
#define svmul_s32_x(...) __builtin_sve_svmul_s32_x(__VA_ARGS__)
#define svmul_s64_x(...) __builtin_sve_svmul_s64_x(__VA_ARGS__)
#define svmul_s16_x(...) __builtin_sve_svmul_s16_x(__VA_ARGS__)
#define svmul_u8_z(...) __builtin_sve_svmul_u8_z(__VA_ARGS__)
#define svmul_u32_z(...) __builtin_sve_svmul_u32_z(__VA_ARGS__)
#define svmul_u64_z(...) __builtin_sve_svmul_u64_z(__VA_ARGS__)
#define svmul_u16_z(...) __builtin_sve_svmul_u16_z(__VA_ARGS__)
#define svmul_s8_z(...) __builtin_sve_svmul_s8_z(__VA_ARGS__)
#define svmul_s32_z(...) __builtin_sve_svmul_s32_z(__VA_ARGS__)
#define svmul_s64_z(...) __builtin_sve_svmul_s64_z(__VA_ARGS__)
#define svmul_s16_z(...) __builtin_sve_svmul_s16_z(__VA_ARGS__)
#define svmulh_n_s8_m(...) __builtin_sve_svmulh_n_s8_m(__VA_ARGS__)
#define svmulh_n_s32_m(...) __builtin_sve_svmulh_n_s32_m(__VA_ARGS__)
#define svmulh_n_s64_m(...) __builtin_sve_svmulh_n_s64_m(__VA_ARGS__)
#define svmulh_n_s16_m(...) __builtin_sve_svmulh_n_s16_m(__VA_ARGS__)
#define svmulh_n_s8_x(...) __builtin_sve_svmulh_n_s8_x(__VA_ARGS__)
#define svmulh_n_s32_x(...) __builtin_sve_svmulh_n_s32_x(__VA_ARGS__)
#define svmulh_n_s64_x(...) __builtin_sve_svmulh_n_s64_x(__VA_ARGS__)
#define svmulh_n_s16_x(...) __builtin_sve_svmulh_n_s16_x(__VA_ARGS__)
#define svmulh_n_s8_z(...) __builtin_sve_svmulh_n_s8_z(__VA_ARGS__)
#define svmulh_n_s32_z(...) __builtin_sve_svmulh_n_s32_z(__VA_ARGS__)
#define svmulh_n_s64_z(...) __builtin_sve_svmulh_n_s64_z(__VA_ARGS__)
#define svmulh_n_s16_z(...) __builtin_sve_svmulh_n_s16_z(__VA_ARGS__)
#define svmulh_n_u8_m(...) __builtin_sve_svmulh_n_u8_m(__VA_ARGS__)
#define svmulh_n_u32_m(...) __builtin_sve_svmulh_n_u32_m(__VA_ARGS__)
#define svmulh_n_u64_m(...) __builtin_sve_svmulh_n_u64_m(__VA_ARGS__)
#define svmulh_n_u16_m(...) __builtin_sve_svmulh_n_u16_m(__VA_ARGS__)
#define svmulh_n_u8_x(...) __builtin_sve_svmulh_n_u8_x(__VA_ARGS__)
#define svmulh_n_u32_x(...) __builtin_sve_svmulh_n_u32_x(__VA_ARGS__)
#define svmulh_n_u64_x(...) __builtin_sve_svmulh_n_u64_x(__VA_ARGS__)
#define svmulh_n_u16_x(...) __builtin_sve_svmulh_n_u16_x(__VA_ARGS__)
#define svmulh_n_u8_z(...) __builtin_sve_svmulh_n_u8_z(__VA_ARGS__)
#define svmulh_n_u32_z(...) __builtin_sve_svmulh_n_u32_z(__VA_ARGS__)
#define svmulh_n_u64_z(...) __builtin_sve_svmulh_n_u64_z(__VA_ARGS__)
#define svmulh_n_u16_z(...) __builtin_sve_svmulh_n_u16_z(__VA_ARGS__)
#define svmulh_s8_m(...) __builtin_sve_svmulh_s8_m(__VA_ARGS__)
#define svmulh_s32_m(...) __builtin_sve_svmulh_s32_m(__VA_ARGS__)
#define svmulh_s64_m(...) __builtin_sve_svmulh_s64_m(__VA_ARGS__)
#define svmulh_s16_m(...) __builtin_sve_svmulh_s16_m(__VA_ARGS__)
#define svmulh_s8_x(...) __builtin_sve_svmulh_s8_x(__VA_ARGS__)
#define svmulh_s32_x(...) __builtin_sve_svmulh_s32_x(__VA_ARGS__)
#define svmulh_s64_x(...) __builtin_sve_svmulh_s64_x(__VA_ARGS__)
#define svmulh_s16_x(...) __builtin_sve_svmulh_s16_x(__VA_ARGS__)
#define svmulh_s8_z(...) __builtin_sve_svmulh_s8_z(__VA_ARGS__)
#define svmulh_s32_z(...) __builtin_sve_svmulh_s32_z(__VA_ARGS__)
#define svmulh_s64_z(...) __builtin_sve_svmulh_s64_z(__VA_ARGS__)
#define svmulh_s16_z(...) __builtin_sve_svmulh_s16_z(__VA_ARGS__)
#define svmulh_u8_m(...) __builtin_sve_svmulh_u8_m(__VA_ARGS__)
#define svmulh_u32_m(...) __builtin_sve_svmulh_u32_m(__VA_ARGS__)
#define svmulh_u64_m(...) __builtin_sve_svmulh_u64_m(__VA_ARGS__)
#define svmulh_u16_m(...) __builtin_sve_svmulh_u16_m(__VA_ARGS__)
#define svmulh_u8_x(...) __builtin_sve_svmulh_u8_x(__VA_ARGS__)
#define svmulh_u32_x(...) __builtin_sve_svmulh_u32_x(__VA_ARGS__)
#define svmulh_u64_x(...) __builtin_sve_svmulh_u64_x(__VA_ARGS__)
#define svmulh_u16_x(...) __builtin_sve_svmulh_u16_x(__VA_ARGS__)
#define svmulh_u8_z(...) __builtin_sve_svmulh_u8_z(__VA_ARGS__)
#define svmulh_u32_z(...) __builtin_sve_svmulh_u32_z(__VA_ARGS__)
#define svmulh_u64_z(...) __builtin_sve_svmulh_u64_z(__VA_ARGS__)
#define svmulh_u16_z(...) __builtin_sve_svmulh_u16_z(__VA_ARGS__)
#define svneg_f64_m(...) __builtin_sve_svneg_f64_m(__VA_ARGS__)
#define svneg_f32_m(...) __builtin_sve_svneg_f32_m(__VA_ARGS__)
#define svneg_f16_m(...) __builtin_sve_svneg_f16_m(__VA_ARGS__)
#define svneg_f64_x(...) __builtin_sve_svneg_f64_x(__VA_ARGS__)
#define svneg_f32_x(...) __builtin_sve_svneg_f32_x(__VA_ARGS__)
#define svneg_f16_x(...) __builtin_sve_svneg_f16_x(__VA_ARGS__)
#define svneg_f64_z(...) __builtin_sve_svneg_f64_z(__VA_ARGS__)
#define svneg_f32_z(...) __builtin_sve_svneg_f32_z(__VA_ARGS__)
#define svneg_f16_z(...) __builtin_sve_svneg_f16_z(__VA_ARGS__)
#define svneg_s8_m(...) __builtin_sve_svneg_s8_m(__VA_ARGS__)
#define svneg_s32_m(...) __builtin_sve_svneg_s32_m(__VA_ARGS__)
#define svneg_s64_m(...) __builtin_sve_svneg_s64_m(__VA_ARGS__)
#define svneg_s16_m(...) __builtin_sve_svneg_s16_m(__VA_ARGS__)
#define svneg_s8_x(...) __builtin_sve_svneg_s8_x(__VA_ARGS__)
#define svneg_s32_x(...) __builtin_sve_svneg_s32_x(__VA_ARGS__)
#define svneg_s64_x(...) __builtin_sve_svneg_s64_x(__VA_ARGS__)
#define svneg_s16_x(...) __builtin_sve_svneg_s16_x(__VA_ARGS__)
#define svneg_s8_z(...) __builtin_sve_svneg_s8_z(__VA_ARGS__)
#define svneg_s32_z(...) __builtin_sve_svneg_s32_z(__VA_ARGS__)
#define svneg_s64_z(...) __builtin_sve_svneg_s64_z(__VA_ARGS__)
#define svneg_s16_z(...) __builtin_sve_svneg_s16_z(__VA_ARGS__)
#define svpfalse_b(...) __builtin_sve_svpfalse_b(__VA_ARGS__)
#define svqdech_pat_s16(...) __builtin_sve_svqdech_pat_s16(__VA_ARGS__)
#define svqdech_pat_u16(...) __builtin_sve_svqdech_pat_u16(__VA_ARGS__)
#define svst1_u8(...) __builtin_sve_svst1_u8(__VA_ARGS__)
#define svst1_u32(...) __builtin_sve_svst1_u32(__VA_ARGS__)
#define svst1_u64(...) __builtin_sve_svst1_u64(__VA_ARGS__)
#define svst1_u16(...) __builtin_sve_svst1_u16(__VA_ARGS__)
#define svst1_s8(...) __builtin_sve_svst1_s8(__VA_ARGS__)
#define svst1_f64(...) __builtin_sve_svst1_f64(__VA_ARGS__)
#define svst1_f32(...) __builtin_sve_svst1_f32(__VA_ARGS__)
#define svst1_f16(...) __builtin_sve_svst1_f16(__VA_ARGS__)
#define svst1_s32(...) __builtin_sve_svst1_s32(__VA_ARGS__)
#define svst1_s64(...) __builtin_sve_svst1_s64(__VA_ARGS__)
#define svst1_s16(...) __builtin_sve_svst1_s16(__VA_ARGS__)
#define svst1_vnum_u8(...) __builtin_sve_svst1_vnum_u8(__VA_ARGS__)
#define svst1_vnum_u32(...) __builtin_sve_svst1_vnum_u32(__VA_ARGS__)
#define svst1_vnum_u64(...) __builtin_sve_svst1_vnum_u64(__VA_ARGS__)
#define svst1_vnum_u16(...) __builtin_sve_svst1_vnum_u16(__VA_ARGS__)
#define svst1_vnum_s8(...) __builtin_sve_svst1_vnum_s8(__VA_ARGS__)
#define svst1_vnum_f64(...) __builtin_sve_svst1_vnum_f64(__VA_ARGS__)
#define svst1_vnum_f32(...) __builtin_sve_svst1_vnum_f32(__VA_ARGS__)
#define svst1_vnum_f16(...) __builtin_sve_svst1_vnum_f16(__VA_ARGS__)
#define svst1_vnum_s32(...) __builtin_sve_svst1_vnum_s32(__VA_ARGS__)
#define svst1_vnum_s64(...) __builtin_sve_svst1_vnum_s64(__VA_ARGS__)
#define svst1_vnum_s16(...) __builtin_sve_svst1_vnum_s16(__VA_ARGS__)
#define svst1b_s32(...) __builtin_sve_svst1b_s32(__VA_ARGS__)
#define svst1b_s64(...) __builtin_sve_svst1b_s64(__VA_ARGS__)
#define svst1b_s16(...) __builtin_sve_svst1b_s16(__VA_ARGS__)
#define svst1b_u32(...) __builtin_sve_svst1b_u32(__VA_ARGS__)
#define svst1b_u64(...) __builtin_sve_svst1b_u64(__VA_ARGS__)
#define svst1b_u16(...) __builtin_sve_svst1b_u16(__VA_ARGS__)
#define svst1b_vnum_s32(...) __builtin_sve_svst1b_vnum_s32(__VA_ARGS__)
#define svst1b_vnum_s64(...) __builtin_sve_svst1b_vnum_s64(__VA_ARGS__)
#define svst1b_vnum_s16(...) __builtin_sve_svst1b_vnum_s16(__VA_ARGS__)
#define svst1b_vnum_u32(...) __builtin_sve_svst1b_vnum_u32(__VA_ARGS__)
#define svst1b_vnum_u64(...) __builtin_sve_svst1b_vnum_u64(__VA_ARGS__)
#define svst1b_vnum_u16(...) __builtin_sve_svst1b_vnum_u16(__VA_ARGS__)
#define svst1h_s32(...) __builtin_sve_svst1h_s32(__VA_ARGS__)
#define svst1h_s64(...) __builtin_sve_svst1h_s64(__VA_ARGS__)
#define svst1h_u32(...) __builtin_sve_svst1h_u32(__VA_ARGS__)
#define svst1h_u64(...) __builtin_sve_svst1h_u64(__VA_ARGS__)
#define svst1h_vnum_s32(...) __builtin_sve_svst1h_vnum_s32(__VA_ARGS__)
#define svst1h_vnum_s64(...) __builtin_sve_svst1h_vnum_s64(__VA_ARGS__)
#define svst1h_vnum_u32(...) __builtin_sve_svst1h_vnum_u32(__VA_ARGS__)
#define svst1h_vnum_u64(...) __builtin_sve_svst1h_vnum_u64(__VA_ARGS__)
#define svst1w_s64(...) __builtin_sve_svst1w_s64(__VA_ARGS__)
#define svst1w_u64(...) __builtin_sve_svst1w_u64(__VA_ARGS__)
#define svst1w_vnum_s64(...) __builtin_sve_svst1w_vnum_s64(__VA_ARGS__)
#define svst1w_vnum_u64(...) __builtin_sve_svst1w_vnum_u64(__VA_ARGS__)
#define svstnt1_u8(...) __builtin_sve_svstnt1_u8(__VA_ARGS__)
#define svstnt1_u32(...) __builtin_sve_svstnt1_u32(__VA_ARGS__)
#define svstnt1_u64(...) __builtin_sve_svstnt1_u64(__VA_ARGS__)
#define svstnt1_u16(...) __builtin_sve_svstnt1_u16(__VA_ARGS__)
#define svstnt1_s8(...) __builtin_sve_svstnt1_s8(__VA_ARGS__)
#define svstnt1_f64(...) __builtin_sve_svstnt1_f64(__VA_ARGS__)
#define svstnt1_f32(...) __builtin_sve_svstnt1_f32(__VA_ARGS__)
#define svstnt1_f16(...) __builtin_sve_svstnt1_f16(__VA_ARGS__)
#define svstnt1_s32(...) __builtin_sve_svstnt1_s32(__VA_ARGS__)
#define svstnt1_s64(...) __builtin_sve_svstnt1_s64(__VA_ARGS__)
#define svstnt1_s16(...) __builtin_sve_svstnt1_s16(__VA_ARGS__)
#define svstnt1_vnum_u8(...) __builtin_sve_svstnt1_vnum_u8(__VA_ARGS__)
#define svstnt1_vnum_u32(...) __builtin_sve_svstnt1_vnum_u32(__VA_ARGS__)
#define svstnt1_vnum_u64(...) __builtin_sve_svstnt1_vnum_u64(__VA_ARGS__)
#define svstnt1_vnum_u16(...) __builtin_sve_svstnt1_vnum_u16(__VA_ARGS__)
#define svstnt1_vnum_s8(...) __builtin_sve_svstnt1_vnum_s8(__VA_ARGS__)
#define svstnt1_vnum_f64(...) __builtin_sve_svstnt1_vnum_f64(__VA_ARGS__)
#define svstnt1_vnum_f32(...) __builtin_sve_svstnt1_vnum_f32(__VA_ARGS__)
#define svstnt1_vnum_f16(...) __builtin_sve_svstnt1_vnum_f16(__VA_ARGS__)
#define svstnt1_vnum_s32(...) __builtin_sve_svstnt1_vnum_s32(__VA_ARGS__)
#define svstnt1_vnum_s64(...) __builtin_sve_svstnt1_vnum_s64(__VA_ARGS__)
#define svstnt1_vnum_s16(...) __builtin_sve_svstnt1_vnum_s16(__VA_ARGS__)
#define svsub_n_u8_m(...) __builtin_sve_svsub_n_u8_m(__VA_ARGS__)
#define svsub_n_u32_m(...) __builtin_sve_svsub_n_u32_m(__VA_ARGS__)
#define svsub_n_u64_m(...) __builtin_sve_svsub_n_u64_m(__VA_ARGS__)
#define svsub_n_u16_m(...) __builtin_sve_svsub_n_u16_m(__VA_ARGS__)
#define svsub_n_s8_m(...) __builtin_sve_svsub_n_s8_m(__VA_ARGS__)
#define svsub_n_s32_m(...) __builtin_sve_svsub_n_s32_m(__VA_ARGS__)
#define svsub_n_s64_m(...) __builtin_sve_svsub_n_s64_m(__VA_ARGS__)
#define svsub_n_s16_m(...) __builtin_sve_svsub_n_s16_m(__VA_ARGS__)
#define svsub_n_u8_x(...) __builtin_sve_svsub_n_u8_x(__VA_ARGS__)
#define svsub_n_u32_x(...) __builtin_sve_svsub_n_u32_x(__VA_ARGS__)
#define svsub_n_u64_x(...) __builtin_sve_svsub_n_u64_x(__VA_ARGS__)
#define svsub_n_u16_x(...) __builtin_sve_svsub_n_u16_x(__VA_ARGS__)
#define svsub_n_s8_x(...) __builtin_sve_svsub_n_s8_x(__VA_ARGS__)
#define svsub_n_s32_x(...) __builtin_sve_svsub_n_s32_x(__VA_ARGS__)
#define svsub_n_s64_x(...) __builtin_sve_svsub_n_s64_x(__VA_ARGS__)
#define svsub_n_s16_x(...) __builtin_sve_svsub_n_s16_x(__VA_ARGS__)
#define svsub_n_u8_z(...) __builtin_sve_svsub_n_u8_z(__VA_ARGS__)
#define svsub_n_u32_z(...) __builtin_sve_svsub_n_u32_z(__VA_ARGS__)
#define svsub_n_u64_z(...) __builtin_sve_svsub_n_u64_z(__VA_ARGS__)
#define svsub_n_u16_z(...) __builtin_sve_svsub_n_u16_z(__VA_ARGS__)
#define svsub_n_s8_z(...) __builtin_sve_svsub_n_s8_z(__VA_ARGS__)
#define svsub_n_s32_z(...) __builtin_sve_svsub_n_s32_z(__VA_ARGS__)
#define svsub_n_s64_z(...) __builtin_sve_svsub_n_s64_z(__VA_ARGS__)
#define svsub_n_s16_z(...) __builtin_sve_svsub_n_s16_z(__VA_ARGS__)
#define svsub_u8_m(...) __builtin_sve_svsub_u8_m(__VA_ARGS__)
#define svsub_u32_m(...) __builtin_sve_svsub_u32_m(__VA_ARGS__)
#define svsub_u64_m(...) __builtin_sve_svsub_u64_m(__VA_ARGS__)
#define svsub_u16_m(...) __builtin_sve_svsub_u16_m(__VA_ARGS__)
#define svsub_s8_m(...) __builtin_sve_svsub_s8_m(__VA_ARGS__)
#define svsub_s32_m(...) __builtin_sve_svsub_s32_m(__VA_ARGS__)
#define svsub_s64_m(...) __builtin_sve_svsub_s64_m(__VA_ARGS__)
#define svsub_s16_m(...) __builtin_sve_svsub_s16_m(__VA_ARGS__)
#define svsub_u8_x(...) __builtin_sve_svsub_u8_x(__VA_ARGS__)
#define svsub_u32_x(...) __builtin_sve_svsub_u32_x(__VA_ARGS__)
#define svsub_u64_x(...) __builtin_sve_svsub_u64_x(__VA_ARGS__)
#define svsub_u16_x(...) __builtin_sve_svsub_u16_x(__VA_ARGS__)
#define svsub_s8_x(...) __builtin_sve_svsub_s8_x(__VA_ARGS__)
#define svsub_s32_x(...) __builtin_sve_svsub_s32_x(__VA_ARGS__)
#define svsub_s64_x(...) __builtin_sve_svsub_s64_x(__VA_ARGS__)
#define svsub_s16_x(...) __builtin_sve_svsub_s16_x(__VA_ARGS__)
#define svsub_u8_z(...) __builtin_sve_svsub_u8_z(__VA_ARGS__)
#define svsub_u32_z(...) __builtin_sve_svsub_u32_z(__VA_ARGS__)
#define svsub_u64_z(...) __builtin_sve_svsub_u64_z(__VA_ARGS__)
#define svsub_u16_z(...) __builtin_sve_svsub_u16_z(__VA_ARGS__)
#define svsub_s8_z(...) __builtin_sve_svsub_s8_z(__VA_ARGS__)
#define svsub_s32_z(...) __builtin_sve_svsub_s32_z(__VA_ARGS__)
#define svsub_s64_z(...) __builtin_sve_svsub_s64_z(__VA_ARGS__)
#define svsub_s16_z(...) __builtin_sve_svsub_s16_z(__VA_ARGS__)
#define svsubr_n_u8_m(...) __builtin_sve_svsubr_n_u8_m(__VA_ARGS__)
#define svsubr_n_u32_m(...) __builtin_sve_svsubr_n_u32_m(__VA_ARGS__)
#define svsubr_n_u64_m(...) __builtin_sve_svsubr_n_u64_m(__VA_ARGS__)
#define svsubr_n_u16_m(...) __builtin_sve_svsubr_n_u16_m(__VA_ARGS__)
#define svsubr_n_s8_m(...) __builtin_sve_svsubr_n_s8_m(__VA_ARGS__)
#define svsubr_n_s32_m(...) __builtin_sve_svsubr_n_s32_m(__VA_ARGS__)
#define svsubr_n_s64_m(...) __builtin_sve_svsubr_n_s64_m(__VA_ARGS__)
#define svsubr_n_s16_m(...) __builtin_sve_svsubr_n_s16_m(__VA_ARGS__)
#define svsubr_n_u8_x(...) __builtin_sve_svsubr_n_u8_x(__VA_ARGS__)
#define svsubr_n_u32_x(...) __builtin_sve_svsubr_n_u32_x(__VA_ARGS__)
#define svsubr_n_u64_x(...) __builtin_sve_svsubr_n_u64_x(__VA_ARGS__)
#define svsubr_n_u16_x(...) __builtin_sve_svsubr_n_u16_x(__VA_ARGS__)
#define svsubr_n_s8_x(...) __builtin_sve_svsubr_n_s8_x(__VA_ARGS__)
#define svsubr_n_s32_x(...) __builtin_sve_svsubr_n_s32_x(__VA_ARGS__)
#define svsubr_n_s64_x(...) __builtin_sve_svsubr_n_s64_x(__VA_ARGS__)
#define svsubr_n_s16_x(...) __builtin_sve_svsubr_n_s16_x(__VA_ARGS__)
#define svsubr_n_u8_z(...) __builtin_sve_svsubr_n_u8_z(__VA_ARGS__)
#define svsubr_n_u32_z(...) __builtin_sve_svsubr_n_u32_z(__VA_ARGS__)
#define svsubr_n_u64_z(...) __builtin_sve_svsubr_n_u64_z(__VA_ARGS__)
#define svsubr_n_u16_z(...) __builtin_sve_svsubr_n_u16_z(__VA_ARGS__)
#define svsubr_n_s8_z(...) __builtin_sve_svsubr_n_s8_z(__VA_ARGS__)
#define svsubr_n_s32_z(...) __builtin_sve_svsubr_n_s32_z(__VA_ARGS__)
#define svsubr_n_s64_z(...) __builtin_sve_svsubr_n_s64_z(__VA_ARGS__)
#define svsubr_n_s16_z(...) __builtin_sve_svsubr_n_s16_z(__VA_ARGS__)
#define svsubr_u8_m(...) __builtin_sve_svsubr_u8_m(__VA_ARGS__)
#define svsubr_u32_m(...) __builtin_sve_svsubr_u32_m(__VA_ARGS__)
#define svsubr_u64_m(...) __builtin_sve_svsubr_u64_m(__VA_ARGS__)
#define svsubr_u16_m(...) __builtin_sve_svsubr_u16_m(__VA_ARGS__)
#define svsubr_s8_m(...) __builtin_sve_svsubr_s8_m(__VA_ARGS__)
#define svsubr_s32_m(...) __builtin_sve_svsubr_s32_m(__VA_ARGS__)
#define svsubr_s64_m(...) __builtin_sve_svsubr_s64_m(__VA_ARGS__)
#define svsubr_s16_m(...) __builtin_sve_svsubr_s16_m(__VA_ARGS__)
#define svsubr_u8_x(...) __builtin_sve_svsubr_u8_x(__VA_ARGS__)
#define svsubr_u32_x(...) __builtin_sve_svsubr_u32_x(__VA_ARGS__)
#define svsubr_u64_x(...) __builtin_sve_svsubr_u64_x(__VA_ARGS__)
#define svsubr_u16_x(...) __builtin_sve_svsubr_u16_x(__VA_ARGS__)
#define svsubr_s8_x(...) __builtin_sve_svsubr_s8_x(__VA_ARGS__)
#define svsubr_s32_x(...) __builtin_sve_svsubr_s32_x(__VA_ARGS__)
#define svsubr_s64_x(...) __builtin_sve_svsubr_s64_x(__VA_ARGS__)
#define svsubr_s16_x(...) __builtin_sve_svsubr_s16_x(__VA_ARGS__)
#define svsubr_u8_z(...) __builtin_sve_svsubr_u8_z(__VA_ARGS__)
#define svsubr_u32_z(...) __builtin_sve_svsubr_u32_z(__VA_ARGS__)
#define svsubr_u64_z(...) __builtin_sve_svsubr_u64_z(__VA_ARGS__)
#define svsubr_u16_z(...) __builtin_sve_svsubr_u16_z(__VA_ARGS__)
#define svsubr_s8_z(...) __builtin_sve_svsubr_s8_z(__VA_ARGS__)
#define svsubr_s32_z(...) __builtin_sve_svsubr_s32_z(__VA_ARGS__)
#define svsubr_s64_z(...) __builtin_sve_svsubr_s64_z(__VA_ARGS__)
#define svsubr_s16_z(...) __builtin_sve_svsubr_s16_z(__VA_ARGS__)
#define svtmad_f64(...) __builtin_sve_svtmad_f64(__VA_ARGS__)
#define svtmad_f32(...) __builtin_sve_svtmad_f32(__VA_ARGS__)
#define svtmad_f16(...) __builtin_sve_svtmad_f16(__VA_ARGS__)
#define svwhilele_b8_s32(...) __builtin_sve_svwhilele_b8_s32(__VA_ARGS__)
#define svwhilele_b32_s32(...) __builtin_sve_svwhilele_b32_s32(__VA_ARGS__)
#define svwhilele_b64_s32(...) __builtin_sve_svwhilele_b64_s32(__VA_ARGS__)
#define svwhilele_b16_s32(...) __builtin_sve_svwhilele_b16_s32(__VA_ARGS__)
#define svwhilele_b8_s64(...) __builtin_sve_svwhilele_b8_s64(__VA_ARGS__)
#define svwhilele_b32_s64(...) __builtin_sve_svwhilele_b32_s64(__VA_ARGS__)
#define svwhilele_b64_s64(...) __builtin_sve_svwhilele_b64_s64(__VA_ARGS__)
#define svwhilele_b16_s64(...) __builtin_sve_svwhilele_b16_s64(__VA_ARGS__)
#define svwhilele_b8_u32(...) __builtin_sve_svwhilele_b8_u32(__VA_ARGS__)
#define svwhilele_b32_u32(...) __builtin_sve_svwhilele_b32_u32(__VA_ARGS__)
#define svwhilele_b64_u32(...) __builtin_sve_svwhilele_b64_u32(__VA_ARGS__)
#define svwhilele_b16_u32(...) __builtin_sve_svwhilele_b16_u32(__VA_ARGS__)
#define svwhilele_b8_u64(...) __builtin_sve_svwhilele_b8_u64(__VA_ARGS__)
#define svwhilele_b32_u64(...) __builtin_sve_svwhilele_b32_u64(__VA_ARGS__)
#define svwhilele_b64_u64(...) __builtin_sve_svwhilele_b64_u64(__VA_ARGS__)
#define svwhilele_b16_u64(...) __builtin_sve_svwhilele_b16_u64(__VA_ARGS__)
#define svwhilelt_b8_u32(...) __builtin_sve_svwhilelt_b8_u32(__VA_ARGS__)
#define svwhilelt_b32_u32(...) __builtin_sve_svwhilelt_b32_u32(__VA_ARGS__)
#define svwhilelt_b64_u32(...) __builtin_sve_svwhilelt_b64_u32(__VA_ARGS__)
#define svwhilelt_b16_u32(...) __builtin_sve_svwhilelt_b16_u32(__VA_ARGS__)
#define svwhilelt_b8_u64(...) __builtin_sve_svwhilelt_b8_u64(__VA_ARGS__)
#define svwhilelt_b32_u64(...) __builtin_sve_svwhilelt_b32_u64(__VA_ARGS__)
#define svwhilelt_b64_u64(...) __builtin_sve_svwhilelt_b64_u64(__VA_ARGS__)
#define svwhilelt_b16_u64(...) __builtin_sve_svwhilelt_b16_u64(__VA_ARGS__)
#define svwhilelt_b8_s32(...) __builtin_sve_svwhilelt_b8_s32(__VA_ARGS__)
#define svwhilelt_b32_s32(...) __builtin_sve_svwhilelt_b32_s32(__VA_ARGS__)
#define svwhilelt_b64_s32(...) __builtin_sve_svwhilelt_b64_s32(__VA_ARGS__)
#define svwhilelt_b16_s32(...) __builtin_sve_svwhilelt_b16_s32(__VA_ARGS__)
#define svwhilelt_b8_s64(...) __builtin_sve_svwhilelt_b8_s64(__VA_ARGS__)
#define svwhilelt_b32_s64(...) __builtin_sve_svwhilelt_b32_s64(__VA_ARGS__)
#define svwhilelt_b64_s64(...) __builtin_sve_svwhilelt_b64_s64(__VA_ARGS__)
#define svwhilelt_b16_s64(...) __builtin_sve_svwhilelt_b16_s64(__VA_ARGS__)
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s8_m)))
svint8_t svabd_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s32_m)))
svint32_t svabd_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s64_m)))
svint64_t svabd_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s16_m)))
svint16_t svabd_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s8_x)))
svint8_t svabd_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s32_x)))
svint32_t svabd_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s64_x)))
svint64_t svabd_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s16_x)))
svint16_t svabd_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s8_z)))
svint8_t svabd_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s32_z)))
svint32_t svabd_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s64_z)))
svint64_t svabd_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_s16_z)))
svint16_t svabd_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u8_m)))
svuint8_t svabd_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u32_m)))
svuint32_t svabd_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u64_m)))
svuint64_t svabd_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u16_m)))
svuint16_t svabd_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u8_x)))
svuint8_t svabd_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u32_x)))
svuint32_t svabd_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u64_x)))
svuint64_t svabd_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u16_x)))
svuint16_t svabd_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u8_z)))
svuint8_t svabd_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u32_z)))
svuint32_t svabd_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u64_z)))
svuint64_t svabd_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_n_u16_z)))
svuint16_t svabd_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s8_m)))
svint8_t svabd_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s32_m)))
svint32_t svabd_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s64_m)))
svint64_t svabd_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s16_m)))
svint16_t svabd_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s8_x)))
svint8_t svabd_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s32_x)))
svint32_t svabd_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s64_x)))
svint64_t svabd_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s16_x)))
svint16_t svabd_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s8_z)))
svint8_t svabd_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s32_z)))
svint32_t svabd_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s64_z)))
svint64_t svabd_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_s16_z)))
svint16_t svabd_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u8_m)))
svuint8_t svabd_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u32_m)))
svuint32_t svabd_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u64_m)))
svuint64_t svabd_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u16_m)))
svuint16_t svabd_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u8_x)))
svuint8_t svabd_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u32_x)))
svuint32_t svabd_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u64_x)))
svuint64_t svabd_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u16_x)))
svuint16_t svabd_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u8_z)))
svuint8_t svabd_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u32_z)))
svuint32_t svabd_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u64_z)))
svuint64_t svabd_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabd_u16_z)))
svuint16_t svabd_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f64_m)))
svfloat64_t svabs_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f32_m)))
svfloat32_t svabs_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f16_m)))
svfloat16_t svabs_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f64_x)))
svfloat64_t svabs_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f32_x)))
svfloat32_t svabs_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f16_x)))
svfloat16_t svabs_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f64_z)))
svfloat64_t svabs_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f32_z)))
svfloat32_t svabs_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_f16_z)))
svfloat16_t svabs_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s8_m)))
svint8_t svabs_m(svint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s32_m)))
svint32_t svabs_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s64_m)))
svint64_t svabs_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s16_m)))
svint16_t svabs_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s8_x)))
svint8_t svabs_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s32_x)))
svint32_t svabs_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s64_x)))
svint64_t svabs_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s16_x)))
svint16_t svabs_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s8_z)))
svint8_t svabs_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s32_z)))
svint32_t svabs_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s64_z)))
svint64_t svabs_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svabs_s16_z)))
svint16_t svabs_z(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u8_m)))
svuint8_t svadd_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u32_m)))
svuint32_t svadd_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u64_m)))
svuint64_t svadd_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u16_m)))
svuint16_t svadd_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s8_m)))
svint8_t svadd_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s32_m)))
svint32_t svadd_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s64_m)))
svint64_t svadd_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s16_m)))
svint16_t svadd_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u8_x)))
svuint8_t svadd_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u32_x)))
svuint32_t svadd_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u64_x)))
svuint64_t svadd_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u16_x)))
svuint16_t svadd_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s8_x)))
svint8_t svadd_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s32_x)))
svint32_t svadd_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s64_x)))
svint64_t svadd_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s16_x)))
svint16_t svadd_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u8_z)))
svuint8_t svadd_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u32_z)))
svuint32_t svadd_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u64_z)))
svuint64_t svadd_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_u16_z)))
svuint16_t svadd_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s8_z)))
svint8_t svadd_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s32_z)))
svint32_t svadd_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s64_z)))
svint64_t svadd_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_n_s16_z)))
svint16_t svadd_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u8_m)))
svuint8_t svadd_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u32_m)))
svuint32_t svadd_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u64_m)))
svuint64_t svadd_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u16_m)))
svuint16_t svadd_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s8_m)))
svint8_t svadd_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s32_m)))
svint32_t svadd_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s64_m)))
svint64_t svadd_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s16_m)))
svint16_t svadd_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u8_x)))
svuint8_t svadd_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u32_x)))
svuint32_t svadd_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u64_x)))
svuint64_t svadd_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u16_x)))
svuint16_t svadd_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s8_x)))
svint8_t svadd_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s32_x)))
svint32_t svadd_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s64_x)))
svint64_t svadd_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s16_x)))
svint16_t svadd_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u8_z)))
svuint8_t svadd_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u32_z)))
svuint32_t svadd_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u64_z)))
svuint64_t svadd_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_u16_z)))
svuint16_t svadd_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s8_z)))
svint8_t svadd_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s32_z)))
svint32_t svadd_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s64_z)))
svint64_t svadd_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svadd_s16_z)))
svint16_t svadd_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s8_m)))
svint8_t svasrd_m(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s32_m)))
svint32_t svasrd_m(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s64_m)))
svint64_t svasrd_m(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svasrd_n_s16_m)))
svint16_t svasrd_m(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f64_m)))
svfloat64_t svcadd_m(svbool_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f32_m)))
svfloat32_t svcadd_m(svbool_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcadd_f16_m)))
svfloat16_t svcadd_m(svbool_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f64_m)))
svfloat64_t svcmla_m(svbool_t, svfloat64_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f32_m)))
svfloat32_t svcmla_m(svbool_t, svfloat32_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_f16_m)))
svfloat16_t svcmla_m(svbool_t, svfloat16_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_lane_f32)))
svfloat32_t svcmla_lane(svfloat32_t, svfloat32_t, svfloat32_t, uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svcmla_lane_f16)))
svfloat16_t svcmla_lane(svfloat16_t, svfloat16_t, svfloat16_t, uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s32_m)))
svint32_t svdiv_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s64_m)))
svint64_t svdiv_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s32_x)))
svint32_t svdiv_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s64_x)))
svint64_t svdiv_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s32_z)))
svint32_t svdiv_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_s64_z)))
svint64_t svdiv_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u32_m)))
svuint32_t svdiv_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u64_m)))
svuint64_t svdiv_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u32_x)))
svuint32_t svdiv_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u64_x)))
svuint64_t svdiv_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u32_z)))
svuint32_t svdiv_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_n_u64_z)))
svuint64_t svdiv_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s32_m)))
svint32_t svdiv_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s64_m)))
svint64_t svdiv_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s32_x)))
svint32_t svdiv_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s64_x)))
svint64_t svdiv_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s32_z)))
svint32_t svdiv_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_s64_z)))
svint64_t svdiv_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u32_m)))
svuint32_t svdiv_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u64_m)))
svuint64_t svdiv_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u32_x)))
svuint32_t svdiv_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u64_x)))
svuint64_t svdiv_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u32_z)))
svuint32_t svdiv_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdiv_u64_z)))
svuint64_t svdiv_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s32_m)))
svint32_t svdivr_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s64_m)))
svint64_t svdivr_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s32_x)))
svint32_t svdivr_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s64_x)))
svint64_t svdivr_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s32_z)))
svint32_t svdivr_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_s64_z)))
svint64_t svdivr_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u32_m)))
svuint32_t svdivr_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u64_m)))
svuint64_t svdivr_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u32_x)))
svuint32_t svdivr_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u64_x)))
svuint64_t svdivr_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u32_z)))
svuint32_t svdivr_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_n_u64_z)))
svuint64_t svdivr_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s32_m)))
svint32_t svdivr_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s64_m)))
svint64_t svdivr_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s32_x)))
svint32_t svdivr_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s64_x)))
svint64_t svdivr_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s32_z)))
svint32_t svdivr_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_s64_z)))
svint64_t svdivr_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u32_m)))
svuint32_t svdivr_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u64_m)))
svuint64_t svdivr_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u32_x)))
svuint32_t svdivr_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u64_x)))
svuint64_t svdivr_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u32_z)))
svuint32_t svdivr_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdivr_u64_z)))
svuint64_t svdivr_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_s32)))
svint32_t svdot_lane(svint32_t, svint8_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_s64)))
svint64_t svdot_lane(svint64_t, svint16_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_u32)))
svuint32_t svdot_lane(svuint32_t, svuint8_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svdot_lane_u64)))
svuint64_t svdot_lane(svuint64_t, svuint16_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u8)))
svuint8_t svext(svuint8_t, svuint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u32)))
svuint32_t svext(svuint32_t, svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u64)))
svuint64_t svext(svuint64_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_u16)))
svuint16_t svext(svuint16_t, svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s8)))
svint8_t svext(svint8_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_f64)))
svfloat64_t svext(svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_f32)))
svfloat32_t svext(svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_f16)))
svfloat16_t svext(svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s32)))
svint32_t svext(svint32_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s64)))
svint64_t svext(svint64_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svext_s16)))
svint16_t svext(svint16_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u8)))
svuint8_t svld1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u32)))
svuint32_t svld1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u64)))
svuint64_t svld1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_u16)))
svuint16_t svld1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s8)))
svint8_t svld1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_f64)))
svfloat64_t svld1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_f32)))
svfloat32_t svld1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_f16)))
svfloat16_t svld1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s32)))
svint32_t svld1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s64)))
svint64_t svld1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_s16)))
svint16_t svld1(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_index_u32)))
svuint32_t svld1_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_index_u64)))
svuint64_t svld1_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_index_f64)))
svfloat64_t svld1_gather_index_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_index_f32)))
svfloat32_t svld1_gather_index_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_index_s32)))
svint32_t svld1_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_index_s64)))
svint64_t svld1_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_offset_u32)))
svuint32_t svld1_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_offset_u64)))
svuint64_t svld1_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_offset_f64)))
svfloat64_t svld1_gather_offset_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_offset_f32)))
svfloat32_t svld1_gather_offset_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_offset_s32)))
svint32_t svld1_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_offset_s64)))
svint64_t svld1_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_u32)))
svuint32_t svld1_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_u64)))
svuint64_t svld1_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_f64)))
svfloat64_t svld1_gather_f64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_f32)))
svfloat32_t svld1_gather_f32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32base_s32)))
svint32_t svld1_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64base_s64)))
svint64_t svld1_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32index_u32)))
svuint32_t svld1_gather_index(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32index_f32)))
svfloat32_t svld1_gather_index(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32index_s32)))
svint32_t svld1_gather_index(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32index_u32)))
svuint32_t svld1_gather_index(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32index_f32)))
svfloat32_t svld1_gather_index(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32index_s32)))
svint32_t svld1_gather_index(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64index_u64)))
svuint64_t svld1_gather_index(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64index_f64)))
svfloat64_t svld1_gather_index(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64index_s64)))
svint64_t svld1_gather_index(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64index_u64)))
svuint64_t svld1_gather_index(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64index_f64)))
svfloat64_t svld1_gather_index(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64index_s64)))
svint64_t svld1_gather_index(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32offset_u32)))
svuint32_t svld1_gather_offset(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32offset_f32)))
svfloat32_t svld1_gather_offset(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s32offset_s32)))
svint32_t svld1_gather_offset(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32offset_u32)))
svuint32_t svld1_gather_offset(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32offset_f32)))
svfloat32_t svld1_gather_offset(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u32offset_s32)))
svint32_t svld1_gather_offset(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64offset_u64)))
svuint64_t svld1_gather_offset(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64offset_f64)))
svfloat64_t svld1_gather_offset(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_s64offset_s64)))
svint64_t svld1_gather_offset(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64offset_u64)))
svuint64_t svld1_gather_offset(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64offset_f64)))
svfloat64_t svld1_gather_offset(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_gather_u64offset_s64)))
svint64_t svld1_gather_offset(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u8)))
svuint8_t svld1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u32)))
svuint32_t svld1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u64)))
svuint64_t svld1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_u16)))
svuint16_t svld1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s8)))
svint8_t svld1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_f64)))
svfloat64_t svld1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_f32)))
svfloat32_t svld1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_f16)))
svfloat16_t svld1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s32)))
svint32_t svld1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s64)))
svint64_t svld1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1_vnum_s16)))
svint16_t svld1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_offset_u32)))
svuint32_t svld1sb_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_offset_u64)))
svuint64_t svld1sb_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_offset_s32)))
svint32_t svld1sb_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_offset_s64)))
svint64_t svld1sb_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_u32)))
svuint32_t svld1sb_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_u64)))
svuint64_t svld1sb_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32base_s32)))
svint32_t svld1sb_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64base_s64)))
svint64_t svld1sb_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s32offset_u32)))
svuint32_t svld1sb_gather_offset_u32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s32offset_s32)))
svint32_t svld1sb_gather_offset_s32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32offset_u32)))
svuint32_t svld1sb_gather_offset_u32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u32offset_s32)))
svint32_t svld1sb_gather_offset_s32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s64offset_u64)))
svuint64_t svld1sb_gather_offset_u64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_s64offset_s64)))
svint64_t svld1sb_gather_offset_s64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64offset_u64)))
svuint64_t svld1sb_gather_offset_u64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sb_gather_u64offset_s64)))
svint64_t svld1sb_gather_offset_s64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_index_u32)))
svuint32_t svld1sh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_index_u64)))
svuint64_t svld1sh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_index_s32)))
svint32_t svld1sh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_index_s64)))
svint64_t svld1sh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_offset_u32)))
svuint32_t svld1sh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_offset_u64)))
svuint64_t svld1sh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_offset_s32)))
svint32_t svld1sh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_offset_s64)))
svint64_t svld1sh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_u32)))
svuint32_t svld1sh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_u64)))
svuint64_t svld1sh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32base_s32)))
svint32_t svld1sh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64base_s64)))
svint64_t svld1sh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32index_u32)))
svuint32_t svld1sh_gather_index_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32index_s32)))
svint32_t svld1sh_gather_index_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32index_u32)))
svuint32_t svld1sh_gather_index_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32index_s32)))
svint32_t svld1sh_gather_index_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64index_u64)))
svuint64_t svld1sh_gather_index_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64index_s64)))
svint64_t svld1sh_gather_index_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64index_u64)))
svuint64_t svld1sh_gather_index_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64index_s64)))
svint64_t svld1sh_gather_index_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32offset_u32)))
svuint32_t svld1sh_gather_offset_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s32offset_s32)))
svint32_t svld1sh_gather_offset_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32offset_u32)))
svuint32_t svld1sh_gather_offset_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u32offset_s32)))
svint32_t svld1sh_gather_offset_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64offset_u64)))
svuint64_t svld1sh_gather_offset_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_s64offset_s64)))
svint64_t svld1sh_gather_offset_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64offset_u64)))
svuint64_t svld1sh_gather_offset_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sh_gather_u64offset_s64)))
svint64_t svld1sh_gather_offset_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_index_u64)))
svuint64_t svld1sw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_index_s64)))
svint64_t svld1sw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_offset_u64)))
svuint64_t svld1sw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_offset_s64)))
svint64_t svld1sw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_u64)))
svuint64_t svld1sw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64base_s64)))
svint64_t svld1sw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64index_u64)))
svuint64_t svld1sw_gather_index_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64index_s64)))
svint64_t svld1sw_gather_index_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64index_u64)))
svuint64_t svld1sw_gather_index_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64index_s64)))
svint64_t svld1sw_gather_index_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64offset_u64)))
svuint64_t svld1sw_gather_offset_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_s64offset_s64)))
svint64_t svld1sw_gather_offset_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64offset_u64)))
svuint64_t svld1sw_gather_offset_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1sw_gather_u64offset_s64)))
svint64_t svld1sw_gather_offset_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_offset_u32)))
svuint32_t svld1ub_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_offset_u64)))
svuint64_t svld1ub_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_offset_s32)))
svint32_t svld1ub_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_offset_s64)))
svint64_t svld1ub_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_u32)))
svuint32_t svld1ub_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_u64)))
svuint64_t svld1ub_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32base_s32)))
svint32_t svld1ub_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64base_s64)))
svint64_t svld1ub_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s32offset_u32)))
svuint32_t svld1ub_gather_offset_u32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s32offset_s32)))
svint32_t svld1ub_gather_offset_s32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32offset_u32)))
svuint32_t svld1ub_gather_offset_u32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u32offset_s32)))
svint32_t svld1ub_gather_offset_s32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s64offset_u64)))
svuint64_t svld1ub_gather_offset_u64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_s64offset_s64)))
svint64_t svld1ub_gather_offset_s64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64offset_u64)))
svuint64_t svld1ub_gather_offset_u64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1ub_gather_u64offset_s64)))
svint64_t svld1ub_gather_offset_s64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_index_u32)))
svuint32_t svld1uh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_index_u64)))
svuint64_t svld1uh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_index_s32)))
svint32_t svld1uh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_index_s64)))
svint64_t svld1uh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_offset_u32)))
svuint32_t svld1uh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_offset_u64)))
svuint64_t svld1uh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_offset_s32)))
svint32_t svld1uh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_offset_s64)))
svint64_t svld1uh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_u32)))
svuint32_t svld1uh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_u64)))
svuint64_t svld1uh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32base_s32)))
svint32_t svld1uh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64base_s64)))
svint64_t svld1uh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32index_u32)))
svuint32_t svld1uh_gather_index_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32index_s32)))
svint32_t svld1uh_gather_index_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32index_u32)))
svuint32_t svld1uh_gather_index_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32index_s32)))
svint32_t svld1uh_gather_index_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64index_u64)))
svuint64_t svld1uh_gather_index_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64index_s64)))
svint64_t svld1uh_gather_index_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64index_u64)))
svuint64_t svld1uh_gather_index_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64index_s64)))
svint64_t svld1uh_gather_index_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32offset_u32)))
svuint32_t svld1uh_gather_offset_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s32offset_s32)))
svint32_t svld1uh_gather_offset_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32offset_u32)))
svuint32_t svld1uh_gather_offset_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u32offset_s32)))
svint32_t svld1uh_gather_offset_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64offset_u64)))
svuint64_t svld1uh_gather_offset_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_s64offset_s64)))
svint64_t svld1uh_gather_offset_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64offset_u64)))
svuint64_t svld1uh_gather_offset_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uh_gather_u64offset_s64)))
svint64_t svld1uh_gather_offset_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_index_u64)))
svuint64_t svld1uw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_index_s64)))
svint64_t svld1uw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_offset_u64)))
svuint64_t svld1uw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_offset_s64)))
svint64_t svld1uw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_u64)))
svuint64_t svld1uw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64base_s64)))
svint64_t svld1uw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64index_u64)))
svuint64_t svld1uw_gather_index_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64index_s64)))
svint64_t svld1uw_gather_index_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64index_u64)))
svuint64_t svld1uw_gather_index_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64index_s64)))
svint64_t svld1uw_gather_index_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64offset_u64)))
svuint64_t svld1uw_gather_offset_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_s64offset_s64)))
svint64_t svld1uw_gather_offset_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64offset_u64)))
svuint64_t svld1uw_gather_offset_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svld1uw_gather_u64offset_s64)))
svint64_t svld1uw_gather_offset_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u8)))
svuint8_t svldff1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u32)))
svuint32_t svldff1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u64)))
svuint64_t svldff1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_u16)))
svuint16_t svldff1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s8)))
svint8_t svldff1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_f64)))
svfloat64_t svldff1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_f32)))
svfloat32_t svldff1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_f16)))
svfloat16_t svldff1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s32)))
svint32_t svldff1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s64)))
svint64_t svldff1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_s16)))
svint16_t svldff1(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_index_u32)))
svuint32_t svldff1_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_index_u64)))
svuint64_t svldff1_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_index_f64)))
svfloat64_t svldff1_gather_index_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_index_f32)))
svfloat32_t svldff1_gather_index_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_index_s32)))
svint32_t svldff1_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_index_s64)))
svint64_t svldff1_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_offset_u32)))
svuint32_t svldff1_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_offset_u64)))
svuint64_t svldff1_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_offset_f64)))
svfloat64_t svldff1_gather_offset_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_offset_f32)))
svfloat32_t svldff1_gather_offset_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_offset_s32)))
svint32_t svldff1_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_offset_s64)))
svint64_t svldff1_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_u32)))
svuint32_t svldff1_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_u64)))
svuint64_t svldff1_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_f64)))
svfloat64_t svldff1_gather_f64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_f32)))
svfloat32_t svldff1_gather_f32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32base_s32)))
svint32_t svldff1_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64base_s64)))
svint64_t svldff1_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32index_u32)))
svuint32_t svldff1_gather_index(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32index_f32)))
svfloat32_t svldff1_gather_index(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32index_s32)))
svint32_t svldff1_gather_index(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32index_u32)))
svuint32_t svldff1_gather_index(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32index_f32)))
svfloat32_t svldff1_gather_index(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32index_s32)))
svint32_t svldff1_gather_index(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64index_u64)))
svuint64_t svldff1_gather_index(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64index_f64)))
svfloat64_t svldff1_gather_index(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64index_s64)))
svint64_t svldff1_gather_index(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64index_u64)))
svuint64_t svldff1_gather_index(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64index_f64)))
svfloat64_t svldff1_gather_index(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64index_s64)))
svint64_t svldff1_gather_index(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32offset_u32)))
svuint32_t svldff1_gather_offset(svbool_t, uint32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32offset_f32)))
svfloat32_t svldff1_gather_offset(svbool_t, float32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s32offset_s32)))
svint32_t svldff1_gather_offset(svbool_t, int32_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32offset_u32)))
svuint32_t svldff1_gather_offset(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32offset_f32)))
svfloat32_t svldff1_gather_offset(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u32offset_s32)))
svint32_t svldff1_gather_offset(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64offset_u64)))
svuint64_t svldff1_gather_offset(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64offset_f64)))
svfloat64_t svldff1_gather_offset(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_s64offset_s64)))
svint64_t svldff1_gather_offset(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64offset_u64)))
svuint64_t svldff1_gather_offset(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64offset_f64)))
svfloat64_t svldff1_gather_offset(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_gather_u64offset_s64)))
svint64_t svldff1_gather_offset(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u8)))
svuint8_t svldff1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u32)))
svuint32_t svldff1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u64)))
svuint64_t svldff1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_u16)))
svuint16_t svldff1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s8)))
svint8_t svldff1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_f64)))
svfloat64_t svldff1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_f32)))
svfloat32_t svldff1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_f16)))
svfloat16_t svldff1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s32)))
svint32_t svldff1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s64)))
svint64_t svldff1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1_vnum_s16)))
svint16_t svldff1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_offset_u32)))
svuint32_t svldff1sb_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_offset_u64)))
svuint64_t svldff1sb_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_offset_s32)))
svint32_t svldff1sb_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_offset_s64)))
svint64_t svldff1sb_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_u32)))
svuint32_t svldff1sb_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_u64)))
svuint64_t svldff1sb_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32base_s32)))
svint32_t svldff1sb_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64base_s64)))
svint64_t svldff1sb_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s32offset_u32)))
svuint32_t svldff1sb_gather_offset_u32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s32offset_s32)))
svint32_t svldff1sb_gather_offset_s32(svbool_t, int8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32offset_u32)))
svuint32_t svldff1sb_gather_offset_u32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u32offset_s32)))
svint32_t svldff1sb_gather_offset_s32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s64offset_u64)))
svuint64_t svldff1sb_gather_offset_u64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_s64offset_s64)))
svint64_t svldff1sb_gather_offset_s64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64offset_u64)))
svuint64_t svldff1sb_gather_offset_u64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sb_gather_u64offset_s64)))
svint64_t svldff1sb_gather_offset_s64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_index_u32)))
svuint32_t svldff1sh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_index_u64)))
svuint64_t svldff1sh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_index_s32)))
svint32_t svldff1sh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_index_s64)))
svint64_t svldff1sh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_offset_u32)))
svuint32_t svldff1sh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_offset_u64)))
svuint64_t svldff1sh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_offset_s32)))
svint32_t svldff1sh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_offset_s64)))
svint64_t svldff1sh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_u32)))
svuint32_t svldff1sh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_u64)))
svuint64_t svldff1sh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32base_s32)))
svint32_t svldff1sh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64base_s64)))
svint64_t svldff1sh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32index_u32)))
svuint32_t svldff1sh_gather_index_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32index_s32)))
svint32_t svldff1sh_gather_index_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32index_u32)))
svuint32_t svldff1sh_gather_index_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32index_s32)))
svint32_t svldff1sh_gather_index_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64index_u64)))
svuint64_t svldff1sh_gather_index_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64index_s64)))
svint64_t svldff1sh_gather_index_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64index_u64)))
svuint64_t svldff1sh_gather_index_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64index_s64)))
svint64_t svldff1sh_gather_index_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32offset_u32)))
svuint32_t svldff1sh_gather_offset_u32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s32offset_s32)))
svint32_t svldff1sh_gather_offset_s32(svbool_t, int16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32offset_u32)))
svuint32_t svldff1sh_gather_offset_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u32offset_s32)))
svint32_t svldff1sh_gather_offset_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64offset_u64)))
svuint64_t svldff1sh_gather_offset_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_s64offset_s64)))
svint64_t svldff1sh_gather_offset_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64offset_u64)))
svuint64_t svldff1sh_gather_offset_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sh_gather_u64offset_s64)))
svint64_t svldff1sh_gather_offset_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_index_u64)))
svuint64_t svldff1sw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_index_s64)))
svint64_t svldff1sw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_offset_u64)))
svuint64_t svldff1sw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_offset_s64)))
svint64_t svldff1sw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_u64)))
svuint64_t svldff1sw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64base_s64)))
svint64_t svldff1sw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64index_u64)))
svuint64_t svldff1sw_gather_index_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64index_s64)))
svint64_t svldff1sw_gather_index_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64index_u64)))
svuint64_t svldff1sw_gather_index_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64index_s64)))
svint64_t svldff1sw_gather_index_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64offset_u64)))
svuint64_t svldff1sw_gather_offset_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_s64offset_s64)))
svint64_t svldff1sw_gather_offset_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64offset_u64)))
svuint64_t svldff1sw_gather_offset_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1sw_gather_u64offset_s64)))
svint64_t svldff1sw_gather_offset_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_offset_u32)))
svuint32_t svldff1ub_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_offset_u64)))
svuint64_t svldff1ub_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_offset_s32)))
svint32_t svldff1ub_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_offset_s64)))
svint64_t svldff1ub_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_u32)))
svuint32_t svldff1ub_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_u64)))
svuint64_t svldff1ub_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32base_s32)))
svint32_t svldff1ub_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64base_s64)))
svint64_t svldff1ub_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s32offset_u32)))
svuint32_t svldff1ub_gather_offset_u32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s32offset_s32)))
svint32_t svldff1ub_gather_offset_s32(svbool_t, uint8_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32offset_u32)))
svuint32_t svldff1ub_gather_offset_u32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u32offset_s32)))
svint32_t svldff1ub_gather_offset_s32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s64offset_u64)))
svuint64_t svldff1ub_gather_offset_u64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_s64offset_s64)))
svint64_t svldff1ub_gather_offset_s64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64offset_u64)))
svuint64_t svldff1ub_gather_offset_u64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1ub_gather_u64offset_s64)))
svint64_t svldff1ub_gather_offset_s64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_index_u32)))
svuint32_t svldff1uh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_index_u64)))
svuint64_t svldff1uh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_index_s32)))
svint32_t svldff1uh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_index_s64)))
svint64_t svldff1uh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_offset_u32)))
svuint32_t svldff1uh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_offset_u64)))
svuint64_t svldff1uh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_offset_s32)))
svint32_t svldff1uh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_offset_s64)))
svint64_t svldff1uh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_u32)))
svuint32_t svldff1uh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_u64)))
svuint64_t svldff1uh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32base_s32)))
svint32_t svldff1uh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64base_s64)))
svint64_t svldff1uh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32index_u32)))
svuint32_t svldff1uh_gather_index_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32index_s32)))
svint32_t svldff1uh_gather_index_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32index_u32)))
svuint32_t svldff1uh_gather_index_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32index_s32)))
svint32_t svldff1uh_gather_index_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64index_u64)))
svuint64_t svldff1uh_gather_index_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64index_s64)))
svint64_t svldff1uh_gather_index_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64index_u64)))
svuint64_t svldff1uh_gather_index_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64index_s64)))
svint64_t svldff1uh_gather_index_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32offset_u32)))
svuint32_t svldff1uh_gather_offset_u32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s32offset_s32)))
svint32_t svldff1uh_gather_offset_s32(svbool_t, uint16_t const *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32offset_u32)))
svuint32_t svldff1uh_gather_offset_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u32offset_s32)))
svint32_t svldff1uh_gather_offset_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64offset_u64)))
svuint64_t svldff1uh_gather_offset_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_s64offset_s64)))
svint64_t svldff1uh_gather_offset_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64offset_u64)))
svuint64_t svldff1uh_gather_offset_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uh_gather_u64offset_s64)))
svint64_t svldff1uh_gather_offset_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_index_u64)))
svuint64_t svldff1uw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_index_s64)))
svint64_t svldff1uw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_offset_u64)))
svuint64_t svldff1uw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_offset_s64)))
svint64_t svldff1uw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_u64)))
svuint64_t svldff1uw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64base_s64)))
svint64_t svldff1uw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64index_u64)))
svuint64_t svldff1uw_gather_index_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64index_s64)))
svint64_t svldff1uw_gather_index_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64index_u64)))
svuint64_t svldff1uw_gather_index_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64index_s64)))
svint64_t svldff1uw_gather_index_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64offset_u64)))
svuint64_t svldff1uw_gather_offset_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_s64offset_s64)))
svint64_t svldff1uw_gather_offset_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64offset_u64)))
svuint64_t svldff1uw_gather_offset_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldff1uw_gather_u64offset_s64)))
svint64_t svldff1uw_gather_offset_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u8)))
svuint8_t svldnf1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u32)))
svuint32_t svldnf1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u64)))
svuint64_t svldnf1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_u16)))
svuint16_t svldnf1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s8)))
svint8_t svldnf1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_f64)))
svfloat64_t svldnf1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_f32)))
svfloat32_t svldnf1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_f16)))
svfloat16_t svldnf1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s32)))
svint32_t svldnf1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s64)))
svint64_t svldnf1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_s16)))
svint16_t svldnf1(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u8)))
svuint8_t svldnf1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u32)))
svuint32_t svldnf1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u64)))
svuint64_t svldnf1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_u16)))
svuint16_t svldnf1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s8)))
svint8_t svldnf1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_f64)))
svfloat64_t svldnf1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_f32)))
svfloat32_t svldnf1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_f16)))
svfloat16_t svldnf1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s32)))
svint32_t svldnf1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s64)))
svint64_t svldnf1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnf1_vnum_s16)))
svint16_t svldnf1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u8)))
svuint8_t svldnt1(svbool_t, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u32)))
svuint32_t svldnt1(svbool_t, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u64)))
svuint64_t svldnt1(svbool_t, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_u16)))
svuint16_t svldnt1(svbool_t, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s8)))
svint8_t svldnt1(svbool_t, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_f64)))
svfloat64_t svldnt1(svbool_t, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_f32)))
svfloat32_t svldnt1(svbool_t, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_f16)))
svfloat16_t svldnt1(svbool_t, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s32)))
svint32_t svldnt1(svbool_t, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s64)))
svint64_t svldnt1(svbool_t, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_s16)))
svint16_t svldnt1(svbool_t, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u8)))
svuint8_t svldnt1_vnum(svbool_t, uint8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u32)))
svuint32_t svldnt1_vnum(svbool_t, uint32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u64)))
svuint64_t svldnt1_vnum(svbool_t, uint64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_u16)))
svuint16_t svldnt1_vnum(svbool_t, uint16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s8)))
svint8_t svldnt1_vnum(svbool_t, int8_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_f64)))
svfloat64_t svldnt1_vnum(svbool_t, float64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_f32)))
svfloat32_t svldnt1_vnum(svbool_t, float32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_f16)))
svfloat16_t svldnt1_vnum(svbool_t, float16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s32)))
svint32_t svldnt1_vnum(svbool_t, int32_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s64)))
svint64_t svldnt1_vnum(svbool_t, int64_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_vnum_s16)))
svint16_t svldnt1_vnum(svbool_t, int16_t const *, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s8_m)))
svint8_t svmax_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s32_m)))
svint32_t svmax_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s64_m)))
svint64_t svmax_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s16_m)))
svint16_t svmax_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s8_x)))
svint8_t svmax_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s32_x)))
svint32_t svmax_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s64_x)))
svint64_t svmax_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s16_x)))
svint16_t svmax_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s8_z)))
svint8_t svmax_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s32_z)))
svint32_t svmax_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s64_z)))
svint64_t svmax_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_s16_z)))
svint16_t svmax_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u8_m)))
svuint8_t svmax_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u32_m)))
svuint32_t svmax_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u64_m)))
svuint64_t svmax_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u16_m)))
svuint16_t svmax_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u8_x)))
svuint8_t svmax_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u32_x)))
svuint32_t svmax_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u64_x)))
svuint64_t svmax_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u16_x)))
svuint16_t svmax_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u8_z)))
svuint8_t svmax_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u32_z)))
svuint32_t svmax_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u64_z)))
svuint64_t svmax_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_n_u16_z)))
svuint16_t svmax_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s8_m)))
svint8_t svmax_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s32_m)))
svint32_t svmax_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s64_m)))
svint64_t svmax_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s16_m)))
svint16_t svmax_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s8_x)))
svint8_t svmax_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s32_x)))
svint32_t svmax_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s64_x)))
svint64_t svmax_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s16_x)))
svint16_t svmax_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s8_z)))
svint8_t svmax_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s32_z)))
svint32_t svmax_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s64_z)))
svint64_t svmax_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_s16_z)))
svint16_t svmax_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u8_m)))
svuint8_t svmax_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u32_m)))
svuint32_t svmax_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u64_m)))
svuint64_t svmax_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u16_m)))
svuint16_t svmax_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u8_x)))
svuint8_t svmax_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u32_x)))
svuint32_t svmax_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u64_x)))
svuint64_t svmax_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u16_x)))
svuint16_t svmax_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u8_z)))
svuint8_t svmax_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u32_z)))
svuint32_t svmax_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u64_z)))
svuint64_t svmax_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmax_u16_z)))
svuint16_t svmax_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s8_m)))
svint8_t svmin_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s32_m)))
svint32_t svmin_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s64_m)))
svint64_t svmin_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s16_m)))
svint16_t svmin_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s8_x)))
svint8_t svmin_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s32_x)))
svint32_t svmin_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s64_x)))
svint64_t svmin_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s16_x)))
svint16_t svmin_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s8_z)))
svint8_t svmin_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s32_z)))
svint32_t svmin_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s64_z)))
svint64_t svmin_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_s16_z)))
svint16_t svmin_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u8_m)))
svuint8_t svmin_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u32_m)))
svuint32_t svmin_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u64_m)))
svuint64_t svmin_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u16_m)))
svuint16_t svmin_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u8_x)))
svuint8_t svmin_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u32_x)))
svuint32_t svmin_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u64_x)))
svuint64_t svmin_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u16_x)))
svuint16_t svmin_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u8_z)))
svuint8_t svmin_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u32_z)))
svuint32_t svmin_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u64_z)))
svuint64_t svmin_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_n_u16_z)))
svuint16_t svmin_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s8_m)))
svint8_t svmin_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s32_m)))
svint32_t svmin_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s64_m)))
svint64_t svmin_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s16_m)))
svint16_t svmin_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s8_x)))
svint8_t svmin_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s32_x)))
svint32_t svmin_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s64_x)))
svint64_t svmin_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s16_x)))
svint16_t svmin_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s8_z)))
svint8_t svmin_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s32_z)))
svint32_t svmin_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s64_z)))
svint64_t svmin_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_s16_z)))
svint16_t svmin_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u8_m)))
svuint8_t svmin_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u32_m)))
svuint32_t svmin_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u64_m)))
svuint64_t svmin_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u16_m)))
svuint16_t svmin_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u8_x)))
svuint8_t svmin_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u32_x)))
svuint32_t svmin_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u64_x)))
svuint64_t svmin_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u16_x)))
svuint16_t svmin_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u8_z)))
svuint8_t svmin_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u32_z)))
svuint32_t svmin_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u64_z)))
svuint64_t svmin_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmin_u16_z)))
svuint16_t svmin_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_lane_f64)))
svfloat64_t svmla_lane(svfloat64_t, svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_lane_f32)))
svfloat32_t svmla_lane(svfloat32_t, svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmla_lane_f16)))
svfloat16_t svmla_lane(svfloat16_t, svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u8_m)))
svuint8_t svmul_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u32_m)))
svuint32_t svmul_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u64_m)))
svuint64_t svmul_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u16_m)))
svuint16_t svmul_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s8_m)))
svint8_t svmul_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s32_m)))
svint32_t svmul_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s64_m)))
svint64_t svmul_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s16_m)))
svint16_t svmul_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u8_x)))
svuint8_t svmul_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u32_x)))
svuint32_t svmul_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u64_x)))
svuint64_t svmul_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u16_x)))
svuint16_t svmul_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s8_x)))
svint8_t svmul_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s32_x)))
svint32_t svmul_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s64_x)))
svint64_t svmul_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s16_x)))
svint16_t svmul_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u8_z)))
svuint8_t svmul_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u32_z)))
svuint32_t svmul_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u64_z)))
svuint64_t svmul_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_u16_z)))
svuint16_t svmul_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s8_z)))
svint8_t svmul_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s32_z)))
svint32_t svmul_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s64_z)))
svint64_t svmul_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_n_s16_z)))
svint16_t svmul_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u8_m)))
svuint8_t svmul_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u32_m)))
svuint32_t svmul_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u64_m)))
svuint64_t svmul_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u16_m)))
svuint16_t svmul_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s8_m)))
svint8_t svmul_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s32_m)))
svint32_t svmul_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s64_m)))
svint64_t svmul_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s16_m)))
svint16_t svmul_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u8_x)))
svuint8_t svmul_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u32_x)))
svuint32_t svmul_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u64_x)))
svuint64_t svmul_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u16_x)))
svuint16_t svmul_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s8_x)))
svint8_t svmul_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s32_x)))
svint32_t svmul_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s64_x)))
svint64_t svmul_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s16_x)))
svint16_t svmul_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u8_z)))
svuint8_t svmul_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u32_z)))
svuint32_t svmul_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u64_z)))
svuint64_t svmul_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_u16_z)))
svuint16_t svmul_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s8_z)))
svint8_t svmul_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s32_z)))
svint32_t svmul_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s64_z)))
svint64_t svmul_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmul_s16_z)))
svint16_t svmul_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s8_m)))
svint8_t svmulh_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s32_m)))
svint32_t svmulh_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s64_m)))
svint64_t svmulh_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s16_m)))
svint16_t svmulh_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s8_x)))
svint8_t svmulh_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s32_x)))
svint32_t svmulh_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s64_x)))
svint64_t svmulh_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s16_x)))
svint16_t svmulh_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s8_z)))
svint8_t svmulh_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s32_z)))
svint32_t svmulh_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s64_z)))
svint64_t svmulh_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_s16_z)))
svint16_t svmulh_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u8_m)))
svuint8_t svmulh_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u32_m)))
svuint32_t svmulh_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u64_m)))
svuint64_t svmulh_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u16_m)))
svuint16_t svmulh_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u8_x)))
svuint8_t svmulh_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u32_x)))
svuint32_t svmulh_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u64_x)))
svuint64_t svmulh_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u16_x)))
svuint16_t svmulh_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u8_z)))
svuint8_t svmulh_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u32_z)))
svuint32_t svmulh_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u64_z)))
svuint64_t svmulh_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_n_u16_z)))
svuint16_t svmulh_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s8_m)))
svint8_t svmulh_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s32_m)))
svint32_t svmulh_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s64_m)))
svint64_t svmulh_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s16_m)))
svint16_t svmulh_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s8_x)))
svint8_t svmulh_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s32_x)))
svint32_t svmulh_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s64_x)))
svint64_t svmulh_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s16_x)))
svint16_t svmulh_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s8_z)))
svint8_t svmulh_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s32_z)))
svint32_t svmulh_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s64_z)))
svint64_t svmulh_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_s16_z)))
svint16_t svmulh_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u8_m)))
svuint8_t svmulh_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u32_m)))
svuint32_t svmulh_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u64_m)))
svuint64_t svmulh_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u16_m)))
svuint16_t svmulh_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u8_x)))
svuint8_t svmulh_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u32_x)))
svuint32_t svmulh_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u64_x)))
svuint64_t svmulh_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u16_x)))
svuint16_t svmulh_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u8_z)))
svuint8_t svmulh_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u32_z)))
svuint32_t svmulh_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u64_z)))
svuint64_t svmulh_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svmulh_u16_z)))
svuint16_t svmulh_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f64_m)))
svfloat64_t svneg_m(svfloat64_t, svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f32_m)))
svfloat32_t svneg_m(svfloat32_t, svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f16_m)))
svfloat16_t svneg_m(svfloat16_t, svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f64_x)))
svfloat64_t svneg_x(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f32_x)))
svfloat32_t svneg_x(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f16_x)))
svfloat16_t svneg_x(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f64_z)))
svfloat64_t svneg_z(svbool_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f32_z)))
svfloat32_t svneg_z(svbool_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_f16_z)))
svfloat16_t svneg_z(svbool_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s8_m)))
svint8_t svneg_m(svint8_t, svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s32_m)))
svint32_t svneg_m(svint32_t, svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s64_m)))
svint64_t svneg_m(svint64_t, svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s16_m)))
svint16_t svneg_m(svint16_t, svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s8_x)))
svint8_t svneg_x(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s32_x)))
svint32_t svneg_x(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s64_x)))
svint64_t svneg_x(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s16_x)))
svint16_t svneg_x(svbool_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s8_z)))
svint8_t svneg_z(svbool_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s32_z)))
svint32_t svneg_z(svbool_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s64_z)))
svint64_t svneg_z(svbool_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svneg_s16_z)))
svint16_t svneg_z(svbool_t, svint16_t);
#define svpfalse(...) __builtin_sve_svpfalse_b(__VA_ARGS__)
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_s16)))
svint16_t svqdech_pat(svint16_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqdech_pat_u16)))
svuint16_t svqdech_pat(svuint16_t, sv_pattern, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u8)))
void svst1(svbool_t, uint8_t *, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u32)))
void svst1(svbool_t, uint32_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u64)))
void svst1(svbool_t, uint64_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_u16)))
void svst1(svbool_t, uint16_t *, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s8)))
void svst1(svbool_t, int8_t *, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_f64)))
void svst1(svbool_t, float64_t *, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_f32)))
void svst1(svbool_t, float32_t *, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_f16)))
void svst1(svbool_t, float16_t *, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s32)))
void svst1(svbool_t, int32_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s64)))
void svst1(svbool_t, int64_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_s16)))
void svst1(svbool_t, int16_t *, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u8)))
void svst1_vnum(svbool_t, uint8_t *, int64_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u32)))
void svst1_vnum(svbool_t, uint32_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u64)))
void svst1_vnum(svbool_t, uint64_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_u16)))
void svst1_vnum(svbool_t, uint16_t *, int64_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s8)))
void svst1_vnum(svbool_t, int8_t *, int64_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_f64)))
void svst1_vnum(svbool_t, float64_t *, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_f32)))
void svst1_vnum(svbool_t, float32_t *, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_f16)))
void svst1_vnum(svbool_t, float16_t *, int64_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s32)))
void svst1_vnum(svbool_t, int32_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s64)))
void svst1_vnum(svbool_t, int64_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1_vnum_s16)))
void svst1_vnum(svbool_t, int16_t *, int64_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_s32)))
void svst1b(svbool_t, int8_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_s64)))
void svst1b(svbool_t, int8_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_s16)))
void svst1b(svbool_t, int8_t *, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_u32)))
void svst1b(svbool_t, uint8_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_u64)))
void svst1b(svbool_t, uint8_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_u16)))
void svst1b(svbool_t, uint8_t *, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_s32)))
void svst1b_vnum(svbool_t, int8_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_s64)))
void svst1b_vnum(svbool_t, int8_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_s16)))
void svst1b_vnum(svbool_t, int8_t *, int64_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_u32)))
void svst1b_vnum(svbool_t, uint8_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_u64)))
void svst1b_vnum(svbool_t, uint8_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1b_vnum_u16)))
void svst1b_vnum(svbool_t, uint8_t *, int64_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_s32)))
void svst1h(svbool_t, int16_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_s64)))
void svst1h(svbool_t, int16_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_u32)))
void svst1h(svbool_t, uint16_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_u64)))
void svst1h(svbool_t, uint16_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_s32)))
void svst1h_vnum(svbool_t, int16_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_s64)))
void svst1h_vnum(svbool_t, int16_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_u32)))
void svst1h_vnum(svbool_t, uint16_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1h_vnum_u64)))
void svst1h_vnum(svbool_t, uint16_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_s64)))
void svst1w(svbool_t, int32_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_u64)))
void svst1w(svbool_t, uint32_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_vnum_s64)))
void svst1w_vnum(svbool_t, int32_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svst1w_vnum_u64)))
void svst1w_vnum(svbool_t, uint32_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u8)))
void svstnt1(svbool_t, uint8_t *, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u32)))
void svstnt1(svbool_t, uint32_t *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u64)))
void svstnt1(svbool_t, uint64_t *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_u16)))
void svstnt1(svbool_t, uint16_t *, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s8)))
void svstnt1(svbool_t, int8_t *, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_f64)))
void svstnt1(svbool_t, float64_t *, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_f32)))
void svstnt1(svbool_t, float32_t *, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_f16)))
void svstnt1(svbool_t, float16_t *, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s32)))
void svstnt1(svbool_t, int32_t *, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s64)))
void svstnt1(svbool_t, int64_t *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_s16)))
void svstnt1(svbool_t, int16_t *, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u8)))
void svstnt1_vnum(svbool_t, uint8_t *, int64_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u32)))
void svstnt1_vnum(svbool_t, uint32_t *, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u64)))
void svstnt1_vnum(svbool_t, uint64_t *, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_u16)))
void svstnt1_vnum(svbool_t, uint16_t *, int64_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s8)))
void svstnt1_vnum(svbool_t, int8_t *, int64_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_f64)))
void svstnt1_vnum(svbool_t, float64_t *, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_f32)))
void svstnt1_vnum(svbool_t, float32_t *, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_f16)))
void svstnt1_vnum(svbool_t, float16_t *, int64_t, svfloat16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s32)))
void svstnt1_vnum(svbool_t, int32_t *, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s64)))
void svstnt1_vnum(svbool_t, int64_t *, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_vnum_s16)))
void svstnt1_vnum(svbool_t, int16_t *, int64_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u8_m)))
svuint8_t svsub_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u32_m)))
svuint32_t svsub_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u64_m)))
svuint64_t svsub_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u16_m)))
svuint16_t svsub_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s8_m)))
svint8_t svsub_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s32_m)))
svint32_t svsub_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s64_m)))
svint64_t svsub_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s16_m)))
svint16_t svsub_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u8_x)))
svuint8_t svsub_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u32_x)))
svuint32_t svsub_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u64_x)))
svuint64_t svsub_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u16_x)))
svuint16_t svsub_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s8_x)))
svint8_t svsub_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s32_x)))
svint32_t svsub_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s64_x)))
svint64_t svsub_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s16_x)))
svint16_t svsub_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u8_z)))
svuint8_t svsub_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u32_z)))
svuint32_t svsub_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u64_z)))
svuint64_t svsub_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_u16_z)))
svuint16_t svsub_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s8_z)))
svint8_t svsub_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s32_z)))
svint32_t svsub_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s64_z)))
svint64_t svsub_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_n_s16_z)))
svint16_t svsub_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u8_m)))
svuint8_t svsub_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u32_m)))
svuint32_t svsub_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u64_m)))
svuint64_t svsub_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u16_m)))
svuint16_t svsub_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s8_m)))
svint8_t svsub_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s32_m)))
svint32_t svsub_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s64_m)))
svint64_t svsub_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s16_m)))
svint16_t svsub_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u8_x)))
svuint8_t svsub_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u32_x)))
svuint32_t svsub_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u64_x)))
svuint64_t svsub_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u16_x)))
svuint16_t svsub_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s8_x)))
svint8_t svsub_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s32_x)))
svint32_t svsub_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s64_x)))
svint64_t svsub_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s16_x)))
svint16_t svsub_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u8_z)))
svuint8_t svsub_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u32_z)))
svuint32_t svsub_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u64_z)))
svuint64_t svsub_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_u16_z)))
svuint16_t svsub_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s8_z)))
svint8_t svsub_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s32_z)))
svint32_t svsub_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s64_z)))
svint64_t svsub_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsub_s16_z)))
svint16_t svsub_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u8_m)))
svuint8_t svsubr_m(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u32_m)))
svuint32_t svsubr_m(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u64_m)))
svuint64_t svsubr_m(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u16_m)))
svuint16_t svsubr_m(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s8_m)))
svint8_t svsubr_m(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s32_m)))
svint32_t svsubr_m(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s64_m)))
svint64_t svsubr_m(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s16_m)))
svint16_t svsubr_m(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u8_x)))
svuint8_t svsubr_x(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u32_x)))
svuint32_t svsubr_x(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u64_x)))
svuint64_t svsubr_x(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u16_x)))
svuint16_t svsubr_x(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s8_x)))
svint8_t svsubr_x(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s32_x)))
svint32_t svsubr_x(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s64_x)))
svint64_t svsubr_x(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s16_x)))
svint16_t svsubr_x(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u8_z)))
svuint8_t svsubr_z(svbool_t, svuint8_t, uint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u32_z)))
svuint32_t svsubr_z(svbool_t, svuint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u64_z)))
svuint64_t svsubr_z(svbool_t, svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_u16_z)))
svuint16_t svsubr_z(svbool_t, svuint16_t, uint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s8_z)))
svint8_t svsubr_z(svbool_t, svint8_t, int8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s32_z)))
svint32_t svsubr_z(svbool_t, svint32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s64_z)))
svint64_t svsubr_z(svbool_t, svint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_n_s16_z)))
svint16_t svsubr_z(svbool_t, svint16_t, int16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u8_m)))
svuint8_t svsubr_m(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u32_m)))
svuint32_t svsubr_m(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u64_m)))
svuint64_t svsubr_m(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u16_m)))
svuint16_t svsubr_m(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s8_m)))
svint8_t svsubr_m(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s32_m)))
svint32_t svsubr_m(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s64_m)))
svint64_t svsubr_m(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s16_m)))
svint16_t svsubr_m(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u8_x)))
svuint8_t svsubr_x(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u32_x)))
svuint32_t svsubr_x(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u64_x)))
svuint64_t svsubr_x(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u16_x)))
svuint16_t svsubr_x(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s8_x)))
svint8_t svsubr_x(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s32_x)))
svint32_t svsubr_x(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s64_x)))
svint64_t svsubr_x(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s16_x)))
svint16_t svsubr_x(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u8_z)))
svuint8_t svsubr_z(svbool_t, svuint8_t, svuint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u32_z)))
svuint32_t svsubr_z(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u64_z)))
svuint64_t svsubr_z(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_u16_z)))
svuint16_t svsubr_z(svbool_t, svuint16_t, svuint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s8_z)))
svint8_t svsubr_z(svbool_t, svint8_t, svint8_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s32_z)))
svint32_t svsubr_z(svbool_t, svint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s64_z)))
svint64_t svsubr_z(svbool_t, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svsubr_s16_z)))
svint16_t svsubr_z(svbool_t, svint16_t, svint16_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtmad_f64)))
svfloat64_t svtmad(svfloat64_t, svfloat64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtmad_f32)))
svfloat32_t svtmad(svfloat32_t, svfloat32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svtmad_f16)))
svfloat16_t svtmad(svfloat16_t, svfloat16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_s32)))
svbool_t svwhilele_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_s32)))
svbool_t svwhilele_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_s32)))
svbool_t svwhilele_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_s32)))
svbool_t svwhilele_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_s64)))
svbool_t svwhilele_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_s64)))
svbool_t svwhilele_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_s64)))
svbool_t svwhilele_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_s64)))
svbool_t svwhilele_b16(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_u32)))
svbool_t svwhilele_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_u32)))
svbool_t svwhilele_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_u32)))
svbool_t svwhilele_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_u32)))
svbool_t svwhilele_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b8_u64)))
svbool_t svwhilele_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b32_u64)))
svbool_t svwhilele_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b64_u64)))
svbool_t svwhilele_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilele_b16_u64)))
svbool_t svwhilele_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_u32)))
svbool_t svwhilelt_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_u32)))
svbool_t svwhilelt_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_u32)))
svbool_t svwhilelt_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_u32)))
svbool_t svwhilelt_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_u64)))
svbool_t svwhilelt_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_u64)))
svbool_t svwhilelt_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_u64)))
svbool_t svwhilelt_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_u64)))
svbool_t svwhilelt_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_s32)))
svbool_t svwhilelt_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_s32)))
svbool_t svwhilelt_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_s32)))
svbool_t svwhilelt_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_s32)))
svbool_t svwhilelt_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b8_s64)))
svbool_t svwhilelt_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b32_s64)))
svbool_t svwhilelt_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b64_s64)))
svbool_t svwhilelt_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilelt_b16_s64)))
svbool_t svwhilelt_b16(int64_t, int64_t);

#if defined(__ARM_FEATURE_SVE2)
#define svldnt1_gather_u32base_index_u32(...) __builtin_sve_svldnt1_gather_u32base_index_u32(__VA_ARGS__)
#define svldnt1_gather_u64base_index_u64(...) __builtin_sve_svldnt1_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1_gather_u64base_index_f64(...) __builtin_sve_svldnt1_gather_u64base_index_f64(__VA_ARGS__)
#define svldnt1_gather_u32base_index_f32(...) __builtin_sve_svldnt1_gather_u32base_index_f32(__VA_ARGS__)
#define svldnt1_gather_u32base_index_s32(...) __builtin_sve_svldnt1_gather_u32base_index_s32(__VA_ARGS__)
#define svldnt1_gather_u64base_index_s64(...) __builtin_sve_svldnt1_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1_gather_u32base_offset_u32(...) __builtin_sve_svldnt1_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1_gather_u64base_offset_u64(...) __builtin_sve_svldnt1_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1_gather_u64base_offset_f64(...) __builtin_sve_svldnt1_gather_u64base_offset_f64(__VA_ARGS__)
#define svldnt1_gather_u32base_offset_f32(...) __builtin_sve_svldnt1_gather_u32base_offset_f32(__VA_ARGS__)
#define svldnt1_gather_u32base_offset_s32(...) __builtin_sve_svldnt1_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1_gather_u64base_offset_s64(...) __builtin_sve_svldnt1_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1_gather_u32base_u32(...) __builtin_sve_svldnt1_gather_u32base_u32(__VA_ARGS__)
#define svldnt1_gather_u64base_u64(...) __builtin_sve_svldnt1_gather_u64base_u64(__VA_ARGS__)
#define svldnt1_gather_u64base_f64(...) __builtin_sve_svldnt1_gather_u64base_f64(__VA_ARGS__)
#define svldnt1_gather_u32base_f32(...) __builtin_sve_svldnt1_gather_u32base_f32(__VA_ARGS__)
#define svldnt1_gather_u32base_s32(...) __builtin_sve_svldnt1_gather_u32base_s32(__VA_ARGS__)
#define svldnt1_gather_u64base_s64(...) __builtin_sve_svldnt1_gather_u64base_s64(__VA_ARGS__)
#define svldnt1_gather_s64index_u64(...) __builtin_sve_svldnt1_gather_s64index_u64(__VA_ARGS__)
#define svldnt1_gather_s64index_f64(...) __builtin_sve_svldnt1_gather_s64index_f64(__VA_ARGS__)
#define svldnt1_gather_s64index_s64(...) __builtin_sve_svldnt1_gather_s64index_s64(__VA_ARGS__)
#define svldnt1_gather_u64index_u64(...) __builtin_sve_svldnt1_gather_u64index_u64(__VA_ARGS__)
#define svldnt1_gather_u64index_f64(...) __builtin_sve_svldnt1_gather_u64index_f64(__VA_ARGS__)
#define svldnt1_gather_u64index_s64(...) __builtin_sve_svldnt1_gather_u64index_s64(__VA_ARGS__)
#define svldnt1_gather_u32offset_u32(...) __builtin_sve_svldnt1_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1_gather_u32offset_f32(...) __builtin_sve_svldnt1_gather_u32offset_f32(__VA_ARGS__)
#define svldnt1_gather_u32offset_s32(...) __builtin_sve_svldnt1_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1_gather_s64offset_u64(...) __builtin_sve_svldnt1_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1_gather_s64offset_f64(...) __builtin_sve_svldnt1_gather_s64offset_f64(__VA_ARGS__)
#define svldnt1_gather_s64offset_s64(...) __builtin_sve_svldnt1_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1_gather_u64offset_u64(...) __builtin_sve_svldnt1_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1_gather_u64offset_f64(...) __builtin_sve_svldnt1_gather_u64offset_f64(__VA_ARGS__)
#define svldnt1_gather_u64offset_s64(...) __builtin_sve_svldnt1_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_offset_u32(...) __builtin_sve_svldnt1sb_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_offset_u64(...) __builtin_sve_svldnt1sb_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_offset_s32(...) __builtin_sve_svldnt1sb_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_offset_s64(...) __builtin_sve_svldnt1sb_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_u32(...) __builtin_sve_svldnt1sb_gather_u32base_u32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_u64(...) __builtin_sve_svldnt1sb_gather_u64base_u64(__VA_ARGS__)
#define svldnt1sb_gather_u32base_s32(...) __builtin_sve_svldnt1sb_gather_u32base_s32(__VA_ARGS__)
#define svldnt1sb_gather_u64base_s64(...) __builtin_sve_svldnt1sb_gather_u64base_s64(__VA_ARGS__)
#define svldnt1sb_gather_u32offset_u32(...) __builtin_sve_svldnt1sb_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1sb_gather_u32offset_s32(...) __builtin_sve_svldnt1sb_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1sb_gather_s64offset_u64(...) __builtin_sve_svldnt1sb_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1sb_gather_s64offset_s64(...) __builtin_sve_svldnt1sb_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1sb_gather_u64offset_u64(...) __builtin_sve_svldnt1sb_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1sb_gather_u64offset_s64(...) __builtin_sve_svldnt1sb_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_index_u32(...) __builtin_sve_svldnt1sh_gather_u32base_index_u32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_index_u64(...) __builtin_sve_svldnt1sh_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_index_s32(...) __builtin_sve_svldnt1sh_gather_u32base_index_s32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_index_s64(...) __builtin_sve_svldnt1sh_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_offset_u32(...) __builtin_sve_svldnt1sh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_offset_u64(...) __builtin_sve_svldnt1sh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_offset_s32(...) __builtin_sve_svldnt1sh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_offset_s64(...) __builtin_sve_svldnt1sh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_u32(...) __builtin_sve_svldnt1sh_gather_u32base_u32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_u64(...) __builtin_sve_svldnt1sh_gather_u64base_u64(__VA_ARGS__)
#define svldnt1sh_gather_u32base_s32(...) __builtin_sve_svldnt1sh_gather_u32base_s32(__VA_ARGS__)
#define svldnt1sh_gather_u64base_s64(...) __builtin_sve_svldnt1sh_gather_u64base_s64(__VA_ARGS__)
#define svldnt1sh_gather_s64index_u64(...) __builtin_sve_svldnt1sh_gather_s64index_u64(__VA_ARGS__)
#define svldnt1sh_gather_s64index_s64(...) __builtin_sve_svldnt1sh_gather_s64index_s64(__VA_ARGS__)
#define svldnt1sh_gather_u64index_u64(...) __builtin_sve_svldnt1sh_gather_u64index_u64(__VA_ARGS__)
#define svldnt1sh_gather_u64index_s64(...) __builtin_sve_svldnt1sh_gather_u64index_s64(__VA_ARGS__)
#define svldnt1sh_gather_u32offset_u32(...) __builtin_sve_svldnt1sh_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1sh_gather_u32offset_s32(...) __builtin_sve_svldnt1sh_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1sh_gather_s64offset_u64(...) __builtin_sve_svldnt1sh_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1sh_gather_s64offset_s64(...) __builtin_sve_svldnt1sh_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1sh_gather_u64offset_u64(...) __builtin_sve_svldnt1sh_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1sh_gather_u64offset_s64(...) __builtin_sve_svldnt1sh_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_index_u64(...) __builtin_sve_svldnt1sw_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_index_s64(...) __builtin_sve_svldnt1sw_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_offset_u64(...) __builtin_sve_svldnt1sw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_offset_s64(...) __builtin_sve_svldnt1sw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_u64(...) __builtin_sve_svldnt1sw_gather_u64base_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64base_s64(...) __builtin_sve_svldnt1sw_gather_u64base_s64(__VA_ARGS__)
#define svldnt1sw_gather_s64index_u64(...) __builtin_sve_svldnt1sw_gather_s64index_u64(__VA_ARGS__)
#define svldnt1sw_gather_s64index_s64(...) __builtin_sve_svldnt1sw_gather_s64index_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64index_u64(...) __builtin_sve_svldnt1sw_gather_u64index_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64index_s64(...) __builtin_sve_svldnt1sw_gather_u64index_s64(__VA_ARGS__)
#define svldnt1sw_gather_s64offset_u64(...) __builtin_sve_svldnt1sw_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1sw_gather_s64offset_s64(...) __builtin_sve_svldnt1sw_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1sw_gather_u64offset_u64(...) __builtin_sve_svldnt1sw_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1sw_gather_u64offset_s64(...) __builtin_sve_svldnt1sw_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_offset_u32(...) __builtin_sve_svldnt1ub_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_offset_u64(...) __builtin_sve_svldnt1ub_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_offset_s32(...) __builtin_sve_svldnt1ub_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_offset_s64(...) __builtin_sve_svldnt1ub_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_u32(...) __builtin_sve_svldnt1ub_gather_u32base_u32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_u64(...) __builtin_sve_svldnt1ub_gather_u64base_u64(__VA_ARGS__)
#define svldnt1ub_gather_u32base_s32(...) __builtin_sve_svldnt1ub_gather_u32base_s32(__VA_ARGS__)
#define svldnt1ub_gather_u64base_s64(...) __builtin_sve_svldnt1ub_gather_u64base_s64(__VA_ARGS__)
#define svldnt1ub_gather_u32offset_u32(...) __builtin_sve_svldnt1ub_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1ub_gather_u32offset_s32(...) __builtin_sve_svldnt1ub_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1ub_gather_s64offset_u64(...) __builtin_sve_svldnt1ub_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1ub_gather_s64offset_s64(...) __builtin_sve_svldnt1ub_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1ub_gather_u64offset_u64(...) __builtin_sve_svldnt1ub_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1ub_gather_u64offset_s64(...) __builtin_sve_svldnt1ub_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_index_u32(...) __builtin_sve_svldnt1uh_gather_u32base_index_u32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_index_u64(...) __builtin_sve_svldnt1uh_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_index_s32(...) __builtin_sve_svldnt1uh_gather_u32base_index_s32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_index_s64(...) __builtin_sve_svldnt1uh_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_offset_u32(...) __builtin_sve_svldnt1uh_gather_u32base_offset_u32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_offset_u64(...) __builtin_sve_svldnt1uh_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_offset_s32(...) __builtin_sve_svldnt1uh_gather_u32base_offset_s32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_offset_s64(...) __builtin_sve_svldnt1uh_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_u32(...) __builtin_sve_svldnt1uh_gather_u32base_u32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_u64(...) __builtin_sve_svldnt1uh_gather_u64base_u64(__VA_ARGS__)
#define svldnt1uh_gather_u32base_s32(...) __builtin_sve_svldnt1uh_gather_u32base_s32(__VA_ARGS__)
#define svldnt1uh_gather_u64base_s64(...) __builtin_sve_svldnt1uh_gather_u64base_s64(__VA_ARGS__)
#define svldnt1uh_gather_s64index_u64(...) __builtin_sve_svldnt1uh_gather_s64index_u64(__VA_ARGS__)
#define svldnt1uh_gather_s64index_s64(...) __builtin_sve_svldnt1uh_gather_s64index_s64(__VA_ARGS__)
#define svldnt1uh_gather_u64index_u64(...) __builtin_sve_svldnt1uh_gather_u64index_u64(__VA_ARGS__)
#define svldnt1uh_gather_u64index_s64(...) __builtin_sve_svldnt1uh_gather_u64index_s64(__VA_ARGS__)
#define svldnt1uh_gather_u32offset_u32(...) __builtin_sve_svldnt1uh_gather_u32offset_u32(__VA_ARGS__)
#define svldnt1uh_gather_u32offset_s32(...) __builtin_sve_svldnt1uh_gather_u32offset_s32(__VA_ARGS__)
#define svldnt1uh_gather_s64offset_u64(...) __builtin_sve_svldnt1uh_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1uh_gather_s64offset_s64(...) __builtin_sve_svldnt1uh_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1uh_gather_u64offset_u64(...) __builtin_sve_svldnt1uh_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1uh_gather_u64offset_s64(...) __builtin_sve_svldnt1uh_gather_u64offset_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_index_u64(...) __builtin_sve_svldnt1uw_gather_u64base_index_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_index_s64(...) __builtin_sve_svldnt1uw_gather_u64base_index_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_offset_u64(...) __builtin_sve_svldnt1uw_gather_u64base_offset_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_offset_s64(...) __builtin_sve_svldnt1uw_gather_u64base_offset_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_u64(...) __builtin_sve_svldnt1uw_gather_u64base_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64base_s64(...) __builtin_sve_svldnt1uw_gather_u64base_s64(__VA_ARGS__)
#define svldnt1uw_gather_s64index_u64(...) __builtin_sve_svldnt1uw_gather_s64index_u64(__VA_ARGS__)
#define svldnt1uw_gather_s64index_s64(...) __builtin_sve_svldnt1uw_gather_s64index_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64index_u64(...) __builtin_sve_svldnt1uw_gather_u64index_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64index_s64(...) __builtin_sve_svldnt1uw_gather_u64index_s64(__VA_ARGS__)
#define svldnt1uw_gather_s64offset_u64(...) __builtin_sve_svldnt1uw_gather_s64offset_u64(__VA_ARGS__)
#define svldnt1uw_gather_s64offset_s64(...) __builtin_sve_svldnt1uw_gather_s64offset_s64(__VA_ARGS__)
#define svldnt1uw_gather_u64offset_u64(...) __builtin_sve_svldnt1uw_gather_u64offset_u64(__VA_ARGS__)
#define svldnt1uw_gather_u64offset_s64(...) __builtin_sve_svldnt1uw_gather_u64offset_s64(__VA_ARGS__)
#define svqshlu_n_s8_m(...) __builtin_sve_svqshlu_n_s8_m(__VA_ARGS__)
#define svqshlu_n_s32_m(...) __builtin_sve_svqshlu_n_s32_m(__VA_ARGS__)
#define svqshlu_n_s64_m(...) __builtin_sve_svqshlu_n_s64_m(__VA_ARGS__)
#define svqshlu_n_s16_m(...) __builtin_sve_svqshlu_n_s16_m(__VA_ARGS__)
#define svshrnb_n_u32(...) __builtin_sve_svshrnb_n_u32(__VA_ARGS__)
#define svshrnb_n_u64(...) __builtin_sve_svshrnb_n_u64(__VA_ARGS__)
#define svshrnb_n_u16(...) __builtin_sve_svshrnb_n_u16(__VA_ARGS__)
#define svshrnb_n_s32(...) __builtin_sve_svshrnb_n_s32(__VA_ARGS__)
#define svshrnb_n_s64(...) __builtin_sve_svshrnb_n_s64(__VA_ARGS__)
#define svshrnb_n_s16(...) __builtin_sve_svshrnb_n_s16(__VA_ARGS__)
#define svstnt1_scatter_u32base_index_u32(...) __builtin_sve_svstnt1_scatter_u32base_index_u32(__VA_ARGS__)
#define svstnt1_scatter_u64base_index_u64(...) __builtin_sve_svstnt1_scatter_u64base_index_u64(__VA_ARGS__)
#define svstnt1_scatter_u64base_index_f64(...) __builtin_sve_svstnt1_scatter_u64base_index_f64(__VA_ARGS__)
#define svstnt1_scatter_u32base_index_f32(...) __builtin_sve_svstnt1_scatter_u32base_index_f32(__VA_ARGS__)
#define svstnt1_scatter_u32base_index_s32(...) __builtin_sve_svstnt1_scatter_u32base_index_s32(__VA_ARGS__)
#define svstnt1_scatter_u64base_index_s64(...) __builtin_sve_svstnt1_scatter_u64base_index_s64(__VA_ARGS__)
#define svstnt1_scatter_u32base_offset_u32(...) __builtin_sve_svstnt1_scatter_u32base_offset_u32(__VA_ARGS__)
#define svstnt1_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1_scatter_u64base_offset_f64(...) __builtin_sve_svstnt1_scatter_u64base_offset_f64(__VA_ARGS__)
#define svstnt1_scatter_u32base_offset_f32(...) __builtin_sve_svstnt1_scatter_u32base_offset_f32(__VA_ARGS__)
#define svstnt1_scatter_u32base_offset_s32(...) __builtin_sve_svstnt1_scatter_u32base_offset_s32(__VA_ARGS__)
#define svstnt1_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1_scatter_u32base_u32(...) __builtin_sve_svstnt1_scatter_u32base_u32(__VA_ARGS__)
#define svstnt1_scatter_u64base_u64(...) __builtin_sve_svstnt1_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1_scatter_u64base_f64(...) __builtin_sve_svstnt1_scatter_u64base_f64(__VA_ARGS__)
#define svstnt1_scatter_u32base_f32(...) __builtin_sve_svstnt1_scatter_u32base_f32(__VA_ARGS__)
#define svstnt1_scatter_u32base_s32(...) __builtin_sve_svstnt1_scatter_u32base_s32(__VA_ARGS__)
#define svstnt1_scatter_u64base_s64(...) __builtin_sve_svstnt1_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1_scatter_s64index_u64(...) __builtin_sve_svstnt1_scatter_s64index_u64(__VA_ARGS__)
#define svstnt1_scatter_s64index_f64(...) __builtin_sve_svstnt1_scatter_s64index_f64(__VA_ARGS__)
#define svstnt1_scatter_s64index_s64(...) __builtin_sve_svstnt1_scatter_s64index_s64(__VA_ARGS__)
#define svstnt1_scatter_u64index_u64(...) __builtin_sve_svstnt1_scatter_u64index_u64(__VA_ARGS__)
#define svstnt1_scatter_u64index_f64(...) __builtin_sve_svstnt1_scatter_u64index_f64(__VA_ARGS__)
#define svstnt1_scatter_u64index_s64(...) __builtin_sve_svstnt1_scatter_u64index_s64(__VA_ARGS__)
#define svstnt1_scatter_u32offset_u32(...) __builtin_sve_svstnt1_scatter_u32offset_u32(__VA_ARGS__)
#define svstnt1_scatter_u32offset_f32(...) __builtin_sve_svstnt1_scatter_u32offset_f32(__VA_ARGS__)
#define svstnt1_scatter_u32offset_s32(...) __builtin_sve_svstnt1_scatter_u32offset_s32(__VA_ARGS__)
#define svstnt1_scatter_s64offset_u64(...) __builtin_sve_svstnt1_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1_scatter_s64offset_f64(...) __builtin_sve_svstnt1_scatter_s64offset_f64(__VA_ARGS__)
#define svstnt1_scatter_s64offset_s64(...) __builtin_sve_svstnt1_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1_scatter_u64offset_u64(...) __builtin_sve_svstnt1_scatter_u64offset_u64(__VA_ARGS__)
#define svstnt1_scatter_u64offset_f64(...) __builtin_sve_svstnt1_scatter_u64offset_f64(__VA_ARGS__)
#define svstnt1_scatter_u64offset_s64(...) __builtin_sve_svstnt1_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_offset_u32(...) __builtin_sve_svstnt1b_scatter_u32base_offset_u32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1b_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_offset_s32(...) __builtin_sve_svstnt1b_scatter_u32base_offset_s32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1b_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_u32(...) __builtin_sve_svstnt1b_scatter_u32base_u32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_u64(...) __builtin_sve_svstnt1b_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1b_scatter_u32base_s32(...) __builtin_sve_svstnt1b_scatter_u32base_s32(__VA_ARGS__)
#define svstnt1b_scatter_u64base_s64(...) __builtin_sve_svstnt1b_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1b_scatter_u32offset_s32(...) __builtin_sve_svstnt1b_scatter_u32offset_s32(__VA_ARGS__)
#define svstnt1b_scatter_u32offset_u32(...) __builtin_sve_svstnt1b_scatter_u32offset_u32(__VA_ARGS__)
#define svstnt1b_scatter_s64offset_s64(...) __builtin_sve_svstnt1b_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_s64offset_u64(...) __builtin_sve_svstnt1b_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1b_scatter_u64offset_s64(...) __builtin_sve_svstnt1b_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1b_scatter_u64offset_u64(...) __builtin_sve_svstnt1b_scatter_u64offset_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_index_u32(...) __builtin_sve_svstnt1h_scatter_u32base_index_u32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_index_u64(...) __builtin_sve_svstnt1h_scatter_u64base_index_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_index_s32(...) __builtin_sve_svstnt1h_scatter_u32base_index_s32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_index_s64(...) __builtin_sve_svstnt1h_scatter_u64base_index_s64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_offset_u32(...) __builtin_sve_svstnt1h_scatter_u32base_offset_u32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1h_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_offset_s32(...) __builtin_sve_svstnt1h_scatter_u32base_offset_s32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1h_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_u32(...) __builtin_sve_svstnt1h_scatter_u32base_u32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_u64(...) __builtin_sve_svstnt1h_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32base_s32(...) __builtin_sve_svstnt1h_scatter_u32base_s32(__VA_ARGS__)
#define svstnt1h_scatter_u64base_s64(...) __builtin_sve_svstnt1h_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1h_scatter_s64index_s64(...) __builtin_sve_svstnt1h_scatter_s64index_s64(__VA_ARGS__)
#define svstnt1h_scatter_s64index_u64(...) __builtin_sve_svstnt1h_scatter_s64index_u64(__VA_ARGS__)
#define svstnt1h_scatter_u64index_s64(...) __builtin_sve_svstnt1h_scatter_u64index_s64(__VA_ARGS__)
#define svstnt1h_scatter_u64index_u64(...) __builtin_sve_svstnt1h_scatter_u64index_u64(__VA_ARGS__)
#define svstnt1h_scatter_u32offset_s32(...) __builtin_sve_svstnt1h_scatter_u32offset_s32(__VA_ARGS__)
#define svstnt1h_scatter_u32offset_u32(...) __builtin_sve_svstnt1h_scatter_u32offset_u32(__VA_ARGS__)
#define svstnt1h_scatter_s64offset_s64(...) __builtin_sve_svstnt1h_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1h_scatter_s64offset_u64(...) __builtin_sve_svstnt1h_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1h_scatter_u64offset_s64(...) __builtin_sve_svstnt1h_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1h_scatter_u64offset_u64(...) __builtin_sve_svstnt1h_scatter_u64offset_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_index_u64(...) __builtin_sve_svstnt1w_scatter_u64base_index_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_index_s64(...) __builtin_sve_svstnt1w_scatter_u64base_index_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_offset_u64(...) __builtin_sve_svstnt1w_scatter_u64base_offset_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_offset_s64(...) __builtin_sve_svstnt1w_scatter_u64base_offset_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_u64(...) __builtin_sve_svstnt1w_scatter_u64base_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64base_s64(...) __builtin_sve_svstnt1w_scatter_u64base_s64(__VA_ARGS__)
#define svstnt1w_scatter_s64index_s64(...) __builtin_sve_svstnt1w_scatter_s64index_s64(__VA_ARGS__)
#define svstnt1w_scatter_s64index_u64(...) __builtin_sve_svstnt1w_scatter_s64index_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64index_s64(...) __builtin_sve_svstnt1w_scatter_u64index_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64index_u64(...) __builtin_sve_svstnt1w_scatter_u64index_u64(__VA_ARGS__)
#define svstnt1w_scatter_s64offset_s64(...) __builtin_sve_svstnt1w_scatter_s64offset_s64(__VA_ARGS__)
#define svstnt1w_scatter_s64offset_u64(...) __builtin_sve_svstnt1w_scatter_s64offset_u64(__VA_ARGS__)
#define svstnt1w_scatter_u64offset_s64(...) __builtin_sve_svstnt1w_scatter_u64offset_s64(__VA_ARGS__)
#define svstnt1w_scatter_u64offset_u64(...) __builtin_sve_svstnt1w_scatter_u64offset_u64(__VA_ARGS__)
#define svwhilege_b8_s32(...) __builtin_sve_svwhilege_b8_s32(__VA_ARGS__)
#define svwhilege_b32_s32(...) __builtin_sve_svwhilege_b32_s32(__VA_ARGS__)
#define svwhilege_b64_s32(...) __builtin_sve_svwhilege_b64_s32(__VA_ARGS__)
#define svwhilege_b16_s32(...) __builtin_sve_svwhilege_b16_s32(__VA_ARGS__)
#define svwhilege_b8_s64(...) __builtin_sve_svwhilege_b8_s64(__VA_ARGS__)
#define svwhilege_b32_s64(...) __builtin_sve_svwhilege_b32_s64(__VA_ARGS__)
#define svwhilege_b64_s64(...) __builtin_sve_svwhilege_b64_s64(__VA_ARGS__)
#define svwhilege_b16_s64(...) __builtin_sve_svwhilege_b16_s64(__VA_ARGS__)
#define svwhilege_b8_u32(...) __builtin_sve_svwhilege_b8_u32(__VA_ARGS__)
#define svwhilege_b32_u32(...) __builtin_sve_svwhilege_b32_u32(__VA_ARGS__)
#define svwhilege_b64_u32(...) __builtin_sve_svwhilege_b64_u32(__VA_ARGS__)
#define svwhilege_b16_u32(...) __builtin_sve_svwhilege_b16_u32(__VA_ARGS__)
#define svwhilege_b8_u64(...) __builtin_sve_svwhilege_b8_u64(__VA_ARGS__)
#define svwhilege_b32_u64(...) __builtin_sve_svwhilege_b32_u64(__VA_ARGS__)
#define svwhilege_b64_u64(...) __builtin_sve_svwhilege_b64_u64(__VA_ARGS__)
#define svwhilege_b16_u64(...) __builtin_sve_svwhilege_b16_u64(__VA_ARGS__)
#define svwhilegt_b8_s32(...) __builtin_sve_svwhilegt_b8_s32(__VA_ARGS__)
#define svwhilegt_b32_s32(...) __builtin_sve_svwhilegt_b32_s32(__VA_ARGS__)
#define svwhilegt_b64_s32(...) __builtin_sve_svwhilegt_b64_s32(__VA_ARGS__)
#define svwhilegt_b16_s32(...) __builtin_sve_svwhilegt_b16_s32(__VA_ARGS__)
#define svwhilegt_b8_s64(...) __builtin_sve_svwhilegt_b8_s64(__VA_ARGS__)
#define svwhilegt_b32_s64(...) __builtin_sve_svwhilegt_b32_s64(__VA_ARGS__)
#define svwhilegt_b64_s64(...) __builtin_sve_svwhilegt_b64_s64(__VA_ARGS__)
#define svwhilegt_b16_s64(...) __builtin_sve_svwhilegt_b16_s64(__VA_ARGS__)
#define svwhilegt_b8_u32(...) __builtin_sve_svwhilegt_b8_u32(__VA_ARGS__)
#define svwhilegt_b32_u32(...) __builtin_sve_svwhilegt_b32_u32(__VA_ARGS__)
#define svwhilegt_b64_u32(...) __builtin_sve_svwhilegt_b64_u32(__VA_ARGS__)
#define svwhilegt_b16_u32(...) __builtin_sve_svwhilegt_b16_u32(__VA_ARGS__)
#define svwhilegt_b8_u64(...) __builtin_sve_svwhilegt_b8_u64(__VA_ARGS__)
#define svwhilegt_b32_u64(...) __builtin_sve_svwhilegt_b32_u64(__VA_ARGS__)
#define svwhilegt_b64_u64(...) __builtin_sve_svwhilegt_b64_u64(__VA_ARGS__)
#define svwhilegt_b16_u64(...) __builtin_sve_svwhilegt_b16_u64(__VA_ARGS__)
#define svwhilerw_u8(...) __builtin_sve_svwhilerw_u8(__VA_ARGS__)
#define svwhilerw_s8(...) __builtin_sve_svwhilerw_s8(__VA_ARGS__)
#define svwhilerw_u64(...) __builtin_sve_svwhilerw_u64(__VA_ARGS__)
#define svwhilerw_f64(...) __builtin_sve_svwhilerw_f64(__VA_ARGS__)
#define svwhilerw_s64(...) __builtin_sve_svwhilerw_s64(__VA_ARGS__)
#define svwhilerw_u16(...) __builtin_sve_svwhilerw_u16(__VA_ARGS__)
#define svwhilerw_f16(...) __builtin_sve_svwhilerw_f16(__VA_ARGS__)
#define svwhilerw_s16(...) __builtin_sve_svwhilerw_s16(__VA_ARGS__)
#define svwhilerw_u32(...) __builtin_sve_svwhilerw_u32(__VA_ARGS__)
#define svwhilerw_f32(...) __builtin_sve_svwhilerw_f32(__VA_ARGS__)
#define svwhilerw_s32(...) __builtin_sve_svwhilerw_s32(__VA_ARGS__)
#define svwhilewr_u8(...) __builtin_sve_svwhilewr_u8(__VA_ARGS__)
#define svwhilewr_s8(...) __builtin_sve_svwhilewr_s8(__VA_ARGS__)
#define svwhilewr_u64(...) __builtin_sve_svwhilewr_u64(__VA_ARGS__)
#define svwhilewr_f64(...) __builtin_sve_svwhilewr_f64(__VA_ARGS__)
#define svwhilewr_s64(...) __builtin_sve_svwhilewr_s64(__VA_ARGS__)
#define svwhilewr_u16(...) __builtin_sve_svwhilewr_u16(__VA_ARGS__)
#define svwhilewr_f16(...) __builtin_sve_svwhilewr_f16(__VA_ARGS__)
#define svwhilewr_s16(...) __builtin_sve_svwhilewr_s16(__VA_ARGS__)
#define svwhilewr_u32(...) __builtin_sve_svwhilewr_u32(__VA_ARGS__)
#define svwhilewr_f32(...) __builtin_sve_svwhilewr_f32(__VA_ARGS__)
#define svwhilewr_s32(...) __builtin_sve_svwhilewr_s32(__VA_ARGS__)
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_index_u32)))
svuint32_t svldnt1_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_index_u64)))
svuint64_t svldnt1_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_index_f64)))
svfloat64_t svldnt1_gather_index_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_index_f32)))
svfloat32_t svldnt1_gather_index_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_index_s32)))
svint32_t svldnt1_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_index_s64)))
svint64_t svldnt1_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_offset_u32)))
svuint32_t svldnt1_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_offset_u64)))
svuint64_t svldnt1_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_offset_f64)))
svfloat64_t svldnt1_gather_offset_f64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_offset_f32)))
svfloat32_t svldnt1_gather_offset_f32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_offset_s32)))
svint32_t svldnt1_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_offset_s64)))
svint64_t svldnt1_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_u32)))
svuint32_t svldnt1_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_u64)))
svuint64_t svldnt1_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_f64)))
svfloat64_t svldnt1_gather_f64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_f32)))
svfloat32_t svldnt1_gather_f32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32base_s32)))
svint32_t svldnt1_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64base_s64)))
svint64_t svldnt1_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64index_u64)))
svuint64_t svldnt1_gather_index(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64index_f64)))
svfloat64_t svldnt1_gather_index(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64index_s64)))
svint64_t svldnt1_gather_index(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64index_u64)))
svuint64_t svldnt1_gather_index(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64index_f64)))
svfloat64_t svldnt1_gather_index(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64index_s64)))
svint64_t svldnt1_gather_index(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32offset_u32)))
svuint32_t svldnt1_gather_offset(svbool_t, uint32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32offset_f32)))
svfloat32_t svldnt1_gather_offset(svbool_t, float32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u32offset_s32)))
svint32_t svldnt1_gather_offset(svbool_t, int32_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64offset_u64)))
svuint64_t svldnt1_gather_offset(svbool_t, uint64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64offset_f64)))
svfloat64_t svldnt1_gather_offset(svbool_t, float64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_s64offset_s64)))
svint64_t svldnt1_gather_offset(svbool_t, int64_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64offset_u64)))
svuint64_t svldnt1_gather_offset(svbool_t, uint64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64offset_f64)))
svfloat64_t svldnt1_gather_offset(svbool_t, float64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1_gather_u64offset_s64)))
svint64_t svldnt1_gather_offset(svbool_t, int64_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_offset_u32)))
svuint32_t svldnt1sb_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_offset_u64)))
svuint64_t svldnt1sb_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_offset_s32)))
svint32_t svldnt1sb_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_offset_s64)))
svint64_t svldnt1sb_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_u32)))
svuint32_t svldnt1sb_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_u64)))
svuint64_t svldnt1sb_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32base_s32)))
svint32_t svldnt1sb_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64base_s64)))
svint64_t svldnt1sb_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32offset_u32)))
svuint32_t svldnt1sb_gather_offset_u32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u32offset_s32)))
svint32_t svldnt1sb_gather_offset_s32(svbool_t, int8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_s64offset_u64)))
svuint64_t svldnt1sb_gather_offset_u64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_s64offset_s64)))
svint64_t svldnt1sb_gather_offset_s64(svbool_t, int8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64offset_u64)))
svuint64_t svldnt1sb_gather_offset_u64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sb_gather_u64offset_s64)))
svint64_t svldnt1sb_gather_offset_s64(svbool_t, int8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_index_u32)))
svuint32_t svldnt1sh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_index_u64)))
svuint64_t svldnt1sh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_index_s32)))
svint32_t svldnt1sh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_index_s64)))
svint64_t svldnt1sh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_offset_u32)))
svuint32_t svldnt1sh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_offset_u64)))
svuint64_t svldnt1sh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_offset_s32)))
svint32_t svldnt1sh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_offset_s64)))
svint64_t svldnt1sh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_u32)))
svuint32_t svldnt1sh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_u64)))
svuint64_t svldnt1sh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32base_s32)))
svint32_t svldnt1sh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64base_s64)))
svint64_t svldnt1sh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64index_u64)))
svuint64_t svldnt1sh_gather_index_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64index_s64)))
svint64_t svldnt1sh_gather_index_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64index_u64)))
svuint64_t svldnt1sh_gather_index_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64index_s64)))
svint64_t svldnt1sh_gather_index_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32offset_u32)))
svuint32_t svldnt1sh_gather_offset_u32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u32offset_s32)))
svint32_t svldnt1sh_gather_offset_s32(svbool_t, int16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64offset_u64)))
svuint64_t svldnt1sh_gather_offset_u64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_s64offset_s64)))
svint64_t svldnt1sh_gather_offset_s64(svbool_t, int16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64offset_u64)))
svuint64_t svldnt1sh_gather_offset_u64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sh_gather_u64offset_s64)))
svint64_t svldnt1sh_gather_offset_s64(svbool_t, int16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_index_u64)))
svuint64_t svldnt1sw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_index_s64)))
svint64_t svldnt1sw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_offset_u64)))
svuint64_t svldnt1sw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_offset_s64)))
svint64_t svldnt1sw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_u64)))
svuint64_t svldnt1sw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64base_s64)))
svint64_t svldnt1sw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64index_u64)))
svuint64_t svldnt1sw_gather_index_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64index_s64)))
svint64_t svldnt1sw_gather_index_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64index_u64)))
svuint64_t svldnt1sw_gather_index_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64index_s64)))
svint64_t svldnt1sw_gather_index_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64offset_u64)))
svuint64_t svldnt1sw_gather_offset_u64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_s64offset_s64)))
svint64_t svldnt1sw_gather_offset_s64(svbool_t, int32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64offset_u64)))
svuint64_t svldnt1sw_gather_offset_u64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1sw_gather_u64offset_s64)))
svint64_t svldnt1sw_gather_offset_s64(svbool_t, int32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_offset_u32)))
svuint32_t svldnt1ub_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_offset_u64)))
svuint64_t svldnt1ub_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_offset_s32)))
svint32_t svldnt1ub_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_offset_s64)))
svint64_t svldnt1ub_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_u32)))
svuint32_t svldnt1ub_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_u64)))
svuint64_t svldnt1ub_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32base_s32)))
svint32_t svldnt1ub_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64base_s64)))
svint64_t svldnt1ub_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32offset_u32)))
svuint32_t svldnt1ub_gather_offset_u32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u32offset_s32)))
svint32_t svldnt1ub_gather_offset_s32(svbool_t, uint8_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_s64offset_u64)))
svuint64_t svldnt1ub_gather_offset_u64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_s64offset_s64)))
svint64_t svldnt1ub_gather_offset_s64(svbool_t, uint8_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64offset_u64)))
svuint64_t svldnt1ub_gather_offset_u64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1ub_gather_u64offset_s64)))
svint64_t svldnt1ub_gather_offset_s64(svbool_t, uint8_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_index_u32)))
svuint32_t svldnt1uh_gather_index_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_index_u64)))
svuint64_t svldnt1uh_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_index_s32)))
svint32_t svldnt1uh_gather_index_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_index_s64)))
svint64_t svldnt1uh_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_offset_u32)))
svuint32_t svldnt1uh_gather_offset_u32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_offset_u64)))
svuint64_t svldnt1uh_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_offset_s32)))
svint32_t svldnt1uh_gather_offset_s32(svbool_t, svuint32_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_offset_s64)))
svint64_t svldnt1uh_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_u32)))
svuint32_t svldnt1uh_gather_u32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_u64)))
svuint64_t svldnt1uh_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32base_s32)))
svint32_t svldnt1uh_gather_s32(svbool_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64base_s64)))
svint64_t svldnt1uh_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64index_u64)))
svuint64_t svldnt1uh_gather_index_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64index_s64)))
svint64_t svldnt1uh_gather_index_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64index_u64)))
svuint64_t svldnt1uh_gather_index_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64index_s64)))
svint64_t svldnt1uh_gather_index_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32offset_u32)))
svuint32_t svldnt1uh_gather_offset_u32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u32offset_s32)))
svint32_t svldnt1uh_gather_offset_s32(svbool_t, uint16_t const *, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64offset_u64)))
svuint64_t svldnt1uh_gather_offset_u64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_s64offset_s64)))
svint64_t svldnt1uh_gather_offset_s64(svbool_t, uint16_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64offset_u64)))
svuint64_t svldnt1uh_gather_offset_u64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uh_gather_u64offset_s64)))
svint64_t svldnt1uh_gather_offset_s64(svbool_t, uint16_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_index_u64)))
svuint64_t svldnt1uw_gather_index_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_index_s64)))
svint64_t svldnt1uw_gather_index_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_offset_u64)))
svuint64_t svldnt1uw_gather_offset_u64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_offset_s64)))
svint64_t svldnt1uw_gather_offset_s64(svbool_t, svuint64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_u64)))
svuint64_t svldnt1uw_gather_u64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64base_s64)))
svint64_t svldnt1uw_gather_s64(svbool_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64index_u64)))
svuint64_t svldnt1uw_gather_index_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64index_s64)))
svint64_t svldnt1uw_gather_index_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64index_u64)))
svuint64_t svldnt1uw_gather_index_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64index_s64)))
svint64_t svldnt1uw_gather_index_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64offset_u64)))
svuint64_t svldnt1uw_gather_offset_u64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_s64offset_s64)))
svint64_t svldnt1uw_gather_offset_s64(svbool_t, uint32_t const *, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64offset_u64)))
svuint64_t svldnt1uw_gather_offset_u64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svldnt1uw_gather_u64offset_s64)))
svint64_t svldnt1uw_gather_offset_s64(svbool_t, uint32_t const *, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s8_m)))
svuint8_t svqshlu_m(svbool_t, svint8_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s32_m)))
svuint32_t svqshlu_m(svbool_t, svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s64_m)))
svuint64_t svqshlu_m(svbool_t, svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svqshlu_n_s16_m)))
svuint16_t svqshlu_m(svbool_t, svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_u32)))
svuint16_t svshrnb(svuint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_u64)))
svuint32_t svshrnb(svuint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_u16)))
svuint8_t svshrnb(svuint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_s32)))
svint16_t svshrnb(svint32_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_s64)))
svint32_t svshrnb(svint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svshrnb_n_s16)))
svint8_t svshrnb(svint16_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_index_u32)))
void svstnt1_scatter_index(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_index_u64)))
void svstnt1_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_index_f64)))
void svstnt1_scatter_index(svbool_t, svuint64_t, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_index_f32)))
void svstnt1_scatter_index(svbool_t, svuint32_t, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_index_s32)))
void svstnt1_scatter_index(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_index_s64)))
void svstnt1_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_offset_u32)))
void svstnt1_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_offset_u64)))
void svstnt1_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_offset_f64)))
void svstnt1_scatter_offset(svbool_t, svuint64_t, int64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_offset_f32)))
void svstnt1_scatter_offset(svbool_t, svuint32_t, int64_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_offset_s32)))
void svstnt1_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_offset_s64)))
void svstnt1_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_u32)))
void svstnt1_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_u64)))
void svstnt1_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_f64)))
void svstnt1_scatter(svbool_t, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_f32)))
void svstnt1_scatter(svbool_t, svuint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32base_s32)))
void svstnt1_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64base_s64)))
void svstnt1_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64index_u64)))
void svstnt1_scatter_index(svbool_t, uint64_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64index_f64)))
void svstnt1_scatter_index(svbool_t, float64_t *, svint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64index_s64)))
void svstnt1_scatter_index(svbool_t, int64_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64index_u64)))
void svstnt1_scatter_index(svbool_t, uint64_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64index_f64)))
void svstnt1_scatter_index(svbool_t, float64_t *, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64index_s64)))
void svstnt1_scatter_index(svbool_t, int64_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32offset_u32)))
void svstnt1_scatter_offset(svbool_t, uint32_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32offset_f32)))
void svstnt1_scatter_offset(svbool_t, float32_t *, svuint32_t, svfloat32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u32offset_s32)))
void svstnt1_scatter_offset(svbool_t, int32_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64offset_u64)))
void svstnt1_scatter_offset(svbool_t, uint64_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64offset_f64)))
void svstnt1_scatter_offset(svbool_t, float64_t *, svint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_s64offset_s64)))
void svstnt1_scatter_offset(svbool_t, int64_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64offset_u64)))
void svstnt1_scatter_offset(svbool_t, uint64_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64offset_f64)))
void svstnt1_scatter_offset(svbool_t, float64_t *, svuint64_t, svfloat64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1_scatter_u64offset_s64)))
void svstnt1_scatter_offset(svbool_t, int64_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_offset_u32)))
void svstnt1b_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_offset_u64)))
void svstnt1b_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_offset_s32)))
void svstnt1b_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_offset_s64)))
void svstnt1b_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_u32)))
void svstnt1b_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_u64)))
void svstnt1b_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32base_s32)))
void svstnt1b_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64base_s64)))
void svstnt1b_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32offset_s32)))
void svstnt1b_scatter_offset(svbool_t, int8_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u32offset_u32)))
void svstnt1b_scatter_offset(svbool_t, uint8_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_s64offset_s64)))
void svstnt1b_scatter_offset(svbool_t, int8_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_s64offset_u64)))
void svstnt1b_scatter_offset(svbool_t, uint8_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64offset_s64)))
void svstnt1b_scatter_offset(svbool_t, int8_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1b_scatter_u64offset_u64)))
void svstnt1b_scatter_offset(svbool_t, uint8_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_index_u32)))
void svstnt1h_scatter_index(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_index_u64)))
void svstnt1h_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_index_s32)))
void svstnt1h_scatter_index(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_index_s64)))
void svstnt1h_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_offset_u32)))
void svstnt1h_scatter_offset(svbool_t, svuint32_t, int64_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_offset_u64)))
void svstnt1h_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_offset_s32)))
void svstnt1h_scatter_offset(svbool_t, svuint32_t, int64_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_offset_s64)))
void svstnt1h_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_u32)))
void svstnt1h_scatter(svbool_t, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_u64)))
void svstnt1h_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32base_s32)))
void svstnt1h_scatter(svbool_t, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64base_s64)))
void svstnt1h_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64index_s64)))
void svstnt1h_scatter_index(svbool_t, int16_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64index_u64)))
void svstnt1h_scatter_index(svbool_t, uint16_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64index_s64)))
void svstnt1h_scatter_index(svbool_t, int16_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64index_u64)))
void svstnt1h_scatter_index(svbool_t, uint16_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32offset_s32)))
void svstnt1h_scatter_offset(svbool_t, int16_t *, svuint32_t, svint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u32offset_u32)))
void svstnt1h_scatter_offset(svbool_t, uint16_t *, svuint32_t, svuint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64offset_s64)))
void svstnt1h_scatter_offset(svbool_t, int16_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_s64offset_u64)))
void svstnt1h_scatter_offset(svbool_t, uint16_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64offset_s64)))
void svstnt1h_scatter_offset(svbool_t, int16_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1h_scatter_u64offset_u64)))
void svstnt1h_scatter_offset(svbool_t, uint16_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_index_u64)))
void svstnt1w_scatter_index(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_index_s64)))
void svstnt1w_scatter_index(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_offset_u64)))
void svstnt1w_scatter_offset(svbool_t, svuint64_t, int64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_offset_s64)))
void svstnt1w_scatter_offset(svbool_t, svuint64_t, int64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_u64)))
void svstnt1w_scatter(svbool_t, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64base_s64)))
void svstnt1w_scatter(svbool_t, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64index_s64)))
void svstnt1w_scatter_index(svbool_t, int32_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64index_u64)))
void svstnt1w_scatter_index(svbool_t, uint32_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64index_s64)))
void svstnt1w_scatter_index(svbool_t, int32_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64index_u64)))
void svstnt1w_scatter_index(svbool_t, uint32_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64offset_s64)))
void svstnt1w_scatter_offset(svbool_t, int32_t *, svint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_s64offset_u64)))
void svstnt1w_scatter_offset(svbool_t, uint32_t *, svint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64offset_s64)))
void svstnt1w_scatter_offset(svbool_t, int32_t *, svuint64_t, svint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svstnt1w_scatter_u64offset_u64)))
void svstnt1w_scatter_offset(svbool_t, uint32_t *, svuint64_t, svuint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_s32)))
svbool_t svwhilege_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_s32)))
svbool_t svwhilege_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_s32)))
svbool_t svwhilege_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_s32)))
svbool_t svwhilege_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_s64)))
svbool_t svwhilege_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_s64)))
svbool_t svwhilege_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_s64)))
svbool_t svwhilege_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_s64)))
svbool_t svwhilege_b16(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_u32)))
svbool_t svwhilege_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_u32)))
svbool_t svwhilege_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_u32)))
svbool_t svwhilege_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_u32)))
svbool_t svwhilege_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b8_u64)))
svbool_t svwhilege_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b32_u64)))
svbool_t svwhilege_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b64_u64)))
svbool_t svwhilege_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilege_b16_u64)))
svbool_t svwhilege_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_s32)))
svbool_t svwhilegt_b8(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_s32)))
svbool_t svwhilegt_b32(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_s32)))
svbool_t svwhilegt_b64(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_s32)))
svbool_t svwhilegt_b16(int32_t, int32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_s64)))
svbool_t svwhilegt_b8(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_s64)))
svbool_t svwhilegt_b32(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_s64)))
svbool_t svwhilegt_b64(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_s64)))
svbool_t svwhilegt_b16(int64_t, int64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_u32)))
svbool_t svwhilegt_b8(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_u32)))
svbool_t svwhilegt_b32(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_u32)))
svbool_t svwhilegt_b64(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_u32)))
svbool_t svwhilegt_b16(uint32_t, uint32_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b8_u64)))
svbool_t svwhilegt_b8(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b32_u64)))
svbool_t svwhilegt_b32(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b64_u64)))
svbool_t svwhilegt_b64(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilegt_b16_u64)))
svbool_t svwhilegt_b16(uint64_t, uint64_t);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u8)))
svbool_t svwhilerw(uint8_t const *, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s8)))
svbool_t svwhilerw(int8_t const *, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u64)))
svbool_t svwhilerw(uint64_t const *, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_f64)))
svbool_t svwhilerw(float64_t const *, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s64)))
svbool_t svwhilerw(int64_t const *, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u16)))
svbool_t svwhilerw(uint16_t const *, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_f16)))
svbool_t svwhilerw(float16_t const *, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s16)))
svbool_t svwhilerw(int16_t const *, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_u32)))
svbool_t svwhilerw(uint32_t const *, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_f32)))
svbool_t svwhilerw(float32_t const *, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilerw_s32)))
svbool_t svwhilerw(int32_t const *, int32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u8)))
svbool_t svwhilewr(uint8_t const *, uint8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s8)))
svbool_t svwhilewr(int8_t const *, int8_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u64)))
svbool_t svwhilewr(uint64_t const *, uint64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_f64)))
svbool_t svwhilewr(float64_t const *, float64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s64)))
svbool_t svwhilewr(int64_t const *, int64_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u16)))
svbool_t svwhilewr(uint16_t const *, uint16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_f16)))
svbool_t svwhilewr(float16_t const *, float16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s16)))
svbool_t svwhilewr(int16_t const *, int16_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_u32)))
svbool_t svwhilewr(uint32_t const *, uint32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_f32)))
svbool_t svwhilewr(float32_t const *, float32_t const *);
__aio __attribute__((__clang_arm_builtin_alias(__builtin_sve_svwhilewr_s32)))
svbool_t svwhilewr(int32_t const *, int32_t const *);
#endif  //defined(__ARM_FEATURE_SVE2)
#ifdef __cplusplus
} // extern "C"
#endif

#endif /*__ARM_FEATURE_SVE */

#endif /* __ARM_SVE_H */
