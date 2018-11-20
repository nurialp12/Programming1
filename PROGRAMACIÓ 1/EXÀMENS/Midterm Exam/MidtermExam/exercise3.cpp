/*********************************************************************
*                      LAMONJA I PUJOL, NÚRIA                        *
*********************************************************************/

unsigned int sumDivisiblesBy5InRange(int begin, int end)
{
	// TODO: Insert your code here

	int ini = begin, sum = 0;
	while (ini <= end) 
	{
		if (ini % 5 == 0)
		{
			sum = ini + sum;
		}

		ini++;

	}



	return sum;
}
