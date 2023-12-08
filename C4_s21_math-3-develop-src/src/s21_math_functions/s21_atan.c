#include "../s21_math.h"

long double s21_atan(double x) {
  long double sum;
  if (x == S21_PINF) {
    sum = S21_PI / 2;
  } else if (x == 1) {
    sum = S21_PI / 4;
  } else if (x == -1) {
    sum = -S21_PI / 4;
  } else if (x == -S21_PINF || x == S21_NINF) {
    sum = -S21_PI / 2;
  } else if (S21_isnan(x)) {
    sum = S21_NAN;
  } else {
    sum = 0;
    if (s21_fabs(x) < 1) {
      for (int i = 0; i < 500; i++) {
        sum += s21_pow(-1, i) * s21_pow(x, 1 + 2 * i) / (1 + 2 * i);
      }
    }
    if (s21_fabs(x) > 1) {
      sum = S21_PI * s21_sqrt(s21_pow(x, 2)) / 2 / x;
      for (int i = 0; i < 500; i++) {
        sum -= (s21_pow(-1, i) * s21_pow(x, -1 - 2 * i) / (1 + 2 * i));
      }
    }
  }
  return sum;
}
