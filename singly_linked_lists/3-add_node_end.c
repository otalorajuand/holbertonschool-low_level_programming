#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: The head node of the list.
  * @str: The value of the str of the new node.
 * Return: he address of the new element, or NULL if it failed.
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *current = NULL;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	current = malloc(sizeof(list_t));
	if (current == NULL)
		return (NULL);

	current = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (current->next != NULL)
		current = current->next;

	current->next = new;

	return (new);
}
