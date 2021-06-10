#include<stdio.h>

struct Hello
{
    int x,y;
};

int main()
{
    struct Hello k1 = {.x = 1, .y = 3}; //designated initialization
    struct Hello k2 = {1,7};    // Non-designated
    printf("Sum = %d",(k1.x+k1.y));     // acessing each elements
    printf("\nAnother sum = %d",(k2.x+k2.y));
    return 0;
}