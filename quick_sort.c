#include "sort.h"

void swap(int *x, int *y)
{
	int tmp;
	
	tmp = *x;
	*x = *y;
	*y = tmp;

	return;
}

void quick_sort(int *a, int s, int e)
{
	int i = s;
	int j = e;
	int tmp = a[s];

	if (i<j)
	{
		while (i<j)
		{
			while (i<j && a[j] >= tmp)  j--;
			if (i<j)
			{
				swap(&a[i], &a[j]);
			}

			while (i<j && a[i] <= tmp)  i++;
			if (i<j)
			{
				swap(&a[i], &a[j]);
			}
		}
		
		quick_sort(a, s, i-1);
		quick_sort(a, j+1, e);
	}
	return;
}