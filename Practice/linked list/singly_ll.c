#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
}node;

node *start;

node* inputValue()
{
    node* temp = NULL;
    temp = (node*)malloc(sizeof(node));
    printf("Enter value to insert\n");
    scanf("%d",&temp->data);
    temp->next = NULL;
    return temp;
}

void insertFront()
{
    node* temp;
    temp = inputValue();
    if(start == NULL)
        start = temp;
    else 
    {
        temp->next = start;
        start = temp;
    }
}

void insertRear()
{
    node* temp;
    temp = inputValue();
    if(start == NULL)
        start = temp;
    else 
    {
        node* ptr = NULL;
        ptr = start;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp; 
    }
}

void insertAfterElement()
{
    node* temp;
    int key;
    printf("Enter element after which new element should be added\n");
    scanf("%d",&key);
    temp = inputValue();

    if(start == NULL)
        start = temp;
    else 
    {
        node* ptr;
        ptr = start;
        while(ptr->data != key)
            ptr = ptr->next;

        temp->next = ptr->next;
        ptr->next = temp;
    }
    
}

void deleteRear()
{
    node *temp1 = NULL;
    node *temp2 = NULL;
    if(start == NULL)
    {
        printf("\nLinked list empty\n");
        return;
    }

    else if(start->next == NULL)
    {
        start = NULL;
        return;
    }
    temp1 = start;
    while(temp1->next != NULL)
    {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    temp2->next = NULL;
    free(temp1);
    // DO NOT FREE temp2
}

void deleteAfterElement()
{
    node* temp;
    int key;
    printf("Enter element after which new element should be added\n");
    scanf("%d",&key);

    temp = start;
    while(temp->data != key)
        temp = temp->next ;
    
    node *temp1;
    temp1 = temp->next;
    temp->next = temp1->next;
    free(temp1);
}

void deleteBeforeElement()
{
    node* temp;
    node* prev;
    int key;
    printf("Enter element after which new element should be added\n");
    scanf("%d",&key);

    prev = start;
    temp = (start->next)->next;

    while(temp->data != key)
    {
        prev = prev->next;
        temp= temp->next;
    }
    prev->next = temp;
}

void display()
{
    node* ptr = NULL;
    ptr = start;
    while(ptr != NULL)
    {
        printf("%d  ",ptr->data);
        ptr = ptr->next;
    }
    printf("\n");

}

int main()
{
    start = NULL;
    while(1)
    {
        int choice;
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertRear();
                    break;
            case 2: insertFront();
                    break;
            case 3: display();
                    break;
            case 4: insertAfterElement();
                    break;
            case 5: deleteRear();
                    break;
            case 6:deleteAfterElement();
                    break;
            case 7: deleteBeforeElement();
                    break;
            case 8: deleteGivenPosition();
                    break;
        }
    }
    return 0;
}