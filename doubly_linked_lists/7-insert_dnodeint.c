#include "lists.h"

/**
  * insert_dnodeint_at_index - Inserts a new node in the position of idx.
  * @head: The head node of the list.
  * @idx: the index.
  * @n: the value of the new node
 * Return: he address of the new element, or NULL if it failed.
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	int j = idx;
	dlistint_t *current_node;
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	current_node = *head;
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = current_node;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	while ((i < (idx - 1)) && current_node->next != NULL)
	{
		current_node = current_node->next;
		i++;
		j--;
	}

	if (j != 1)
		return (NULL);

	new_node->next = current_node->next;
	new_node->prev = current_node->prev;
	current_node->next->prev = new_node;
	current_node->next = new_node;

	return (new_node);
}
