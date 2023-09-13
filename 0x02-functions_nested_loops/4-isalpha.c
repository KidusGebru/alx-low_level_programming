/**
 * _isalpha - Checks if a given character c is alphabetic
 * @c: Input character
 *
 * Return: 1 On success, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 45 && c <= 90))
		return (1);
	else
		return (0);
}

