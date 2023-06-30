#include<stdio.h>
int n,stack[50],top=-1;
void push();
void pop();
void display();
void main()
{
    int opt;
    printf("enter the limit:");
    scanf("%d",&n);
    do
    {
        printf("\n1.push\t2.pop\t3.display\t4.exit\n");
        printf("enter the option:");
        scanf("%d",&opt);
    
    
        switch(opt)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
        }
    }while(opt!=4);
}
void push()
{
    int ele;
    if(top>=n-1)
    {
        printf("stack is full\n");
    }
    else
    {
        printf("enter the element:");
        scanf("%d",&ele);
        top++;
        stack[top]=ele;
    }
}
void pop()
{
    int a;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        a=stack[top];
        printf("the deleted element is %d",a);
        top--;
    }
}
void display()
{
    int i;
    printf("the elements are\n");
    for(i=0;i<=top;i++)
    {
        printf("%d\t",stack[i]);
    }
}
