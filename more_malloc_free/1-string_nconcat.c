#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * string_nconcat - function concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string
 * @n: number of bytes to concatenate from s2
 * Return: pointer to the concatenated strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *am;
	unsigned int i, j, len_s1 = 0, len_s2 = 0, total = 0;

	s1 = s1 ? s1 : "";
	s2 = s2 ? s2 : "";
	len_s1 = strlen(s1);
	len_s2 = strlen(s2);
	if (n >= len_s2)
	{
		n = len_s2;
	}
	total = (len_s1 + n + 1);

	am = malloc(total * sizeof(char));
	if (!am)
	{
		return (NULL);
	}
	for (i = 0; i < len_s1; i++)
	{
		am[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		am[i + j] = s2[j];
	}
	am[i + j] = '\0';
	return (am);
}
