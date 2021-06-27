#include<stdio.h>

int main()
{
    int x = 10;
    int *ptr ;
    ptr = &x; 

    printf("%d\n",*(ptr++));    
    // prints 10 because ++ postfix is left to right

    printf("%p\n",ptr);
    // prints the address of &x + (1*int)
    
    printf("%p\n",--ptr);
    // prints the address of x again 
    
    return 0;
}