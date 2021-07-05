// Create a linked list and print it

#include<stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    int n,i=0;
    // head node to keep track of beginning of list
    struct node *head = NULL;

    // new_node for creating a new node
    struct node *new_node = NULL;

    // A general node for traversing/assigning
    struct node *ptr = NULL;

    printf("Number of elements : ");
    scanf("%d",&n);

    while(i != n)
    {
        printf("Enter value %d : ",i+1);

        // Creating a node (Has a value(data) and pointer points to NULL)
        new_node = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&new_node->data);
        new_node->next = NULL;

        // Assigning head of list
        if(i==0)
            head = new_node;

        // General case
        else
        {
            ptr = head;

            // Traversing through the linked list until the last one
            while(ptr->next != NULL)
                ptr = ptr->next ;

            // Pointing the last node of list to the new one created
            ptr->next = new_node;
        }
        i++;
    }

    // Printing the linked list
    i=0;
    ptr = head;
    while(i!=n)
    {
        printf("Element %d : %d\n",i+1,ptr->data);
        ptr = ptr->next;
        i++;
    }
    free(new_node);
    return 0;
}
