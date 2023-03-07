#include "main.h"
#include <stdio.h>
/**
*print_alphabet - prints lowercase alphabet
* Return: 0
*/
void print_alphabet(void);
{
char c;
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
}

