#include <stdio.h>
#include<stdlib.h>
#include<string.h>
const char* onescomp(int binaryForm)
{
	int i=0,binArr[8];
	char output[9]={"s"};
	for(i=7;i>=0;i--)
	{
		binArr[i] =binaryForm%10;
		binaryForm/=10;
	}
	for(i=0;i<8;i++)
	{
		if(binArr[i]==0)
		binArr[i]=1;
		else if (binArr[i]==1)
		binArr[i]=0;
		else
		{
			printf("the binary form is wrong exitting program.....");
			exit(0);
		}
	}
	for(i=0;i<8;i++)
	{
		strncat(output,&binArr[i],1);
	}
	return output;
}

void main()
{
	int binNum;
	printf("input the binary number  ");
	scanf("%d", &binNum);
	printf("%s",onescomp(binNum));
}
