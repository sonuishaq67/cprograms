#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int num[6]={3,4,324,2,414,514}, minIndex, n, temp;
    for (int j = 0; j < 6 - 1; j++)
    {
        minIndex = j;
        for (int k = j; k < 6; k++)
        {
            if (num[minIndex] > num[k])
                minIndex = k;
        }
        temp = num[j];
        num[j] = num[minIndex];
        num[minIndex] = temp;
    }
    printf("the sorted array is ");
    for (int z = 0; z < 6; z++)
        printf("%d ", num[z]);
    return 0;
}