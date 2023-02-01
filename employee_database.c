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


void view_employee_info(char *name)
{
	char *p=NULL;
	EMPI *temp=head;
	while(temp!=NULL)
	{
		if(temp->name == *name)
		{
			printf("name:%s pos:%s manager:%s doj:%s dob:%s collage:%s place:%s language:%s",temp->name,temp->pos,temp->manager,temp->basic.dob,temp->basic.collage,temp->basic.place,temp->basic.languages);
			
		}
		else
		{
			p=strstr(temp->name,name);
			if(p!=NULL)
			{	
			printf("name:%s pos:%s manager:%s doj:%s dob:%s collage:%s place:%s language:%s",temp->name,temp->pos,temp->manager,temp->basic.dob,temp->basic.collage,temp->basic.place,temp->basic.languages);
			}
			else
			{
				printf("Employee info is not found\n");
			}
		}
	}

}


void add_employee_info()
{
	EMPI *temp=NULL;
	temp=(EMPI *)malloc(1*sizeof(EMPI));
	if(temp==NULL)
	{
		printf("Memory is not allocated for the node\n");
		exit(0);
	}
	else
	{
	printf("please enter the employee infos as follow:\n");
	printf("name:");
	gets(temp->name);
	printf("pos");
	gets(temp->pos);
	printf("manager:");
	gets(temp->manager);
	printf("doj:");
	gets(temp->doj);
	printf("dob:");
	gets(temp->basic.dob);
	printf("collage:");
	gets(temp->basic.collage);
	printf("place:");
	gets(temp->basic.place);
	printf("languages");
	gets(temp->basic.languages);
	}
}

void edit_employee_info(void);
void remove_employee_info(void);

void main()
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
		case 1: printf("Please enter the emp name to be found\n");
				gets(name);
				view_employee_info (name);
				break;
		case 2: edit_employee_info();
				break;
		case 3: add_employee_info();
				break;
		case 4: remove_employee_info();
				break;
		case 5: exit(0);
		default: printf("Please enter valid choice\n");
		
	}
	}
	
}
