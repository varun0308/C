#include<stdio.h>

int main()
{
    int min,hours,min_;
    scanf("%d",&min);

    hours = min/60;
    min_ = min%60;

    printf("Hours : %d Minutes : %d",hours,min_);
    return 0;

}