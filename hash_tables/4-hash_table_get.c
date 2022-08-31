#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: the hash table
 * @key: the key of the element to find.
* Return: he value associated with the element, or NULL if key couldn’t be
* found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = 0;
	char *res = NULL;
	int flag = 0;
	hash_node_t *current = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
	{
		current = ht->array[index];
		while (flag == 0)
		{
			if (strcmp(current->key, key) == 0)
			{
				res = current->value;
				flag = 1;
			}
			current = current->next;
		}
	}
	else
		return (NULL);

	return (res);
}
