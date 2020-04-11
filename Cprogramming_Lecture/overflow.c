#include <stdio.h>
#include <limits.h>
//프로그램의 입출력의 라이브러리를 담은 함수
//overflow 공부
int main()
{
	short s_money = SHRT_MAX; //최대값으로 초기화한다. 32767
	unsigned short u_money = USHRT_MAX;// 최대값으로 초기화한다. 65535
	s_money = s_money + 1;
	printf("s_money = %d \n", s_money);
	u_money = u_money + 1;
	printf("u_money= %d", u_money);
	return 0;
}