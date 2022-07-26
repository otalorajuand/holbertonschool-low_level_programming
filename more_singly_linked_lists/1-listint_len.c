#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
  * listint_len - Calculates the number of elements in a linked listint_t list.
  * @h: a pointer to the head of the listint_t structure.
  * Return: The number of node in the listint_t structure.
  */

size_t listint_len(const listint_t *h)
{
	int counter = 0;
	listint_t *current = NULL;

	if (h == NULL)
		return (0);

	current = malloc(sizeof(listint_t));

	if (current == NULL)
	{
		printf("Error\n");
		return (1);
	}

	current->n = h->n;
	current->next = h->next;

	while (current != NULL)
	{
		counter++;
		current  = current->next;
	}
	return (counter);
}
