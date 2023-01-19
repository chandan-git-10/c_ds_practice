#include<stdio.h>
#include<stdlib.h>

 struct node 
 {
     struct node *prev;
     int data;
     struct node *next;
 };
 struct node *head=NULL;

void add_beg(int data)
{
    struct node *np=NULL,*temp=NULL;
    np=(struct node *)calloc(1,sizeof(struct node));
    np->data=data;
    if(head==NULL)
    {
        np->prev=NULL;
        np->next=NULL;
        head=np;
    }
    else
    {
        temp=head;
        np->prev=NULL;
        np->next=head;
        temp->prev=np;
        head=np;
    }
    
}

void add_end(int data)
{
    struct node *np=NULL,*temp=NULL;
    np=(struct node *)calloc(1,sizeof(struct node));
    np->data=data;
    if(head==NULL)
    {
        np->next=NULL;
        np->prev=NULL;
        head=np;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
            np->prev=temp;
            temp->next=np;
            np->next=NULL;
    }
}

void fw_display()
{
    struct node *temp=NULL;
    if(head==NULL)
    {
        printf("Doubly linked list is empty\n");
    }
    else 
    {
        temp=head;
        while(temp)
        {
           // printf("inside fw display %p %d %p\n",temp->prev,temp->data,temp->next);
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
    
}

void rev_dis()
{
    struct node *temp=NULL;
    if(head==NULL)
    {
        printf("Doubly linked list is empty\n");
    }
    else 
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->prev;
    }
    
}
void rev_DLL()
{
    struct node *next=NULL,*current=head;
    while(current->next!=NULL)
    {
        next=current->next;
        current->next=current->prev;
        current->prev=next;
        current=next;
    }
        next=current->next;
        current->next=current->prev;
        current->prev=next;
        head=current;
}



void rev_DLL1()
{
    if(head==NULL)
    {
        printf("Doubly LL is empty\n");
    }
    else
    {
        struct node *temp=head;
        while(temp->next)
        {
            temp=temp->next;
        }
        head=temp;
    }
}

void fwdis_DLL()
{
    rev_dis();
}

void revdis_DLL()
{
    struct node *temp=NULL;
    if(head==NULL)
    {
        printf("Doubly LL is empty\n");
    }
    else
    {
        temp=head;
        while(temp->prev)
        {
            temp=temp->prev;
        }
        while(temp)
        {
        printf("%d ",temp->data);
        temp=temp->next;
        }
    }
}

void main()
{
    int data,choice;
    while(1)
    {
        printf("\n 1.add_beg 2.add_end 3.fw_display 4.rev_dis 5.exit 6.rev_DLL 7.fwdis_DLL 8.revdis_DLL\n");
        printf("Enter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1 :printf("enter the data:");
                    scanf("%d",&data);
                    add_beg(data);
                    break;
            case 2 :printf("enter the data:");
                    scanf("%d",&data);
                    add_end(data);
                    break;
            case 3: fw_display();
                    break;
            case 4: rev_dis();
                    break;
            case 5: exit(0);
                    break;
            case 6: rev_DLL();
                    break;
            case 7: fwdis_DLL();
                    break;
            case 8: revdis_DLL();
                    break;
            default : printf("Invalid input: please enter proper choice\n");
        }
        
    }
    
}
