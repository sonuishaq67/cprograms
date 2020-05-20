#include<stdio.h>
#include<math.h>
int main()
{
	int x=4,y=0;
while(x>=0)
{
	x--;
	y++;
	if(x==y)
	continue;
	else
	printf("\n %d %d \n",x,y);
}	
	return 0;
}
