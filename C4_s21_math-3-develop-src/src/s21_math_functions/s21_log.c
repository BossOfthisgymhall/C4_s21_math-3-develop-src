#include "../s21_math.h"

long double s21_log(double x) {
  double result = 0;
  if (S21_isnan(x)) {
    result = S21_NAN;
  } else if (x < 0) {
    result = S21_NAN;
  } else if (x == 0) {
    result = S21_NINF;
  } else if (x == S21_PINF) {
    result = S21_PINF;
  } else if (x == 1) {
    result = 0;
  } else {
    double compare = 0;
    int ex_pow = 0;
    for (; x >= S21_Exp; x /= S21_Exp, ex_pow++) continue;
    for (int i = 0; i < 100; i++) {
      compare = result;
      result = compare + 2 * (x - s21_exp(compare)) / (x + s21_exp(compare));
    }
    result = result + ex_pow;
  }
  return result;
}
