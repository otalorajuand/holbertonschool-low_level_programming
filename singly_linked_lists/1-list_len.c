#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
  * list_len - Calculates the number of elements in a linked list_t list.
  * @h: a pointer to the head of the list_t structure.
  * Return: The number of node in the list_t structure.
  */

size_t list_len(const list_t *h)
{
	int counter = 0;
	list_t *current = NULL;

	if (h == NULL)
		return (0);

	current = malloc(sizeof(list_t));

	if (current == NULL)
	{
		printf("Error\n");
		return (1);
	}

	current->len = h->len;

	if (h->str != NULL)
		current->str = strdup(h->str);
	else
		current->str = NULL;

	current->next = h->next;

	while (current != NULL)
	{
		counter++;
		current  = current->next;
	}
	return (counter);
}
