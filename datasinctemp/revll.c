#include <stdio.h>
#define null NULL
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = null;
void insert(int data)
{
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp->data = data;
    tmp->next = head;
    head = tmp;
}
int display()
{
    node *ptr = head;
    int length = 0;
    while (ptr)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
        length++;
    }
    printf("\n");
    return length;
}
void reverse()
{
    node *prev = NULL;
    node *curr = head;
    node *next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    head=prev;
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    display(head);
    reverse(head);
    display(head);
    return 0;
}