#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: the hash table to be printed
* Return: Nothing.
 */

void hash_table_print(const hash_table_t *ht)
{
	int i, flag = 0;
	hash_node_t *current = NULL;

	printf("{");

	for (i = 0; i < (int)ht->size; i++)
	{
		current = ht->array[i];

		while (current != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
