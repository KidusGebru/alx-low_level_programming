#include <stdarg.h>
#include <stdio.h>

/**
 * _ps - Print a string
 * @str: The string
 *
 * Return: Nothing
 */
void _ps(char *str)
{
	char *_str = str;

	if (_str == NULL)
		_str = "(nil)";

	printf("%s", _str);
}

/**
 * print_strings - Prints all strings in argumnet separated by other string
 * @separator: Separator string
 * @n: Total number of arguments
 *
 * Return: Nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i;
	char *_sep = "";

	if (separator != NULL)
		_sep = (char *)separator;

	va_start(arg_ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		_ps(va_arg(arg_ptr, char *));
		printf("%s", _sep);
	}
	_ps(va_arg(arg_ptr, char *));
	va_end(arg_ptr);

	printf("\n");
}
