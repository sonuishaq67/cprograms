#include<stdio.h>
long long int fib(int );
static long long int fibn[200];
int main()
{
    int x=100;
   long long int fibx;
fibx=fib(x);
printf("fib of %d is %lld",x,fibx);
return 0;
}
long long int fib(int f)
{
if(f<=1)
fibn[f]=1;
if(fibn[f]==0)
fibn[f]=fib(f-1)+fib(f-2);
return fibn[f];    
}