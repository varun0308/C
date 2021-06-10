#include<stdio.h>

int main()
{
    int x = 10;
    int *ptr ;
    ptr = &x; 
    int **p = &ptr;
    int ***q = &p;
    printf("%d %d %d",*ptr,**p,***q);   // prints 10 
    printf("\n%x %x %x",ptr,*p,**q);    // prints address of variable x
    printf("\n%x %x %x",&ptr,p,*q);     // prints address of the pointer ptr (which is also value at p)
    printf("\n%x %x",&p,q);             // prints address of the pointer p (which is also value at q)
    printf("\n%x",&q);                  // prints address of the pointer q
    return 0;
}
/*
var :              x       ptr     p       q
value of var:      10      a1      a2      a3
address :          a1      a2      a3      a4

*/