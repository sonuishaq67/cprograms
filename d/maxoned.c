#include<stdio.h>
#include<math.h>
#include <stdbool.h> 
int main()
{
    int a[100],n,max;
    printf("\nEnter number of numbers ");
    scanf("%d",&n);
    printf("\nenter all numbers in the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    printf("\nvalue of a[0],a[1] is %d %d\n",a[0],a[1]);
    for(int j=1;j<n;j++)
    {
    if(a[j]>max)
    max=a[j];
    }
    printf("\nthe max is  %d\n",max);
    return 0;
    
}