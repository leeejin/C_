#include <stdio.h>

int sumOfRange(int first, int second)
{
 int sum = 0;
 if (first < second)
 {
  for (int i = first; i <= second; i++)
  {
   sum += i;
  }
 }
 return sum;
}
int main()
{
 int n1, n2;
 printf("n1와 n2를 입력하세요 단, n1<n2여야 함");
 scanf("%d%d", &n1, &n2);
 int larger = sumOfRange(n1, n2);
 if (n1 < n2)
 {

  printf("%d부터 %d 까지의 합은: %d", n1, n2, larger);
 }
 else
 {
  printf("n1<n2여야 합니다");
 }
 return 0;
}