#include <stdio.h>
#include <assert.h>
int main(void)
{
    // int x = -1;
    // assert(x >= 0);
    // printf("x = %d\n", x);
    void *p;
    assert(p != NULL && "function f: p cannot be NULL");
    return 0;
}