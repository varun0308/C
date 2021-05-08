#include<stdio.h>

int main()
{
    int var = 2;
    int *ptr = &var;    // dereferencing
    // *ptr gets the value in the location of '&var'
    // &var is the location address of var

    printf("%d",*ptr);      // prints an address
    printf("\n%x",ptr);     // prints 2
    printf("\n%x",&var);    // prints that above address
    printf("\n%x",&ptr);    // prints address of pointer

    // So 
    // var = 2
    // &var = location of var
    // *ptr = 2
    // ptr = location of var
    // ptr = &var
    // &ptr = location of ptr(not same as ptr or &var)

}