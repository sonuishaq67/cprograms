#include <stdio.h>
int binsrch(int ar[], int l, int h, int n);
int binsrch(int ar[], int l, int h, int n)
{
    int m = (l + h) / 2;
    m = (l + h) / 2;
    if (n > ar[m])
        return binsrch(ar, m, h, n);
    else if (n < ar[m])
        return binsrch(ar, l, m, n);
    else
        return m;
}
int main()
{
    int ar[10] = {1, 11, 23, 44, 54, 67, 72, 83, 94, 104};
    int min = 0, max = 9, mid, num = 67, pos = -1;
    pos = binsrch(ar, min, max, num);
    if (num!=ar[pos])
        printf("\nthe number %d is not found\n", num);
    else
        printf("the number %d is found at postion %d", num,pos+1);

    return 0;
}