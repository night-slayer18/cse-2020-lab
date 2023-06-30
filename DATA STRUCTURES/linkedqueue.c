#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
}*head=NULL,*tail=NULL,*temp;
void enqueue();
void dequeue();
void display();
int item;
void main()
{
    int opt;
    do
    {
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT");
        printf("enter the option:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                    enqueue();
                    break;
            case 2: 
                    dequeue();
                    break;
            case 3:
                    display();
                    break;
            case 4:
                    exit(0);
                    break;
            default:
                    printf("enter a valid input");
        }
    }while(opt!=4);
}
void enqueue()
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
        tail=p;
        head->next=NULL;
        tail->next=NULL;
    }
    else
    {
        tail->next=p;
        tail=p;
        tail->next=NULL;
    }
}
void dequeue()
{
    if(head==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=head;
        printf("the deleted data is:%d",temp->data);
        head=head->next;
        free(temp);
        
    }
}
void display()  
{ 
    temp=head;      
    if(head == NULL)  
    {  
        printf("list is empty");  
    }  
    else  
    {   
        while(temp!=NULL)   
        {  
            printf("%d\t",temp->data);  
            temp=temp->next;  
        }  
    }  
}


