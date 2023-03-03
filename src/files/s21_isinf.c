#include "../s21_math.h"
int s21_isinf(double x) {
  int is_in = 0;
  if (x == x + 1) {
    is_in = 1;
  }
  return is_in;
}