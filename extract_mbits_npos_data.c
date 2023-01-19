//Bitwise operator: extracting no_of_bits from n pos from data.

#include <stdio.h>

int main() {
    int data, pos, no_of_bits,i,n,y=0;
    printf("Enter the data no_of_bits and position:");
    scanf("%d %d %d",&data,&no_of_bits, &pos);
    y= y | ((data>>(pos-1)) & ((1<<no_of_bits)-1));
    printf("\n data = %d\n",data);
    printf("data in bin format:\n");
    for(i=31;i>=0;i--)
    printf("%d",(data>>i)&1);
    printf("\nres = %d \n",y);
    printf("m bits from n position from data:\n");
    for(i=31;i>=0;i--)
    printf("%d",(y>>i)&1);
    printf("\n");
}
