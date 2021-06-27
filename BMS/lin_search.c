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
    scanf("%d",&value);
    
    int i = 0;
    int flag = 0;

    while(i < n)
    {
        if(a[i] == value)
        {
            printf("Position : %d",(i+1));
            flag = 1;
            break;
        }
        i++ ;
    }
    
    if (flag == 0)
    {
        printf("Element is not there in the array");
    }

    return 0;
}