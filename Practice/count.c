#include<stdio.h>

int main()
{
    double count;
    for(count=0;getchar()!=EOF;++count)
    ;
    printf("%0.0f", count-1);
    return 0;
}