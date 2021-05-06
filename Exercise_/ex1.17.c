#include<stdio.h>

int readline(char s[])
{
    int i,c;

    for(i=0; i<=200 && (c=getchar()) !=EOF && c != '\n' ; i++)
    {
        s[i]=c;
    }

    if(c=='\n')
    {
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i;
}

int main()
{
    int len; 
    char s[200];

    while((len=readline(s))>0)
    {
        if(len>20)
        printf("%s\n", s);
    }
    return 0;
}