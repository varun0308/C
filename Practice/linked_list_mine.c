#include<stdio.h>

struct Node
{
    int data;
    struct Node *next;
};


int main()
{
    struct Node *head;
    struct Node *second;

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = NULL;

    printf("%d", head->data);

    return 0;
}