#include "../s21_math.h"
long double s21_floor(double x) {
  long double res = x;
  int flag_inf = 0;
  if (s21_isinf(x) || s21_isnan(x)) {
    flag_inf = 1;
  }
  int integerPart = x;
  if (x < 0 && x != integerPart) {
    integerPart--;
  }
  if (flag_inf) {
    return res;
  }
  return integerPart;
}