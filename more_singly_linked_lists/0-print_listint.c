#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
  * print_listint - Prints all the elements of a listint_t list.
  * @h: a pointer to the head of the listint_t structure.
  * Return: The number of node in the listint_t structure.
  */

size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		printf("(nil)\n");
		return (0);
	}

	while (h != NULL)
	{
		counter++;
		printf("%d\n", h->n);
		h  = h->next;
	}
	return (counter);
}
