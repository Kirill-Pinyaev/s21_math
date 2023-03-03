#include "../s21_math.h"
long double s21_acos(double x) {
  long double result = x;
  int flag = 0;
  if (x > 1.0 || x < -1.0 || s21_isnan(x)) {
    flag = 1;
  }
  if (flag) {
    result = s21_NAN;
  } else {
    result = (s21_PI / 2.0) - s21_asin(x);
  }
  return result;
}