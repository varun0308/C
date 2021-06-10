#include <stdio.h>

void increment(int *v) 
{
    // It does :        int *v = &a;
    // which becomes :  int *v;
    //                  v = &a;          
    (*v)++; 
    printf("\n%x\t%x",v,&v);
}

int main() 
{
    int a;
    scanf("%d", &a);
    printf("%d\t%x",a,&a);
    increment(&a);
    printf("\n%d", a);
    return 0;      
}