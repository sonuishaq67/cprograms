#include <stdio.h>
#include <ctype.h>
#include "stack.h"
void PostfixEval(char postfix[])
{
    int i;
    char ch;
    int val;
    int A, B;
    for (i = 0; postfix[i] != 'e'; i++) {
        ch = postfix[i];
        if (isdigit(ch)) {
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            A = pop();
            B = pop();

            switch (ch)
            {
            case '*':
                val = B * A;
                break;
            case '/':
                val = B / A;
                break;
            case '+':
                val = B + A;
                break;
            case '-':
                val = B - A;
                break;
            }
            push(val);
        }
    }
    printf("Result of expression evaluation : %d \n", pop());
}
int main()
{
    int i;
    char postfix[SIZE];
    printf(" \nEnter postfix expression,\npress e to end expression ");
    for (i = 0; i <= SIZE - 1; i++) {
        scanf("%c", &postfix[i]);
        if (postfix[i] == 'e') 
        {
            break;
        } 
    }
    PostfixEval(postfix);
    return 0;
}
