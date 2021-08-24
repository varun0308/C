/*
Program to count number of uppercase, lowercase, spaces 
and aspecial chars(random) using pointers
ALso prints the characters
*/

#include<stdio.h>
#include<string.h>
#include<string.h>

int main()
{
    char string[100];
    gets(string);
    // If the empty strings are not initialized to 0, 
    // strlen gives garbage value
    char upper[100] = {0},lower[100] = {0},special[100] = {0};
    
    int uppercase,lowercase,random,spaces;
    uppercase = lowercase = random = spaces = 0;
    char *pointer = string;

    printf("%d %d %d\n",strlen(upper),strlen(lower),strlen(special));
    for(int i=0;*pointer != '\0';i++)   
    {
        if(*pointer >= 'A' && *pointer <= 'Z')
        {    
            uppercase++ ;
            upper[strlen(upper)] = *pointer ;
        }
        else if(*pointer >= 'a' && *pointer <= 'z')
        {    
            lowercase++ ;
            lower[strlen(lower)] = *pointer ;
        }
        // For some reason " " doesn't work below 
        else if(*pointer == ' ')
            spaces++;
        else
        {    
            random++ ;
            special[strlen(special)] = *pointer ;
        }
        pointer++ ;
    }
    printf("%d %d %d %d\n",uppercase,lowercase,spaces,random);
    puts(upper);
    puts(lower);
    puts(special);
    return 0;

}