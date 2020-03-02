#include <stdio.h>
#include <conio.h>
int main()
{
 int i, arr[10];
 int *ptr;
 ptr = arr;
 for (i = 0; i < 10; i++)
 {
  scanf("%d", &ptr[i]);// scanf_s("%d",iptr+i);, scanf_s("%d",&arr[i]);
 }
 
 for (i = 0; i < 10; i++)
 {
  printf("arr[%d]=%d \n", i, ptr[i]);
 }
 printf("\n");
 printf("");
} 