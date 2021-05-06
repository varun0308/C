#include<stdio.h>
#include<math.h>

int power(int n)
{
    int a,i;
    i=1;
    a = 1;

    while(i != (8*n))
    {   
        a = 2*a;
        ++i;
    }
    return a;
}

int main()
{
    signed char i;
    double k,c=0,l;
    l = power(sizeof(i)) ;
    printf("%d\n", sizeof(i));

    for(k=0; k<l/2; ++k)
    {   
        c += 1;
    }
    printf("%lf\n",c);
    return 0;
}