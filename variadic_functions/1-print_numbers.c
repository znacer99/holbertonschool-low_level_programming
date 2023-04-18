#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - a function that prints the total number of arguments
 *@separator: a pointer
 *@n: an integer
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int num;

	va_start(args, n);
	while (i < n)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
