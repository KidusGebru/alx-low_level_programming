#include "main.h"
#include <stdio.h>

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "world!\n";
	char *ptr;

	printf("S1:%s\n", s1);
	printf("S2:%s\n", s2);
	ptr = _strcat(s1, s2);
	printf("S1:%s\n", s1);
	printf("S2:%s\n", s2);
	printf("PTR:%s\n", ptr);
	return(0);
}
