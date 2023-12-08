#include "../s21_math.h"

long double pow_work(double base, long double step);

long double s21_pow(double base, long double step) {
  long double res;
  if (step == 0 || (base == -1 && (step == S21_PINF || step == S21_NINF))) {
    res = 1;
  } else if ((base == 0 && step < 0) ||
             (s21_fabs(base) < 1 && step == S21_NINF) ||
             (base == S21_NINF &&
              ((step > 0 && step < 1) || step == S21_PINF)) ||
             (s21_fabs(base) > 1 && step == S21_PINF) ||
             (base == S21_PINF && step > 1)) {
    res = S21_PINF;
  } else if ((S21_isnan(step) && base != 1) || S21_isnan(base)) {
    res = S21_NAN;
  } else if (base == 1) {
    res = 1;
  } else if (base == S21_NINF && step > 0) {
    res = s21_fmod(step, 2.0) == 1.0 ? S21_NINF : S21_PINF;
  } else if (base == S21_NINF && step < 0 && s21_fmod(step, 2.0) == -1.0) {
    res = 1 / (S21_NINF);
  } else if (base == S21_NINF && step < 0 && s21_fmod(step, 2.0) == 0.0) {
    res = 1 / (S21_PINF);
  } else if (((base == S21_PINF || base == S21_NINF) && step > -1 &&
              step < 0) ||
             (s21_fabs(base) < 1 && step == S21_PINF) || base == 0 ||
             (base == S21_NINF &&
              (s21_fmod(step, 2) != 1.5 || s21_fmod(step, 2) != 0.5)) ||
             (step == S21_NINF) || (base == S21_PINF && step > 1)) {
    res = 0;
  } else if (step == 1) {
    res = base;
  } else {
    res = pow_work(base, step);
  }
  return res;
}

long double pow_work(double base, long double step) {
  long double res;
  int flag_half = 0;
  if (s21_fmod(step, 2) == 1.5 || s21_fmod(step, 2) == 0.5) {
    step = step * 2;
    flag_half = 1;
  }
  int flag = 1;
  if (step < 0) {
    flag = 0;
    step = -step;
    base = 1 / base;
  }
  long double step_part = s21_fabs(step) - s21_fabs((long long int)step);
  res = 1;
  for (int i = 0; i < (long long int)step; i++) {
    res *= base;
  }
  if (flag == 0) {
    step = -step;
    base = 1 / base;
    step_part = -step_part;
  }
  if (base < 0 && flag_half) {
    base = -base;
  }
  long double res_part = 1;
  if (step_part != 0) res_part = s21_exp(step_part * s21_log(base));
  res = res * res_part;
  if (flag == 0) {
    res = -res;
  }
  if (flag_half) res = s21_sqrt(res);
  if (flag == 0) {
    res = -res;
  }
  return res;
}