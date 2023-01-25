/*DS : single linked list 
============================ */
#include <stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};
struct node *head=NULL;

void add_beg(int data)
{
    struct node *np=NULL;
    np=(struct node *)calloc(1, sizeof(struct node));
    np->data=data;
    np->next=NULL;
    if(head==NULL)
    {
        head=np;
    }
    else
    {
    np->next=head;
    head=np;
    }
}

void add_end(int data)
{
    struct node *temp,*np=NULL;
    np= (struct node *)calloc(1, sizeof(struct node));
    np->data=data;
    if(head==NULL)
    {
        head=np;
    }
    else
    {
    temp=head;
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=np;
    }
}
void display()
{
    struct node *temp;
    temp=head;
    
    if(temp==NULL)
    {
        printf("Nothing to print: linked list is empty\n");
    }
    else
    {
    while(temp)
    {
    printf("%d ",temp->data);
    temp=temp->next;
    }
    printf("\n");
    }
}
void rev()
{
    struct node *prev=NULL,*next=NULL;
    if(head==NULL)
    {
        printf("LL is empty,Cannot reverse the LL\n");
    }
    else
    {
        while(head!=NULL)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        head=prev;
    }
}

int find_mid()
{
    struct node *fast=head,*slow=head;
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        while(fast !=NULL && fast->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow->data;
    }
}
void find_loop()
{
    struct node *fast=head,*slow=head;
    if(head==NULL)
    {
        printf("linked list is empty\n");
    }
    else
    {
        while(fast!=NULL && slow!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(slow->data == fast->data)
            {
                printf("single linked list have the loop\n");
            }
        }
    }
}

int main() {
    int data,choice;
    struct node *temp,*np=NULL;
    while(1)
    {

        printf("1.add_beg 2.add_end 3.display 4.rev 5.find_mid 6.find_loop 7.exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("enter the data\n");
                    scanf("%d",&data);
                    add_beg(data);
                    break;
            case 2: printf("enter the data\n");
                    scanf("%d",&data);
                    add_end(data);
                    break;
            case 3: display();
                    break;
            case 4: rev();
                    break;
            case 5: data=find_mid();
                    printf("middle node: data:%d\n",data);
                    break;
            case 6: find_loop();
                    break;
            case 7: exit(0);
            
            default: printf("entered choice is invalid\n");
        }
    }
    return 0;
}
