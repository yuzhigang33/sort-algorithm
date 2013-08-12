#include <stdio.h>


int select_sort(int *a, int n)
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

    return 0;
}

int main(void)
{
    int a[] = {2,4,6,1,0,8,5,9,3,7};
    int i;

    select_sort(a, 10);
    for (i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
