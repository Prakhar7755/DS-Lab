//                                   SEARCHING IN A BST
// no. of comparisons = h
// height of the tree  log(n) <= (height) <= (n)             [best to worst]

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
    Node *n = (Node *)malloc(sizeof(Node));
    n->data = value;
    n->left = NULL;
    n->right = NULL;
    return n;
}

Node *searchRec(Node *root, int key)
{
    if (root == NULL)
        return NULL;

    if (root->data == key)
        return root;

    else if (root->data > key)
        return searchRec(root->left, key);

    else
        return searchRec(root->right, key);
}
Node *searchItr(Node *root, int key)
{
    while (root != NULL)
    {
        if (key == root->data)
            return root;

        else if (key < root->data)
            root = root->left;

        else
            root = root->right;
    }
    return NULL;
}
void main()
{
    Node *root = createNode(5);
    Node *p1 = createNode(3);
    Node *p2 = createNode(6);
    Node *p3 = createNode(1);
    Node *p4 = createNode(4);
    root->left = p1;
    root->right = p2;
    p1->left = p3;
    p1->right = p4;

    // searchRec(root, 6);
    // --------------------------------------------------------------------
    //      RECURSIVE APPROACH
    Node *n = searchRec(root, 6);

    if (n)
        printf("FOUND: %d\n", n->data);

    else
        printf("NOT FOUND\n");

    // --------------------------------------------------------------------
    //  ITERATIVE APPROACH
    Node *n2 = searchRec(root, 5);

    if (n)
        printf("FOUND: %d\n", n2->data);

    else
        printf("NOT FOUND\n");
}
