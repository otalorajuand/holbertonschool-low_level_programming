#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of the hash table
* Return: a pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *res = NULL;
	int i;

	res = calloc(1, sizeof(hash_table_t));

	if (res == NULL)
		return (NULL);

	res->size = size;
	res->array = calloc(size, sizeof(hash_node_t *));

	if (res->array == NULL)
	{
		free(res);
		return (NULL);
	}

	for (i = 0; i < (int)size; i++)
	{
		res->array[i] = NULL;
	}

	return (res);
}
