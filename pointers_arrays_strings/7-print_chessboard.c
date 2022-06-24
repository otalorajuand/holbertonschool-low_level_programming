#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: The pointer of the string.
* Return:
 */

void print_chessboard(char (*a)[8])
{
	int i = 8;
	int j;

	while (i < 8)
	{
		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;
		}
		i++;
		printf("\n");
	}
}
