#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_all(const char * const format, ...)
{
    va_list args;
    const char *p = format;
    char *s;
    int i, arg_int;
    char arg_char;
    int is_first_arg = 1;

    va_start(args, format);

    while (p && *p)
    {
        if (*p == 'c')
        {
            arg_char = va_arg(args, int);
            printf("%s%c", (is_first_arg ? "" : ", "), arg_char);
            is_first_arg = 0;
        }
        else if (*p == 'i')
        {
            arg_int = va_arg(args, int);
            printf("%s%d", (is_first_arg ? "" : ", "), arg_int);
            is_first_arg = 0;
        }
        else if (*p == 'f')
        {
            double arg_double = va_arg(args, double);
            printf("%s%f", (is_first_arg ? "" : ", "), arg_double);
            is_first_arg = 0;
        }
        else if (*p == 's')
        {
            s = va_arg(args, char *);
            printf("%s%s", (is_first_arg ? "" : ", "), (s == NULL ? "(nil)" : s));
            is_first_arg = 0;
        }
        p++;
    }
    printf("\n");

    va_end(args);
}
