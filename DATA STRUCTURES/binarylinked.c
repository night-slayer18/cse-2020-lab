#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
}*head=NULL,*temp;
int item,i;
struct node* middlenode(struct node* headr,struct node* tailr);
struct node* binarySearch(struct node *head, int value);
void display();
void insend();
int main()
{
    int n,ele;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        insend();
    }
    printf("the entered list is\n");
    display();
    printf("\nenter the element to be searched:");
    scanf("%d",&ele);
    if(binarySearch(head,ele)==NULL)
    {
        printf("element not found\n");
    }
    else
    {
        printf("element found\n");
    }
    return 0;
}
struct node* middlenode(struct node* headr,struct node* tailr)
{
    if(headr==NULL)
    {
        return NULL;
    }
    struct node* slow=headr;
    struct node* fast=headr->next;
    while(fast!=tailr)
    {
        fast=fast->next;
        if(fast!=tailr)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    return slow;
}
struct node* binarySearch(struct node *head, int value)
{
    struct node* headr=head;
    struct node* tailr=NULL;
    do
    {
        struct node* mid=middlenode(headr,tailr);
        if(mid==NULL)
        {
            return NULL;
        }
        if(mid->data==value)
        {
            return mid;
        }
        else if(mid->data<value)
        {
            headr=mid->next;
        }
        else
        {
            tailr=mid;
        }
    }while(tailr==NULL||tailr!=headr);
    return NULL;
}
void display()
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
        printf("Elements are:\n");
        temp=head;
        while(temp!=NULL)
        {
          printf("%d\t",temp->data);
          temp=temp->next;
        }
    }
}
void insend()
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    printf("Enter the element:");
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


