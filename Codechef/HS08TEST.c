#include<stdio.h>

int main()
{
    int x ;
    float balance;
    scanf("%d %f",&x,&balance);
    

    if(x%5 == 0 && balance >= (x+0.5))
    {
        printf("%0.2f",balance-x-0.5);
    }

    else
    {
        printf("%0.2f",balance);
    }
}