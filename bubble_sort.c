#include "sort.h"

void bubble_sort(int *a, int n)
{
    int i, j;
    int tmp;
    for (i=0; i<n-1; i++)
    {
	for (j=0; j<n-i-1; j++)
	{
	   if (a[j] > a[j+1])
	    {
	        tmp = a[j];
	        a[j] = a[j+1];
	        a[j+1] = tmp;
            }
	}
    }
}