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
				count[j]=next;
				next++;
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
					count[j]=next;
					next++;
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
			count[pos]=next;
			next++;
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




enter the number of frames:3
enter the number of pages:20
enter the reference string
7
0
1
2
0
3
0
4
2
3
0
3
2
1
2
0
1
7
0
1
the entered reference string is 
7	0	1	2	0	3	0	4	2	3	0	3	2	1	2	0	1	7	0	1
LRU PAGING ALGORITHM

incoming 7-----7	-1	-1	
incoming 0-----7	0	-1	
incoming 1-----7	0	1	
incoming 2-----2	0	1	
incoming 0-----2	0	1	
incoming 3-----2	0	3	
incoming 0-----2	0	3	
incoming 4-----4	0	3	
incoming 2-----4	0	2	
incoming 3-----4	3	2	
incoming 0-----0	3	2	
incoming 3-----0	3	2	
incoming 2-----0	3	2	
incoming 1-----1	3	2	
incoming 2-----1	3	2	
incoming 0-----1	0	2	
incoming 1-----1	0	2	
incoming 7-----1	0	7	
incoming 0-----1	0	7	
incoming 1-----1	0	7	

PAGE COUNT:12
