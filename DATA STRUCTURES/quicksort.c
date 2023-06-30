#include<stdio.h>
void quicksort(int first,int last);
int i,j,n,pivot,a[10];
void main()
{
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements of the array before sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	quicksort(0,n-1);
	printf("elements of the array after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
void quicksort(int first,int last)
{
	int temp;
	if(first<last)
	{	
		pivot=a[first];
		i=first;
		j=last;
		while(i<j)
		{
			while((a[i]<=pivot&&i<last))
				i++;
			while((a[j]>=pivot&&j>first))
				j--;
			if(i<j)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
		temp=a[j];
		a[j]=a[first];
		a[first]=temp;
		quicksort(first,j-1);
		quicksort(j+1,last);
	}
}

