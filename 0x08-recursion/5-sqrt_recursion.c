#include "main.h"

/**
 * _sqrt - Returns natural square root of a number
 * @n: Input number
 * @i: Iteration counter
 *
 * Return: Natural square root of n or -1
 */

int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt(n, ++i));
}

/**
 * _sqrt_recursion - Entry to a recursive function _sqrt
 * @n: Input number
 *
 * Return: Natural square root of n or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
