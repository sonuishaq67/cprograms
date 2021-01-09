#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    exit(SIGSEGV);
    printf("HIIIIIIIII");
    return 0;
}
