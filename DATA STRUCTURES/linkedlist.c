#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*head=NULL,*temp,*temp1;
void insertbeg();
void insertend();
void insertpos();
void deletebeg();
void deleteend();
void deletepos();
void display();
void insert();
int item;
void main()
{
	int opt;
	char ch;
	do
	{
		printf("\n1.Insert at beginning\n2.insert at the end\n3.insert at a particular postion\n4.delete at beginning\n5.delete at the end\n6.delete at a particular position\n7.display \n8.exit\n");
		printf("enter the option:");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: insert();
				     insertbeg();
				     break;
			case 2: insert();
				      insertend();
				      break;
			case 3:insert();
				     insertpos();
				     break;
			case 4:deletebeg();
				     break;
			case 5:deleteend();
				     break;
			case 6:deletepos();
				     break;
			case 7: display();
				       break;
			case 8: exit(0);
					
		}
	}while(opt!=8);
}
void insertbeg()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=item;
	p->link=NULL;
	if(head==NULL)
	{
		head=p;
	}
	else
	{
		p->link=head;
		head=p;
	}	
}
void insertend()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	p->data=item;
	p->link=NULL;
	if(head==NULL)
	{
		insertbeg();
	}
	else
	{
		temp=head;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=p;
	}
}
void insertpos()
{
	struct node *p;
	int pos;
	p=(struct node *)malloc(sizeof(struct node));
	printf("read the position:");
	scanf("%d",&pos);
	p->data=item;
	p->link=NULL;
	if(pos==1)
	{
		insertbeg();
	}
	else
	{
		temp=head;
		temp1=head->link;
		for(int i=1;i<pos-1;i++)
		{
			temp=temp->link;
			temp1=temp1->link;
		}
		p->link=temp1;
		temp->link=p;
	}
	
}
void deletebeg()
{
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		temp=head;
		head=head->link;
		printf("the deleted data is %d:",temp->data);
		free(temp);
	}
}
void deleteend()
{
	if(head==NULL)
	{
		printf("the list is empty");
	}
	else if(head->link==NULL)
	{
		temp=head;
		printf("the deleted element is %d:",temp->data);
		head=NULL;
		free(temp);
	}
	else
	{
		temp=head;
		temp1=head->link;
		while(temp1->link!=NULL)
		{
			temp=temp->link;
			temp1=temp1->link;
		}
		printf("the deleted element is %d:",temp1->data);
		temp->link=NULL;
		free(temp1);
	}
}
void deletepos()
{
	int pos;
	if(head==NULL)
	{
	printf("the list is empty");
	}
	else
	{
		
		printf("enter the postion:");
		scanf("%d",&pos);
		if(pos==1)
		{
			deletebeg();
		}
		else
		{
			temp=head;
			temp1=head->link;
			for(int i=1;i<pos-1;i++)
			{
				temp=temp->link;
				temp1=temp1->link;
			}
			printf("the deleted element is %d:",temp1->data);
			temp->link=temp1->link;
			free(temp1);
		}
	}
}
void display()
{
	if(head==NULL)
	{
		printf("linked list is empty");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->link;
		}
	}
}
void insert()
{
	printf("enter the element:");
	scanf("%d",&item);
}
