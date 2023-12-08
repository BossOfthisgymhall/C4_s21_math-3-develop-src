#include "../s21_math.h"

long double s21_sin(double x) {
  long double sum = 0;
  if (x == S21_NAN || x == S21_PINF || x == -S21_PINF) {
    sum = S21_NAN;
  } else {
    for (; x < -2 * S21_PI || 2 * S21_PI < x;) {
      if (x > 2 * S21_PI) {
        x -= 2 * S21_PI;
      } else {
        x += 2 * S21_PI;
      }
    }
    long double add_value = 0;
    for (register int i = 0; i < 300; i++) {
      add_value = ((s21_pow(-1, i)) * (s21_pow(x, (1 + 2 * i)))) /
                  (s21_factorial(1 + 2 * i));
      sum += add_value;
    }
  }
  return sum;
}