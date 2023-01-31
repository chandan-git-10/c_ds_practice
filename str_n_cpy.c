//strings: strncpy

// Online C compiler to run C program online
#include <stdio.h>

char *my_strcpy(char *dst, char *src,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        dst[i] = src[i];
    }
    
}

int main() {
    char str1[50];
    char str2[50];
    char *ptr;
    int n;
    printf("enter the first string:");
    gets(str1);
    printf("enter the second string:");
    gets(str2);
    printf("enter the no of char to be copied:");
    scanf("%d",&n);
    ptr=my_strcpy(str1,str2,n);
    printf("%s", str1);
    return 0;
}
