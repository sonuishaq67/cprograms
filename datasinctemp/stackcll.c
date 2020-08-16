#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *link;
};
struct Node *top;

void push(int data)
{
    struct Node *temp;
    temp = malloc(sizeof(struct Node));
    if (!temp)
    {
        printf("\n Overflow");
        exit(1);
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}
int isEmpty()
{
    return top == NULL;
}
int peek()
{
    if (!isEmpty())
        return top->data;
    else
        exit(1);
}
void pop()
{
    struct Node *temp;
    if (top == NULL)
    {
        printf("\n Underflow\n");
        exit(1);
    }
    else
    {
        temp = top;
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

void display()
{
    struct Node *temp;
    if (top == NULL)
    {
        printf("\nStack Underflow");
        exit(1);
    }
    else
    {
        temp = top;
        printf("The stack is: ");
        while (temp != NULL)
        {
            printf("%d ", temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    printf("The top element is %d\n", peek());
    pop();
    pop();
    pop();
    display();
    printf("The top element is %d\n", peek());
    return 0;
}