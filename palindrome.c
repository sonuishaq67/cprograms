#include<stdio.h>
void main()
{
	int rev=0,rem,num,n;
	printf("enter the number");
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(n==rev)
		printf("given number is palindrome\n");
	else
		printf("not palindrome\n");
}

