#include<stdio.h>
#include<string.h>
struct process
{
	int AT,BT,WT,TT,status;
	char pname[10];
}p[10],temp;
struct gantt
{
	int ST,CT;
	char pname[10];
}g[10];
void main()
{
	int n,i=0,j=0,k=0,m;
	float wait=0,turn=0;
	printf("Enter the number of process:");
	scanf("%d",&n);
	for(m=0;m<n;m++)
	{
		printf("enter details of process %d",m+1);
		printf("\n");
		printf("Name:");
		scanf(" %s",p[m].pname);
		printf("Arrival Time:");
		scanf("%d",&p[m].AT);
		printf("Burst Time:");
		scanf("%d",&p[m].BT);
		printf("\n");
		p[m].status=0;
	}
	for(m=0;m<n-1;m++)
	{
		for(k=0;k<n-m-1;k++)
		{
			if(p[k].AT>p[k+1].AT)
			{
				temp=p[k];
				p[k]=p[k+1];
				p[k+1]=temp;
			}
		}
	}
	k=0;
	while(k<n)
	{
		if((p[k].AT<=i)&&(p[k].status==0))
		{
			strcpy(g[j].pname,p[k].pname);
			g[j].ST=i;
			g[j].CT=i+p[k].BT;
			i=g[j].CT;
			p[k].WT=g[j].ST-p[k].AT;
			p[k].TT=g[j].CT-p[k].AT;
			p[k].status=1;
			j++;
			k++;
		}
		else if(p[k].AT>i)
		{
			strcpy(g[j].pname,"idle");
			g[j].ST=i;
			g[j].CT=p[k].AT;
			i=g[j].CT;
			j++;
		}
	}
	printf("Name\tArrival Time\tBurst Time\tTurnaround Time\tWaiting Time\n");
	for(m=0;m<n;m++)
	{
		printf("%s\t %d \t %d  \t %d  \t  %d\n",p[m].pname,p[m].AT,p[m].BT,p[m].TT,p[m].WT);
		wait=wait+p[m].WT;
		turn=turn+p[m].TT;
	}
	printf("---------------------------------------------------------\n");
	printf("|");
	for(m=0;m<j;m++)
	{
		printf("%s\t|",g[m].pname);
	}
	printf("\n---------------------------------------------------------\n");
	printf("%d\t",g[j].ST);
	for(m=0;m<j;m++)
	{
		printf("%d\t",g[m].CT);
	}
	printf("\nAverage waiting time = %f",wait/n);
	printf("\nAverage turnaround time = %f\n",turn/n);
}


Enter the number of process:5
enter details of process 1
Name:P0
Arrival Time:2
Burst Time:3

enter details of process 2
Name:P1
Arrival Time:0
Burst Time:2

enter details of process 3
Name:P2
Arrival Time:1
Burst Time:1

enter details of process 4
Name:P3
Arrival Time:7
Burst Time:4

enter details of process 5
Name:P4
Arrival Time:12
Burst Time:2

Name	Arrival Time	Burst Time	Turnaround Time	Waiting Time
P1	          0 	        2  	        2        	  0
P2	          1 	        1           2  	          1
P0	          2 	        3  	        4  	          1
P3	          7 	        4  	        4  	          0
P4	         12 	        2  	        2  	          0
-----------------------------------------
|P1	|P2	|   P0 	|idle|  P3	|idle|  P4	|
-----------------------------------------
0	2	3	    6	 7	    11	 12	    14	
Average waiting time = 0.400000
Average turnaround time = 2.800000
