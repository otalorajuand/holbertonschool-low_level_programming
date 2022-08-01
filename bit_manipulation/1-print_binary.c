#include "main.h"
#include <math.h>

/**
  * print_binary - prints the binary representation of a number.
  * @n: the number to be converted.
 * Return: Nothing.
  */

void print_binary(unsigned long int n)
{
	int aux, counter = 0, n_bites;

	aux = n_bites = n;

	if (n == 0)
		printf("0");

	while (aux != 0)
	{
		aux >>= 1;
		counter++;
	}

	while (n_bites != 0)
	{
		aux = n >> (counter - 1);
		printf("%d", aux & 1);
		counter--;
		n_bites >>= 1;
	}
}

