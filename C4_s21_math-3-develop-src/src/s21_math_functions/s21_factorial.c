#include "../s21_math.h"

long double s21_factorial(int x) {
  return x < 0 ? 0 : x == 0 ? 1 : x * s21_factorial(x - 1);
}