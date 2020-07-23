#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head;
struct Node *MakeNode(int x)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void InsertFirst(int x)
{
    struct Node *newNode = MakeNode(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;
}
void InsertLast(int x)
{
    struct Node *temp = head;
    struct Node *newNode = MakeNode(x);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
void PrintForward()
{
    struct Node *temp = head;
    printf("List from Forward: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void PrintReverse()
{
    struct Node *temp = head;
    if (temp == NULL)
        return;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    printf("List from Reverse: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->prev;
    }
    printf("\n");
}

int main()
{

    head = NULL;
    InsertLast(2);
    PrintForward();
    PrintReverse();
    InsertLast(4);
    PrintForward();
    PrintReverse();
    InsertFirst(6);
    PrintForward();
    PrintReverse();
    InsertLast(8);
    PrintForward();
    PrintReverse();
}