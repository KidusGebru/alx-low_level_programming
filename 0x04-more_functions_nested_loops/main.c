#include "main.h"
#include <stdio.h>

int main(void)
{
	printf("%c: %d\n", 'A', _isupper('A'));
	printf("%c: %d\n", 'b', _isupper('b'));
	printf("%c: %d\n", ';', _isupper(';'));
	return(0);
}
