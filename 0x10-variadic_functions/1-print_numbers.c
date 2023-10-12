#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints all numbers in argumnet separated by some char
 * @separator: Separator character
 * @n: Total number of arguments
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i;

	va_start(arg_ptr, n);
	for (i = 0; i < n - 1; i++)
	{
		if (separator != NULL)
			printf("%d%s", va_arg(arg_ptr, int), separator);
		else
			printf("%d", va_arg(arg_ptr, int));
	}
	printf("%d\n", va_arg(arg_ptr, int));
}
