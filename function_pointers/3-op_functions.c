#include <stdio.h>
#include <stdlib.h>


/**
 * op_add - A function that adds two integers.
 * @a: the first intenger.
 * @b: the second integer.
 * return: the sum of the integers in an int.
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - A function that substract two integers.
 * @a: the first intenger.
 * @b: the second integer.
 * return: the substraction of the integers in an int.
 */


int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - A function that multiplies two integers.
 * @a: the first intenger.
 * @b: the second integer.
 * return: the multiplication of the integers in an int.
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - A function that divides two integers.
 * @a: the first intenger.
 * @b: the second integer.
 * return: the divition of the integers in an int.
 */

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	} else
	{
		printf("Error\n")
		exit(100);
	}
}

/**
 * op_mod - A function that calculates the residue of the division of
 * two integers.
 * @a: the first intenger.
 * @b: the second integer.
 * return: the residue of the division of the integers in an int.
 */

int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	} else
	{
		printf("Error\n")
		exit(100);
	}

}
