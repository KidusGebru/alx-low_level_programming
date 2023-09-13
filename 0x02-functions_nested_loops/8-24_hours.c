#include "main.h"
/**
 * jack_bauer - Prints every minute of the day
 *
 * Return: Void
 */
void jack_bauer(void)
{
	int hr, mn;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			if (mn < 9)
			{
				_putchar('0');
				_putchar('0' + hr);
			}
			else
			{
				_putchar('0' + (hr / 10));
				_putchar('0' + (hr - (hr / 10) * 10));
			}
			_putchar(58);
			if (mn < 0)
			{
				_putchar('0');
				_putchar('0' + mn);
			}
			else
			{
				_putchar('0' + (mn / 10));
				_putchar('0' + (mn - (mn / 10) * 10));
			}
			_putchar(10);
		}
	}
}

