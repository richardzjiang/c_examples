#include <stdio.h>

/* Exercise 1-14, but only for numbers */
/* epic C program by Richard Jiang */
main()
{
	int c, i, tmp, nwhite, nother, maxn;
	int ndigit[10];

	nwhite = nother = 0;
	for (i = 0; i <= 9; ++i)	//makes every element of the array start at 0
		ndigit[i] = 0;

	while ((c = getchar())!= EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	maxn = nwhite;	// there is the digit that occurs the most number of times, and maxn is the number of times that digit occurs
	if (maxn < nother)
		maxn = nother;
	for (i = 0; i <= 9; ++i)
		if (maxn < ndigit[i])
			maxn = ndigit[i];
	
	nwhite = maxn - nwhite;
	nother = maxn - nother;
	for (i = 0; i <= 9; ++i)
		ndigit[i] = maxn - ndigit[i];
	
	printf("\n");	// purely for aesthetic purposes
	for (i = maxn; i > 0; --i)	{	// this next chunk generates the visual histogram
		for (tmp = 0; tmp <= 9; ++tmp)	{
			if (ndigit[tmp] > 0)
				printf("    ");
			else if (ndigit[tmp] <= 0)
				printf("  ==");
			--ndigit[tmp];
		}
		if (nother > 0)
			printf("     ");
		else if (nother <= 0)
			printf("   ==");
		--nother;
		if (nwhite > 0)
			printf("     ");
		else if (nwhite <= 0)
			printf("      ==");
		--nwhite;
		printf("\n");
	}
	printf("_____________________________________________________________\n");
	printf("  0   1   2   3   4   5   6   7   8   9   other   white space\n\n");
}
