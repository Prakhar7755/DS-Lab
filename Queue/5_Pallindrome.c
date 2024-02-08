#include <stdio.h>
#include <string.h>

#define MAX 100

char queue[MAX];
int front = 0, rear = -1;

void enqueue(char ch)
{
    if (rear == MAX - 1)
        printf("Queue is full\n");
    else
    {
        queue[++rear] = ch;
    }
}

char dequeue()
{
    if (front > rear)
    {
        printf("Queue is empty\n");
        return '\0';
    }
    else
    {
        return queue[front++];
    }
}

int isPalindrome(char str[])
{
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        enqueue(str[i]);
    }

    for (int i = 0; i < length / 2; i++)
    {
        if (dequeue() != str[length - i - 1])
            return 0;
    }

    return 1;
}

int main()
{
    char str[MAX];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str))
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

    return 0;
}
