#include "main.h"
/**
* print_rev - print in reverse
* @s: stirng
* Return: print string in reverse to stdout
*/
void print_rev(char *s)
{
int i = 0;
while (s[i] != '\0')
i++;
for (i--; i >= 0; i--)
_putchar(s[i]);
_putchar('\n');
}
