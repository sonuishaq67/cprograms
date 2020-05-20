#include <stdio.h>
#include <string.h>
int main()
{
    int n = 0;
    char str[100],c;
    do
    {
        scanf("%c",&c);
        if(c=='\n')
        continue;
        else
        str[n]=c;
        n++;
    }while(c!='~');
    str[n-1]='\0';
    printf("%s", str);
    return 0;
}