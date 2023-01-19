// Data structures : Sorting technic: Quicksort

#include <stdio.h>
void swap(int *,int *);
void quicksort(int *,int);
void quicksort_recur(int *, int, int);
int partition(int *, int, int);
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void quicksort(int a[],int lenth)
{
    quicksort_recur(a, 0, lenth -1);
}
void quicksort_recur(int a[],int low, int high)
{
    if(low<high)
    {
        int pivot_index;
        pivot_index=partition(a ,low, high);
        quicksort_recur(a, low, pivot_index -1);
        quicksort_recur(a, pivot_index +1, high);
    }
}

int partition (int a[],int low,int high)
{
    int pivot_value = a[high];
    int i= low;
    for (int j=low;j<high;j++)
    {
        if(a[j]<pivot_value)
        {
            swap(&a[i],&a[j]);
            i++;
        }
        
    }
    swap(&a[i],&a[high]);
    return i;
}
int main() {
    int a[]={2,5,6,7,8},i;
    int lenth=sizeof(a)/sizeof(a[0]);
    quicksort(a,lenth);
    for(i=0;i<lenth;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
