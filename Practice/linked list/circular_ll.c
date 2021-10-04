#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *next;
}node;

node *start;
int num = 0;

void add_element(int value,int pos)
{
    node *ptr,*prev,*temp;
    temp = start;
    prev = NULL;

    ptr = (node *)malloc(sizeof(node));
    ptr->data = value;
    ptr->next = NULL;
    
    // No element
    if(start == NULL)
    {
        start = ptr;
        ptr->next = start; 
        num++;
    }
    else
    {
        // Atleast 1 element
        int i = 1;
        while(temp->next != start && i != pos)
        {
            prev = temp;
            temp = temp->next;
            i++;
        }
        if(pos == 1)
        {
            ptr->next = temp;
            start = ptr;
        }
        else if(temp->next == start)
        {
            ptr->next = start;
            temp->next = ptr;
        }
        
        else if(i==pos)
        {
            ptr->next = temp;
            prev->next = ptr;
        }
        num++;
    }
}

void delete_element(int pos)
{
    node *temp,*prev;
    prev = NULL;
    temp = start;

    if(pos == 1)
        if(num != 1)
        {
            while(temp -> next != start)
                temp = temp -> next;
            temp -> next = start -> next;
            free(start);
            start = temp -> next;
            num--;
            return;
        }
        else
        {
            free(temp);
            start = NULL;
            num--;
            return;
        }

    int i = 1;
    while(i != pos)
    {
        prev = temp;
        temp = temp->next;
        i++;
    }
    prev->next = temp->next;
    free(temp);
    num--;
}
void display()
{
    node *temp;
    temp = start;
    int i = 1;
    if(num != 0)
    {
        while(i != (num+1))
        {
            printf("Element %d: %d\n",i,temp->data);
            temp = temp->next;
            i++;
        }
        printf("\nstart : %d\n",start->data);
    }
    else
    {
        printf("\nEmpty circular list\n");
    }
}

int main()
{
    start = NULL;
    int choice = -1,position,value ;
    while(choice != 0)
    {
        printf("\nEnter choice : ");
        printf("\n1. Add element\n2. Delete element\n3. Display Linked list\n0. Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Enter value and position to add element(0 for last) : ");
                    
                    scanf("%d%d",&value,&position);
                    if(position <= num+1) 
                    {
                        add_element(value,position);
                        printf("Added successfully !\n");
                    }
                    else printf("\nNot possible\n");
                    
                    break;
            
            case 2: printf("Enter the position to delete : ");
                    scanf("%d",&position);
                    if(position <= num) 
                    {
                        delete_element(position);
                        printf("Deleted successfully !\n");
                    }
                    else printf("\nNot possible\n");
                    
                    break;

            case 3: display();
                    break;
        }
    }
}