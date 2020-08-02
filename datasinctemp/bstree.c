#include <stdio.h>
#include <stdlib.h>
#define null NULL
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *insert(node *temp, int key)
{
    if (temp == null)
    {
        node *tempo = malloc(sizeof(node));
        tempo->data = key;
        tempo->left = null;
        tempo->right = null;
        return tempo;
    }
    if (key > temp->data)
        temp->right = insert(temp->right, key);
    else
        temp->left = insert(temp->left, key);
    return temp;
}
void inorder(node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}
int main()
{

    struct node *root = NULL;
    root = insert(root, 5   0);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    inorder(root);
    return 0;
}