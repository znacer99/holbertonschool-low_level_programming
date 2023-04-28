#include "lists.h"

/**
 *get_dnodeint_at_index - a function that returns the nth node in a linked list
 *@head: a pointer to pointer
 *@index: an unsigned integer
 *Return: value of current
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;

	while (current != NULL && index > 0)
	{
		current = current->next;
		index--;
	}
	return (current);
}
