#include <stdio.h>

main()
{
	int a[10];
	int *pa;
	int i;
	
	for (i = 0; i < 10; ++i)	{
		a[i] = i;
		// printf("%d\n", i);
	}

	pa = &a[0];
	
	for (i = 0; i < 10; ++i)
		printf("%d\n", *(pa + i));

	/* additional testing */
	/* Thus after the assignment 'pa = &a[0];' pa and a have identical values.
	 * Since the name of an array is a synonym for the location of the initial element,
	 * the assignment pa=&a[0] can also be written as 'pa = a' */

	a[0] = 6;	/* assign a new value of a[0] */
	/* pa already points to &a[0] */
	
	printf("a = %d\n", a);
	printf("pa = %d\n", pa);
}
