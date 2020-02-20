#define _CRT_SECURE_NO_WQRNINGS
#include <stdio.h>
#include <string.h>
void cmp(char str[], char str2[]);
void cpy(char str1[], char str2[]);
int main()
{
 char str1[80];
 char str2[80];
 gets(str1);
 gets(str2);
 printf("두 문자열의 크기는 %d,%d \n", strlen(str1), strlen(str2));
 cmp(str1, str2);
 cpy(str1, str2);
}
void cmp(char str1[], char str2[])
{
 if (strcmp(str1, str2) == 0){
  printf("두 문자열을 비교한 결과 같습니다. \n");

 }
 else{
  printf("두 문자열을 비교한 결과 다릅니다. \n");

 }
 return;
}
void cpy(char str1[], char str2[])
{
 printf("두번째 문자열을 첫번째 문자열에 복사한 결과 %s \n", strcpy(str1, str2));
 return;
} 