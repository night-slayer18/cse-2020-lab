#include<ctype.h>
#include<stdio.h>
#include<string.h>
int iskeyword(char *b)
{
	if(!strcmp(b,"void")||!strcmp(b,"main")||!strcmp(b,"int")||!strcmp(b,"printf")||!strcmp(b,"return")||!strcmp(b,"float"))
		return 1;
	else
		return 0;
}
int isspecial(char ch)
{
	if(ch=='{'||ch=='}'||ch=='('||ch==')'||ch==','||ch==';')
		return 1;
	else
		return 0;
}
void main()
{
	FILE* fp;
	char ch,buf[100];
	int c=0,state=0,b=0;
	fp=fopen("input.txt","r");
	while(!feof(fp))
	{
		ch=fgetc(fp);
		buf[c++]=ch;
		switch(state)
		{
			case 0:
				if(isdigit(ch))
					state=1;
				else if(isalpha(ch)||ch=='_')
					state=2;
				else if(isspecial(ch))
					state=3;
				else if(ch=='+')
					state=4;
				else if(ch=='-')
					state=5;
				else if(ch=='*'||ch=='%')
					state=6;
				else if(ch=='<'||ch=='>'||ch=='='||ch=='!')
					state=7;
				else if(ch=='/')
					state=8;
				else if(ch==' '||ch=='\n'||ch=='\t')
					c=0;
				break;
			case 1:
				if(isdigit(ch)||ch=='.')
					state=1;
				else
				{
					buf[c-1]='\0';
					printf("Number: %s\n",buf);
					state=0;
					c=0;
					fseek(fp,-1,SEEK_CUR);
				}
				break;
			case 2:
				if(isalpha(ch)||ch=='_'||isdigit(ch))
					state=2;
				else
				{
					buf[c-1]='\0';
					if(iskeyword(buf))
						printf("Keyword: %s\n",buf);
					else
					{
						printf("Identifier: %s\n",buf);
					}
					c=0;
					state=0;
					fseek(fp,-1,SEEK_CUR);
				}
				break;
			case 3:
					buf[c-1]='\0';
					printf("Special charachter: %s\n",buf);
					c=0;
					state=0;
					fseek(fp,-1,SEEK_CUR);
					break;
			case 4:
				if(ch=='+')
				{
					buf[c]='\0';
					printf("Increment operator: %s\n",buf);
					//b=1;
				}
				else
				{
					buf[c-1]='\0';
					printf("Arithmetic operator: %s\n",buf);
					fseek(fp,-1,SEEK_CUR);
				}
				c=0;
				state=0;
				//if(b==0)
					//fseek(fp,-1,SEEK_CUR);
				//b=0;
				break;
			case 5:
				if(ch=='-')
				{
					buf[c]='\0';
					printf("Decrement operator: %s\n",buf);
					//b=1;
				}
				else
				{
					buf[c-1]='\0';
					printf("Arithmetic operator: %s\n",buf);
					fseek(fp,-1,SEEK_CUR);
				}
				c=0;
				state=0;
				//if(b==0)
				//	fseek(fp,-1,SEEK_CUR);
				//b=0;
				break;
			case 6:
				buf[c-1]='\0';
				printf("Arithmetic operator: %s\n",buf);
				c=0;
				state=0;
				fseek(fp,-1,SEEK_CUR);
				break;
			case 7:
				if(ch=='=')
				{
					buf[c]='\0';
					printf("Relational operator: %s\n",buf);
				//	b=1;
				}
				else
				{
					buf[c-1]='\0';
					if(buf[c-2]=='=')
						printf("Assignment operator: %s\n",buf);
					else
						printf("Relational operator: %s\n",buf);
					fseek(fp,-1,SEEK_CUR);
				}
				c=0;
				state=0;
				//if(b==0)
				//	fseek(fp,-1,SEEK_CUR);
				//b=0;
				break;
			case 8:
				if(ch=='/')
				{
					while(ch!='\n')
						ch=fgetc(fp);
				}
				else if(ch=='*')
				{
					while(!(buf[c-2]=='*' && buf[c-1]=='/'))
					{
						ch=fgetc(fp);
						buf[c++]=ch;
					}
				}
				else
				{
					buf[c-1]='\0';
					printf("Arithmetic operator: %s\n",buf);
					fseek(fp,-1,SEEK_CUR);
				}
				c=0;
				state=0;
				break;
		}
	}
}
