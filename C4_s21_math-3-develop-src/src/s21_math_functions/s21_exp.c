#include "../s21_math.h"

long double s21_exp(double x) {
  double add_value = 1;
  double series = 1;
  register int i = 1;
  if (x == -S21_PINF || x == S21_NINF || (x < -21)) {
    series = 0;
  } else if (x == S21_PINF || x == -S21_NINF) {
    series = S21_PINF;
  } else if (x == 0) {
    series = 1;
  } else {
    for (i = 1; i < 300; i++) {
      add_value *= x / i;
      series += add_value;
    }
  }
  return series;
}
