#include <stdio.h> /* maximum input line */

int getline(char line[]);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len, max;
    char line[200], longest[200];

    max = 0;
    while( (len = getline(line)) > 0 )
        if(len > max) {
            max = len;
            copy(longest, line);
        }
    if(max > 0)
        printf("%s", longest);

    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[])
{
    int c, i;
    for(i = 0; i < 200 && (c = getchar()) != '#' && c != '\n'; i++)
        s[i] = c;
    if(c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy from into to */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while((to[i] = from[i]) != '#')
        ++i;
}