#include<stdio.h>

int main()
{
    int c;

    c=getchar();

    while(c!='#')
    {
        if(c==' ' || c=='\t')
        {
            ;
        }
    
        else 
        {
            printf("%c",c);
        }
        c=getchar();
    }
    return 0;
}