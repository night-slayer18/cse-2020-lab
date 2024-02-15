#include<stdio.h>
#include<string.h>
#include<ctype.h>
char pro[10][10],a,fi[10],li[10];
int n,k=0,e,fo=0,h=0,q;
void first(char a);
void follow(char a);
void add(char a);
void main()
{
	char c;
	printf("Enter the number of productions\n");
	scanf("%d",&n);
	printf("Enter the productions\n");
	for(int i=0;i<n;i++)
		scanf("%s",pro[i]);
	printf("First:\n");
	for(int i=0;i<n;i++){
		e=0;
		fo=1;
		q=0;
		first(pro[i][0]);
		printf("%c==%s\n",pro[i][0],fi);
		//for(int j=0;j<10;j++){
		//	fi[j]='\0';
		//}
		fi[0]='\0';
		k=0; 
	}
	printf("Follow:\n");
	for(int i=0;i<n;i++){
		e=0;
		fo=0;
		for(int j=0;j<10;j++)
			li[j]='\0';
		h=0;
		li[h++]=pro[i][0];
		follow(pro[i][0]);
		printf("%c==%s\n",pro[i][0],fi);
		//for(int j=0;j<10;j++){
		//	fi[j]='\0';
		//}
		fi[0]='\0';
		
		k=0;
	}
}
void first(char a)
{
	if(!(isupper(a)))
	{
		fi[k++]=a;
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			if(pro[i][0]==a)
			{
				int j;
				for(j=2;j<strlen(pro[i]);j++)
				{
					if(pro[i][j]==a)
					{
						break;
					}
					else if(pro[i][j]=='#')
					{
						e=1;
						if(fo==1 && q==0)
							add('#');
						break;
					}
					else if(!(isupper(pro[i][j])))
					{
						add(pro[i][j]);
						break;
					}
					else
					{
						q=1;
						first(pro[i][j]);
						if(e==1)
							e=0;
						else
							break;
					}
				}
				if(j==strlen(pro[i]))
				{
					if(fo==1)
						add('#');
						e=1;
				}
			}
		}
	}
}
void add(char a)
{
	int f=0;
	for(int i=0;i<strlen(fi);i++)
	{
		if(fi[i]==a)
		{
			f=1;
		}
	}
	if(f==0)
		fi[k++]=a;
}
void follow(char a)
{
	if(a==pro[0][0])
		add('$');
	for(int i=0;i<n;i++)
	{
		for(int j=2;j<strlen(pro[i]);j++)
		{
			if(pro[i][j]==a)
			{
				int m=j+1;
				for(m=j+1;m<strlen(pro[i]);m++)
				{
					if(!(isupper(pro[i][m])))
					{
						add(pro[i][m]);
						break;
					}
					else
					{
						first(pro[i][m]);
						if(e==1)
							e=0;
						else
							break;
					}
				}
				if(m==strlen(pro[i]))
				{
					if(pro[i][0]!=a)
					{
						int fla=1;
						for(int y=0;y<h;y++)
						{
							if(pro[i][0]==li[y])
							{
								fla=0;
							}
						}
						if(fla==1)
						{
							li[h++]=pro[i][0];
							follow(pro[i][0]);
						}
					}
				}
			}
		}
	}
}




