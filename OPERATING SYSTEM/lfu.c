#include<stdio.h>
void main()
{
    int mem[10],pg[30],i,j,k,p,f,flag,count=0,count1[10],count2[10],min,m[10],g;
    printf("LFU PAGE REPLACEMENT ALGORITHM\n");
    printf("Enter the number of frames\n");
    scanf("%d",&f);
    printf("Enter the number of pages\n");
    scanf("%d",&p);
    printf("Enter the page numbers\n");
    for(i=0;i<p;i++)
        scanf("%d",&pg[i]);
    printf("The given pages are:\n");
    for(i=0;i<p;i++)
        printf("%d\t",pg[i]);
    for(i=0;i<f;i++)
    {
        mem[i]=-1;
        count1[i]=0;
        count2[i]=1;
    }
    printf("\n");
    for(i=0;i<p;i++)
    {
        flag=0;
        for(j=0;j<f;j++)
        {
            count1[j]++;
            if(pg[i]==mem[j])
            {
                flag=1;
                count2[j]++;
            }
        }
        if(flag==0)
        {
            min=0;
            k=0;
            g=0;
            for(j=0;j<f;j++)
            {
                if(count2[min]>count2[j])
                {
                    min=j;
                    k=0;
                }
                else if(count2[min]==count2[j])
                {
                    g++;
                    m[k]=j;
                    k++;
                }
            }
            k=0;
            min=m[0];
            for(j=0;j<g;j++)
            {
                if(count1[min]<count1[m[j]])
                {
                    min=m[j];
                }
            }
            mem[min]=pg[i];
            count1[min]=0;
            count2[min]=1;
            count++;
        }
        printf("Page no-> %d:\t",pg[i]);
        for(j=0;j<f;j++)
            printf("%d\t",mem[j]);
        printf("\n");
    }
    printf("Number of page faults: %d\n",count);
}

/*
LFU PAGE REPLACEMENT ALGORITHM
Enter the number of frames
3
Enter the number of pages
16
Enter the page numbers
7 0 2 4 3 1 4 7 2 0 4 3 0 3 2 7
The given pages are:
7       0       2       4       3       1       4       7       2       0       4       3       0       3       2       7
Page no-> 7:    7       -1      -1
Page no-> 0:    7       0       -1
Page no-> 2:    7       0       2
Page no-> 4:    4       0       2
Page no-> 3:    4       3       2
Page no-> 1:    4       3       1
Page no-> 4:    4       3       1
Page no-> 7:    4       7       1
Page no-> 2:    4       7       2
Page no-> 0:    4       0       2
Page no-> 4:    4       0       2
Page no-> 3:    4       0       3
Page no-> 0:    4       0       3
Page no-> 3:    4       0       3
Page no-> 2:    4       2       3
Page no-> 7:    7       2       3
Number of page faults: 12*/


