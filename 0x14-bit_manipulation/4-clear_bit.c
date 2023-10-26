/**
 * clear_bit - Clears a bit of a given number located at a given index
 * @n: unsigned long number
 * @index: Location of bit to set
 *
 * Return: 1 if worked, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 1;

	if (index > 63)
		return (-1);
	*n = *n & (~(p << index));
	return (1);
}
