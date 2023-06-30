#include <sys/types.h>
#include <sys/stat.h>
#include <stdint.h>
#include <time.h>
#include <stdio.h>
#include <sys/sysmacros.h>
#include<string.h>
void main()
{
	struct stat sb;
	char a[100];
	printf("enter the file name:");
	gets(a);
	stat(a,&sb);
	printf("Mode:                     %jo (octal)\n",(uintmax_t) sb.st_mode);
    printf("File size:                %jd bytes\n",(intmax_t) sb.st_size);
    printf("Last file access:         %s", ctime(&sb.st_atime));
    printf("Last file modification:   %s", ctime(&sb.st_mtime));
}



enter the file name:f2.txt
Mode:                     100644 (octal)
File size:                34 bytes
Last file access:         Thu Jun  9 10:03:12 2022
Last file modification:   Thu Jun  9 09:59:52 2022
