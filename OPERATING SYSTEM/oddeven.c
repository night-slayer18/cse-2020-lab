#include<stdio.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<unistd.h>
void main()
{
	pid_t a;
	a=fork();
	if(a==0)
	{
		printf("CHILD\n");
		for(int i=1;i<=10;i=i+2)
		{
			printf("%d\n",i);
		}
	}
	else if(a>0)
	{
		wait(NULL);
		printf("PARENT\n");
		for(int i=2;i<=10;i=i+2)
		{
			printf("%d\n",i);
		}
	}
	else
	{
		printf("error");
	}
}



CHILD
1
3
5
7
9
PARENT
2
4
6
8
10
