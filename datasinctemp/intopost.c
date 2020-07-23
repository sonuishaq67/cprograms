#define SIZE 80
char stack[SIZE];
int top = -1;
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
char infix[SIZE];
char postfix[SIZE];
bool isOperator(char x)
{
   if (x == '+' || x == '-' || x == '*' || x == '/' || x == '^')
      return true;
   return false;
}
int getPrecedence(char x)
{
   if (x == '+' || x == '-')
      return 2;
   else if (x == '*' || x == '/')
      return 3;
   else if (x == '^')
      return 4;
   return -1;
}
void push(char item)
{
   if (top >= SIZE - 1)
   {
      printf("\nStack Overflow.");
   }
   else
   {
      top = top + 1;
      stack[top] = item;
   }
}
char pop()
{
   char item;

   if (top < 0)
   {
      printf("stack under flow: invalid infix expression");
      getchar();
      exit(1);
   }
   else
   {
      item = stack[top];
      top = top - 1;
      return (item);
   }
}
void infixToPostfix(char infix[], char postfix[])
{
   int i, j;
   char item;
   char x;

   push('(');
   strcat(infix, ")");

   i = 0;
   j = 0;
   item = infix[i];

   while (item != '\0')
   {
      if (item == '(')
      {
         push(item);
      }
      else if (isdigit(item) || isalpha(item))
      {
         postfix[j] = item;
         j++;
      }
      else if (isOperator(item))
      {
         x = pop();
         while (isOperator(x) == 1 && getPrecedence(x) >= getPrecedence(item))
         {
            postfix[j] = x;
            j++;
            x = pop();
         }
         push(x);
         push(item);
      }
      else if (item == ')')
      {
         x = pop();
         while (x != '(')
         {
            postfix[j] = x;
            j++;
            x = pop();
         }
      }
      else
      {
         printf("\nInvalid infix Expression.\n");
         getchar();
         exit(1);
      }
      i++;

      item = infix[i];
   }
   if (top > 0)
   {
      printf("\nInvalid infix Expression.\n");
      exit(1);
   }
   if (top > 0)
   {
      printf("\nInvalid infix Expression.\n");
      getchar();
      exit(1);
   }

   postfix[j] = '\0';
}
int main()
{
   char infix[SIZE], postfix[SIZE];
   printf("ASSUMPTION: The infix expression contains single letter variables and single digit constants only.\n");
   printf("\nEnter Infix expression : ");
   gets(infix);
   infixToPostfix(infix, postfix);
   printf("Postfix Expression: ");
   puts(postfix);

   return 0;
}