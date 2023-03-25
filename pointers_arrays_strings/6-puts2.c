#include "main.h"
#include "string.h"
/**
* puts2 - pair numbers only
* @str: string
*
**/
void puts2(char *str)
{
int x;
int l = strlen(str);
for (x = 0; x < l; x += 2)
_putchar (str[x]);
_putchar ('\n');
}

