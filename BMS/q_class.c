#include <stdio.h>

void even_odd(int a)
{
    if(a%2 == 0)
        printf("%u is an even number",a);
    else
        printf("%u is an odd number",a);
}

int main()
{
    unsigned int choice,a,b;
    printf("Enter choice : ");
    scanf("%u",&choice);
    
    switch(choice)
    {
        case 1: printf("Enter your 2 numbers : ");
                scanf("\n%u %u",&a,&b);
                printf("Sum = %u",a+b);
                break;
        
        case 2: printf("Enter your number : ");
                scanf("%u",&a);
                printf("Square : %u",a*a);
                break;
        case 3: printf("Enter number to check : ");
                scanf("%u",&a);
                even_odd(a);
                break;
        default : printf("Wrong choice");
    }

    return 0;
}
