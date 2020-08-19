#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define null NULL
typedef struct Node
{
    char data;
    struct Node *next;
} Node;
Node *head = null;
void insert(char data)
{
    Node *link = malloc(sizeof(Node));
    link->data = data;
    if (head == NULL)
        head = link;
    else
    {
        Node *temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = link;
    }
}
void displayll()
{
    Node *temp = head;
    while (temp)
    {
        printf("%c ", temp->data);
        temp = temp->next;
    }
}
void ifPalindrome()
{
    bool isPalindrome = true;
    char arr[50];
    int i = 0;
    Node *temp = head;
    while (temp)
    {
        arr[i] = temp->data;
        temp = temp->next;
        i++;
    }
    Node *temp1 = head;
    for (i = i - 1; i > -1; i--)
    {
        if (temp1->data != arr[i])
        {
            isPalindrome = false;
            break;
        }
        temp1 = temp1->next;
    }
    if (isPalindrome)
        printf("\nis a palindrome");
    else
        printf("\nis not a palindrome");
}
int main()
{
    insert('a');
    insert('b');
    insert('c');
    insert('c');
    insert('b');
    insert('a');
    displayll();
    ifPalindrome();
    return 0;
}