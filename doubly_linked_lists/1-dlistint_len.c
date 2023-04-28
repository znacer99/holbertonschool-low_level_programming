#include "lists.h"

/**
 *dlistint_len - printing number of nodes in linked list
 *@h: a pointer
 *Return: value of count
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
