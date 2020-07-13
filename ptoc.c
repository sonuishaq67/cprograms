#include<stdio.h>
main()
{
    char name[20],*ptr;
    scanf("%[^\n]",name);
    ptr=name;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
}