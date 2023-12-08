#include "tests.h"

START_TEST(s21_sin_test_1) { ck_assert_double_nan(s21_sin(S21_NAN)); }
END_TEST

START_TEST(s21_sin_test_2) { ck_assert_double_nan(s21_sin(S21_NINF)); }
END_TEST

START_TEST(s21_sin_test_3) { ck_assert_double_nan(s21_sin(S21_PINF)); }
END_TEST

START_TEST(s21_sin_test_4) {
  ck_assert_double_eq_tol(s21_sin(1), sin(1), S21_EPS);
}
END_TEST

START_TEST(s21_sin_test_5) { ck_assert_double_eq(s21_sin(0), sin(0)); }
END_TEST

START_TEST(s21_sin_test_6) {
  ck_assert_double_eq_tol(s21_sin(-45), sin(-45), S21_EPS);
}
END_TEST

START_TEST(s21_sin_test_7) {
  ck_assert_double_eq_tol(s21_sin(13), sin(13), S21_EPS);
}
END_TEST

START_TEST(s21_sin_test_8) {
  ck_assert_double_eq_tol(s21_sin(-34.5), sin(-34.5), S21_EPS);
}
END_TEST

START_TEST(s21_sin_test_9) {
  ck_assert_double_eq_tol(s21_sin(21.7), sin(21.7), S21_EPS);
}
END_TEST

Suite *s21_sin_suite(void) {
  Suite *s = suite_create("s21_sin");
  TCase *o = tcase_create("sin");
  tcase_add_test(o, s21_sin_test_1);
  tcase_add_test(o, s21_sin_test_2);
  tcase_add_test(o, s21_sin_test_3);
  tcase_add_test(o, s21_sin_test_4);
  tcase_add_test(o, s21_sin_test_5);
  tcase_add_test(o, s21_sin_test_6);
  tcase_add_test(o, s21_sin_test_7);
  tcase_add_test(o, s21_sin_test_8);
  tcase_add_test(o, s21_sin_test_9);

  suite_add_tcase(s, o);
  return s;
}