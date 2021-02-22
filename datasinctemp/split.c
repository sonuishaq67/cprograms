#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;

node *head = NULL;
node *head1 = NULL;
node *head2 = NULL;

void insert(int data)
{
    node *temp = malloc(sizeof(node));
    temp->data = data;
    if (!head)
        head = temp;
    else
    {
        temp->next = head;
        head = temp;
    }
}

void split()
{
    if (!head)
    {
        printf("list is empty");
        exit(128);
    }
    node *temp = head;
    head1 = head;
    head2 = head->next;
    node *temp1 = head1;
    node *temp2 = head2;
    while (temp1->next != NULL && temp2->next != NULL)
    {
        temp1->next = temp1->next->next;
        temp2->next = temp2->next->next;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    temp1->next = NULL;
}

void display(node *temp)
{
    printf("displaying : ");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    // insert(10);
    // insert(20);
    // insert(30);
    // insert(40);
    // insert(50);
    // insert(60);
    // insert(70);
    // insert(80);
    // insert(90);
    // insert(100);
    display(head);
    split();
    display(head1);
    display(head2);
    return 0;
}