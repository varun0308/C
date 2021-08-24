#include<stdio.h>
#include<string.h>

int main()
{
    // Variable declarationss
    int c=0;
    char s[5];
  
    scanf("%s", s);
    printf("%s", s);
    
    // Print till you reach end of file
    // while(str[c]!=EOF)
    // {
    //   printf("%c", str[c]);
    //   c++;
    // }
    
    printf("\n%d", s[strlen(s)]);

    return 0;
}