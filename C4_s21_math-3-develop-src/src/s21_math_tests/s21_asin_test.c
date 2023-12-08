#include "tests.h"

START_TEST(s21_asin_test_1) { ck_assert_double_nan(s21_asin(S21_NINF)); }
END_TEST

START_TEST(s21_asin_test_2) { ck_assert_double_nan(s21_asin(S21_PINF)); }
END_TEST

START_TEST(s21_asin_test_3) { ck_assert_double_eq(s21_asin(1), asin(1)); }
END_TEST

START_TEST(s21_asin_test_4) { ck_assert_double_eq(s21_asin(0), asin(0)); }
END_TEST

START_TEST(s21_asin_test_5) {
  ck_assert_double_eq_tol(s21_asin(-0.45), asin(-0.45), S21_EPS);
}
END_TEST

START_TEST(s21_asin_test_6) {
  ck_assert_double_eq_tol(s21_asin(0.13), asin(0.13), S21_EPS);
}
END_TEST

START_TEST(s21_asin_test_7) {
  ck_assert_double_eq_tol(s21_asin(0.99), asin(0.99), S21_EPS);
}
END_TEST

START_TEST(s21_asin_test_8) {
  ck_assert_double_eq_tol(s21_asin(-0.9), asin(-0.9), S21_EPS);
}
END_TEST

START_TEST(s21_asin_test_9) { ck_assert_double_eq(s21_asin(-1), asin(-1)); }
END_TEST

Suite *s21_asin_suite(void) {
  Suite *s = suite_create("s21_asin");
  TCase *o = tcase_create("asin");
  tcase_add_test(o, s21_asin_test_1);
  tcase_add_test(o, s21_asin_test_2);
  tcase_add_test(o, s21_asin_test_3);
  tcase_add_test(o, s21_asin_test_4);
  tcase_add_test(o, s21_asin_test_5);
  tcase_add_test(o, s21_asin_test_6);
  tcase_add_test(o, s21_asin_test_7);
  tcase_add_test(o, s21_asin_test_8);
  tcase_add_test(o, s21_asin_test_9);
  suite_add_tcase(s, o);
  return s;
}