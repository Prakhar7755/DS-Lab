#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void deleteNode(struct Node **head, int value)
{
    struct Node *temp = *head;
    struct Node *prev = *head;
    if (temp != NULL && temp->data == value)
    {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != value)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
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
    struct Node *head = NULL;
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);
    display(head);
    deleteNode(&head,3);
    deleteNode(&head,2);
    display(head);

}