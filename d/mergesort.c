#include<stdio.h>
int mergesort(int[], int, int);
int merge(int[], int, int, int);
void print(int[], int);
int main()
{
    int a[] = {17, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int l = 0, size = sizeof(a) / sizeof(a[0]);
    mergesort(a, 0, size - 1);
    print(a, size);
}
int mergesort(int ar[], int l, int r)
{
    int m;
    if (l < r)
    {
        m = (l + r) / 2;
        mergesort(ar, l, m);
        mergesort(ar, m + 1, r);
        merge(ar, l, m, r);
    }


}
int merge(int ar[], int l, int m, int r)
{
    int L[100], R[100];
    int i, j, n1 = m - l + 1, n2 = r - m, k = l;
    for (i = 0; i < n1; i++)
        L[i] = ar[l + i];
    for (j = 0; j < n2; j++)
        R[j] = ar[m + 1 + j];
    i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            ar[k] = L[i];
            i++;
        }
        else
        {
            ar[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        ar[k] = L[i];
        i++, k++;
    }
    while (j < n2)
    {
        ar[k] = R[j];
        j++, k++;
    }
}
void print(int A[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}
