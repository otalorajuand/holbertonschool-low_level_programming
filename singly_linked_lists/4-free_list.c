#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * free_list - frees a list_t list.
  * @head: The pointer to the head node.
 * Return: Nothing.
  */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
