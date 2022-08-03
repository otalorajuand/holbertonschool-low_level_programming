#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  * @head: The pointer to the head node.
 * Return: Nothing.
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
