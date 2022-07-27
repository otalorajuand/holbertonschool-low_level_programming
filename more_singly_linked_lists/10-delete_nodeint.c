#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - Deletes a new node in the position of idx.
  * @head: The head node of the list.
  * @index: the position of the node to delete.
 * Return: 1 if it succeeded, -1 if it failed.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	int j = index;
	listint_t *current_node, *deleted_node;

	if (head == NULL)
		return (-1);

	current_node = *head;

	if (index == 0)
	{
		*head = (*(head))->next;
		free(current_node);
		return (1);
	}

	while (i < index - 1 && current_node->next != NULL)
	{
		current_node = current_node->next;
		i++;
		j--;
	}

	if (j != 1)
		return (-1);

	deleted_node = current_node->next;
	current_node->next = current_node->next->next;
	free(deleted_node);

	return (1);
}
