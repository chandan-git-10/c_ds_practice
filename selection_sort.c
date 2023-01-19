// Data structures : selection sort

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
    int a[]={2,8,4,7,1,2},i,j,n=6,min;
    printf("array before swap\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        swap(&a[i],&a[min]);
    }
    printf("array after swap\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n");
}
