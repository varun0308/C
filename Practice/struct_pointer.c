#include<stdio.h>

struct Hello
{
    int x,y;
};

int main()
{
    struct Hello k1 = {.x = 1, .y = 3};
    struct Hello *k2 = &k1;
    /* Implies k2 = &k1 ;
               *k2 = k1 ;*/ 
    printf("x = %d,y = %d",k2->x,k2->y);    
    printf("\nx = %d,y = %d",(*k2).x,(*k2).y);
    printf("\nx = %d,y = %d",k1.x,k1.y); 
    return 0;
}