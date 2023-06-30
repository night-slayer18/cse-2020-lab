#include<stdio.h>
void main()
{
	int a[10],i,n,j,k=1,min,loc,temp;
	printf("enter the number of terms:");
	scanf("%d",&n);
	printf("enter the elements into the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the elements of the array before sorting are\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<min)
			{
				min=a[j];
				loc=j;
			}
		}
		if(loc!=i)
		{
			printf("pass %d\n",k);
			k++;
			temp=a[loc];
			a[loc]=a[i];
			a[i]=temp;
			int m;
			for(m=0;m<n;m++)
				printf("%d\t",a[m]);
			printf("\n");
		}
		
	}
	printf("\nthe array after sorting is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}
