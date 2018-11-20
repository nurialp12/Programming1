#include <stdio.h>
#include <stdlib.h>

template<typename T>
void printBits(T value, unsigned char numBits = 8)
{
	printf("bits: ");
	unsigned int sizeInBits = sizeof(T) * 8;
	for (unsigned int i = 0; i < numBits; ++i)
	{
		unsigned int bitIndex = numBits + sizeInBits - i - 1;
		unsigned char bit = (value >> bitIndex) & 1U;
		printf("%u ", bit);
	}
	printf("\n");
}

int main()
{
	// Print the bits of numbers from 0 to 8
	unsigned int a = 5;
	unsigned int b = 7;

	unsigned int c1 = a & b; //AND (multiplicar)
	unsigned int c2 = a | b; //OR (sumar)
	unsigned int c3 = a ^ b; //XOR (diferents ==1, iguals ==0. P.EX: 0101 ^ 0011 = 0110)
	unsigned int c41 = ~(a), c42 = ~(b), c43 = ~(a & b), c44 = ~(a | b), c45 = ~(a ^ b); //NEGATION

	unsigned int x = 45;
	unsigned int y = x << 1; //move the numbers 1 place to the left
	unsigned int z = y >> 2; //movethe numbers 2 place to the right

	unsigned int q1 = 1 >> 5;
	unsigned int q2 = ~(1 << 3);

	unsigned int i = ((1<<3) | (1<<5)) & (1<<5);
	unsigned int i1 = 0;
	unsigned int i2 = 1<<3;
	unsigned int i3 = (1 << 3) | (1 << 5);
	unsigned int i4 = i3 & (1 << 5);

	unsigned int renderFlags = 1 << 2 | 1 << 1 | 1;

	unsigned int rf = ~((~(0)) ^ renderFlags | 1);
	unsigned int rf1 = ~((~(0)) ^ rf | 1 << 1);

	unsigned int p = renderFlags & 1 != 0;
	unsigned int p1 = renderFlags & 1;
	unsigned int p2 = p1 != 0;

		

	printBits(a);
	printBits(b);
	printBits(c1);
	printBits(c2);
	printBits(c3);

	printf("\n\n");

	printBits(c41);
	printBits(c42);
	printBits(c43);
	printBits(c44);
	printBits(c45);

	printf("\n\n");

	printBits(x);
	printBits(y);
	printBits(z);

	printf("\n\n");

	printBits(q1);
	printBits(q2);
	
	printf("\n\n");
	printf("\n\n");

	printBits(i);
	printBits(i1);
	printBits(i2);
	printBits(i3);
	printBits(i4);


	printf("\n\n");
	printf("\n\n");

	printBits(renderFlags);

	printf("\n\n");

	printBits(rf);
	printBits(rf1);

	printf("\n\n");

	printBits(p);
	printBits(p);
	printBits(p);
	
	printf("\n\n");
	printf("\n\n");

	system("pause");
	return 0;
}
