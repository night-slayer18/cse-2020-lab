#include<stdio.h>
int rear=-1;
int front=-1;
int n;
int cq[10];
void enqueue();
void dequeue();
void display();
void main()
{
    int op;
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    do
    {
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Quit\n");
        printf("Choose option\n");
        scanf("%d",&op);
        switch(op)
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
                break;
            default:
                printf("Invalid entry\n");
        }
    }while(op!=4);
}
void enqueue()
{
    int next;
    int item;
    next=(rear+1)%n;
    if(next==front)
        printf("Queue is full\n");
    else
    {
        printf("Enter element\n");
        scanf("%d",&item);
        if(front==-1)
            front=0;
        rear=next;
        cq[rear]=item;
    }
}
void dequeue()
{
    int val;
    if(front==-1)
        printf("Queue is empty\n");
    else
    {
        val=cq[front];
        printf("Deleted element is %d\n",val);
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front=(front+1)%n;
    }
} 
void display()
{
    int i;
    for(i=front;i!=rear;i=(i+1)%n)
        printf("%d\t",cq[i]);
    printf("%d\n",cq[i]);
}






