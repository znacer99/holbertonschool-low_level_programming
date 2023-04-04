#include <stdio.h>
#include <stdlib.h>
/**
* main - prints the product of the multiplication between two numbers
* @argv: an array containing the programm command line arguments
* @argc: N of command line arguments
* Return: 0 on Success, 1 if not given two numbers
*/

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}

