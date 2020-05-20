#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int ar[10] = {1, 11, 23, 44, 54, 67, 72, 83, 94, 104};
    int min = 0, max = 9, mid, num = 27, temp = 0, pos = -1;
    while (min <= max)
    {
        mid = (min + max) / 2;
        if (num > ar[mid])
            min = mid+1;
        else if (num < ar[mid])
            max = mid-1;
        else
        {
            pos = mid + 1;
            break;
        }
    }
    if (pos == -1)
        printf("\nthe number %d is not found\n", num);
    else
        printf("the number %d is found at postion %d", num, pos);

    return 0;
}