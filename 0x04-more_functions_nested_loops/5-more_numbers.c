#include "main.h"
/**
 * more_numbers - Prints numbers from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, n, d0, d1;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n < 10)
			{
				d0 = 0;
				d1 = n % 10;
			}
			else
			{
				d0 = n / 10;
				d1 = n - (n / 10) * 10;
			}

			if (d0 > 0)
				_putchar('0' + d0);
			_putchar('0' + d1);
		}
		_putchar('\n');
	}
}

