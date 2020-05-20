#include <stdio.h>
union Job
{
   float salary;
   int workerNo;
} j;

int main()
{
   j.salary = 12.3;
   j.workerNo = 100;

   printf("sizeof(j)=%d\nSalary = %.1f\nsizeof(j.salary)=%d\n",sizeof(j),j.salary,sizeof(j.salary));
   printf("Number of workers = %d\nsizeof(j.workerno)=%d\n", j.workerNo,sizeof(j.workerNo));
   return 0;
}
