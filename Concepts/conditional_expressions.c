#include <stdio.h>

/* in this program, I will test conditional expressions */

/* here is the conventional method:
if (a > b)
	z = a;
else
	z = b;

here is the new way to write it using conditional expressions:
z = (a > b) ? a : b;

here is the function version of it:
z = max(a, b)
*/

main()
{
	int a, b, z;
	
	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%d", &b);

	z = (a > b) ? a : b;

	printf("z = %d\n", z);
}
