#include <stdio.h>
#include <math.h>

/**
 * main - Prints the largest prime factor of a given number
 * Return: 0 Always
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long i, sq, largest = 2;

	while (n % 2 == 0)
	{
		n = n / 2;
	}

	sq = sqrt(n);

	for (i = 3; i <= sq; i = i + 2)
	{
		while (n % i == 0)
		{
			if (largest < i)
				largest = i;
			n = n / i;
		}
	}
	if (n > 2 && largest < n)
		largest = n;

	printf("%ld\n", largest);
	return (0);
}
