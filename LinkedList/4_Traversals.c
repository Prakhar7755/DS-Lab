#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// 5    SEARCH
int searchLL(struct Node *head, int value)
{
    int position = 1;
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == value)
            return position;
        ptr = ptr->next;
        position++;
    }
}

// 4    MAXIMUM ELEMENT
void findMinMax(struct Node *head, int *min, int *max)
{
    if (head == NULL)
    {
        printf("LinkedList is Empty.\n");
        return;
    }
    *min = head->data;
    *max = head->data;
    struct Node *ptr = head->next;
    while (ptr != NULL)
    {
        if (ptr->data < *min)
        {
            *min = ptr->data;
        }
        if (ptr->data > *max)
        {
            *max = ptr->data;
        }
        ptr = ptr->next;
    }
}

// 3    SUM OF ALL ELEMENTS IN A LINKED LIST
int sumLinkedList(struct Node *head)
{
    int sum = 0;
    struct Node *ptr = head;
    while (ptr != NULL)
    {
        sum += ptr->data;
        ptr = ptr->next;
    }
    return sum;
}

// 2    COUNTING NODES
int countNodes(struct Node *head)
{
    struct Node *ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    return count;
}

// 1    DISPLAYING NODES
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
    int min, max;
    struct Node *head = NULL;
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);
    display(head);
    printf("The no. of nodes currently are %d\n", countNodes(head));
    printf("The sum of nodes is %d\n", sumLinkedList(head));
    deleteNode(&head, 3);
    deleteNode(&head, 2);
    display(head);
    printf("The no. of nodes currently are %d\n", countNodes(head));
    printf("The sum of nodes is %d\n", sumLinkedList(head));

    findMinMax(head, &min, &max);
    printf("The min element is %d and the max element is %d", min, max);
}