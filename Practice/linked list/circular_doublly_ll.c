#include<stdio.h>
#include<stdlib.h>

typedef struct NODE{
    int data;
    struct NODE* left;
    struct NODE* right;
}node;

node *start = NULL;

node* createNode()
{
    node* temp = NULL;
    temp = (node*)malloc(sizeof(node));
    printf("Enter element to insert : ");
    scanf("%d",&temp->data);
    temp->left = temp;
    temp->right = temp
    ;
    return temp;
}

void insertFront()
{
    node *temp;
    temp = createNode();

    if(start == NULL)
        start = temp;
    else
    {
        temp->right = start;
        temp->left = start->left;
        start->left->right = temp;
        start->left = temp;
        start = temp;
    }
}

void insertRear()
{
    node* temp;
    temp = createNode();

    if(start == NULL)
        start = temp;
    else 
    {
        node* ptr = start;
        while(ptr->right != start)
            ptr = ptr->right;
        
        temp->right = start;
        temp->left = ptr;
        ptr->right = temp;
        start->left = temp;
    }

}

void insertPos()
{
    printf("Enter position to insert : ");
    int pos;
    scanf("%d", &pos);

    node* ptr = start;
    int k = 1;
    while(ptr->right != start && k != pos-1)
    {
        ptr = ptr->right;
        k++;
    }

    if(ptr->right == start && pos != k+1)
        printf("Position out of bounds\n");
    else
    {
        node *temp;
        temp = createNode();
        temp->right = ptr->right;
        temp->left = ptr;
        ptr->right->left = temp;
        ptr->right = temp;
    }
}

void display()
{
    node *ptr = NULL;

    if(start == NULL)
        printf("List is empty !!\n");

    else    
    {   
        ptr = start;
        printf("Your list : "); 
        do
        {
            printf("%d  ",ptr->data);
            ptr = ptr->right;
        }while(ptr != start);
    }
    }

int main()
{
    int choice;
    while(1)
    {
        printf("\n********** Doubly Linked List ************\n");
        printf("\n1. Insert Front\n2. Insert Rear\n3. Insert at given position\n4. Insert before element\n5. Insert afer element\n");
        printf("6. Delete Front\n7. Delete Rear\n8. Delete the given element\n9. Delete element at the given position\n10. Delete before the given element");
        printf("\n11. Delete after the given element\n12. Compute length of linked list\n13. Search for the given key\n14. Display\n15. Exit");
        printf("\n*****************************************\n");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: insertFront();
            break;
            case 2: insertRear();
            break;
            case 3: insertPos();
            break;
            // case 4: insertBeforeEle();
            // break;
            // case 5: insertAfterEle();
            // break;
            // case 6: deleteFront();
            // break;
            // case 7: start = deleteRear();
            // break;
            // case 8: start = deleteElement();
            // break;
            // case 9: start = deletePos();
            // break;
            // case 10: start = deleteBeforeEle();
            // break;
            // case 11: start = deleteAfterEle();
            // break;
            // case 12: start = findLength();
            // break;
            // case 13: start = searchKey();
            // break;
            case 14: display();
            break;

            case 15: printf("\n DLL program terminates now... Thank you...\n");

            exit(0);

            default: printf("\nInvalid choice... please enter valid choice....\n");
        }
}

}