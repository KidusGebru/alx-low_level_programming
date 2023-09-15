#include "main.h"
/**
 * times_table - Prints the time table
 *
 * Return: Void
 */
void times_table(void)
{
	int row, col, res;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			res = row * col;

			if (res <= 9 && col > 0)
				_putchar(32);
			if (col > 0)
				_putchar(32);
			if (res > 9)
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res - (res / 10) * 10));
			}
			else
			{
				_putchar('0' + res);
			}

			if (col < 9)
				_putchar(',');
		}
		_putchar(10);
	}
}

