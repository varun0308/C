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
    student s,*s1 ; // Have to declare 2 variables
                    // one with and oter without pointer
                    // Or else we use dynamic mem alloc
    s1 = &s;
    strcpy(s1->name,"Varun");
    s1->class = 5;
    printf("%s %d",s1->name,s1->class);
    return 0;
}