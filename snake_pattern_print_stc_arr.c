//Snake pattern priting: static array 

#include <stdio.h>

int main() {
    int a[]={1,2,3,4,5,6,7,8,9};
    int i,j,mid_index,len;
    len=sizeof(a)/sizeof(a[0]);
    mid_index=len/2;
    i=(mid_index+1);
    for(i;i<len;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\n");
    for(j=mid_index;j>=0;j--)
    {
        printf("  %d",a[j]);
    }

    return 0;
}
