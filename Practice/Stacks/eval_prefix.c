#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

float operate(char symbol,int op1, int op2)
{
switch(symbol)
{
    case '+': return op1+op2;
    case '-': return op1-op2;
    case '*': return op1*op2;
    case '/': return op1/op2;
    case '^': return pow(op1,op2);
}
}
int main()
{
    char prefix[30];
    scanf("%s",prefix);
    int stack[10];
    int top = 0;
    float value = 0;
    strrev(prefix);
    for(int i=0;i<strlen(prefix);i++)
    {
        char symbol = prefix[i];
        if(isdigit(symbol))
            stack[top++] = symbol - '0';
        else 
        {
            int op1 = stack[--top] ;
            int op2 = stack[--top] ;
            value = operate(symbol,op1,op2);
            stack[top++] = value;
        }
    }
    value= stack[--top];
    printf("Value = %0.2f",value);
    return 0;
}