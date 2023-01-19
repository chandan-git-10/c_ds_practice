// Strings: removings special chars in strings.

#include <stdio.h>
#include<string.h>
char* (*ptr)(char *,char);
void remove_spch(char *str1,char len)
{
  int i, j;
  char str2[len], Test_bit = 0;
  for(i=0, j=0;str1[i] !='\0';i++)
  {
  if(str1[i]=='@' || str1[i]=='#' || str1[i]=='*' || str1[i]==' ')
  {
      str2[j]=' ';
      Test_bit = 1;
      continue;
  }
  if(Test_bit == 1)
  {
    ++j;
    Test_bit = 0;
  }
  str2[j++]=str1[i];
  }
  str2[j]='\0';
printf("%s", str2);
}

int main() {
    char str1[]="  Today@#*     I @#* have@ mock";
//    char* (*ptr)(char *,char);
    char len;
    puts(str1);
    for(int i=0;str1[i];i++)
    {
        len++;
    }
    ptr=&remove_spch;
    ptr(str1,len);
    return 0;
}
