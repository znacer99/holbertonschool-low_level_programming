
#include "hash_tables.h"
#include "string.h"

/**
 *hash_table_set - A function that sets a key value pair in the hash table.
 *@ht: a pointer
 *@key: a pointer
 *@value: a pointer
 *Return: (1)
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *temp_node = NULL;
	if (!ht || !key || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp_node = ht->array[index];
	while (temp_node != NULL)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			if (!temp_node->value)
				return (0);
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
