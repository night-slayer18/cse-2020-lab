#include<stdio.h>
#include<semaphore.h>
#include<pthread.h>
#include<time.h>
sem_t mutex,full,empty;
int buffer[5],get=0,item=0,gitem,/*pro[20],con[20],*/put=0;
void *producer(void *arg)
{
	while(1)
	{
		sem_wait(&empty);
		sem_wait(&mutex);
		buffer[put%5]=item;
		item++;
		printf("Producer(%d) produces(%d) item buffered[%d]:%d\n",(*(int *)arg),buffer[put%5],put%5,item);
		put++;
		sem_post(&mutex);
		sem_post(&full);
		sleep(3);
	}
}
void *consumer(void *arg)
{
	while(1)
	{
		sem_wait(&full);
		sem_wait(&mutex);
		gitem=buffer[get%5];
		printf("Consumer(%d) consumes(%d) item buffered[%d]:%d\n",(*(int *)arg),gitem,get%5,gitem);
		get++;
		sem_post(&mutex);
		sem_post(&empty);
		sleep(3);
	}
}
void main()
{
	int p,c,j,k;
	pthread_t a[10],b[10];
	sem_init(&mutex,0,1);
	sem_init(&full,0,0);
	sem_init(&empty,0,5);
	printf("enter the number of producers:");
	scanf("%d",&p);
	printf("enter the number of consumers:");
	scanf("%d",&c);
	for(j=0;j<p;j++)
	{
		//pro[j]=j;
		pthread_create(&a[j],NULL,producer,&j);
	}
	for(k=0;k<c;k++)
	{
		//con[k]=k;
		pthread_create(&b[k],NULL,consumer,&k);
	}
	for(j=0;j<p;j++)
	{
		pthread_join(a[j],NULL);
	}
	for(k=0;k<c;k++)
	{
		pthread_join(b[k],NULL);
	}
}



enter the number of producers:3
enter the number of consumers:3
Producer(2) produces(0) item buffered[0]:1
Producer(3) produces(1) item buffered[1]:2
Consumer(1) consumes(0) item buffered[0]:0
Consumer(2) consumes(1) item buffered[1]:1
Producer(3) produces(2) item buffered[2]:3
Consumer(3) consumes(2) item buffered[2]:2
Producer(0) produces(3) item buffered[3]:4
Producer(0) produces(4) item buffered[4]:5
Consumer(3) consumes(3) item buffered[3]:3
Consumer(3) consumes(4) item buffered[4]:4
Producer(0) produces(5) item buffered[0]:6
Consumer(3) consumes(5) item buffered[0]:5

