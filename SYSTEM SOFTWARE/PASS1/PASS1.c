#include<stdio.h>
#include<string.h>
void main()
{
	char opcode[10],mnemonic[3],operand[10],label[10],code[10];
	int locctr,start,length;
	FILE *fin,*fop,*fp1,*fsym,*fp2;
	fin=fopen("input.txt","r");
	fop=fopen("optab.txt","r");
	fp1=fopen("pass1op.txt","w");
	fp2=fopen("len.txt","w");
	fsym=fopen("symtab.txt","w");
	fscanf(fin,"%s %s %s",label,opcode,operand);
	printf("%s",opcode);
	if(strcmp(opcode,"START")==0)
	{
		start=atoi(operand);
		locctr=start;
		fprintf(fp1,"\t%s\t%s\t%s\n",label,opcode,operand);
		fscanf(fin,"%s %s %s",label,opcode,operand);
	}
	else
	{
		locctr=0;
	}
	while(strcmp(opcode,"END")!=0)
	{
		fprintf(fp1,"%d\t%s\t%s\t%s\n",locctr,label,opcode,operand);
		if(strcmp(label,"**")!=0)
		{
			fprintf(fsym,"%s\t%d\n",label,locctr);
		}
		rewind(fop);
		fscanf(fop,"%s %s",code,mnemonic);
		while(strcmp(code,"END")!=0)
		{
			if(strcmp(opcode,code)==0)
			{
				locctr+=3;
				break;
			}
			fscanf(fop,"%s %s",code,mnemonic);
		}
		if(strcmp(opcode,"WORD")==0)
		{
			locctr+=3;
		}
		else if(strcmp(opcode,"RESW")==0)
		{
				locctr+=3*atoi(operand);
		}
		else if(strcmp(opcode,"RESB")==0)
		{
			locctr+=(atoi(operand));
		}
		else if(strcmp(opcode,"BYTE")==0)
		{
			++locctr;
		}
		fscanf(fin,"%s %s %s",label,opcode,operand);
	}
	fprintf(fp1,"%d\t%s\t%s\t%s\n",locctr,label,opcode,operand);
	length=locctr-start;
	fprintf(fp1,"the length of the program is:%d",length);
	fprintf(fp2,"%d",length);
	fclose(fin);
	fclose(fop);
	fclose(fp1);
	fclose(fp2);
	fclose(fsym);
}
			
