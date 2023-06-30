#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],i,j,k,n1,n2;
	printf("enter the limit of first polynomial:");
	scanf("%d",&n1);
	printf("enter the limit of second polynomial:");
	scanf("%d",&n2);
	printf("enter the first polynomial\n");
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the second polynomail\n");
	for(j=0;j<n2;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0,j=0,k=0;(i<n1&&j<n2);i++,j++,k++)
	{
		c[k]=a[i]+b[j];
	}
	while(i<n1)
	{
		c[k++]=a[i++];
	}
	while(j<n2)
	{
		c[k++]=b[j++];
	}
	printf("the first poly is\n");
	for(i=n1-1;i>=0;i--)
	{
		printf("%dx^%d+",a[i],i);
	}
	printf("the second polynomail is\n");
	for(j=n2-1;j>=0;j--)
	{
		printf("%dx^%d+",b[j],j);
	}
	printf("the sum of two polynomial is\n");
	for(k=0;(k<n1||k<n2);k++)
	{
		printf("%dx^%d+",c[k],k);
	}
}
	
		
