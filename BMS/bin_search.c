#include <stdio.h>

int main()
{
    int a[20],n,value;
    
    printf("Number of elements : ");
    scanf("%d\n",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Value to search : ");
    scanf("%d\n",&value);

    int low = 0;
    int high = n-1;
    int mid ;

    int flag = 0;

    while(low <= high)
    {
        mid = (low + high)/2 ;

        if(a[mid] == value)
        {
            printf("Position : %d",(mid+1));
            flag = 1;
            break ;
        }

        else if(a[mid] < value)
            low = mid + 1;

        else
            high = mid - 1;
    }
    
    if(flag != 1)
    {
        printf("This element is not there in the array");
    }
    
    return 0;
}
