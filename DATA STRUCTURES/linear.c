#include<stdio.h>
void main()
{
	int i,n,ele,a[10],count=0;
	printf("enter the limit:");
	scanf("%d",&n);
	printf("enter the elements of the array\n:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to be seached:");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			printf("element %d has been found at position %d\n",ele,i+1);
			count++;
		}
		
	}
}
