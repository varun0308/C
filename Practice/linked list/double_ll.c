#include<stdio.h>
#include<stdlib.h>

typedef struct NODE
{
    int data;
    struct NODE *prev;
    struct NODE *next;

}node;

node *start;
int num = 0;

void add_element(int value,int pos)
{
    node *ptr,*prev_ptr,*new;
    
    new = (node *)malloc(sizeof(node));
    new->data = value;
    new->next = NULL;
    new->prev = NULL;

    if(start == NULL)
    {
        start = new;
        start->next = start;
        start->prev = NULL;
    }
    else
    {
        ptr = start;
        prev_ptr = start;
        
        if(pos == 1)
        {
            if(num == 1)
            {
                new->next = ptr;
                ptr->next = new;
                ptr->prev = new;
                new->prev = ptr;
                start = new;
            }
            else
            {
                new->next = ptr;
                ptr->prev = new;
                while(ptr->next != start)
                    ptr = ptr->next;
                new->prev = ptr;
                ptr->next = new;
                start = new;    
            }
        }
        else 
        {
            int i=1;
            while(i != pos && ptr->next != start)
            {
                prev_ptr = ptr;
                ptr = ptr->next;
                i++;
            }
            if(i==pos)
            {
                new->next = ptr;
                ptr->prev = new;
                new->prev = prev_ptr;
                prev_ptr->next = new;
            }
            else
            {
                new->next = ptr->next;
                ptr->next = new;
                new->prev = ptr;
                start->prev = new;
            }
        }
    }

    num++;
}

void delete_element(int pos)
{
    node *nextptr,*ptr,*prevptr;
    ptr = start;
    if(num == 1)
        start = NULL;

    else if(pos == 1)
    {
        if(num == 2)
        {
            start = ptr->next;
            start->next = NULL;
            start->prev = NULL;
        }
        else
        {
            ptr = start->prev;
            ptr->next = start->next;
            free(start);
            start = ptr->next;
        }
    }
    else
    {
        int i=1;
        while(i!=pos && ptr->next != start)
        {
            prevptr = ptr;
            ptr = ptr->next;
            nextptr = ptr->next;
            i++;
        }
        prevptr->next = nextptr;
        nextptr->prev = prevptr;
        free(ptr);
    }
    num--;

}

void display()
{
    node *temp ;
    int i=1;
    temp = start;
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
    return 0;
}