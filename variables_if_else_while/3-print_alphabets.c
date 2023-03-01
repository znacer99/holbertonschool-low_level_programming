#include <stdio.h>

int main(void)
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
for (c = 'a' ; c <= 'Z' ; c++)
putchar(c);
putchar('\n');
return (0);
}
