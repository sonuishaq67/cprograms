#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "stack.h"
bool isOperator(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^')
        return true;
    return false;
}
bool isOperand(char ch){
     if (ch >= '0' && ch <= '9')
        return true; 
    return false;   
}

float convert(char ch)
{
    int value;
    value = ch;
    return (float)(value - 48); 
}
float operation(int a, int b, char op)
{
    if (op == '*')
        return b * a;
    else if (op == '/')
        return b / a;
    else if (op == '+')
        return b + a;
    else if (op == '-')
        return b - a;
    else if (op == '^')
        {
            float ref=1;
            for(int i=0;i<a;i++){
                ref=ref*b;
            }
            return ref;
        }
    else
        return 0;
}
float PostfixEval() 
{
    int a, b; 
    for (int i=top;i<SIZE;i++)
    {
        if (isOperator(stack[i])) 
        {
            a = peek();
            pop();
            b = peek();
            pop();
            push(operation(a, b,stack[i]));
        }
        else if (isOperand(stack[i]))
        {
            push(convert(stack[i])); 
        }
    }
    return peek();
}
int main (){
    // char post[50];
    // printf("Enter a valid postfix Expression: ");
    // scanf("%s",post);
    push('*');
    push('8');
    push('5');
    printf("The evaluation is %f",PostfixEval());
    return 0;
}