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
	printf("%u, ", foreSum);
	printf("%u\n", backSum);

}
