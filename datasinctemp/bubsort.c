#include <stdio.h>
#include <limits.h>
int bubsort(int x[], int low, int high, int a)
{
    if (low > high)
        return INT_MIN;
    int mid = (low + high) / 2;
    if (a == x[mid])
        return mid;
    if (a < x[mid])
        return bubsort(x, low, mid - 1, a);
    else
        return bubsort(x, mid + 1, high, a);
}
int main()
{
    int a[] = {1, 2, 4, 5, 24, 4241};
    int x = 241;
    printf("%d", bubsort(a, 0, sizeof(a) / sizeof(a[0]), x) + 1);
    return 0;
}