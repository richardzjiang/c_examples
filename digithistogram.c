#include <stdio.h>

/* Exercise 1-14, but only for numbers */
main()
{
	int c, i, nwhite, nother, maxn;
	int ndigit[10];
	char maxd;	//ascii code of the digit that has the most

	nwhite = nother = 0;
	for (i = 0; i < 10; ++i)	//makes every element of the array start at 0
		ndigit[i] = 0;

	while ((c = getchar())!= EOF)
		if (c >= '0' && c <= '9')
			++ndigit[c-'0'];
		else if (c == ' ' || c == '\n' || c == '\t')
			++nwhite;
		else
			++nother;
	
	maxn = nwhite;	// there is the digit that occurs the most number of times, and maxn is the number of times that digit occurs
	maxd = 1;
	if (maxn < nother)	{
		maxn = nother;
		maxd = 2;
	}
	for (i = 0; i <= 9; ++i)
		if (maxn < ndigit[i])	{
			maxn = ndigit[i];
			maxd = i + '0';	// for example, if i=2 (when it is looking at how many times the number 2 occurs), then i+'0' is the ascii code for two
		}
	printf("DEBUG: maxn=%d\n", maxn);
	printf("DEBUG: maxd=%c\n", maxd);
}
