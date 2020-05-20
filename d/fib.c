#include<stdio.h>
int main()
{
   long int x=80,fib1=0,fib2=1,temp;
    for(int i=0;i<80;i++)
    {
        temp=fib1+fib2;
        fib1=fib2;
        fib2=temp;
        printf("%ld ",fib2);
    }
    return 0;
}