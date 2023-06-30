#include<stdio.h>
void FirstFit();
void BestFit();
void WorstFit();
void main()
{
    int opt;
    do
    {
        printf("\n\n1.FIRST FIT\n2.BEST FIT\n3.WORST FIT\n4.EXIT\n");
        printf("enter the option:");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1:
                    FirstFit();
                    break;
            case 2:
                    BestFit();
                    break;
            case 3:
                    WorstFit();
                    break;
            case 4:
                    printf("EXITING.......\n");
                    break;
            default:
                    printf("enter a valid option\n");
        }
    }while(opt!=4);
}

void FirstFit()
{
    printf("\nFIRST FIT MEMORY ALLOCATION STRATEGY \n");
    int i,j,n,m,block[10],size[10],frag[10],status[10],alloc[10],b_size[10];
    printf("enter the number of blocks:");
    scanf("%d",&n);
    printf("enter the number of File:");
    scanf("%d",&m);
    printf("enter the size of the blocks\n");
    for(i=0;i<n;i++)
    {
        printf("Block %d:",i+1);
        scanf("%d",&block[i]);
        status[i]=0;
    }
    printf("enter the File size\n");
    for(i=0;i<m;i++)
    {
        printf("File size %d:",i+1);
        scanf("%d",&size[i]);
        alloc[i]=-1;
        b_size[i]=0;
        frag[i]=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(!status[j] && block[j]>=size[i] )
            {
                alloc[i]=j;
                b_size[i]=block[j];
                frag[i]=block[j]-size[i];
                status[j]=1;
                break;
            }    
        }
    }
    printf("File_no\t\tFile_size\tblock_allocated\t\tBlock_size\tFragment\n");
    for(i=0;i<m;i++)
    {
        printf("%d \t\t%d\t\t", i+1, size[i]);
        if(alloc[i]!=-1)
        {
            printf("%d\t",alloc[i]+1);
        }
        else
        {
            printf("not allocated");
        }
        printf("\t\t%d\t\t%d\n",b_size[i],frag[i]);
    }
}
void BestFit()
{
    printf("\nBEST FIT MEMORY ALLOCATION STRATEGY \n");
    int i,j,n,m,block[10],size[10],frag[10],status[10],alloc[10],b_size[10],highest=10000;
    printf("enter the number of blocks:");
    scanf("%d",&n);
    printf("enter the number of File:");
    scanf("%d",&m);
    printf("enter the size of the blocks\n");
    for(i=0;i<n;i++)
    {
        printf("Block %d:",i+1);
        scanf("%d",&block[i]);
        status[i]=0;
    }
    printf("enter the File size\n");
    for(i=0;i<m;i++)
    {
        printf("File size %d:",i+1);
        scanf("%d",&size[i]);
        alloc[i]=-1;
        b_size[i]=0;
        frag[i]=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
              if(block[j]>=size[i] && status[j]!=1)
              {
                  if(highest>block[j])
                  {
                      highest=block[j];
                      alloc[i]=j;
                      b_size[i]=block[j];
                  }
              }
        }
        if(highest!=10000)
        {
            frag[i]=highest-size[i];
        }
        status[alloc[i]]=1;
        highest=10000;
    }
    printf("File_no\t\tFile_size\tblock_allocated\t\tBlock_size\tFragment\n");
    for(i=0;i<m;i++)
    {
        printf("%d \t\t%d\t\t", i+1, size[i]);
        if(alloc[i]!=-1)
        {
            printf("%d\t",alloc[i]+1);
        }
        else
        {
            printf("not allocated");
        }
        printf("\t\t%d\t\t%d\n",b_size[i],frag[i]);
    }    
}
void WorstFit()
{
    printf("\nWORST FIT MEMORY ALLOCATION STRATEGY \n");
    int i,j,n,m,block[10],size[10],frag[10],status[10],alloc[10],b_size[10],highest=0;
    printf("enter the number of blocks:");
    scanf("%d",&n);
    printf("enter the number of File:");
    scanf("%d",&m);
    printf("enter the size of the blocks\n");
    for(i=0;i<n;i++)
    {
        printf("Block %d:",i+1);
        scanf("%d",&block[i]);
        status[i]=0;
    }
    printf("enter the File size\n");
    for(i=0;i<m;i++)
    {
        printf("File size %d:",i+1);
        scanf("%d",&size[i]);
        alloc[i]=-1;
        b_size[i]=0;
        frag[i]=0;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
              if(block[j]>=size[i] && status[j]!=1)
              {
                  if(highest<block[j])
                  {
                      highest=block[j];
                      alloc[i]=j;
                      b_size[i]=block[j];
                  }
              }
        }
        if(highest!=0)
        {
            frag[i]=highest-size[i];
        }
        status[alloc[i]]=1;
        highest=0;
    }
    printf("File_no\t\tFile_size\tblock_allocated\t\tBlock_size\tFragment\n");
    for(i=0;i<m;i++)
    {
        printf("%d \t\t%d\t\t", i+1, size[i]);
        if(alloc[i]!=-1)
        {
            printf("%d\t",alloc[i]+1);
        }
        else
        {
            printf("not allocated");
        }
        printf("\t\t%d\t\t%d\n",b_size[i],frag[i]);
    }    
}



1.FIRST FIT
2.BEST FIT
3.WORST FIT
4.EXIT
enter the option:1

FIRST FIT MEMORY ALLOCATION STRATEGY 
enter the number of blocks:5
enter the number of File:4
enter the size of the blocks
Block 1:100
Block 2:200
Block 3:300
Block 4:600
Block 5:500
enter the File size
File size 1:212
File size 2:11
File size 3:850
File size 4:900
File_no		File_size	block_allocated		Block_size	Fragment
1 		    212		    3			        300		    88
2 		    11	    	1		        	100	    	89
3 	    	850		    not allocated	   	0	    	0
4 	    	900		    not allocated		0	    	0


1.FIRST FIT
2.BEST FIT
3.WORST FIT
4.EXIT
enter the option:2

BEST FIT MEMORY ALLOCATION STRATEGY 
enter the number of blocks:5
enter the number of File:4
enter the size of the blocks
Block 1:100
Block 2:200
Block 3:300
Block 4:600
Block 5:500
enter the File size
File size 1:212
File size 2:11
File size 3:850 
File size 4:900
File_no		File_size	block_allocated		Block_size	Fragment
1 	    	212	    	3		        	300	    	88
2 	       	11		    1		        	100	    	89
3 		    850		    not allocated		0	    	0
4 		    900		    not allocated		0	    	0


1.FIRST FIT
2.BEST FIT
3.WORST FIT
4.EXIT
enter the option:3

WORST FIT MEMORY ALLOCATION STRATEGY 
enter the number of blocks:5
enter the number of File:4
enter the size of the blocks
Block 1:100
Block 2:200
Block 3:300
Block 4:600
Block 5:500
enter the File size
File size 1:212
File size 2:11
File size 3:850
File size 4:900
File_no		File_size	block_allocated		Block_size	Fragment
1 		    212		    4			        600	    	388
2 		    11		    5			        500	    	489
3 		    850		    not allocated		0	    	0
4 		    900	    	not allocated		0	    	0


1.FIRST FIT
2.BEST FIT
3.WORST FIT
4.EXIT
enter the option:4
EXITING.......

