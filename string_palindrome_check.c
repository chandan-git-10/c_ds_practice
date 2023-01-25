#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="xxyyxx",flag=1;
    int i,j,len=0;
    printf("string before rev:%s\n",str);
    for(i=0;str[i];i++)
    {
        len++;
    }
    for(i=0,j=len-1;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        flag=0;
    }
    if(flag==0)
    printf("string is not palindrome\n"); 
    else
    printf("string is palindrome\n");
    
}
