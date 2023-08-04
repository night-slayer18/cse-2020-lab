#include <sys/time.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#define HOST "localhost"
#include <sys/types.h>
#include <netdb.h>

struct pkt {
		int ACK;
		int seqnum;
		char data[25];
};

#define W 5


int main(int argc, char *argv[]){
	int no_frames,i_windw,counter_ack=0;
	int senderSocket,i,n;
	char input[25];
	struct timeval timeout={2,0}; //set timeout for 2 seconds
	int recvlen;
	struct sockaddr_in receiverAddr,senderAddr;	//clientAddr is new
	socklen_t addr_size;
	struct hostent *host;
	int counter=0;
	int err;
	struct pkt packet,recvPacket;
	
	
   
    
    if(argc != 3){
		printf("Usage : %s <IP> <PORT>\n", argv[0]);
		return 0;
	}
	
	host = gethostbyname(argv[1]);	//127.0.0.1
	
	if (host == NULL) {
        printf("ERROR, no such host as %s\n", HOST);
        exit(0);
    }
    
	senderSocket = socket(AF_INET, SOCK_DGRAM, 0); //using diagram instead of stream-- UDP
	
	receiverAddr.sin_family = AF_INET;
	receiverAddr.sin_port = htons(atoi(argv[2]));
	receiverAddr.sin_addr = *((struct in_addr *)host->h_addr);
	
	memset(receiverAddr.sin_zero, '\0', sizeof receiverAddr.sin_zero);

	addr_size = sizeof receiverAddr;
	
	printf("\nEnter the number of Frames: ");
   	scanf("%d",&no_frames);
	printf("\nEnter a string to send, q to quit\n ");

		
		scanf("%s",input);
		
		if(strcmp("q",input)==0){
			printf("Quiting\n");
			return 0;
		}
		
		strcpy(packet.data,input);
		for(i_windw=0;i_windw<W;i_windw++)
		{
			if(counter<=(no_frames-1))
			{
				packet.seqnum=counter;
				
				//int socket fd,     payload,  length,      flags,      "to"-destination IP and POrt, sizeof
				sendto(senderSocket, &packet, sizeof(packet), 0, (struct sockaddr*)&receiverAddr,  addr_size);
				
				printf("Sent frame with seq number %d\n",packet.seqnum);
				counter++;
				setsockopt(senderSocket,SOL_SOCKET,SO_RCVTIMEO,(char*)&timeout,sizeof(struct timeval));

			}
		}
	counter_ack=0;
	while(1)
	{			
		/* set receive UDP message timeout */
		
		i_windw=0;
		if((counter_ack>no_frames-1)){break;}
		/* Receive UDP message */
		recvlen =  recvfrom(senderSocket, &recvPacket, sizeof(recvPacket), 0,(struct sockaddr*)&receiverAddr, &addr_size);
		if (recvlen >= 0) {
				//Message Received
				if(recvPacket.ACK == counter_ack){
						printf("Ack received for %d\n\n",counter_ack);
						
						
						if((counter_ack>no_frames-1)){break;}
						else if((counter>no_frames-1)){
						printf("all frames sent");
						counter++;counter_ack++;
						continue;}
						packet.seqnum=counter;
						sendto(senderSocket, &packet, sizeof(packet), 0, (struct sockaddr*)&receiverAddr,  addr_size);
		
						printf("Sent frame with seq number %d\n",packet.seqnum);
						setsockopt(senderSocket,SOL_SOCKET,SO_RCVTIMEO,(char*)&timeout,sizeof(struct timeval));
						counter++;
						counter_ack++;
					}
		}
		else{
				//Message Receive Timeout			
				printf("Timeout! Resending pkts from %d:\n",counter_ack);
				counter=counter_ack;
				for(i_windw=0;i_windw<W;i_windw++)
				{
					if(counter<=(no_frames-1))
						{
							packet.seqnum=counter;
				
							//int socket fd,     payload,  length,      flags,      "to"-destination IP and POrt, sizeof
							sendto(senderSocket, &packet, sizeof(packet), 0, (struct sockaddr*)&receiverAddr,  addr_size);
							
							printf("Sent frame with seq number %d\n",packet.seqnum);
							counter++;
							setsockopt(senderSocket,SOL_SOCKET,SO_RCVTIMEO,(char*)&timeout,sizeof(struct timeval));

					}
			}			
		}
	}
	return 0;	
}

