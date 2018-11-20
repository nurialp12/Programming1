
/*
 * Don't freak out by the way parameters are declared in these functions.
 * In the end, they are arrays. They work exactly the same as in all exercises made at class.
 */

unsigned int stringLength(const char *str)
{
	unsigned int length = 0;
	
	while (str[length] != '\0')
	{
		length++;
	}

	return length;
}

int areEquals(const char *str1, const char *str2)
{
	unsigned int len1 = stringLength(str1);
	unsigned int len2 = stringLength(str2);
	
	if (len1 != len2)
	{
		return 0;
	}

	for (unsigned int i = 0; i < len1; ++i)
	{
		if (str1[i] != str2[i])
		{
			return 0;
		}
	}

	return 1;
}

int areEqualsReverse(const char *str1, const char *str2)
{
	unsigned int len1 = stringLength(str1);
	unsigned int len2 = stringLength(str2);

	if (len1 != len2)
	{
		return 0;
	}

	for (unsigned int i = 0; i < len1; ++i)
	{
		if (str1[i] != str2[len1 - i - 1])
		{
			return 0;
		}
	}

	return 1;
}

int containsChar(const char *str, char c)
{
	unsigned int i = 0;
	
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			return 1;
		}
		++i;
	}

	return 0;
}

void stringCopy(const char *strOrig, char *strDest)
{
	unsigned int i = 0;
	
	while (strOrig[i] != '\0')
	{
		strDest[i] = strOrig[i];
		++i;
	}

	strDest[i] = '\0';
}
