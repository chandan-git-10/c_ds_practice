//strings: string lenght implementation.

#include <stdio.h>

int main() {
    char str1[50];
    printf("enter the string:");
    gets(str1);
    int i,len;
    for(i=0;str1[i];i++)
    {
     len++;   
    }
    printf("length of the string is:%d",len);
    return 0;
}
