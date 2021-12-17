#include<stdio.h>
#include<string.h>

int check_palindrome(char string[])
{
    char stack[30];
    int top = -1;
    
    for(int i=0;i<strlen(string);i++)
        stack[++top] = string[i];

    for(int i=0;i<strlen(string);i++)
    {
        if(string[i] != stack[top--])
            return 0;
    }
    return 1;
}

int main()
{
    char string[30];
    scanf("%s",string);
    if(check_palindrome(string) == 1)
        printf("Palindrome");
    else 
        printf("Not a plindrome");
    
    return 0;
}