#include<stdio.h>

int main()
{
    int t,i,temp,k,j;

    scanf("%d",&t);
    int a[t];
    int b[t] ;
    
    for(i=0;i<t;i++)
    {
        scanf("%d" ,&k);
        a[k]++ ;
    }
    
    for(i=0;i<t;i++)
    {
        printf("%d\n",a[i]);
    }
}