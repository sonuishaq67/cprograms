#include<stdio.h>
#include<stdlib.h>    // to use system() function

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    char ch;

    printf("Do you want to shutdown your pc now(y/n)?");
    scanf("%c", &ch);

    if(ch == 'y' || ch == 'Y')
    system("shutdown -P now");

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
