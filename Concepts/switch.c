#include <stdio.h>

/* testing the 'switch' statement that is first learned in 3.4 */
main()
{
	int i;

	scanf("%d", &i);

	switch (i)	{	/* I believe that once one case is satisfied, then all of the cases following that case are also executed */
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		case 3:
			printf("3\n");
			break;
		case 4:
			printf("4\n");
			break;
		case 5:
			printf("5\n");
			break;
		case 6:
			printf("6\n");
			break;
		case 7:
			printf("7\n");
			break;
		case 8:
			printf("8\n");
			break;
		case 9:
			printf("9\n");
			break;
		default:
			printf("Your number is not between 1 and 9\n");	/* ask dad what default means */
			break;
	}
}
