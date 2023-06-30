#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*top=NULL,*temp;
void push();
void pop();
void display();
int item;
void main()
{
    int opt;
    do
    {
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("enter the option:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                    push();
                    break;
            case 2:
                    pop();
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
void push()
{
    struct node *p;
    p=(struct node *)malloc(sizeof(struct node));
    printf("enter the element:");
    scanf("%d",&item);
    p->data=item;
    p->link=top;
    top=p;
}
void pop()
{
    if(top==NULL)
    {
        printf("list is empty");
    }
    else
    {
        temp=top;
        printf("the deleted item is:%d",temp->data);
        top=top->link;
        free(temp);
    }
}
void display()
{
    temp=top;
    if(top==NULL)
    {
        printf("the list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->link;
        }
    }
}

