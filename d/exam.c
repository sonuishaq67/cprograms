#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a=20;
    a=(--a)+(a++);
    printf("%d",a);
    return 0;
}