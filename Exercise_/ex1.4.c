#include<stdio.h>

main()
{
    int cel,far;

    far=0;
    printf("DEGREE    :\t");
    while(far<=100)
    {

        cel=5*(far-32)/9;
        printf("%d\t", cel );
        far=far+10;
    }
    
    printf("\nFAHRENHEIT:\t");
    far=0;
    while(far<=100)
    {
        printf("%d\t", far);
        far=far+10;
    }
    
    return 0;
}