#include<stdio.h>

int main()
{
    int i, high, low, mid, v[100], x, n;

    scanf("%d%d", &x, &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &v[i]);
    }

    low = 0;
    high = n-1;
    mid = (high + low)/2;

    while(low < high)
    {
        if(x<v[mid])
            high = mid - 1;
        else
            low = mid + 1;

        mid = (high + low)/2; 
    }

    if(x == v[mid])
        printf("%d", mid);
    else    
        printf("Doesn't exist");

    return 0;
}