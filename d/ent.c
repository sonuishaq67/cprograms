#include<stdio.h>
int main()
{
	int a,b,a1,b1,r=0,gcd,lcm;
	scanf("%d%d",&a,&b);
	a1=a;
	b1=b;
	do
	{
		r=a1%b1;
		a1=b1;
		b1=r;
	}while(b1!=0);
	gcd=a1;
	lcm=a*b/gcd;
	printf("gcd=%d\nlcm=%d",gcd,lcm);
}
