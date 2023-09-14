#include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long fib[50], sum;

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < 32; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < 32; i++)
	{
		if (fib[i] % 2 == 0)
			sum += fib[i];
	}
	printf("%ld\n", sum);
	return (0);
}

