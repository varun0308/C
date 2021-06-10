#include<stdio.h>

int main()
{
    float cel,far;

    printf("Fahrehneit : ");
    scanf("%f",&far);

    cel = 5.00*(far-32.00)/9.00;

    printf("Celsius : %0.2f",cel);

    return 0;
}
