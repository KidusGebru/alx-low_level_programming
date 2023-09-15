/**
 * _isdigit - Checks if a given character c is a decimal digit
 * @c: Input character
 *
 * Return: 1 On success, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

