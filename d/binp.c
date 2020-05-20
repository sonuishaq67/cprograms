#include <stdio.h>
#include <math.h>
int *binsrch(int *, int, int, int);
int main()
{
    int ar[10] = {1, 11, 23, 44, 54, 67, 72, 83, 94, 104};
    int min = 0, max = 9, mid, num = 27, temp = 0, pos = -1;
    binsrch(ar, min, max, num);
    for (int i = 0; i < 10; i++)
    {
        if (num == ar[i])
        {
            pos = i + 1;
            break;
        }
    }
    if (pos==-1)
    printf("not found");
    else
    printf("found");
    return 0;
}
        int *binsrch(int *ar, int min, int max, int num)
    {
        int mid = (min + max) / 2, pos;
        while (min <= max)
        {
            mid = (min + max) / 2;
            if (num > ar[mid])
                min = mid + 1;
            else if (num < ar[mid])
                max = mid - 1;
            else
            {
                pos = mid + 1;
                break;
            }
        }
        return ar;
    }