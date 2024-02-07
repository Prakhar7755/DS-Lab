#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10
int stack[MAX_SIZE];

int top = -1;

int isEmpty()
{
    return top == -1;
}
int isFull()
{
    return top == MAX_SIZE - 1;
}
void push(int val)
{
    if (isFull())
    {
        printf("Stack Overflow\n");
        return;
    }
    top++;
    stack[top] = val;
}

int pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\n");
        return -1;
    }
    int x = stack[top];
    top--;
    return x;
}
int peek()
{
    if (isEmpty())
    {
        return -1;
    }
    return stack[top];
}

void printStack()
{
    printf("Stack:\t");
    for (int i = 0; i < top; i++)
    {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}

int main(void)
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    printStack();
    pop();
    printStack();
    pop();
    printStack();
    pop();

    return 1;
}

/*
Stack:	1	2	3	4
Stack:	1	2	3
Stack:	1	2
*/