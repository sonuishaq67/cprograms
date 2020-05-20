#include<stdio.h>
int main()
{
    int a[]={10,45,35,6,3,52,4,3,1,5},j=2,i=1,n,key;
    n=sizeof(a)/sizeof(a[0]);
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>-1 && key<a[i])
        {
            a[i+1]=a[i];
            i--;
        }
    a[i+1]=key;
    }
    for(int x=0;x<n;x++)
    printf("%d ",a[x]);
    return 0;
}