#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * sum_listint - sums the elements of a list.
  * @head: The head node of the list.
 * Return: the sum of the elements of the list, or 0 if its null.
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
