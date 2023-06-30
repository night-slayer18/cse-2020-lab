#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*head=NULL,*temp,*temp1;
void insertbeg();
void insertend();
void insertpos();
void deletebeg();
void deleteend();
void deletepos();
void display();
void reverse();
int item;
void main()
{
    int opt;
    do
    {
        printf("\n1.Insert at the Beginning\n2.Insert at the end\n3.Insert at a particular position\n4.Delete from beginning\n5.Delete from the end\n6.Delete from a particular position\n7.display\n8.Reverse display\n9.EXIT\n");
        printf("enter he option:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                    insertbeg();
                    break;
            case 2: 
                    insertend();
                    break;
            case 3:
                    insertpos();
                    break;
            case 4:
                    deletebeg();
                    break;
            case 5:
                    deleteend();
                    break;
            case 6:
                    deletepos();
                    break;
            case 7:
                    display();
                    break;
            case 8:
            	    reverse();
            	    display();
                    break;
            case 9:
            	    break;
            default: 
                    printf("enter a valid input");
        }
    }while(opt!=9);
}
void insertbeg()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&item);
    p->data=item;
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        p->next=head;
        head=p;
    }
}
void display()
{
    if(head==NULL)
    {
        printf("the list is empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
    }
}
void insertend()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the data:");
    scanf("%d",&item);
    p->data=item;
    p->next=NULL;
    if(head==NULL)
    {
        head=p;
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
    }
}
void insertpos()
{
    int pos;
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the position:");
    scanf("%d",&pos);
    if(pos!=1)
    {
        temp=head;
        temp1=head->next;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
            temp1=temp1->next;
        }
        if(temp1==NULL)
        {
            insertend();
        }
        else
        {
            printf("enter the data:");
            scanf("%d",&item);
            p->data=item;
            p->next=NULL;
            p->next=temp1;
            temp->next=p;
        }
    }
    else
    {
        insertbeg();
    }
}
void deletebeg()
{
        if(head==NULL)
        {
            printf("the list is empty");
        }
        else
        {
            temp=head;
            head=head->next;
            printf("the deleted item is:%d",temp->data);
            free(temp);
        }
}
void deleteend()
{
    if(head==NULL)
    {
        printf("the list is empty");
    }
    else if(head->next==NULL)
    {
        temp=head;
        printf("the deleted item is:%d",temp->data);
        head=NULL;
        free(temp);
    }
    else
    {
        temp=head;
        temp1=head->next;
        while(temp1->next!=NULL)
        {
            temp=temp->next;
            temp1=temp1->next;
        }
        temp->next=NULL;
        printf("deleted item is:%d",temp1->data);
        free(temp1);
    }
}
void deletepos()
{
    int pos;
    printf("enter the position to be deleted:");
    scanf("%d",&pos);
    if(head==NULL)
    {
        printf("the list is empty");
    }
    else if(pos==1)
    {
        deletebeg();
    }
    else
    {
        temp=head;
        temp1=head->next;
        for(int i=1;i<pos-1;i++)
        {
            temp=temp->next;
            temp1=temp1->next;
        }
        printf("the deleted item is:%d",temp1->data);
        temp->next=temp1->next;
        free(temp1);
    }
}
void reverse()
{
    if(head!=NULL)
    {
        temp=head;
        temp1=head->next;
        head=head->next;
        temp->next=NULL;
        while(head!=NULL)
        {
            head=head->next;
            temp1->next=temp;
            temp=temp1;
            temp1=head;
        }
        head=temp;
    }
}



