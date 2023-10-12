#include <stdarg.h>

/**
 * sum_them_all - Summs any number of integer arguments
 * @n: Total number of arguments
 *
 * Return: Sum of ...
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_ptr;
	unsigned int i, sum = 0;

	va_start(arg_ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arg_ptr, int);

	return (sum);
}
