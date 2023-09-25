#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the diagonal sum of a square matrix
 * @a: Pointer to matrix
 * @size: sizes of matrix
 *
 * Return: Always void
 */

void print_diagsums(int *a, int size)
{
	int i, tot;
	unsigned int foreSum = 0, backSum = 0;

	if (size == 1)
	{
		printf("%u, %u\n", *(a + 0), *(a + 0));
	}
	else if (size == 0)
	{
		printf("%d, %d\n", 0, 0);
	}
	else
	{
		tot = size * size;
		for (i = 0; i < tot; i++)
		{
			if ((i < tot - 1 && i > 0) && (i % (size - 1) == 0))
			{
				backSum += *(a + i);
			}

			if (i % (size + 1) == 0)
			{
				foreSum += *(a + i);
			}
		}
		printf("%u, %u\n", foreSum, backSum);
	}
}
