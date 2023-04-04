#include <stdio.h>
/**
* main - prints each argumet it receives in a single line
* @argv: an array containing the programm command line arguments
* @argc: N of command line arguments
* Return: (0 - Success)
*/
int main(int argc, char *argv[])
{
int i = 0;
while (i < argc)
printf("%s\n", argv[i++]);
return (0);
}
