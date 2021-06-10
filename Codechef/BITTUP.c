#include<stdio.h>
#include<math.h>

long int divisor = 1000000007;

long long int power_mod(long long int a, long long int k) {
    if (k == 0)
        return 1;
    long long int temp = power(a, k/2);
    long long int res;

    res = ( ( temp % divisor ) * (temp % divisor) ) % divisor;
    if (k % 2 == 1)
        res = ((a % divisor) * (res % divisor)) % divisor;
    return res;
}
int main()
{
    long long t,m,n;
    scanf("%ld",&t);

    for(long long i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&m);
        long long base = power_mod(2,n);
        long long divisor = pow(10,9) + 7;

        long long a = 1 ;
        for(long long j=0;j<m;j++)
        { 
            a = ((a%divisor)*(base%divisor))%divisor ;
        }
        printf("%ld\n",a);
    }
    return 0;
}
