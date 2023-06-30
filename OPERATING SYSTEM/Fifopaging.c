#include<stdio.h>
void main()
{
	int i,j,fn,pn,ref[50],frame[50],page_fault=0,victim=-1,flag;
	printf("enter the number of frames:");
	scanf("%d",&fn);
	printf("enter the number of pages:");
	scanf("%d",&pn);
	printf("enter the reference string\n");
	for(i=0;i<pn;i++)
	{
		scanf("%d",&ref[i]);
	}
	printf("the entered pages are\n");
	for(i=0;i<pn;i++)
	{
		printf("%d\t",ref[i]);
	}
	printf("\n\n");
	printf("FIFO PAGE REPLACEMENT ALGORITHM\n");
	for(i=0;i<fn;i++)
	{
		frame[i]=-1;
	}
	for(i=0;i<pn;i++)
	{
		flag=0;
		for(j=0;j<fn;j++)
		{
			if(ref[i]==frame[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			page_fault++;
			victim++;
			victim=victim%fn;
			frame[victim]=ref[i];
			printf("incoming %d------",ref[i]);
			for(j=0;j<fn;j++)
			{
				printf("%d\t",frame[j]);
			}
			printf("\n");
		}
		else
		{
			printf("incoming %d------\n",ref[i]);
		}
	}
	printf("\nPAGE FAULT: %d",page_fault);
	printf("\n");
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
the entered pages are
7	0	1	2	0	3	0	4	2	3	0	3	2	1	2	0	1	7	0	1

FIFO PAGE REPLACEMENT ALGORITHM
incoming 7------7	-1	-1	
incoming 0------7	0	-1	
incoming 1------7	0	1	
incoming 2------2	0	1	
incoming 0------
incoming 3------2	3	1	
incoming 0------2	3	0	
incoming 4------4	3	0	
incoming 2------4	2	0	
incoming 3------4	2	3	
incoming 0------0	2	3	
incoming 3------
incoming 2------
incoming 1------0	1	3	
incoming 2------0	1	2	
incoming 0------
incoming 1------
incoming 7------7	1	2	
incoming 0------7	0	2	
incoming 1------7	0	1	

PAGE FAULT: 15
