#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list.
  * @head: the double pointer to the head node of the list.
 * Return: the head node’s data (n)
  */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *ptr = NULL;

	if (*head == NULL)
		return (0);

	i = (*(head))->n;
	ptr = *head;
	*head = (*(head))->next;
	free(ptr);

	return (i);
}
