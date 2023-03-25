#include "main.h"
#include "string.h"
/**
* rev_string - reversing a string
* @s: a string
*
**/
void rev_string(char *s)
{
int len = strlen(s);
int x = 0, z = len - 1;
char tou;
while (x < z)
{
tou = s[x];
s[x] = s[z];
s[z] = tou;
x++;
z--;
}
}

