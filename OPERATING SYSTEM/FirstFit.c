#include<stdio.h>
void main()
{
	int i,j,k=0,n,m,block[10],size[10],frag[10],status[10],alloc[10],b[10],b_size[10];
	printf("enter the number of blocks:");
	scanf("%d",&n);
	printf("enter the number of File:");
	scanf("%d",&m);
	printf("enter the size of the blocks\n");
	for(i=0;i<n;i++)
	{
		printf("Block %d:",i+1);
		scanf("%d",&block[i]);
		status[i]=0;
	}
	printf("enter the File size\n");
	for(i=0;i<m;i++)
	{
		printf("File size %d:",i+1);
		scanf("%d",&size[i]);
		alloc[i]=-1;
		b_size[i]=0;
		frag[i]=0;
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(!status[j] && block[j]>=size[i] )
			{
				alloc[i]=j;
				b_size[i]=block[j];
				frag[i]=block[j]-size[i];
				status[j]=1;
				break;
			}	
		}
	}
	printf("File_no\t\tFile_size\tblock_allocated\t\tBlock_size\tFragment\n");
	for(i=0;i<m;i++)
	{
		printf("%d \t\t%d\t\t", i+1, size[i]);
		if(alloc[i]!=-1)
		{
			printf("%d\t",alloc[i]+1);
		}
		else
		{
			printf("not allocated");
		}
		printf("\t\t%d\t\t%d\n",b_size[i],frag[i]);
	}
}
