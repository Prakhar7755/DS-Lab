#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
// 2    CONCATENATE 2 STRINGS
void concatenateLL(struct Node **head1, struct Node **head2)
{
    if (*head1 == NULL)
        *head1 = *head2;
    else
    {
        struct Node *temp = *head1;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = *head2;
    }
}

void display(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

void insertAtEnd(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct Node *ptr = *head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
    }
}

void main()
{
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;
    insertAtEnd(&head1, 1);
    insertAtEnd(&head1, 2);
    insertAtEnd(&head1, 3);
    insertAtEnd(&head1, 4);

    insertAtEnd(&head2, 8);
    insertAtEnd(&head2, 9);
    insertAtEnd(&head2, 10);
    insertAtEnd(&head2, 11);

    concatenateLL(&head1,&head2);
    display(head1);
}