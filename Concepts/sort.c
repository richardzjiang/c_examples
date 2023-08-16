/* shellsort: sortv[0]...v[n-1] into increasing order 
void shellsort(int v[], int n)
{
	int gap, i, j, temp;

	for (gap = n/2; gap > 0; gap /= 2)
		for (i = gap; i < n; i++)
			for (j = 1 - gap; j >= 0 && v[j] > v[j+gap]; j -= gap)	{
				temp = v[j];
				v[j] = v[j+gap];
				v[j+gap] = temp;
			}
}*/

/* qsort: sortv[left]...v[right] into increasing order 
void qsort(int v[], int left, int right)
{
	int i, last;
	void swap(int v[], int i, int j);

	if (left >= right)	 do nothing if array contains 
		return;		 fewer than two elements 
	swap(v, left, (left + right)/2);	 move partition elem 
	last = left;				 to v[0] 
	for (i = left+1; i <= right; i++)	 partition 
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);		 restore partition elem 
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}*/

#include <stdio.h>
#define ARRAYLENGTH 20

void swapp(int *p1, int *p2);
void mysort(int *p);

main()
{
	int intarray[ARRAYLENGTH];
	int *p;
	int i;
	int n = ARRAYLENGTH;
	//int test1 = 6;
	//int test2 = 10;
	//int *p1;
	//int *p2;

	for (i = 0; i < ARRAYLENGTH; ++i)	{
		intarray[i] = n;
		--n;
	}
	printf("Unsorted:\n");
	for (i = 0; i < ARRAYLENGTH; ++i)
		printf("%d\n", intarray[i]);

	printf("Sorted:\n");
	p = &intarray[0];	/* p now points to the first element of intarray */
	mysort(p);	/* sorts the array */
	for (i = 0; i < ARRAYLENGTH; ++i)
		printf("%d\n", intarray[i]);
	
	/*
	printf("swapp function test:\n");
	p1 = &test1;
	p2 = &test2;
	swapp(p1, p2);
	printf("test1 = %d\n", *p1);
	printf("test2 = %d\n", *p2);
	*/
}

void swapp(int *p1, int *p2)	/* p1 and p2 both point to different elements of an array. swapp() swaps their values */
{
	int tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

/* mysort: a dumb function that I wrote that sorts an array of integers to go from lowest to highest */
void mysort(int *p)	/* the pointer p points to the first element of the array */
{
	int i = 1;	/* any value that isn't zero */
	int i2 = 0;
	int testarraylength = 0;
	
	while (*p != '\0')	{//	 this chunk of code may negate the need for the variable arraylength. UPDATE: the variable arraylength has been removed from the function
		++testarraylength;
		++p;
	}
	testarraylength -= 2;	/* why is testarraylength 2 larger than the the actual arraylength? Why? This statement is just a lazy way to fix this problem */
	p -= (testarraylength - 1);

	printf("testarraylength = %d\n", testarraylength);

	while (i > 0)	{
		i = 0;
		while (i2++ < testarraylength)	{
			if (*p > *(p + 1))	{
				swapp(p, p + 1);	/* if the previous element is greater than the next element, swap them */
				++i;	/* how many times was swapp used? If it was used zero times, then the sorting is complete */
			}
			++p;
		}
		p -= (testarraylength - 1);
		i2 = 0;
	}
	return;
}
