/*
Define a student structure with University Seat Number (USN), name (FirstName, LastName), 
and marks in 3 subjects as members of that structure with nesting. Write a C program to read 
the information for one student and print the same.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct marks
{
	char name[30];
	int marks;
} marks;
typedef struct student
{
	char first_name[20];
	char last_name[20];
	marks studmarks[3];
} student;

int main()
{
	student stud;
	printf("Enter the name of student first name, last name : ");
	scanf("%s %s", stud.first_name, stud.last_name);
	for (int i = 0; i < 3; i++)
	{
		char arraytemp[30];
		printf("\nEnter the name of %d subject : ", i + 1);
		scanf("%s", arraytemp);
		strcpy(stud.studmarks[i].name, arraytemp);
		printf("\nEnter the marks of %d subject : ", i + 1);
		scanf("%d", &stud.studmarks[i].marks);
	}
	printf("The name of the student is %s %s\n", stud.first_name, stud.last_name);
	printf("The marks in each subject are \n");
	for (int i = 0; i < 3; i++)
		printf("%s : %d\n", stud.studmarks[i].name, stud.studmarks[i].marks);
	return 0;
}
