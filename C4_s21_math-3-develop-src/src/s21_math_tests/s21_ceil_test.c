#include "tests.h"

START_TEST(s21_ceil_test_1) { ck_assert_double_nan(s21_ceil(S21_NAN)); }
END_TEST

START_TEST(s21_ceil_test_2) {
  ck_assert_double_eq(s21_ceil(S21_NINF), ceil(S21_NINF));
}
END_TEST

START_TEST(s21_ceil_test_3) {
  ck_assert_double_eq(s21_ceil(S21_PINF), ceil(S21_PINF));
}
END_TEST

START_TEST(s21_ceil_test_4) { ck_assert((s21_ceil(1) - ceil(1)) < S21_EPS); }
END_TEST

START_TEST(s21_ceil_test_5) { ck_assert_double_eq(s21_ceil(0), ceil(0)); }
END_TEST

START_TEST(s21_ceil_test_6) { ck_assert_double_eq(s21_ceil(-45), ceil(-45)); }
END_TEST

START_TEST(s21_ceil_test_7) { ck_assert_double_eq(s21_ceil(13), ceil(13)); }
END_TEST

START_TEST(s21_ceil_test_8) {
  ck_assert_double_eq(s21_ceil(-34.5), ceil(-34.5));
}
END_TEST

START_TEST(s21_ceil_test_9) { ck_assert_double_eq(s21_ceil(21.7), ceil(21.7)); }
END_TEST

Suite *s21_ceil_suite(void) {
  Suite *s = suite_create("s21_ceil");
  TCase *o = tcase_create("ceil");
  tcase_add_test(o, s21_ceil_test_1);
  tcase_add_test(o, s21_ceil_test_2);
  tcase_add_test(o, s21_ceil_test_3);
  tcase_add_test(o, s21_ceil_test_4);
  tcase_add_test(o, s21_ceil_test_5);
  tcase_add_test(o, s21_ceil_test_6);
  tcase_add_test(o, s21_ceil_test_7);
  tcase_add_test(o, s21_ceil_test_8);
  tcase_add_test(o, s21_ceil_test_9);

  suite_add_tcase(s, o);
  return s;
}