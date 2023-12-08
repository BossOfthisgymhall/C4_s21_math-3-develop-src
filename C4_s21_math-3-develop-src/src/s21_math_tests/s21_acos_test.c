#include "tests.h"

START_TEST(s21_acos_test_1) { ck_assert_double_nan(s21_acos(S21_NAN)); }
END_TEST

START_TEST(s21_acos_test_2) { ck_assert_double_nan(s21_acos(S21_NINF)); }
END_TEST

START_TEST(s21_acos_test_3) { ck_assert_double_nan(s21_acos(S21_PINF)); }
END_TEST

START_TEST(s21_acos_test_4) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_5) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_6) { ck_assert_double_nan(s21_acos(-45)); }
END_TEST

START_TEST(s21_acos_test_7) { ck_assert_double_nan(s21_acos(13)); }
END_TEST

START_TEST(s21_acos_test_8) { ck_assert_double_nan(s21_acos(-34.5)); }
END_TEST

START_TEST(s21_acos_test_9) { ck_assert_double_nan(s21_acos(21.7)); }
END_TEST

START_TEST(s21_acos_test_10) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_11) {
  ck_assert_double_eq_tol(s21_acos(0.4), acos(0.4), S21_EPS);
}
END_TEST

START_TEST(s21_acos_test_12) {
  ck_assert_double_eq_tol(s21_acos(-0.8), acos(-0.8), S21_EPS);
}
END_TEST

Suite *s21_acos_suite(void) {
  Suite *s = suite_create("s21_acos");
  TCase *o = tcase_create("acos");
  tcase_add_test(o, s21_acos_test_1);
  tcase_add_test(o, s21_acos_test_2);
  tcase_add_test(o, s21_acos_test_3);
  tcase_add_test(o, s21_acos_test_4);
  tcase_add_test(o, s21_acos_test_5);
  tcase_add_test(o, s21_acos_test_6);
  tcase_add_test(o, s21_acos_test_7);
  tcase_add_test(o, s21_acos_test_8);
  tcase_add_test(o, s21_acos_test_9);
  tcase_add_test(o, s21_acos_test_10);
  tcase_add_test(o, s21_acos_test_11);
  tcase_add_test(o, s21_acos_test_12);

  suite_add_tcase(s, o);
  return s;
}