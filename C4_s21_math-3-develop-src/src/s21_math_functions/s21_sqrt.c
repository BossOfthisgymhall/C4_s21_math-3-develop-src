#include "../s21_math.h"

long double s21_sqrt(double x) {
  long double left = 0;
  long double right = (x > 1 ? x : 1);
  long double middle = (left + right) / 2;
  long double result = 0;
  if (x == 0) {
    result = 0;
  } else if (x == S21_NINF || S21_isnan(x)) {
    result = S21_NAN;
  } else if (x < 0) {
    result = S21_NAN;
  } else {
    if (x > 1 || x < 1) {
      result = x;
      while (s21_fabs(result - middle) > S21_EPS) {
        middle = result;
        result = 0.5 * (middle + x / middle);
      }
    } else if (x == 1) {
      result = 1;
    }
  }
  return result;
}
