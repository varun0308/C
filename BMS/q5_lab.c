#include<stdio.h>

int average(int a, int b, int c)
{
    float avg;
    avg = (a+b+c)/3 ;
    return avg ;
}

int main()
{
    int a,b,c;
    float avg;

    scanf("%d%d%d",&a,&b,&c);
    avg = average(a,b,c);
    printf("Avg of the 3 numbers : %0.2f",avg);

    return 0;
}