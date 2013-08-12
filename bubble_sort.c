#include<stdio.h>

int bubble_sort(int *a, int n)
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

int main(void)
{
    int a[10] = {1,0,9,7,4,5,2,3,8,6};
    int i;

    bubble_sort(a, 10);

    for (i=0; i<=9; i++)
    {
	printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
