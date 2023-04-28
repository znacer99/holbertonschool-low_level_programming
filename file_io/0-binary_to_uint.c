#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len = 0, sum = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0' && b[len] != 'H')
		len++;

	for (i = 0; i < len; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum += (b[i] - '0') * (1u << (len - i - 1));
		}
		else
		{
			return (0);
		}
	}

	if (b[len] == 'H')
	{
		i = len + 1;
		while (b[i] != '\0')
		{
			if (b[i] != '0')
			{
				return (0);
			}
			i++;
		}
		sum *= 10u;
	}

	return (sum);
}
