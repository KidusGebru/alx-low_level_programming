#include "main.h"

/**
 * binary_to_uint - Converts a binary rep to unsigned int
 * @b: Pointer to string of 1s and 0s
 *
 * Return: Number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[0] == '1')
			num += (1 << i);
		i--;
		b++;
	}
	return (num);
}
