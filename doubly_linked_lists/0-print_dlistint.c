#include "lists.h"

/**
  * print_dlistint - Prints all the elements of a dlistint_t list.
  * @h: a pointer to the head of the dlistint_t structure.
  * Return: The number of node in the dlistint_t structure.
  */

size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
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
