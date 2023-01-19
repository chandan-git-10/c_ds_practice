//Strings: removing special chars (allocating mem dynamically).

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 20
void rm_spch(char *str,int len)
{
    int i;
    char *str2=NULL;
    str2=(char *)malloc(len+2*sizeof(char));
    if(str2==NULL)
    {
        printf("memory allocation failed for str2\n");
    }
    for(i=0;str[i];i++)
    {
        if(str[i] == '@' | str[i] == '#'| str[i] == '*')
        {
            continue;
        }
        else
        {
            str2[i] = str[i];
            printf("%c",str2[i]);
        }
    }
}
void main()
{
    char *str,i,len;
    int size;
    void (*rm_spchptr)(char *,int)=rm_spch;
    str=(char *)malloc(SIZE*sizeof(char));
    if(str==NULL)
    {
        printf("memory allocation failed for str\n");
    }
    else
    {
    printf("Enter the string:");
    gets(str);
    for(i=0;i<str[i];i++)
    {
        len++;
    }
    (*rm_spchptr)(str,len);
    }
}
