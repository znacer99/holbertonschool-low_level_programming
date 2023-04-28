#include "lists.h"

/**
 *print_dlistint - printing elements of nodes
 *@h: a pointer
 *Return: value of count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
