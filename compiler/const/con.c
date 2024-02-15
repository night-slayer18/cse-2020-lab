#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct exp{
	char op,arg1[10],arg2[10],res[10];
	int ignore;
}arr[10];
int isdigi(char a[])
{
	for(int i=0;i<strlen(a);i++)
	{
		if(!isdigit(a[i]))
			return 0;
	}
	return 1;
}
void main()
{
	int n,i,j,r,ch=1,ig=0;
	printf("Enter the number of expressions\n");
	scanf("%d",&n);
	printf("Enter the expression\n");
	for(i=1;i<=n;i++)
	{
		scanf(" %c%s%s%s",&arr[i].op,arr[i].arg1,arr[i].arg2,arr[i].res);
		arr[i].ignore=0;
	}
	printf("\nInput\n");
	printf("op\targ1\targ2\tres\n");
	for(i=1;i<=n;i++)
	{
		printf("%c\t%s\t%s\t%s\n",arr[i].op,arr[i].arg1,arr[i].arg2,arr[i].res);
	}
	while(ch==1)
	{
		ch=0;
		for(i=1;i<=n;i++)
		{
			ig=0;
			if(arr[i].op=='=' && arr[i].ignore==0)
			{
				for(j=i+1;j<=n;j++)
				{
					if(arr[j].op=='=' && !(strcmp(arr[i].res,arr[j].res))){
						break;
					}
					if(!(strcmp(arr[j].arg1,arr[i].res)))
					{
						strcpy(arr[j].arg1,arr[i].arg1);
						ig=1;
					}
					if(!(strcmp(arr[j].arg2,arr[i].res)))
					{
						strcpy(arr[j].arg2,arr[i].arg1);
						ig=1;
					}
				}
				if(ig==1)
				{
					arr[i].ignore=1;
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			if((isdigi(arr[i].arg1))&&(isdigi(arr[i].arg2)))
			{
				if(arr[i].op=='+')
					r=atoi(arr[i].arg1)+atoi(arr[i].arg2);
				if(arr[i].op=='*')
					r=atoi(arr[i].arg1)*atoi(arr[i].arg2);
				if(arr[i].op=='-')
					r=atoi(arr[i].arg1)-atoi(arr[i].arg2);
				if(arr[i].op=='/')
					r=atoi(arr[i].arg1)/atoi(arr[i].arg2);
				if(arr[i].op=='^')
				{
					r=1;
					for(i=1;i<=atoi(arr[i].arg2);i++)
						r*=atoi(arr[i].arg1);
				}
				arr[i].op='=';
				sprintf(arr[i].arg1,"%d",r);
				strcpy(arr[i].arg2,"_");
				ch=1;
			}
		}
	}
	printf("\nResult\n");
	printf("op\targ1\targ2\tres\n");
	for(i=1;i<=n;i++)
	{
		if(arr[i].ignore==0)
			printf("%c\t%s\t%s\t%s\n",arr[i].op,arr[i].arg1,arr[i].arg2,arr[i].res);
	}
}
/*
Enter the number of expressions
5
Enter the expression
=	3	_	a
=	4	_	b
+	a	b	t0
+	b	t0	t1
+	t0	t1	t2

Input
op	arg1	arg2	res
=	3	_	a
=	4	_	b
+	a	b	t0
+	b	t0	t1
+	t0	t1	t2

Result
op	arg1	arg2	res
=	18	_	t2
*/
