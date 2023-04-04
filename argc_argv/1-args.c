#include <stdio.h>

/**
* main - prints the number of argments passed into it
* @argv: an array containing the programm command line arguments
* @argc: N of command line arguments
* Return: (0 - Success)
*/

int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
(void)argv;
return (0);
}
