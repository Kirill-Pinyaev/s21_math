#include "../s21_math.h"
long double s21_pow(double x, double y) {
  long double res = 0.;
  long double member = x;
  if (y == 0) {
    res = 1;
  } else if (x == 1) {
    res = 1;
  } else if (x == s21_INF || (x == -s21_INF && s21_fmod(y, 2) == 0)) {
    res = s21_INF;
  } else if (x < 0 && (long long int)y != y) {
    res = s21_NAN;
  } else if (member < 0) {
    member = -member;
    res = s21_exp(y * s21_log(member));
    if (s21_fmod(y, 2) != 0) {
      res = -res;
    }
  } else {
    res = s21_exp(y * s21_log(x));
  }
  return res;
}
