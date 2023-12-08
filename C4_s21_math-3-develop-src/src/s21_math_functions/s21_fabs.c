#include "../s21_math.h"

long double s21_fabs(double x) {
  double res = x;
  if (x < 0) res = -x;
  return res;
}