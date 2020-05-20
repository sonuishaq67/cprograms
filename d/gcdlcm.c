#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,a1,b1,gcd,lcm;
scanf("%d%d",&a,&b);
a1=a,b1=b;
	if(a==b)
	{
	printf("\nTHE GCD AND LCM FOR THIS IS EQUAL AND IS %d",a1);
	exit(0);
	}
	else
	{
		do
		{
		if(a1>b1)
		a1=a1-b1;	
		else
		b1=b1-a1;
		}while(a1!=b1);
	
	}
gcd=a1;
lcm=a*b/gcd;
printf("THE GCD IS %d\nTHE LCM IS %d\n",gcd,lcm);
return 0;
}

