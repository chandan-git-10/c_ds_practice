
// Employee database application.

/*
Still working on the application development, seeing some erros.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct personal_info
{
	char dob[20];
	char collage[20];
	char place[20];
	char languages[20];
}PI;
PI basic;
PI *info=&basic;

typedef struct employee_info
{
	char name[20];
	char pos[20];
	char manager[20];
	char doj[20];
	PI basic;
	struct employee_info *next;
}EMPI;

EMPI *head=NULL;

//void edit_employee_info(void);
//void remove_employee_info(void);

void view_employee_info()
{
    char name[20];
    printf("Please enter the emp name to be found\n");
	scanf("%s",name);
	char flag=0,*p=NULL;
	EMPI *temp=head;
	if(head == NULL)
	{
		printf("Database is empty, Please add the entries\n");
	}
	else
	{
	while(temp!=NULL)
	{
		if(strcmp(temp->name,name) == 0)
		{
			printf("name:%s\n pos:%s\n manager:%s\n doj:%s\n dob:%s\n collage:%s\n place:%s\n language:%s\n",temp->name,temp->pos,temp->manager,temp->doj,temp->basic.dob,temp->basic.collage,temp->basic.place,temp->basic.languages);
			flag = 1;
			break;
		}
		
		
		/*else if(p=strstr(temp->name,name))
			{	
			printf("name:%s\n pos:%s\n manager:%s\n doj:%s\n dob:%s\n collage:%s\n place:%s\n language:%s\n",temp->name,temp->pos,temp->manager,temp->doj,temp->basic.dob,temp->basic.collage,temp->basic.place,temp->basic.languages);
			break;
			}
			else
			{
				printf("Employee info is not found\n");
				break;
			}*/
		else
		temp=temp->next;
	}
	if(flag == 0)
	{
	    printf("Employee info is not found\n");
	}
	}
	
}


void add_employee_info()
{
	EMPI *node=NULL, *temp=NULL;
	node=(EMPI *)malloc(1*sizeof(EMPI));
	if(node==NULL)
	{
		printf("Memory is not allocated for the node\n");
		exit(0);
	}
	else
	{
	printf("please enter the employee infos as follow:\n");
	printf("name:");
	scanf("%s",node->name);
	printf("pos:");
	scanf("%s",node->pos);
	printf("manager:");
	scanf("%s",node->manager);
	printf("doj:");
	scanf("%s",node->doj);
	printf("dob:");
	scanf("%s",node->basic.dob);
	printf("collage:");
	scanf("%s",node->basic.collage);
	printf("place:");
	scanf("%s",node->basic.place);
	printf("languages:");
	scanf("%s",node->basic.languages);
	}
	//NULL is not being added by user so adding it here.
	node->next=NULL;
	//checking if the head is NULL (adding first entry).
	if(head == NULL)
	{
	    head=node;
	    head->next=NULL;
	}
	// adding new entry in the list.
	else 
	{
		temp=head;
	    while(temp->next != NULL)
	    {
	        temp=temp->next;
	        
	    }
	    temp->next=node;
	}
}


int  main()
{
	int choice;
	char *name=NULL;
	name = (char *)malloc(10*sizeof(char));
	while(1)
	{
	printf("1.view_employee_info 2.edit_employee_info 3.add_employee_info 4.remove_employee_info 5.exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: view_employee_info(name);
				break;
		case 2: //edit_employee_info(); 
		        printf("edit_employee_info() API still under development\n");
				break;
		case 3: add_employee_info();
				break;
		case 4: //remove_employee_info();
		        printf("remove_employee_info() API is still under development\n");
				break;
		case 5: exit(0);
		default: printf("Please enter valid choice\n");
		
	}
	}
	return 0;
}
