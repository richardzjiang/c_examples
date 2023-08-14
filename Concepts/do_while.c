#include <stdio.h>

/* test the do-while loop */
main()
{
	int n;
	
	scanf("%d", &n);

	do
		printf("Your input is equal to 6!\n");	/* this program does not work as intended. This is because the printf statement will always be executed regardless of the expression */
	while (n == 6);
}

