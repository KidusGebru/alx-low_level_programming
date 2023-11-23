/**
 * get_endianness - Checks endianness of cpu
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	if (c[0] == 1)
		return (1);
	return (0);
}
