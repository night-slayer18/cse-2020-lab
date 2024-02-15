#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 100

char stack[SIZE];
int top = -1;

void push(char item);
char pop();
void post(char infix[], char postfix[]);
int precedence(char op);

int main()
{
    char infix[SIZE], postfix[SIZE],st[100],a,b[10];
    int i=0,j=0,k=0;
    printf("Enter infix expression:");
    fgets(infix, sizeof(infix), stdin);
    post(infix,postfix);
    printf("\nPostfix expression is:");
    puts(postfix);
    printf("\nThe intermediate code generated is\n");
    for(i=0;i<strlen(postfix);i++)
    {
        a=postfix[i];
        if(!(isalpha(a)))
        {
            sprintf(b, "%d", k);
            printf("%c",a);
            if(isdigit(st[j-2])){
            	printf(" t%c",st[j-2]);
            }
            else{
            	printf(" %c",st[j-2]);
            }
            if(isdigit(st[j-1])){
            	printf(" t%c",st[j-1]);
            }
            else{
            	printf(" %c",st[j-1]);
            }
            printf(" t%s\n",b);
            j=j-2;
            st[j]=b[0];
            k++;
            j++;
        }
        else
        {
            st[j++]=a;
        }
    }
   
    return 0;
}

void post(char infix[], char postfix[])
{
    int j = 0, i,k;
    char symbol, next;
    for (i=0; i<strlen(infix); i++)
    {
        symbol = infix[i];
        switch(symbol)
        {
            case '\n':
            case '\t':
            case ' ' : break;

            case '(' : push(symbol);
                       break;

            case ')' : next=pop();
                       while(next != '(')
                       {
                            postfix[j] = next;
                            j++;
                            next=pop();
                       }
                       break;

            case '^' :
            case '/' :
            case '*' :
            case '+' :
            case '-' : while(precedence(stack[top]) >= precedence(symbol))
		                 {
		                      postfix[j] = pop();
		                      j++;
		                 }
		                 push(symbol);
		                 break;
               
            default : postfix[j] = symbol;
                      j++;  
                      break;
        }
    }
    while (top != -1)
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j]='\0';
}

void push(char item)
{
    top++;
    stack[top] = item;
}

char pop()
{
    char item;
    item = stack[top];
    top--;
    return item;
}

int precedence(char op)
{
    switch(op)
    {
        case '^' : return 4;
                   break;
       
        case '*' :
        case '/' : return 3;
                   break;

        case '+' :
        case '-' : return 2;
                   break;
                       
        default : return 0;
                  break;
    }
}
