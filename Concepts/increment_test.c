#include <stdio.h>

// what is the difference between n++ and ++n?
main()
{
	int x, n = 5;

	x = n++;
	printf("x = n++: x = %d, n = %d\n", x, n);

	n = 5;
	x = ++n;
	printf("x = ++n: x = %d, n = %d\n", x, n);
}
