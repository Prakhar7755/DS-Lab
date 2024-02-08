#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX 10
typedef struct
{
    int front, rear;
    int queue[MAX];
} Queue;

int isFull(Queue *q);
int isEmpty(Queue *q);

void initalize(Queue *q)
{
    q->front = -1;
    q->rear = -1;
}

void enqueue(Queue *q, int element)
{
    if (isFull(q))
    {
        printf("Overflow\n");
        exit(1);
    }
    if (isEmpty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else
        q->rear = q->rear + 1;

    q->queue[q->rear] = element;
}

int dequeue(Queue *q)
{
    if (isEmpty(q))
    {
        printf("Underflow\n");
        return -1;
    }
    int element = q->queue[q->front];
    if (q->front == q->rear)
    {
        q->rear = -1;
        q->front = -1;
    }
    else
    {
        q->front++;
    }
    return element;
}
void display(Queue *q)
{
    printf("Queue:\t");
    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d\t", q->queue[i]);
    }
    printf("\n");
}
int isEmpty(Queue *q)
{
    return (q->front == -1 && q->rear == -1);
}

int isFull(Queue *q)
{
    return (q->rear == MAX - 1);
}

void main()
{
    Queue q;
    initalize(&q);

    enqueue(&q, 7);
    enqueue(&q, 8);
    enqueue(&q, 9);
    enqueue(&q, 10);
    display(&q);

    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
    printf("Dequeued element: %d\n", dequeue(&q));
    display(&q);
}