#include <stdio.h>

/* test pointers */
/* 'p = &c' assigns the address of c to the variable p, and p is said to 'point to' c */
/* the unary operator * is the indirection and dereferencing operator; when applied to a pointer, it access the object a pointer points to */
/* x = 2;
 * ip = &x;
 * y = *ip;
 * therefore, y = 2 */
main()
{
	int x, y, n;
	/* int *n;*/	/* intended as a mnemonic; it says that the expression *ip is an int */
	
	printf("Enter a number: ");
	scanf("%d", &x);

	n = &x;	/* n now points to x */
	y = (*n);	/* y is now equal to the value of x */
	printf("n = &x\n");
	printf("*n = %d\n", *n);
	printf("y = *n\n");
	printf("y = %d\n", y);
	
	printf("Enter another number: ");
	scanf("%d", &(*n));	/* now, the value of x becomes whatever number that was entered */
	printf("x = %d\n", x);
}


