#include <stdio.h>

int main()
{
	char c;
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double d;


	printf("size of char: %ld", sizeof(c));
	printf(" byte\n");
	printf("size of short: %ld", sizeof(s));
	printf(" bytes\n");
	printf("size of int: %ld", sizeof(i));
	printf(" bytes\n");
	printf("size of long: %ld", sizeof(l));
	printf(" bytes\n");
	printf("size of long long: %ld", sizeof(ll));
	printf(" bytes\n");
	printf("size of float: %ld", sizeof(f));
	printf(" bytes\n");
	printf("size of double: %ld", sizeof(d));
	printf(" bytes\n");
}
