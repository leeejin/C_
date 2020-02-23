#include <stdio.h>
struct employee_info
{
 char name[7];
 char id[10];
 int salary;
};
int main()
{
 struct employee_info employee[5];
 int average = 0, sum = 0, i;
 printf(">> 직원의 정보(이름, ID,급여)를 입력하세요.<<\n");
 for (i = 0; i < 5; i++){
  printf("%d번:", i + 1);
  scanf("%s %s %d", employee[i].name, employee[i].id, &employee[i].salary);
  sum += employee[i].salary;
 }
 average = sum / 5;
 printf(" 급여가 %d만원(평균) 이상인 직원 정보 \n", average);
 for (i = 0; i < 5; i++)
 {
  if (employee[i].salary >= average)
  {
   printf("\t%s\t%d만원 \n", employee[i].id, employee[i].salary);
  }
 }
 return 0;
} 