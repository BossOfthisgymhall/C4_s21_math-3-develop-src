#include "tests.h"

START_TEST(s21_exp_test_1) { ck_assert_double_nan(s21_exp(S21_NAN)); }
END_TEST

START_TEST(s21_exp_test_2) {
  ck_assert_double_eq(s21_exp(S21_NINF), exp(S21_NINF));
}
END_TEST

START_TEST(s21_exp_test_3) {
  ck_assert_double_eq(s21_exp(S21_PINF), exp(S21_PINF));
}
END_TEST

START_TEST(s21_exp_test_4) { ck_assert((s21_exp(1) - exp(1)) < S21_EPS); }
END_TEST

START_TEST(s21_exp_test_5) { ck_assert_double_eq(s21_exp(0), exp(0)); }
END_TEST

START_TEST(s21_exp_test_6) {
  ck_assert_double_eq_tol(s21_exp(-45), exp(-45), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_7) {
  ck_assert_double_eq_tol(s21_exp(13), exp(13), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_8) {
  ck_assert_double_eq_tol(s21_exp(-34.5), exp(-34.5), S21_EPS);
}
END_TEST

START_TEST(s21_exp_test_9) {
  ck_assert_double_eq_tol(s21_exp(21.7), exp(21.7), S21_EPS);
}
END_TEST

Suite *s21_exp_suite(void) {
  Suite *s = suite_create("s21_exp");
  TCase *o = tcase_create("exp");
  tcase_add_test(o, s21_exp_test_1);
  tcase_add_test(o, s21_exp_test_2);
  tcase_add_test(o, s21_exp_test_3);
  tcase_add_test(o, s21_exp_test_4);
  tcase_add_test(o, s21_exp_test_5);
  tcase_add_test(o, s21_exp_test_6);
  tcase_add_test(o, s21_exp_test_7);
  tcase_add_test(o, s21_exp_test_8);
  tcase_add_test(o, s21_exp_test_9);

  suite_add_tcase(s, o);
  return s;
}
