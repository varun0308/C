#include<stdio.h>
#include<stdlib.h>

int main()
{
    int c,e=5;
    c = e*e++ ;
    printf("%d",c);

    e=5;
    c = e*++e ;
    printf("\n%d",c);

    scanf("%d",&e);
    c = --e*e*e++ ;
    printf("\n%d",c);
    printf("\n%d",e);

    int k = 10;
    printf("\n%f",k);
    return 0;
}