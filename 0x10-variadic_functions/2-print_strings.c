#include <stdarg.h>
#include <stdio.h>

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
	char *arg;

	va_start(arg_ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		arg = va_arg(arg_ptr, char *);
		if (arg != NULL)
		{
			printf("%s %s\n", arg, separator);
		}
		/*

		if (separator != NULL)
			printf("%s%s", str, separator);
		else
			printf("%s", str);*/
	}
	printf("%s\n", va_arg(arg_ptr, char *));
}
