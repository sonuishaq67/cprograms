#include<stdio.h>
void main()
{
int a,b,r1,r2,gcd,lcm,r;
printf("\nEnter values=");
scanf("%d%d",&a,&b);
r1=a;r2=b;
do
{
r=a%b;
a=b;
b=r;
}while(b!=0);
gcd=a;
lcm=(r1*r2)/a;
printf("\nGCD=%d",gcd);
printf("\nLCM=%d",lcm);
}
