#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int z=0,i=0,j=0,c=0,ck;
char a[16], stk[15];
void check()
{
    ck=0;
    for(z=0;z<c;z++)
    {
        if(stk[z]=='i')
        {
            printf("REDUCE E -> i");
            stk[z]='E';
            stk[z+1]='\0';
            printf("\n$%s\t%s$\t",stk,a);
            ck=1;
        }
    }
    for(z=0;z<c-2;z++)
    {
        if(stk[z]=='E'&&stk[z+1]=='+'&&stk[z+2]=='E')
        {
            printf("REDUCE E -> E+E");
            stk[z]='E';
            stk[z+1]='\0';
            stk[z+2]='\0';
            printf("\n$%s\t%s$\t",stk,a);
            i=i-2;
            ck=1;
        }
        if(stk[z]=='E'&&stk[z+1]=='*'&&stk[z+2]=='E')
        {
            printf("REDUCE E -> E*E");
            stk[z]='E';
            stk[z+1]='\0';
            stk[z+2]='\0';
            printf("\n$%s\t%s$\t",stk,a);
            i=i-2;
            ck=1;
        }
        if(stk[z]=='('&&stk[z+1]=='E'&&stk[z+2]==')')
        {
            printf("REDUCE E -> (E)");
            stk[z]='E';
            stk[z+1]='\0';
            stk[z+2]='\0';
            printf("\n$%s\t%s$\t",stk,a);
            i=i-2;
            ck=1;
        }
    }
}

int main()
{
    printf("Enter input string\n");
    scanf("%s",a);
    c=strlen(a);
    printf("\nstack \t input \t action");
    printf("\n$\t%s$\t", a);
    for(j=0,i=0;j<c;i++,j++)
    {
        printf("%s","SHIFT");
        stk[i]=a[j];    
        stk[i+1]='\0';
        a[j]=' ';
        printf("\n$%s\t%s$\t",stk,a);
        ck=1;
        while(ck!=0)
            check();
    }
    check();
    if(stk[0]=='E' && stk[1]=='\0')
        printf("Accept\n");
    else
        printf("Reject\n");
}
