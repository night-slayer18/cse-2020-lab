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
		printf("CHILD\n");
		printf("Child PID:%d Child PPID:%d",getpid(),getppid());
	}
	else if(a>0)
	{
		wait(NULL);
		printf("\nPARENT\n");
		printf("Parent PID:%d Parent PPID:%d",getpid(),getppid());
		printf("\n");
	}
	else if(a<0)
	{
		printf("error");
	}
}


CHILD
Child PID:5653 Child PPID:5652
PARENT
Parent PID:5652 Parent PPID:2707

