#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * get_nodeint_at_index - finds the indexth node  of a listint_t list
  * @head: The head node of the list.
  * @index: the index..
 * Return: he address of the new element, or NULL if it failed.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node;

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
