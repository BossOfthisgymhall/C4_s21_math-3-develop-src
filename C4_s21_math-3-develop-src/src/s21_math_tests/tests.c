#include "tests.h"

void testing_part(Suite *suite_test, int *failed_count) {
  SRunner *suite_math = srunner_create(suite_test);
  srunner_run_all(suite_math, CK_NORMAL);
  *failed_count += srunner_ntests_failed(suite_math);
  srunner_free(suite_math);
}

int main() {
  int failed_count = 0;
  testing_part(s21_abs_suite(), &failed_count);
  testing_part(s21_fabs_suite(), &failed_count);
  testing_part(s21_acos_suite(), &failed_count);
  testing_part(s21_asin_suite(), &failed_count);
  testing_part(s21_atan_suite(), &failed_count);
  testing_part(s21_ceil_suite(), &failed_count);
  testing_part(s21_cos_suite(), &failed_count);
  testing_part(s21_exp_suite(), &failed_count);
  testing_part(s21_floor_suite(), &failed_count);
  testing_part(s21_fmod_suite(), &failed_count);
  testing_part(s21_log_suite(), &failed_count);
  testing_part(s21_pow_suite(), &failed_count);
  testing_part(s21_sin_suite(), &failed_count);
  testing_part(s21_sqrt_suite(), &failed_count);
  testing_part(s21_tan_suite(), &failed_count);
  return failed_count != 0 ? EXIT_FAILURE : EXIT_SUCCESS;
}
