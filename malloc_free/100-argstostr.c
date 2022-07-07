#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates the arguments of the function.
 * @ac: The arguments counter.
 * @av: The arguments vector.
* Return: The string modified.
 */


char *argstostr(int ac, char **av)
{
	int i, j, len_aux, k;
	int len = 0;
	char *ptr;
	
	if (ac == 0 || av == NUL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	ptr = malloc(sizeof(char) * (len + ac + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len_aux = strlen(av[i]);
	}

	for (i = 0; i < ac; i++)
	{
		len_aux = strlen(av[i]);
		for (j = 0; j < len_aux; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	return (ptr);
}
