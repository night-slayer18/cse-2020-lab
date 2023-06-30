#include<stdio.h>
void main()
{
	int spar[10][10],tup[10][10],i,j,row,col,count=0,nonzero=0;
	printf("enter the number of rows:");
	scanf("%d",&row);
	printf("enter the number of columns:");
	scanf("%d",&col);
	printf("enter the sparse matrix\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			scanf("%d",&spar[i][j]);
		}
	}
	printf("the entered matrix is\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",spar[i][j]);
			if(spar[i][j]!=0)
			{
				count++;
			}
		}
		printf("\n");
	}
	tup[0][0]=row;
	tup[0][1]=col;
	tup[0][2]=count;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(spar[i][j]!=0)
			{
				nonzero++;
				tup[nonzero][0]=i;
				tup[nonzero][1]=j;
				tup[nonzero][2]=spar[i][j];
			}
		}
	}
	printf("the tuple form of entered spar matrix is\n");
	for(i=0;i<nonzero+1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",tup[i][j]);
		}
		printf("\n");
	}
}
		
