#include <stdio.h>
#include <stdlib.h>
#define null NULL
typedef struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node *root;

Node *insert(Node *temp, int data)
{
    if (temp == null)
    {
        Node *link = malloc(sizeof(Node));
        link->data = data;
        return link;
    }
    else
    {
        if (data > temp->data)
            temp->right = insert(temp->right, data);
        else
            temp->left = insert(temp->left, data);
    }
    return temp;
}

void inorder(Node *temp)
{
    if (temp != null)
    {
        inorder(temp->left);
        printf("%d \n", temp->data);
        inorder(temp->right);
    }
}

void replaceWithPS(Node *temp)
{
    if (temp != null)
    {
        replaceWithPS(temp->left);
        temp->data;
        replaceWithPS(temp->right);
    }
}
int main()
{
    root = insert(root, 10);
    insert(root, 20);
    insert(root, 30);
    insert(root, 40);
    insert(root, 50);
    inorder(root);
    return 0;
}