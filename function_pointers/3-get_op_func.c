#include <stdio.h>
#include <stdlib.h>


/**
 * get_op_func - A function that selects the correct operator.
 * @s: The char that defines the operation
 * return: This function returns a pointer to the function that
 * corresponds to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
	};
	int i;

}
