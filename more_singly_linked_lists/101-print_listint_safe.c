#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
  * print_listint_safe - Prints all theade elements of a listint_t list.
  * @head: a pointer to the head of the listint_t structure.
  * Return: Theade number of node in the listint_t structure.
  */

size_t print_listint_safe(const listint_t *head)
{
	int counter = 0;

	if (head == NULL)
	{
		exit(98);
	}

	while (head != NULL)
	{
		counter++;
		printf("[%p] %d\n", (void *)head, head->n);
		head  = head->next;
	}
	return (counter);
}
