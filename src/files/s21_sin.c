#include "../s21_math.h"
long double s21_sin(double x) {
  long double member, res;
  x = s21_fmod(x, s21_TWO_PI);
  member = x;
  res = x;
  if (s21_fabs(x) < s21_EPSILON) {
    res = 0.;
  } else {
    for (int i = 1; s21_fabs(member) > s21_EPSILON && i < 100; i++) {
      member *= ((-1.) * x * x / (2. * i * (2. * i + 1.)));
      res += member;
    }
  }
  return res;
}
