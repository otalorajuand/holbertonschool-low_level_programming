#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of the hash table
* Return: a pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *res = NULL;

	res = malloc(sizeof(hash_table_t));

	if (res == NULL)
		return (NULL);

	res->size = size;
	res->array = malloc(sizeof(hash_node_t) * size);

	if (res->array == NULL)
		return (NULL);

	return (res);
}
