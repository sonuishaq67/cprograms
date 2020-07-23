#include <stdio.h>
#include <string.h>
int main()
{
char s1[20] = "hello";
char s2[20] = "world";
char s3[20] = "India";
int len= strlen(s1);
printf("Length of string is: %d\n", len);
if (strcmp(s1, s2) ==0)
{
printf("string 1 and string 2 are equal\n");
}
else
{
printf("string 1 and 2 are different\n");
}
if (strncmp(s1, s2, 4) ==0)
{
printf("string 1 and string 2 are equal\n");}
else
{
printf("string 1 and 2 are different\n");
}
strcat(s1,s2);
printf("Output string after concatenation: %s\n", s1);
strncat(s1,s2, 3);
printf("Concatenation using strncat: %s\n", s1);
strcpy(s1,s2);
printf("String s1 is: %s\n", s1);
strncpy(s1,s3, 2);
printf("String s1 is: %s\n", s1);
printf ("Output string is: %s\n", strstr(s2, "wor"));
return 0;
}
