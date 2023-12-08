#include "../s21_math.h"

long double s21_acos(double x) {
  long double result = 0;
  if (x == 0) {
    result = S21_PI / 2;
  } else if (x == 1) {
    result = 0;
  } else if (x == -1) {
    result = S21_PI;
  } else if (S21_isnan(x) || x == S21_NINF || x == S21_PINF || x == -S21_PINF) {
    result = S21_NAN;
  } else if (x > 0 && x < 1) {
    result = s21_atan((s21_sqrt(1 - x * x)) / x);
  } else if (x > -1 && x < 0) {
    result = S21_PI + s21_atan((s21_sqrt(1 - x * x)) / x);
  } else {
    result = S21_NAN;
  }
  return result;
}