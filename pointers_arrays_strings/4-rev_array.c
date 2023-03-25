#include "main.h"

/**
* reverse_array - reverses the content of an array of integers
* @a: array
* @n:  is the number of elements of the array
**/

void reverse_array(int *a, int n)
{
	int i;
	int c;

	for (i = 0; i < n--; i++)
	{
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
