#include <stdio.h>
void towers(int n, char frompeg, char topeg, char auxpeg);
int main()
{
    int n;
    scanf("%d", &n);
    towers(n, 'A', 'B', 'C');
    return 0;
}
void towers(int n, char frompeg, char topeg, char auxpeg)
{
    if (n == 1)
    {
        printf("\n%s%c%s%c","Move disk 1 from peg ",frompeg," to peg ",topeg);
        return;
    }
    towers(n-1,frompeg,auxpeg,topeg);
    printf("\n%s%d%s%c%s%c","Move disk ",n," from peg ",frompeg," to peg ",topeg);
     towers(n-1,auxpeg,topeg,frompeg);
     printf("\n");
}

