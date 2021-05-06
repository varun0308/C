#include<stdio.h>

int main()
{
    int count, c;
    c=getchar();
    count=0;
    while(c!='#')
    {
        if(c==' '|| c=='\t' || c=='\n')
        {
            count++;
        }
        c=getchar();
    }
    printf("%d\n", count);
    return 0;
}
// The case will break for the 3 condition being in the beginning/ end.