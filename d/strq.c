#include<stdio.h>
int main()
{
    int n=0;
    char c[100];
    scanf("%[^\n]",c);
    for(n=0;c[n]!='~';n++);
    for(int i=0;i<n;i++)
    {
        if(c[i]>=65&&c[i]<=90)
        printf("%c",c[i]);
    }
return 0;
}