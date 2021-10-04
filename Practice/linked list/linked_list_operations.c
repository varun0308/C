#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
	int data;
	struct NODE *next;
} node;

node *start;
int num = 0;

void add_element(int value,int pos)
{
    
    node *temp,*ptr,*prev;
    ptr = (node *)malloc(sizeof(node));
    ptr->data = value;
    ptr->next = NULL;
    
    if(start == NULL)
    {
        start = ptr;
        num = 1;
        return;
    }

    temp = start;
    prev = NULL;

    int i = 1;
    while(temp->next != NULL && i != pos)
    {
        prev = temp;
        temp = temp->next ;
        i++ ;
    }

    if(pos == 1)
    {
        ptr->next = temp;
        start = ptr;
        num += 1;
    }
    else
    {
        if(i == pos)
        {
            ptr->next = temp;
            prev->next =  ptr;
        }
        else
            temp->next = ptr;
        
        num++;
    }

}

void delete_element(int pos)
{
    node *temp,*ptr,*prev;
    temp = start;
    prev = NULL;
    int i = 1;
    while(temp->next != NULL && i != pos)
    {
        prev = temp;
        temp = temp->next ;
        i++ ;
    }
    if(pos == 1)
    {
        if(temp->next != NULL)
            start = temp->next;
        else
            start = NULL;
    }

    else if(i==pos)
    {
        if(temp->next == NULL)
            prev->next = NULL;
        else
            prev->next = temp->next;
    }
    free(temp); 
}

void display()
{
    node *temp ;
    int i=1;
    temp = start;
    while(temp != NULL)
    {
        printf("Element %d : %d\n",i,temp->data);
        temp = temp->next;
        i++;
    }

}

int main()
{
    start = NULL;
    int choice=-1,position,value ;
    while(choice != 0)
    {
        printf("\nEnter choice : ");
        printf("\n1, Add element\n2.Delete element\n3.Display Linked list\n0.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter value and position to add element(0 for last) : ");
                    
                    scanf("%d%d",&value,&position);
                    add_element(value,position);
                    printf("Added successfully !\n");
                    break;
            
            case 2: printf("Enter the position to delete : ");
                    scanf("%d",&position);
                    delete_element(position);
                    printf("Deleted successfully !\n");
                    break;

            case 3: display();
                    break;
        }
    }
}