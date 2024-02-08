#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

typedef struct
{
    Node *front;
    Node *rear;
} Queue;

int isEmpty(Queue *q)
{
    return (q->front == NULL && q->rear == NULL);
}
int size(Queue *q)
{
    int count = 0;
    Node *ptr = q->front;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("\nThe size is %d\n", count);
    return count;
}
void display(Queue *q)
{
    Node *ptr = q->front;
    printf("-----------------\n");
    printf("Queue:\t");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
    printf("\n-----------------\n");
}

void initialize(Queue *q)
{
    q->front = NULL;
    q->rear = NULL;
}

void enqueue(Queue *q, int element)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = element;
    newNode->next = NULL;

    if (isEmpty(q))
    {
        q->front = newNode;
        q->rear = newNode;
    }
    else
    {
        q->rear->next = newNode;
        q->rear = newNode;
    }
}

int dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("UNDERFLOW\n");
        return -1;
    }
    Node *ptr = q->front;
    int element = ptr->data;

    if (q->front == q->rear)
    {
        q->front = NULL;
        q->rear = NULL;
    }
    else
    {
        q->front = q->front->next;
    }
    free(ptr);
    printf("\n%d dequeued\n", element);
    return element;
}
Queue *reverse(Queue *q, int size)
{
    int arr[size];
    Queue *q2 = (Queue *)malloc(sizeof(Queue));
    initialize(q2);

    for (int i = 0; i < size; i++)
    {
        arr[size - i-1] = dequeue(q);
    }
    for (int i = 0; i < size; i++)
    {
        enqueue(q2, arr[i]);
    }
    return q2;
}

int main(void)
{
    Queue *q = (Queue *)malloc(sizeof(Queue));
    initialize(q);

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    display(q);
    size(q);
    // dequeue(q);
    // dequeue(q);
    // dequeue(q);
    // dequeue(q);
    // display(q);
    // size(q);

    Queue *q2 = reverse(q, size(q));
    display(q2);

    free(q);

    return 0;
}
5