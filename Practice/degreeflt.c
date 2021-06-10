#include<stdio.h>

main()
{
    float cel,far;

    far=0;
    printf("DEGREE    :\t");
    while(far<=100)
    {

        cel=5*(far-32)/9;
        printf("%0.2f\t", cel );
        far=far+10;
    }
    
    printf("\nFAHRENHEIT:\t");
    far=0;
    while(far<=100)
    {
        printf("%50.0f\t", far);
        far=far+10;
    }
    
    return 0;
}