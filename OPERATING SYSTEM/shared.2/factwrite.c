#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<string.h>
void main()
{
	char str[30];
	int shmid=shmget((key_t)2234,1024,0666|IPC_CREAT);
	void *shmadd;
	shmadd=shmat(shmid,NULL,0);
	printf("Enter a number:");
	scanf("%s",str);
	strcpy(shmadd,str);
}
