#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - prints the minimum number of coins to make change for an
 * amount of money.
 * @argc: arguments counter.
 * @argv: arguments vector.
* Return: prints the number of coins
 */

int main(int argc, char *argv[])
{

	int count = 0;
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
		return (0);
	}

	while (n != 0)
	{
		if (n - 25 >= 0)
		{
			n -= 25;
			count++;
		} else if (n - 10 >= 0)
		{
			n -= 10;
			count++;
		} else if (n - 5 >= 0)
		{
			n -= 5;
			count++;
		} else if (n - 2 >= 0)
		{
			n -= 2;
			count++;
		} else if (n - 1 >= 0)
		{
			n -= 1;
		}
	}
	printf("%d\n", count);
	return (0);
}
