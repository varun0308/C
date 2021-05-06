#include<stdio.h>

int main()
{
    int i,count_tab,count_bar;
    char count[200];

    // Input-ing the array
    for(i=0;count[i]!='#';i++)
    {
        scanf("%c", &count[i]);
    }

    // Printing the same array
    for(i=0;count[i]!='#';i++)
    {
        printf("%c", count[i]);
    }

    // The condition part
    i=count_bar=count_tab=0;

    while(count[i]!='#')
    {
        if(count[i]==' ')
        {
            count_bar++;
        }
        else if(count[i]=='\t')
        {
            count_tab++;
        }
        i++;
    }
    printf("\n%d\t%d",count_tab,count_bar);

    return 0;
}