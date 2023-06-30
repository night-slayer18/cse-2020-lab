#include<stdio.h>
int n=0,a[20];
void insert();
void display();
void main()
{
	int opt;
	do
	{
		printf("\n1.INSERT\n2.DISPLAY\n3.EXIT\n");
		printf("enter your option:");
		scanf("%d",&opt);
		switch(opt)
		{
		 case 1:
		 	insert();
		 	break;
		 case 2:
		 	display();
		 	break;
		 case 3:
		 	break;
		 default:
		 	printf("enter a valid input");
		}
	}while(opt!=3);
}
void insert()
{
	int item,size=20,i,p,temp;
	if(n>=size)
	{
		printf("Insertion not possible");
		
	}
	else
	{
		printf("Enter the element\n");
		scanf("%d",&item);
		n=n+1;
		a[n]=item;
		i=n;
		p=i/2;
		while(p>0 && a[p]<a[i])
		{
			temp=a[i];
			a[i]=a[p];
			a[p]=temp;
			i=p;
			p=p/2;
		}
	}
}
void display()
{
	if(n==0)
	{
		printf("Empty\n");
	}
	else
	{
		for(int i=1;i<=n;i++)
			printf("%d\t",a[i]);
		printf("\n");
	}
}
