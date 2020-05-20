#include <stdio.h>
main()
{
    int a, b, *p1, *p2, x, y, z;
    a = 12, b = 4;
    p1 = &a, p2 = &b;
    x = *p1 * *p2 - 6;
    y = 4 * -*p2 / *p1 + 10;
    printf("address of a is %u %u\n", &a, p1);
    printf("address of b is %u %u", &b, p2);
    printf("\n");
    printf("a=%d,b=%d\n", a, b);
    printf("x=%d,y=%d\n", x, y);
}