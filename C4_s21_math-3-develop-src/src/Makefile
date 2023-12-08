CC = gcc
FLAGS = -Wall -Wextra -Werror -pedantic -std=c11
OS := $(shell uname -s)

all: s21_math.a test

clean:
	rm *.a
	rm -rf report
	rm s21_test

test:
ifeq ($(OS), Linux)
	gcc -Wall -Werror -Wextra s21_math_tests/*.c -L. s21_math.a -lcheck -lm -lpthread -lsubunit -o s21_test
else 
	gcc -Wall -Werror -Wextra s21_math_tests/*.c -L. s21_math.a -lcheck -lpthread -o s21_test
endif
	./s21_test

s21_math.a:
	$(CC) $(FLAGS) -c s21_math_functions/*.c
	ar rcs s21_math.a *.o
	ranlib s21_math.a
	rm *.o

gcov_report:
ifeq ($(OS), Linux)
	$(CC) $(CFLAGS) --coverage s21_math_tests/*.c s21_math_functions/*.c -o gcov -lcheck -lm -lsubunit
else
	$(CC) $(CFLAGS) --coverage s21_math_tests/*.c s21_math_functions/*.c -o gcov -lcheck
endif
	chmod +x gcov
	./gcov 
	lcov -t "s21_test" -o fizzbuzz.info -c -d .
	genhtml -o report fizzbuzz.info
	open report/index.html
	rm *.gcda *.gcno *.info gcov

rebuild: clean s21_math.a 

style:
	cp ../materials/linters/.clang-format .
	clang-format -n s21_math_functions/*.c  s21_math_tests/*.c s21_math_tests/*.h
