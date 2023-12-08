#include "tests.h"

START_TEST(s21_sqrt_test_1) { ck_assert_double_nan(s21_sqrt(S21_NAN)); }
END_TEST

START_TEST(s21_sqrt_test_2) { ck_assert_double_nan(s21_sqrt(S21_NINF)); }
END_TEST

START_TEST(s21_sqrt_test_3) {
  ck_assert_double_eq(s21_sqrt(S21_PINF), sqrt(S21_PINF));
}
END_TEST

START_TEST(s21_sqrt_test_4) { ck_assert_double_eq(s21_sqrt(1), sqrt(1)); }
END_TEST

START_TEST(s21_sqrt_test_5) { ck_assert_double_eq(s21_sqrt(0), sqrt(0)); }
END_TEST

START_TEST(s21_sqrt_test_6) { ck_assert_double_nan(s21_sqrt(-45)); }
END_TEST

START_TEST(s21_sqrt_test_7) {
  ck_assert_double_eq_tol(s21_sqrt(13), sqrt(13), S21_EPS);
}
END_TEST

START_TEST(s21_sqrt_test_8) { ck_assert_double_nan(s21_sqrt(-34.5)); }
END_TEST

START_TEST(s21_sqrt_test_9) {
  ck_assert_double_eq_tol(s21_sqrt(21.7), sqrt(21.7), S21_EPS);
}
END_TEST

Suite *s21_sqrt_suite(void) {
  Suite *s = suite_create("s21_sqrt");
  TCase *o = tcase_create("sqrt");
  tcase_add_test(o, s21_sqrt_test_1);
  tcase_add_test(o, s21_sqrt_test_2);
  tcase_add_test(o, s21_sqrt_test_3);
  tcase_add_test(o, s21_sqrt_test_4);
  tcase_add_test(o, s21_sqrt_test_5);
  tcase_add_test(o, s21_sqrt_test_6);
  tcase_add_test(o, s21_sqrt_test_7);
  tcase_add_test(o, s21_sqrt_test_8);
  tcase_add_test(o, s21_sqrt_test_9);

  suite_add_tcase(s, o);
  return s;
}