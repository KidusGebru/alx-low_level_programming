#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: unsigned long number
 * @index: 0 based index
 *
 * Return: Bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int p = 1;

	if (index > 63)
		return (-1);
	if ((n & (p << index)) > 0)
		return (1);
	return (0);
}
