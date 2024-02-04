#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *createLinkedList()
{
    return NULL;
}

void display(struct Node *head)
{
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
}

void insertAtBeginning(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
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

void insertAtPosition(struct Node **head, int value, int position)
{
    struct Node *new = (struct Node *)malloc(sizeof(struct Node));
    new->data = value;
    new->next = NULL;

    if (position == 1 || *head == NULL)
    {
        new->next = *head;
        *head = new;
    }
    else
    {
        struct Node *temp = *head;
        int count = 1;
        while (count < position - 1 && temp->next != NULL)
        {
            temp = temp->next;
            count++;
        }
        new->next = temp->next;
        temp->next = new;
    }
}

void main()
{
    struct Node *head = createLinkedList();

    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    display(head);

    insertAtEnd(&head, 88);
    printf(("\n"));
    display(head);
}