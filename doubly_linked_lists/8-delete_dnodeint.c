#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index of a linked list
 *@head: a pointer to pointer
 *@index: an unsigned int
 *Return: (1)
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	if (current->next)
		current->next->prev = prev;
	free(current);
	return (1);
}
