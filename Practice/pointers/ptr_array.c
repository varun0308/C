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
    // We don't really need to initialize a new pointer(since the arr already is a pointer)
    // We can just use the arr instead of ptr 

    for(int i=0;i<5;i++)
    {
        *ptr = i+7;
        printf("*ptr    : %d\n",*ptr);    // prints value of arr[i]
        printf("arr[i]  : %d\n",arr[i]); // prints value of arr[i]
        printf("ptr     : %x\n",ptr);     // prints address of arr[i]
        printf("&arr[i] : %x\n\n",&arr[i]); // prints address of arr[i]

        ++ptr ;
    }
    ptr = arr;
    for(int i=0;i<5;i++)
    {
        printf("%d  %d\n",ptr[i],*ptr); // this is basically an array printin    
                                // (since arr = ptr)
    }
    return 0;
}