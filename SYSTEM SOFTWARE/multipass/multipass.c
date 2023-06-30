#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char operand[10],mnemonic[3],opcode[10],label[10],code[10],addr[5],symaddr[5],op[5],start[10],temp[30],line[20],symtab[10],opmne[10];
	int locctr,length,st,c,op1[10],len1,len2,j=0,len;
	FILE *fin,*fop,*fp1,*fp2,*fsym,*fint,*flen;
	fin=fopen("input.txt","r");
	fop=fopen("optab.txt","r");
	fp1=fopen("pass1op.txt","w");
	fsym=fopen("symtab.txt","w");
	fp2=fopen("len.txt","w");
	fscanf(fin,"%s%s%s",label,opcode,operand);
	if(strcmp(opcode,"START")==0)
	{
		st=atoi(operand);
		locctr=st;
		fprintf(fp1,"\t%s\t%s\t%s\n",label,opcode,operand);
		fscanf(fin,"%s%s%s",label,opcode,operand);
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
		fscanf(fop,"%s%s",code,mnemonic);
		c=0;
		while(strcmp(code,"END")!=0)
		{
			if(strcmp(opcode,code)==0)
			{
				locctr=locctr+3;
				c++;
				break;
			}
			fscanf(fop,"%s%s",code,mnemonic);
		}
		if(strcmp(opcode,"WORD")==0)
			locctr=locctr+3;
		else if(strcmp(opcode,"RESW")==0)
			locctr=locctr+(3*(atoi(operand)));
		else if(strcmp(opcode,"RESB")==0)
			locctr=locctr+atoi(operand);
		else if(strcmp(opcode,"BYTE")==0)
		{
			if(operand[0]=='X')
				locctr+=1;
			else if(operand[0]=='C')
				locctr=locctr+(strlen(operand)-3);
		}
		else if(c==0)
			fprintf(fp1,"ERROR: Invalid operation code\n");
		fscanf(fin,"%s%s%s",label,opcode,operand);
	}
	fprintf(fp1,"%d\t%s\t%s\t%s\n",locctr,label,opcode,operand);
	length=locctr-st;
	fprintf(fp1,"The lenght of program is %d",length);
	fprintf(fp2,"%d",length);
	fclose(fin);
	fclose(fop);
	fclose(fp1);
	fclose(fp2);
	fclose(fsym);
	
	fint=fopen("pass1op.txt","r");
    flen=fopen("len.txt","r");
    fsym=fopen("symtab.txt","r");
    fop=fopen("optab.txt","r");
    fscanf(fint,"%s%s%s",label,opcode,operand);
    if(strcmp(opcode,"START")==0)
    {
        strcpy(start,operand);
        fscanf(flen,"%d",&len);
    }
    printf("H^%s^00%s^00%d\nT^00%s^00%d^",label,start,len,start,len);
    fscanf(fint,"%s%s%s%s",addr,label,opcode,operand);
    while(strcmp(opcode,"END")!=0)
    {
        fscanf(fop,"%s%s",opmne,op);
        while(!feof(fop))
        {
            if(strcmp(opcode,opmne)==0)
            {
                fclose(fop);
                fscanf(fsym,"%s%s",symtab,symaddr);
                while(!feof(fsym))
                {
                    if(strcmp(operand,symtab)==0)
                    {
                        printf("%s%s^",op,symaddr);
                        break;
                    }
                    fscanf(fsym,"%s%s",symtab,symaddr);
                }
                break;
            }
            rewind(fsym);
            fscanf(fop,"%s%s",opmne,op);
        }
        if((strcmp(opcode,"BYTE")==0) || (strcmp(opcode,"WORD"))==0)
        {
            if(strcmp(opcode,"WORD")==0)
                printf("00000%s^",operand);
            if(strcmp(opcode,"BYTE")==0)
            {
                len=strlen(operand);
                for(int i=2;i<len-1;i++)
                {
                    printf("%c",operand[i]);
                }
            }
        }
       
        fscanf(fint,"%s%s%s%s",addr,label,opcode,operand);
        fop=fopen("optab.txt","r");
        rewind(fop);
    }
    printf("\nE^00%s\n",start);
    fclose(fint);
    fclose(fop);
    fclose(fsym);
    fclose(flen);
}

/*
H^COPY^001000^0023
T^001000^0023^001018^0C1012^501021^541022^000005^F1
E^001000
*/

