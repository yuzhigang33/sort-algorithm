#include <stdio.h> #include "sort.h"


int main(void)
{
    int a[10] = {1,0,9,7,4,5,2,3,8,6};
    int b[10] = {1,0,9,7,4,5,2,3,8,6};
    int c[10] = {1,0,9,7,4,5,2,3,8,6};
    int i;

    bubble_sort(a, 10);
    for (i=0; i<10; i++)
    {   
        printf("%d ", a[i]);
    }   
    printf("\n");

    select_sort(b, 10);
    for (i=0; i<10; i++)
    {   
        printf("%d ", b[i]);
    }   
    printf("\n");

    quick_sort(c, 0, 9);
    for (i=0; i<10; i++)
    {   
        printf("%d ", c[i]);
    }   
    printf("\n");

    return 0;
}

