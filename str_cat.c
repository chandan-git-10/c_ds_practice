//string concatination

#include <stdio.h>

int main() {
    char str1[50]="chandan ";
    char str2[50]="Kivade";
    int i,j,len;
    for(i=0;str1[i];i++)
    {
     len++;   
    }
    for(j=0;str2[j];j++)
    {
        str1[len+j]=str2[j];
    }
    str1[len+j] == '\0';
    printf("%s",str1);
    return 0;
}
