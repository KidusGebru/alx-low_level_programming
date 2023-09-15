#include "main.h"
/**
 * print_times_table - Prints the time table
 * @n: Dimension input
 * Return: Void
 */
void print_times_table(int n)
{
	int row, col, res;

	if (n > 15 || n < 0)
		return;
	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			res = row * col;

			if (res <= 99 && col > 0)
				_putchar(32);
			if (res <= 9 && col > 0)
				_putchar(32);
			if (col > 0)
				_putchar(32);
			if (res > 99)
			{
				int intrim = res / 10;

				_putchar('0' + (res / 100));
				_putchar('0' + (intrim - (intrim / 10) * 10));
				_putchar('0' + (res - (res / 10) * 10));
			}
			else if (res > 9)
			{
				_putchar('0' + (res / 10));
				_putchar('0' + (res - (res / 10) * 10));
			}
			else
			{
				_putchar('0' + res);
			}

			if (col < n)
				_putchar(',');
		}
		_putchar(10);
	}
}

