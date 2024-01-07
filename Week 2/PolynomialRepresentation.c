// C Program to implement Polynomial Addition through Structure
#include <stdio.h>

struct Polynomial
{
    int coef;
    int expo;
};

typedef struct Polynomial POLY;

int insert(POLY p[10])
{
    int l, i;
    printf("Enter no of terms");
    scanf("%d", &l);

    for (i = 0; i < l; i++)
    {
        printf("\nEnter coefficient & exponent of term %d\n", i + 1);
        scanf("%d%d", &p[i].coef, &p[i].expo);
    }
    return (1);
}

void display(POLY p[10], int l)
{
    int i;
    printf("\nPolynomial is \n");
    for (i = 0; i < l - 1; i++)
    {
        printf("%dX^%d + ", p[i].coef, p[i].expo);
    }
    // printf("%dX^%d + ", p[i].coef, p[i].expo);
}

// int add(POLY p1[10]), POLY p2[10]){}
int add(POLY p1[10], POLY p2[10], POLY p3[10], int l1, int l2)
{
    int i, j, k;
    i = j = k = 0;

    while (i < l1 && i < l2)
    {
        if (p1[i].expo == p2[j].expo)
        {
            p3[k].coef = p1[i].coef + p2[j].coef;
        }
    }
}

void main()
{
}