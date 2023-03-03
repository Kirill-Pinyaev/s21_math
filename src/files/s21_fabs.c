#include "../s21_math.h"
long double s21_fabs(double x) {
  double res;
  if (x > 0) {
    res = x;
  } else {
    res = x * -1.0;
  }
  return res;
}