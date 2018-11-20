/*********************************************************************
 *                     LAMONJA I PUJOL, NÚRIA                        *
 *********************************************************************/

/*
NOTE: The first dimension corresponds to the rows, and the second
      one correspond to the colums. So to access element at row 3
	  and column 5 you would write something like board[3][5].
*/
unsigned int countCompleteLines(int board[10][10])
{
	// TODO: Insert your code here

	int r = 0, c = 0, comprow = 0, n=0;

	for (r; r < 10; r++)
	{
		for (c; c < 10; c++)
		{
			if(board[r][c] == 1)
			{ 
				n = n + 1;

			}

		}

		if (n == 10)
		{
			comprow = comprow + 1;

		}
		n = 0;
		c = 0;
	}



	return comprow;
}
