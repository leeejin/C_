#include <stdio.h>

int add(int first, int second)
{
 int sum;
 sum = first + second;
 return sum;
}
int sub(int first, int second)
{
 int xum;
  xum = first - second;
 return xum;
}
int main()
{
 int n1, n2;
 printf("n1와 n2를 입력하시오");
 scanf("%d%d", &n1, &n2);
 int hap = add(n1, n2);
 int cha = sub(n1, n2);
 printf("두수의 합은 : %d \n 두수의 차는 : %d", hap, cha);
}