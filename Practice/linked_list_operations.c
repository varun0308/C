#include <stdio.h>
#include <stdlib.h>


typedef struct Cell {
    int data;
    struct Cell *next;
} node;

void printList(node *n)
{
    while (n != NULL) 
    {
        printf(" %d ", n->data);
        n = n->next;
    }
}

int main()
{
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    head = (struct Cell*)malloc(sizeof(node));
    second = (struct Cell*)malloc(sizeof(node));
    third = (struct Cell*)malloc(sizeof(node));


    printf("%s", "wrufheurh");
    head->data = 7;
    head->next = second;
    printf("%s", "wrufheurh");
    second->data = 8;
    second->next = third;

    third->data = 9; 
    third->next = NULL;

    printList(head);
    
    return 0;
}