#include <stdio.h>

// not getting the decimal points through float............................... CHECK AGAIN
float conversion(int n) ;


int main()
{
    int i;
    for(i=0;i<=300;i=i+20)
    {
        conversion(i);
    }
    return 0;
}

float conversion (int fah)
{
    float cel = (5*(fah-32))/9;
    printf("%0.2f\t", cel);
}