#include <stdarg.h>
#include <stdio.h>

/**
 * _pc - Print a character
 * @next: Next argument va_list
 *
 * Return: Nothing
 */
void _pc(va_list next)
{
	printf("%c", va_arg(next, int));
}

/**
 * _pi - Print an integer
 * @next: Next argument va_list
 *
 * Return: Nothing
 */
void _pi(va_list next)
{
	printf("%d", va_arg(next, int));
}

/**
 * _pf - Print a float value
 * @next: Next argument va_list
 *
 * Return: Nothing
 */
void _pf(va_list next)
{
	printf("%f", va_arg(next, double));
}

/**
 * _ps - Print a string
 * @next: Next argument va_list
 *
 * Return: Nothing
 */
void _ps(va_list next)
{
	char *str = va_arg(next, char *);

	if (str == NULL)
		str = "(nil)";

	printf("%s", str);
}

/**
 * print_all - Prints arguments
 * @format: Strin containing types of arguments
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list arg_ptr;
	unsigned int i = 0, j = 0;
	char *types = "cifs";
	char *separator = "";

	void (*f[])(va_list next) = {_pc, _pi, _pf, _ps};

	va_start(arg_ptr, format);
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j] != '\0')
		{
			if (format[i] == types[j])
			{
				printf("%s", separator);
				f[j](arg_ptr);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(arg_ptr);
}
