#include "lists.h"


/**
  * dlistint_len - Calculates the number
  * of elements in a linked dlistint_t list.
  * @h: a pointer to the head of the dlistint_t structure.
  * Return: The number of node in the dlistint_t structure.
  */

size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);


	while (h != NULL)
	{
		counter++;
		h  = h->next;
	}
	return (counter);
}
