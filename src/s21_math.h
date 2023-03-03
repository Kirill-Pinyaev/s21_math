#ifndef SRC_S21MATH_H_
#include <math.h>
#include <stdio.h>

#define s21_PI 3.14159265358979323846264338327950288
#define s21_NAN 0.0 / 0.0
#define s21_INF 1.0 / 0.0
#define s21_EPSILON 1e-17
#define s21_LN10 2.30258509299404590109
#define s21_TWO_PI s21_PI * 2

#define max_inf 1.0 / 0.0
#define min_inf -1.0 / 0.0
#define max_nan 0.0 / 0.0
#define min_nan -0.0 / 0.0
#define s21_EXP 2.718281828459045
#define s21_MAX 1E+35
int s21_abs(int x);
long double s21_pow(double base, double exponent);
long double s21_factorial(int n);
long double s21_cos(double x);
long double s21_acos(double x);
long double s21_asin(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
long double s21_log(double z);
long double s21_pow(double base, double y);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double basic_atan(double X);
long double s21_factorial(int n);
int s21_isnan(double x);
int s21_isinf(double x);
#endif