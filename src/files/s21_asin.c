#include "../s21_math.h"

long double s21_asin(double x) {
  long double result = 0.;
  if (x == 1.)
    result = s21_PI / 2;
  else if (x == -1.)
    result = -s21_PI / 2;
  else if (x == 0.7071067811865475244)
    result = s21_PI / 4;
  else if (x == -0.7071067811865475244)
    result = -s21_PI / 4;
  else if (-1. < x && x < 1.)
    result = s21_atan(x / s21_sqrt(1 - x * x));
  else
    result = s21_NAN;
  return result;
}