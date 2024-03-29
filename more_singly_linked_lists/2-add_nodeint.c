#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_nodeint - adds a new node at the beginning of a listint_t list
  * @head: The head node of the list.
  * @n: The value of the n of the new node.
 * Return: he address of the new element, or NULL if it failed.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
