#include <stdio.h>
/**
*main -Entry point
*
*Return: Always 0 (success)
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
return (0);
}

