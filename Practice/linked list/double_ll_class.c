#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *llink;
    struct NODE *rlink;
}node;

node *start = NULL;
int num = 0;


void insertFront()
{
    node* temp = NULL;
    printf("Enter element to insert front\n");
    temp = (node *)malloc(sizeof(node));
    scanf("%d",&temp->data);
    temp->llink = NULL;
    temp->rlink = NULL;

    if(start == NULL)
        start = temp;
    
    else 
    {
        temp->rlink = start;
        start->llink = temp;
        start = temp;
    }
    num++;
}

void insertRear()
{
    node* temp = NULL;
    printf("Enter element to insert rear\n");
    temp = (node *)malloc(sizeof(node));
    scanf("%d",&temp->data);
    temp->llink = NULL;
    temp->rlink = NULL;

    if(start == NULL)
        start = temp;
    
    else 
    {
        node *ptr = start;
        while(ptr->rlink != NULL)
            ptr = ptr->rlink;  

        ptr->rlink = temp;
        temp->llink = ptr;
        temp->rlink = NULL;
    }
    num++;
}

void deleteFront()
{
    node *ptr = start;
    start = ptr->rlink;
    start->llink = NULL;
    num--;
    free(ptr);
    printf("First element deleted\n");
}

void displayFront()
{
    node *temp = NULL;
    temp = start;
    int i = 1;
    if(num != 0)
    {
        while(i != (num+1))
        {
            printf("Element %d: %d\n",i,temp->data);
            temp = temp->rlink;
            i++;
        }
        printf("\nstart : %d\n",start->data);
    }
    else
    {
        printf("\nEmpty list\n");
    }
}

void displayRear()
{
    node *temp = NULL;
    temp = start;
    int i = 1;
    if(num != 0)
    {
        while(temp->rlink != NULL)
        {
            temp = temp->rlink;
            i++;
        }
        while(i != 0) 
        {
            printf("Element %d: %d\n",i,temp->data);
            temp = temp->llink;
            i--;
        }
    }
    
    else
    {
        printf("\nEmpty list\n");
    }
}

int main()
{
    while(1)
    {
        insertFront();
        insertRear();
        deleteFront();
        displayFront();
        displayRear();
    }
}