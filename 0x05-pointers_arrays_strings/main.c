#include "main.h"
#include <stdio.h>

int main(void)
{
	int nb;
	nb = _atoi("-2147483648");
	printf("%d\n", nb);
	nb = _atoi("2147483647");
	printf("%d\n", nb);	
	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("              ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("          +       +    -     -98 Battery Stree; Ca 94");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Suite - te -      402 #cisfun :)");
	printf("%d\n", nb);
	return(0);
}
