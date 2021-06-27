#include<stdio.h>

// A function to add 5 to each element of an array
int modification(int *arr)
{
    for(int j=0;j<5;j++)
    {
        *(arr+j) += 5;
    }
    // No need to return anything as its call by reference
    // The main array[] will itself change
}

int main()
{
    int array[5];

    for(int i=0;i<5;i++)
    {
        scanf("%d",(array+i));
        //Same as &array[i]
    }
    modification(array);
    // Array is modified 

    for(int i=0;i<5;i++)
    {
        printf("%d ",*(array+i));
        // Same as array[i]
    }

    return 0;
}