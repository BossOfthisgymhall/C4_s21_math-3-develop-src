#include "tests.h"

START_TEST(s21_pow_test_1) {
  ck_assert_double_eq(s21_pow(S21_NINF, 4), pow(S21_NINF, 4));
}
END_TEST

START_TEST(s21_pow_test_2) {
  ck_assert_double_eq(s21_pow(S21_NINF, 15.4), pow(S21_NINF, 15.4));
}
END_TEST

START_TEST(s21_pow_test_3) {
  ck_assert_double_eq_tol(s21_pow(S21_NAN, 0), pow(S21_NAN, 0), S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_4) {
  ck_assert_double_eq_tol(s21_pow(13, -3.5), pow(13, -3.5), S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_5) { ck_assert_double_nan(s21_pow(-13, -3.5)); }
END_TEST

START_TEST(s21_pow_test_6) {
  ck_assert_double_eq(s21_pow(S21_NINF, S21_PINF), pow(S21_NINF, S21_PINF));
}
END_TEST

START_TEST(s21_pow_test_7) {
  ck_assert_double_eq_tol(s21_pow(13.6, 5), pow(13.6, 5), S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_8) { ck_assert_double_nan(s21_pow(-34.5, S21_NAN)); }
END_TEST

START_TEST(s21_pow_test_9) {
  ck_assert_double_eq(s21_pow(-102, S21_PINF), pow(-102, S21_PINF));
}
END_TEST

START_TEST(s21_pow_test_10) {
  ck_assert_double_eq(s21_pow(S21_NINF, -3), pow(S21_NINF, -3));
}
END_TEST

START_TEST(s21_pow_test_11) {
  ck_assert_double_eq(s21_pow(S21_NINF, -4), pow(S21_NINF, -4));
}
END_TEST

START_TEST(s21_pow_test_12) {
  ck_assert_double_eq_tol(s21_pow(40, 2.5), pow(40, 2.5), S21_EPS);
}
END_TEST

START_TEST(s21_pow_test_13) { ck_assert_double_nan(s21_pow(-5, 4.5)); }
END_TEST

START_TEST(s21_pow_test_14) {
  ck_assert_double_eq(s21_pow(S21_NINF, -1.7), pow(S21_NINF, -1.7));
}
END_TEST

Suite *s21_pow_suite(void) {
  Suite *s = suite_create("s21_pow");
  TCase *o = tcase_create("pow");
  tcase_add_test(o, s21_pow_test_1);
  tcase_add_test(o, s21_pow_test_2);
  tcase_add_test(o, s21_pow_test_3);
  tcase_add_test(o, s21_pow_test_4);
  tcase_add_test(o, s21_pow_test_5);
  tcase_add_test(o, s21_pow_test_6);
  tcase_add_test(o, s21_pow_test_7);
  tcase_add_test(o, s21_pow_test_8);
  tcase_add_test(o, s21_pow_test_9);
  tcase_add_test(o, s21_pow_test_10);
  tcase_add_test(o, s21_pow_test_11);
  tcase_add_test(o, s21_pow_test_12);
  tcase_add_test(o, s21_pow_test_13);
  tcase_add_test(o, s21_pow_test_14);
  suite_add_tcase(s, o);
  return s;
}
