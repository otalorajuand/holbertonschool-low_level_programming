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

	current = *head;

	while (current != NULL)
	{
		new_node = current->next;
		free(current);
		current = new_node;
	}
}
