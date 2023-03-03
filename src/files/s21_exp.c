#include "../s21_math.h"
long double s21_exp(double x) {
  long double member = 1.;
  long double i = 1.;
  long double res = 1.;
  int neg_number = 0;
  if (x < 0) {
    x *= -1;
    neg_number = 1;
  }
  while (s21_fabs(member) > s21_EPSILON) {
    member *= x / i;
    i++;
    res += member;
    if (res > s21_MAX) {
      res = s21_INF;
      break;
    }
  }
  if (neg_number == 1) {
    if (res > s21_MAX)
      res = 0;
    else
      res = 1. / res;
  }
  if (res > s21_MAX) res = s21_INF;
  return res;
}