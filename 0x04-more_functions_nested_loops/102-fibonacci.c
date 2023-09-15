#include <stdio.h>
/**
 * main - Prints the first 50 fibonacci numbers
 *
 * Return: void
 */
int main(void)
{
	int i;
	unsigned long fib[50];

	fib[0] = 1;
	fib[1] = 2;

	printf("%ld, %ld, ", fib[0], fib[1]);
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%ld", fib[i]);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}

