#include "main.h"

/**
* _strcat - concatenates tow strings
* @src: string
* @dest: string
* Return: dest
**/

char *_strcat(char *dest, char *src)
{
	char *pt = dest;

	while (*pt != '\0')
		pt++;
	while (*src != '\0')
	{
		*pt = *src;
		pt++;
		src++;
	}
	*pt = '\0';
	return (dest);
}
