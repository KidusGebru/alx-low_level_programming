/**
 * _isupper - Checks if a given character c is uppercase
 * @c: Input character
 *
 * Return: 1 On success, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

