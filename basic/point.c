#include<stdio.h>
int *charr(int *x);
int *charr(int *x)
{
 while (*x!='\0')
 {
     *x=*x+10;
     x++;
 }
 
    return x;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=&a[0];
    p=charr(p);

    return 0;
}