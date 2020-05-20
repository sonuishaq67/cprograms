#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int num[6]={3,4,324,2,414,514}, min, n, temp;
    for (int j = 0; j < 5 ; j++)
    {
        for (int k = 0; k < 6-j-1; k++)
        {
            if (num[k] > num[k+1])
            {
                temp=num[k];
                num[k]=num[k+1];
                num[k+1]=temp;
            }
        for (int z = 0; z < 6; z++)
        printf("%d ", num[z]);
        printf("\n");

        }       
    }
    printf("the sorted array is ");
    for (int z = 0; z < 6; z++)
        printf("%d ", num[z]);
    return 0;
}