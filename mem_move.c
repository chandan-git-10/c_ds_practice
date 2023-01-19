#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100

void *mem_move(void *dst,void *src,int n)
{
    char *s=(char *)src;
    char *d=(char *)dst;
    char *temp=NULL;
    temp=(char *)calloc(1,n+1*sizeof(char));
    int i;
    for(i=0;i<n;i++)
    {
        temp[i] = s[i];   
    }
    for(i=0;i<n;i++)
    {
        d[i] = temp[i];   
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
    /*printf("source string:");
    puts(src);
    printf("dst string:");
    puts(dst);*/
    p=mem_move(src,src+3,n);
    printf("destination string after mem_move:");
    puts(p);
    puts(src);
    return 0;
}
