#include "main.h"
/**
 * reverse_array - Reverses order of elements of an array
 * @a: The array
 * @n: Number of elements of the array
 *
 * Return: Void
 */

void reverse_array(int *a, int n)
{
	int i, num, len;

	len = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		if (i == len - i)
			break;
		num = *(a + i);
		*(a + i) = *(a + (len - i));
		*(a + ((n - 1) - i)) = num;
	}
}

