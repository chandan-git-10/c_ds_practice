/*string reverse: with temp memory*/

#include<stdio.h>
#include<string.h>

void main()
{
    char str[]="abc",ch=0;
    int i,j,len=0;
    printf("string before rev:%s\n",str);
    for(i=0;str[i];i++)
    {
        len++;
    }
    for(i=0,j=len-1;i<j;i++,j--)
    {
        ch=str[i];
        str[i]=str[j];
        str[j]=ch;
    }
    printf("string after rev:%s\n",str);
}
