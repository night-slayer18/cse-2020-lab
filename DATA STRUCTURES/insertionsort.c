#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,min,n,*a,k=1;
	printf("enter the number of elements:");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(a+i));
	}
	printf("the elements of the array before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("\n");
	for(i=1;i<n;i++)
	{
		min=*(a+i);
		for(j=i-1;(j>=0 && min<a[j]);j--)
		{
			*(a+j+1)=*(a+j);
		}
		*(a+j+1)=min;
		printf("pass %d\n",k);
		k++;
		int m;
		for(m=0;m<n;m++)
		{
			printf("%d\t",*(a+m));
		}
		printf("\n");
	}
	printf("the array after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(a+i));
	}
	printf("\n");
}
