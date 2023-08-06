#include <stdio.h>

/* in the book the function 'bitcount' is described */
/* bitcount counts the number of 1-bits in its integer argument */

int bitcount(unsigned x);
int bitcount2(unsigned n);	// similar, except that it counts 0-bits instead of 1-bits

main()
{
	int x;
	
	scanf("%d", &x);
	printf("x = %d\n", x);
	printf("1-bits: %d\n", bitcount(x));
	printf("0-bits: %d\n", bitcount2(x));
}

int bitcount(unsigned x)
{
	int b;	/* the following code uses binary. If b is 14, then the following code assumes that b is 1110, which is 14 in binary. Therefore, the function returns 3 (because there are 3 1-bits in 1110) */

	for (b == 0; x != 0; x >>= 1)	/* the right-shifting operator '>>' shifts x. For example, if x is 101, doing 'x = x >> 2' yields 1. In this case, the expression 'x >>= 1' is equal to 'x = x >> 1' */
		if (x & 01)	/* all bits except the right-most bit are converted to zero. The right-most bit can either be zero or one. If it is one, then the if statement is true and it executes 'b++' */
			b++;	/* in this case, equivalent to '++b' */
	return b;
}

int bitcount2(unsigned n)
{
	int b;

	for (b == 0; n != 0; n >>= 1)
		if (!(n & 01))	/* the exclamation mark is basically a NOT operator. The if statement will be satisfied if the expression is NOT true */
			b++;
	return b;
}
