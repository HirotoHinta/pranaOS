/*
* Copyright (c) 2021, Krisna Pranav
*
* SPDX-License-Identifier: BSD-2-Clause
*/

#pragma once

#include <limits.h>
#include <sys/cdefs.h>

#if __cplusplus >= 201103L
#   define NOEXCEPT noexcept
#else
#   define NOEXCEPT
#endif

__BEGIN_DECLS

/* FIXME: define some math funcs + float funcs */

#define MATH_ERRNO 1
#define MATH_ERREXCEPT 2
#define math_errhandling MATH_ERREXCEPT

#define HUGE_VALF __builtin_huge_valf()
#define HUGE_VAL __builtin_huge_val()
#define HUGE_VALL __builtin_huge_vall()
#define INFINITY __builtin_huge_valf()
#define NAN __builtin_nan("")
#define MAXFLOAT FLT_MAX

#define M_El 2.718281828459045235360287471352662498L
#define M_LOG2El 1.442695040888963407359924681001892137L
#define M_LOG10El 0.434294481903251827651128918916605082L
#define M_LN2l 0.693147180559945309417232121458176568L
#define M_LN10l 2.302585092994045684017991454684364208L
#define M_PIl 3.141592653589793238462643383279502884L
#define M_PI_2l 1.570796326794896619231321691639751442L
#define M_PI_4l 0.785398163397448309615660845819875721L
#define M_1_PIl 0.318309886183790671537767526745028724L
#define M_2_PIl 0.636619772367581343075535053490057448L
#define M_2_SQRTPIl 1.128379167095512573896158903121545172L
#define M_SQRT2l 1.414213562373095048801688724209698079L
#define M_SQRT1_2l 0.707106781186547524400844362104849039L

#define M_E 2.7182818284590452354
#define M_LOG2E 1.4426950408889634074
#define M_LOG10E 0.43429448190325182765
#define M_LN2 0.69314718055994530942
#define M_LN10 2.30258509299404568402
#define M_PI 3.14159265358979323846
#define M_PI_2 1.57079632679489661923
#define M_PI_4 0.78539816339744830962
#define M_1_PI 0.31830988618379067154
#define M_2_PI 0.63661977236758134308
#define M_2_SQRTPI 1.12837916709551257390
#define M_SQRT2 1.41421356237309504880
#define M_SQRT1_2 0.70710678118654752440

#define M_Ef32 2.7182818284590452354f
#define M_LOG2Ef32 1.4426950408889634074f
#define M_LOG10Ef32 0.43429448190325182765f
#define M_LN2f32 0.69314718055994530942f
#define M_LN10f32 2.30258509299404568402f
#define M_PIf32 3.14159265358979323846f
#define M_PI_2f32 1.57079632679489661923f
#define M_PI_4f32 0.78539816339744830962f
#define M_1_PIf32 0.31830988618379067154f
#define M_2_PIf32 0.63661977236758134308f
#define M_2_SQRTPIf32 1.12837916709551257390f
#define M_SQRT2f32 1.41421356237309504880f
#define M_SQRT1_2f32 0.70710678118654752440f

#define FP_NAN 0
#define FP_INFINITE 1
#define FP_ZERO 2
#define FP_SUBNORMAL 3
#define FP_NORMAL 4
#define fpclassify(x) __builtin_fpclassify(FP_NAN, FP_INFINITE, FP_ZERO, FP_SUBNORMAL, FP_ZERO, x)

#define signbit(x) __builtin_signbit(x)
#define isnan(x) __builtin_isnan(x)
#define isinf(x) __builtin_isinf_sign(x)
#define isfinite(x) __builtin_isfinite(x)
#define isnormal(x) __builtin_isnormal(x)
#define isgreater(x, y) __builtin_isgreater((x), (y))
#define isgreaterequal(x, y) __builtin_isgreaterequal((x), (y))
#define isless(x, y) __builtin_isless((x), (y))
#define islessequal(x, y) __builtin_islessequal((x), (y))
#define islessgreater(x, y) __builtin_islessgreater((x), (y))
#define isunordered(x, y) __builtin_isunordered((x), (y))

#define DOUBLE_MAX ((double)0b0111111111101111111111111111111111111111111111111111111111111111)
#define DOUBLE_MIN ((double)0b0000000000010000000000000000000000000000000000000000000000000000)

#define FP_ILOGB0 INT_MIN
#define FP_ILOGNAN INT_MAX

#define FLT_EVAL_METHOD __FLT_EVAL_METHOD__

__END_DECLS