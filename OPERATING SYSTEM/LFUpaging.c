#include<stdio.h>
int minPos(int count[],int fn);
void main()
{
	int i,j,fn,pn,frame[50],ref[50],flag1,flag2,count[50],next=1,page_fault=0,min,pos=0;
	printf("enter the number of frames:");
	scanf("%d",&fn);
	printf("enter the number of pages:");
	scanf("%d",&pn);
	printf("enter the reference string\n");
	for(i=0;i<pn;i++)
	{
		scanf("%d",&ref[i]);
	}
	for(i=0;i<fn;i++)
	{
		count[i]=0;
		frame[i]=-1;
	}
	printf("the entered reference string is \n");
	for(i=0;i<pn;i++)
	{
		printf("%d\t",ref[i]);
	}
	printf("\n");
	printf("LRU PAGING ALGORITHM\n");
	for(i=0;i<pn;i++)
	{
		flag1=0;flag2=0;
		for(j=0;j<fn;j++)
		{
			if(frame[j]==ref[i])
			{
				//count[j]++;
				flag1=1;
				flag2=1;
				break;
			}
		}
		if(flag1==0)
		{
			for(j=0;j<fn;j++)
			{
				if(frame[j]==-1)
				{
					frame[j]=ref[i];
					count[j]++;
					flag2=1;
					page_fault++;
					break;
				}
			}
		}
		if(flag2==0)
		{
			pos=minPos(count,fn);
			frame[pos]=ref[i];
			count[pos]=1;
			page_fault++;
		}
		printf("\n");
		printf("incoming %d-----",ref[i]);
		for(j=0;j<fn;j++)
		{
			printf("%d\t",frame[j]);
		}
	}
	printf("\n\nPAGE COUNT:%d",page_fault);
	printf("\n");
}
int minPos(int count[],int fn)
{
	int i,min=count[0],pos=0;
	for(i=1;i<fn;i++)
	{
		if(count[i]<min)
		{
			min=count[i];
			pos=i;
		}
	}
	return pos;
}
