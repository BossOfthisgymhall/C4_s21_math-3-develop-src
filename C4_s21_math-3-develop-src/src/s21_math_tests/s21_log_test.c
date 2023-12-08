#include "tests.h"

START_TEST(s21_log_test_1) { ck_assert_double_nan(s21_log(S21_NAN)); }
END_TEST

START_TEST(s21_log_test_2) { ck_assert_double_nan(s21_log(S21_NINF)); }
END_TEST

START_TEST(s21_log_test_3) {
  ck_assert_double_eq(s21_log(S21_PINF), log(S21_PINF));
}
END_TEST

START_TEST(s21_log_test_4) {
  ck_assert_double_eq_tol(s21_log(1), log(1), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_5) { ck_assert_double_eq(s21_log(0), log(0)); }
END_TEST

START_TEST(s21_log_test_6) { ck_assert_double_nan(s21_log(-45)); }
END_TEST

START_TEST(s21_log_test_7) {
  ck_assert_double_eq_tol(s21_log(13), log(13), S21_EPS);
}
END_TEST

START_TEST(s21_log_test_8) { ck_assert_double_nan(s21_log(-34.5)); }
END_TEST

START_TEST(s21_log_test_9) {
  ck_assert_double_eq_tol(s21_log(21.7), log(21.7), S21_EPS);
}
END_TEST

Suite *s21_log_suite(void) {
  Suite *s = suite_create("s21_log");
  TCase *o = tcase_create("log");
  tcase_add_test(o, s21_log_test_1);
  tcase_add_test(o, s21_log_test_2);
  tcase_add_test(o, s21_log_test_3);
  tcase_add_test(o, s21_log_test_4);
  tcase_add_test(o, s21_log_test_5);
  tcase_add_test(o, s21_log_test_6);
  tcase_add_test(o, s21_log_test_7);
  tcase_add_test(o, s21_log_test_8);
  tcase_add_test(o, s21_log_test_9);

  suite_add_tcase(s, o);
  return s;
}
