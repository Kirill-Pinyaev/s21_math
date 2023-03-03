#include "../s21_math.h"

long double s21_log(double x) {
  int count_e = 0;
  double res = 0;
  double pr_res = 0;
  if (x == s21_INF)
    res = s21_INF;
  else if (x == 0)
    res = -s21_INF;
  else if (x < 0)
    res = s21_NAN;
  else if (x == 1)
    res = 0;
  else {
    for (; x >= s21_EXP; x /= s21_EXP, count_e++) continue;
    for (int i = 0; i < 100; i++) {
      pr_res = res;
      res = pr_res + 2 * (x - s21_exp(pr_res)) / (x + s21_exp(pr_res));
    }
  }
  return count_e + res;
}