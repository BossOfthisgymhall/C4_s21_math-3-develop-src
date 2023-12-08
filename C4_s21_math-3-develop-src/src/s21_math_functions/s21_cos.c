#include "../s21_math.h"

long double s21_cos(double x) {
  long double result = 0, add_vallue = 0;
  if (x == S21_NAN || x == S21_PINF || x == -S21_PINF) {
    result = S21_NAN;
  } else {
    for (; x < -2 * S21_PI || 2 * S21_PI < x;) {
      if (x > 2 * S21_PI) {
        x -= 2 * S21_PI;
      } else {
        x += 2 * S21_PI;
      }
    }
    for (register int i = 0; i < 300; i++) {
      add_vallue =
          ((s21_pow(-1, i)) * (s21_pow(x, (2 * i)))) / (s21_factorial(2 * i));
      result += add_vallue;
    }
  }
  return result;
}