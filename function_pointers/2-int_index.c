#include "function_pointers.h"
/**
* int_index - searches for an integer in an array
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: index of the first element for which the cmp function does not return 0
 *         -1 if no element matches or if size <= 0
 */

int int_index(int *array, int size , int (*cmp)(int))
{
if (array == NULL || cmp == NULL || size <= 0)
return (-1);
for (int i = 0; i < size; i++)
{
if (cmp(array[i] != 0=)
return (i);
}
return (-1);
}
