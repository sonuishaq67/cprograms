#include <stdio.h>
#include <stdlib.h>
#define null NULL
typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *head;

void insert(int data)
{
    Node *link = malloc(sizeof(Node));
    link->data = data;
    if (head == null)
        head = link;
    else
    {
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = link;
    }
}

void print()
{
    Node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void removeven(Node *temp)
{
    if (temp == NULL)
        return;
    struct Node *node = temp->next;
    if (node == NULL)
        return;
    temp->next = node->next;
    free(node);
    removeven(temp->next);
}
int main()
{
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insert(5);
    insert(6);
    insert(7);
    print();
    removeven(head);
    print();
}