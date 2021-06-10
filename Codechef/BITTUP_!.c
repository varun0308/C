#include<stdio.h>
#include<math.h>

int main()
{
    long t,m,n;
    scanf("%ld",&t);

    for(int i=0;i<t;i++)
    {
        scanf("%ld%ld",&n,&m);
        long divisor = pow(10,9) + 7;
        long p = 2;
        for(long j=0;j<n-1;j++)
        { 
            p = ((p%divisor)*2)%divisor ;
        }
        p = (p - 1) % divisor; 
        long a = 1;
        for(long j=0;j<m;j++)
        { 
            a = (p*(a%divisor))%divisor ;
        }
        printf("%ld\n",a);
    }
    return 0;
}
