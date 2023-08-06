#include <stdio.h>

/* testing assigment operators, such as += and *= */
main()
{
	int i;
	
	i = 5;
	printf("i = 5\n");

	i += 2;
	printf("i += 2 = %d\n", i);

	i = 5;
	i *= 2;
	printf("i *= 2 = %d\n", i);
}
