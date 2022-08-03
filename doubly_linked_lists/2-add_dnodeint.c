#include "lists.h"

/**
  * add_dnodeint - adds a new node at the beginning of a dlistint_t list
  * @head: The head node of the list.
  * @n: The value of the n of the new node.
 * Return: he address of the new element, or NULL if it failed.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
	{
		(*(head))->prev = new;
	}

	*head = new;

	return (new);
}
