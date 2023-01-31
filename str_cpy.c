//strings: strcpy

#include <stdio.h>

char *my_strcpy(char *dst, char *src)
{
    int i;
   /* int i,len;
    for(i=0;str1[i];i++)
    {
     len++;   
    }*/
    for(i=0;src[i];i++)
    {
        dst[i] = src[i];
    }
    
}

int main() {
    char str1[50];
    char str2[50];
    char *ptr;
    printf("enter the first string:");
    gets(str1);
    printf("enter the second string:");
    gets(str2);
    ptr=my_strcpy(str1,str2);
    printf("%s", str1);
    return 0;
}
