#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1,x2,y2;
    float d, dist;

    scanf("%d",&x1);
    scanf("%d",&x2);
    scanf("%d",&y1);
    scanf("%d",&y2);

    float distance = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)) ;
    printf("Distance : %f",distance);
    return 0;
}