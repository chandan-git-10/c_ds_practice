/*String reverse: without using the temp memory.*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="abc";
    int i,j,len=0;
    printf("string before rev:%s\n",str);
    for(i=0;str[i];i++)
    {
        len++;
    }
    for(i=0,j=len-1;i<j;i++,j--)
    {
        str[i]=str[i]+str[j];
        str[j]=str[i]-str[j];
        str[i]=str[i]-str[j];
    }
    printf("string after rev:%s\n",str);
}
