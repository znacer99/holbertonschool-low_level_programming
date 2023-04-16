#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min int of array
 * @max: max int of array
 * Return: pointer to array of int
 */
int *array_range(int min, int max)
{
	int i = 0, total;
	int *array;

	if (!(min <= max))
		return (NULL);
	total = max - min + 1;
	array = malloc(total * sizeof(int));
	if (!array)
		return (NULL);
	while (i < total)
	{
		array[i++] = min;
		min++;
	}
	return (array);
}
