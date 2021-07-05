#include<stdio.h>
#include<string.h>

typedef struct 
{
    char name[20];
    int class;

}student;
// This decleration is necessary when you use typedef

int main()
{
    student s1 = {"Aryan",12};  // Direct assignment
    /*
    IMP NOTE : Cannot just do s1.name = "abc"  --------------- this is assigning
                We can only do char string[] = "abc"  -------- this is initializing
                So you cannot assign stuffs to arrays in C
                We can only initialize arrays in C
                So we do strcpy(string-to-copy-to,the-actual-string)
    */

    student s2;
    s2.class = 10;
    strcpy(s2.name,"Varun");
    s2.name[0] = 'B';
    printf("s1 : %s %d\n",s1.name,s1.class);
    printf("s2 : %s %d",s2.name,s2.class);
    return 0;
}