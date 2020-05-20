#include<stdio.h>
main()
{
    extern y;
    y=10;
    f();
}
int f()
{
    static int y;
    y=y+10;
    printf("%d",y);
}
int y;