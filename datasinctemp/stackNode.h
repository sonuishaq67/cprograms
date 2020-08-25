#include <stdio.h>
#define SIZE 50
int top = -1;

typedef struct Node
{
    char value;
    Node *left, *right;
} Node;
Node stack[SIZE];
void push(Node item)
{
    if (top >= SIZE - 1)
    {
        printf("stack over flow");
        return;
    }
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}
Node pop()
{
    Node item;
    if (top < 0)
    {
        printf("stack under flow");
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
}