#include <stdio.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createLinkedList()
{
    return NULL;
}

void main()
{
    struct Node *head = createLinkedList();

    printf("%d", head->data);
   
}
