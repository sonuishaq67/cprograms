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
            // if (pow > temp->pow)
            // {
            //     link->next = temp->next;
            //     temp = temp->next; temp->next = link;
            //     break;
            // }
            // else
            //     temp = temp->next;
            if (temp->next == NULL)
            {
                temp->next = link;
                break;
            }
            else
                temp = temp->next;
        }
    }
}
void print()
{
    struct Node *temp = head;
    while (temp->next)
    {
        printf("%dx^%d+",temp->coeff,temp->pow);
        temp = temp->next;
    }
    printf("%dx^%d=0",temp->coeff,temp->pow);
}
int main()
{
    insert(10, 1);
    insert(20, 2);
    insert(30, 3);
    insert(40, 4);

    print();
    return 0;
}