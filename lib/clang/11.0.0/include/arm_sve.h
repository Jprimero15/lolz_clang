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
#define svld1sh_vnum_u32(...) __builtin_sve_svld1sh_vnum_u32(__VA_ARGS__)
#define svld1sh_vnum_u64(...) __builtin_sve_svld1sh_vnum_u64(__VA_ARGS__)
#define svld1sh_vnum_s32(...) __builtin_sve_svld1sh_vnum_s32(__VA_ARGS__)
#define svld1sh_vnum_s64(...) __builtin_sve_svld1sh_vnum_s64(__VA_ARGS__)
#define svld1sh_u32(...) __builtin_sve_svld1sh_u32(__VA_ARGS__)
#define svld1sh_u64(...) __builtin_sve_svld1sh_u64(__VA_ARGS__)
#define svld1sh_s32(...) __builtin_sve_svld1sh_s32(__VA_ARGS__)
#define svld1sh_s64(...) __builtin_sve_svld1sh_s64(__VA_ARGS__)
#define svld1sw_vnum_u64(...) __builtin_sve_svld1sw_vnum_u64(__VA_ARGS__)
#define svld1sw_vnum_s64(...) __builtin_sve_svld1sw_vnum_s64(__VA_ARGS__)
#define svld1sw_u64(...) __builtin_sve_svld1sw_u64(__VA_ARGS__)
#define svld1sw_s64(...) __builtin_sve_svld1sw_s64(__VA_ARGS__)
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
#define svld1uh_vnum_u32(...) __builtin_sve_svld1uh_vnum_u32(__VA_ARGS__)
#define svld1uh_vnum_u64(...) __builtin_sve_svld1uh_vnum_u64(__VA_ARGS__)
#define svld1uh_vnum_s32(...) __builtin_sve_svld1uh_vnum_s32(__VA_ARGS__)
#define svld1uh_vnum_s64(...) __builtin_sve_svld1uh_vnum_s64(__VA_ARGS__)
#define svld1uh_u32(...) __builtin_sve_svld1uh_u32(__VA_ARGS__)
#define svld1uh_u64(...) __builtin_sve_svld1uh_u64(__VA_ARGS__)
#define svld1uh_s32(...) __builtin_sve_svld1uh_s32(__VA_ARGS__)
#define svld1uh_s64(...) __builtin_sve_svld1uh_s64(__VA_ARGS__)
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
#define svldff1sh_vnum_u32(...) __builtin_sve_svldff1sh_vnum_u32(__VA_ARGS__)
#define svldff1sh_vnum_u64(...) __builtin_sve_svldff1sh_vnum_u64(__VA_ARGS__)
#define svldff1sh_vnum_s32(...) __builtin_sve_svldff1sh_vnum_s32(__VA_ARGS__)
#define svldff1sh_vnum_s64(...) __builtin_sve_svldff1sh_vnum_s64(__VA_ARGS__)
#define svldff1sh_u32(...) __builtin_sve_svldff1sh_u32(__VA_ARGS__)
#define svldff1sh_u64(...) __builtin_sve_svldff1sh_u64(__VA_ARGS__)
#define svldff1sh_s32(...) __builtin_sve_svldff1sh_s32(__VA_ARGS__)
#define svldff1sh_s64(...) __builtin_sve_svldff1sh_s64(__VA_ARGS__)
#define svldff1sw_vnum_u64(...) __builtin_sve_svldff1sw_vnum_u64(__VA_ARGS__)
#define svldff1sw_vnum_s64(...) __builtin_sve_svldff1sw_vnum_s64(__VA_ARGS__)
#define svldff1sw_u64(...) __builtin_sve_svldff1sw_u64(__VA_ARGS__)
#define svldff1sw_s64(...) __builtin_sve_svldff1sw_s64(__VA_ARGS__)
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
#define svldff1uh_vnum_u32(...) __builtin_sve_svldff1uh_vnum_u32(__VA_ARGS__)
#define svldff1uh_vnum_u64(...) __builtin_sve_svldff1uh_vnum_u64(__VA_ARGS__)
#define svldff1uh_vnum_s32(...) __builtin_sve_svldff1uh_vnum_s32(__VA_ARGS__)
#define svldff1uh_vnum_s64(...) __builtin_sve_svldff1uh_vnum_s64(__VA_ARGS__)
#define svldff1uh_u32(...) __builtin_sve_svldff1uh_u32(__VA_ARGS__)
#define svldff1uh_u64(...) __builtin_sve_svldff1uh_u64(__VA_ARGS__)
#define svldff1uh_s32(...) __builtin_sve_svldff1uh_s32(__VA_ARGS__)
#define svldff1uh_s64(...) __builtin_sve_svldff1uh_s64(__VA_ARGS__)
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
#ifdef __cplusplus
} // extern "C"
#endif

#endif /*__ARM_FEATURE_SVE */

#endif /* __ARM_SVE_H */
