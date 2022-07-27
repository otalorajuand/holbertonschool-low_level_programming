

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - Inserts a new node in the position of idx.
  * @head: The head node of the list.
  * @idx: the index.
  * @n: the value of the new node
 * Return: he address of the new element, or NULL if it failed.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current_node;
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	current_node = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (i < idx - 1 && current_node->next != NULL)
	{
		current_node = current_node->next;
		i++;
	}

	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
