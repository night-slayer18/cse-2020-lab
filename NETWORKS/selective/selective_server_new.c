#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <stdlib.h>
#define W 5
struct pkt {
		int ACK;
		int seqnum;
		char data[25];
};
struct buffer{
	int seq[10];
	int marked[10];
}buf;
int main(int argc, char *argv[]){
	int no_frames,i_windw=0,counter_ack=0,i;
	int recvSocket,err,flag;

	struct pkt recvPacket,ackPacket;
	struct sockaddr_in recieverAddr,senderAddr;
	struct sockaddr_storage serverStorage;
	socklen_t addr_size;
	int drop=0;
	int counter=0;
	int seq_num;
	
	if(argc != 3){
		printf("Usage : %s <IP> <PORT>\n", argv[0]);
		return 0;
	}
	
	recvSocket = socket(AF_INET, SOCK_DGRAM, 0); //using diagram instead of stream-- UDP ?AF
	
	if (recvSocket < 0) 
    	printf("ERROR opening socket\n");

	recieverAddr.sin_family = AF_INET;	
	recieverAddr.sin_port = htons(atoi(argv[2]));
	recieverAddr.sin_addr.s_addr = inet_addr(argv[1]);
	
	memset(recieverAddr.sin_zero, '\0', sizeof recieverAddr.sin_zero);
	
	addr_size = sizeof senderAddr;
	err = bind(recvSocket, (struct sockaddr*)&recieverAddr, addr_size);
	
	 if(err == -1)
    {
        perror("bind error: ");
        exit(0);
    }
    i_windw=0;
	while(1)
	{
		//wait for a packet
		while(i_windw<5)
		{
			err = recvfrom(recvSocket, &recvPacket, sizeof(recvPacket), 0,(struct sockaddr*)&senderAddr, &addr_size);
			seq_num=recvPacket.seqnum;
			flag=0;
			for(i=0;i<i_windw;i++)
			{
				if(buf.seq[i]==seq_num)
				flag=1;
				else
				continue;
			}
			if(flag==0)
			{
				buf.seq[i_windw]=seq_num;
				i_windw++;
			}
			if(err>0)
			{
				int drop = rand() % 10;
				if(drop<2)
				{
					//drop pkt occasionally, for testing purposes
					ackPacket.ACK=counter;	//last correctly recieved
					printf("Dropping %s, %d\n",recvPacket.data,recvPacket.seqnum);
					continue;	//go back to wait for a packet (this one never reached)
				}
				else if(drop<2.5)
				{
					//drop ack
					counter;
					printf("Correctly recieved: %s, with seq number :%d ack: %d, but the ack will be Nack\n",recvPacket.data,recvPacket.seqnum,counter);
					ackPacket.ACK=recvPacket.seqnum;
					strcpy(ackPacket.data,"N");
					sendto(recvSocket, &ackPacket, sizeof(ackPacket), 0, (struct sockaddr*)&senderAddr,  addr_size);
					continue;
				}
				 else if(recvPacket.seqnum==counter)
				{
					ackPacket.ACK=counter;
					strcpy(ackPacket.data,recvPacket.data);
					printf("Correctly recieved: %s, with seq number :%d ack: %d\n",recvPacket.data,recvPacket.seqnum,counter);
					sendto(recvSocket, &ackPacket, sizeof(ackPacket), 0, (struct sockaddr*)&senderAddr,  addr_size);
					i_windw--;
					printf("\nwindw-!!!%d",i_windw);
					counter++;
				}
				printf("\npack-!!!%d",ackPacket.ACK);	
			} 
			else 
			{
				perror("recv failed\n");
			}
		}
	}
	return 0;
}

