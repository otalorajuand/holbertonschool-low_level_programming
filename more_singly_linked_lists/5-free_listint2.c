#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * free_listint2 - frees a listint_t list.
  * @head: The double pointer to the head node.
 * Return: Nothing.
  */


void free_listint2(listint_t **head)
{
	listint_t *new_node;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		new_node = *head;
		*head = (*(head))->next;
		free(new_node);
	}
	*head = NULL;
}
