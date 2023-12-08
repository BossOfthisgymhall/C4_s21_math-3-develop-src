#include "tests.h"

START_TEST(s21_fabs_test_1) { ck_assert_double_nan(s21_fabs(S21_NAN)); }
END_TEST

START_TEST(s21_fabs_test_2) {
  ck_assert_double_eq(s21_fabs(S21_NINF), fabs(S21_NINF));
}
END_TEST

START_TEST(s21_fabs_test_3) {
  ck_assert_double_eq(s21_fabs(S21_PINF), fabs(S21_PINF));
}
END_TEST

START_TEST(s21_fabs_test_4) { ck_assert_double_eq(s21_fabs(1.0), fabs(1.0)); }
END_TEST

START_TEST(s21_fabs_test_5) { ck_assert_double_eq(s21_fabs(0.0), fabs(0.0)); }
END_TEST

START_TEST(s21_fabs_test_6) {
  ck_assert_double_eq(s21_fabs(-45.0), fabs(-45.0));
}
END_TEST

START_TEST(s21_fabs_test_7) { ck_assert_double_eq(s21_fabs(13.0), fabs(13.0)); }
END_TEST

START_TEST(s21_fabs_test_8) {
  ck_assert_double_eq(s21_fabs(-34.5), fabs(-34.5));
}
END_TEST

START_TEST(s21_fabs_test_9) { ck_assert_double_eq(s21_fabs(21.7), fabs(21.7)); }
END_TEST

Suite *s21_fabs_suite(void) {
  Suite *s = suite_create("s21_fabs");
  TCase *o = tcase_create("fabs");
  tcase_add_test(o, s21_fabs_test_1);
  tcase_add_test(o, s21_fabs_test_2);
  tcase_add_test(o, s21_fabs_test_3);
  tcase_add_test(o, s21_fabs_test_4);
  tcase_add_test(o, s21_fabs_test_5);
  tcase_add_test(o, s21_fabs_test_6);
  tcase_add_test(o, s21_fabs_test_7);
  tcase_add_test(o, s21_fabs_test_8);
  tcase_add_test(o, s21_fabs_test_9);

  suite_add_tcase(s, o);
  return s;
}