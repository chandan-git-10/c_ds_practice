//strigs: strncat

#include <stdio.h>

int main() {
    char str1[50]="chandan ";
    char str2[50]="Kivade";
     int i,j,len,n;
    printf("enter the chars to be copied:");
    scanf("%d",&n);
    for(i=0;str1[i];i++)
    {
     len++;   
    }
    for(j=0;j<n;j++)
    {
        str1[len+j]=str2[j];
    }
    str1[len+j] == '\0';
    printf("%s",str1);
    return 0;
}
