#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: the hash table to be printed
* Return: Nothing.
 */

void hash_table_delete(hash_table_t *ht)
{
	int i;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return;

	for (i = 0; i < (int)ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			current = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = current;
		}
	}
	free(ht->array);
	free(ht);
}

