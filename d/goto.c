#include<stdio.h>
#include<math.h>
void main()
{
float x,y,count=1;
printf("\nEnter five real numbers\n");
read:scanf("%f",&x);
if(x<0)
{
printf("-ve number");
goto neg;
}
else
{
y=sqrt(x);
printf("x=%f\tsqrt(x)=%f",x,y);
}
neg:count++;
if(count<=5)
goto read;
}
