#include <stdio.h>
int main()
{
	int x = 10; //10은 10진수이고 int형이고 값은 십진수로 10
	int y = 010; //010은 8진수이고 int형이고 값은 십진수로 8
	int z = 0x10; //010은 16진수이고 int형이고 값은 십진수로 16
	printf("x= %d", x);
	printf("y= %d", y);
	printf("z= %d", z);
	return 0;
}