#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/wait.h>
void main()
{
	pid_t a;
	a=fork();
	if(a==0)
	{
		printf("i am child\n");
	}
	else if(a>0)
	{
		wait(NULL);
		printf("i am parent\n");
	}
	else if(a<0)
	{
		printf("error");
	}
}



i am child
i am parent
