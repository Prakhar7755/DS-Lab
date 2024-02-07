#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define max 100

typedef struct
{
    int top;
    char stack[max];
} Stack;

void push(Stack *s, char element)
{
    if (s->top == max - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->stack[s->top] = element;
}

char pop(Stack *s)
{
    if (s->top = -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    char element = s->stack[s->top];
    s->top--;
    return element;
}

bool isBalanced(char *exp)
{
    Stack s;
    s.top = -1;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(&s, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (pop(&s) == '\0')
            {
                return 0;
            }
        }
    }

    if (s.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


int main() {
    char expression[max];

    printf("Enter an expression: ");
    fgets(expression, max, stdin);

    // Remove the newline character from the input
    expression[strcspn(expression, "\n")] = '\0';

    if (isBalanced(expression)) {
        printf("Parentheses are balanced.\n");
    } else {
        printf("Parentheses are not balanced.\n");
    }

    return 0;
}