#include<stdio.h>
void main()
{
int m,n,m1,n1,gcd,lcm;
printf("two numbers\n");
scanf("%d%d",&m,&n);
m1=m;
n1=n;
do
{
	if(m>n)
		m=m-n;
	else
		n=n-m;
}while(m!=n);
gcd=m;
lcm=m1*n1/gcd;
printf("gcd=%d\n",gcd);
printf("lcm=%d\n",lcm);
}

