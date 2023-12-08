#include "../s21_math.h"

long double s21_tan(double x) {
  long double result = 0;
  if (x == S21_NAN || x == S21_PINF || x == -S21_PINF) {
    result = S21_NAN;
  } else {
    result = s21_sin(x) / s21_cos(x);
  }
  return result;
}