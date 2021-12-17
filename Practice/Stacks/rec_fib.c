#include<stdio.h>

int fibonocci(int num)
{
    if(num == 0)
        return 0;    
    else if(num == 1)
        return 1;
    else 
        return(fibonocci(num-1)+fibonocci(num-2));
}

int main()
{
    int n;
    scanf("%d",&n);
    int number = fibonocci(n);
    printf("%d",number);
}