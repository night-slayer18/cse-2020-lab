#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>
void main()
{
    char *str;
    int shmid = shmget((key_t)3214,1024,0666);
    void *shmaddr=shmat(shmid,NULL,0);
    str=(char*)shmaddr;
    printf("Data read from memory: %s\n",str);
}
      

OUTPUT
Data read from memory: OPERATING SYSTEM OS 