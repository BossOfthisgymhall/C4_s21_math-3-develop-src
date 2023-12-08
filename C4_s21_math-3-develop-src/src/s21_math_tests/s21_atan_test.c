#include "tests.h"

START_TEST(s21_atan_test_1) { ck_assert_double_nan(s21_atan(S21_NAN)); }
END_TEST

START_TEST(s21_atan_test_2) {
  ck_assert_double_eq(s21_atan(S21_NINF), atan(S21_NINF));
}
END_TEST

START_TEST(s21_atan_test_3) {
  ck_assert_double_eq(s21_atan(S21_PINF), atan(S21_PINF));
}
END_TEST

START_TEST(s21_atan_test_4) {
  ck_assert_double_eq_tol(s21_atan(1), atan(1), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_5) { ck_assert_double_eq(s21_atan(0), atan(0)); }
END_TEST

START_TEST(s21_atan_test_6) {
  ck_assert_double_eq_tol(s21_atan(-45), atan(-45), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_7) {
  ck_assert_double_eq_tol(s21_atan(13), atan(13), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_8) {
  ck_assert_double_eq_tol(s21_atan(-34.5), atan(-34.5), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_9) {
  ck_assert_double_eq_tol(s21_atan(21.7), atan(21.7), S21_EPS);
}
END_TEST

START_TEST(s21_atan_test_10) {
  ck_assert_double_eq_tol(s21_atan(-1), atan(-1), S21_EPS);
}
END_TEST

Suite *s21_atan_suite(void) {
  Suite *s = suite_create("s21_atan");
  TCase *o = tcase_create("atan");
  tcase_add_test(o, s21_atan_test_1);
  tcase_add_test(o, s21_atan_test_2);
  tcase_add_test(o, s21_atan_test_3);
  tcase_add_test(o, s21_atan_test_4);
  tcase_add_test(o, s21_atan_test_5);
  tcase_add_test(o, s21_atan_test_6);
  tcase_add_test(o, s21_atan_test_7);
  tcase_add_test(o, s21_atan_test_8);
  tcase_add_test(o, s21_atan_test_9);
  tcase_add_test(o, s21_atan_test_10);

  suite_add_tcase(s, o);
  return s;
}