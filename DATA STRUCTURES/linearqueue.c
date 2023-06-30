#include<stdio.h>
int rear=-1;
int front=-1;
int n;
int queue[10];
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
        printf("Choose option:");
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
    int c;
    if(rear==n-1)
        printf("Queue is full\n");
    else
    {
        printf("Enter the element\n");
        scanf("%d",&c);
        if(front==-1&&rear==-1)
            front=0;
        rear++;
        queue[rear]=c;
    }
}
void dequeue()
{
    int f;
    if(front==-1&&rear==-1)
        printf("Queue is empty\n");
    else
    {
        f=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
            front++;
        printf("Deleted element is: %d\n",f);
    }
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
        printf("%d\t",queue[i]);
    printf("\n");
}




