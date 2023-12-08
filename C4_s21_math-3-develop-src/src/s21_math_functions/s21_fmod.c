#include "../s21_math.h"

long double s21_fmod(double x, double y) {
  long double result = 0;
  if (y == S21_PINF || y == -S21_PINF) {
    if (x == y)
      result = S21_NAN;
    else
      result = x;
  } else if (y == 0 || x == S21_PINF || x == -S21_PINF || x == S21_NINF ||
             x == S21_NAN || y == S21_NAN) {
    result = S21_NAN;
  } else if (x == 0) {
    result = 0;
  } else {
    long long int n = 0;
    n = x / y;
    result = (long double)x - n * (long double)y;
  }
  return result;
}
