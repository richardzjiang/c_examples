#include <stdio.h>

int add(int a, int b);

main()
{
	int a, b, sum;

	scanf("%d", &a);
	scanf("%d", &b);

	sum = add(a,b);

	printf("%d\n", sum);
}

int add(int a, int b)
{
	int sum;

	sum = a + b;

	return sum;
}

