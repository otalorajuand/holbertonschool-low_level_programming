#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: The pointer of the double array.
* Return:
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j;

	while (i < 8)
	{
		j = 0;

		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}
