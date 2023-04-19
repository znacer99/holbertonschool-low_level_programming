#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    char c, *s;
    float f;
    int arg_int;
    const char *ptr = format;

    va_list arg_list;
    va_start(arg_list, format);

    while (ptr && *ptr)
    {
        switch (*ptr++)
        {
            case 'c':
                c = va_arg(arg_list, int);
                printf("%c", c);
                break;
            case 'i':
                arg_int = va_arg(arg_list, int);
                printf("%d", arg_int);
                break;
            case 'f':
                f = (float) va_arg(arg_list, double);
                printf("%f", f);
                break;

