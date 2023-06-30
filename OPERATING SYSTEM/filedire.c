#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/sysmacros.h>
#include<stdio.h>
#include<string.h>
void main()
{
	struct stat sb;
	char a[100];
	printf("enter the filename:");
	scanf(" %s",a);
	stat(a,&sb);
	if(S_ISREG(sb.st_mode))
	{
		printf("REGULAR FILE IN CURRENT DIRECTORY\n");
	}
	else if(S_ISDIR(sb.st_mode))
	{
		printf("DIRECTORY\n");
	}
	else
	{
		printf("FILE NOT FOUND\n");
	}
}



enter the filename:f1
FILE NOT FOUND

enter the filename:sam
DIRECTORY

enter the filename:f1.txt
REGULAR FILE IN CURRENT DIRECTORY
