#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * free_listint - frees a listint_t list.
  * @head: The pointer to the head node.
 * Return: Nothing.
  */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
