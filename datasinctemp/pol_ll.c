#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};
struct Node *head = NULL;
void insert(int coeff, int pow)
{
    struct Node *link = (struct Node *)(malloc(sizeof(struct Node)));
    link->coeff = coeff;
    link->pow = pow;
    if (head == NULL)
    {
        head = link;
    }
    else
    {
        struct Node *temp = head;
        while (temp)
        {
            if (pow > temp->pow)
            {
                link->next = temp;
            }
            else
                temp = temp->next;
        }
    }
}

int main()
{
    int n = 0;
    while (n != -1)
    {
        printf("Enter two numbers: coeff and power");
        int a, b;
        scanf("%d %d", &a, &b);
        insert(a, b);
    }
}