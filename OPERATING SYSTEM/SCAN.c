#include<stdio.h>
void main()
{
	int i,j,k,n,num,track[50],head_mov=0,end=199,temp;
	printf("enter the number of tracks: ");
	scanf("%d",&n);
	printf("enter the head start:");
	scanf("%d",&num);
	printf("enter the tracks\n");
	for(i=2;i<=n+1;i++)
	{
		scanf("%d",&track[i]);
	}
	printf("\n");
	track[0]=0;
	track[1]=num;
	track[n+2]=end;
	n=n+3;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(track[j]>track[j+1])
			{
				temp=track[j];
				track[j]=track[j+1];
				track[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(track[i]==num)
		{
			k=i;
			break;
		}
	}
	if((num-0)<(199-num))
	{
		for(j=k;j>0;j--)
		{
				head_mov+=(track[j]-track[j-1]);
				printf("%d->",track[j]);
		}
		printf("0->");
		head_mov=head_mov+(track[k+1]-0);
		for(j=k+1;j<n-2;j++)
		{
				head_mov+=(track[j+1]-track[j]);
				printf("%d->",track[j]);
		}
		printf("%d",track[n-2]);
		printf("\n");
		printf("total head movement:%d",head_mov);
	}
	else if((num-0)>(199-num))
    {
    		for(j=i;j<n-1;j++)
    		{
    			head_mov+=(track[j+1]-track[j]);
    			printf("%d-->",track[j]);
    		}
    		printf("199-->");
    		head_mov+=(199-track[i-1]);
    		for(j=i-1;j>1;j--)
    		{
    			head_mov+=(track[j]-track[j-1]);
    			printf("%d-->",track[j]);
    		}
    		printf("%d",track[1]);
    		printf("\nTotal head movements: %d",head_mov);
    		printf("\n");
    }	 
}
	
