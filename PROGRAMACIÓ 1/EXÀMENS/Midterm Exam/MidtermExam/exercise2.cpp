/*********************************************************************
*                      LAMONJA I PUJOL, NÚRIA                        *
 *********************************************************************/

//OPTION 1: We create the function stringL to use it afterwards;

int stringL(const char string[])
{
	unsigned int len = 0;
	
	while (string[len] != '\0')
	{
		len++;
	}
	
	return len;

}


unsigned int isPalindrome(const char word[])
{
	// TODO: Insert your code here

	int res = 1, lenword = stringL(word);

	/*Números pares*/
	if (lenword %2 == 0)
	{
		for (int i = 0; i <= lenword; i++)
		{
			lenword = lenword - 1;
			if (word[i] != word[lenword])
			{
				res = 0;
				
			}

		}
	}
	
	/*Números impares*/
	else
	{
		int e = lenword / 2;
		for (int i = 0; i <= e; i++)
		{

			lenword = lenword - 1;
			if (word[i] != word[lenword])
			{
				res = 0;
				
			}

		}
	}

	return res;


}


//OPTION 2: Everything is inside the same function

//unsigned int isPalindrome(const char word[])
//{
//	// TODO: Insert your code here
//
//	unsigned int len = 0;
//		
//	while (word[len] != '\0')
//	{
//		len++;
//	}
//
//	int res = 1;
//
//	if (len % 2 == 0)
//	{
//		for (int i = 0; i <= len; i++)
//		{
//			len = len - 1;
//			if (word[i] != word[len])
//			{
//				res = 0;
//
//			}
//
//		}
//	}
//
//	else
//	{
//		int e = len / 2;
//		for (int i = 0; i <= e; i++)
//		{
//
//			len = len - 1;
//			if (word[i] != word[len])
//			{
//				res = 0;
//
//			}
//
//		}
//	}
//
//	return res;
//
//}
