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

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] != NULL)
		res = ht->array[index]->value;
	else
		return (NULL);

	return (res);
}
