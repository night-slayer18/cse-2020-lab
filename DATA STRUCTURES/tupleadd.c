#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,row,col,non1,non2,t1,t2,k1,k2,k3;
    printf("enter the number of rows:");
    scanf("%d",&row);
    printf("enter the number of column:");
    scanf("%d",&col);
    printf("enter the number of non zero elements of first matrix:");
    scanf("%d",&non1);
    printf("enter the number of non zero elements of second matrix:");
    scanf("%d",&non2);
    printf("enter the first tuple representation matrix\n");
    for(i=1;i<=non1;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    a[0][0]=row;
    a[0][1]=col;
    a[0][2]=non1;
    printf("the first tuple matrix is\n");
    for(i=0;i<=non1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the second tuple representation matrix\n");
    for(i=1;i<=non2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    b[0][0]=row;
    b[0][1]=col;
    b[0][2]=non2;
    printf("the second tuple matrix is\n");
    for(i=0;i<=non2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    t1=non1;
    t2=non2;
    k1=1;k2=1;k3=1;
    while(k1<=t1 && k2<=t2)
    {
        if(a[k1][0]<b[k2][0])
        {
            c[k3][0]=a[k1][0];
            c[k3][1]=a[k1][1];
            c[k3][2]=a[k1][2];
            k3++;
            k1++;
        }
        else if(a[k1][0]>b[k2][0])
        {
            c[k3][0]=b[k2][0];
            c[k3][1]=b[k2][1];
            c[k3][2]=b[k2][2];
            k3++;
            k2++;
        }
        else if(a[k1][0]==b[k2][0])
        {
            if(a[k1][1]<b[k2][1])
            {
                c[k3][0]=a[k1][0];
                c[k3][1]=a[k1][1];
                c[k3][2]=a[k1][2];
                k3++;
                k1++;
            }
            else if(a[k1][1]>b[k2][1])
            {
                c[k3][0]=b[k2][0];
                c[k3][1]=b[k2][1];
                c[k3][2]=b[k2][2];
                k3++;
                k2++;
            }
            else
            {
                c[k3][0]=a[k1][0];
                c[k3][1]=a[k1][1];
                c[k3][2]=a[k1][2]+b[k2][2];
                k1++;
                k2++;
                k3++;
            }
        }
    }
    while(k1<=t1)
    {
        c[k3][0]=a[k1][0];
        c[k3][1]=a[k1][1];
        c[k3][2]=a[k1][2];
        k3++;
        k1++;
    }
    while(k2<=t2)
    {
        c[k3][0]=b[k2][0];
        c[k3][1]=b[k2][1];
        c[k3][2]=b[k2][2];
        k3++;
        k2++;
    }
    c[0][0]=a[0][0];
    c[0][1]=a[0][1];
    c[0][2]=k3-1;
    printf("the sum of the two tuple matrix is\n");
    for(i=0;i<k3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
    	printf("\n");
    }
}

