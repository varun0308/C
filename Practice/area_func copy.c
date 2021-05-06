#include<stdio.h>
#include<math.h>
// No answer for 8 5 4 :|
float area(int , int , int );

int main()
{
    int a, b , c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d %d %d\n", a, b, c);
    printf("%f",area(a,b,c));
    return 0;
}

float area(int a, int b, int c)
{
    float s, area_tr;
    s = a+b+c;
    s = s/2;
    printf("%f %f %f %f\n", s, s-a, s-b, s-c);
    area_tr = sqrt(s*(s-a)*(s-b)*(s-c));
    return area_tr;
}


