#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

Node *top = NULL;

int isEmpty()
{
    return top == NULL;
}

void push(int value) // PUSH IS LIKE ADDING NODE IN BEGINNIG
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Stack Overflow\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return -1;
    }
    int x = top->data;
    Node *ptr = top;
    top = top->next;
    free(ptr);
    return x;
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return;
    }
    Node *ptr = top;
    printf("Stack:\t");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int main(void)
{
    // Node *Stack = NULL;
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    pop();
    display();

    return 0;
}

/* 

Stack:  40      30      20      10

Stack:  20      10 

*/