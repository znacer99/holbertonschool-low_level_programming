#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include "stdlib.h"
/**
*print_strings - printing a string argument
*@separator: a pointer
*@n: an unsigned integer
*
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
    va_list args;
    unsigned int i;
    char *str;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        str = va_arg(args, char *);

        if (str == NULL)
            printf("(nil)");
        else
            printf("%s", str);

        if (separator != NULL && i != n - 1)
            printf("%s", separator);
    }

    printf("\n");

    va_end(args);
}
