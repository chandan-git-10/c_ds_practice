// bitwise code: swaping bits from given positions.

#include <stdio.h>

int main() {
     int data=5,res=0,pos=2,i;
     for(i=31;i>=0;i--)
     printf("%d",(data>>i)&1);
     printf("\n");
     res=(data ^ (1<<(pos+1)));
     res=res^(1<<pos);
     for(i=31;i>=0;i--)
     printf("%d",(res>>i)&1);
     printf("\n");
     printf("%d %d",data,res);
    return 0;
}
