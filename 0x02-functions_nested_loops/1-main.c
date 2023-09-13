#include "main.h"
#include <limits.h>

int main(void)
{
	int r;
	r = 2;
	_putchar('0' + r);
	_putchar(32);
	print_last_digit(r);
	_putchar(10);
	r = -1024;
	_putchar('0' + r);
	_putchar(32);
	print_last_digit(r);
	_putchar(10);
	r = INT_MAX;
	_putchar('0' + r);
	_putchar(32);
	print_last_digit(r);
	_putchar(10);
	r = INT_MIN;
	_putchar('0' + r);
	_putchar(32);
	print_last_digit(r);
	_putchar(10);
	r = 1;
	_putchar('0' + r);
	_putchar(32);
	print_last_digit(r);
	_putchar(10);

}
