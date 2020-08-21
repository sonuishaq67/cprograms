#include <stdio.h>
#include <stdlib.h>
#define null NULL
typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
} Node;

Node *head = null;
void insert(int data)
{
    Node *link = malloc(sizeof(Node));
    link->data = data;
    if (head == null)
        head = link;
    else
    {
        if (head->data < data)
        {
            head->prev = link;
            link->next = head;
            head = link;
        }
        else
        {
            Node *temp = head;
            while (temp->next && data < temp->data)
            {
                temp = temp->next;
            }
            temp->next = link;
            link->prev = temp;
        }
    }
}

void display()
{
    Node *temp = head;
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(40);
    insert(30);

    display();
    return 0;
}
