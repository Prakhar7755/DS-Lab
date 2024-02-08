#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear =-1;

int isFull()
{
    if(rear == SIZE-1) return 1;
    return 0;
}

int isEmpty()
{
    if(front == -1) return 1;
    return 0;
}

void enQueue(int element)
{
    if(isFull()) printf("\n Queue is full!! \n");
    else
    {
        if(front == -1) front = 0;
        rear++;
        items[rear] = element;
        printf("\n Inserted -> %d", element);
    }
}
int deQueue()
{
    int i;
    int max = 0;
    if(isEmpty()) {
        printf("\n Queue is empty !! \n");
        return(-1);
    } else {
        for(i=0; i<=rear; i++){
            if(items[i] > items[max])
                max = i;
        }
        int element = items[max];
        if (front == rear){
            front = -1;
            rear = -1;
        } 
        else {
            for(i=max; i<rear; i++){
                items[i] = items[i+1];
            }
            rear--;
        }
        printf("\n Deleted element -> %d \n", element);
        return(element);
    }
}
