#include<stdio.h>

/*
    An array is a pointer pointing to the 0th element of the array

    Since the array is contigiously allocated, adding the value of the 
    data type to the initial memory gives th required value
*/

int main()
{
    int arr[5] = {11,12,13,14,15} ;
    int *ptr ;
    ptr = arr;  // ptr points to address of 11
    // We do not need to initialize a new pointer(since the arr already is a pointer)
    // We can just use the arr instead of ptr 

    for(int i=0;i<5;i++)
    {
        printf("%d\n",*ptr);    // prints value of arr[i]
        printf("%x\n",ptr);     // prints address of arr[i]
        printf("%x\n",&arr[i]); // prints address of arr[i]
        printf("%x\n\n",&ptr);  // prints address of ptr

        ++ptr ;
    }
    return 0;
}