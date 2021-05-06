#include<stdio.h>

int main()
{
    int i,n,k,t,count=0;
    scanf("%d %d",&n,&k);

    for(i=0;i<n;i++)
    {
        scanf("%d\n",t);
        if(t%k == 0)
        {   
            ++count;
        }
    }
    printf("%d",count);
}