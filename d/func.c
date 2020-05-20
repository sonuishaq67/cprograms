#include<stdio.h>
float ratio(float,float);
float sumfirst(float,float);
int main()
{
    float y,z,l;
    scanf("%f %f",&y,&z);
    l=sumfirst(y,z);
    printf("\n%f",l);
    return 0;
}
float sumfirst(float a,float b)
{
 int x= ratio(a,b);
 int n= ratio(b,a);
}
float ratio(float l,float m)
{
    return l/m;
}