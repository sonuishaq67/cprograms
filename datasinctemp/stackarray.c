#include <stdio.h>
#define SIZE 4
int top = -1;
char stack[SIZE];
void push(char element)
{
    if (top == -1)
    {
        stack[SIZE - 1] = element;
        top = SIZE - 1;
    }
    else if (top == 0)
    {
        printf("The stack is already full. \n");
    }
    else
    {
        stack[(top)-1] = element;
        (top)--;
    }
}
void pop()
{
    if (top == -1)
    {
        printf("The stack is empty. \n");
    }
    else
    {
        printf("Element popped: %c \n", stack[top]);
        if ((top) == SIZE - 1)
        {
            (top) = -1;
        }
        else
        {
            (top)++;
        }
    }
}

int peek()
{
    return stack[top] || NULL;
}

void printList()
{
    if(top==-1)
    printf("Stack is empty ");
    else
    {
        printf("The stack consists of...\n");
        for(int i=top;i<SIZE;i++)
        printf("%c ",stack[i]);
    }
    printf("\n");
}

int main()
{

    push('a');
    printf("Pushed: %c\n", stack[top]);
    push('b');
    printf("Pushed: %c\n", stack[top]);
    pop();
    printf("Element on top: %c\n", stack[top]);
    pop();
    printf("Top: %d\n", top);
    pop();
    printList();
    return 0;
}