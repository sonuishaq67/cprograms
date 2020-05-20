#include <stdio.h>
#include <stdlib.h>

int main()
{
   char num[100];
   FILE *fptr;

   fptr = fopen("program.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }

   printf("Enter num: ");
   scanf("%[^\n]",num);

   fprintf(fptr,"%s",num);
   fclose(fptr);

   return 0;
}
