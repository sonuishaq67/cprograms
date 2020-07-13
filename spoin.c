#include<stdio.h>
struct invent 
{
    char *name[30];
    int id; 
    float price;
};
int display(struct invent  *);
int read(struct invent  *);
int display(struct invent  *ptr)
{
    printf("output\n");
    int i=0;
    while(i<3)
    {
        printf("%-20s %5d %10.2f\n",ptr->name,ptr->id,ptr->price);
        ptr++,i++;
    }
}
int read(struct invent  *ptr)
{
    for(int i=0;i<3;i++,ptr++)
    {
    printf("\ninput name id and price\n");
    scanf("%s %d %f",ptr->name,&ptr->id,&ptr->price);
    }
}
int main()
{
   struct invent  product[3],*ptr;
    ptr=product;
    read(ptr);
    display(ptr);
    return 0;
}



