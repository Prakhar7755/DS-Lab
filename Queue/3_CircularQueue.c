// CIRCULAR QUEUE
#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        return 1;
    return 0;
}
int isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}
void enqueue(int element)
{
    if (isFull())
        printf("Queue is Full !\n");
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\n Inserted -> %d", element);
    }
}

int dequeue()
{
    int element;
    if (isEmpty())
    {
        printf("\nQueue is empty!\n");
        return -1;
    }
    else
    {
        element = items[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front = (front + 1) % SIZE;
        }
        printf("\nDeleted element is %d\n", element);
        return element;
    }
}
void display()
{
    int i;
    if (isEmpty())
        printf("Empty Queue");
    else
    {
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE)
        {
            printf("%d ", items[i]);
        }
        printf("%d ", items[i]);
        printf("\n Rear -> %d \n", rear);
    }
}
int main()
{
    // Fails because front = -1
    dequeue();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);

    // Fails to enqueue because front == 0 && rear == SIZE - 1
    enqueue(6);

    display();
    dequeue();

    display();

    enqueue(7);
    display();

    // Fails to enqueue because front == rear + 1
    enqueue(8);

    return 0;
}