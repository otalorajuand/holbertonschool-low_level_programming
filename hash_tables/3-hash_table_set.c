#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key of th ht.
 * @value: the value of the ht.
* Return: 1 if it succeeded, 0 otherwise.
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index = 0;
	hash_node_t *node = NULL;

	if (strcmp(key, "") == 0 || ht == NULL)
		return (0);

	node = malloc(sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = strdup((char *)key);
	node->value = strdup((char *)value);

	index = key_index((unsigned char *)key, ht->size);

	if (ht->array[index] == NULL || strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index] = node;
	} else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}

	return (1);
}
