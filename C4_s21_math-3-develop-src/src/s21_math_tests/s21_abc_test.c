#include "tests.h"

START_TEST(s21_abs_test_1) {
  int value = S21_NAN;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_2) {
  int value = S21_NINF;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_3) {
  int value = S21_PINF;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_4) {
  int value = 1;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_5) {
  int value = 0;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_6) {
  int value = -45;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_7) {
  int value = 13;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_8) {
  int value = -34.5;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

START_TEST(s21_abs_test_9) {
  int value = 21.7;
  ck_assert_int_eq(s21_abs(value), abs(value));
}
END_TEST

Suite *s21_abs_suite(void) {
  Suite *s = suite_create("s21_abs");
  TCase *o = tcase_create("abs");
  tcase_add_test(o, s21_abs_test_1);
  tcase_add_test(o, s21_abs_test_2);
  tcase_add_test(o, s21_abs_test_3);
  tcase_add_test(o, s21_abs_test_4);
  tcase_add_test(o, s21_abs_test_5);
  tcase_add_test(o, s21_abs_test_6);
  tcase_add_test(o, s21_abs_test_7);
  tcase_add_test(o, s21_abs_test_8);
  tcase_add_test(o, s21_abs_test_9);

  suite_add_tcase(s, o);
  return s;
}
