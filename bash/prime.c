#include<stdio.h>
void main()
{
	int i,j,flag,n1,n2,count=0;
	printf("enter the range\n");
	scanf("%d%d",&n1,&n2);
	printf("the prime numbers from %d to  %d are",n1,n2);
	for(i=n1;i<=n2;i++)
	{
		flag=0;
		for(j=2;j<i/2;j++)
			if(i%j==0)
			{
				flag=1;
				break;
			}

		if(flag==0)
		{
			count++;
			printf("%d\t",i);
		}
	}
	printf("the number of prime numbers are %d\n",count);
}
