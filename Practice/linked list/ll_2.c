// Create a linked list and perform operations 

#include<stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

// Do not write return_type as struct node
// c cannot return an entire structure, only pointers or variables
struct node* create(struct node *head,int n)
{
    int i=0;
    struct node *new_node = NULL;
    struct node *ptr = NULL;

    while(i != n)
    {
        printf("Enter value %d : ",i+1);

        new_node = (struct node*)malloc(sizeof(struct node));
        
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        if(i==0)
            head = new_node;

        else
        {
            ptr = head;

            while(ptr->next != NULL)
                ptr = ptr->next ;

            ptr->next = new_node;
        }
        i++;
    }
    printf("Linked list created\n");
    return head;
}

void display(struct node *head,int n)
{
    struct node *ptr = NULL;
    int i=0;
    ptr = head;
    while(i != n)
    {
        printf("Element %d : %d\n",i+1,ptr->data);
        ptr = ptr->next;
        i++;
    }
}

// Positions w.r.t user(1,2,3....)
struct node* add(struct node *head,int k,int value,int n)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    if(k == 1)
    {
        new_node->next = head;
        head = new_node;
    }

    else if(k == n+1)
    {
        struct node *previous;
        struct node *ptr;
        int i=0;
        ptr = head;
        while(i != n-1)
        {
            ptr = ptr->next;
            i++;
        }
        previous = ptr;
        previous->next = new_node;
        new_node->next = NULL;
    }

    else
    {
        struct node *ptr;
        struct node *previous;      
        struct node *following;      
        int i=0;
        ptr = head;
        while(i!=k-2)
        {
            ptr = ptr->next;
            i++;
        }
        previous = ptr;
        following = ptr->next;
        previous->next = new_node;
        new_node->next = following;
    }
    return head;
}

struct node* delete(struct node *head,int k,int n)
{
    struct node *ptr;
    ptr = head;

    if(k==0)
    {
        head = ptr->next;
    }

    else if(k==n-1)
    {
        for(int i=0;i<n-2;i++)
            ptr = ptr->next;

        ptr->next = NULL;
    }
    else
    {
        struct node *previous;
        int i = 0;
        while(i != k-2)
        {
            ptr = ptr->next;
            i++ ;
        }
        previous = ptr;
        ptr = ptr->next;
        ptr = ptr->next;
        previous->next = ptr; 
    }
    return head;
}

int main()
{
    int n,k,value,r;
    printf("Number of elements : ");
    scanf("%d",&n);

    struct node *head;
    head = NULL;
    head = create(head,n);

    int choice;
    do
    {
        printf("----- CHOOSE -----\n");
        printf("1 : Add element\n");
        printf("2 : Delete element\n");
        printf("3 : Display linked list\n");

        scanf("%d",&choice);
        switch(choice)
        {
            case 1: printf("Position to add : ");
                    scanf("%d",&k);
                    printf("Element to add : ");
                    scanf("%d",&value);

                    head = add(head,k,value,n);
                    if(k < n+2 && k > 0)
                        n += 1;
                    break;
            
            case 2 : printf("Position to remove : ");
                    scanf("%d",&r);
                    head = delete(head,r,n);
                    if(r < n && r > 0)
                        n -= 1;
                    break;
            
            case 3: display(head,n);
                    break;

            case 0: break;
            default: printf("Wrong input");
                    break;
        }
    } while (choice != 0);
    
    return 0;
}
