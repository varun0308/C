#include<stdio.h>

int main()
{
    int x = 10;
    int *ptr ;
    ptr = &x; 

    printf("%d",*ptr++);    // prints 10 
    
    return 0;
}