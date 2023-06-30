#include<stdio.h>
void push(char c);
int pop();
int isp(char c);
int icp(char c);
void display(char c[]);
int top=-1;
char stack[20];
void main()
{
	int i=0,j=0,l=0,k=0;
	char x,item,infix[20],postfix[20];
	printf("Enter the string\n");
	scanf("%s",infix);
	push('(');
	for(k=0;infix[k]!='\0';k++)
	{
	 	l++;
	}
	infix[l]=')';
	infix[l+1]='\0';
	printf("infix:%s\n",infix);
	while(top>-1)
	{
	 	item=infix[i];
	 	x=pop();
	 	if((item>='a')&&(item<='z'))
	 	{
	 		push(x);
	 		postfix[j]=item;
	 		j++;
	 	}
	 	else if(item==')')
	 	{
	 		while(x!='(')
	 		{
	 			postfix[j]=x;;
	 			x=pop();
	 			j++;
	 		}
	 	}
	 	else if(isp(x)>=icp(item))
	 	{
	 		while(isp(x)>=icp(item))
	 		{
	 			postfix[j]=x;
	 			x=pop();
	 			j++;
	 		}
	 		push(x);
	 		push(item);
	 	}
	 	else if(isp(x)<icp(item))
	 	{
	 		push(x);
	 		push(item);
	 	}
	 	i++;
	}
	postfix[j]='\0';
 	printf("postfix:%s",postfix);
}
void push(char c)
{
	 top++;
	 stack[top]=c;
}
int pop()
{
	char d;
	d=stack[top];
	top--;
	return d;
}
int isp(char c)
{
	int s=-1;
	switch(c)
	{
	 	case '+':
	 	case '-':
		 		s=1;
		 		break;
	 	case '*':
	 	case '/':
		 		s=2;
		 		break;
	 	case '^':
		 		s=3;
		 		break;
	 	case '(':
		 		s=0;
		 		break;
	}
	return s;
}
int icp(char c)
{
int s=-1;
switch(c)
{
	 	case '+':
	 	case '-':
		 		s=1;
		 		break;
	 	case '*':
	 	case '/':
		 		s=2;
		 		break;
	 	case '^':
		 		s=4;
		 		break;
	 	case '(':
 				s=5;
 				break;
}
 return s;
}
