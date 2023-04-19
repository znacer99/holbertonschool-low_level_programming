#include <stdio.h>
#include <stdarg.h>
#include "stdlib.h"
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
va_list args;
const char *p = format;
char *s;
int i, arg_int;
char arg_char;
va_start(args, format);
while (p && *p)
{
if (*p == 'c'
{
arg_char = va_arg(args, int);
printf("%c", arg_char);
}
else if (*p == 'i')
{
arg_int = va_arg(args, int);
printf("%d", arg_int);
}
else if (*p == 'f')
{
double arg_double = va_arg(args, double);
printf("%f", arg_double);
}
else if (*p == 's')
{
s = va_arg(args, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
}
p++;
if (*p)
{
if (*p == 'c' || *p == 'i' || *p == 'f' || *p == 's')
printf(", ");
}
}
printf("\n");
va_end(args);
}
