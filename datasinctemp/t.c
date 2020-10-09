#include <stdio.h>
#include <stdlib.h>
int test = 0;
typedef struct node
{
    int data;
    struct node *next;
} Node;
Node *create_list()
{
    int n = 10;
    Node *head = NULL, *tail = NULL;

    // scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        Node *temp = malloc(sizeof(Node));
        temp->data = ++test;
        if (!head)
        {
            head = temp;
            tail = temp;
            tail->next = head;
        }
        else
        {
            temp->next = head;
            tail->next = temp;
            tail = temp;
        }
    }
    return head;
}
Node *merge(Node *head1, Node *head2)
{
    Node *itr1 = head1;
    do
    {
        itr1 = itr1->next;
    } while (itr1->next != head1);
    itr1->next = head2;
    Node *itr2 = head2;
    do
    {
        itr2 = itr2->next;
    } while (itr2->next != head2);
    itr2->next = head1;

    return head1;
}
void display(Node *head)
{
    Node *temp = head;
    if (!head)
        printf("Error\n");
    else
    {
        printf("\nPrinting the list\n");
        do
        {
            printf("%d\t", temp->data);
            temp = temp->next;
        } while (temp->next != head);
        printf("%d", temp->data);
    }
}
int main()
{
    struct node *list1 = create_list();
    struct node *list2 = create_list();
    display(list1);
    display(list2);
    Node *head3 = merge(list1, list2);
    display(head3);
    return 0;
}