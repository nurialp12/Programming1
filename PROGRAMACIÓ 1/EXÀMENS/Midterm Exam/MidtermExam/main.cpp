#include <stdio.h>
#include <stdlib.h>
#include "UnitTest.h"
#include "exercises.h"

int main()
{
	// Exercise 1
	int board1[10][10]{
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
	};
	int board2[10][10]{
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
	};
	int board3[10][10]{
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{1,1,1,1,1,1,1,0,0,0},
		{1,1,1,1,0,0,1,1,0,0},
		{1,1,1,1,1,0,1,1,0,0},
		{1,1,1,0,1,1,0,1,0,1},
		{1,1,0,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
	};
	int board4[10][10]{
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,1,0,0,0,0,0,1,0,0},
		{1,1,0,0,0,1,0,1,0,0},
		{1,1,1,0,1,1,1,1,0,0},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
		{1,1,1,1,1,1,1,1,1,1},
	};
	TEST("Exercise 1 - test (a)", countCompleteLines(board1) == 0);
	TEST("Exercise 1 - test (b)", countCompleteLines(board2) == 10);
	TEST("Exercise 1 - test (c)", countCompleteLines(board3) == 1);
	TEST("Exercise 1 - test (d)", countCompleteLines(board4) == 4);

	// Exercise 2
	TEST("Exercise 2 - test (a)", isPalindrome("abrakadabra") == 0);
	TEST("Exercise 2 - test (b)", isPalindrome("reconocer") == 1);
	TEST("Exercise 2 - test (c)", isPalindrome("word") == 0);
	TEST("Exercise 2 - test (d)", isPalindrome("abba") == 1);

	// Exercise 3
	TEST("Exercise 3 - test (a)", sumDivisiblesBy5InRange(0, 15) == 5 + 10 + 15);
	TEST("Exercise 3 - test (b)", sumDivisiblesBy5InRange(-5, 6) == 0);
	TEST("Exercise 3 - test (c)", sumDivisiblesBy5InRange(-8, 26) == 10 + 15 + 20 + 25);
	TEST("Exercise 3 - test (d)", sumDivisiblesBy5InRange(-11, 35) == 15 + 20 + 25 + 30 + 35);

	PRINT_TEST_REPORT();

	system("pause");
	return 0;
}