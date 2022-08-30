#include "hash_tables.h"

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int res = 0;

	res = hash_djb2(key) % size;

	return (res);
}
