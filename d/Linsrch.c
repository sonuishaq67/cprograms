#include<stdio.h>
#include<math.h>
#include <stdbool.h> 
int main()
{
    int a[6],n,x,temp;
    bool flag=false;
    printf("\nEnter number of numbers ");
    scanf("%d",&n);
    printf("\nenter all numbers in the array\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("\nenter the number you want to find in the array ");
    scanf("%d",&x);
    for(int j=0;j<n;j++)
    {
        if(x==a[j])
        {
            flag=true;
            temp=j+1;
            break;
        }
    }
    if(flag)
    printf("\nthe number is found in the array at the position %d",temp);
    else
    printf("\nthe number doesnt exist in the array\n");
    return 0;
    
}