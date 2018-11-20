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
	for (int i = 0; i <= 8; ++i) {
		printBits(i);
	}

	system("pause");
	return 0;
}
