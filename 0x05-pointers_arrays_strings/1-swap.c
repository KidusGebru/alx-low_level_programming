#include "main.h"

/**
 * swap_int - Swaps value of two integer variables
 * @a: First integer
 * @b: Second integer
 *
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int intrim;

	intrim = *a;
	*a = *b;
	*b = intrim;
}
