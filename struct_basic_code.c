/*Struct basic code with DMA mem alloc */

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct node
{
    int data;
    char arr[20];
};

struct node *ptr, val,*ptr2;
int main()
{
    val.data=25;
    strcpy(val.arr,"chandan kivade");
    printf("data=%d name=%s\n",val.data,val.arr);
    ptr=&val;
    ptr->data=26;
    strcpy(ptr->arr,"dharampal kivade");
    printf("data=%d name=%s\n",ptr->data,ptr->arr);
    ptr2=(struct node *)calloc(1,sizeof(struct node));
    ptr2->data=27;
    strcpy(ptr2->arr,"Megha kivade");
    printf("data=%d name=%s\n",ptr2->data,ptr2->arr);
    printf("address of ptr=%p ptr2=%p val=%p",ptr,ptr2,&val);
    free(ptr2);
    ptr2=NULL;
    return 0;
}
