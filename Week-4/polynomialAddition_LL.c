// POLY ADDITION USING L-L

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Polynomial
{
    int coef;
    int expo;
    struct Polynomial *Next;
};

typedef struct Polynomial POLY;
POLY *start = NULL, *temp, *newnode;

// CREATING A POLYNOMIAL
POLY *create(POLY *first)
{
    char ch;
    do
    {
        newnode = (POLY *)malloc(sizeof(POLY));
        printf("\nEnter coeficient & exponent");
        scanf("%d%d", &newnode->coef, &newnode->expo);
        if (first == NULL)
            first = temp = newnode;
        else
        {
            temp->Next = newnode;
            temp = newnode;
        }
        printf("\nAnother term y/n?");
        fflush(stdin);
        scanf("%c", &ch);
    } while (ch == 'y');
    temp->Next = NULL;
    return (first);
}

// DISPLAY A POLYNOMIAL
void display(POLY *first)
{
    POLY *ptr;
    ptr = first;
    printf("\n ");
    while (ptr->Next != NULL)
    {
        printf("%dX^%d+", ptr->coef, ptr->expo);
        ptr = ptr->Next;
    }
    printf("%dX^%d", ptr->coef, ptr->expo);
}

// ADDING THE POLYNOMIAL

POLY *add(POLY *p1, POLY *p2)
{
    POLY *p, *q, *p3;
    p3 = NULL;
    while (p1 != NULL && p2 != NULL)
    {
        p = (POLY *)malloc(sizeof(POLY));
        if (p1->expo == p2->expo)
        {
            p->coef = p1->coef + p2->coef;
            p->expo = p1->expo;
            p1 = p1->Next;
            p2 = p2->Next;
        }
        else if (p1->expo > p2->expo)
        {
            p->coef = p1->coef;
            p->expo = p1->expo;
            p1 = p1->Next;
        }
        else
        {
            p->coef = p2->coef;
            p->expo = p2->expo;
            p2 = p2->Next;
        }
        if (p3 == NULL)
            p3 = q = p;
        else
        {
            q->Next = p;
            q = p;
        }
    }

    while (p1 != NULL)
    {
        p = (POLY *)malloc(sizeof(POLY));
        p->coef = p1->coef;
        p->expo = p1->expo;
        p1 = p1->Next;
        q->Next = p;
        q = p;
    }

    while (p2 != NULL)
    {
        p = (POLY *)malloc(sizeof(POLY));
        p->coef = p2->coef;
        p->expo = p2->expo;
        p2 = p2->Next;
        q->Next = p;
        q = p;
    }
    q->Next = NULL;
    return (p3);
}

void main()
{
    POLY *p1, *p2, *p3;
    p1 = p2 = p3 = NULL;
    printf("\nEnter First Polynomial");
    p1 = create(p1);
    printf("\nEnter Second Polynomial");
    p2 = create(p2);
    printf("\nYour first polynomial");
    display(p1);
    printf("\nYour second polynomial");
    display(p2);

    printf("Their sum is -");
    p3 = add(p1, p2);
    display(p3);
}