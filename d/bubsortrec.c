#include <stdio.h>
int * bubsort(int ar[],int n);
int main()
{
    int *x,num[6]={3,4,324,2,414,514}, min, n=6, temp,
    x=bubsort(num,n);
    printf("the sorted array is ");
    for(int i=0;i<n;i++)
    printf("%d",num[i]);

    return 0;
}
int * bubsort(int ar[],int n)
{
    int t,*p;
    for (int j = 0; j < n ; j++)
    {
        for (int k = 0; k < n-j-1; k++)
        {
            if (ar[k] > ar[k+1])
            {
                t=ar[k];
                ar[k]=ar[k+1];
                ar[k+1]=t;
            }

        }  
         
    }
    *p=ar;
    return ar;
}
void printarr(int narr[],int na)
{
    for(int i=0;i<na;i++)
    printf("%d",narr[i]);
}