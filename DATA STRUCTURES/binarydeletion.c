#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *lchild,*rchild;
}*root=NULL,*parent,*temp,*temp1,*temp2;
void insert();
void delete(int );
void inorder(struct node *);
struct node* succ(struct node*);
void main()
{
    int opt,item;
    do
    {
        printf("\n1.INSERT\n2.INORDER\n3.DELETION\n4.EXIT\n");
        printf("enter the option:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                	insert();
                	break;
            case 2:
                	inorder(root);
                	break;
            case 3:
                	printf("Enter the element to be deleted\n");
                	scanf("%d",&item);
                	delete(item);
                	break;
            case 4:
                	break;
            default:
              		printf("Enter a valid input\n");
        }
    } while (opt!=4);
}
void insert()
{
	printf("Enter the element\n");
    	struct node *p;
    	p=(struct node*)malloc(sizeof(struct node));
    	scanf("%d",&p->data);
    	p->lchild=NULL;
    	p->rchild=NULL;
    	temp=root;
    	while(temp!=NULL)
    	{
        	parent=temp;
        	if(p->data<temp->data)
            	temp=temp->lchild;
        	else
            	temp=temp->rchild;
    	}
    	if(root==NULL)
        	root=p;
    	else if(p->data<parent->data)
        	parent->lchild=p;
    	else
       		parent->rchild=p;
}
void delete(int item)
{
    	int item1,flag=0;
    	temp=root;
    	while(temp!=NULL&&flag==0)
    	{
        	if(item<temp->data)
        	{
            	parent=temp;
            	temp=temp->lchild;
        	}
        	else if(item>temp->data)
        	{
            	parent=temp;
            	temp=temp->rchild;
        	}
        	else
            	flag=1;
    }
    	if(flag==0)
        	printf("Element not found\n");
    	else
   	{
   	     if(temp->lchild==NULL&&temp->rchild==NULL)
   	     {
   	         if(temp==root)
   	         {
   	             if(temp->lchild==NULL)
   	             {
				root=temp->rchild;
                    		temp->rchild=NULL;
                     }
                else
                {
                    	root=temp->lchild;
                    	temp->lchild=NULL;
                }
            }
            else if(parent->lchild==temp)
                parent->lchild=NULL;
            else
                parent->rchild=NULL;
        }
        else if(temp->lchild!=NULL&&temp->rchild!=NULL)
        {
            temp2=temp;
            temp1=succ(temp);
            item1=temp1->data;
            delete(item1);
            temp1->data=item1;
        }
        else
        {
            if(temp==root)
            {
                if(temp->lchild==NULL)
                {
                    root=temp->rchild;
                    temp->rchild=NULL;
                }
                else
                {
                    root=temp->lchild;
                    temp->lchild=NULL;
                }
            }
            else if(parent->lchild==temp)
            {
                if(temp->lchild==NULL)
                    parent->lchild=temp->rchild;
                else
                    parent->lchild=temp->lchild;
            }
            else
            {
                if(temp->lchild==NULL)
                    parent->rchild=temp->rchild;
                else
                    parent->rchild=temp->lchild;
            }
        }
    }
}
struct node* succ(struct node * ptr)
{
	temp1=temp->rchild;
	if(temp1!=NULL)
	{
        	while(temp1->lchild!=NULL)
        	temp1=temp1->lchild;
   	}
   	return temp1;
}
void inorder(struct node *temp1)
{
 	if(root==NULL)
	{
		printf("List is empty");
 	}
        else
	{
        	if(temp1!=NULL)
        	{
            	inorder(temp1->lchild);
           	printf("%d\t",temp1->data);
            	inorder(temp1->rchild);
        	}
    	}
}

