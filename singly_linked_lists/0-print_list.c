#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
  * print_list - Prints all the elements of a list_t list.
  * @h: a pointer to the head of the list_t structure.
  * Return: The number of node in the list_t structure.
  */

size_t print_list(const list_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);


	while (h != NULL)
	{
		counter++;

		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h  = h->next;
	}
	return (counter);
}
