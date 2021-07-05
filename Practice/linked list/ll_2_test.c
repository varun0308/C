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
        new_node->data = i*i;
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
        printf("%d\n",new_node->data);
        i++;
    }
    return head;
}

void display(struct node *head,int n)
{
    struct node *ptr = NULL;
    int i=0;
    ptr = head;
    while(i!=n)
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

    else if(k <= n && k > 1)
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

    else
    {
        printf("Not possible\n");
    }
    return head;
}

int main()
{
    int n,k,value;
    printf("Number of elements : ");
    n = 5;

    struct node *head;
    head = NULL;
    head = create(head,n);
    printf("%d",head->data);
    display(head,n);

    printf("Enter choice\n");
    int choice;
    choice = 9;

    while(choice != 0)
    {
        printf("Position to add : ");
        k = 6;
        printf("Element to add : ");
        value = 1000;

        head = add(head,k,value,n);
        n += 1;
        display(head,n);

        scanf("%d",&choice);
    }
    return 0;
}
