/**
 * _islower - Checks if a given character c is lowercase
 * @c: Input character
 *
 * Return: 1 On success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

