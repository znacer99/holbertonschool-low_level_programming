#include <stdio.h>

/**
 * main - prints argv 0 (its name)
 * @argc: the number of command line arguments
 * @argv: an array that contains the command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
