#include "variadic_functions.h"
#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"

void print_all(const char *const format, ...)
{
	char c;
	int i;
	float f;
	char *s;
	int printed = 0;
	const char *format_ptr = format;
	va_list args;
	va_start(args, format);
	while (*format_ptr)
	{
		if (*format_ptr == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
			printed = 1;
		}
		else if (*format_ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
			printed = 1;
		}
		else if (*format_ptr == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
			printed = 1;
		}
		else if (*format_ptr == 's')
		{
			s = va_arg(args, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			printed = 1;
		}
		if (*(format_ptr + 1) && printed)
		{
			printf(", ");
			printed = 0;
		}
		format_ptr++;
	}
	printf("\n");
	va_end(args);
}
