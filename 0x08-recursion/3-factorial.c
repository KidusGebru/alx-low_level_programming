#include "main.h"

/**
 * factorial - Returns factorial of a number
 * @n: Input number
 *
 * Return: Factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 )
		return (1);
	return n * factorial(n - 1);
}
