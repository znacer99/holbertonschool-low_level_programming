#include "main.h"

/**
*times_table - times table from zero to nine
*
*/

void times_table(void)
{
	int n, m, r;

	for (n = 0; n <= 9; n++)
	{
		_putchar ('0');

		for (m = 1; m <= 9; m++)
		{
			_putchar (',');
			_putchar (' ');

			r = n * m;
		if (r <= 9)
			_putchar (' ');
		else
			_putchar ((r / 10) + '0');
		_putchar ((r % 10) + '0');
		}
	_putchar ('\n');

	}
}
