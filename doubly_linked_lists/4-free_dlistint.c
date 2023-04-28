#include "lists.h"

/**
 *free_dlistint - freeing memory allocation of a linked list
 *@head: a pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
