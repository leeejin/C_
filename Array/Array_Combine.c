#include <stdio.h>
#include<string.h>
int main()
{
 char data1[10], data2[10], data3[10];
 int i, j;
 //문자열합치기
 gets(data1);
 gets(data2);
 // data1 배열 복사(널제외)
 i = 0;
 while (data1[i] != '\0'){ //while (data[i]){
  data3[i] = data1[i];
  i++;
 }
 //data3[i] =0;
 //printf("%s\n",data3);
 //data2 배열 복사(널 포함)
 j = 0;
 do{
  data3[i] = data2[j];
  j++;
  i++;
 } while (data2[j - 1]);
 printf("%s+%s=%s\n", data1, data2, data3);
}