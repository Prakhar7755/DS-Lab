//                             LINKEDLIST REPRESENTATION
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *createNode(int value)
{
    // creating node ptr and allocation the heap memory
    Node *n = (Node *)malloc(sizeof(Node));
    // inserting data
    n->data = value;
    // Initalizing the left and right ptr
    n->left = NULL;
    n->right = NULL;
    // returning the created node
    return n;
}

void main()
{
    //  CONSTRUCTING THE NODE USING FUNCTION
    Node *root = createNode(2);
    Node *p2 = createNode(1);
    Node *p3 = createNode(4);

    // LINKING THE NODE
    root->left = p2;
    root->right = p3;
}

/*
void main()
{
    Node *root = (Node *)malloc(sizeof(Node)); // ROOT
    root->data = 2;
    root->left = NULL;
    root->right = NULL;

    Node *p2 = (Node *)malloc(sizeof(Node));
    p2->data = 1;
    p2->left = NULL;
    p2->right = NULL;

    Node *p3 = (Node *)malloc(sizeof(Node));
    p3->data = 4;
    p3->left = NULL;
    p3->right = NULL;

    //      LINKING THE LEFT AND RIGHT CHILD WITH ROOT
    root->left = p2;
    root->right = p3;
}
*/
