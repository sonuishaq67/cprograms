#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;

node *head;
void initialize()
{
    head = NULL;
}
void push(int value)
{
    node *tmp;
    tmp = malloc(sizeof(node));
    tmp->data = value;
    tmp->next = head;
    head = tmp;
}
int pop()
{
    node *tmp;
    int n;
    tmp = head;
    n = tmp->data;
    head = head->next;
    free(tmp);
    return n;
}

int Top()
{
    return head->data;
}

int isempty()
{
    return head==NULL;
}
{
    if(head == NULL)
    {
        printf("NULL\n");
    }
    else
    {
        printf("%d\n", head -> data);
        display(head->next);
    }
}

int main()
{
    initialize();
    push(10);
    push(20);
    push(30);
    printf("The top is %d\n",Top());
    pop();
    printf("The top after pop is %d\n",Top());
    display(head);
    return 0;
}