#include <stdio.h>

int main() 
{
    int i;

    int ch;
    scanf("%c", &ch);
    printf("%c",ch);
    putchar('\n');

    char s[100];
    
    scanf("%s", &s);
    printf("%s",s);
    putchar('\n');

    char line[100];
    
    for(i=0;i<100;i++)
    {
       printf("%c", line[i]);
    }

    return 0;
}