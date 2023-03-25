#include "main.h"
#include <stdio.h>
/**
* print_to_98 - Entry point
* @n: int
* Return: output value
*/
void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
		else
		{
			printf("%i, ", n);
			n++;
		}
	}
		printf("98\n");
}
