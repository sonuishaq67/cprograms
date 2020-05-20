#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int read(int *);
int *show(int *);
int bubsort(int *,int );
int main()
{
    int *ptr,n;
    n=read(&ptr);
    ptr=bubsort(&ptr,n);
    show(&ptr);
    return 0;
}
int read(int *ptr)
{
    int n,ar[100];
printf("enter the length of the array\n");
    scanf("%d",&n);
printf("enter the elements of the array");
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);
ptr=ar;
return ptr;
}
int *show(int *ptr)
{
    int q[100],i=0;
    q[0]=ptr;
        printf("the sorted array is ");
    for (ptr; *ptr!='\0';ptr++)
        { 
           printf("%d ",*ptr);
        }

}
int bubsort(int *ptr,int n)
{
    int num[100],temp;
    for (int j = 0; j < n-1 ; j++)
    {
        for (int k = 0; k < n-j-1; k++)
        {
            if (num[k] > num[k+1])
            {
                temp=num[k];
                num[k]=num[k+1];
                num[k+1]=temp;
            }

        }       
    }
    return ptr;
}