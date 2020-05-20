#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int ar[10] = {1, 11, 23, 44, 54, 67, 72, 83, 94, 104};
    int min = 0, max = 9, mid, num = 67, temp = 0, pos = -1;
    while (num != ar[mid])
    {
        mid = (min + max) / 2;
        if (temp > 3)
            break;
        else if (num > ar[mid])
            min = mid;
        else
            max = mid;
        pos = mid + 1;
    }
    if (pos == -1)
        printf("\nthe number %d is not found\n", num);
    else
        printf("the number %d is found at postion %d", num, pos);

    return 0;
}
