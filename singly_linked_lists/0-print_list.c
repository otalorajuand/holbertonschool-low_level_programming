#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
  * print_list - Prints all the elements of a list_t list. 
  * @h: a pointer to the head of the list_t structure.
  * Return: The number of node in the list_t structure.
  */

size_t print_list(const list_t *h)
{
	int counter = 0;
	list_t *current = NULL;

	current = malloc(sizeof(list_t));

	if (current == NULL)
	{
		printf("Error\n");
        	return (1);
	}

	current->len = h->len;

	if (h->str != NULL)
		current->str = strdup(h->str);
	else
		current->str = NULL;

	current->next = h->next;

	while (current != NULL)
	{
		counter++;

		if (current->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", current->len, current->str);
		current  = current->next;
	}
	return (counter);
}
