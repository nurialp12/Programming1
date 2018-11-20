#include <stdio.h>
#include <stdlib.h>

// NOTE: Uncomment one (and ONLY ONE) of these lines, to test an exercise
//#define COMPILE_EXERCISE_1
//#define COMPILE_EXERCISE_2
//#define COMPILE_EXERCISE_3
//#define COMPILE_EXERCISE_4
//#define COMPILE_EXERCISE_5
//#define COMPILE_EXERCISE_6

#if defined(COMPILE_EXERCISE_1)

/**
 * Create a function that receives no arguments and returns no value and just prints "Hello World".
 */

// Here I define the function
void printHelloWorld()
{
	printf("Hello World\n");
}

int main()
{
	// Here I call the function
	printHelloWorld();

	system("pause");
	return 0;
}

#endif



#if defined(COMPILE_EXERCISE_2)

/**
 * Create a function that receives a number and returns 1 if the number is even and 0 is the number is odd.
 */

// Here I define the function
// Note that, as I return an integer (0 or 1) the return type is int.
// Note also that the function accepts one parameter, so when I call the function below from the main function, I always pass one argument.
int isEven(int number)
{
	if (number % 2 == 0) // if number is even
	{
		return 1;
	}
	else // if not...
	{
		return 0;
	}
}

int main()
{
	// Here I call the function for a couple of values, first taking its result, and then printing it later

	int res1 = isEven(3);
	printf("The result of isEven(3) is %d\n", res1);

	int res2 = isEven(10);
	printf("The result of isEven(10) is %d\n", res2);

	// I can also call the function directly within printf calls, like this...

	printf("The result of isEven(%d) is %d\n", 123, isEven(123));
	printf("The result of isEven(%d) is %d\n", 2,   isEven(2));
	printf("The result of isEven(%d) is %d\n", 76,  isEven(76));
	printf("The result of isEven(%d) is %d\n", 5,   isEven(5));

	system("pause");
	return 0;
}

#endif


#if defined(COMPILE_EXERCISE_3)

/**
 * Create a function that takes two real numbers as parameters and returns their average value.
 */

// Here I define the function
float average(float number1, float number2)
{
	return (number1 + number2) * 0.5f;
}

int main()
{
	// Calling the function average (example 1)
	float res1 = average(5.0f, 4.0f);
	printf("The average of %f and %f is %f\n", 5.0f, 4.0f, res1);

	// Calling the function average (example 2)
	float a = 234.0f;
	float b = 76.0f;
	float res2 = average(a, b);
	printf("The average of %f and %f is %f\n", a, b, res2);

	// Calling the function average (example 3)
	float c = 12.0f;
	float d = 3.0f;
	printf("The average of %f and %f is %f\n", c, d, average(c, d));

	system("pause");
	return 0;
}

#endif



#if defined(COMPILE_EXERCISE_4)

/**
 * Create a function that takes three real numbers as parameters and computes their average value.
 * Instead of returning this value, the function prints it, but it does not return anything.
 */

// Function definition
// Note that the function does not return anything (the return type is void)
void printAverage(float number1, float number2, float number3)
{
	float result = (number1 + number2 + number3) / 3;
	printf("The average of %f, and %f, and %f, is %f\n", number1, number2, number3, result);
}

int main()
{
	// Calling the function printAverage (example 1)
	printAverage(5.0f, 4.0f, 1.0f);

	// Calling the function printAverage (example 2)
	float a = 234.0f;
	float b = 76.0f;
	float c = 2;
	printAverage(a, b, c);

	system("pause");
	return 0;
}

#endif



#if defined(COMPILE_EXERCISE_5)

/**
 * Create a function that receives a signed integer and returns 1 if it is positive, or 0 if it is negative.
 */

 // Function definition
int isPositive(int n)
{
	if (n >= 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	// Calling the function isPositive (example 1)
	printf("The result of isPositive(%d) is %d\n", 3, isPositive(3));

	// Calling the function isPositive (example 2)
	int a = -34;
	printf("The result of isPositive(%d) is %d\n", a, isPositive(a));

	// Calling the function isPositive (example 3)
	int num = 65;
	int result = isPositive(num);
	printf("The result of isPositive(%d) is %d\n", num, result);

	system("pause");
	return 0;
}

#endif



#if defined(COMPILE_EXERCISE_6)

/**
 * Create two functions:
 * - One called "ask" that just request a number and returns it.
 * - The other function, called "triple", receives a number and returns the triple of that number.
 * - The main program has to obtain a value with "ask" and then compute its triple with "triple".
 */

 // Function definition
float ask()
{
	float result;
	printf("Type a number: ");
	scanf_s("%f", &result);
	return result;
}

// Function definition
float triple(float number)
{
	return 3 * number;
}

int main()
{
	// Call ask
	float num = ask();

	// Call triple
	float result = triple(num);

	// Print the result
	printf("The triple of %f is %f\n", num, result);

	system("pause");
	return 0;
}

#endif
