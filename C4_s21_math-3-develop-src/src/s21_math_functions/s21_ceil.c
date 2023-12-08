#include "../s21_math.h"

long double s21_ceil(double x) {
  if (x == S21_NINF || x == S21_PINF) {
    x = x;
  } else {
    if (x > (int)x) {
      x = (int)x + 1;
    }
    if (x < (int)x) {
      x = (int)x;
    }
  }
  return x;
}
