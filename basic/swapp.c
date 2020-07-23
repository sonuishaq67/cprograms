#include <stdio.h>
int display(int a, int b);
int swapp(int *a, int *b);
int swapp(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 10, b = 20;
    swapp(&a, &b);
    display(a, b);
}
int display(int a, int b)
{
    printf("value of a is %d\n", a);
    printf("value of b is %d\n", b);
}