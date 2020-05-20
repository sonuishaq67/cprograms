#include<stdio.h>
int main()
{
	int min,max,count=0;
	printf("enter the range of numbers");
	scanf("%d%d",&min,&max);
	for(int i=min;i<=max;i++)
	{
	count=0;
		for(int j=2;j<=i/2;j++)
	{
		if(i%j==0)
		count++;
	}
		if(i==1)
		printf("1 is neither prime nor composite");
		else if(count<1)
		printf("%d is a prime number\n",i);
		else 
		printf("%d is not a prime number\n",i);

	
	}
	return 0;
}
