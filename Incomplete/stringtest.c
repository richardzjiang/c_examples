#include <stdio.h>

/* 5.5 Character Pointers and Functions */
main()
{
	int i = 1;
	char amessage[] = "now is the time";	/* an array */
	char *pmessage = "now is the time";	/* a pointer */

	while (amessage[i++] != '\0')
		printf("%c", amessage[i]);
	printf("%c\n", *pmessage);
	printf("%s\n", pmessage);
}
