// Arrays: Adding element in array at given position.

#include <stdio.h>
void insert(int *a,int len,int pos,int data)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(i==pos)
            {
                a[i+1]=a[i];
                a[i]=data;
            }
    }
     printf("after adding new val:\n");
    for(i=0;i<len;i++)
    printf("%d ",a[i]);
}
int main() {
    int a[]= {10,20,30,100,40};
    int i,len,pos=4,data=300;
    len=(sizeof(a)/sizeof(a[0]));
    void (*insert_ptr)(int *,int,int,int);
    insert_ptr=&insert;
    printf("before adding new val:\n");
    for(i=0;i<len;i++)
    printf("%d ",a[i]);
    printf("\n");
    (*insert)(a,len,pos-1,data);
    
}
