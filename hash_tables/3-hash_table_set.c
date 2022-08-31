#include "hash_tables.h"

/**
 * create_node - Creates a hash table node.
 * @key: the key.
 * @value: the value.
* Return: The node.
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node = calloc(1, sizeof(hash_node_t));

	if (node == NULL)
		return (0);

	node->key = calloc(1024, sizeof(char));
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	node->value = calloc(1024, sizeof(char));
	if (node->value == NULL)
	{
		free(node);
		free(node->key);
		return (0);
	}
	strcpy(node->key, (char *)key);
	strcpy(node->value, (char *)value);

	return (node);
}

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
	hash_node_t *node = NULL, *tmp = NULL;
	char *copy_value;

	if (strcmp(key, "") == 0 || ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			copy_value = strdup(value);
			if (copy_value == NULL)
			{
				fprintf(stderr, "Error: duplicating value\n");
				return (0);
			}
			free(tmp->value);
			tmp->value = copy_value;
			return (1);
		}
		tmp = tmp->next;
	}
	node = create_node(key, value);
	if (node == NULL)
	{
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
