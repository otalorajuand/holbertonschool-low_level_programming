#include "lists.h"

/**
  * delete_dnodeint_at_index - Deletes a new node in the position of idx.
  * @head: The head node of the list.
  * @index: the position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	int j = index;
	dlistint_t *deleted_node;

	if (head == NULL || *head == NULL)
		return (-1);

	deleted_node = *head;

	if (index == 0)
	{
		*head = (*(head))->next;
		if (*head != NULL)
			(*(head))->prev = NULL;
		free(deleted_node);
		return (1);
	}

	while (i < index  && deleted_node != NULL)
	{
		deleted_node = deleted_node->next;
		i++;
		j--;
	}

	if (j != 0)
		return (-1);

	deleted_node->prev->next = deleted_node->next;

	if (deleted_node->next != NULL)
		deleted_node->next->prev = deleted_node->prev;

	free(deleted_node);

	return (1);
}
