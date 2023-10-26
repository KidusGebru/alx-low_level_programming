#include <limits.h>

/**
 * flip_bits - Returns number of bits to flip
 * @n: First unsigned long number
 * @m: Second unsigned long number
 *
 * Return: Number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int p = LONG_MIN;

	while (p > 0)
	{
		if ((p & n) != (p & m))
			i++;
		p = p >> 1;
	}
	return (i);
}

