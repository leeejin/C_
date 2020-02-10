#include <stdio.h>
void swap_by_pointer(int *first, int *second);
int main()
{
 int n1, n2;
 scanf("%d%d", &n1, &n2);
 printf("함수 호출 전 포인트 정수 %d,%d \n", n1, n2);
 swap_by_pointer(&n1, &n2);
 printf("함수 호출 후 포인트 정수 %d,%d \n", n1, n2);
 return 0;
}
void swap_by_pointer(int *first, int *second)
{
 int temp;
 if (first > second)
 {
  temp = *first;
  *first = *second;
  *second = temp;
 }
 printf("\n(swap_by_pointer 함수의 정렬 결과 : *first:%d, *second: %d)\n\n", *first, *second);
}