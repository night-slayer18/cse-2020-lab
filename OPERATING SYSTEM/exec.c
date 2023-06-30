#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include<sys/wait.h>
#include <unistd.h>
void main(int argc, char* argv[])
{
    printf("Filename : %s",argv[1]);
    pid_t a=fork();
    if(a<0)
    	printf("Error");
    else if(a>0)
    {
    		wait(NULL);
   		printf("\nChild Terminated");    	
    }
    else
    {
    	execlp("cat","cat",argv[1],NULL);
    }
    printf("\n");
}



