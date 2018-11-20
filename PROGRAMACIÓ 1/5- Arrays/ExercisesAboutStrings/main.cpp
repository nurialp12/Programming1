#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main()
{
	// Declaration of a few strings (arrays of characters)
	// All these strings end with the special character '\0'.
	// Have a look at the slides...
	char string1[] = "Hello";
	char string2[] = "Hello";
	char string3[] = "What's up Mike!";
	char string4[] = "abcde";
	char string5[] = "edcba";


	////////////////////////////////////////////////////////////////////////////////////////
	// Testing stringLength
	////////////////////////////////////////////////////////////////////////////////////////

	unsigned int string1Length = stringLength(string1);
	unsigned int string3Length = stringLength(string3);
	printf("The length of '%s' is %u\n", string1, string1Length);
	printf("The length of '%s' is %u\n", string3, string3Length);


	////////////////////////////////////////////////////////////////////////////////////////
	// Testing areEquals
	////////////////////////////////////////////////////////////////////////////////////////

	if (areEquals(string1, string2) == 1)
	{
		printf("'%s' and '%s' are the same\n", string1, string2);
	}
	else
	{
		printf("'%s' and '%s' are different\n", string1, string2); // Code will never reach here
	}

	if (areEquals(string1, string3) == 1)
	{
		printf("'%s' and '%s' are the same\n", string1, string3); // Code will never reach here
	}
	else
	{
		printf("'%s' and '%s' are different\n", string1, string3);
	}


	////////////////////////////////////////////////////////////////////////////////////////
	// Testing areEqualsReverse
	////////////////////////////////////////////////////////////////////////////////////////

	if (areEqualsReverse(string1, string2) == 1)
	{
		printf("'%s' and '%s' are the same if read reversely\n", string1, string2); // Code will never reach here
	}
	else
	{
		printf("'%s' and '%s' are different if read reversely\n", string1, string2);
	}

	if (areEqualsReverse(string4, string5) == 1)
	{
		printf("'%s' and '%s' are the same if read reversely\n", string4, string5);
	}
	else
	{
		printf("'%s' and '%s' are different if read reversely\n", string4, string5); // Code will never reach here
	}


	////////////////////////////////////////////////////////////////////////////////////////
	// Testing containsChar
	////////////////////////////////////////////////////////////////////////////////////////

	if (containsChar(string1, 'H') == 1)
	{
		printf("'%s' contains character '%c'\n", string1, 'H');
	}
	else
	{
		printf("'%s' does not contain character '%c'\n", string1, 'H'); // Code will never reach this point
	}
	if (containsChar(string4, 'x') == 1)
	{
		printf("'%s' contains character '%c'\n", string4, 'x');
	}
	else
	{
		printf("'%s' does not contain character '%c'\n", string4, 'x'); // Code will never reach this point
	}


	////////////////////////////////////////////////////////////////////////////////////////
	// Testing stringCopy
	////////////////////////////////////////////////////////////////////////////////////////

	char stringDest[20];

	stringCopy(string1, stringDest); // Copy string1 into stringDest
	if (areEquals(string1, stringDest))
	{
		printf("'%s' and '%s' are the same\n", string1, stringDest);
	}
	else
	{
		printf("'%s' and '%s' are different\n", string1, stringDest); // Code will never reach this point
	}

	system("pause");
	return 0;
}
