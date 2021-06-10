#include<stdio.h>
#include<math.h>

float area_triangle(int a, int b, int c)
{
    float area,s;
    s = (a+b+c)/2 ;
    area = sqrt(s*(s-a)*(s-b)*(s-c)) ;
    return area ;
}

int main()
{
    int a,b,c;
    float area;

    scanf("%d%d%d",&a,&b,&c);
    area = area_triangle(a,b,c);
    printf("Area : %0.2f",area);

    return 0;
}