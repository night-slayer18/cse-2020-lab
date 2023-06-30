#include<stdio.h>
struct student
{
	int roll;
	char name[10];
	int mark1,mark2,mark3,total;
};
struct student s[10],swap;
void main()
{
	int i,j,n;
	printf("enter the number of student details");
	scanf("%d",&n);
	printf("enter the details of students");
	for(i=0;i<n;i++)
	{
		printf("enter the details of student %d\n",i+1);
		printf("roll\tname\tmark1\tmark2\tmark3\n");
		scanf("%d%s%d%d%d",&s[i].roll,s[i].name,&s[i].mark1,&s[i].mark2,&s[i].mark3);
		s[i].total+=s[i].total+s[i].mark1+s[i].mark2+s[i].mark3;
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j].total<s[j+1].total)
			{
				swap=s[j];
				s[j]=s[j+1];
				s[j+1]=swap;
			}
		}
	}
	printf("the rank list is\n");
	printf("rank\troll\tname\ttotal\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\t%s\t%d\n",i+1,s[i].roll,s[i].name,s[i].total);
	}
}
