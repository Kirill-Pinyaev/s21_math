#include "../s21_math.h"
long double s21_atan(double x) {
  int flag = 0;
  if (s21_isnan(x)) {
    flag = 1;
  }
  long double result = 0;
  if (x == 1 || x == -1 || x == 0) {
    result = (x == 0) ? 0 : (x == 1) ? s21_PI / 4 : -s21_PI / 4;
  } else if (x > 1 || x < -1) {
    result = x > 1 ? s21_PI / 2 - basic_atan(1 / x)
                   : -s21_PI / 2 - basic_atan(1 / x);
  } else {
    result = basic_atan(x);
  }
  if (flag) {
    result = s21_NAN;
  }
  return result;
}

long double basic_atan(double X) {
  long double result = 0;
  double arg = X;
  for (int count = 1; s21_fabs(arg) > s21_EPSILON; count++) {
    result += arg;
    arg = -1 * arg * X * X * (2 * count - 1) / (2 * count + 1);
  }
  return result;
}