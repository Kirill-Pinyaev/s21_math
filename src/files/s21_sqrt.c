#include "../s21_math.h"
long double s21_sqrt(double x) {
  if (x < 0.0) {
    return s21_NAN;
  }
  long double result = x;
  if (x == 0.0) {
    result = 0.0;
  } else if (x >= 0.0 && x <= 10.0) {
    result = s21_exp(s21_log(x) / 2.0);
  } else {
    long double result = x / 2;
    long double eps = 0.000001;
    while (result - x / result > eps) {
      result = 0.5 * (result + x / result);
    }
    return result;
  }
  return result;
}
