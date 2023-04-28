#include "hash_tables.h"

/**
 *hash_table_create - creates a hash table
 *@size: an unsigned long integer
 *Return: value of hash_table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	return (hash_table);
}
