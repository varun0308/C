#include<stdio.h>

int myfunc1(int *x)      /*   You get *x = ptr   */
{
    *x += 10;   // You use x as a pointer itself
    // return *x;
    // You don't need to return it
    // Pointers are call by reference
    // It automatically becomes 10
}

int myfunc2(int *x,int *y)      
{
    int k = *x + *y;
    return k;
    // Here returning is necessary 
}

int main()
{
    int c = 10,m = 80;
    printf("c = %d,m = %d",c,m);
    int *ptr1 = &c ;
    int *ptr2 = &m;
    myfunc1(ptr1);                      // Or mufunc1(&c)
    int new2 = myfunc2(ptr1,ptr2);      // Or myfunc2(&c,&m)

    printf("\nnew1 = %d\nnew2 = %d\nc = %d\nm = %d\nptr1,ptr2 = (%d,%d)",*ptr1,new2,c,m,*ptr1,*ptr2);
    return 0;
}

// Hence changing value of (value at pointer) changes the main variable itself (Call by reference)
// We changed *ptr1 value from 10 to 20. But even c changed from 10 to 20.