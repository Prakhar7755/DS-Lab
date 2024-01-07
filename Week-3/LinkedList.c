// C PROGRAM TO IMPLEMENT A SINGLE LINKED LIST
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node
{
    int info;
    struct Node *next;
};

typedef struct Node NODE;
NODE *start = NULL, *temp, *newnode;

// CREATING A LINKED LIST

NODE *create(NODE *first)
{
    char ch;
    do
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        printf("\nEnter information");
        scanf("%d", &newnode->info);
        if (first == NULL)
            first = temp = newnode;

        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("\nAnother node y/n");
        fflush(stdin);
    } while (ch == 'y');
    temp->next = NULL;
    return first;
}

// DISPLAYING A NEW LINKED LIST

void display(NODE *first)
{
    NODE *ptr;
    ptr = first;
    printf("\n");
    while (ptr != NULL)
    {
        printf("%d\t", ptr->info);
        ptr = ptr->next;
    }
    getch();
}

// INSERT LINK AT THE FIRST LOCATION