#include<stdio.h>
int main()
{
FILE *f;
char c;
printf("data input  \n");
f=fopen("INPUT","w");
while((c=getchar())!=EOF)
putc(c,f);
fclose(f);
printf("\ndata output  \n");
f=fopen("INPUT","r");
while((c=getc(f))!=EOF)
printf("%c",c);
fclose(f);
return 0;
}