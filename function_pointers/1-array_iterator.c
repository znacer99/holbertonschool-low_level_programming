#include "function_pointers.h"

/**
 *array_iterator - pointing to a fucntion to manipulate an array
 *@array: a pointer
 *@size: sizeof
 *@action: a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
