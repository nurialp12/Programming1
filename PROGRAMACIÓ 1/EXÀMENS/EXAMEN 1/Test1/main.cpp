/*******************************************************/
/*               NÚRIA LAMONJA I PUJOL                 */
/*******************************************************/


/* NÚMEROS ALINEADOS A LA DERECHA */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* TODO: Insert your code here. */

	int fil = 1, i1=1, e=1;

	printf("        ");

	while(i1 <= 9)
	{

		printf("%d   ", i1);

		i1 = i1 + 1;

	}

	printf("\n      ");

	
	while (e <= 19)
	{

		printf("- ", e);

		e = e + 1;

	}

	printf("\n");

	e = 0;
	int prod = 0, x = 1, i = 1;

	
	while (e < 9)
	{
		while (x > e)
		{
			printf("x%d  |", x);
			e = e + 1;
		}

		while (i <= 9)
		{
			prod = e * i;
			if (prod < 10)
			{
				printf("   %d", prod);
			}
			else if (prod >= 10)
			{
				printf("  %d", prod);
			}
			i = i + 1;
			prod = 0;
			
		}
		
		printf("\n");
		x = x + 1;
		i = 1;
	}
	

	system("pause");
	return 0;
}






//
//
// /* NÚMEROS ALINEADOS A LA IZQUIERDA */
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	/* TODO: Insert your code here. */
//
//	int fil = 1, i1=1, e=1;
//
//	printf("          ");
//
//	while(i1 <= 9)
//	{
//
//		printf("%d   ", i1);
//
//		i1 = i1 + 1;
//
//	}
//
//	printf("\n      ");
//
//	
//	while (e <= 20)
//	{
//
//		printf("- ", e);
//
//		e = e + 1;
//
//	}
//
//	printf("\n");
//
//	e = 0;
//	int prod = 0, x = 1, i = 1;
//
//	
//	while (e < 9)
//	{
//		while (x > e)
//		{
//			printf("x%d   |  ", x);
//			e = e + 1;
//		}
//
//		while (i <= 9)
//		{
//			prod = e * i;
//			if (prod < 10)
//			{
//				printf("  %d ", prod);
//			}
//			else if (prod >= 10)
//			{
//				printf("  %d", prod);
//			}
//			i = i + 1;
//			prod = 0;
//			
//		}
//		
//		printf("\n");
//		x = x + 1;
//		i = 1;
//	}
//	
//
//	system("pause");
//	return 0;
//}
//
//
//
//
//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	/* TODO: Insert your code here. */
//
//	int fil = 1, i1 = 1, e = 1;
//
//	printf("          ");
//
//	while (i1 <= 9)
//	{
//
//		printf("%d   ", i1);
//
//		i1 = i1 + 1;
//
//	}
//
//	printf("\n      ");
//
//
//	while (e <= 50)
//	{
//
//		printf("- ", e);
//
//		e = e + 1;
//
//	}
//
//	printf("\n");
//
//	e = 0;
//	int prod = 0, x = 1, i = 1;
//
//
//	while (e < 9)
//	{
//		while (x > e)
//		{
//			printf("x%d   |    ", x);
//			e = e + 1;
//		}
//
//		while (i <= 9)
//		{
//			prod = e * i;
//			if (prod < 10)
//			{
//				printf("%d   ", prod);
//			}
//			else if (prod >= 10)
//			{
//				printf("%d  ", prod);
//			}
//			i = i + 1;
//			prod = 0;
//
//		}
//
//		printf("\n");
//		x = x + 1;
//		i = 1;
//	}
//
//
//
//	system("pause");
//	return 0;
//}
//
//