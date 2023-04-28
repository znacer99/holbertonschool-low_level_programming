#include "hash_tables.h"

/**
 *key_index - Get the index of a key in a hash table array
 *@key: a pointer
 *@size: a unsigned long integer
 *Return: value of index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
