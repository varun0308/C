#include<stdio.h>
#include<string.h>

char open(char x)
{
    if(x == ')')
        return '(';
    else if (x == ']')
        return '[';
    else
        return '{';
}

int check(char infix[])
{
    int top = -1;
    char stack[10];
    for(int i=0;i<strlen(infix);i++)
    {
        if(infix[i] == '(' || infix[i] == '[' || infix[i] == '{')
        {
            stack[top] = infix[i];
            top++;
        }

        else if(infix[i] == ')' || infix[i] == ']' || infix[i] == '}')
        {
            if(top == -1)
                return -1;

            else if(stack[top - 1] == open(infix[i]))
            {
                top -= 1 ;
            } 
            else 
            {
                return -1;
            }
        }
    }
    return 1;
}

int main()
{
    char infix[20];
    printf("Enter valid expression : ");
    scanf("%s",infix);
    if(check(infix) == 1)
        printf("It is a valid expression\n");
    else 
        printf("Not a valid expression");
}