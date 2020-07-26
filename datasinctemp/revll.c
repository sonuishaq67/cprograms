#include <stdio.h>
#define null NULL

struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head = null;
node *temp = null;
node *curr = null;
node *head2 = null;

void insert(int data)
{
    node *tmp;
    tmp=malloc(sizeof(node));
    tmp->data=data;
    tmp->next=head;
    head=temp;
}

int main()
{
}