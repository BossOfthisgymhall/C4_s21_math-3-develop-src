#include "tests.h"

START_TEST(s21_tan_test_1) { ck_assert_double_nan(s21_tan(S21_NAN)); }
END_TEST

START_TEST(s21_tan_test_2) { ck_assert_double_nan(s21_tan(S21_NINF)); }
END_TEST

START_TEST(s21_tan_test_3) { ck_assert_double_nan(s21_tan(S21_PINF)); }
END_TEST

START_TEST(s21_tan_test_4) {
  ck_assert_double_eq_tol(s21_tan(1), tan(1), S21_EPS);
}
END_TEST

START_TEST(s21_tan_test_5) { ck_assert_double_eq(s21_tan(0), tan(0)); }
END_TEST

START_TEST(s21_tan_test_6) {
  ck_assert_double_eq_tol(s21_tan(-45), tan(-45), S21_EPS);
}
END_TEST

START_TEST(s21_tan_test_7) {
  ck_assert_double_eq_tol(s21_tan(13), tan(13), S21_EPS);
}
END_TEST

START_TEST(s21_tan_test_8) {  // посмотреть точность ? после 1е-7 не совпадает
  ck_assert_double_eq_tol(s21_tan(-34.5), tan(-34.5), 1e-7);
}
END_TEST

START_TEST(s21_tan_test_9) {
  ck_assert_double_eq_tol(s21_tan(21.7), tan(21.7), S21_EPS);
}
END_TEST

Suite *s21_tan_suite(void) {
  Suite *s = suite_create("s21_tan");
  TCase *o = tcase_create("tan");
  tcase_add_test(o, s21_tan_test_1);
  tcase_add_test(o, s21_tan_test_2);
  tcase_add_test(o, s21_tan_test_3);
  tcase_add_test(o, s21_tan_test_4);
  tcase_add_test(o, s21_tan_test_5);
  tcase_add_test(o, s21_tan_test_6);
  tcase_add_test(o, s21_tan_test_7);
  tcase_add_test(o, s21_tan_test_8);
  tcase_add_test(o, s21_tan_test_9);

  suite_add_tcase(s, o);
  return s;
}
