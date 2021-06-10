#include <stdio.h>

int main()
{
    long t;
    scanf("%ld",&t);
    
    for(long z=0;z<t;z++)
    {
        long n,m;
        scanf("%ld",&n,&m);
        long a[n],b[m];
        
        for(long i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
        }
        for(long i=0;i<m;i++)
        {
            scanf("%ld",&b[i]);
            
            if(a[b[i]-1] != 0)
            {
                printf("0 ");
            }
            
            else 
            {
                long least_time;
                long p = b[i] - 1 ;
                long q = b[i] - 1 ;
                for(long j=0;j<n;j++)
                {
                    if(a[p] == 1)
                    {
                        least_time = b[i]-1-p ;
                        printf("%ld ",least_time);
                        break;
                    }
                    
                    if(a[q] == 2)
                    {
                        least_time = q-b[i]+1 ;
                        printf("%ld ",least_time);
                        break;            
                    }
                    
                    if(a[p] == -1 && a[q] == -2) 
                    {
                        printf("-1 ");
                        break;
                    }
                    
                    p-- ;
                    q++ ;
                    
                    if(p == -1)
                    {
                        p = 0;
                        a[p] = -1 ;
                    }
                    if(q == n)
                    {
                        q = n-1 ;
                        a[q] = -2 ;
                    }
                }   
            }
        }
        printf("\n");
    }

    return 0;
}
