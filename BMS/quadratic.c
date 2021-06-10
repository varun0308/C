#include<stdio.h>
#include<math.h>

void roots(int a, int b, int c)
{
    float root1,root2,det;
    det = b*b - 4*a*c ;
    
    printf("Determinant : %0.2f",det);
    if(det > 0)
    {
        root1 = (-b + sqrt(det))/(2*a) ;
        root2 = (-b - sqrt(det))/(2*a) ;

        printf("\n%0.2f %0.2f",root1,root2);
    }

    else if(det == 0)
    {
        root1 = root2 = -b/(2*a) ;
        printf("\n%0.2f %0.2f",root1,root2);
    }

    else
    {
        printf("\nImaginary roots");
    }
}

int main()
{
    int a,b,c;
    float area;

    scanf("%d%d%d",&a,&b,&c);
    roots(a,b,c);
    return 0;
}