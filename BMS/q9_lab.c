#include <stdio.h>

int main()
{
    int a[50],n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int duplicate = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i] == a[j])
            {
                duplicate++ ;
                break;
            }
        }
    }
    printf("%d",duplicate);

    return 0;
}