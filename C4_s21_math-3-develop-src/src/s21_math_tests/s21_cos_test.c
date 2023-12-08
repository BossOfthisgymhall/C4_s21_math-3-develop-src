#include "tests.h"

START_TEST(s21_cos_test_1) { ck_assert_double_nan(s21_cos(S21_NAN)); }
END_TEST

START_TEST(s21_cos_test_2) { ck_assert_double_nan(s21_cos(S21_NINF)); }
END_TEST

START_TEST(s21_cos_test_3) { ck_assert_double_nan(s21_cos(S21_PINF)); }
END_TEST

START_TEST(s21_cos_test_4) { ck_assert((s21_cos(1) - cos(1)) < S21_EPS); }
END_TEST

START_TEST(s21_cos_test_5) { ck_assert_double_eq(s21_cos(0), cos(0)); }
END_TEST

START_TEST(s21_cos_test_6) {
  ck_assert_double_eq_tol(s21_cos(-45), cos(-45), S21_EPS);
}
END_TEST

START_TEST(s21_cos_test_7) {
  ck_assert_double_eq_tol(s21_cos(13), cos(13), S21_EPS);
}
END_TEST

START_TEST(s21_cos_test_8) {
  ck_assert_double_eq_tol(s21_cos(-34.5), cos(-34.5), S21_EPS);
}
END_TEST

START_TEST(s21_cos_test_9) {
  ck_assert_double_eq_tol(s21_cos(21.7), cos(21.7), S21_EPS);
}
END_TEST

Suite *s21_cos_suite(void) {
  Suite *s = suite_create("s21_cos");
  TCase *o = tcase_create("cos");
  tcase_add_test(o, s21_cos_test_1);
  tcase_add_test(o, s21_cos_test_2);
  tcase_add_test(o, s21_cos_test_3);
  tcase_add_test(o, s21_cos_test_4);
  tcase_add_test(o, s21_cos_test_5);
  tcase_add_test(o, s21_cos_test_6);
  tcase_add_test(o, s21_cos_test_7);
  tcase_add_test(o, s21_cos_test_8);
  tcase_add_test(o, s21_cos_test_9);

  suite_add_tcase(s, o);
  return s;
}