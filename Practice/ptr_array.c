#include<stdio.h>

int main()
{
    int arr[5] = {11,12,13,14,15} ;
    int *ptr ;
    ptr = arr;  // ptr points to address of 11
    
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