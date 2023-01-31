//strings: strchr

#include<stdio.h>

int my_strchr(char *str,char ch)
{
    static int i;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
}

int main()
{
    char str[50],ch;
    int index;
    printf("enter the string:");
    gets(str);
    printf("enter the char to be found:");
    scanf("%c",&ch);
    index=my_strchr(str,ch);
    printf("char:%c is found at pos:%d",ch,index);
}
