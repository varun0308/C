#include<stdio.h>


void add(int *x,int *y) 
{
    int temp;
    temp = *x;
    *x = *x + *y ; 
    
    if((*y) > temp)
    {
        *y -= temp; 
    } 
    else
    {
        *y = temp - *y;
    }
}

int main() 
{
    int a,b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    add(pa,pb);
    printf("%d\n%d",a,b);
    return 0;      
}