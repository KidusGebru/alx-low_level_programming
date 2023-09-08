#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, j, k, k2, l, m, m2;

	k = k2 = 49;
	m = m2 = 50;

	for (n = 48; n <= 55; n++)
	{
		for (j = k; j <= 56; j++)
		{
			for (l = m; l <= 57; l++)
			{
				if (!(j == n && l == j && l == n))
				{
					putchar(n);
					putchar(j);
					putchar(l);

					if (!(n == 55 && j == 56 && l == 57))
					{
						putchar(44);
						putchar(32);
					}
				}
			}
			m++;
			if (m > 57)
			{
				m = ++m2;
			}
		}
		k++;
		if (k > 56)
		{
			k = ++k2;
		}
	}
	putchar(10);
	return (0);
}
