#include "sort.h"

void select_sort(int *a, int n)
{
    int i,j,tmp,b;

    for(i=0;i<n-1;i++)
    {
        tmp=i;
        for(j=i+1;j<n;j++)
        {
           if(a[tmp]>a[j])
               tmp=j;
        }
        if(i!=tmp)
        {
            b=a[tmp];
            a[tmp]=a[i];
            a[i]=b;
        }
    }

    return;
}
