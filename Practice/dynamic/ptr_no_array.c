#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr,*temp;
    int c,n;

    scanf("%d",&n);
    ptr = &c;
    int i=0 ;
    while(i < n)
    {
        printf("Enter element : ");
        scanf("%d",&c);
        (*temp) = c;
        temp = &c + i*sizeof(int);
        i++;
        printf("%x %p %d\n",&c,temp,*temp);
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    return 0;
}