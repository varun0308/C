#include<stdio.h>
// prints the array of structure, which has name,salary and id of 3 employees

typedef struct 
{
    char employee_name[10];
    int employee_salary;
    int employee_id;

}Hello;

int main()
{
    Hello arr1[3];
    for(int i=0;i<3;i++)
    {
        scanf("%s", &arr1[i].employee_name);
        scanf("%d",&arr1[i].employee_salary);
        scanf("%d",&arr1[i].employee_id);
    }

    /*This kind of forms something like nested list
       arr1[i] = [[name,salary,id],[name,salary,id],[name,salary,id]....] */

    for(int i=0;i<3;i++)
    {
        printf("\nName : %s", arr1[i].employee_name);
        printf("\tSalary : %d",arr1[i].employee_salary);
        printf("\tID : %d",arr1[i].employee_id);
    }
}