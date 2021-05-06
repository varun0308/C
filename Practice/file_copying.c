#include<stdio.h>

main()
{
    int c;

    c = getchar();
    while(c != '\n')
    {
        putchar(c);
        c = getchar();
    }
    return 0;
}