/* Data[] is an array that is declared as int Data[20]; and contains the following
values:
Data[] = {7, 23, 34, 45, 56, 67, 78, 89, 90, 100};

(a) Calculate the length of the array.
(b) Find the upper_bound and lower_bound.
(c) Show the memory representation of the array.
(d) If a new data element with the value 12 has to be inserted, find its position.
(e) Insert a new data element 12 and show the memory representation after the insertion. */

#include<stdio.h>

int main()
{
    int data[20] = {7, 23, 34, 45, 56, 67, 78, 89, 90, 100};
    int k;

    for(int i=0;i<20;i++)
    {
        if(data[i] < 12 && data[i+1] >= 12)
            k = i+1 ;
    }
    printf("Hello");

    for(int i=18;i>k;i++)
        data[i] == data[i-1] ;

    data[k] = 12;

    for(int i=0;i<20;i++)
        printf("%d ",data[i]);

    return 0;
}