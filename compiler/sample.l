%{
#include<stdio.h>
#include<string.h>
void arm();
%}
%%
[0-9]+ { arm();}
%%
void arm()
{
	int value,arr=0,rem;
	value=atoi(yytext);
	while(value!=0)
	{
		rem=value%10;
		arr=arr+(rem*rem*rem);
		value=value/10;
		
	}
	if(arr==atoi(yytext))
	{
		printf("ARmstrong");
	}
	else
	{
		printf("NOt armstrong");
	}
}
//int yywrap(){}
void main()
{
	printf("Enter the number");
	yylex();
	
}
