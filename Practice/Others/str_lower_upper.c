/*
Program to count number of uppercas, lowercase, spaces 
and aspecial chars(random)
*/

#include<stdio.h>

int main()
{
    char string[50];
    gets(string);
    int uppercase,lowercase,random,spaces;
    uppercase = lowercase = random = spaces = 0; 

    for(int i=0; string[i] !='\0';i++)
    {
        if(string[i] >= 'A' && string[i] <= 'Z')
            uppercase++ ;
        else if(string[i] >= 'a' && string[i] <= 'z')
           lowercase++ ;
        // For some reason " " doesn't work below 
        else if(string[i] == ' ')
            spaces++;
        else
            random++;
    }
    printf("%d %d %d %d",uppercase,lowercase,spaces,random);
}