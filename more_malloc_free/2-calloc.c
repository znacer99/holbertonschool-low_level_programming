#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _memset - fill memory with cons byte
 * @s: pointer to the memory
 * @b: cons bytes to fill with
 * @n : number of bytes to fill
 * Return: memory filled by cons
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _calloc - function that allocates memory and set to zero
 * @nmemb: the number of elements
 * @size: size of each elements
 * Return: a pointer to allocated memory
 *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;

	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	_memset(ptr, 0, total);
	return (ptr);
}
