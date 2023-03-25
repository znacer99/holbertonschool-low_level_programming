#include "main.h"

/**
* print_line - print line function
* @n: int
* Return: Line
*/

void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
		_putchar('_');
	_putchar('\n');
}
