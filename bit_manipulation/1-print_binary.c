#include "main.h"
#include <math.h>

/**
  * print_binary - prints the binary representation of a number.
  * @n: the number to be converted.
 * Return: Nothing.
  */

void print_binary(unsigned long int n)
{
	unsigned long int aux, counter = 0;

	aux = n;

	if (n == 0)
		printf("0");

	while (aux != 0)
	{
		aux >>= 1;
		counter++;
	}

	while (counter != 0)
	{
		aux = n >> (counter - 1);
		putchar('0' + (aux & 1));
		counter--;
	}
}

