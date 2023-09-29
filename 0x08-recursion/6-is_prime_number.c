#include "main.h"

/**
 * _prime - Decides if number is prime
 * @n: Input number
 * @i: Iteration counter
 *
 * Return: 1 if n is prime; 0 otherwise
 */

int _prime(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (i >= n - 1)
		return (1);
	return (_prime(n, ++i));
}

/**
 * is_prime_number - Entry to a recursive function _prime
 * @n: Input number
 *
 * Return: 1 if n is prime; 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (_prime(n, 2));
}
