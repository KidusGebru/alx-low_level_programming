#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, j, k;

	k = 49;

	for (n = 48; n <= 57; n++)
	{
		for (j = k; j <= 57; j++)
		{
			if (j != n)
			{
				putchar(n);
				putchar(j);
			}
			if (n != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
		k++;
	}
	putchar(10);
	return (0);
}
