#include <stdio.h>
#include<string.h>
#define SIZE 100

void *mem_cpy(void *dst,void *src,int n)
{
    char *s=(char *)src;
    char *d=(char *)dst;
    int i;
    for(i=0;i<n;i++)
    {
        d[i] = s[i];   
    }
    return d;
}
int main() {
    char src[SIZE],dst[SIZE]="kivade",i,*p=NULL;
    int n;
    printf("Enter the src string:");
    gets(src);
    printf("enter the value of n bytes need to cpy:");
    scanf("%d",&n);
    printf("source string:");
    puts(src);
    printf("dst string:");
    puts(dst);
    p=mem_cpy(dst,src,n);
    printf("destination string after mem_cpy:");
    puts(dst);
    return 0;
}
