#include "main.h"
#include <stdio.h>
/**
 * print_sum - Prints sum of natural numbers divisible by 3 or 5 upto 98
 *
 * Return: void
 */
void print_sum(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}

