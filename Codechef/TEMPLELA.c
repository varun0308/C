#include<stdio.h>

int main()
{
    int i,j,k,a[100],n,h,p;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        p = 0;
        scanf("%d",&h);
        for(j=0;j<h;j++)
        {
            scanf("%d",&a[j]);
        }

        if(a[0] == 1 && h%2 != 0 && a[(h-1)/2] == (h+1)/2)
        {
            for(k=0;k<(h-1)/2;k++)
            {
                if(a[k] != a[h-k-1])
                {
                    p = -1;
                    printf("no\n");
                    break;
                }
            }

            if(p == 0)
            {
                printf("yes\n");
            }
        }

        else
        {
            printf("no\n");
        }
        printf("----------\n");
    }
    return 0;
}