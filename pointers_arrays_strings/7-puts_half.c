#include "main.h"
#include "string.h"
/**
* puts_half - print half
* @str: string
*
**/
void puts_half(char *str)
{
int l = strlen(str);
int x, y;
if (l % 2 == 0)
x = l / 2;
else
x = (l + 1) / 2;
for (y = x; y < l; y++)
{
_putchar(str[y]);
}
_putchar('\n');
}
