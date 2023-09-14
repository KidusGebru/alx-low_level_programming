#include <stdio.h>
/**
 * main - Prints sum of natural numbers divisible by 3 or 5 upto 98
 *
 * Return: void
 */
void main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}

