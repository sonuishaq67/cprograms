#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,*table;
    int size;
    printf("\nWhat is the size of this Table? ");
    scanf("%d",&size);
    printf("\n");
    if((table=(int *)malloc(size*sizeof(int)))==NULL)
    {
        printf("\nNo space Available\n");
        exit(1);
    }
    printf("\nAddress of the first byte is %u\n",table);
    printf("Input table values\n");
    for(p=table;p<table+size;p++)
    scanf("%d",p);
    for(p=table;p<table+size;p++)
    printf("%d is stored at %u\n",*p,p);
    return 0;
}