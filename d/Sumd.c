#include<stdio.h>
#include<math.h>
#include <stdbool.h> 
int main()
{
    int a[100],n,sum=0;
    printf("\nEnter number of numbers ");
    scanf("%d",&n);
    printf("\nenter all numbers in the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int j=0;j<n;j++)
    {
        sum=sum+a[j];
    }
    printf("\nthe sum  is  %d\n",sum);
    return 0;
    
}