#include "../s21_math.h"

long double s21_floor(double x) {
  if (x == S21_NINF || x == S21_PINF) {
    x = x;
  } else {
    if (x > (int)x) {
      x = (int)x;
    }
    if (x < (int)x) {
      x = (int)x - 1;
    }
  }
  return x;
}
