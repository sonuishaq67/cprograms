#include <stdio.h>
int main()
{
    int c = 0, v = 0, i = 0;
    char str[100];
    scanf("%s", str);
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            v++;
        else if (str[i] == ' ')
            ;
        else
            c++;
        i++;
    }
    printf("number of consonants is %d \nnumber of vowels is %d ", c, v);
    return 0;
}