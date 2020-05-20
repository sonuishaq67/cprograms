#include <stdio.h>
int main()
{
    int a[3][3], ta[3][3];
    printf("enter elements of a matrix ");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (int k = 0; k < 3; k++)
        for (int l = 0; l < 3; l++)
            ta[l][k] = a[k][l];
    printf("the first matrix is \n");
    for (int m = 0; m < 3; m++)
    {
        for (int n = 0; n < 3; n++)
            printf("%d ", a[m][n]);
        printf("\n");
    }
    printf("the matrix after transpose is\n");
    for (int o = 0; o < 3; o++)
    {
        for (int p = 0; p < 3; p++)
            printf("%d ", ta[o][p]);
        printf("\n");
    }
}