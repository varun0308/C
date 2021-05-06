#include <stdio.h>

void calculate_the_maximum(int n, int k) 
{
    int a,b,c,i,j,t;
    a = 0 ; b = 0 ; c = 0;
    t = 1;

    while(t < n+1)
    {    
        for(i=t;i<n;i++)
        {
            for(j=i+1;j<=n;j++)
            {
                if((i&j)>a && (i&j)<k)
                    a = i&j ;
                printf("%d ", a);

                if((i|j)>b && (i|j)<k)
                    b = i|j;
                printf("%d ", b);

                if((i^j)>c && (i^j)<k)
                    c = i^j;
                printf("%d\n", c);
            }
        }
        ++t;
    }

    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d",c);

    printf("\n%d %d %d",a,b,c);
}

int main() 
{
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}