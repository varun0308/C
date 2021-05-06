#include<stdio.h>

int main()
{
    int i,j,k,a,sum;

    scanf("%d",&k);

    for(j=0;j<k;j++)
    {
        scanf("%d", &a);

        sum = 0;
        while(a!=0)
        {
            sum += a%10;
            a = (a/10);
        }
        printf("%d\n" , sum);
    }
        return 0;
}