#include<stdio.h>

// A linked list node
struct Node {
    int data;
    struct Node *next;
};

int main()
{
    struct Node *m1,*m2,*m3;

    // In this program malloc is useless
    // because we know there are 3 structure call
    m1 = (struct Node*)malloc(sizeof(struct Node));
    m2 = (struct Node*)malloc(sizeof(struct Node));
    m3 = (struct Node*)malloc(sizeof(struct Node));

    m1->data = 5;
    m1->next = m2;

    (*m2).data = 10;
    m2->next = m3;

    m3->data = 15;
    m3->next = NULL;

    /*
        m1            m2             m3
        |             |              |
        |             |              |
    +---+---+     +---+---+     +----+----+
    | 5  | o----->| 10 | o----->|15 | NULL|
    +---+---+     +---+---+     +----+----+  */

    return 0;
}    