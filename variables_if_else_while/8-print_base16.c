#include <stdio.h>
/**
* main -Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;
char c ;
while (n < 9)
{
putchar(n);
n++;
}
for (c = 'A' ; c <= 'F' ; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
