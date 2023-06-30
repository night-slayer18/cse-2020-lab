#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
void main(int argc,char *argv[])
{
	int f1,f2,sz;
	char *c=(char *)calloc(100,sizeof(char));
	f1=open(argv[1], O_RDONLY);
	f2=open(argv[2], O_WRONLY);
	sz=read(f1,c,100);
	sz=write(f2,"start\n",strlen("start\n"));
	write(f2,c,strlen(c));
	sz=write(f2,"stop\n",strlen("stop\n"));
	printf(" %s %s %d",argv[1],argv[2],argc);
	printf("\n");
}
