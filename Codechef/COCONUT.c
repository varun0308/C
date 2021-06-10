#include<stdio.h>

int calculate(int a,int b)
{
    int count = 0;

    if(a%b == 0)
        count = a/b ;
    else 
        count = (a/b) + 1 ;

    return count ;
}

void main()
{
    int n,xa,xb,Xa,Xb;

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&xa,&xb,&Xa,&Xb);
        int p = calculate(Xa,xa);
        int q = calculate(Xb,xb);

        printf("%d\n",p+q);
    }    
}