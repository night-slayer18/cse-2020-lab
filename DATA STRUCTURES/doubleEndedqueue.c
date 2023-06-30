#include<stdio.h>
#include<stdlib.h>
void pushdq();
void popdq();
void inject();
void eject();
void display();
int item,front=-1,rear=-1,temp,l,dq[20];
void main()
{
    int opt;
    printf("enter the size of the queue:");
    scanf("%d",&l);
    do
    {
        printf("\n1.PUSHDQ-insertion through front\n2.POPDQ-delete from front\n3.INJECT-insertion through rear\n4.EJECT-deletion from rear\n5.DISPLAY\n6.EXIT\n");
        printf("enter the option:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                    pushdq();
                    break;
            case 2: 
                    popdq();
                    break;
            case 3:
                    inject();
                    break;
            case 4:
                    eject();
                    break;
            case 5:
                    display();
                    break;
            case 6:
                    exit(0);
                    break;
            default:
                    printf("enter a valid input");
        }
    }while(opt!=6);
}
void pushdq()
{
    if(front==-1)
    {
       temp=0;
    }
    else if(front==0)
    {
        temp=l-1;
    }
    else
    {
        temp=front-1;
    }
    if(temp==rear)
    {
        printf("dequeu is full");
    }
    else
    {
        if(rear==-1)
        {
            rear=0;
        }
        front=temp;
        printf("enter the data:");
        scanf("%d",&item);
        dq[front]=item;
    }
}
void popdq()
{
    int val;
    if(front==-1)
    {
        printf("the queue is empty");
    }
    else
    {
        val=dq[front];
        printf("the deleted element is:%d",val);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%l;
        }
    }
}
void inject()
{
    temp=(rear+1)%l;
    if(temp==front)
    {
        printf("queue is full");
    }
    else
    {
        printf("enter the element:");
        scanf("%d",&item);
        if(front==-1 && rear==-1)
        {
            front=0;
        }
        rear=temp;
        dq[rear]=item;
    }
}
void eject()
{
    if(rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        item=dq[rear];
        printf("deleted element is:%d",item);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(rear==0)
        {
            rear=l-1;
        }
        else
        {
            rear=rear-1;
        }
    }
}
void display()
{
    int i;
    for(i=front;i!=rear;i=(i+1)%l)
        printf("%d\t",dq[i]);
    printf("%d\n",dq[i]);
}    



