#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list
  * @head: The head node of the list.
  * @n: The value of the n of the new node.
 * Return: he address of the new element, or NULL if it failed.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *current = NULL;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	current = *head;
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;

	new->prev = current;
	current->next = new;
	return (new);
}
