#include <stdio.h>
struct Student readstudent();
void displaystudent(struct Student);
struct Marks
{
    int eng, phy, chem, math, comp;
};
struct Student
{
    char name[20], rollno[12];
    struct Marks marks;
};

int main()
{
    struct Student S
    ;
    S = readstudent();
    displaystudent(S);
}

struct Student readstudent()
{
    struct Student stu;
    printf("enter name and roll number\n");
    scanf("%[^\n] %[^\n]", stu.name, stu.rollno);
    printf("enter marks in english,phy,chem,math,comp\n");
    scanf("%d%d%d%d%d", &stu.marks.eng, &stu.marks.phy, &stu.marks.chem, &stu.marks.math, &stu.marks.comp);
    return stu;
};
void displaystudent(struct Student X)
{
    printf("the name of the student is %s\nthe roll number is %s\n", X.name, X.rollno);
    printf("marks\neng\t%d\nphy\t%d\nchem\t%d\nmath\t%d\ncomp\t%d\n", X.marks.eng, X.marks.phy, X.marks.chem, X.marks.math, X.marks.comp);
    printf("their percentage is %f", (float)(X.marks.eng + X.marks.phy + X.marks.chem + X.marks.math + X.marks.comp) / 5);
}