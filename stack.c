// Data structures : stack : still working on it.

#include<stdio.h>
#define MAX 50

int stack[MAX];
int top = -1;

int isempty()
{
    if(top==-1)
     return 1;
     else 
     return 0;
}

int isfull()
{
    if(top==MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(int data)
{
    if(isempty())
    {
        stack[top] = data;
        top++;
    }
    else
    {
        printf("stack overflow\n");
    }
}

void peek()
{
    printf("%d",stack[top]);
}

int pop()
{
    if(isfull())
    {
        int data=stack[top];
        top--;
        //return data;
        printf("%d", stack[top]);
    }
    else
    {
        printf("Stack underflow\n");
    }
}
void main()
{
    int data,res,choice;
    while(1)
    {
        printf("1.push 2.pop 3.peek 4.exit");
        printf("enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter the data:");
                    scanf("%d",&data);
                    push(data);
                    break;
            case 2: pop();
                    //printf("poped data %d",res);
                    break;
            case 3: peek();
                    break;
            case 4: exit (0);
                    break;
            default: printf("Please enter valid input\n");
        }
        
    }

}
