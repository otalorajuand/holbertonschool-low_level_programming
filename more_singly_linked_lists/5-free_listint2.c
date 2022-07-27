#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * free_listint_2 - frees a listint_t list.
  * @head: The double pointer to the head node.
 * Return: Nothing.
  */


void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *new_node;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		new_node = current;
		current = current->next;
		free(new_node);
	}
	current = NULL;
}
