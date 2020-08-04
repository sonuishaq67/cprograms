#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define null NULL
struct Node
{
    int data;
    int key;
    struct Node *next;
};
struct Node *head = null;
struct Node *current = null;

void printList()
{
    struct Node *ptr = head;
    while (ptr != null)
    {
        printf("Key=%d,Data=%d\n", ptr->key, ptr->data);
        ptr = ptr->next;
    }
}

void insertFirst(int key, int data)
{
    struct Node *link = (struct Node *)(malloc(sizeof(struct Node)));
    link->key = key;
    link->data = data;
    link->next = head;
    head = link;
}
void insert(int key, int data)
{
    struct Node *link = (struct Node *)(malloc(sizeof(struct Node)));
    link->key = key;
    link->data = data;
    struct Node *temp = head;
    while (temp->key<key)
    {
    
    }
    
}
struct Node *delete (int key)
{
    struct Node *curr = head;
    struct Node *prev = null;
    if (head == null)
    {
        printf("The list is empty");
        return null;
    }
    while (curr->key != key)
    {
        if (curr->next == null)
            return null;
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
    if (curr == head)
    {
        head = head->next;
    }
    else
    {
        prev->next = curr->next;
    }
    return curr;
}
bool isEmpty()
{
    return head == null;
}

int length()
{
    int length = 0;
    struct Node *temp = head;
    while (temp != null)
    {
        temp = temp->next;
        length++;
    }
    return length;
}
struct Node *find(int key)
{
    struct Node *temp = head;
    while (temp->key != key)
    {
        if (temp->next == null)
        {
            return null;
        }
        else
        {
            temp = temp->next;
        }
    }
    return temp;
}

struct Node *deleteFirst()
{
    struct Node *temp = head;
    head = head->next;
    return temp;
}
void main()
{
    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);
    insertFirst(4, 72);
    insertFirst(5, 40);
    insertFirst(6, 56);

    printf("Original List: ");

    //print list
    printList();

    while (!isEmpty())
    {
        struct Node *temp = deleteFirst();
        printf("\nDeleted value:");
        printf("(%d,%d) ", temp->key, temp->data);
    }

    printf("\nList after deleting all items: ");
    printList();
    insertFirst(1, 10);
    insertFirst(2, 20);
    insertFirst(3, 30);
    insertFirst(4, 72);
    insertFirst(5, 40);
    insertFirst(6, 56);

    printf("\nRestored List: ");
    printList();
    printf("\n");

    struct Node *foundLink = find(4);

    if (foundLink != NULL)
    {
        printf("Element found: ");
        printf("(%d,%d) ", foundLink->key, foundLink->data);
        printf("\n");
    }
    else
    {
        printf("Element not found.");
    }

    delete (4);
    printf("List after deleting an item: ");
    printList();
    printf("\n");
    foundLink = find(4);

    if (foundLink != NULL)
    {
        printf("Element found: ");
        printf("(%d,%d) ", foundLink->key, foundLink->data);
        printf("\n");
    }
    else
    {
        printf("Element not found.");
    }
}