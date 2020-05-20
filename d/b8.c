#include<stdio.h>
int main()
{
	float perc;
	printf("ENTER YOUR PERCENTAGE\n");
	scanf("%f",&perc);	
	if(perc>90)
	printf("You got S GRADE\n");
	else if(perc>80)
	printf("You got A GRADE\n");
	else if(perc>780)
        printf("You got B GRADE\n");
	else if(perc>60)
        printf("You got C GRADE\n");
    	else if(perc>50)
        printf("You got D GRADE\n");
	else if(perc>40)
        printf("You got E GRADE\n");
	else 
	printf("You got F GRADE\n");
	return 0;
}
