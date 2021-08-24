#include<stdio.h>

int getlin(char s[])
{
    int i,c;
   
    for(i=0; i<100  && (c=getchar())!='\n' && c!=EOF ; i++)
    {
        s[i]=c;
    }

    if(c == EOF)
    {
        s[i] = c;
    }
    return i;
}

void copy(char final[], char current[])
{
    int i=0;
    while((final[i] = current[i]) != EOF)
    ++i;
}

int main()
{
    int length,max=0;
    char final[100],k[100];

    while((length=getlin(k))>0)
        if(length>max)
        {
            max=length;
            copy(final,k);
        }

    if(max>0)
    printf("%s\n%d",final,max);

    return 0;
}                        