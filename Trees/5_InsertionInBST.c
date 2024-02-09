//  NO DUPLICATES ALLOWED IN BST
//  MOSTLY SIMILAR TO SEARCHING IN BST
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
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}
void insertHarry(Node *root, int key)
{
    Node *prev = NULL;
    while (root != NULL)
    {
        prev = root; // this will update the prev before root updation
        if (key == root->data)
        {
            return;
        }
        else if (key < root->data)
        {
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    Node *n = createNode(key);

    if (prev->data > key)
        prev->left = n;
    else
        prev->right = n;
}
void insert(Node *root, int key)
{
    Node *prev = NULL, *ptr = root;
    Node *ans = createNode(key);
    while (ptr != NULL)
    {
        if (key == ptr->data)
        {
            printf("Can't have duplicats keys");
            return;
        }
        else if (key < ptr->data)
        {
            prev = ptr;
            ptr = ptr->left;
        }
        else
        {
            prev = ptr;
            ptr = ptr->right;
        }
    }
    // linking the nodes
    if (prev->data > key)
        prev->left = ans;
    else
        prev->right = ans;
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

    printf("\n\n");
    inorder(root);
    printf("\n\n");

    insert(root, 10);

    printf("\n\n");
    inorder(root);
    printf("\n\n");

    insert(root, 2); // INSERTING THE NODE

    printf("\n\n");
    inorder(root);
    printf("\n\n");

    insertHarry(root, 7);

    printf("\n\n");
    inorder(root);
    printf("\n\n");

    insertHarry(root, 33); // INSERTING THE NODE

    printf("\n\n");
    inorder(root);
    printf("\n\n");
}
/*
1	3	4	5	6



1	3	4	5	6	10



1	2	3	4	5	6	10



1	2	3	4	5	6	7	10



1	2	3	4	5	6	7	10	33
*/