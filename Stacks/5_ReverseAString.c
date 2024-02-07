#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct
{
    int top;
    char stack[MAX_SIZE];
} Stack;

void push(Stack *s, char element)
{
    if (s->top == MAX_SIZE - 1)
    {
        printf("Stack Overflow!\n");
        return;
    }
    s->top++;
    s->stack[s->top] = element;
}

char pop(Stack *s)
{
    if (s->top == -1)
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    char element = s->stack[s->top];
    s->top--;
    return element;
}

void reverseString(char *str)
{
    int len = strlen(str);
    Stack stack;
    stack.top = -1;

    // Push each character onto the stack
    for (int i = 0; i < len; i++)
    {
        push(&stack, str[i]);
    }

    // Pop each character and overwrite the original string
    for (int i = 0; i < len; i++)
    {
        str[i] = pop(&stack);
    }
}

int main()
{
    char str[MAX_SIZE];

    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);

    // Remove the newline character from the input
    str[strcspn(str, "\n")] = '\0';

    // Reverse the string
    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}