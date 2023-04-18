#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
*print_numbers - prints a variable number of integers
*@separator: the string to be printed between integers
*@n: the number of integers to print
*
@... : the integers to print
*
*Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
for (i = 0; i < n; i++) {
printf("%d", va_arg(args, int));
if (separator != NULL && i != n - 1) {
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
