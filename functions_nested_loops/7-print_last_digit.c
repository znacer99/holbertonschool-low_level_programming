#include "main.h"

/**
* print_last_digit -Entry point
*
*
*/

int print_last_digit(int r)
{
int last_digit = r % 10;
_putchar('0' + last_digit);
return (last_digit);
}
