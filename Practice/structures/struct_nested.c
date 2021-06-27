#include<stdio.h>
#include<string.h>

struct NAME
{
    char first_name[20];
    char last_name[20];
};

struct DOB
{
    int dd;
    int mm;
    int yyyy;
};

struct student
{
    struct NAME name; 
    int class;
    struct DOB dob;
};

int main()
{
    
    struct student s1;
    scanf("%d",&s1.class);
    /*
    IMP NOTE : Cannot just do string[] = "abc"  --------------- this is assigning
                We can only do char string[] = "abc"  -------- this is initializing
                So you cannot assign stuffs to arrays in C
                We can only initialize arrays in C
                So we do strcpy(string-to-copy-to,the-actual-string)
                Or just ask user
    */

    // strcpy(s1.name.first_name, "Varun");
    scanf("%s",s1.name.first_name);
    strcpy(s1.name.last_name, "Sathish");
    printf("Hello %s %s.\nYou are in class %d",s1.name.first_name,s1.name.last_name,s1.class);

    return 0;
}

