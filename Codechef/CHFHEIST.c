#include<stdio.h>

int main()
{
    long int n,D,d,p,q;
    scanf("%ld",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%ld %ld %ld %ld",&D,&d,&p,&q);
        long int k = D/d ; 
        long int total_print;
        
        total_print = (k*d*(2*p + (k-1)*q))/2 ; 

        if((D-k*d) != 0)
        {
            total_print += (p+(q*k))*(D-k*d) ;
        }
        
        printf("%ld\n",total_print) ;
    }
    return 0;
}