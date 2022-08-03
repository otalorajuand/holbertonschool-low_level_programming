#include "lists.h"

/**
  * get_dnodeint_at_index - finds the indexth node  of a dlistint_t list
  * @head: The head node of the list.
  * @index: the index..
 * Return: he address of the new element, or NULL if it failed.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);

	node = head;

	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	return (node);
}
