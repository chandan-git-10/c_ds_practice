// Strings: strcmp

#include <stdio.h>
#include<string.h>
int my_strcmp(char *dst, char *src)
{
    int i;
    for(i=0;src[i] == dst[i];i++)
    {
        
        if(dst[i]=='\0')
        break;
    }
     return dst[i] - src[i];
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
    n=my_strcmp(str1,str2);
    if(n>0)
    printf("source string is greater\n");
    else if(n<0)
    printf("destination string is greater\n");
    else
    printf("Both strings are equal\n");
    return 0;
}
