#include<stdio.h>

int getline(char s[200])
{
    int c , i;
    c = getchar();
    
    // Putting line into an array
    for(i=0; i< 200 && c != '\n' && c != '#'; i++)
    {
        s[i] = c;
        
        c = getchar();
    }
    return(i);
}

char save(char longest_line[],char line[])
{
    int i=0;
    while((longest_line[i] = line[i]) != '\n')
        i++;
}

int main()
{
    char longest[200], line[200];
    int len ,max = 0;
 
    while((len = getline(line)) > 0)
    {    
        if(getline(line) > max)
            {
                max = getline(line);
                save(longest, line);
            }
    }
    printf("Hello");
    printf("\n%s", longest);
    return 0;
}   