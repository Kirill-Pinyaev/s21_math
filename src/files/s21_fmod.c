#include "../s21_math.h"
long double s21_fmod(double x, double y) {
  long double res = x;
  if (s21_isinf(x) || s21_isnan(x) || s21_isnan(y) || y == 0.0 || y == -0.0) {
    res = s21_NAN;
  } else if (s21_isinf(y)) {
    res = x;
  } else if (x == 0.0 || x == -0.0) {
    res = 0.0;
  } else {
    long double quo = x / y;
    long double int_part = (long long)quo;
    res = x - int_part * y;
  }
  return res;
}
