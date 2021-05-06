#include<stdio.h>

void name(int a)
{
    switch(a)
    {
        case 1: printf("one\n");
                break;
        case 2: printf("two\n");
                break;
        case 3: printf("three\n");
                break;
        case 4: printf("four\n");
                break;
        case 5: printf("five\n");
                break;
        case 6: printf("six\n");
                break;
        case 7: printf("seven\n");
                break;
        case 8: printf("eight\n");
                break;
        case 9: printf("nine\n");
                break;
    }

}
int main()
{
    int a,b,i;

    scanf("%d\n%d",&a,&b);
    
    if(b<= 9)
    {
        for(i=a; i<=b ;i++)
            name(i);
    }
    
    else if(a<=9 && b>9)
    {
        for(i=a; i<=9 ;i++)
            name(i);

        for(i=10;i<=b;i++)
        {
            if(i%2 == 0)
                printf("even\n");
            
            else
                printf("odd\n");
            
        }
    }
    else
    {
        for(i=a;i<=b;i++)
        {
            if(i%2 == 0)
                printf("even\n");
            
            else
                printf("odd\n");
        }
    }

}