#include "lists.h"

/**
 *sum_dlistint - funtion that prints the sum of all data in a linked list
 *@head: a pointer
 *Return: value of sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
