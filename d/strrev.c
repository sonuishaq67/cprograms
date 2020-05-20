#include<stdio.h>
int main()
{
    int i=0;
    char str[100],rev[100];
    scanf("%[^\n]",str);
    for(i;str[i]!='\0';i++);
    for(int j=0;j<i;j++)
    rev[j]=str[i-j-1];
    printf("%s",rev);
return 0;

}