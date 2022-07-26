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

		printf("%d\n", current->n);
		current  = current->next;
	}
	return (counter);
}
