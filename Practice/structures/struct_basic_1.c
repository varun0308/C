#include<stdio.h>

// Structures are like OOP of C language

struct student
// Now student is a data type (user defined)
{
    char name[20];
    int class;

};
// Don't declare here : It is confusing

int main()
{
    struct student s1 = {"Aryan",12};
    struct student s2 = {"Aniket"} ;
    s2.class = 10;
    struct student s3 = {"Varun",12} ;
    struct student s4 = s3;
    struct student s5;
    scanf("%s %d",s5.name,&s5.class);
    // s1,s2,s3 and s4 are variables of the data type "student"

    printf("s1 : %s, %d\n",s1.name,s1.class);
    printf("s2 : %s, %d\n",s2.name,s2.class);
    printf("s3 : %s, %d\n",s3.name,s3.class);
    printf("s4 : (Same as s3) %s, %d\n",s4.name,s4.class);
    printf("s5 : %s, %d\n",s5.name,s5.class);

    return 0;
}