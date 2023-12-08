#include "tests.h"

START_TEST(s21_fmod_test_1) { ck_assert_double_eq(s21_fmod(0, 4), fmod(0, 4)); }
END_TEST

START_TEST(s21_fmod_test_2) {
  ck_assert_double_eq_tol(s21_fmod(-54.6, 18.2), fmod(-54.6, 18.2), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_3) { ck_assert_double_nan(s21_fmod(0, 0)); }
END_TEST

START_TEST(s21_fmod_test_4) {
  ck_assert_double_eq_tol(s21_fmod(13, -3.5), fmod(13, -3.5), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_5) {
  ck_assert_double_eq_tol(s21_fmod(-13, -3.5), fmod(-13, -3.5), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_6) {
  ck_assert_double_eq_tol(s21_fmod(13, 3.5), fmod(13, 3.5), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_7) {
  ck_assert_double_eq_tol(s21_fmod(13.6, 5), fmod(13.6, 5), S21_EPS);
}
END_TEST

START_TEST(s21_fmod_test_8) { ck_assert_double_nan(s21_fmod(-34.5, S21_NAN)); }
END_TEST

START_TEST(s21_fmod_test_9) {
  ck_assert_double_eq(s21_fmod(-102, S21_PINF), fmod(-102, S21_PINF));
}
END_TEST

START_TEST(s21_fmod_test_10) {
  ck_assert_double_nan(s21_fmod(S21_NINF, S21_NINF));
}
END_TEST

Suite *s21_fmod_suite(void) {
  Suite *s = suite_create("s21_fmod");
  TCase *o = tcase_create("fmod");
  tcase_add_test(o, s21_fmod_test_1);
  tcase_add_test(o, s21_fmod_test_2);
  tcase_add_test(o, s21_fmod_test_3);
  tcase_add_test(o, s21_fmod_test_4);
  tcase_add_test(o, s21_fmod_test_5);
  tcase_add_test(o, s21_fmod_test_6);
  tcase_add_test(o, s21_fmod_test_7);
  tcase_add_test(o, s21_fmod_test_8);
  tcase_add_test(o, s21_fmod_test_9);
  tcase_add_test(o, s21_fmod_test_10);

  suite_add_tcase(s, o);
  return s;
}
