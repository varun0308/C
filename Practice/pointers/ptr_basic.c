#include<stdio.h>
// Recomended to usse %p to print pointers
int main()
{
    int var = 2;
    int* ptr = &var ;
    ptr = &var;    // or directly write     int *ptr = var;     it means   int *ptr;
                    //                                                     ptr = &var
    // *ptr gets the value in the location of '&var'
    // &var is the location address of var

    printf("%d",*ptr);      // prints 2 
    printf("\n%p",ptr);     // prints an address                     
    printf("\n%x",&var);    // prints that above address 
    printf("\n%x",&ptr);    // prints address of pointer

    //    |     var = 2       |        |  ptr = &var = address1  |    *ptr = value at &var = 2
    //    |  &var = address1  |        |     &ptr = address2     |

    return 0;
}
