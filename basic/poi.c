#include<stdio.h>
int main()
{
    int *p,h=20;
    p=&h;
    printf("address of h is %u and address of p is %u and %d",&h,p,*p);
    return 0;
}