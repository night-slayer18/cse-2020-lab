#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
void main()
{
    char *str;
    int shmid = shmget((key_t)3214,1024,0666|IPC_CREAT);
    void *shmaddr=shmat(shmid,NULL,0);
    str=(char*)shmaddr;
    printf("data written:");
    gets(str);
    printf("Data written in memory: %s\n",str);
}

OUTPUT
data written:OPERATING SYSTEM OS 
Data written in memory: OPERATING SYSTEM OS 
