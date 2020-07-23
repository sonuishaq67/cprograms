#include<stdio.h>
int main()
{
    FILE *fp;
    int number,quantity,i;
    float price,value;
    char item[10],filename[10];
    printf("Input File Name\n");
    scanf("%s",filename);
    fp=fopen(filename,"a");
    printf("Input Inventory Data\n\n");
    printf("ItemName     Number     Price      Quantity\n");
    for(i=0;i<3;i++)
    {
        fscanf(stdin,"%s %d %f %d",item,&number,&price,&quantity);
        fprintf(fp,"%s %d %.2f %d\n",item,number,price,quantity);
    }
    fclose(fp);
    fprintf(stdout,"\n\n");
    fp=fopen(filename,"r");
    printf("ITEMNAME     NUMBER      PRICE    QUANTITY     VALUE\n");
       for(i=0;i<3;i++)
    {
        fscanf(fp,"%s %d %f %d",item,&number,&price,&quantity);
        value=price*quantity;
        fprintf(stdout,"%-8s %7d %8.2f %8d %11.2f\n",item,number,price,quantity,value);

    }
fclose(fp);
return 0;

}