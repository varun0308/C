#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
}node;

node *start1;
node *start2;

node* inputValue()
{
    node* temp = NULL;
    temp = (node*)malloc(sizeof(node));
    printf("Enter value to insert\n");
    scanf("%d",&temp->data);
    temp->next = NULL;
    return temp;
}

void insertRear1()
{
    node* temp;
    temp = inputValue();
    if(start1 == NULL)
        start1 = temp;
    else 
    {
        node* ptr = NULL;
        ptr = start1;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp; 
    }
}

void insertRear2()
{
    node* temp;
    temp = inputValue();
    if(start2 == NULL)
        start2 = temp;
    else 
    {
        node* ptr = NULL;
        ptr = start2;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp; 
    }
}

void concatenate_list()
{
    node *temp = NULL;
    temp = start1;
    while(temp->next != NULL)
        temp = temp->next;
    temp->next = start2;
    start2 = NULL;
}

void display()
{
    node* ptr = NULL;
    ptr = start1;
    while(ptr != NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

    ptr = start2;
    while(ptr != NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

}
int main()
{
    start1 = NULL;
    start2 = NULL;
    while(1)
    {
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertRear1();
                    break;
            case 2: insertRear2();
                    break;
            case 3: concatenate_list();
                    break;
            case 4: display();
                    break;
        }
    }
    return 0;
}