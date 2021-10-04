#include<stdlib.h>
#include<stdio.h>

struct Hello
{
    int x,y;
};

int main()
{
    struct Hello k1 = {.x = 1, .y = 3};
    struct Hello *k2 = &k1;
    struct Hello *k3;
    // If malloc not used, then you'll get segmentation fault
    k3 = (struct Hello *)malloc(sizeof(struct Hello));
    k3->x = 5;
    k3->y = 9;
    /* Implies k2 = &k1 ;
               *k2 = k1 ;*/ 
    printf("x = %d,y = %d",k2->x,k2->y);    
    printf("\nx = %d,y = %d",(*k2).x,(*k2).y);
    printf("\nx = %d,y = %d",k1.x,k1.y); 
    printf("\nx = %d,y = %d",k3->x,k3->y);
    return 0;
}