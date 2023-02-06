// strutures: struct variable as a member in another struct.

#include <stdio.h>
#include<string.h>
struct student 
{
    char name[10];
    char sname[10]
};

struct info
{
    struct student st;
}var;

struct info *p=&var;

int main() {
    
    strcpy(p->st.name,"chandan");
    strcpy(p->st.sname,"kivade");
    printf("name= %s sname=%s",p->st.name,p->st.sname);

    return 0;
}
