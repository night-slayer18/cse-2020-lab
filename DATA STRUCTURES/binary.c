#include<stdio.h>
void main()
{
	int i,j,ele,n,a[10],low=0,high,mid=0,temp=0,flag=0;
	printf("enter the limit:");
	scanf("%d",&n);
	printf("enter the elements of the array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("enter the element to be searched:");
	scanf("%d",&ele);
	high=n-1;
	for(i=0;i<n;i++)
	{
		mid=(low+high)/2;
		if(a[mid]<ele)
		{
			low=mid+1;
		}
		else if(a[mid]==ele)
		{
			flag=1;
			break;
		}
		else
		{
			high=mid-1;
		}
	}
	if(flag==1)
		printf("element found");
	else 
		printf("not found");
}
	
