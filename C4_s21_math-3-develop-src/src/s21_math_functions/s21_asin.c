#include "../s21_math.h"

long double s21_asin(double x) {
  long double result = 0;

  if (x == 0) {
    result = 0;
  } else if (x == -1) {
    result = -S21_PI / 2;
  } else if (x == 1) {
    result = S21_PI / 2;
  } else if (s21_fabs(x) > 1 || S21_isnan(x)) {
    result = S21_NAN;
  } else if (s21_fabs(x) < 1) {
    result = s21_atan(x / (s21_sqrt(1 - x * x)));
  }
  return result;
}