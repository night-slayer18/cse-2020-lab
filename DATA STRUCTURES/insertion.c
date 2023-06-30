#include<stdio.h>
void main()
{
	int i,n,a[10],ele,pos;
	printf("enter the limit of array");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element and position\n");
	scanf("%d%d",&ele,&pos);
	for(i=n-1;i<=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=ele;
	printf("the array after insertion\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\t",a[i]);
	}
}
	
	
