#include "tests.h"

START_TEST(s21_floor_test_1) { ck_assert_double_nan(s21_floor(S21_NAN)); }
END_TEST

START_TEST(s21_floor_test_2) {
  ck_assert_double_eq(s21_floor(S21_NINF), floor(S21_NINF));
}
END_TEST

START_TEST(s21_floor_test_3) {
  ck_assert_double_eq(s21_floor(S21_PINF), floor(S21_PINF));
}
END_TEST

START_TEST(s21_floor_test_4) { ck_assert((s21_floor(1) - floor(1)) < S21_EPS); }
END_TEST

START_TEST(s21_floor_test_5) { ck_assert_double_eq(s21_floor(0), floor(0)); }
END_TEST

START_TEST(s21_floor_test_6) {
  ck_assert_double_eq(s21_floor(-45), floor(-45));
}
END_TEST

START_TEST(s21_floor_test_7) { ck_assert_double_eq(s21_floor(13), floor(13)); }
END_TEST

START_TEST(s21_floor_test_8) {
  ck_assert_double_eq(s21_floor(-34.5), floor(-34.5));
}
END_TEST

START_TEST(s21_floor_test_9) {
  ck_assert_double_eq(s21_floor(21.7), floor(21.7));
}
END_TEST

Suite *s21_floor_suite(void) {
  Suite *s = suite_create("s21_floor");
  TCase *o = tcase_create("floor");
  tcase_add_test(o, s21_floor_test_1);
  tcase_add_test(o, s21_floor_test_2);
  tcase_add_test(o, s21_floor_test_3);
  tcase_add_test(o, s21_floor_test_4);
  tcase_add_test(o, s21_floor_test_5);
  tcase_add_test(o, s21_floor_test_6);
  tcase_add_test(o, s21_floor_test_7);
  tcase_add_test(o, s21_floor_test_8);
  tcase_add_test(o, s21_floor_test_9);

  suite_add_tcase(s, o);
  return s;
}