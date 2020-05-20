#include<stdio.h>
#include<math.h>
void main()
{
float x[5],res[5];
for(int i=0;i<5;i++)
scanf("%f",&x[i]);
for(int j=0;j<5;j++)
{res[j]=sqrt(x[j]);
goto sqr;
sqr:
printf("the square root of %4.2f is %f\n",x[j],res[j]);}
}
