int main()
{
    int *p;
    p = bubbleSort();    
    printf("Sorted array: \n");
    printArray(p);
    return 0;
}
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int *bubbleSort()
{

    int i, j, k;
   static int ar[100], n;
    printf("enter the length of the array ");
    scanf("%d", &n);
    printf("enter the elements\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ar[i]);
    for (j = 0; j < n - 1; j++)
        for (k = 0; k < n - j - 1; k++)
            if (ar[k] > ar[k + 1])
                swap(&ar[k], &ar[k + 1]);

    return ar;
}
void printArray(int *p)
{
    for (p;*p!=0;p++)
        printf("%d ", *p);
    printf("\n");
}
