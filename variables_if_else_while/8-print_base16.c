#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int n,c ;
while (n < 9)
{
putchar(n);
}
for (c = 'A' ; c <= 'Z' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
