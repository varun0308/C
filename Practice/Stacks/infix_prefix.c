#include<stdio.h>
#include<string.h>

int F(char symbol) 
{
    switch(symbol)
    {
        case '+' : 
        case '-' : return 1;
        case '/' :
        case '*' : return 3;
        case '^' :
        case '$' : return 6;
        case '#' : return -1;
        case '(' : return 0;
        default : return 7;

    }
}

// Input precedence
int G(char symbol)
{
    switch(symbol)
    {
        case '+' :
        case '-' : return 2;
        case '/' :
        case '*' : return 4;
        case '^' :
        case '$' : return 5;
        case ')' : return 9;
        case '(' : return 0;
        default : return 8;

    }
}

void infix_prefix(char infix[],char prefix[])
{
    int top,i,j;
    char stack[30],symbol;
    top = -1;
    stack[++top] = '#' ;
    j=0;
    strrev(infix);
    for(i=0;i<strlen(infix);i++)
    {
        symbol = infix[i];
        while(F(stack[top]) > G(symbol))
            prefix[j++] = stack[top--];

        if(F(stack[top]) != G(symbol))
            stack[++top] = symbol;
        else 
            top--;

    }
    while(stack[top] != '#')
        prefix[j++] = stack[top--];
    prefix[j] = '\0';
    strrev(prefix);
}

int main()
{
    char infix[20],prefix[20];
    printf("Enter valid expression : ");
    scanf("%s",infix);
    infix_prefix(infix,prefix);
    printf("%s",prefix);
}
