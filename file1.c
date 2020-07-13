#include<stdio.h>
int main()
{
    FILE *p;
    p=fopen("data1.txt","w");
    putc("i",p);
    fclose(p);
    return 0;
}