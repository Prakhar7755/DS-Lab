// CHECKING IF THE TREE IS BST OR NOT
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

void inorder(Node *root)
{
    if (root)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}
int isBST(Node *root)           // trying to mimic the inorder traversal
{
    static Node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
            return 0;

        if (prev != NULL && root->data <= prev->data)
            return 0;

        prev = root;
        return isBST(root->right);
    }

    return 1;
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

    inorder(root);
    printf("\n");

    // printf("%d", isBST(root));
    if (isBST(root))
    {
        printf("YES THIS IS A BST");
    }
    else
    {
        printf("NOT A BST");
    }
}
