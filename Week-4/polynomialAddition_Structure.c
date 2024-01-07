// C Program to implement Polynomial Addition through Structure
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Polynomial
{
    int coef;
    int expo;
};

typedef struct Polynomial POLY;

int insert(POLY p[10])
{
    int l, i;
    printf("\nEnter no of terms");
    scanf("%d", &l);
    for (i = 0; i < l; i++)
    {
        printf("\nEnter coeficient & exponentof term %d", i + 1);
        scanf("%d%d", &p[i].coef, &p[i].expo);
    }
    return (l);
}

void display(POLY p[10], int l)
{
    int i;
    printf("\nPolynomial is\n ");
    for (i = 0; i < l - 1; i++)
        printf("%dX^%d+", p[i].coef, p[i].expo);

    printf("%dX^%d", p[i].coef, p[i].expo);
}

int add(POLY p1[10], POLY p2[10], POLY p3[10], int l1, int l2)
{
    int i, j, k;
    i = j = k = 0;

    while (i < l1 && j < l2)
    {
        if (p1[i].expo == p2[j].expo)
        {
            p3[k].coef = p1[i].coef + p2[j].coef;
            p3[k].expo = p1[i].expo;
            i++;
            j++;
            k++;
        }
        else if (p1[i].expo > p2[j].expo)
        {
            p3[k].coef = p1[i].coef;
            p3[k].expo = p1[i].expo;
            i++;
            k++;
        }
        else
        {
            p3[k].coef = p2[j].coef;
            p3[k].expo = p2[j].expo;
            j++;
            k++;
        }
    }

    while (i < l1)
    {
        p3[k].coef = p1[i].coef;
        p3[k].expo = p1[i].expo;
        i++;
        k++;
    }

    while (j < l2)
    {
        p3[k].coef = p2[j].coef;
        p3[k].expo = p2[j].expo;
        j++;
        k++;
    }
    return (k);
}

void main()
{
    POLY p1[10], p2[10], p3[15];
    int l1, l2, l3;
    printf("\nEnter First Polynomial");
    l1 = insert(p1);
    printf("\nEnter Second Polynomial");
    l2 = insert(p2);
    display(p1, l1);
    display(p2, l2);
    l3 = add(p1, p2, p3, l1, l2);
    display(p3, l3);
}