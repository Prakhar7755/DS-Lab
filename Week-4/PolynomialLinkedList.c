#include <stdio.h>
#include <stdlib.h>
// hello.c

// Structure to represent a Node of the polynomial
struct Node
{
    int coefficient;
    int exponent;
    struct Node *next;
};

// Function to add a Node to the polynomial
void addNode(struct Node **poly, int coeff, int exp)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->coefficient = coeff;
    newNode->exponent = exp;
    newNode->next = NULL;

    if (*poly == NULL)
    {
        *poly = newNode;
    }
    else
    {
        struct Node *temp = *poly;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to display the polynomial
void display(struct Node *poly)
{
    if (poly == NULL)
    {
        printf("Polynomial is empty.\n");
        return;
    }

    struct Node *temp = poly;
    while (temp != NULL)
    {
        printf("%dx^%d", temp->coefficient, temp->exponent);
        temp = temp->next;
        if (temp != NULL)
        {
            printf(" + ");
        }
    }
    printf("\n");
}

// Function to add two polynomials
struct Node *addPolynomials(struct Node *poly1, struct Node *poly2)
{
    struct Node *result = NULL;

    while (poly1 != NULL && poly2 != NULL)
    {
        if (poly1->exponent > poly2->exponent)
        {
            addNode(&result, poly1->coefficient, poly1->exponent);
            poly1 = poly1->next;
        }
        else if (poly1->exponent < poly2->exponent)
        {
            addNode(&result, poly2->coefficient, poly2->exponent);
            poly2 = poly2->next;
        }
        else
        {
            int sum = poly1->coefficient + poly2->coefficient;
            addNode(&result, sum, poly1->exponent);
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
    }

    while (poly1 != NULL)
    {
        addNode(&result, poly1->coefficient, poly1->exponent);
        poly1 = poly1->next;
    }

    while (poly2 != NULL)
    {
        addNode(&result, poly2->coefficient, poly2->exponent);
        poly2 = poly2->next;
    }

    return result;
}

int main()
{
    struct Node *poly1 = NULL;
    struct Node *poly2 = NULL;
    struct Node *result = NULL;

    // Adding Nodes to the first polynomial
    addNode(&poly1, 3, 2);
    addNode(&poly1, 4, 1);
    addNode(&poly1, 2, 0);

    // Adding Nodes to the second polynomial
    addNode(&poly2, 2, 2);
    addNode(&poly2, 3, 1);
    addNode(&poly2, 1, 0);

    printf("First polynomial: ");
    display(poly1);

    printf("Second polynomial: ");
    display(poly2);

    result = addPolynomials(poly1, poly2);

    printf("Sum of the polynomials: ");
    display(result);

    return 0;
}
