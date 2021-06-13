#include <stdio.h>

int main()
{
    int arr[2][2] ;
    // Since arr is a pointer to arr[0][0], 
    /*  
    considering row major :

    *arr = arr[0]
    &arr[0] = arr

    *(arr+1) = arr[1]
    &arr[1] = (arr+1)
    
    *(arr+2) = arr[2]

    *(*(arr+1)+1) = arr[1][1]

    */
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            scanf("%d",*(arr + i)+j);
            //same as : &(arr[i])[j]
        }
    }
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%d ",*(*(arr + i)+j));
        }
    }
    
    printf("%x",*(arr+1));
    return 0;
}
