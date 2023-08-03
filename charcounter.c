#include <stdio.h>

/* count characters in input; 2nd version */
main()
{
	double nc; /* note from richard: what the heck is "double" */

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
} // do ctrl-d in order to get the number to print. do not do ctrl-c
