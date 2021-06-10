#include<stdio.h>

struct Hello
{
    char employee_name[10];
    int employee_salary;
    int employee_id;

}arr1[3];

int main()
{
    for(int i=0;i<3;i++)
    {
        scanf("%s", &arr1[i].employee_name);
        scanf("\n%d",&arr1[i].employee_salary);
        scanf("\n%d",&arr1[i].employee_id);
    }

    /*This kind of forms something like nested list
       arr1[i] = [name,salary,id] */

    for(int i=0;i<3;i++)
    {
        printf("\nName : %s", arr1[i].employee_name);
        printf("\tSalary : %d",arr1[i].employee_salary);
        printf("\tID : %d",arr1[i].employee_id);
    }
}