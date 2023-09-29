#include "main.h"

/**
 * _pow_recursion - Returns a number raised to power
 * @x: Number
 * @y: Power
 *
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
