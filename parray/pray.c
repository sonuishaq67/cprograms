#include<stdio.h>
main()
{
    int *p,sum=0,i=0,x[5]={5,9,6,3,7};
    p=x;
    printf("element value address\n\n");
    while(i!=5)
    {
        printf("x[%d] %d %u\n",i,*p,p);
        sum=sum+*p;
        i++,p++;
    }
    printf("\n sum=%d\n",sum);
    printf("\n &x[0]=%u\n",&x[0]);
    printf("\np=%u\n",p);
}