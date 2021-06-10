#include <stdio.h>

int check_triangle(int a,int b,int c)
{
    int A,B,C;
    A = a*a;
    B = b*b;
    C = c*c;
    if(a==b==c)
    {
        printf("It is an equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        if((A+B)==C || (B+C)==A || (A+C)==B) 
            printf("It is a right angled isosceles triangle");
    
        else
            printf("It is an isosceles triangle");
    }
    else
    {
        if((A+B)==C || (B+C)==A || (A+C)==B)
            printf("It is a right angled triange");
    
        else
            printf("It is a scalene triangle");
    }
}

int main()
{
    int a,b,c ;
    scanf("%d%d%d",&a,&b,&c);
    
    if((a+b)>c && (a+c)>b && (b+c)>a)
        check_triangle(a,b,c);
    else
        printf("Not a possible triange");
    return 0;
}
