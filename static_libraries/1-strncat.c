#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: destination string
* @src: s string
* @n: int the max number of bytes from src
* Return: dest
**/
char *_strncat(char *dest, char *src, int n)
{
	int x, y = 0;

	while (dest[y] != '\0')
		y++;
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[y + x] = src[x];
	return (dest);
}
