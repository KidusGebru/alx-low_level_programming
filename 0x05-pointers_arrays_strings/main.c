#include "main.h"
#include <stdio.h>

int main(void)
{
	int len;
	char *str;

	str = "M";
	len = _strlen(str);

	printf("%d\n", len);
	return(0);
}
