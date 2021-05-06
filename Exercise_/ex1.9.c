#include<stdio.h>

int main()
{
    int c;

    while((c= getchar())!= '#')
    {
        putchar(c);
        if((c)==' ')
        {   
            while((c=getchar())==' ')
            {
                ;
            }
            putchar(c);
        }
        
    }
    return 0;
}