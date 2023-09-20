#include "main.h"
/**
 * string_toupper - Changes lower to upper case letter in str
 * @str: The string
 *
 * Return: Void
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
			*(str + i) = 'A' + (*(str + i) - 'a');
		i++;
	}
	return (str);
}

