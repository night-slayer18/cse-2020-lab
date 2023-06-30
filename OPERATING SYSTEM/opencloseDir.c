#include<stdio.h>
#include<dirent.h>
#include<sys/stat.h>
#include<sys/types.h>
void main()
{
	DIR *d;
	int i;
	struct dirent *de;
	struct stat s;
	stat(".",&s);
	d=opendir(".");
	while((de=readdir(d))!=NULL)
	{
		i=0;
		printf("\nname :  %s\n",de->d_name);
		printf("type : ");
		if((de->d_type)==4)
			printf("directory\n");
		else if((de->d_type)==8)
			printf("regular file\n");
		printf("Mode:%o\n",s.st_mode);
		if((de->d_name[i])=='a')
			printf("size in kilobyte %d\n",de->d_reclen);
	}
	closedir(d);
	
}