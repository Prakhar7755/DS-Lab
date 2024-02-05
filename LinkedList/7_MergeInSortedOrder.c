#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
// 3    MERGE TWO SORTED LISTS
struct Node *mergeSortedLists(struct Node *head1, struct Node *head2)
{
    if (head1 == NULL)
        return head2;
    if (head2 == NULL)
        return head1;

    struct Node *mergedList = NULL;
    if (head1->data <= head2->data)
    {
        mergedList = head1;
        mergedList->next = mergeSortedLists(head1->next, head2);
    }
    else
    {
        mergedList = head2;
        mergedList->next = mergeSortedLists(head1, head2->next);
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
    insertAtEnd(&head1, 3);
    insertAtEnd(&head1, 7);
    insertAtEnd(&head1, 22);

    insertAtEnd(&head2, 4);
    insertAtEnd(&head2, 5);
    insertAtEnd(&head2, 10);
    insertAtEnd(&head2, 11);

    struct Node *mergeList = mergeSortedLists(head1, head2);
    display(mergeList);

    // 1 -> 3 -> 4 -> 5 -> 7 -> 10 -> 11 -> 22 -> NULL
}