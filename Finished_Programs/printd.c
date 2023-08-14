#include <stdio.h>

/* printfd: print n in decimal */
/* recursive functions! */
void printd(int n)
{
	if (n < 0) {
		puthcar('-');
		n = -n;
	}
	if (n / 10)
		printd(n / 10);
	putchar(n % 10 + '0');
}
