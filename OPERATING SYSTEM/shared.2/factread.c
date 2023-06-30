#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<string.h>
void main()
{
	char str[20];
	int i,a=0,b,fact=1;
	char c;
	int shmid=shmget((key_t)2234,1024,0666);
	void *shmadd;
	shmadd=shmat(shmid,NULL,0);
	strcpy(str,shmadd);
	for(i=0;str[i]!='\0';i++)
	{
		c=str[i];
		b=((int)c)-48;
		a=(a*10)+b;
	}
	printf("Number entered: %d",a);
	printf("\n");
	for(i=1;i<=a;i++)
		fact=fact*i;
	printf("Factorial of %d: %d",a,fact);
	printf("\n");
}
