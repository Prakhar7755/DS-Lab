#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    int top;
    char* arr[MAX];
} Stack;

void init(Stack *s) {
    s->top = -1;
}

void push(Stack *s, char* str) {
    if (s->top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    s->top++;
    s->arr[s->top] = str;
}

char* pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack underflow\n");
        return NULL;
    }
    char* data = s->arr[s->top];
    s->top--;
    return data;
}

int isOperator(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/') {
        return 1;
    }
    return 0;
}

char* postfixToInfix(char* postfix) {
    Stack s;
    init(&s);

    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isOperator(postfix[i])) {
            char* op2 = pop(&s);
            char* op1 = pop(&s);
            char* temp = (char*)malloc((strlen(op1) + strlen(op2) + 3) * sizeof(char));
            sprintf(temp, "(%s%c%s)", op1, postfix[i], op2);
            push(&s, temp);
        } else {
            char* temp = (char*)malloc(2 * sizeof(char));
            sprintf(temp, "%c", postfix[i]);
            push(&s, temp);
        }
    }

    return pop(&s);
}

int main() {
    char postfix[MAX];
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    char* infix = postfixToInfix(postfix);
    printf("The infix expression is: %s\n", infix);

    return 0;
}
