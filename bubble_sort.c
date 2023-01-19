// Data structures : Bubble sort

#include<stdio.h>

void swap(int *, int *);

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void main()
{
    int a[]={2,8,4,7,1,3},i,j,n=6;
    printf("array before swap\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
    printf("array after swap\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}
