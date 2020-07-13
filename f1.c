#include <stdio.h>
int main()
{
    FILE *p1, *p2, *p3;
    int number, i;
    printf("Contents of a DataFile\n\n");
    p1 = fopen("DATA", "w");
    for (i = 1; i <= 30; i++)
    {
        scanf("%d", &number);
        if (number == -1)
            break;
        putw(number, p1);
    }
    fclose(p1);

    p1 = fopen("DATA", "r");
    p2 = fopen("ODD", "w");
    p3 = fopen("EVEN", "w");
    while ((number = getw(p1)) != EOF)
    {
        if (number % 2 == 0)
            putw(number, p3);
        else
            putw(number, p2);
    }
    fclose(p1);
    fclose(p2);
    fclose(p3);
    printf("THE ODD NUMBERS ARE..\n");
    p2 = fopen("ODD", "r");
    while ((number = getw(p2)) != EOF)
        printf("%4d", number);
    fclose(p2);
    printf("\nTHE EVEN NUMBERS ARE..\n");
    p2 = fopen("EVEN", "r");
    while ((number = getw(p2)) != EOF)
        printf("%4d", number);
    fclose(p2);
    return 0;
}