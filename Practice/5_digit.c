#include <stdio.h>
#include <string.h>

int main()
{	
    int sum,i,k=0;
    char n[4];
    for(i=0;i<=4;i++)
    {
        scanf("%c",&n[i]);
        int temp = n[i] - '0';  // since n[i] is converted into ascii (and so is the '0'),
        k=temp+k;               // so it is basically x-42 (42 is the ascii for '0')
                                // (where x is any integer)
    }
    printf("%d",k);
    return 0;
}

/*
Alternate is using n%10
*/