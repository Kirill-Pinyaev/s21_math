#include "../s21_math.h"
long double s21_ceil(double x) {
  long double result = 1.0;
  if (s21_isnan(x) || s21_isinf(x) || x == (int)x) {
    result = x;
  } else {
    result = s21_floor(x) + 1;
  }
  return result;
}
