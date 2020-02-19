#include <stdio.h>
#include <string.h>
#define SIZE 100

struct person{
 char name[7], gender[3];
 int age;
};
void input(struct person ptr[]);
void printf(struct person *ptr);
int count;
int main()
{
 struct person user[SIZE];
 printf("최대 %d명의 사용자 정보를 입력바고 출력합니다 \n", SIZE);
 input(user);
 printf(user);
 return 0;
}
void input(struct person ptr[])
{
 int reply;
 do{
  printf("%2d. 이름은?", count + 1);
  scanf("%s", ptr[count].name);
  printf("성별은(남 또는 여)?");
  scanf("%s", ptr[count].gender);
  printf("나이는?");
  scanf("%d", &ptr[count].age);
  count++;
  if (count == SIZE)
  {
   printf("더 이상 사용자 정보를 입력할 공간이 없습니다.");
   break;
  }
  printf("계속 입력하려면 1, 그만하려면 0을 입력하세요.");
  scanf("%d", &reply);
 } while (reply != 0);
}
void printf(struct person *ptr)
{
 int i;
 printf("이름 성별 나이\n");
 for (i = 0; i < count; i++)
 {
  printf("%s\t%s\t%d\n", (ptr + i)->name, (ptr + i)->gender, (ptr + i)->age);
 }
}