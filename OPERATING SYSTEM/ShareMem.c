#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
void main()
{
	void *st;
        int shmid = shmget((key_t)3214,1024,0666|IPC_CREAT);
        printf("smh id is:%d",shmid);
        st = shmat(shmid,NULL,0);  
	printf("\nshm address:%p\n",st);
}

