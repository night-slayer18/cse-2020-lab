#include<stdio.h>
void main()
{
    int a[50],i,j,n,swap;
    printf("enter the limit:");
    scanf("%d",&n);
    printf("enter the elements of the array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
        printf("pass %d\n",i);
       	int m;
        for(m=0;m<n;m++)
       	{
       		printf("%d\t",a[m]);
       	}
        printf("\n");
    }
    printf("the sorted array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}

